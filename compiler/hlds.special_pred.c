/*
** Automatically generated from `special_pred.m'
** by the Mercury compiler,
** version rotd-2023-03-31
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


// :- module hlds.special_pred.
// :- implementation.

/*
INIT mercury__hlds__special_pred__init
ENDINIT
*/

#include "hlds.special_pred.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
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
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s {
  MR_bool hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded;
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__HeadCtor_19;
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TailCtors_20;
  jmp_buf hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0;
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__MaybeExistConstraints_23;
  MR_Word hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_31;
  MR_Box hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_31;
};


static const MR_FA_TypeInfo_Struct2 hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo hlds__special_pred__hlds__special_pred__field_types_special_pred_maps_0_0[3];

static const MR_ConstString hlds__special_pred__hlds__special_pred__field_names_special_pred_maps_0_0[3];

static const MR_DuFunctorDesc hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0;

static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_stag_ordered_special_pred_maps_0_0[1];

static const MR_DuPtagLayout hlds__special_pred__hlds__special_pred__du_ptag_ordered_special_pred_maps_0[1];

static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_name_ordered_special_pred_maps_0[1];

static const MR_Integer hlds__special_pred__hlds__special_pred__functor_number_map_special_pred_maps_0[1];

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__special_pred_scalar_common_1[4][2];

static /* final */ const MR_Box hlds__special_pred_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__special_pred_scalar_common_3[15][1];


struct hlds__special_pred__vector_common_type_4_0_s {
  const MR_Word hlds__special_pred__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct hlds__special_pred__vector_common_type_4_0_s hlds__special_pred_vector_common_4[10];



static /* final */ const MR_Box hlds__special_pred_scalar_common_1[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &hlds__special_pred_scalar_common_1[1])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &hlds__special_pred_scalar_common_1[2])))
  },
};

static /* final */ const MR_Box hlds__special_pred_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__special_pred_scalar_common_3[15][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "character"))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "float"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "int"))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "int16"))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "int32"))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "int64"))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "int8"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "uint"))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "uint16"))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "uint32"))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "uint64"))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "uint8"))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "string"))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "tuple"))
  },
};


static /* final */ const struct hlds__special_pred__vector_common_type_4_0_s hlds__special_pred_vector_common_4[10] = {
  /* row   0 */   { (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[2])) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[7])) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[6])) },
  /* row   3 */   { (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[11])) },
  /* row   4 */   { (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[3])) },
  /* row   5 */   { (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[8])) },
  /* row   6 */   { (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[4])) },
  /* row   7 */   { (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[9])) },
  /* row   8 */   { (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[5])) },
  /* row   9 */   { (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[10])) },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_TypeInfo_Struct2 hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)
  }
};

static const MR_PseudoTypeInfo hlds__special_pred__hlds__special_pred__field_types_special_pred_maps_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__special_pred__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_pred__type_ctor_info_pred_id_0)
};

static const MR_ConstString hlds__special_pred__hlds__special_pred__field_names_special_pred_maps_0_0[3] = {
  (MR_String) "spm_unify_map",
  (MR_String) "spm_index_map",
  (MR_String) "spm_compare_map"
};

static const MR_DuFunctorDesc hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0 = {
  (MR_String) "special_pred_maps",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__special_pred__hlds__special_pred__field_types_special_pred_maps_0_0,
  hlds__special_pred__hlds__special_pred__field_names_special_pred_maps_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_stag_ordered_special_pred_maps_0_0[1] = {
  &hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0
};

static const MR_DuPtagLayout hlds__special_pred__hlds__special_pred__du_ptag_ordered_special_pred_maps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__special_pred__hlds__special_pred__du_stag_ordered_special_pred_maps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__special_pred__hlds__special_pred__du_name_ordered_special_pred_maps_0[1] = {
  &hlds__special_pred__hlds__special_pred__du_functor_desc_special_pred_maps_0_0
};

static const MR_Integer hlds__special_pred__hlds__special_pred__functor_number_map_special_pred_maps_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__special_pred__hlds__special_pred__type_ctor_info_special_pred_maps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__special_pred____Unify____special_pred_maps_0_0_10001)),
  ((MR_Box) (hlds__special_pred____Compare____special_pred_maps_0_0_10001)),
  (MR_String) "hlds.special_pred",
  (MR_String) "special_pred_maps",
  { hlds__special_pred__hlds__special_pred__du_name_ordered_special_pred_maps_0 },
  { hlds__special_pred__hlds__special_pred__du_ptag_ordered_special_pred_maps_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__special_pred__hlds__special_pred__functor_number_map_special_pred_maps_0,

};

