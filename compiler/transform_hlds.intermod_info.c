/*
** Automatically generated from `intermod_info.m'
** by the Mercury compiler,
** version rotd-2023-11-19
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


// :- module transform_hlds.intermod_info.
// :- implementation.

/*
INIT mercury__transform_hlds__intermod_info__init
ENDINIT
*/

#include "transform_hlds.intermod_info.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod_info__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod_info__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod_info__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod_info__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod_info__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_PseudoTypeInfo transform_hlds__intermod_info__transform_hlds__intermod_info__field_types_intermod_info_0_0[7];

static const MR_ConstString transform_hlds__intermod_info__transform_hlds__intermod_info__field_names_intermod_info_0_0[7];

static const MR_DuArgLocn transform_hlds__intermod_info__transform_hlds__intermod_info__field_locns_intermod_info_0_0[7];

static const MR_DuFunctorDesc transform_hlds__intermod_info__transform_hlds__intermod_info__du_functor_desc_intermod_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__intermod_info__transform_hlds__intermod_info__du_stag_ordered_intermod_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__intermod_info__transform_hlds__intermod_info__du_ptag_ordered_intermod_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__intermod_info__transform_hlds__intermod_info__du_name_ordered_intermod_info_0[1];

static const MR_Integer transform_hlds__intermod_info__transform_hlds__intermod_info__functor_number_map_intermod_info_0[1];

static const MR_EnumFunctorDesc transform_hlds__intermod_info__transform_hlds__intermod_info__enum_functor_desc_maybe_need_foreign_import_modules_0_0;

static const MR_EnumFunctorDesc transform_hlds__intermod_info__transform_hlds__intermod_info__enum_functor_desc_maybe_need_foreign_import_modules_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__intermod_info__transform_hlds__intermod_info__enum_ordinal_ordered_maybe_need_foreign_import_modules_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__intermod_info__transform_hlds__intermod_info__enum_name_ordered_maybe_need_foreign_import_modules_0[2];

static const MR_Integer transform_hlds__intermod_info__transform_hlds__intermod_info__functor_number_map_maybe_need_foreign_import_modules_0[2];

static MR_bool MR_CALL 
transform_hlds__intermod_info____Unify____intermod_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod_info____Compare____intermod_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__intermod_info____Unify____maybe_need_foreign_import_modules_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod_info____Compare____maybe_need_foreign_import_modules_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__intermod_info_scalar_common_1[4][2];

static /* final */ const MR_Box transform_hlds__intermod_info_scalar_common_2[2][3];




static /* final */ const MR_Box transform_hlds__intermod_info_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_info_scalar_common_2[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_info_scalar_common_2[1]))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_info_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod_info__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod_info__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod_info__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__intermod_info__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_instance_defn_0) }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod_info__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod_info__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__intermod_info__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0) }
};

static const MR_PseudoTypeInfo transform_hlds__intermod_info__transform_hlds__intermod_info__field_types_intermod_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__intermod_info__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&transform_hlds__intermod_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__intermod_info__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__intermod_info__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_class__type_ctor_info_hlds_instance_defn_0),
  (MR_PseudoTypeInfo) (&transform_hlds__intermod_info__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0),
  (MR_PseudoTypeInfo) (&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_maybe_need_foreign_import_modules_0)
};

static const MR_ConstString transform_hlds__intermod_info__transform_hlds__intermod_info__field_names_intermod_info_0_0[7] = {
  (MR_String) "im_module_info",
  (MR_String) "im_use_modules",
  (MR_String) "im_pred_decls",
  (MR_String) "im_pred_defns",
  (MR_String) "im_instance_defns",
  (MR_String) "im_type_defns",
  (MR_String) "im_need_foreign_imports"
};

static const MR_DuArgLocn transform_hlds__intermod_info__transform_hlds__intermod_info__field_locns_intermod_info_0_0[7] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__intermod_info__transform_hlds__intermod_info__du_functor_desc_intermod_info_0_0 = {
  (MR_String) "intermod_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__intermod_info__transform_hlds__intermod_info__field_types_intermod_info_0_0,
  transform_hlds__intermod_info__transform_hlds__intermod_info__field_names_intermod_info_0_0,
  transform_hlds__intermod_info__transform_hlds__intermod_info__field_locns_intermod_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__intermod_info__transform_hlds__intermod_info__du_stag_ordered_intermod_info_0_0[1] = { &transform_hlds__intermod_info__transform_hlds__intermod_info__du_functor_desc_intermod_info_0_0 };

static const MR_DuPtagLayout transform_hlds__intermod_info__transform_hlds__intermod_info__du_ptag_ordered_intermod_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__intermod_info__transform_hlds__intermod_info__du_stag_ordered_intermod_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__intermod_info__transform_hlds__intermod_info__du_name_ordered_intermod_info_0[1] = { &transform_hlds__intermod_info__transform_hlds__intermod_info__du_functor_desc_intermod_info_0_0 };

static const MR_Integer transform_hlds__intermod_info__transform_hlds__intermod_info__functor_number_map_intermod_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_intermod_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__intermod_info____Unify____intermod_info_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod_info____Compare____intermod_info_0_0_10001)),
  (MR_String) "transform_hlds.intermod_info",
  (MR_String) "intermod_info",
  { transform_hlds__intermod_info__transform_hlds__intermod_info__du_name_ordered_intermod_info_0 },
  { transform_hlds__intermod_info__transform_hlds__intermod_info__du_ptag_ordered_intermod_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__intermod_info__transform_hlds__intermod_info__functor_number_map_intermod_info_0,

};

