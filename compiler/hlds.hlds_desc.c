/*
** Automatically generated from `hlds_desc.m'
** by the Mercury compiler,
** version rotd-2023-06-13
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


// :- module hlds.hlds_desc.
// :- implementation.

/*
INIT mercury__hlds__hlds_desc__init
ENDINIT
*/

#include "hlds.hlds_desc.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
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
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_0;

static const MR_EnumFunctorDesc hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_desc__hlds__hlds_desc__enum_ordinal_ordered_include_module_name_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_desc__hlds__hlds_desc__enum_name_ordered_include_module_name_0[2];

static const MR_Integer hlds__hlds_desc__hlds__hlds_desc__functor_number_map_include_module_name_0[2];

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
hlds__hlds_desc__describe_cast_1_f_0(
  MR_Word CastType_3);

static MR_Box MR_CALL 
hlds__hlds_desc__describe_args_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__hlds_desc____Unify____include_module_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_desc____Compare____include_module_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_desc_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_2[1][1];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_3[1][6];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_5[1][5];

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_6[2][3];


struct hlds__hlds_desc__vector_common_type_4_0_s {
  const MR_String hlds__hlds_desc__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct hlds__hlds_desc__vector_common_type_4_0_s hlds__hlds_desc_vector_common_4[5];



static /* final */ const MR_Box hlds__hlds_desc_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_3[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_desc_scalar_common_6[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_desc__describe_goal_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__hlds_desc_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_desc__describe_goal_3_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct hlds__hlds_desc__vector_common_type_4_0_s hlds__hlds_desc_vector_common_4[5] = {
  /* row   0 */   { (MR_String) "cast" },
  /* row   1 */   { (MR_String) "cast" },
  /* row   2 */   { (MR_String) "cast" },
  /* row   3 */   { (MR_String) "cast" },
  /* row   4 */   { (MR_String) "coerce" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_desc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_EnumFunctorDesc hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_0 = {
  (MR_String) "do_not_include_module_name",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_1 = {
  (MR_String) "include_module_name",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_desc__hlds__hlds_desc__enum_ordinal_ordered_include_module_name_0[2] = {
  &hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_0,
  &hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_desc__hlds__hlds_desc__enum_name_ordered_include_module_name_0[2] = {
  &hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_0,
  &hlds__hlds_desc__hlds__hlds_desc__enum_functor_desc_include_module_name_0_1
};

static const MR_Integer hlds__hlds_desc__hlds__hlds_desc__functor_number_map_include_module_name_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_desc__hlds__hlds_desc__type_ctor_info_include_module_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_desc____Unify____include_module_name_0_0_10001)),
  ((MR_Box) (hlds__hlds_desc____Compare____include_module_name_0_0_10001)),
  (MR_String) "hlds.hlds_desc",
  (MR_String) "include_module_name",
  { hlds__hlds_desc__hlds__hlds_desc__enum_name_ordered_include_module_name_0 },
  { hlds__hlds_desc__hlds__hlds_desc__enum_ordinal_ordered_include_module_name_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_desc__hlds__hlds_desc__functor_number_map_include_module_name_0,

};

void MR_CALL 
hlds__hlds_desc____Compare____include_module_name_0_0(
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
hlds__hlds_desc____Unify____include_module_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_proc_3_f_0(
  MR_Word IncludeModuleName_5,
  MR_Word PredInfo_6,
  MR_Integer ProcId_7)
{
  MR_String ProcDesc_8;
  MR_String PredDesc_9;
  MR_Integer Var_15;
  MR_String Var_17;
  MR_String Var_25;

  PredDesc_9 = hlds__hlds_desc__describe_pred_2_f_0(IncludeModuleName_5, PredInfo_6);
  Var_15 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_7);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_2[0]), Var_15, &Var_17);
  Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_17);
  ProcDesc_8 = mercury__string__f_43_43_2_f_0(PredDesc_9, Var_25);
  return ProcDesc_8;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_proc_from_id_3_f_0(
  MR_Word IncludeModuleName_5,
  MR_Word ModuleInfo_6,
  MR_Word PredProcId_7)
{
  MR_String ProcDesc_8;
  MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(0, PredProcId_7, (MR_Integer) 0))));
  MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(0, PredProcId_7, (MR_Integer) 1))));
  MR_Word PredInfo_11;
  MR_String PredDesc_12;
  MR_Integer Var_18;
  MR_String Var_20;
  MR_String Var_28;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_9, &PredInfo_11);
  PredDesc_12 = hlds__hlds_desc__describe_pred_2_f_0(IncludeModuleName_5, PredInfo_11);
  Var_18 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_10);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_2[0]), Var_18, &Var_20);
  Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_20);
  ProcDesc_8 = mercury__string__f_43_43_2_f_0(PredDesc_12, Var_28);
  return ProcDesc_8;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_pred_from_id_3_f_0(
  MR_Word IncludeModuleName_5,
  MR_Word ModuleInfo_6,
  MR_Word PredId_7)
{
  MR_String PredDesc_8;
  MR_Word PredInfo_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_7, &PredInfo_9);
  PredDesc_8 = hlds__hlds_desc__describe_pred_2_f_0(IncludeModuleName_5, PredInfo_9);
  return PredDesc_8;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_pred_2_f_0(
  MR_Word IncludeModuleName_4,
  MR_Word PredInfo_5)
{
  MR_bool succeeded;
  MR_String ProcDesc_6;
  MR_Word PredOrFunc_7;
  MR_String PredName_8;
  MR_Integer Arity_9;
  MR_Word Origin_10;
  MR_String FullPredName_13;
  MR_Word Var_15;
  MR_Word SpecialId_11;
  MR_Word TypeCtor_12;
  MR_Word Var_16;

  PredOrFunc_7 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_5);
  PredName_8 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
  Var_15 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_5);
  Arity_9 = (MR_Integer) (Var_15);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_5, &Origin_10);
  succeeded = ((MR_tag((MR_Word) Origin_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_16 = ((MR_Word) ((MR_hl_field(1, Origin_10, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      SpecialId_11 = ((MR_Unsigned) ((MR_hl_field(0, Var_16, (MR_Integer) 0))) & (MR_Integer) 3);
      TypeCtor_12 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 1))));
    }
  }
  if (succeeded)
  {
    MR_String Var_20;
    MR_String Var_23;
    MR_String Var_47;
    MR_Word TypeCtorSymName_75;
    MR_Integer TypeCtorArity_76;
    MR_String Var_80;
    MR_String Var_84;
    MR_String Var_92;

    Var_20 = mdbcomp__prim_data__get_special_pred_id_generic_name_1_f_0(SpecialId_11);
    TypeCtorSymName_75 = ((MR_Word) ((MR_hl_field(0, TypeCtor_12, (MR_Integer) 0))));
    TypeCtorArity_76 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_12, (MR_Integer) 1))));
    Var_80 = mdbcomp__sym_name__sym_name_to_string_1_f_0(TypeCtorSymName_75);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_2[0]), TypeCtorArity_76, &Var_84);
    Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_84);
    Var_23 = mercury__string__f_43_43_2_f_0(Var_80, Var_92);
    Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", Var_23);
    FullPredName_13 = mercury__string__f_43_43_2_f_0(Var_20, Var_47);
  }
  else
    FullPredName_13 = PredName_8;
  switch (IncludeModuleName_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_28;
        MR_String Var_63;
        MR_String Var_71;
        MR_String Var_72;
        MR_String Var_74;

        Var_28 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PredOrFunc_7);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_2[0]), Arity_9, &Var_63);
        Var_71 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_63);
        Var_72 = mercury__string__f_43_43_2_f_0(FullPredName_13, Var_71);
        Var_74 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_72);
        ProcDesc_6 = mercury__string__f_43_43_2_f_0(Var_28, Var_74);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModuleName_14;
        MR_String Var_37;
        MR_String Var_40;
        MR_String Var_48;
        MR_String Var_56;
        MR_String Var_57;
        MR_String Var_59;
        MR_String Var_60;
        MR_String Var_62;

        ModuleName_14 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_5);
        Var_37 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PredOrFunc_7);
        Var_40 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_14);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_desc_scalar_common_2[0]), Arity_9, &Var_48);
        Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_48);
        Var_57 = mercury__string__f_43_43_2_f_0(FullPredName_13, Var_56);
        Var_59 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_57);
        Var_60 = mercury__string__f_43_43_2_f_0(Var_40, Var_59);
        Var_62 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_60);
        ProcDesc_6 = mercury__string__f_43_43_2_f_0(Var_37, Var_62);
      }
      break;
  }
  return ProcDesc_6;
}

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_goal_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word Goal_7)
{
  MR_String FullDesc_8;
  MR_Word GoalExpr_9 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 0))));
  MR_Word GoalInfo_10 = ((MR_Word) ((MR_hl_field(0, Goal_7, (MR_Integer) 1))));
  MR_String Desc_30;
  MR_Word Context_99;
  MR_Integer Line_100;
  MR_String Var_167;
  MR_String Var_169;

  switch (MR_tag((MR_Word) GoalExpr_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Desc_30 = (MR_String) "negation";
      break;
    case (MR_Integer) 1:
      {
        MR_Word Unification_14 = ((MR_Word) ((MR_hl_field(1, GoalExpr_9, (MR_Integer) 3))));

        switch (MR_tag((MR_Word) Unification_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, Unification_14, (MR_Integer) 0))));
              MR_Word ConsId_17 = ((MR_Word) ((MR_hl_field(0, Unification_14, (MR_Integer) 1))));
              MR_Word Args_18 = ((MR_Word) ((MR_hl_field(0, Unification_14, (MR_Integer) 2))));
              MR_String VarStr_27;
              MR_String ConsIdStr_28;
              MR_String ArgsStr_29;
              MR_String Var_227;
              MR_String Var_229;
              MR_String Var_230;
              MR_String Var_232;

              VarStr_27 = hlds__hlds_desc__describe_var_2_f_0(VarTable_6, Var_16);
              ConsIdStr_28 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(ConsId_17);
              ArgsStr_29 = hlds__hlds_desc__describe_args_2_f_0(VarTable_6, Args_18);
              Var_227 = mercury__string__f_43_43_2_f_0(ConsIdStr_28, ArgsStr_29);
              Var_229 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_227);
              Var_230 = mercury__string__f_43_43_2_f_0((MR_String) "<=", Var_229);
              Var_232 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_230);
              Desc_30 = mercury__string__f_43_43_2_f_0(VarStr_27, Var_232);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_186 = ((MR_Word) ((MR_hl_field(1, Unification_14, (MR_Integer) 0))));
              MR_Word ConsId_187 = ((MR_Word) ((MR_hl_field(1, Unification_14, (MR_Integer) 1))));
              MR_Word Args_188 = ((MR_Word) ((MR_hl_field(1, Unification_14, (MR_Integer) 2))));
              MR_String VarStr_190;
              MR_String ConsIdStr_191;
              MR_String ArgsStr_192;
              MR_String Var_221;
              MR_String Var_223;
              MR_String Var_224;
              MR_String Var_226;

              VarStr_190 = hlds__hlds_desc__describe_var_2_f_0(VarTable_6, Var_186);
              ConsIdStr_191 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(ConsId_187);
              ArgsStr_192 = hlds__hlds_desc__describe_args_2_f_0(VarTable_6, Args_188);
              Var_221 = mercury__string__f_43_43_2_f_0(ConsIdStr_191, ArgsStr_192);
              Var_223 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_221);
              Var_224 = mercury__string__f_43_43_2_f_0((MR_String) "=>", Var_223);
              Var_226 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_224);
              Desc_30 = mercury__string__f_43_43_2_f_0(VarStr_190, Var_226);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word VarA_31 = ((MR_Word) ((MR_hl_field(2, Unification_14, (MR_Integer) 0))));
              MR_Word VarB_32 = ((MR_Word) ((MR_hl_field(2, Unification_14, (MR_Integer) 1))));
              MR_String Var_114;
              MR_String Var_119;
              MR_String Var_234;
              MR_String Var_235;
              MR_String Var_237;

              Var_114 = hlds__hlds_desc__describe_var_2_f_0(VarTable_6, VarA_31);
              Var_119 = hlds__hlds_desc__describe_var_2_f_0(VarTable_6, VarB_32);
              Var_234 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_119);
              Var_235 = mercury__string__f_43_43_2_f_0((MR_String) ":=", Var_234);
              Var_237 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_235);
              Desc_30 = mercury__string__f_43_43_2_f_0(Var_114, Var_237);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Unification_14, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word VarA_203 = ((MR_Word) ((MR_hl_field(3, Unification_14, (MR_Integer) 1))));
                  MR_Word VarB_204 = ((MR_Word) ((MR_hl_field(3, Unification_14, (MR_Integer) 2))));
                  MR_String Var_208;
                  MR_String Var_213;
                  MR_String Var_217;
                  MR_String Var_218;
                  MR_String Var_220;

                  Var_208 = hlds__hlds_desc__describe_var_2_f_0(VarTable_6, VarA_203);
                  Var_213 = hlds__hlds_desc__describe_var_2_f_0(VarTable_6, VarB_204);
                  Var_217 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_213);
                  Var_218 = mercury__string__f_43_43_2_f_0((MR_String) "-=", Var_217);
                  Var_220 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_218);
                  Desc_30 = mercury__string__f_43_43_2_f_0(Var_208, Var_220);
                }
                break;
              case (MR_Integer) 1:
                Desc_30 = (MR_String) "complicated unify";
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SymName_40 = ((MR_Word) ((MR_hl_field(2, GoalExpr_9, (MR_Integer) 5))));
        MR_String Var_121;
        MR_String Var_122;
        MR_Word Args_171 = ((MR_Word) ((MR_hl_field(2, GoalExpr_9, (MR_Integer) 2))));

        Var_121 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_40);
        Var_122 = hlds__hlds_desc__describe_args_2_f_0(VarTable_6, Args_171);
        Desc_30 = mercury__string__f_43_43_2_f_0(Var_121, Var_122);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word GCall_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));
            MR_Word Args_176 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
            MR_String ArgsStr_177;

            ArgsStr_177 = hlds__hlds_desc__describe_args_2_f_0(VarTable_6, Args_176);
            switch (MR_tag((MR_Word) GCall_41)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String Var_126;
                  MR_Word Var_172 = ((MR_Word) ((MR_hl_field(0, GCall_41, (MR_Integer) 0))));

                  Var_126 = hlds__hlds_desc__describe_var_2_f_0(VarTable_6, Var_172);
                  Desc_30 = mercury__string__f_43_43_2_f_0(Var_126, ArgsStr_177);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word MethodSNA_50 = ((MR_Word) ((MR_hl_field(1, GCall_41, (MR_Integer) 3))));
                  MR_String Var_133;
                  MR_String Var_136;
                  MR_Word Var_173 = ((MR_Word) ((MR_hl_field(1, GCall_41, (MR_Integer) 0))));
                  MR_String Var_241;
                  MR_String Var_242;
                  MR_String Var_244;

                  Var_133 = parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_1_f_0(MethodSNA_50);
                  Var_136 = hlds__hlds_desc__describe_var_2_f_0(VarTable_6, Var_173);
                  Var_241 = mercury__string__f_43_43_2_f_0((MR_String) "]", ArgsStr_177);
                  Var_242 = mercury__string__f_43_43_2_f_0(Var_136, Var_241);
                  Var_244 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_242);
                  Desc_30 = mercury__string__f_43_43_2_f_0(Var_133, Var_244);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String EventName_51 = ((MR_String) ((MR_hl_field(2, GCall_41, (MR_Integer) 0))));
                  MR_String Var_239;

                  Var_239 = mercury__string__f_43_43_2_f_0((MR_String) " ", ArgsStr_177);
                  Desc_30 = mercury__string__f_43_43_2_f_0(EventName_51, Var_239);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word CastType_52 = ((MR_Unsigned) ((MR_hl_field(3, GCall_41, (MR_Integer) 0))) & (MR_Integer) 7);
                  MR_String Var_149;
                  MR_String Var_246;

                  Var_149 = hlds__hlds_desc__describe_cast_1_f_0(CastType_52);
                  Var_246 = mercury__string__f_43_43_2_f_0((MR_String) " ", ArgsStr_177);
                  Desc_30 = mercury__string__f_43_43_2_f_0(Var_149, Var_246);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredId_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 2))));
            MR_Word ExtraArgs_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 5))));
            MR_Word PredInfo_59;
            MR_String Name_60;
            MR_Word ArgVars_61;
            MR_Word ExtraVars_62;
            MR_String Var_160;
            MR_String Var_163;
            MR_Word Args_178 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 4))));
            MR_String Var_247;
            MR_String Var_248;

            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_54, &PredInfo_59);
            Name_60 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_59);
            ArgVars_61 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_desc_scalar_common_1[0]), (MR_Word) (&hlds__hlds_desc_scalar_common_6[0]), Args_178);
            ExtraVars_62 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__hlds_desc_scalar_common_1[0]), (MR_Word) (&hlds__hlds_desc_scalar_common_6[1]), ExtraArgs_56);
            Var_160 = hlds__hlds_desc__describe_args_2_f_0(VarTable_6, ArgVars_61);
            Var_163 = hlds__hlds_desc__describe_args_2_f_0(VarTable_6, ExtraVars_62);
            Var_247 = mercury__string__f_43_43_2_f_0(Var_160, Var_163);
            Var_248 = mercury__string__f_43_43_2_f_0(Name_60, Var_247);
            Desc_30 = mercury__string__f_43_43_2_f_0((MR_String) "foreign ", Var_248);
          }
          break;
        case (MR_Integer) 2:
          Desc_30 = (MR_String) "conj";
          break;
        case (MR_Integer) 3:
          Desc_30 = (MR_String) "disj";
          break;
        case (MR_Integer) 4:
          {
            MR_String Var_166;
            MR_Word Var_179 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));

            Var_166 = hlds__hlds_desc__describe_var_2_f_0(VarTable_6, Var_179);
            Desc_30 = mercury__string__f_43_43_2_f_0((MR_String) "switch on ", Var_166);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_9, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) Reason_69)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Desc_30 = (MR_String) "scope exist quant";
                break;
              case (MR_Integer) 1:
                Desc_30 = (MR_String) "disable warnings";
                break;
              case (MR_Integer) 2:
                Desc_30 = (MR_String) "scope promise solutions";
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Reason_69, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Desc_30 = (MR_String) "scope promise purity";
                    break;
                  case (MR_Integer) 1:
                    Desc_30 = (MR_String) "scope require detism";
                    break;
                  case (MR_Integer) 2:
                    Desc_30 = (MR_String) "scope require complete switch";
                    break;
                  case (MR_Integer) 3:
                    Desc_30 = (MR_String) "scope require switch arm detism";
                    break;
                  case (MR_Integer) 4:
                    Desc_30 = (MR_String) "scope commit";
                    break;
                  case (MR_Integer) 5:
                    Desc_30 = (MR_String) "scope barrier";
                    break;
                  case (MR_Integer) 6:
                    Desc_30 = (MR_String) "scope from_ground_term";
                    break;
                  case (MR_Integer) 7:
                    Desc_30 = (MR_String) "scope trace goal";
                    break;
                  case (MR_Integer) 8:
                    Desc_30 = (MR_String) "scope loop control goal";
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          Desc_30 = (MR_String) "if_then_else";
          break;
        case (MR_Integer) 7:
          Desc_30 = (MR_String) "shorthand";
          break;
      }
      break;
  }
  Context_99 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
  Line_100 = mercury__term_context__context_line_1_f_0(Context_99);
  Var_169 = mercury__string__int_to_string_1_f_0(Line_100);
  Var_167 = mercury__string__f_43_43_2_f_0((MR_String) "\100", Var_169);
  FullDesc_8 = mercury__string__f_43_43_2_f_0(Desc_30, Var_167);
  return FullDesc_8;
}