void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__special_pred_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__special_pred_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__special_pred_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0(
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
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__special_pred_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&hlds__special_pred_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&hlds__special_pred_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__special_pred__get_special_proc_det_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word SpecialPredId_9,
  MR_Word * PredName_10,
  MR_Word * PredId_11,
  MR_Integer * ProcId_12)
{
  MR_bool succeeded;
  MR_Word PredNamePrime_13;
  MR_Word PredIdPrime_14;
  MR_Integer ProcIdPrime_15;

  succeeded = hlds__special_pred__get_special_proc_6_p_0(ModuleInfo_7, TypeCtor_8, SpecialPredId_9, &PredNamePrime_13, &PredIdPrime_14, &ProcIdPrime_15);
  if (succeeded)
  {
    *PredName_10 = PredNamePrime_13;
    *PredId_11 = PredIdPrime_14;
    *ProcId_12 = ProcIdPrime_15;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.special_pred.get_special_proc_det\'/6", (MR_String) "get_special_proc failed");
      return;
    }
}

MR_bool MR_CALL 
hlds__special_pred__get_special_proc_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word TypeCtor_8,
  MR_Word SpecialPredId_9,
  MR_Word * PredName_10,
  MR_Word * PredId_11,
  MR_Integer * ProcId_12)
{
  MR_bool succeeded;
  MR_Word TypeCategory_13;
  MR_Word MaybeBuiltinTypeName_14;

  TypeCategory_13 = check_hlds__type_util__classify_type_ctor_2_f_0(ModuleInfo_7, TypeCtor_8);
  switch (MR_tag((MR_Word) TypeCategory_13)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TypeCategory_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeBuiltinTypeName_14 = (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[13]));
          break;
        case (MR_Integer) 1:
          MaybeBuiltinTypeName_14 = (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[14]));
          break;
        case (MR_Integer) 2:
          MaybeBuiltinTypeName_14 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.special_pred.get_ctor_cat_builtin_type_name\'/1", (MR_String) "variable type");
          break;
        case (MR_Integer) 4:
          mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.special_pred.get_ctor_cat_builtin_type_name\'/1", (MR_String) "void_type");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_79 = ((MR_Word) ((MR_hl_field(1, TypeCategory_13, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) Var_79)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Var_79)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaybeBuiltinTypeName_14 = (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[1]));
                break;
              case (MR_Integer) 1:
                MaybeBuiltinTypeName_14 = (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[0]));
                break;
              case (MR_Integer) 2:
                MaybeBuiltinTypeName_14 = (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_3[12]));
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_80 = ((MR_Unsigned) ((MR_hl_field(1, Var_79, (MR_Integer) 0))) & (MR_Integer) 15);

              MaybeBuiltinTypeName_14 = ((&hlds__special_pred_vector_common_4[0 + Var_80]))->hlds__special_pred__vector_common_type_4_0__vct_4_f_0;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      MaybeBuiltinTypeName_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      MaybeBuiltinTypeName_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  if ((MaybeBuiltinTypeName_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word SpecialPredMaps_15;
    MR_Word PredInfo_16;
    MR_Word Module_17;
    MR_String Name_18;
    MR_Integer ProcInt_19;

    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(ModuleInfo_7, &SpecialPredMaps_15);
    succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(SpecialPredMaps_15, SpecialPredId_9, TypeCtor_8, PredId_11);
    if (succeeded)
    {
      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, *PredId_11, &PredInfo_16);
      Module_17 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_16);
      Name_18 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_16);
      ProcInt_19 = (MR_Integer) 0;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *PredName_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Module_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (Name_18));
      }
      hlds__hlds_pred__proc_id_to_int_2_p_1(ProcId_12, ProcInt_19);
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_String BuiltinTypeName_20 = ((MR_String) ((MR_hl_field(1, MaybeBuiltinTypeName_14, (MR_Integer) 0))));
    MR_String SpecialName_21;
    MR_Integer Arity_23;
    MR_Word UserArity_24;
    MR_String Var_26;
    MR_String Var_27;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_String Name_33;
    MR_String Var_22;

    mdbcomp__prim_data__special_pred_name_arity_4_p_0(SpecialPredId_9, &SpecialName_21, &Var_22, &Arity_23);
    Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "_", BuiltinTypeName_20);
    Var_26 = mercury__string__f_43_43_2_f_0(SpecialName_21, Var_27);
    Name_33 = mercury__string__f_43_43_2_f_0((MR_String) "builtin_", Var_26);
    UserArity_24 = (MR_Word) (Arity_23);
    Var_29 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    hlds__pred_table__lookup_builtin_pred_proc_id_8_p_0(ModuleInfo_7, Var_29, Name_33, (MR_Integer) 0, UserArity_24, (MR_Word) ((MR_Unsigned) 0U), PredId_11, ProcId_12);
    Var_32 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *PredName_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, base, 1) = ((MR_Box) (Name_33));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(
  MR_Word ModuleInfo_2)
{
  MR_bool succeeded;
  MR_Word Globals_3;
  MR_Word Target_4;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_2, &Globals_3);
  libs__globals__get_target_2_p_0(Globals_3, &Target_4);
  switch (Target_4) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 2:
      succeeded = MR_TRUE;
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word TypeCtor_5,
  MR_Word TypeBody_6)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) TypeBody_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeBody_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Word NonCanonical_9;

  if (succeeded)
  {
  }
  succeeded = !(succeeded);
  if (!(succeeded))
  {
    MR_Word Globals_11;
    MR_Word Target_12;
    MR_String Var_8;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_11);
    libs__globals__get_target_2_p_0(Globals_11, &Target_12);
    switch (Target_12) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
      succeeded = hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(TypeCtor_5, &Var_8);
  }
  if (succeeded)
  {
    succeeded = check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(TypeCtor_5, TypeBody_6);
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_4, TypeBody_6, &NonCanonical_9);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) NonCanonical_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, NonCanonical_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
        }
      }
      succeeded = !(succeeded);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(
  MR_Word TypeCtor_3,
  MR_String * TypeName_4)
{
  MR_bool succeeded;
  MR_Word Builtin_5;
  MR_Word Var_6;
  MR_Integer Var_7;
  MR_Word Var_8;

  Builtin_5 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  Var_6 = ((MR_Word) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 0))));
  Var_7 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 1))));
  succeeded = ((MR_tag((MR_Word) Var_6)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(1, Var_6, (MR_Integer) 0))));
    *TypeName_4 = ((MR_String) ((MR_hl_field(1, Var_6, (MR_Integer) 1))));
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Builtin_5, Var_8);
    if (succeeded)
    {
      succeeded = (Var_7 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data__is_builtin_type_name_1_p_0(*TypeName_4);
        if (!(succeeded))
          succeeded = (strcmp(*TypeName_4, (MR_String) "pred") == 0);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__special_pred__special_pred_is_generated_lazily_for_defn_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word TypeCtor_6,
  MR_Word TypeBody_7,
  MR_Word TypeStatus_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) TypeBody_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeBody_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
  MR_Word Var_13;
  MR_Word CtorCat0_10;

  if (succeeded)
  {
  }
  succeeded = !(succeeded);
  if (succeeded)
  {
    succeeded = ((((MR_tag((MR_Word) TypeBody_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TypeBody_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(3, TypeBody_7, (MR_Integer) 1))));
      succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 12U));
    }
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = check_hlds__type_util__classify_type_ctor_if_special_2_p_0(TypeCtor_6, &CtorCat0_10);
      if (succeeded)
      {
        succeeded = (CtorCat0_10 == (MR_Word) ((MR_Unsigned) 4U));
        if (!(succeeded))
        {
          MR_Word Var_15;
          MR_Word Var_21;
          MR_Word Var_22;

          Var_15 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(CtorCat0_10);
          succeeded = (Var_15 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_21 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_8);
            succeeded = (Var_21 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) TypeBody_7)) == (MR_Integer) 1);
              if (succeeded)
              {
              }
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_22 = (MR_Integer) 0;
                succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(ModuleInfo_5, Var_22, TypeBody_7);
                succeeded = !(succeeded);
              }
            }
          }
        }
      }
      else
      {
        MR_Word Var_18;
        MR_Word Var_19;

        Var_18 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_8);
        succeeded = (Var_18 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) TypeBody_7)) == (MR_Integer) 1);
          if (succeeded)
          {
          }
          succeeded = !(succeeded);
          if (succeeded)
          {
            Var_19 = (MR_Integer) 0;
            succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(ModuleInfo_5, Var_19, TypeBody_7);
            succeeded = !(succeeded);
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
hlds__special_pred__special_pred_is_generated_lazily_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word TypeCtor_4)
{
  MR_bool succeeded;
  MR_Word CtorCat0_5;

  succeeded = check_hlds__type_util__classify_type_ctor_if_special_2_p_0(TypeCtor_4, &CtorCat0_5);
  if (succeeded)
  {
    succeeded = (CtorCat0_5 == (MR_Word) ((MR_Unsigned) 4U));
    if (!(succeeded))
    {
      MR_Word Var_13;
      MR_Word TypeTable_14;
      MR_Word TypeDefn_15;
      MR_Word TypeBody_16;
      MR_Word TypeStatus_17;
      MR_Word Var_27;
      MR_Word Var_28;

      Var_13 = parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(CtorCat0_5);
      succeeded = (Var_13 == (MR_Integer) 1);
      if (succeeded)
      {
        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_14);
        succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_14, TypeCtor_4, &TypeDefn_15);
        if (succeeded)
        {
          hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_15, &TypeBody_16);
          hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_15, &TypeStatus_17);
          Var_27 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_17);
          succeeded = (Var_27 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) TypeBody_16)) == (MR_Integer) 1);
            if (succeeded)
            {
            }
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_28 = (MR_Integer) 0;
              succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(ModuleInfo_3, Var_28, TypeBody_16);
              succeeded = !(succeeded);
            }
          }
        }
      }
    }
  }
  else
  {
    MR_Word TypeTable_8;
    MR_Word TypeDefn_9;
    MR_Word TypeBody_10;
    MR_Word TypeStatus_11;
    MR_Word Var_24;
    MR_Word Var_25;

    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_8);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_8, TypeCtor_4, &TypeDefn_9);
    if (succeeded)
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeBody_10);
      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_9, &TypeStatus_11);
      Var_24 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_11);
      succeeded = (Var_24 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) TypeBody_10)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_25 = (MR_Integer) 0;
          succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(ModuleInfo_3, Var_25, TypeBody_10);
          succeeded = !(succeeded);
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) (env_ptr_arg);

  {
    uint32_t Var_22 = ((uint32_t) (MR_Word) (MR_hl_field(0, (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_31, (MR_Integer) 0)));
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Integer Var_26;
    MR_Word Var_27;
    MR_Word Var_28;

    (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__MaybeExistConstraints_23 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_31, (MR_Integer) 1))));
    Var_24 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_31, (MR_Integer) 2))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_31, (MR_Integer) 3))));
    Var_26 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_31, (MR_Integer) 4))));
    Var_27 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_31, (MR_Integer) 5))));
    (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__MaybeExistConstraints_23 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
    {
      Var_28 = (MR_Word) (MR_body((MR_Word) ((env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__MaybeExistConstraints_23), (MR_Integer) 1));
      hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_31 = ((MR_Word) ((env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_31));
  hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s * env_ptr = (struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__commit_0) == 0)
    {
      {
        (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__Ctor_31 = (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__HeadCtor_19;
        hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_2(env_ptr);
      }
      mercury__list__member_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), &(env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__conv0_Ctor_31, (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TailCtors_20, hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_3, env_ptr);
      (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_TRUE;
}

MR_bool MR_CALL 
hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word SpecialPredId_5,
  MR_Word TypeBody_6)
{
  struct hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0_s env;

  switch (SpecialPredId_5) {
    default:
      (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
      break;
    case (MR_Integer) 2:
      {
        MR_Word NonCanonical_30;

        (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_4, TypeBody_6, &NonCanonical_30);
        if ((env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
        {
          if (((MR_tag((MR_Word) NonCanonical_30)) == (MR_Integer) 1))
            (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_TRUE;
          else
          if (((((MR_tag((MR_Word) NonCanonical_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, NonCanonical_30, (MR_Integer) 0)))) == (MR_Integer) 0))))
            (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_TRUE;
          else
            (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word NonCanonical_7;

        (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(ModuleInfo_4, TypeBody_6, &NonCanonical_7);
        if ((env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
          switch (MR_tag((MR_Word) NonCanonical_7)) {
            default:
              (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, NonCanonical_7, (MR_Integer) 0))))) {
                default:
                  (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = MR_TRUE;
                  break;
              }
              break;
          }
      }
      break;
  }
  if (!((env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded))
  {
    MR_Word TypeBodyDu_18;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;

    (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) TypeBody_6)) == (MR_Integer) 0);
    if ((env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded)
    {
      TypeBodyDu_18 = (MR_Word) ((MR_Word) (TypeBody_6));
      Var_29 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_18, (MR_Integer) 0))));
      Var_32 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_18, (MR_Integer) 1))));
      Var_33 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_18, (MR_Integer) 2))));
      Var_34 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_18, (MR_Integer) 3))));
      Var_35 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_18, (MR_Integer) 4))));
      (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__HeadCtor_19 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 0))));
      (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__TailCtors_20 = ((MR_Word) ((MR_hl_field(0, Var_29, (MR_Integer) 1))));
      hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_4(&env);
    }
  }
  return (env).hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0_env_0__succeeded;
}