static const MR_EnumFunctorDesc transform_hlds__intermod_info__transform_hlds__intermod_info__enum_functor_desc_maybe_need_foreign_import_modules_0_0 = {
  (MR_String) "do_not_need_foreign_import_modules",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__intermod_info__transform_hlds__intermod_info__enum_functor_desc_maybe_need_foreign_import_modules_0_1 = {
  (MR_String) "do_need_foreign_import_modules",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod_info__transform_hlds__intermod_info__enum_ordinal_ordered_maybe_need_foreign_import_modules_0[2] = {
  &transform_hlds__intermod_info__transform_hlds__intermod_info__enum_functor_desc_maybe_need_foreign_import_modules_0_0,
  &transform_hlds__intermod_info__transform_hlds__intermod_info__enum_functor_desc_maybe_need_foreign_import_modules_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__intermod_info__transform_hlds__intermod_info__enum_name_ordered_maybe_need_foreign_import_modules_0[2] = {
  &transform_hlds__intermod_info__transform_hlds__intermod_info__enum_functor_desc_maybe_need_foreign_import_modules_0_1,
  &transform_hlds__intermod_info__transform_hlds__intermod_info__enum_functor_desc_maybe_need_foreign_import_modules_0_0
};

static const MR_Integer transform_hlds__intermod_info__transform_hlds__intermod_info__functor_number_map_maybe_need_foreign_import_modules_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_maybe_need_foreign_import_modules_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod_info____Unify____maybe_need_foreign_import_modules_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod_info____Compare____maybe_need_foreign_import_modules_0_0_10001)),
  (MR_String) "transform_hlds.intermod_info",
  (MR_String) "maybe_need_foreign_import_modules",
  { transform_hlds__intermod_info__transform_hlds__intermod_info__enum_name_ordered_maybe_need_foreign_import_modules_0 },
  { transform_hlds__intermod_info__transform_hlds__intermod_info__enum_ordinal_ordered_maybe_need_foreign_import_modules_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__intermod_info__transform_hlds__intermod_info__functor_number_map_maybe_need_foreign_import_modules_0,

};

void MR_CALL 
transform_hlds__intermod_info____Compare____maybe_need_foreign_import_modules_0_0(
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
transform_hlds__intermod_info____Unify____maybe_need_foreign_import_modules_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__intermod_info____Compare____intermod_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_info_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_info_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_info_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_info_scalar_common_1[2]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__intermod_info_scalar_common_1[3]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Integer Var_33 = (MR_Integer) (ArgX7_22);
                MR_Integer Var_34 = (MR_Integer) (ArgY7_23);

                succeeded = (Var_33 < Var_34);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_33 > Var_34);
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
}

MR_bool MR_CALL 
transform_hlds__intermod_info____Unify____intermod_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_24_24;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))) & (MR_Integer) 1);
    MR_Word ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_20_20 = (MR_Word) (&transform_hlds__intermod_info_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_21_21 = (MR_Word) (&transform_hlds__intermod_info_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_22_22 = (MR_Word) (&transform_hlds__intermod_info_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_23_23 = (MR_Word) (&transform_hlds__intermod_info_scalar_common_1[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_24_24 = (MR_Word) (&transform_hlds__intermod_info_scalar_common_1[3]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
                succeeded = (ArgX7_15 == ArgY7_16);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__intermod_info__intermod_info_set_need_foreign_import_modules_2_p_0(
  MR_Word STATE_VARIABLE_IntermodInfo_0_4,
  MR_Word * STATE_VARIABLE_IntermodInfo_5)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_4, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_4, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_4, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_4, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_4, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_4, (MR_Integer) 5))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntermodInfo_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
}

void MR_CALL 
transform_hlds__intermod_info__intermod_info_set_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 4))));
  MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 6))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntermodInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) (Var_14));
  }
}

void MR_CALL 
transform_hlds__intermod_info__intermod_info_set_instances_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 6))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntermodInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) (Var_14));
  }
}

