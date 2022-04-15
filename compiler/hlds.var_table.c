/*
** Automatically generated from `var_table.m'
** by the Mercury compiler,
** version rotd-2022-04-15
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


// :- module hlds.var_table.
// :- implementation.

/*
INIT mercury__hlds__var_table__init
ENDINIT
*/

#include "hlds.var_table.mih"


#include "analysis.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "integer.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "string.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 hlds__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__var_table__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__var_table__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__var_table__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 hlds__var_table__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__var_table__type_ctor_info_var_table_entry_0;

static const MR_PseudoTypeInfo hlds__var_table__hlds__var_table__field_types_prog_var_set_types_0_0[2];

static const MR_DuFunctorDesc hlds__var_table__hlds__var_table__du_functor_desc_prog_var_set_types_0_0;

static const MR_DuFunctorDescPtr hlds__var_table__hlds__var_table__du_stag_ordered_prog_var_set_types_0_0[1];

static const MR_DuPtagLayout hlds__var_table__hlds__var_table__du_ptag_ordered_prog_var_set_types_0[1];

static const MR_DuFunctorDescPtr hlds__var_table__hlds__var_table__du_name_ordered_prog_var_set_types_0[1];

static const MR_Integer hlds__var_table__hlds__var_table__functor_number_map_prog_var_set_types_0[1];

static const MR_PseudoTypeInfo hlds__var_table__hlds__var_table__field_types_var_table_entry_0_0[3];

static const MR_ConstString hlds__var_table__hlds__var_table__field_names_var_table_entry_0_0[3];

static const MR_DuArgLocn hlds__var_table__hlds__var_table__field_locns_var_table_entry_0_0[3];

static const MR_DuFunctorDesc hlds__var_table__hlds__var_table__du_functor_desc_var_table_entry_0_0;

static const MR_DuFunctorDescPtr hlds__var_table__hlds__var_table__du_stag_ordered_var_table_entry_0_0[1];

static const MR_DuPtagLayout hlds__var_table__hlds__var_table__du_ptag_ordered_var_table_entry_0[1];

static const MR_DuFunctorDescPtr hlds__var_table__hlds__var_table__du_name_ordered_var_table_entry_0[1];

static const MR_Integer hlds__var_table__hlds__var_table__functor_number_map_var_table_entry_0[1];

static void MR_CALL 
hlds__var_table__apply_rec_subst_to_type_in_vte_3_p_0(
  MR_Word Subst_4,
  MR_Word Entry0_5,
  MR_Word * Entry_6);

static void MR_CALL 
hlds__var_table__apply_subst_to_type_in_vte_3_p_0(
  MR_Word Subst_4,
  MR_Word Entry0_5,
  MR_Word * Entry_6);

static void MR_CALL 
hlds__var_table__apply_variable_renaming_to_type_in_vte_3_p_0(
  MR_Word Renaming_4,
  MR_Word Entry0_5,
  MR_Word * Entry_6);

static void MR_CALL 
hlds__var_table__apply_rec_subst_to_var_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__var_table__apply_subst_to_var_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__var_table__apply_variable_renaming_to_var_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__var_table__make_var_table_loop_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevVarTableAL_0_4,
  MR_Word * STATE_VARIABLE_RevVarTableAL_5);

static MR_bool MR_CALL 
hlds__var_table____Unify____prog_var_set_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__var_table____Compare____prog_var_set_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__var_table____Unify____var_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__var_table____Compare____var_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__var_table____Unify____var_table_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__var_table____Compare____var_table_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__var_table_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__var_table_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__var_table_scalar_common_3[1][1];

static /* final */ const MR_Box hlds__var_table_scalar_common_4[2][6];




static /* final */ const MR_Box hlds__var_table_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__var_table_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__var_table_scalar_common_1[0])),
    ((MR_Box) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0))
  },
};