void MR_CALL 
hlds__special_pred__special_pred_get_type_det_3_p_0(
  MR_Word SpecialId_4,
  MR_Word ArgTypes_5,
  MR_Word * Type_6)
{
  MR_bool succeeded;
  MR_Word TypePrime_7;

  succeeded = hlds__special_pred__special_pred_get_type_3_p_0(SpecialId_4, ArgTypes_5, &TypePrime_7);
  if (succeeded)
    *Type_6 = TypePrime_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.special_pred.special_pred_get_type_det\'/3", (MR_String) "special_pred_get_type failed");
      return;
    }
}

MR_bool MR_CALL 
hlds__special_pred__special_pred_get_type_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Types_2,
  MR_Word * T_3)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word Var_17;

        mercury__list__reverse_2_p_0((MR_Word) (&hlds__special_pred_scalar_common_1[0]), Types_2, &Var_17);
        succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          *T_3 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_12;
        MR_Word Var_13;

        mercury__list__reverse_2_p_0((MR_Word) (&hlds__special_pred_scalar_common_1[0]), Types_2, &Var_12);
        succeeded = (Var_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_13 = ((MR_Word) ((MR_hl_field(1, Var_12, (MR_Integer) 1))));
          succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            *T_3 = ((MR_Word) ((MR_hl_field(1, Var_13, (MR_Integer) 0))));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_7;

        mercury__list__reverse_2_p_0((MR_Word) (&hlds__special_pred_scalar_common_1[0]), Types_2, &Var_7);
        succeeded = (Var_7 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          *T_3 = ((MR_Word) ((MR_hl_field(1, Var_7, (MR_Integer) 0))));
      }
      break;
  }
  return succeeded;
}

