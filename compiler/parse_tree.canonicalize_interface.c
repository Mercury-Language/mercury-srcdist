/*
** Automatically generated from `canonicalize_interface.m'
** by the Mercury compiler,
** version rotd-2023-08-15
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


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__canonicalize_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0;

static const MR_EnumFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_functor_desc_are_arities_pfs_known_0_0;

static const MR_EnumFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_functor_desc_are_arities_pfs_known_0_1;

static const MR_EnumFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_ordinal_ordered_are_arities_pfs_known_0[2];

static const MR_EnumFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_name_ordered_are_arities_pfs_known_0[2];

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_are_arities_pfs_known_0[2];

static const MR_PseudoTypeInfo parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_arity_pf_0_0[2];

static const MR_DuArgLocn parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_locns_arity_pf_0_0[2];

static const MR_DuFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_arity_pf_0_0;

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_arity_pf_0_0[1];

static const MR_DuPtagLayout parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_arity_pf_0[1];

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_arity_pf_0[1];

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_arity_pf_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0;

static const MR_PseudoTypeInfo parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_arity_pf_items_0_0[2];

static const MR_ConstString parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_names_arity_pf_items_0_0[2];

static const MR_DuFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_arity_pf_items_0_0;

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_arity_pf_items_0_0[1];

static const MR_DuPtagLayout parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_arity_pf_items_0[1];

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_arity_pf_items_0[1];

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_arity_pf_items_0[1];

static const MR_PseudoTypeInfo parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_pred_or_mode_decl_item_0_0[1];

static const MR_DuFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_pred_or_mode_decl_item_0_0;

static const MR_PseudoTypeInfo parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_pred_or_mode_decl_item_0_1[1];

static const MR_DuFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_pred_or_mode_decl_item_0_1;

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_pred_or_mode_decl_item_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_pred_or_mode_decl_item_0_1[1];

static const MR_DuPtagLayout parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_pred_or_mode_decl_item_0[2];

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_pred_or_mode_decl_item_0[2];

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_pred_or_mode_decl_item_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0;

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

static const MR_FA_TypeInfo_Struct1 parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__canonicalize_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0;

static MR_Word MR_CALL 
parse_tree__canonicalize_interface__IntroducedFrom__func__append_arity_pf__265__1_1_f_0(
  MR_Word LambdaHeadVar__1_16);

static MR_Word MR_CALL 
parse_tree__canonicalize_interface__IntroducedFrom__func__append_arity_pf__264__1_1_f_0(
  MR_Word LambdaHeadVar__1_14);

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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
parse_tree__canonicalize_interface__append_arity_pf_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__canonicalize_interface__append_arity_pf_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__canonicalize_interface__append_arity_pf_3_p_0(
  MR_Word ArityPfItems_4,
  MR_Word STATE_VARIABLE_PredOrModeDeclsCord_0_12,
  MR_Word * STATE_VARIABLE_PredOrModeDeclsCord_13);

static void MR_CALL 
parse_tree__canonicalize_interface__append_pred_related_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__canonicalize_interface__append_pred_related_3_p_0(
  MR_Word PredRelated_4,
  MR_Word STATE_VARIABLE_PredOrModeDeclsCord_0_9,
  MR_Word * STATE_VARIABLE_PredOrModeDeclsCord_10);

static void MR_CALL 
parse_tree__canonicalize_interface__classify_item_mode_decl_3_p_0(
  MR_Word ItemModeDeclInfo_4,
  MR_Word STATE_VARIABLE_PredRelatedMap_0_30,
  MR_Word * STATE_VARIABLE_PredRelatedMap_31);

static void MR_CALL 
parse_tree__canonicalize_interface__classify_item_pred_decl_3_p_0(
  MR_Word ItemPredDeclInfo_4,
  MR_Word STATE_VARIABLE_PredRelatedMap_0_35,
  MR_Word * STATE_VARIABLE_PredRelatedMap_36);

static void MR_CALL 
parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__canonicalize_interface____Unify____pred_or_mode_decl_item_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_or_mode_decl_item_0_0_10001(
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


static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_1[9][3];

static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_2[4][2];

static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_3[4][6];

static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_4[2][5];




static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_1[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_2[3]))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_3[0])),
    ((MR_Box) (parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_3[1])),
    ((MR_Box) (parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_3[2])),
    ((MR_Box) (parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_3[3])),
    ((MR_Box) (parse_tree__canonicalize_interface__append_pred_related_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_4[0])),
    ((MR_Box) (parse_tree__canonicalize_interface__append_arity_pf_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__canonicalize_interface_scalar_common_4[1])),
    ((MR_Box) (parse_tree__canonicalize_interface__append_arity_pf_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_2[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
};

static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_3[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0))
  },
};

static /* final */ const MR_Box parse_tree__canonicalize_interface_scalar_common_4[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0))
  },
};