static /* final */ const MR_Box hlds__var_table_scalar_common_3[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box hlds__var_table_scalar_common_4[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__var_table__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__var_table__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0)),
    ((MR_Box) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0))
  },
};






static const MR_FA_TypeInfo_Struct1 hlds__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__var_table__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&hlds__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__var_table__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__var_table__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__var_table__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__var_table__type_ctor_info_var_table_entry_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__var_table__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0)
  }
};

static const MR_PseudoTypeInfo hlds__var_table__hlds__var_table__field_types_prog_var_set_types_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__var_table__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__var_table__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__var_table__type_ctor_info_var_table_entry_0)
};

static const MR_DuFunctorDesc hlds__var_table__hlds__var_table__du_functor_desc_prog_var_set_types_0_0 = {
  (MR_String) "prog_var_set_types",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__var_table__hlds__var_table__field_types_prog_var_set_types_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__var_table__hlds__var_table__du_stag_ordered_prog_var_set_types_0_0[1] = {
  &hlds__var_table__hlds__var_table__du_functor_desc_prog_var_set_types_0_0
};

static const MR_DuPtagLayout hlds__var_table__hlds__var_table__du_ptag_ordered_prog_var_set_types_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_table__hlds__var_table__du_stag_ordered_prog_var_set_types_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__var_table__hlds__var_table__du_name_ordered_prog_var_set_types_0[1] = {
  &hlds__var_table__hlds__var_table__du_functor_desc_prog_var_set_types_0_0
};

static const MR_Integer hlds__var_table__hlds__var_table__functor_number_map_prog_var_set_types_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__var_table__hlds__var_table__type_ctor_info_prog_var_set_types_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__var_table____Unify____prog_var_set_types_0_0_10001)),
  ((MR_Box) (hlds__var_table____Compare____prog_var_set_types_0_0_10001)),
  (MR_String) "hlds.var_table",
  (MR_String) "prog_var_set_types",
  { hlds__var_table__hlds__var_table__du_name_ordered_prog_var_set_types_0 },
  { hlds__var_table__hlds__var_table__du_ptag_ordered_prog_var_set_types_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__var_table__hlds__var_table__functor_number_map_prog_var_set_types_0,

};

const MR_TypeCtorInfo_Struct hlds__var_table__hlds__var_table__type_ctor_info_var_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__var_table____Unify____var_table_0_0_10001)),
  ((MR_Box) (hlds__var_table____Compare____var_table_0_0_10001)),
  (MR_String) "hlds.var_table",
  (MR_String) "var_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__var_table__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__var_table__type_ctor_info_var_table_entry_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo hlds__var_table__hlds__var_table__field_types_var_table_entry_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_dummy_type_0)
};

static const MR_ConstString hlds__var_table__hlds__var_table__field_names_var_table_entry_0_0[3] = {
  (MR_String) "vte_name",
  (MR_String) "vte_type",
  (MR_String) "vte_is_dummy"
};

static const MR_DuArgLocn hlds__var_table__hlds__var_table__field_locns_var_table_entry_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__var_table__hlds__var_table__du_functor_desc_var_table_entry_0_0 = {
  (MR_String) "vte",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__var_table__hlds__var_table__field_types_var_table_entry_0_0,
  hlds__var_table__hlds__var_table__field_names_var_table_entry_0_0,
  hlds__var_table__hlds__var_table__field_locns_var_table_entry_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__var_table__hlds__var_table__du_stag_ordered_var_table_entry_0_0[1] = {
  &hlds__var_table__hlds__var_table__du_functor_desc_var_table_entry_0_0
};

static const MR_DuPtagLayout hlds__var_table__hlds__var_table__du_ptag_ordered_var_table_entry_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__var_table__hlds__var_table__du_stag_ordered_var_table_entry_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__var_table__hlds__var_table__du_name_ordered_var_table_entry_0[1] = {
  &hlds__var_table__hlds__var_table__du_functor_desc_var_table_entry_0_0
};

static const MR_Integer hlds__var_table__hlds__var_table__functor_number_map_var_table_entry_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__var_table____Unify____var_table_entry_0_0_10001)),
  ((MR_Box) (hlds__var_table____Compare____var_table_entry_0_0_10001)),
  (MR_String) "hlds.var_table",
  (MR_String) "var_table_entry",
  { hlds__var_table__hlds__var_table__du_name_ordered_var_table_entry_0 },
  { hlds__var_table__hlds__var_table__du_ptag_ordered_var_table_entry_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__var_table__hlds__var_table__functor_number_map_var_table_entry_0,

};