void MR_CALL 
hlds__special_pred__special_pred_interface_5_p_0(
  MR_Word SpecialPredId_6,
  MR_Word Type_7,
  MR_Word * ArgTypes_8,
  MR_Word * ArgModes_9,
  MR_Word * Detism_10)
{
  switch (SpecialPredId_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word Uo_13;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word In_31;

        Var_23 = parse_tree__builtin_lib_types__comparison_result_type_0_f_0();
        {
          Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_25, 0) = ((MR_Box) (Type_7));
          MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (Type_7));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_25));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ArgTypes_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_23));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_24));
        }
        parse_tree__prog_mode__in_mode_1_p_0(&In_31);
        parse_tree__prog_mode__uo_mode_1_p_0(&Uo_13);
        {
          Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_28, 0) = ((MR_Box) (In_31));
          MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (In_31));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_28));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ArgModes_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Uo_13));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_27));
        }
        *Detism_10 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Out_12;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_21;
        MR_Word In_30;

        Var_19 = parse_tree__builtin_lib_types__int_type_0_f_0();
        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
          MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ArgTypes_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Type_7));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_18));
        }
        parse_tree__prog_mode__in_mode_1_p_0(&In_30);
        parse_tree__prog_mode__out_mode_1_p_0(&Out_12);
        {
          Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_21, 0) = ((MR_Box) (Out_12));
          MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ArgModes_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (In_30));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_21));
        }
        *Detism_10 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word In_11;
        MR_Word Var_14;
        MR_Word Var_16;

        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = ((MR_Box) (Type_7));
          MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ArgTypes_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Type_7));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_14));
        }
        parse_tree__prog_mode__in_mode_1_p_0(&In_11);
        {
          Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_16, 0) = ((MR_Box) (In_11));
          MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *ArgModes_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (In_11));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_16));
        }
        *Detism_10 = (MR_Integer) 1;
      }
      break;
  }
}

