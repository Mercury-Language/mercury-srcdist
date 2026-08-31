/*
** Automatically generated from `proc_table_struct.m'
** by the Mercury compiler,
** version rotd-2026-08-31
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


// :- module hlds.proc_table_struct.
// :- implementation.

/*
INIT mercury__hlds__proc_table_struct__init
ENDINIT
*/

#include "hlds.proc_table_struct.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cord.mih"
#include "enum.mih"
#include "hlds.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.proc_info_types.mih"
#include "libs.compiler_util.mih"
#include "libs.rat.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_TypeInfo_Struct1 hlds__proc_table_struct__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__proc_table_struct__list__ti_list_1hlds__proc_table_struct__type_ctor_info_table_step_desc_0;

static const MR_FA_TypeInfo_Struct1 hlds__proc_table_struct__maybe__ti_maybe_1list__ti_list_1hlds__proc_table_struct__type_ctor_info_table_step_desc_0;

static const MR_PseudoTypeInfo hlds__proc_table_struct__hlds__proc_table_struct__field_types_proc_table_struct_info_0_0[9];

static const MR_ConstString hlds__proc_table_struct__hlds__proc_table_struct__field_names_proc_table_struct_info_0_0[9];

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_proc_table_struct_info_0_0;

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_proc_table_struct_info_0_0[1];

static const MR_DuPtagLayout hlds__proc_table_struct__hlds__proc_table_struct__du_ptag_ordered_proc_table_struct_info_0[1];

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_name_ordered_proc_table_struct_info_0[1];

static const MR_Integer hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_proc_table_struct_info_0[1];

static const MR_EnumFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_is_poly_0_0;

static const MR_EnumFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_is_poly_0_1;

static const MR_EnumFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__enum_ordinal_ordered_table_is_poly_0[2];

static const MR_EnumFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__enum_name_ordered_table_is_poly_0[2];

static const MR_Integer hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_table_is_poly_0[2];

static const MR_PseudoTypeInfo hlds__proc_table_struct__hlds__proc_table_struct__field_types_table_step_desc_0_0[2];

static const MR_ConstString hlds__proc_table_struct__hlds__proc_table_struct__field_names_table_step_desc_0_0[2];

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_step_desc_0_0;

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_step_desc_0_0[1];

static const MR_DuPtagLayout hlds__proc_table_struct__hlds__proc_table_struct__du_ptag_ordered_table_step_desc_0[1];

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_name_ordered_table_step_desc_0[1];

static const MR_Integer hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_table_step_desc_0[1];

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_0;

static const MR_PseudoTypeInfo hlds__proc_table_struct__hlds__proc_table_struct__field_types_table_trie_step_0_1[1];

static const MR_DuArgLocn hlds__proc_table_struct__hlds__proc_table_struct__field_locns_table_trie_step_0_1[1];

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_1;

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_2;

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_3;

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_4;

static const MR_PseudoTypeInfo hlds__proc_table_struct__hlds__proc_table_struct__field_types_table_trie_step_0_5[1];

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_5;

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_6;

static const MR_PseudoTypeInfo hlds__proc_table_struct__hlds__proc_table_struct__field_types_table_trie_step_0_7[3];

static const MR_DuArgLocn hlds__proc_table_struct__hlds__proc_table_struct__field_locns_table_trie_step_0_7[3];

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_7;

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_8;

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_9;

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_10;

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_trie_step_0_0[8];

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_trie_step_0_1[1];

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_trie_step_0_2[1];

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_trie_step_0_3[1];

static const MR_DuPtagLayout hlds__proc_table_struct__hlds__proc_table_struct__du_ptag_ordered_table_trie_step_0[4];

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_name_ordered_table_trie_step_0[11];

static const MR_Integer hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_table_trie_step_0[11];

static const MR_EnumFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_value_or_addr_0_0;

static const MR_EnumFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_value_or_addr_0_1;

static const MR_EnumFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__enum_ordinal_ordered_table_value_or_addr_0[2];

static const MR_EnumFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__enum_name_ordered_table_value_or_addr_0[2];

static const MR_Integer hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_table_value_or_addr_0[2];

static MR_bool MR_CALL 
hlds__proc_table_struct____Unify____proc_table_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__proc_table_struct____Compare____proc_table_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__proc_table_struct____Unify____table_is_poly_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__proc_table_struct____Compare____table_is_poly_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__proc_table_struct____Unify____table_step_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__proc_table_struct____Compare____table_step_desc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__proc_table_struct____Unify____table_trie_step_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__proc_table_struct____Compare____table_trie_step_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__proc_table_struct____Unify____table_value_or_addr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__proc_table_struct____Compare____table_value_or_addr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__proc_table_struct_scalar_common_1[3][2];