static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__canonicalize_interface__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__canonicalize_interface__cord__pti_cord_1__plain_parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0) }
};

static const MR_EnumFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_functor_desc_are_arities_pfs_known_0_0 = {
  (MR_String) "some_arities_pfs_are_unknown",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_functor_desc_are_arities_pfs_known_0_1 = {
  (MR_String) "all_arities_pfs_are_known",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_ordinal_ordered_are_arities_pfs_known_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__canonicalize_interface____Unify____are_arities_pfs_known_0_0_10001)),
  ((MR_Box) (parse_tree__canonicalize_interface____Compare____are_arities_pfs_known_0_0_10001)),
  (MR_String) "parse_tree.canonicalize_interface",
  (MR_String) "are_arities_pfs_known",
  { parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_name_ordered_are_arities_pfs_known_0 },
  { parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__enum_ordinal_ordered_are_arities_pfs_known_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_are_arities_pfs_known_0,

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

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_arity_pf_0_0[1] = { &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_arity_pf_0_0 };

static const MR_DuPtagLayout parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_arity_pf_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_arity_pf_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_arity_pf_0[1] = { &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_arity_pf_0_0 };

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_arity_pf_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__canonicalize_interface____Unify____arity_pf_0_0_10001)),
  ((MR_Box) (parse_tree__canonicalize_interface____Compare____arity_pf_0_0_10001)),
  (MR_String) "parse_tree.canonicalize_interface",
  (MR_String) "arity_pf",
  { parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_arity_pf_0 },
  { parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_arity_pf_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_arity_pf_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0) }
};

static const MR_PseudoTypeInfo parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_arity_pf_items_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)
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

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_arity_pf_items_0_0[1] = { &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_arity_pf_items_0_0 };

static const MR_DuPtagLayout parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_arity_pf_items_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_arity_pf_items_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_arity_pf_items_0[1] = { &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_arity_pf_items_0_0 };

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_arity_pf_items_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__canonicalize_interface____Unify____arity_pf_items_0_0_10001)),
  ((MR_Box) (parse_tree__canonicalize_interface____Compare____arity_pf_items_0_0_10001)),
  (MR_String) "parse_tree.canonicalize_interface",
  (MR_String) "arity_pf_items",
  { parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_arity_pf_items_0 },
  { parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_arity_pf_items_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_arity_pf_items_0,

};

static const MR_PseudoTypeInfo parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_pred_or_mode_decl_item_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0) };

static const MR_DuFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_pred_or_mode_decl_item_0_0 = {
  (MR_String) "pomd_pred",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_pred_or_mode_decl_item_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_pred_or_mode_decl_item_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0) };

static const MR_DuFunctorDesc parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_pred_or_mode_decl_item_0_1 = {
  (MR_String) "pomd_mode",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__field_types_pred_or_mode_decl_item_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_pred_or_mode_decl_item_0_0[1] = { &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_pred_or_mode_decl_item_0_0 };

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_pred_or_mode_decl_item_0_1[1] = { &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_pred_or_mode_decl_item_0_1 };

static const MR_DuPtagLayout parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_pred_or_mode_decl_item_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_pred_or_mode_decl_item_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_pred_or_mode_decl_item_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_pred_or_mode_decl_item_0[2] = {
  &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_pred_or_mode_decl_item_0_1,
  &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_pred_or_mode_decl_item_0_0
};

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_pred_or_mode_decl_item_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__canonicalize_interface____Unify____pred_or_mode_decl_item_0_0_10001)),
  ((MR_Box) (parse_tree__canonicalize_interface____Compare____pred_or_mode_decl_item_0_0_10001)),
  (MR_String) "parse_tree.canonicalize_interface",
  (MR_String) "pred_or_mode_decl_item",
  { parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_pred_or_mode_decl_item_0 },
  { parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_pred_or_mode_decl_item_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_pred_or_mode_decl_item_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0) }
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
  (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0),
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

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_pred_related_items_0_0[1] = { &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_pred_related_items_0_0 };