void MR_CALL 
hlds__special_pred__special_pred_mode_num_2_p_0(
  MR_Word HeadVar__1_3,
  MR_Integer * HeadVar__2_2)
{
  hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_p_0(HeadVar__2_2);
}

void MR_CALL 
hlds__special_pred__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_p_0(
  MR_Integer * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_Integer) 0;
}

void MR_CALL 
hlds__special_pred__special_pred_description_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_String) "comparison predicate";
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_String) "indexing predicate";
      break;
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_String) "unification predicate";
      break;
  }
}

void MR_CALL 
hlds__special_pred__special_pred_list_1_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) (MR_mkword(1, &hlds__special_pred_scalar_common_1[3]));
}

void MR_CALL 
hlds__special_pred__lookup_special_pred_maps_4_p_0(
  MR_Word SpecMaps_5,
  MR_Word SpecialPredId_6,
  MR_Word TypeCtor_7,
  MR_Word * PredId_8)
{
  MR_Word SpecMap_9;
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, SpecMaps_5, (MR_Integer) 2))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, SpecMaps_5, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, SpecMaps_5, (MR_Integer) 0))));
  MR_Box conv0_PredId_8;

  switch (SpecialPredId_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      SpecMap_9 = Var_18;
      break;
    case (MR_Integer) 1:
      SpecMap_9 = Var_19;
      break;
    case (MR_Integer) 0:
      SpecMap_9 = Var_20;
      break;
  }
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), SpecMap_9, ((MR_Box) (TypeCtor_7)), &conv0_PredId_8);
  *PredId_8 = ((MR_Word) (conv0_PredId_8));
}