static /* final */ const MR_Box hlds__proc_table_struct_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_table_step_desc_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__proc_table_struct_scalar_common_1[1]))
  },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 hlds__proc_table_struct__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__proc_table_struct__list__ti_list_1hlds__proc_table_struct__type_ctor_info_table_step_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_table_step_desc_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__proc_table_struct__maybe__ti_maybe_1list__ti_list_1hlds__proc_table_struct__type_ctor_info_table_step_desc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&hlds__proc_table_struct__list__ti_list_1hlds__proc_table_struct__type_ctor_info_table_step_desc_0) }
};

static const MR_PseudoTypeInfo hlds__proc_table_struct__hlds__proc_table_struct__field_types_proc_table_struct_info_0_0[9] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0),
  (MR_PseudoTypeInfo) (&hlds__proc_table_struct__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__proc_table_struct__list__ti_list_1hlds__proc_table_struct__type_ctor_info_table_step_desc_0),
  (MR_PseudoTypeInfo) (&hlds__proc_table_struct__maybe__ti_maybe_1list__ti_list_1hlds__proc_table_struct__type_ctor_info_table_step_desc_0),
  (MR_PseudoTypeInfo) (&hlds__proc_info_types__hlds__proc_info_types__type_ctor_info_table_arg_infos_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tabled_eval_method_0)
};

static const MR_ConstString hlds__proc_table_struct__hlds__proc_table_struct__field_names_proc_table_struct_info_0_0[9] = {
  (MR_String) "ptsi_proc_label",
  (MR_String) "ptsi_tvarset",
  (MR_String) "ptsi_context",
  (MR_String) "ptsi_num_inputs",
  (MR_String) "ptsi_num_outputs",
  (MR_String) "ptsi_input_steps",
  (MR_String) "ptsi_maybe_output_steps",
  (MR_String) "ptsi_gen_arg_infos",
  (MR_String) "ptsi_eval_method"
};

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_proc_table_struct_info_0_0 = {
  (MR_String) "proc_table_struct_info",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__proc_table_struct__hlds__proc_table_struct__field_types_proc_table_struct_info_0_0,
  hlds__proc_table_struct__hlds__proc_table_struct__field_names_proc_table_struct_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_proc_table_struct_info_0_0[1] = { &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_proc_table_struct_info_0_0 };

static const MR_DuPtagLayout hlds__proc_table_struct__hlds__proc_table_struct__du_ptag_ordered_proc_table_struct_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_proc_table_struct_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_name_ordered_proc_table_struct_info_0[1] = { &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_proc_table_struct_info_0_0 };

static const MR_Integer hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_proc_table_struct_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_proc_table_struct_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__proc_table_struct____Unify____proc_table_struct_info_0_0_10001)),
  ((MR_Box) (hlds__proc_table_struct____Compare____proc_table_struct_info_0_0_10001)),
  (MR_String) "hlds.proc_table_struct",
  (MR_String) "proc_table_struct_info",
  { hlds__proc_table_struct__hlds__proc_table_struct__du_name_ordered_proc_table_struct_info_0 },
  { hlds__proc_table_struct__hlds__proc_table_struct__du_ptag_ordered_proc_table_struct_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_proc_table_struct_info_0,

};

static const MR_EnumFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_is_poly_0_0 = {
  (MR_String) "table_is_mono",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_is_poly_0_1 = {
  (MR_String) "table_is_poly",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__enum_ordinal_ordered_table_is_poly_0[2] = {
  &hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_is_poly_0_0,
  &hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_is_poly_0_1
};

static const MR_EnumFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__enum_name_ordered_table_is_poly_0[2] = {
  &hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_is_poly_0_0,
  &hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_is_poly_0_1
};

static const MR_Integer hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_table_is_poly_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_table_is_poly_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__proc_table_struct____Unify____table_is_poly_0_0_10001)),
  ((MR_Box) (hlds__proc_table_struct____Compare____table_is_poly_0_0_10001)),
  (MR_String) "hlds.proc_table_struct",
  (MR_String) "table_is_poly",
  { hlds__proc_table_struct__hlds__proc_table_struct__enum_name_ordered_table_is_poly_0 },
  { hlds__proc_table_struct__hlds__proc_table_struct__enum_ordinal_ordered_table_is_poly_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_table_is_poly_0,

};