void MR_CALL 
hlds__var_table____Compare____var_table_entry_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____mer_type_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__var_table____Unify____var_table_entry_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__var_table____Compare____var_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_table_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
hlds__var_table____Unify____var_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__var_table_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
hlds__var_table____Compare____prog_var_set_types_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_table_scalar_common_1[1]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__var_table_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
hlds__var_table____Unify____prog_var_set_types_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__var_table_scalar_common_1[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&hlds__var_table_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__var_table__apply_rec_subst_to_type_in_vte_3_p_0(
  MR_Word Subst_4,
  MR_Word Entry0_5,
  MR_Word * Entry_6)
{
  MR_Word Type0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry0_5, (MR_Integer) 1))));
  MR_Word Type_8;
  MR_String Var_11;
  MR_Word Var_13;

  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(Subst_4, Type0_7, &Type_8);
  Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Entry0_5, (MR_Integer) 0))));
  Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Entry0_5, (MR_Integer) 2))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Entry_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_8));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_13));
  }
}

static void MR_CALL 
hlds__var_table__apply_subst_to_type_in_vte_3_p_0(
  MR_Word Subst_4,
  MR_Word Entry0_5,
  MR_Word * Entry_6)
{
  MR_Word Type0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry0_5, (MR_Integer) 1))));
  MR_Word Type_8;
  MR_String Var_11;
  MR_Word Var_13;

  parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_4, Type0_7, &Type_8);
  Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Entry0_5, (MR_Integer) 0))));
  Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Entry0_5, (MR_Integer) 2))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Entry_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_8));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_13));
  }
}

static void MR_CALL 
hlds__var_table__apply_variable_renaming_to_type_in_vte_3_p_0(
  MR_Word Renaming_4,
  MR_Word Entry0_5,
  MR_Word * Entry_6)
{
  MR_Word Type0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry0_5, (MR_Integer) 1))));
  MR_Word Type_8;
  MR_String Var_11;
  MR_Word Var_13;

  parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(Renaming_4, Type0_7, &Type_8);
  Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Entry0_5, (MR_Integer) 0))));
  Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Entry0_5, (MR_Integer) 2))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Entry_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_8));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_13));
  }
}

void MR_CALL 
hlds__var_table__foldl_var_table_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Pred_5,
  MR_Word VarTable_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  mercury__map__foldl_values_4_p_0((MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), TypeInfo_for_T_11, (MR_Word) (&hlds__var_table_scalar_common_1[0]), Pred_5, VarTable_6, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
hlds__var_table__transform_foldl_var_table_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Transform_6,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  mercury__map__map_values_foldl_5_p_1((MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), TypeInfo_for_T_15, (MR_Word) (&hlds__var_table_scalar_common_1[0]), Transform_6, STATE_VARIABLE_VarTable_0_9, STATE_VARIABLE_VarTable_10, STATE_VARIABLE_Acc_0_11, STATE_VARIABLE_Acc_12);
}

static void MR_CALL 
hlds__var_table__apply_rec_subst_to_var_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Entry_6;

  hlds__var_table__apply_rec_subst_to_type_in_vte_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Entry_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Entry_6));
}