static const MR_DuPtagLayout parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_pred_related_items_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_stag_ordered_pred_related_items_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_pred_related_items_0[1] = { &parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_functor_desc_pred_related_items_0_0 };

static const MR_Integer parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_pred_related_items_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__canonicalize_interface____Unify____pred_related_items_0_0_10001)),
  ((MR_Box) (parse_tree__canonicalize_interface____Compare____pred_related_items_0_0_10001)),
  (MR_String) "parse_tree.canonicalize_interface",
  (MR_String) "pred_related_items",
  { parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_name_ordered_pred_related_items_0 },
  { parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__du_ptag_ordered_pred_related_items_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__functor_number_map_pred_related_items_0,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__canonicalize_interface____Unify____pred_related_items_map_0_0_10001)),
  ((MR_Box) (parse_tree__canonicalize_interface____Compare____pred_related_items_map_0_0_10001)),
  (MR_String) "parse_tree.canonicalize_interface",
  (MR_String) "pred_related_items_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__canonicalize_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0),
    (MR_TypeInfo) (&parse_tree__canonicalize_interface__cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_sym_name_items_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__canonicalize_interface____Unify____sym_name_items_map_0_0_10001)),
  ((MR_Box) (parse_tree__canonicalize_interface____Compare____sym_name_items_map_0_0_10001)),
  (MR_String) "parse_tree.canonicalize_interface",
  (MR_String) "sym_name_items_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__canonicalize_interface__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_sym_name_arity_0cord__ti_cord_1parse_tree__prog_item__type_ctor_info_item_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_Word MR_CALL 
parse_tree__canonicalize_interface__IntroducedFrom__func__append_arity_pf__265__1_1_f_0(
  MR_Word LambdaHeadVar__1_16)
{
  MR_Word LambdaHeadVar__2_17;

  {
    LambdaHeadVar__2_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_17, 0) = ((MR_Box) (LambdaHeadVar__1_16));
  }
  return LambdaHeadVar__2_17;
}

static MR_Word MR_CALL 
parse_tree__canonicalize_interface__IntroducedFrom__func__append_arity_pf__264__1_1_f_0(
  MR_Word LambdaHeadVar__1_14)
{
  MR_Word LambdaHeadVar__2_15;

  {
    LambdaHeadVar__2_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_15, 0) = ((MR_Box) (LambdaHeadVar__1_14));
  }
  return LambdaHeadVar__2_15;
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____sym_name_items_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____sym_name_items_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_related_items_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____pred_related_items_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_related_items_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
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

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____pred_related_items_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_or_mode_decl_item_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__prog_item____Compare____item_mode_decl_info_0_0(HeadVar__1_1, Var_16, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__prog_item____Compare____item_pred_decl_info_0_0(HeadVar__1_1, Var_17, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____pred_or_mode_decl_item_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__prog_item____Unify____item_mode_decl_info_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__prog_item____Unify____item_pred_decl_info_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____arity_pf_items_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____arity_pf_items_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____arity_pf_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
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

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____arity_pf_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____are_arities_pfs_known_0_0(
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

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____are_arities_pfs_known_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__canonicalize_interface__append_arity_pf_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_17;

  conv1_LambdaHeadVar__2_17 = parse_tree__canonicalize_interface__IntroducedFrom__func__append_arity_pf__265__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_17));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__canonicalize_interface__append_arity_pf_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_15;

  conv0_LambdaHeadVar__2_15 = parse_tree__canonicalize_interface__IntroducedFrom__func__append_arity_pf__264__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_15));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__canonicalize_interface__append_arity_pf_3_p_0(
  MR_Word ArityPfItems_4,
  MR_Word STATE_VARIABLE_PredOrModeDeclsCord_0_12,
  MR_Word * STATE_VARIABLE_PredOrModeDeclsCord_13)
{
  MR_Word PredDecls_6 = ((MR_Word) ((MR_hl_field(0, ArityPfItems_4, (MR_Integer) 0))));
  MR_Word ModeDecls_7 = ((MR_Word) ((MR_hl_field(0, ArityPfItems_4, (MR_Integer) 1))));
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

  Var_20 = mercury__cord__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[7]), PredDecls_6);
  Var_21 = mercury__cord__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[8]), ModeDecls_7);
  Var_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0), Var_20, Var_21);
  *STATE_VARIABLE_PredOrModeDeclsCord_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0), STATE_VARIABLE_PredOrModeDeclsCord_0_12, Var_19);
}