static const MR_PseudoTypeInfo hlds__proc_table_struct__hlds__proc_table_struct__field_types_table_step_desc_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_table_trie_step_0)
};

static const MR_ConstString hlds__proc_table_struct__hlds__proc_table_struct__field_names_table_step_desc_0_0[2] = {
  (MR_String) "tsd_var_name",
  (MR_String) "tsd_step"
};

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_step_desc_0_0 = {
  (MR_String) "table_step_desc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__proc_table_struct__hlds__proc_table_struct__field_types_table_step_desc_0_0,
  hlds__proc_table_struct__hlds__proc_table_struct__field_names_table_step_desc_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_step_desc_0_0[1] = { &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_step_desc_0_0 };

static const MR_DuPtagLayout hlds__proc_table_struct__hlds__proc_table_struct__du_ptag_ordered_table_step_desc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_step_desc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_name_ordered_table_step_desc_0[1] = { &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_step_desc_0_0 };

static const MR_Integer hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_table_step_desc_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_table_step_desc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__proc_table_struct____Unify____table_step_desc_0_0_10001)),
  ((MR_Box) (hlds__proc_table_struct____Compare____table_step_desc_0_0_10001)),
  (MR_String) "hlds.proc_table_struct",
  (MR_String) "table_step_desc",
  { hlds__proc_table_struct__hlds__proc_table_struct__du_name_ordered_table_step_desc_0 },
  { hlds__proc_table_struct__hlds__proc_table_struct__du_ptag_ordered_table_step_desc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_table_step_desc_0,

};

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_0 = {
  (MR_String) "table_trie_step_dummy",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__proc_table_struct__hlds__proc_table_struct__field_types_table_trie_step_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0) };