void MR_CALL 
hlds__var_table__apply_rec_subst_to_var_table_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&hlds__var_table_scalar_common_4[1]));
    MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (hlds__var_table__apply_rec_subst_to_var_table_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Subst_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&hlds__var_table_scalar_common_1[0]), Var_8, STATE_VARIABLE_VarTable_0_6, STATE_VARIABLE_VarTable_7);
}

static void MR_CALL 
hlds__var_table__apply_subst_to_var_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Entry_6;

  hlds__var_table__apply_subst_to_type_in_vte_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Entry_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Entry_6));
}

void MR_CALL 
hlds__var_table__apply_subst_to_var_table_3_p_0(
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&hlds__var_table_scalar_common_4[1]));
    MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (hlds__var_table__apply_subst_to_var_table_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Subst_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&hlds__var_table_scalar_common_1[0]), Var_8, STATE_VARIABLE_VarTable_0_6, STATE_VARIABLE_VarTable_7);
}

static void MR_CALL 
hlds__var_table__apply_variable_renaming_to_var_table_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Entry_6;

  hlds__var_table__apply_variable_renaming_to_type_in_vte_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Entry_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Entry_6));
}

void MR_CALL 
hlds__var_table__apply_variable_renaming_to_var_table_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7)
{
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&hlds__var_table_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (hlds__var_table__apply_variable_renaming_to_var_table_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), (MR_Word) (&hlds__var_table_scalar_common_1[0]), Var_8, STATE_VARIABLE_VarTable_0_6, STATE_VARIABLE_VarTable_7);
}

void MR_CALL 
hlds__var_table__delete_sorted_var_entries_3_p_0(
  MR_Word SortedVars_4,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7)
{
  mercury__map__delete_sorted_list_3_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), SortedVars_4, STATE_VARIABLE_VarTable_0_6, STATE_VARIABLE_VarTable_7);
}

void MR_CALL 
hlds__var_table__delete_var_entries_3_p_0(
  MR_Word Vars_4,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7)
{
  mercury__map__delete_list_3_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), Vars_4, STATE_VARIABLE_VarTable_0_6, STATE_VARIABLE_VarTable_7);
}

void MR_CALL 
hlds__var_table__delete_var_entry_3_p_0(
  MR_Word Var_4,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7)
{
  mercury__map__delete_3_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), ((MR_Box) (Var_4)), STATE_VARIABLE_VarTable_0_6, STATE_VARIABLE_VarTable_7);
}

void MR_CALL 
hlds__var_table__var_table_add_corresponding_lists_4_p_0(
  MR_Word Vars_5,
  MR_Word Entries_6,
  MR_Word STATE_VARIABLE_VarTable_0_8,
  MR_Word * STATE_VARIABLE_VarTable_9)
{
  mercury__map__det_insert_from_corresponding_lists_4_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), Vars_5, Entries_6, STATE_VARIABLE_VarTable_0_8, STATE_VARIABLE_VarTable_9);
}

void MR_CALL 
hlds__var_table__var_table_from_sorted_assoc_list_2_p_0(
  MR_Word AssocList_3,
  MR_Word * VarTable_4)
{
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), AssocList_3, VarTable_4);
}

void MR_CALL 
hlds__var_table__var_table_from_corresponding_lists_3_p_0(
  MR_Word Vars_4,
  MR_Word Types_5,
  MR_Word * VarTable_6)
{
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), Vars_4, Types_5, VarTable_6);
}

void MR_CALL 
hlds__var_table__var_table_to_sorted_assoc_list_2_p_0(
  MR_Word VarTable_3,
  MR_Word * AssocList_4)
{
  mercury__map__to_sorted_assoc_list_2_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), VarTable_3, AssocList_4);
}

void MR_CALL 
hlds__var_table__var_table_entries_2_p_0(
  MR_Word VarTable_3,
  MR_Word * Entries_4)
{
  mercury__map__values_2_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), VarTable_3, Entries_4);
}

void MR_CALL 
hlds__var_table__var_table_vars_2_p_0(
  MR_Word VarTable_3,
  MR_Word * Vars_4)
{
  mercury__map__keys_2_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), VarTable_3, Vars_4);
}