static MR_String MR_CALL 
hlds__hlds_desc__describe_cast_1_f_0(
  MR_Word CastType_3)
{
  MR_String Desc_4 = ((&hlds__hlds_desc_vector_common_4[0 + CastType_3]))->hlds__hlds_desc__vector_common_type_4_0__vct_4_f_0;

  return Desc_4;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_var_2_f_0(
  MR_Word VarTable_4,
  MR_Word Var_5)
{
  MR_String HeadVar__3_3;

  HeadVar__3_3 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_4, (MR_Integer) 1, Var_5);
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
hlds__hlds_desc__describe_args_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = hlds__hlds_desc__describe_var_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

MR_String MR_CALL 
hlds__hlds_desc__describe_args_2_f_0(
  MR_Word VarTable_1,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word VarStrs_10;
    MR_String VarsStr_11;
    MR_Word Var_12;
    MR_String Var_23;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (&hlds__hlds_desc_scalar_common_3[0]));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (hlds__hlds_desc__describe_args_2_f_0_1));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (VarTable_1));
    }
    VarStrs_10 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_desc_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_12, HeadVar__2_2);
    VarsStr_11 = mercury__string__join_list_2_f_0((MR_String) ", ", VarStrs_10);
    Var_23 = mercury__string__f_43_43_2_f_0(VarsStr_11, (MR_String) ")");
    HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_23);
  }
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
hlds__hlds_desc____Unify____include_module_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_desc____Unify____include_module_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_desc____Compare____include_module_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_desc____Compare____include_module_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_desc__init(void)
{
}

void mercury__hlds__hlds_desc__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_desc__hlds__hlds_desc__type_ctor_info_include_module_name_0);
}

void mercury__hlds__hlds_desc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_desc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_desc.