void MR_CALL 
transform_hlds__intermod_info__intermod_info_set_pred_defns_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 2))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 6))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntermodInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) (Var_14));
  }
}

void MR_CALL 
transform_hlds__intermod_info__intermod_info_set_pred_decls_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 6))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntermodInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) (Var_14));
  }
}

void MR_CALL 
transform_hlds__intermod_info__intermod_info_set_use_modules_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_IntermodInfo_0_6,
  MR_Word * STATE_VARIABLE_IntermodInfo_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 0))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 4))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_IntermodInfo_0_6, (MR_Integer) 6))) & (MR_Integer) 1);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_IntermodInfo_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) (Var_14));
  }
}

void MR_CALL 
transform_hlds__intermod_info__intermod_info_get_types_2_p_0(
  MR_Word IntermodInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, IntermodInfo_3, (MR_Integer) 5))));
}

void MR_CALL 
transform_hlds__intermod_info__intermod_info_get_instances_2_p_0(
  MR_Word IntermodInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, IntermodInfo_3, (MR_Integer) 4))));
}

void MR_CALL 
transform_hlds__intermod_info__intermod_info_get_pred_defns_2_p_0(
  MR_Word IntermodInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, IntermodInfo_3, (MR_Integer) 3))));
}

void MR_CALL 
transform_hlds__intermod_info__intermod_info_get_pred_decls_2_p_0(
  MR_Word IntermodInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, IntermodInfo_3, (MR_Integer) 2))));
}

void MR_CALL 
transform_hlds__intermod_info__intermod_info_get_use_modules_2_p_0(
  MR_Word IntermodInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, IntermodInfo_3, (MR_Integer) 1))));
}

void MR_CALL 
transform_hlds__intermod_info__intermod_info_get_module_info_2_p_0(
  MR_Word IntermodInfo_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, IntermodInfo_3, (MR_Integer) 0))));
}

void MR_CALL 
transform_hlds__intermod_info__deconstruct_intermod_info_8_p_0(
  MR_Word IntermodInfo_9,
  MR_Word * ModuleInfo_10,
  MR_Word * Modules_11,
  MR_Word * PredDecls_12,
  MR_Word * PredDefns_13,
  MR_Word * InstanceDefns_14,
  MR_Word * TypeDefns_15,
  MR_Word * NeedFIMs_16)
{
  *ModuleInfo_10 = ((MR_Word) ((MR_hl_field(0, IntermodInfo_9, (MR_Integer) 0))));
  *Modules_11 = ((MR_Word) ((MR_hl_field(0, IntermodInfo_9, (MR_Integer) 1))));
  *PredDecls_12 = ((MR_Word) ((MR_hl_field(0, IntermodInfo_9, (MR_Integer) 2))));
  *PredDefns_13 = ((MR_Word) ((MR_hl_field(0, IntermodInfo_9, (MR_Integer) 3))));
  *InstanceDefns_14 = ((MR_Word) ((MR_hl_field(0, IntermodInfo_9, (MR_Integer) 4))));
  *TypeDefns_15 = ((MR_Word) ((MR_hl_field(0, IntermodInfo_9, (MR_Integer) 5))));
  *NeedFIMs_16 = ((MR_Unsigned) ((MR_hl_field(0, IntermodInfo_9, (MR_Integer) 6))) & (MR_Integer) 1);
}

void MR_CALL 
transform_hlds__intermod_info__init_intermod_info_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * IntermodInfo_4)
{
  MR_Word Modules_5;
  MR_Word PredDecls_6;
  MR_Word PredDefns_7;

  mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &Modules_5);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &PredDecls_6);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), &PredDefns_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    *IntermodInfo_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_3));
    MR_hl_field(0, base, 1) = ((MR_Box) (Modules_5));
    MR_hl_field(0, base, 2) = ((MR_Box) (PredDecls_6));
    MR_hl_field(0, base, 3) = ((MR_Box) (PredDefns_7));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod_info____Unify____intermod_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__intermod_info____Unify____intermod_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_info____Compare____intermod_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__intermod_info____Compare____intermod_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__intermod_info____Unify____maybe_need_foreign_import_modules_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__intermod_info____Unify____maybe_need_foreign_import_modules_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_info____Compare____maybe_need_foreign_import_modules_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__intermod_info____Compare____maybe_need_foreign_import_modules_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__intermod_info__init(void)
{
}

void mercury__transform_hlds__intermod_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_intermod_info_0);
	MR_register_type_ctor_info(&transform_hlds__intermod_info__transform_hlds__intermod_info__type_ctor_info_maybe_need_foreign_import_modules_0);
}

void mercury__transform_hlds__intermod_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__intermod_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.intermod_info.