MR_Word MR_CALL 
hlds__var_table__lookup_var_type_func_2_f_0(
  MR_Word VarTable_4,
  MR_Word Var_5)
{
  MR_Word Type_6;
  MR_Word Entry_7;
  MR_Box conv0_Entry_7;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), VarTable_4, ((MR_Box) (Var_5)), &conv0_Entry_7);
  Entry_7 = ((MR_Word) (conv0_Entry_7));
  Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_7, (MR_Integer) 1))));
  return Type_6;
}

MR_String MR_CALL 
hlds__var_table__var_table_entry_name_and_number_2_f_0(
  MR_Word VarTable_4,
  MR_Word Var_5)
{
  MR_String Name_6;
  MR_Word Entry_7;
  MR_Box conv0_Entry_7;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), VarTable_4, ((MR_Box) (Var_5)), &conv0_Entry_7);
  Entry_7 = ((MR_Word) (conv0_Entry_7));
  Name_6 = hlds__var_table__var_entry_name_and_number_2_f_0(Var_5, Entry_7);
  return Name_6;
}

MR_String MR_CALL 
hlds__var_table__var_table_entry_name_2_f_0(
  MR_Word VarTable_4,
  MR_Word Var_5)
{
  MR_String Name_6;
  MR_Word Entry_7;
  MR_Box conv0_Entry_7;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), VarTable_4, ((MR_Box) (Var_5)), &conv0_Entry_7);
  Entry_7 = ((MR_Word) (conv0_Entry_7));
  Name_6 = hlds__var_table__var_entry_name_2_f_0(Var_5, Entry_7);
  return Name_6;
}

MR_String MR_CALL 
hlds__var_table__var_entry_name_and_number_2_f_0(
  MR_Word Var_4,
  MR_Word Entry_5)
{
  MR_bool succeeded;
  MR_String Name_6;
  MR_String Name0_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Entry_5, (MR_Integer) 0))));
  MR_Integer VarNum_8;

  mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_4, &VarNum_8);
  succeeded = (strcmp(Name0_7, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_String Var_22;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__var_table_scalar_common_3[0]), VarNum_8, &Var_22);
    Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "V_", Var_22);
  }
  else
  {
    MR_String Var_30;
    MR_String Var_38;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__var_table_scalar_common_3[0]), VarNum_8, &Var_30);
    Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_30);
    Name_6 = mercury__string__f_43_43_2_f_0(Name0_7, Var_38);
  }
  return Name_6;
}

MR_String MR_CALL 
hlds__var_table__var_entry_name_2_f_0(
  MR_Word Var_4,
  MR_Word Entry_5)
{
  MR_bool succeeded;
  MR_String Name_6;
  MR_String Name0_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), Entry_5, (MR_Integer) 0))));

  succeeded = (strcmp(Name0_7, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_Integer VarNum_8;
    MR_String Var_10;

    mercury__term__var_to_int_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_4, &VarNum_8);
    Var_10 = mercury__string__int_to_string_1_f_0(VarNum_8);
    Name_6 = mercury__string__f_43_43_2_f_0((MR_String) "V_", Var_10);
  }
  else
    Name_6 = Name0_7;
  return Name_6;
}

void MR_CALL 
hlds__var_table__lookup_var_entries_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Entry_8;
    MR_Word Entries_9;
    MR_Box conv0_Entry_8;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), HeadVar__1_1, ((MR_Box) (Var_6)), &conv0_Entry_8);
    Entry_8 = ((MR_Word) (conv0_Entry_8));
    hlds__var_table__lookup_var_entries_3_p_0(HeadVar__1_1, Vars_7, &Entries_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Entry_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Entries_9));
    }
  }
}