static const MR_DuArgLocn hlds__proc_table_struct__hlds__proc_table_struct__field_locns_table_trie_step_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_1 = {
  (MR_String) "table_trie_step_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__proc_table_struct__hlds__proc_table_struct__field_types_table_trie_step_0_1,
  NULL,
  hlds__proc_table_struct__hlds__proc_table_struct__field_locns_table_trie_step_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_2 = {
  (MR_String) "table_trie_step_char",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_3 = {
  (MR_String) "table_trie_step_string",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_4 = {
  (MR_String) "table_trie_step_float",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__proc_table_struct__hlds__proc_table_struct__field_types_table_trie_step_0_5[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_5 = {
  (MR_String) "table_trie_step_enum",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(5),
  hlds__proc_table_struct__hlds__proc_table_struct__field_types_table_trie_step_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_6 = {
  (MR_String) "table_trie_step_foreign_enum",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__proc_table_struct__hlds__proc_table_struct__field_types_table_trie_step_0_7[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_table_is_poly_0),
  (MR_PseudoTypeInfo) (&hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_table_value_or_addr_0)
};

static const MR_DuArgLocn hlds__proc_table_struct__hlds__proc_table_struct__field_locns_table_trie_step_0_7[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_7 = {
  (MR_String) "table_trie_step_general",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(7),
  hlds__proc_table_struct__hlds__proc_table_struct__field_types_table_trie_step_0_7,
  NULL,
  hlds__proc_table_struct__hlds__proc_table_struct__field_locns_table_trie_step_0_7,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_8 = {
  (MR_String) "table_trie_step_typeinfo",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_9 = {
  (MR_String) "table_trie_step_typeclassinfo",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_10 = {
  (MR_String) "table_trie_step_promise_implied",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_trie_step_0_0[8] = {
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_0,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_2,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_3,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_4,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_6,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_8,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_9,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_10
};

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_trie_step_0_1[1] = { &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_1 };

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_trie_step_0_2[1] = { &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_5 };

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_trie_step_0_3[1] = { &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_7 };

static const MR_DuPtagLayout hlds__proc_table_struct__hlds__proc_table_struct__du_ptag_ordered_table_trie_step_0[4] = {
  {
    UINT32_C(8),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_trie_step_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_trie_step_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_trie_step_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__proc_table_struct__hlds__proc_table_struct__du_stag_ordered_table_trie_step_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__du_name_ordered_table_trie_step_0[11] = {
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_2,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_0,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_5,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_4,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_6,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_7,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_1,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_10,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_3,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_9,
  &hlds__proc_table_struct__hlds__proc_table_struct__du_functor_desc_table_trie_step_0_8
};

static const MR_Integer hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_table_trie_step_0[11] = {
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 10,
  (MR_Integer) 9,
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_table_trie_step_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__proc_table_struct____Unify____table_trie_step_0_0_10001)),
  ((MR_Box) (hlds__proc_table_struct____Compare____table_trie_step_0_0_10001)),
  (MR_String) "hlds.proc_table_struct",
  (MR_String) "table_trie_step",
  { hlds__proc_table_struct__hlds__proc_table_struct__du_name_ordered_table_trie_step_0 },
  { hlds__proc_table_struct__hlds__proc_table_struct__du_ptag_ordered_table_trie_step_0 },
  (MR_Integer) 11,
  UINT16_C(12),
  hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_table_trie_step_0,

};

static const MR_EnumFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_value_or_addr_0_0 = {
  (MR_String) "table_value",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_value_or_addr_0_1 = {
  (MR_String) "table_addr",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__enum_ordinal_ordered_table_value_or_addr_0[2] = {
  &hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_value_or_addr_0_0,
  &hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_value_or_addr_0_1
};

static const MR_EnumFunctorDescPtr hlds__proc_table_struct__hlds__proc_table_struct__enum_name_ordered_table_value_or_addr_0[2] = {
  &hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_value_or_addr_0_1,
  &hlds__proc_table_struct__hlds__proc_table_struct__enum_functor_desc_table_value_or_addr_0_0
};

static const MR_Integer hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_table_value_or_addr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_table_value_or_addr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__proc_table_struct____Unify____table_value_or_addr_0_0_10001)),
  ((MR_Box) (hlds__proc_table_struct____Compare____table_value_or_addr_0_0_10001)),
  (MR_String) "hlds.proc_table_struct",
  (MR_String) "table_value_or_addr",
  { hlds__proc_table_struct__hlds__proc_table_struct__enum_name_ordered_table_value_or_addr_0 },
  { hlds__proc_table_struct__hlds__proc_table_struct__enum_ordinal_ordered_table_value_or_addr_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__proc_table_struct__hlds__proc_table_struct__functor_number_map_table_value_or_addr_0,

};

void MR_CALL 
hlds__proc_table_struct____Compare____table_value_or_addr_0_0(
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
hlds__proc_table_struct____Unify____table_value_or_addr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__proc_table_struct____Compare____table_step_desc_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      hlds__proc_table_struct____Compare____table_trie_step_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
hlds__proc_table_struct____Compare____table_trie_step_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_16 == CastY_17);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 5:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 6:
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 6:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 7:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                  case (MR_Integer) 5:
                  case (MR_Integer) 6:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 7:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 15);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 15);
              MR_Integer Var_27 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_28 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_27 < Var_28);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_27 > Var_28);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ArgX1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 0))));

              succeeded = (ArgX1_6 < ArgY1_7);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_6 > ArgY1_7);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 0))));
              MR_Word ArgX2_11 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
              MR_Word ArgY2_12 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) >> 1)) & (MR_Integer) 1);
              MR_Word ArgX3_14 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
              MR_Word ArgY3_15 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
              MR_Word SubResult1_10;

              parse_tree__prog_data____Compare____mer_type_0_0(&SubResult1_10, ArgX1_8, ArgY1_9);
              succeeded = (SubResult1_10 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_10;
              else
              {
                MR_Word SubResult2_13;
                MR_Integer Var_23 = (MR_Integer) (ArgX2_11);
                MR_Integer Var_24 = (MR_Integer) (ArgY2_12);

                succeeded = (Var_23 < Var_24);
                if (succeeded)
                {
                  SubResult2_13 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_23 > Var_24);
                  if (succeeded)
                  {
                    SubResult2_13 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_13;
                else
                {
                  MR_Integer Var_25 = (MR_Integer) (ArgX3_14);
                  MR_Integer Var_26 = (MR_Integer) (ArgY3_15);

                  succeeded = (Var_25 < Var_26);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_25 > Var_26);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
hlds__proc_table_struct____Unify____table_step_desc_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = hlds__proc_table_struct____Unify____table_trie_step_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__proc_table_struct____Unify____table_trie_step_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_14 == CastX_13);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 15);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 15);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) >> 1)) & (MR_Integer) 1);
          MR_Word ArgY2_10;
          MR_Word ArgX3_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
          MR_Word ArgY3_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
            ArgY2_10 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
            ArgY3_12 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_7, ArgY1_8);
            if (succeeded)
            {
              succeeded = (ArgX2_9 == ArgY2_10);
              if (succeeded)
                succeeded = (ArgX3_11 == ArgY3_12);
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
hlds__proc_table_struct____Compare____table_is_poly_0_0(
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
hlds__proc_table_struct____Unify____table_is_poly_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__proc_table_struct____Compare____proc_table_struct_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word SubResult1_6;

    hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__proc_table_struct_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__term_context____Compare____term_context_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__proc_table_struct_scalar_common_1[1]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__proc_table_struct_scalar_common_1[2]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  hlds__proc_info_types____Compare____table_arg_infos_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                    parse_tree__prog_data_pragma____Compare____tabled_eval_method_0_0(HeadVar__1_1, ArgX9_28, ArgY9_29);
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
hlds__proc_table_struct____Unify____proc_table_struct_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_27_27;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));

    succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_24_24 = (MR_Word) (&hlds__proc_table_struct_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              TypeInfo_26_26 = (MR_Word) (&hlds__proc_table_struct_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_27_27 = (MR_Word) (&hlds__proc_table_struct_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  succeeded = hlds__proc_info_types____Unify____table_arg_infos_0_0(ArgX8_17, ArgY8_18);
                  if (succeeded)
                    succeeded = parse_tree__prog_data_pragma____Unify____tabled_eval_method_0_0(ArgX9_19, ArgY9_20);
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_String MR_CALL 
hlds__proc_table_struct__table_step_stats_kind_1_f_0(
  MR_Word Step_3)
{
  MR_String KindStr_4;

  switch (MR_tag((MR_Word) Step_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Step_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 7:
          KindStr_4 = (MR_String) "MR_TABLE_STATS_DETAIL_NONE";
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
          KindStr_4 = (MR_String) "MR_TABLE_STATS_DETAIL_HASH";
          break;
      }
      break;
    case (MR_Integer) 1:
      KindStr_4 = (MR_String) "MR_TABLE_STATS_DETAIL_HASH";
      break;
    case (MR_Integer) 2:
      KindStr_4 = (MR_String) "MR_TABLE_STATS_DETAIL_ENUM";
      break;
    case (MR_Integer) 3:
      {
        MR_Word IsPoly_8 = ((((MR_Unsigned) ((MR_hl_field(3, Step_3, 1))) >> 1)) & (MR_Integer) 1);
        MR_Word ValueOrAddr_9 = ((MR_Unsigned) ((MR_hl_field(3, Step_3, 1))) & (MR_Integer) 1);

        switch (ValueOrAddr_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            KindStr_4 = (MR_String) "MR_TABLE_STATS_DETAIL_HASH";
            break;
          case (MR_Integer) 0:
            switch (IsPoly_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                KindStr_4 = (MR_String) "MR_TABLE_STATS_DETAIL_DU";
                break;
              case (MR_Integer) 1:
                KindStr_4 = (MR_String) "MR_TABLE_STATS_DETAIL_POLY";
                break;
            }
            break;
        }
      }
      break;
  }
  return KindStr_4;
}

static MR_bool MR_CALL 
hlds__proc_table_struct____Unify____proc_table_struct_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__proc_table_struct____Unify____proc_table_struct_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__proc_table_struct____Compare____proc_table_struct_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__proc_table_struct____Compare____proc_table_struct_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__proc_table_struct____Unify____table_is_poly_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__proc_table_struct____Unify____table_is_poly_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__proc_table_struct____Compare____table_is_poly_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__proc_table_struct____Compare____table_is_poly_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__proc_table_struct____Unify____table_step_desc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__proc_table_struct____Unify____table_step_desc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__proc_table_struct____Compare____table_step_desc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__proc_table_struct____Compare____table_step_desc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__proc_table_struct____Unify____table_trie_step_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__proc_table_struct____Unify____table_trie_step_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__proc_table_struct____Compare____table_trie_step_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__proc_table_struct____Compare____table_trie_step_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__proc_table_struct____Unify____table_value_or_addr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__proc_table_struct____Unify____table_value_or_addr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__proc_table_struct____Compare____table_value_or_addr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__proc_table_struct____Compare____table_value_or_addr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__proc_table_struct__init(void)
{
}

void mercury__hlds__proc_table_struct__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_proc_table_struct_info_0);
  MR_register_type_ctor_info(&hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_table_is_poly_0);
  MR_register_type_ctor_info(&hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_table_step_desc_0);
  MR_register_type_ctor_info(&hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_table_trie_step_0);
  MR_register_type_ctor_info(&hlds__proc_table_struct__hlds__proc_table_struct__type_ctor_info_table_value_or_addr_0);
}

void mercury__hlds__proc_table_struct__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__proc_table_struct__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.proc_table_struct.