MR_bool MR_CALL 
hlds__special_pred__search_special_pred_maps_4_p_0(
  MR_Word SpecMaps_5,
  MR_Word SpecialPredId_6,
  MR_Word TypeCtor_7,
  MR_Word * PredId_8)
{
  MR_bool succeeded;
  MR_Word SpecMap_9;
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, SpecMaps_5, (MR_Integer) 2))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, SpecMaps_5, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, SpecMaps_5, (MR_Integer) 0))));
  MR_Box conv0_PredId_8;

  switch (SpecialPredId_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      SpecMap_9 = Var_18;
      break;
    case (MR_Integer) 1:
      SpecMap_9 = Var_19;
      break;
    case (MR_Integer) 0:
      SpecMap_9 = Var_20;
      break;
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), SpecMap_9, ((MR_Box) (TypeCtor_7)), &conv0_PredId_8);
  if (succeeded)
  {
    *PredId_8 = ((MR_Word) (conv0_PredId_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__special_pred____Unify____special_pred_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__special_pred____Unify____special_pred_maps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__special_pred____Compare____special_pred_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__special_pred____Compare____special_pred_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__special_pred__init(void)
{
}

void mercury__hlds__special_pred__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__special_pred__hlds__special_pred__type_ctor_info_special_pred_maps_0);
}

void mercury__hlds__special_pred__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__special_pred__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.special_pred.