void MR_CALL 
hlds__var_table__lookup_var_entry_3_p_0(
  MR_Word VarTable_4,
  MR_Word Var_5,
  MR_Word * Entry_6)
{
  MR_Box conv0_Entry_6;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), VarTable_4, ((MR_Box) (Var_5)), &conv0_Entry_6);
  *Entry_6 = ((MR_Word) (conv0_Entry_6));
}

MR_Word MR_CALL 
hlds__var_table__lookup_var_entry_func_2_f_0(
  MR_Word VarTable_4,
  MR_Word Var_5)
{
  MR_Word Entry_6;
  MR_Box conv0_Entry_6;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), VarTable_4, ((MR_Box) (Var_5)), &conv0_Entry_6);
  Entry_6 = ((MR_Word) (conv0_Entry_6));
  return Entry_6;
}

MR_bool MR_CALL 
hlds__var_table__search_var_entry_3_p_0(
  MR_Word VarTable_4,
  MR_Word Var_5,
  MR_Word * Entry_6)
{
  MR_bool succeeded;
  MR_Box conv0_Entry_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), VarTable_4, ((MR_Box) (Var_5)), &conv0_Entry_6);
  if (succeeded)
  {
    *Entry_6 = ((MR_Word) (conv0_Entry_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__var_table__is_in_var_table_2_p_0(
  MR_Word VarTable_3,
  MR_Word Var_4)
{
  MR_bool succeeded;

  succeeded = mercury__map__contains_2_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), VarTable_3, ((MR_Box) (Var_4)));
  return succeeded;
}

void MR_CALL 
hlds__var_table__search_insert_var_entry_5_p_0(
  MR_Word Var_6,
  MR_Word NewEntry_7,
  MR_Word * MaybeOldEntry_8,
  MR_Word STATE_VARIABLE_VarTable_0_10,
  MR_Word * STATE_VARIABLE_VarTable_11)
{
  mercury__map__search_insert_5_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), ((MR_Box) (Var_6)), ((MR_Box) (NewEntry_7)), MaybeOldEntry_8, STATE_VARIABLE_VarTable_0_10, STATE_VARIABLE_VarTable_11);
}

void MR_CALL 
hlds__var_table__update_var_entry_4_p_0(
  MR_Word Var_5,
  MR_Word Entry_6,
  MR_Word STATE_VARIABLE_VarTable_0_8,
  MR_Word * STATE_VARIABLE_VarTable_9)
{
  mercury__map__det_update_4_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), ((MR_Box) (Var_5)), ((MR_Box) (Entry_6)), STATE_VARIABLE_VarTable_0_8, STATE_VARIABLE_VarTable_9);
}

void MR_CALL 
hlds__var_table__add_var_entry_4_p_0(
  MR_Word Var_5,
  MR_Word Entry_6,
  MR_Word STATE_VARIABLE_VarTable_0_8,
  MR_Word * STATE_VARIABLE_VarTable_9)
{
  mercury__map__det_insert_4_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), ((MR_Box) (Var_5)), ((MR_Box) (Entry_6)), STATE_VARIABLE_VarTable_0_8, STATE_VARIABLE_VarTable_9);
}

void MR_CALL 
hlds__var_table__var_table_optimize_2_p_0(
  MR_Word STATE_VARIABLE_VarTable_0_4,
  MR_Word * STATE_VARIABLE_VarTable_5)
{
  mercury__map__optimize_2_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), STATE_VARIABLE_VarTable_0_4, STATE_VARIABLE_VarTable_5);
}

void MR_CALL 
hlds__var_table__var_table_select_3_p_0(
  MR_Word SelectedVars_4,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7)
{
  mercury__map__select_3_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), STATE_VARIABLE_VarTable_0_6, SelectedVars_4, STATE_VARIABLE_VarTable_7);
}

void MR_CALL 
hlds__var_table__var_table_count_2_p_0(
  MR_Word VarTable_3,
  MR_Integer * Count_4)
{
  mercury__map__count_2_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), VarTable_3, Count_4);
}