static void MR_CALL 
parse_tree__canonicalize_interface__append_pred_related_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PredOrModeDeclsCord_13;

  parse_tree__canonicalize_interface__append_arity_pf_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredOrModeDeclsCord_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredOrModeDeclsCord_13));
}

static void MR_CALL 
parse_tree__canonicalize_interface__append_pred_related_3_p_0(
  MR_Word PredRelated_4,
  MR_Word STATE_VARIABLE_PredOrModeDeclsCord_0_9,
  MR_Word * STATE_VARIABLE_PredOrModeDeclsCord_10)
{
  MR_Word Known_6 = ((MR_Unsigned) ((MR_hl_field(0, PredRelated_4, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word AllItems_7 = ((MR_Word) ((MR_hl_field(0, PredRelated_4, (MR_Integer) 1))));
  MR_Word ArityPfMap_8 = ((MR_Word) ((MR_hl_field(0, PredRelated_4, (MR_Integer) 2))));

  switch (Known_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Box conv1_STATE_VARIABLE_PredOrModeDeclsCord_10;

        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[0]), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[6]), ArityPfMap_8, ((MR_Box) (STATE_VARIABLE_PredOrModeDeclsCord_0_9)), &conv1_STATE_VARIABLE_PredOrModeDeclsCord_10);
        *STATE_VARIABLE_PredOrModeDeclsCord_10 = ((MR_Word) (conv1_STATE_VARIABLE_PredOrModeDeclsCord_10));
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_PredOrModeDeclsCord_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0), STATE_VARIABLE_PredOrModeDeclsCord_0_9, AllItems_7);
      break;
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__classify_item_mode_decl_3_p_0(
  MR_Word ItemModeDeclInfo_4,
  MR_Word STATE_VARIABLE_PredRelatedMap_0_30,
  MR_Word * STATE_VARIABLE_PredRelatedMap_31)
{
  MR_bool succeeded;
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, ItemModeDeclInfo_4, (MR_Integer) 0))));
  MR_Word MaybePorF_7 = ((MR_Word) ((MR_hl_field(0, ItemModeDeclInfo_4, (MR_Integer) 1))));
  MR_Word Args_8 = ((MR_Word) ((MR_hl_field(0, ItemModeDeclInfo_4, (MR_Integer) 2))));
  MR_Word MaybeWithInst_9 = ((MR_Word) ((MR_hl_field(0, ItemModeDeclInfo_4, (MR_Integer) 3))));
  MR_Word PorF_14;

  succeeded = (MaybeWithInst_9 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    succeeded = (MaybePorF_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      PorF_14 = ((MR_Word) ((MR_hl_field(1, MaybePorF_7, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Integer Arity_15;
    MR_Word ArityPf_16;
    MR_Word PredRelated0_17;
    MR_Box conv0_PredRelated0_17;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Args_8, &Arity_15);
    {
      ArityPf_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ArityPf_16, 0) = ((MR_Box) (Arity_15));
      MR_hl_field(0, ArityPf_16, 1) = (MR_Box) ((MR_Unsigned) (PorF_14));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), STATE_VARIABLE_PredRelatedMap_0_30, ((MR_Box) (SymName_6)), &conv0_PredRelated0_17);
    if (succeeded)
    {
      PredRelated0_17 = ((MR_Word) (conv0_PredRelated0_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Known_18 = ((MR_Unsigned) ((MR_hl_field(0, PredRelated0_17, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word AllItems0_19 = ((MR_Word) ((MR_hl_field(0, PredRelated0_17, (MR_Integer) 1))));
      MR_Word ArityPfMap0_20 = ((MR_Word) ((MR_hl_field(0, PredRelated0_17, (MR_Integer) 2))));
      MR_Word AllItems_21;
      MR_Word ArityPfMap_27;
      MR_Word PredRelated_28;
      MR_Word Var_32;
      MR_Word ArityPfItems0_22;
      MR_Box conv1_ArityPfItems0_22;

      {
        Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_32, 0) = ((MR_Box) (ItemModeDeclInfo_4));
      }
      AllItems_21 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0), AllItems0_19, ((MR_Box) (Var_32)));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ArityPfMap0_20, ((MR_Box) (ArityPf_16)), &conv1_ArityPfItems0_22);
      if (succeeded)
      {
        ArityPfItems0_22 = ((MR_Word) (conv1_ArityPfItems0_22));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word PredItems_23 = ((MR_Word) ((MR_hl_field(0, ArityPfItems0_22, (MR_Integer) 0))));
        MR_Word ModeItems0_24 = ((MR_Word) ((MR_hl_field(0, ArityPfItems0_22, (MR_Integer) 1))));
        MR_Word ModeItems_25;
        MR_Word ArityPfItems_26;

        ModeItems_25 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ModeItems0_24, ((MR_Box) (ItemModeDeclInfo_4)));
        {
          ArityPfItems_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArityPfItems_26, 0) = ((MR_Box) (PredItems_23));
          MR_hl_field(0, ArityPfItems_26, 1) = ((MR_Box) (ModeItems_25));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ((MR_Box) (ArityPf_16)), ((MR_Box) (ArityPfItems_26)), ArityPfMap0_20, &ArityPfMap_27);
      }
      else
      {
        MR_Word PredItems_40;
        MR_Word ModeItems_41;
        MR_Word ArityPfItems_42;

        PredItems_40 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0));
        ModeItems_41 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ((MR_Box) (ItemModeDeclInfo_4)));
        {
          ArityPfItems_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArityPfItems_42, 0) = ((MR_Box) (PredItems_40));
          MR_hl_field(0, ArityPfItems_42, 1) = ((MR_Box) (ModeItems_41));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ((MR_Box) (ArityPf_16)), ((MR_Box) (ArityPfItems_42)), ArityPfMap0_20, &ArityPfMap_27);
      }
      {
        PredRelated_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredRelated_28, 0) = (MR_Box) ((MR_Unsigned) (Known_18));
        MR_hl_field(0, PredRelated_28, 1) = ((MR_Box) (AllItems_21));
        MR_hl_field(0, PredRelated_28, 2) = ((MR_Box) (ArityPfMap_27));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_6)), ((MR_Box) (PredRelated_28)), STATE_VARIABLE_PredRelatedMap_0_30, STATE_VARIABLE_PredRelatedMap_31);
    }
    else
    {
      MR_Word Var_34;
      MR_Word AllItems_44;
      MR_Word PredItems_45;
      MR_Word ModeItems_46;
      MR_Word ArityPfItems_47;
      MR_Word ArityPfMap_48;
      MR_Word PredRelated_49;

      {
        Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_34, 0) = ((MR_Box) (ItemModeDeclInfo_4));
      }
      AllItems_44 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0), ((MR_Box) (Var_34)));
      PredItems_45 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0));
      ModeItems_46 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), ((MR_Box) (ItemModeDeclInfo_4)));
      {
        ArityPfItems_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ArityPfItems_47, 0) = ((MR_Box) (PredItems_45));
        MR_hl_field(0, ArityPfItems_47, 1) = ((MR_Box) (ModeItems_46));
      }
      ArityPfMap_48 = mercury__map__singleton_2_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ((MR_Box) (ArityPf_16)), ((MR_Box) (ArityPfItems_47)));
      {
        PredRelated_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredRelated_49, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, PredRelated_49, 1) = ((MR_Box) (AllItems_44));
        MR_hl_field(0, PredRelated_49, 2) = ((MR_Box) (ArityPfMap_48));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_6)), ((MR_Box) (PredRelated_49)), STATE_VARIABLE_PredRelatedMap_0_30, STATE_VARIABLE_PredRelatedMap_31);
    }
  }
  else
  {
    MR_Word PredRelated0_57;
    MR_Box conv2_PredRelated0_57;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), STATE_VARIABLE_PredRelatedMap_0_30, ((MR_Box) (SymName_6)), &conv2_PredRelated0_57);
    if (succeeded)
    {
      PredRelated0_57 = ((MR_Word) (conv2_PredRelated0_57));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_36;
      MR_Word AllItems0_50 = ((MR_Word) ((MR_hl_field(0, PredRelated0_57, (MR_Integer) 1))));
      MR_Word AllItems_51;
      MR_Word ArityPfMap_52 = ((MR_Word) ((MR_hl_field(0, PredRelated0_57, (MR_Integer) 2))));
      MR_Word PredRelated_53;

      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (ItemModeDeclInfo_4));
      }
      AllItems_51 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0), AllItems0_50, ((MR_Box) (Var_36)));
      {
        PredRelated_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredRelated_53, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, PredRelated_53, 1) = ((MR_Box) (AllItems_51));
        MR_hl_field(0, PredRelated_53, 2) = ((MR_Box) (ArityPfMap_52));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_6)), ((MR_Box) (PredRelated_53)), STATE_VARIABLE_PredRelatedMap_0_30, STATE_VARIABLE_PredRelatedMap_31);
    }
    else
    {
      MR_Word Var_38;
      MR_Word AllItems_54;
      MR_Word ArityPfMap_55;
      MR_Word PredRelated_56;

      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (ItemModeDeclInfo_4));
      }
      AllItems_54 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0), ((MR_Box) (Var_38)));
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), &ArityPfMap_55);
      {
        PredRelated_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredRelated_56, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, PredRelated_56, 1) = ((MR_Box) (AllItems_54));
        MR_hl_field(0, PredRelated_56, 2) = ((MR_Box) (ArityPfMap_55));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_6)), ((MR_Box) (PredRelated_56)), STATE_VARIABLE_PredRelatedMap_0_30, STATE_VARIABLE_PredRelatedMap_31);
    }
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__classify_item_pred_decl_3_p_0(
  MR_Word ItemPredDeclInfo_4,
  MR_Word STATE_VARIABLE_PredRelatedMap_0_35,
  MR_Word * STATE_VARIABLE_PredRelatedMap_36)
{
  MR_bool succeeded;
  MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, ItemPredDeclInfo_4, (MR_Integer) 0))));
  MR_Word PorF_7 = ((MR_Unsigned) ((MR_hl_field(0, ItemPredDeclInfo_4, (MR_Integer) 1))) & (MR_Integer) 1);
  MR_Word Args_8 = ((MR_Word) ((MR_hl_field(0, ItemPredDeclInfo_4, (MR_Integer) 2))));
  MR_Word MaybeWithType_9 = ((MR_Word) ((MR_hl_field(0, ItemPredDeclInfo_4, (MR_Integer) 3))));
  MR_Word MaybeWithInst_10 = ((MR_Word) ((MR_hl_field(0, ItemPredDeclInfo_4, (MR_Integer) 4))));

  succeeded = (MaybeWithType_9 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (MaybeWithInst_10 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    MR_Integer Arity_20;
    MR_Word ArityPf_21;
    MR_Word PredRelated0_22;
    MR_Box conv0_PredRelated0_22;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0), Args_8, &Arity_20);
    {
      ArityPf_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ArityPf_21, 0) = ((MR_Box) (Arity_20));
      MR_hl_field(0, ArityPf_21, 1) = (MR_Box) ((MR_Unsigned) (PorF_7));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), STATE_VARIABLE_PredRelatedMap_0_35, ((MR_Box) (SymName_6)), &conv0_PredRelated0_22);
    if (succeeded)
    {
      PredRelated0_22 = ((MR_Word) (conv0_PredRelated0_22));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Known_23 = ((MR_Unsigned) ((MR_hl_field(0, PredRelated0_22, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word AllItems0_24 = ((MR_Word) ((MR_hl_field(0, PredRelated0_22, (MR_Integer) 1))));
      MR_Word ArityPfMap0_25 = ((MR_Word) ((MR_hl_field(0, PredRelated0_22, (MR_Integer) 2))));
      MR_Word AllItems_26;
      MR_Word ArityPfMap_32;
      MR_Word PredRelated_33;
      MR_Word Var_37;
      MR_Word ArityPfItems0_27;
      MR_Box conv1_ArityPfItems0_27;

      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_37, 0) = ((MR_Box) (ItemPredDeclInfo_4));
      }
      AllItems_26 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0), AllItems0_24, ((MR_Box) (Var_37)));
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ArityPfMap0_25, ((MR_Box) (ArityPf_21)), &conv1_ArityPfItems0_27);
      if (succeeded)
      {
        ArityPfItems0_27 = ((MR_Word) (conv1_ArityPfItems0_27));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word PredItems0_28 = ((MR_Word) ((MR_hl_field(0, ArityPfItems0_27, (MR_Integer) 0))));
        MR_Word ModeItems_29 = ((MR_Word) ((MR_hl_field(0, ArityPfItems0_27, (MR_Integer) 1))));
        MR_Word PredItems_30;
        MR_Word ArityPfItems_31;

        PredItems_30 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), PredItems0_28, ((MR_Box) (ItemPredDeclInfo_4)));
        {
          ArityPfItems_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArityPfItems_31, 0) = ((MR_Box) (PredItems_30));
          MR_hl_field(0, ArityPfItems_31, 1) = ((MR_Box) (ModeItems_29));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ((MR_Box) (ArityPf_21)), ((MR_Box) (ArityPfItems_31)), ArityPfMap0_25, &ArityPfMap_32);
      }
      else
      {
        MR_Word ModeItems_45;
        MR_Word PredItems_46;
        MR_Word ArityPfItems_47;

        PredItems_46 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ((MR_Box) (ItemPredDeclInfo_4)));
        ModeItems_45 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0));
        {
          ArityPfItems_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArityPfItems_47, 0) = ((MR_Box) (PredItems_46));
          MR_hl_field(0, ArityPfItems_47, 1) = ((MR_Box) (ModeItems_45));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ((MR_Box) (ArityPf_21)), ((MR_Box) (ArityPfItems_47)), ArityPfMap0_25, &ArityPfMap_32);
      }
      {
        PredRelated_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredRelated_33, 0) = (MR_Box) ((MR_Unsigned) (Known_23));
        MR_hl_field(0, PredRelated_33, 1) = ((MR_Box) (AllItems_26));
        MR_hl_field(0, PredRelated_33, 2) = ((MR_Box) (ArityPfMap_32));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_6)), ((MR_Box) (PredRelated_33)), STATE_VARIABLE_PredRelatedMap_0_35, STATE_VARIABLE_PredRelatedMap_36);
    }
    else
    {
      MR_Word Var_39;
      MR_Word AllItems_49;
      MR_Word ModeItems_50;
      MR_Word PredItems_51;
      MR_Word ArityPfItems_52;
      MR_Word ArityPfMap_53;
      MR_Word PredRelated_54;

      {
        Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_39, 0) = ((MR_Box) (ItemPredDeclInfo_4));
      }
      AllItems_49 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0), ((MR_Box) (Var_39)));
      PredItems_51 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), ((MR_Box) (ItemPredDeclInfo_4)));
      ModeItems_50 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0));
      {
        ArityPfItems_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ArityPfItems_52, 0) = ((MR_Box) (PredItems_51));
        MR_hl_field(0, ArityPfItems_52, 1) = ((MR_Box) (ModeItems_50));
      }
      ArityPfMap_53 = mercury__map__singleton_2_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), ((MR_Box) (ArityPf_21)), ((MR_Box) (ArityPfItems_52)));
      {
        PredRelated_54 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredRelated_54, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, PredRelated_54, 1) = ((MR_Box) (AllItems_49));
        MR_hl_field(0, PredRelated_54, 2) = ((MR_Box) (ArityPfMap_53));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_6)), ((MR_Box) (PredRelated_54)), STATE_VARIABLE_PredRelatedMap_0_35, STATE_VARIABLE_PredRelatedMap_36);
    }
  }
  else
  {
    MR_Word PredRelated0_62;
    MR_Box conv2_PredRelated0_62;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), STATE_VARIABLE_PredRelatedMap_0_35, ((MR_Box) (SymName_6)), &conv2_PredRelated0_62);
    if (succeeded)
    {
      PredRelated0_62 = ((MR_Word) (conv2_PredRelated0_62));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_41;
      MR_Word AllItems0_55 = ((MR_Word) ((MR_hl_field(0, PredRelated0_62, (MR_Integer) 1))));
      MR_Word AllItems_56;
      MR_Word ArityPfMap_57 = ((MR_Word) ((MR_hl_field(0, PredRelated0_62, (MR_Integer) 2))));
      MR_Word PredRelated_58;

      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_41, 0) = ((MR_Box) (ItemPredDeclInfo_4));
      }
      AllItems_56 = mercury__cord__snoc_2_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0), AllItems0_55, ((MR_Box) (Var_41)));
      {
        PredRelated_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredRelated_58, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, PredRelated_58, 1) = ((MR_Box) (AllItems_56));
        MR_hl_field(0, PredRelated_58, 2) = ((MR_Box) (ArityPfMap_57));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_6)), ((MR_Box) (PredRelated_58)), STATE_VARIABLE_PredRelatedMap_0_35, STATE_VARIABLE_PredRelatedMap_36);
    }
    else
    {
      MR_Word Var_43;
      MR_Word AllItems_59;
      MR_Word ArityPfMap_60;
      MR_Word PredRelated_61;

      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_43, 0) = ((MR_Box) (ItemPredDeclInfo_4));
      }
      AllItems_59 = mercury__cord__singleton_1_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0), ((MR_Box) (Var_43)));
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_arity_pf_items_0), &ArityPfMap_60);
      {
        PredRelated_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredRelated_61, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, PredRelated_61, 1) = ((MR_Box) (AllItems_59));
        MR_hl_field(0, PredRelated_61, 2) = ((MR_Box) (ArityPfMap_60));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), ((MR_Box) (SymName_6)), ((MR_Box) (PredRelated_61)), STATE_VARIABLE_PredRelatedMap_0_35, STATE_VARIABLE_PredRelatedMap_36);
    }
  }
}