MR_bool MR_CALL 
hlds__var_table__var_table_is_empty_1_p_0(
  MR_Word VarTable_2)
{
  MR_bool succeeded;

  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), VarTable_2);
  return succeeded;
}

void MR_CALL 
hlds__var_table__init_var_table_1_p_0(
  MR_Word * VarTable_2)
{
  mercury__map__init_1_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), VarTable_2);
}

void MR_CALL 
hlds__var_table__make_var_table_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarSet_6,
  MR_Word VarTypes_7,
  MR_Word * VarTable_8)
{
  MR_Word VarTypesAL_9;
  MR_Word RevVarTableAL_10;

  hlds__vartypes__vartypes_to_sorted_assoc_list_2_p_0(VarTypes_7, &VarTypesAL_9);
  hlds__var_table__make_var_table_loop_5_p_0(ModuleInfo_5, VarSet_6, VarTypesAL_9, (MR_Word) ((MR_Unsigned) 0U), &RevVarTableAL_10);
  mercury__map__from_rev_sorted_assoc_list_2_p_0((MR_Word) (&hlds__var_table_scalar_common_1[0]), (MR_Word) (&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0), RevVarTableAL_10, VarTable_8);
}

static void MR_CALL 
hlds__var_table__make_var_table_loop_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word VarSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RevVarTableAL_0_4,
  MR_Word * STATE_VARIABLE_RevVarTableAL_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevVarTableAL_5 = STATE_VARIABLE_RevVarTableAL_0_4;
    else
    {
      MR_Word Var_13;
      MR_Word Type_14;
      MR_Word VarsTypes_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_String Name_18;
      MR_Word IsDummy_19;
      MR_Word Entry_20;
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_RevVarTableAL_24_24;
      MR_Word Var_25;
      MR_String NamePrime_17;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_RevVarTableAL_0_4;

      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 0))));
      Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_23, (MR_Integer) 1))));
      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_2, Var_13, &NamePrime_17);
      if (succeeded)
        Name_18 = NamePrime_17;
      else
        Name_18 = (MR_String) "";
      IsDummy_19 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, Type_14);
      {
        Entry_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Entry_20, 0) = ((MR_Box) (Name_18));
        MR_hl_field(MR_mktag(0), Entry_20, 1) = ((MR_Box) (Type_14));
        MR_hl_field(MR_mktag(0), Entry_20, 2) = (MR_Box) ((MR_Unsigned) (IsDummy_19));
      }
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Entry_20));
      }
      {
        STATE_VARIABLE_RevVarTableAL_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVarTableAL_24_24, 0) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevVarTableAL_24_24, 1) = ((MR_Box) (STATE_VARIABLE_RevVarTableAL_0_4));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = VarsTypes_15;
      next_value_of_STATE_VARIABLE_RevVarTableAL_0_4 = STATE_VARIABLE_RevVarTableAL_24_24;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_RevVarTableAL_0_4 = next_value_of_STATE_VARIABLE_RevVarTableAL_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__var_table____Unify____prog_var_set_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__var_table____Unify____prog_var_set_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__var_table____Compare____prog_var_set_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_table____Compare____prog_var_set_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__var_table____Unify____var_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__var_table____Unify____var_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__var_table____Compare____var_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_table____Compare____var_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__var_table____Unify____var_table_entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__var_table____Unify____var_table_entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__var_table____Compare____var_table_entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__var_table____Compare____var_table_entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__var_table__init(void)
{
}

void mercury__hlds__var_table__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__var_table__hlds__var_table__type_ctor_info_prog_var_set_types_0);
	MR_register_type_ctor_info(&hlds__var_table__hlds__var_table__type_ctor_info_var_table_0);
	MR_register_type_ctor_info(&hlds__var_table__hlds__var_table__type_ctor_info_var_table_entry_0);
}

void mercury__hlds__var_table__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__var_table__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.var_table.