static void MR_CALL 
parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_PredOrModeDeclsCord_10;

  parse_tree__canonicalize_interface__append_pred_related_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_PredOrModeDeclsCord_10);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_PredOrModeDeclsCord_10));
}

static void MR_CALL 
parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_PredRelatedMap_31;

  parse_tree__canonicalize_interface__classify_item_mode_decl_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_PredRelatedMap_31);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_PredRelatedMap_31));
}

static void MR_CALL 
parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PredRelatedMap_36;

  parse_tree__canonicalize_interface__classify_item_pred_decl_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PredRelatedMap_36);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PredRelatedMap_36));
}

void MR_CALL 
parse_tree__canonicalize_interface__order_pred_and_mode_decls_3_p_0(
  MR_Word PredDecls_4,
  MR_Word ModeDecls_5,
  MR_Word * PredOrModeDecls_6)
{
  MR_Word PredOrModeDeclsCord_8;
  MR_Word STATE_VARIABLE_PredRelatedMap_9_9;
  MR_Word STATE_VARIABLE_PredRelatedMap_11_11;
  MR_Word STATE_VARIABLE_PredRelatedMap_13_13;
  MR_Word Var_15;
  MR_Box conv1_STATE_VARIABLE_PredRelatedMap_11_11;
  MR_Box conv3_STATE_VARIABLE_PredRelatedMap_13_13;
  MR_Box conv5_PredOrModeDeclsCord_8;

  mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), &STATE_VARIABLE_PredRelatedMap_9_9);
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[3]), PredDecls_4, ((MR_Box) (STATE_VARIABLE_PredRelatedMap_9_9)), &conv1_STATE_VARIABLE_PredRelatedMap_11_11);
  STATE_VARIABLE_PredRelatedMap_11_11 = ((MR_Word) (conv1_STATE_VARIABLE_PredRelatedMap_11_11));
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[0]), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[4]), ModeDecls_5, ((MR_Box) (STATE_VARIABLE_PredRelatedMap_11_11)), &conv3_STATE_VARIABLE_PredRelatedMap_13_13);
  STATE_VARIABLE_PredRelatedMap_13_13 = ((MR_Word) (conv3_STATE_VARIABLE_PredRelatedMap_13_13));
  Var_15 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0));
  mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_related_items_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_2[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__canonicalize_interface_scalar_common_1[5]), STATE_VARIABLE_PredRelatedMap_13_13, ((MR_Box) (Var_15)), &conv5_PredOrModeDeclsCord_8);
  PredOrModeDeclsCord_8 = ((MR_Word) (conv5_PredOrModeDeclsCord_8));
  *PredOrModeDecls_6 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0), PredOrModeDeclsCord_8);
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____are_arities_pfs_known_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__canonicalize_interface____Unify____are_arities_pfs_known_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____are_arities_pfs_known_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__canonicalize_interface____Compare____are_arities_pfs_known_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____arity_pf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__canonicalize_interface____Unify____arity_pf_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____arity_pf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__canonicalize_interface____Compare____arity_pf_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____arity_pf_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__canonicalize_interface____Unify____arity_pf_items_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____arity_pf_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__canonicalize_interface____Compare____arity_pf_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____pred_or_mode_decl_item_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__canonicalize_interface____Unify____pred_or_mode_decl_item_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_or_mode_decl_item_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__canonicalize_interface____Compare____pred_or_mode_decl_item_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____pred_related_items_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__canonicalize_interface____Unify____pred_related_items_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_related_items_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__canonicalize_interface____Compare____pred_related_items_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____pred_related_items_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__canonicalize_interface____Unify____pred_related_items_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____pred_related_items_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__canonicalize_interface____Compare____pred_related_items_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__canonicalize_interface____Unify____sym_name_items_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__canonicalize_interface____Unify____sym_name_items_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__canonicalize_interface____Compare____sym_name_items_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__canonicalize_interface____Compare____sym_name_items_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&parse_tree__canonicalize_interface__parse_tree__canonicalize_interface__type_ctor_info_pred_or_mode_decl_item_0);
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
