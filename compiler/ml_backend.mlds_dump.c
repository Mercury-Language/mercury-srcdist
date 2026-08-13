/*
** Automatically generated from `mlds_dump.m'
** by the Mercury compiler,
** version rotd-2026-08-13
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


// :- module ml_backend.mlds_dump.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_dump__init
ENDINIT
*/

#include "ml_backend.mlds_dump.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_dump__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_dump__cord__ti_cord_1builtin__type_ctor_info_string_0;

static void MR_CALL 
ml_backend__mlds_dump____Compare____strcord_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__mlds_dump____Unify____strcord_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__mlds_dump__outline_arg_to_strcord_2_f_0(
  MR_Integer Indent_4,
  MR_Word OutlineArg_5);

static MR_Word MR_CALL 
ml_backend__mlds_dump__target_code_component_to_strcord_2_f_0(
  MR_Integer Indent_4,
  MR_Word Component_5);

static MR_Box MR_CALL 
ml_backend__mlds_dump__mlds_switch_case_to_strcord_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_switch_case_to_strcord_2_f_0(
  MR_Integer Indent_4,
  MR_Word Case_5);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_case_match_cond_to_strcord_2_f_0(
  MR_Integer Indent_4,
  MR_Word Cond_5);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_function_defns_to_strcord_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_switch_default_to_strcord_2_f_0(
  MR_Integer Indent_4,
  MR_Word Default_5);

static MR_Box MR_CALL 
ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0(
  MR_Integer Indent_4,
  MR_Word Stmt_5);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_stmts_to_strcord_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_local_var_defns_to_strcord_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_rvals_to_strcord_2_f_0(
  MR_Word HeadRval_4,
  MR_Word TailRvals_5);

static MR_Box MR_CALL 
ml_backend__mlds_dump__mlds_atomic_stmt_to_strcord_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__mlds_dump__mlds_atomic_stmt_to_strcord_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_atomic_stmt_to_strcord_2_f_0(
  MR_Integer Indent_4,
  MR_Word AtomicStmt_5);

static MR_Word MR_CALL 
ml_backend__mlds_dump__nl_strcord_0_f_0(void);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_lvals_to_strcord_2_f_0(
  MR_Word HeadLval_4,
  MR_Word TailLvals_5);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(
  MR_Word Rval_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(
  MR_Word Lval_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_field_var_name_to_strcord_1_f_0(
  MR_Word FieldVarName_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__binop_to_strcord_1_f_0(
  MR_Word BinOp_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__unop_to_strcord_1_f_0(
  MR_Word UnOp_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_vector_common_to_strcord_1_f_0(
  MR_Word VectorCommon_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_scalar_common_to_strcord_1_f_0(
  MR_Word ScalarCommon_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_rval_const_to_strcord_1_f_0(
  MR_Word Const_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__comma_cord_0_f_0(void);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_func_label_to_strcord_1_f_0(
  MR_Word FuncLabel_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_types_to_strcord_2_f_0(
  MR_Word HeadType_4,
  MR_Word TailTypes_5);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_arguments_to_strcord_2_f_0(
  MR_Word HeadArg_4,
  MR_Word TailArgs_5);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_func_params_to_strcord_1_f_0(
  MR_Word Params_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(
  MR_Word MLDS_Type_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mercury_types_to_strcord_2_f_0(
  MR_Word HeadType_4,
  MR_Word TailTypes_5);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mercury_type_to_strcord_1_f_0(
  MR_Word MerType_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__intcord_1_f_0(
  MR_Integer N_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__int_type_to_strcord_1_f_0(
  MR_Word IntType_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__strcord_1_f_0(
  MR_String Str_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__ptag_to_strcord_1_f_0(
  MR_Word Ptag_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_computed_goto_labels_to_strcord_3_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_goto_target_to_strcord_1_f_0(
  MR_Word Target_3);

static MR_Word MR_CALL 
ml_backend__mlds_dump__indent_strcord_1_f_0(
  MR_Integer Indent_3);

static MR_bool MR_CALL 
ml_backend__mlds_dump____Unify____strcord_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__mlds_dump____Compare____strcord_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__mlds_dump_scalar_common_1[1][2];

static /* final */ const MR_Box ml_backend__mlds_dump_scalar_common_2[1][1];

static /* final */ const MR_Box ml_backend__mlds_dump_scalar_common_4[4][6];

static /* final */ const MR_Box ml_backend__mlds_dump_scalar_common_5[1][5];

static /* final */ const MR_Box ml_backend__mlds_dump_scalar_common_6[1][3];


struct ml_backend__mlds_dump__vector_common_type_3_0_s {
  const MR_String ml_backend__mlds_dump__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct ml_backend__mlds_dump__vector_common_type_3_0_s ml_backend__mlds_dump_vector_common_3[20];



static /* final */ const MR_Box ml_backend__mlds_dump_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_dump_scalar_common_2[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_dump_scalar_common_4[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&ml_backend__mlds_dump__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_outline_arg_0)),
    ((MR_Box) (&ml_backend__mlds_dump__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__mlds_dump__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&ml_backend__mlds_dump__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_dump_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_dump_scalar_common_6[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__mlds_dump_scalar_common_5[0])),
    ((MR_Box) (ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct ml_backend__mlds_dump__vector_common_type_3_0_s ml_backend__mlds_dump_vector_common_3[20] = {
  /* row   0 */   { (MR_String) "int" },
  /* row   1 */   { (MR_String) "uint" },
  /* row   2 */   { (MR_String) "int8" },
  /* row   3 */   { (MR_String) "uint8" },
  /* row   4 */   { (MR_String) "int16" },
  /* row   5 */   { (MR_String) "uint16" },
  /* row   6 */   { (MR_String) "int32" },
  /* row   7 */   { (MR_String) "uint32" },
  /* row   8 */   { (MR_String) "int64" },
  /* row   9 */   { (MR_String) "uint64" },
  /* row  10 */   { (MR_String) "int" },
  /* row  11 */   { (MR_String) "uint" },
  /* row  12 */   { (MR_String) "int8" },
  /* row  13 */   { (MR_String) "uint8" },
  /* row  14 */   { (MR_String) "int16" },
  /* row  15 */   { (MR_String) "uint16" },
  /* row  16 */   { (MR_String) "int32" },
  /* row  17 */   { (MR_String) "uint32" },
  /* row  18 */   { (MR_String) "int64" },
  /* row  19 */   { (MR_String) "uint64" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_dump__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__mlds_dump__cord__ti_cord_1builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

const MR_TypeCtorInfo_Struct ml_backend__mlds_dump__ml_backend__mlds_dump__type_ctor_info_strcord_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__mlds_dump____Unify____strcord_0_0_10001)),
  ((MR_Box) (ml_backend__mlds_dump____Compare____strcord_0_0_10001)),
  (MR_String) "ml_backend.mlds_dump",
  (MR_String) "strcord",
  { NULL },
  { (MR_PseudoTypeInfo) (&ml_backend__mlds_dump__cord__ti_cord_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
ml_backend__mlds_dump____Compare____strcord_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__mlds_dump_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
ml_backend__mlds_dump____Unify____strcord_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__mlds_dump_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__outline_arg_to_strcord_2_f_0(
  MR_Integer Indent_4,
  MR_Word OutlineArg_5)
{
  MR_Word Cord_6;

  switch (MR_tag((MR_Word) OutlineArg_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_45;
        MR_Word Var_46;

        Var_45 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
        Var_46 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "unused\n")));
        Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, Var_46);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Type_7 = ((MR_Word) ((MR_hl_field(1, OutlineArg_5, 0))));
        MR_String Name_8 = ((MR_String) ((MR_hl_field(1, OutlineArg_5, 1))));
        MR_Word Rval_9 = ((MR_Word) ((MR_hl_field(1, OutlineArg_5, 2))));
        MR_Word Var_11;
        MR_Word Var_12;
        MR_Word Var_13;
        MR_Word Var_15;
        MR_Word Var_16;
        MR_Word Var_17;
        MR_Word Var_18;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word Var_27;

        Var_11 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
        Var_13 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "input ")));
        Var_16 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(Type_7);
        Var_18 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " ")));
        Var_21 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Name_8)));
        Var_23 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " <= ")));
        Var_26 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Rval_9);
        Var_27 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
        Var_25 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_26, Var_27);
        Var_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, Var_25);
        Var_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, Var_22);
        Var_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_18, Var_20);
        Var_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_16, Var_17);
        Var_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_13, Var_15);
        Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, Var_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(2, OutlineArg_5, 2))));
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Type_48 = ((MR_Word) ((MR_hl_field(2, OutlineArg_5, 0))));
        MR_String Name_49 = ((MR_String) ((MR_hl_field(2, OutlineArg_5, 1))));

        Var_28 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
        Var_30 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "output ")));
        Var_33 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(Type_48);
        Var_35 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " ")));
        Var_38 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Name_49)));
        Var_40 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " => ")));
        Var_43 = ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(Lval_10);
        Var_44 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
        Var_42 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_43, Var_44);
        Var_39 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_40, Var_42);
        Var_37 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_38, Var_39);
        Var_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_35, Var_37);
        Var_32 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_33, Var_34);
        Var_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, Var_32);
        Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28, Var_29);
      }
      break;
  }
  return Cord_6;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__target_code_component_to_strcord_2_f_0(
  MR_Integer Indent_4,
  MR_Word Component_5)
{
  MR_Word Cord_6;

  switch (MR_tag((MR_Word) Component_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Cord_6 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      break;
    case (MR_Integer) 1:
      {
        MR_String Code_7 = ((MR_String) ((MR_hl_field(1, Component_5, 0))));
        MR_Word Var_14;
        MR_Word Var_15;
        MR_Word Var_16;
        MR_Word Var_18;
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_Word Var_22;

        Var_14 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
        Var_16 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "user_target_code")));
        Var_19 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
        Var_21 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Code_7)));
        Var_22 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
        Var_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, Var_22);
        Var_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, Var_20);
        Var_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_16, Var_18);
        Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, Var_15);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_String Code_53 = ((MR_String) ((MR_hl_field(2, Component_5, 0))));

        Var_23 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
        Var_25 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "raw_target_code")));
        Var_28 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
        Var_30 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Code_53)));
        Var_31 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
        Var_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, Var_31);
        Var_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28, Var_29);
        Var_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, Var_27);
        Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, Var_24);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Component_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_9 = ((MR_Word) ((MR_hl_field(3, Component_5, 1))));
            MR_Word Var_32;
            MR_Word Var_33;
            MR_Word Var_34;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_38;

            Var_32 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_34 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "input ")));
            Var_37 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Rval_9);
            Var_38 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
            Var_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_37, Var_38);
            Var_33 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_34, Var_36);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_32, Var_33);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(3, Component_5, 1))));
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_45;

            Var_39 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_41 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "output ")));
            Var_44 = ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(Lval_10);
            Var_45 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
            Var_43 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_44, Var_45);
            Var_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, Var_43);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_39, Var_40);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_11 = ((MR_Word) ((MR_hl_field(3, Component_5, 1))));
            MR_Word Var_46;
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Word Var_52;

            Var_46 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_48 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "type ")));
            Var_51 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(Type_11);
            Var_52 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
            Var_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_51, Var_52);
            Var_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_48, Var_50);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_46, Var_47);
          }
          break;
        case (MR_Integer) 3:
          Cord_6 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          break;
      }
      break;
  }
  return Cord_6;
}

static MR_Box MR_CALL 
ml_backend__mlds_dump__mlds_switch_case_to_strcord_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Cord_6;

  conv0_Cord_6 = ml_backend__mlds_dump__mlds_case_match_cond_to_strcord_2_f_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Cord_6));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_switch_case_to_strcord_2_f_0(
  MR_Integer Indent_4,
  MR_Word Case_5)
{
  MR_Word Cord_6;
  MR_Word FirstCond_7 = ((MR_Word) ((MR_hl_field(0, Case_5, 0))));
  MR_Word LaterConds_8 = ((MR_Word) ((MR_hl_field(0, Case_5, 1))));
  MR_Word Stmt_9 = ((MR_Word) ((MR_hl_field(0, Case_5, 2))));
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Integer Var_16;

  Var_10 = ml_backend__mlds_dump__mlds_case_match_cond_to_strcord_2_f_0(Indent_4, FirstCond_7);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ml_backend__mlds_dump_scalar_common_4[3]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (ml_backend__mlds_dump__mlds_switch_case_to_strcord_2_f_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Indent_4));
  }
  Var_13 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&ml_backend__mlds_dump_scalar_common_1[0]), Var_14, LaterConds_8);
  Var_12 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_13);
  Var_16 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
  Var_15 = ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0(Var_16, Stmt_9);
  Var_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_12, Var_15);
  Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_10, Var_11);
  return Cord_6;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_case_match_cond_to_strcord_2_f_0(
  MR_Integer Indent_4,
  MR_Word Cond_5)
{
  MR_Word Cord_6;

  if (((MR_tag((MR_Word) Cond_5)) == (MR_Integer) 1))
  {
    MR_Word MinRval_8 = ((MR_Word) ((MR_hl_field(1, Cond_5, 0))));
    MR_Word MaxRval_9 = ((MR_Word) ((MR_hl_field(1, Cond_5, 1))));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;

    Var_17 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
    Var_19 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "match range ")));
    Var_22 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(MinRval_8);
    Var_24 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " to ")));
    Var_27 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(MaxRval_9);
    Var_28 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
    Var_26 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_27, Var_28);
    Var_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_24, Var_26);
    Var_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_22, Var_23);
    Var_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, Var_21);
    Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17, Var_18);
  }
  else
  {
    MR_Word Rval_7 = ((MR_Word) ((MR_hl_field(0, Cond_5, 0))));
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;

    Var_10 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
    Var_12 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "match value ")));
    Var_15 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Rval_7);
    Var_16 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
    Var_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_15, Var_16);
    Var_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_12, Var_14);
    Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_10, Var_11);
  }
  return Cord_6;
}

void MR_CALL 
ml_backend__mlds_dump__dump_mlds_stmt_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Word Stmt_8)
{
  MR_Word Cord_10;
  MR_String Var_13;
  MR_Word Var_14;

  Cord_10 = ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0(Indent_7, Stmt_8);
  Var_14 = mercury__cord__to_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Cord_10);
  Var_13 = mercury__string__append_list_1_f_0(Var_14);
  mercury__io__write_string_4_p_0(Stream_6, Var_13);
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_function_defns_to_strcord_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_Word Defn_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Defns_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word FuncName_12 = ((MR_Word) ((MR_hl_field(0, Defn_6, 0))));
    MR_Word Params_16 = ((MR_Word) ((MR_hl_field(0, Defn_6, 4))));
    MR_Word Body_17 = ((MR_Word) ((MR_hl_field(0, Defn_6, 5))));
    MR_Word FuncNameCord_23;
    MR_Word BodyCord_25;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;

    if (((MR_tag((MR_Word) FuncName_12)) == (MR_Integer) 1))
    {
      MR_String FuncNameStr_24 = ((MR_String) ((MR_hl_field(1, FuncName_12, 0))));

      FuncNameCord_23 = ml_backend__mlds_dump__strcord_1_f_0(FuncNameStr_24);
    }
    else
    {
      MR_Word PlainFuncName_20 = (MR_Word) ((MR_Word) (FuncName_12));
      MR_Word FuncLabel_21 = ((MR_Word) ((MR_hl_field(0, PlainFuncName_20, 0))));

      FuncNameCord_23 = ml_backend__mlds_dump__mlds_func_label_to_strcord_1_f_0(FuncLabel_21);
    }
    if ((Body_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_27;
      MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) 1);
      MR_Word Var_30;

      Var_27 = ml_backend__mlds_dump__indent_strcord_1_f_0(Var_28);
      Var_30 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "external");
      BodyCord_25 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_27, Var_30);
    }
    else
    {
      MR_Word Stmt_26 = ((MR_Word) ((MR_hl_field(1, Body_17, 0))));
      MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) HeadVar__1_1 + (MR_Unsigned) 1);

      BodyCord_25 = ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0(Var_32, Stmt_26);
    }
    Var_34 = ml_backend__mlds_dump__indent_strcord_1_f_0(HeadVar__1_1);
    Var_36 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "func ");
    Var_40 = ml_backend__mlds_dump__mlds_func_params_to_strcord_1_f_0(Params_16);
    Var_42 = ml_backend__mlds_dump__nl_strcord_0_f_0();
    Var_44 = ml_backend__mlds_dump__indent_strcord_1_f_0(HeadVar__1_1);
    Var_46 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "begin");
    Var_49 = ml_backend__mlds_dump__nl_strcord_0_f_0();
    Var_52 = ml_backend__mlds_dump__indent_strcord_1_f_0(HeadVar__1_1);
    Var_54 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "end");
    Var_56 = ml_backend__mlds_dump__nl_strcord_0_f_0();
    Var_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_54, Var_56);
    Var_51 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_52, Var_53);
    Var_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BodyCord_25, Var_51);
    Var_48 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_49, Var_50);
    Var_45 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_46, Var_48);
    Var_43 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_44, Var_45);
    Var_41 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_42, Var_43);
    Var_39 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_40, Var_41);
    Var_38 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FuncNameCord_23, Var_39);
    Var_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_36, Var_38);
    Var_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_34, Var_35);
    Var_9 = ml_backend__mlds_dump__mlds_function_defns_to_strcord_2_f_0(HeadVar__1_1, Defns_7);
    HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_8, Var_9);
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_switch_default_to_strcord_2_f_0(
  MR_Integer Indent_4,
  MR_Word Default_5)
{
  MR_Word Cord_6;

  switch (MR_tag((MR_Word) Default_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Default_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_8;
            MR_Word Var_9;

            Var_8 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_9 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "default is unreachable\n")));
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_8, Var_9);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_11;
            MR_Word Var_12;

            Var_11 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_12 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "default is do nothing\n")));
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, Var_12);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stmt_7 = ((MR_Word) ((MR_hl_field(1, Default_5, 0))));
        MR_Word Var_14;
        MR_Word Var_15;
        MR_Word Var_16;
        MR_Word Var_18;
        MR_Integer Var_19;

        Var_14 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
        Var_16 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "default statement:\n")));
        Var_19 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
        Var_18 = ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0(Var_19, Stmt_7);
        Var_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_16, Var_18);
        Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, Var_15);
      }
      break;
  }
  return Cord_6;
}

static MR_Box MR_CALL 
ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Cord_6;

  conv0_Cord_6 = ml_backend__mlds_dump__mlds_switch_case_to_strcord_2_f_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Cord_6));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0(
  MR_Integer Indent_4,
  MR_Word Stmt_5)
{
  MR_Word Cord_6;

  switch (MR_tag((MR_Word) Stmt_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LocalVarDefns_7 = ((MR_Word) ((MR_hl_field(0, Stmt_5, 0))));
        MR_Word FuncDefns_8 = ((MR_Word) ((MR_hl_field(0, Stmt_5, 1))));
        MR_Word SubStmts_9 = ((MR_Word) ((MR_hl_field(0, Stmt_5, 2))));
        MR_Word LocalVarsCord_11;
        MR_Word FuncsCord_14;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;
        MR_Integer Var_74;
        MR_Word Var_76;
        MR_Word Var_77;
        MR_Word Var_78;

        if ((LocalVarDefns_7 == (MR_Word) ((MR_Unsigned) 0U)))
          LocalVarsCord_11 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        else
        {
          MR_Word Var_58;
          MR_Integer Var_59 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
          MR_Word Var_61;

          Var_58 = ml_backend__mlds_dump__mlds_local_var_defns_to_strcord_2_f_0(Var_59, LocalVarDefns_7);
          Var_61 = ml_backend__mlds_dump__nl_strcord_0_f_0();
          LocalVarsCord_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_58, Var_61);
        }
        if ((FuncDefns_8 == (MR_Word) ((MR_Unsigned) 0U)))
          FuncsCord_14 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        else
        {
          MR_Word Var_62;
          MR_Integer Var_63 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
          MR_Word Var_65;

          Var_62 = ml_backend__mlds_dump__mlds_function_defns_to_strcord_2_f_0(Var_63, FuncDefns_8);
          Var_65 = ml_backend__mlds_dump__nl_strcord_0_f_0();
          FuncsCord_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_62, Var_65);
        }
        Var_66 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
        Var_68 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "block start\n");
        Var_74 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
        Var_73 = ml_backend__mlds_dump__mlds_stmts_to_strcord_2_f_0(Var_74, SubStmts_9);
        Var_77 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
        Var_78 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "block end\n");
        Var_76 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_77, Var_78);
        Var_72 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_73, Var_76);
        Var_71 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FuncsCord_14, Var_72);
        Var_70 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LocalVarsCord_11, Var_71);
        Var_67 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_68, Var_70);
        Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_66, Var_67);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Kind_17 = ((MR_Unsigned) ((MR_hl_field(1, Stmt_5, 0))) & (MR_Integer) 1);
        MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(1, Stmt_5, 1))));
        MR_Word SubStmt_19 = ((MR_Word) ((MR_hl_field(1, Stmt_5, 2))));
        MR_Word LocalLoopVars_20 = ((MR_Word) ((MR_hl_field(1, Stmt_5, 3))));
        MR_Word LocalLoopVarsCord_21;

        if ((LocalLoopVars_20 == (MR_Word) ((MR_Unsigned) 0U)))
          LocalLoopVarsCord_21 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        else
        {
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_String Var_86;
          MR_Word Var_88;
          MR_Word Var_90;

          Var_80 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
          Var_82 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "loop local vars ");
          Var_88 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ml_backend__mlds_dump_scalar_common_6[0]), LocalLoopVars_20);
          Var_86 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_88);
          Var_85 = ml_backend__mlds_dump__strcord_1_f_0(Var_86);
          Var_90 = ml_backend__mlds_dump__nl_strcord_0_f_0();
          Var_84 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_85, Var_90);
          Var_81 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_82, Var_84);
          LocalLoopVarsCord_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_80, Var_81);
        }
        switch (Kind_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_108;
              MR_Word Var_109;
              MR_Word Var_110;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Integer Var_114;
              MR_Word Var_116;
              MR_Word Var_117;
              MR_Word Var_118;
              MR_Word Var_119;
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word Var_123;
              MR_Word Var_124;

              Var_108 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
              Var_110 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "do\n");
              Var_114 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
              Var_113 = ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0(Var_114, SubStmt_19);
              Var_117 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
              Var_119 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "while ");
              Var_122 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Rval_18);
              Var_124 = ml_backend__mlds_dump__nl_strcord_0_f_0();
              Var_123 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_124, LocalLoopVarsCord_21);
              Var_121 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_122, Var_123);
              Var_118 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_119, Var_121);
              Var_116 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_117, Var_118);
              Var_112 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_113, Var_116);
              Var_109 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_110, Var_112);
              Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_108, Var_109);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Word Var_95;
              MR_Word Var_96;
              MR_Word Var_97;
              MR_Word Var_98;
              MR_Word Var_99;
              MR_Word Var_100;
              MR_Integer Var_101;
              MR_Word Var_103;
              MR_Word Var_104;
              MR_Word Var_105;
              MR_Word Var_106;

              Var_91 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
              Var_93 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "while ");
              Var_96 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Rval_18);
              Var_98 = ml_backend__mlds_dump__nl_strcord_0_f_0();
              Var_101 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
              Var_100 = ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0(Var_101, SubStmt_19);
              Var_104 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
              Var_106 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "end while\n");
              Var_105 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_106, LocalLoopVarsCord_21);
              Var_103 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_104, Var_105);
              Var_99 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_100, Var_103);
              Var_97 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_98, Var_99);
              Var_95 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_96, Var_97);
              Var_92 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_93, Var_95);
              Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_91, Var_92);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Cond_24 = ((MR_Word) ((MR_hl_field(2, Stmt_5, 0))));
        MR_Word Then_25 = ((MR_Word) ((MR_hl_field(2, Stmt_5, 1))));
        MR_Word MaybeElse_26 = ((MR_Word) ((MR_hl_field(2, Stmt_5, 2))));

        if ((MaybeElse_26 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_155;
          MR_Word Var_156;
          MR_Word Var_157;
          MR_Word Var_159;
          MR_Word Var_160;
          MR_Word Var_161;
          MR_Word Var_162;
          MR_Word Var_163;
          MR_Word Var_164;
          MR_Word Var_165;
          MR_Word Var_166;
          MR_Word Var_168;
          MR_Word Var_169;
          MR_Integer Var_170;
          MR_Word Var_172;
          MR_Word Var_173;
          MR_Word Var_174;

          Var_155 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
          Var_157 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "if ");
          Var_160 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Cond_24);
          Var_162 = ml_backend__mlds_dump__nl_strcord_0_f_0();
          Var_164 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
          Var_166 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "then\n");
          Var_170 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
          Var_169 = ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0(Var_170, Then_25);
          Var_173 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
          Var_174 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "end if\n");
          Var_172 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_173, Var_174);
          Var_168 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_169, Var_172);
          Var_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_166, Var_168);
          Var_163 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_164, Var_165);
          Var_161 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_162, Var_163);
          Var_159 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_160, Var_161);
          Var_156 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_157, Var_159);
          Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_155, Var_156);
        }
        else
        {
          MR_Word Else_27 = ((MR_Word) ((MR_hl_field(1, MaybeElse_26, 0))));
          MR_Word Var_125;
          MR_Word Var_126;
          MR_Word Var_127;
          MR_Word Var_129;
          MR_Word Var_130;
          MR_Word Var_131;
          MR_Word Var_132;
          MR_Word Var_133;
          MR_Word Var_134;
          MR_Word Var_135;
          MR_Word Var_136;
          MR_Word Var_138;
          MR_Word Var_139;
          MR_Integer Var_140;
          MR_Word Var_142;
          MR_Word Var_143;
          MR_Word Var_144;
          MR_Word Var_145;
          MR_Word Var_147;
          MR_Word Var_148;
          MR_Integer Var_149;
          MR_Word Var_151;
          MR_Word Var_152;
          MR_Word Var_153;

          Var_125 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
          Var_127 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "if ");
          Var_130 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Cond_24);
          Var_132 = ml_backend__mlds_dump__nl_strcord_0_f_0();
          Var_134 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
          Var_136 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "then\n");
          Var_140 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
          Var_139 = ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0(Var_140, Then_25);
          Var_143 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
          Var_145 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "else\n");
          Var_149 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
          Var_148 = ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0(Var_149, Else_27);
          Var_152 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
          Var_153 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "end if\n");
          Var_151 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_152, Var_153);
          Var_147 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_148, Var_151);
          Var_144 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_145, Var_147);
          Var_142 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_143, Var_144);
          Var_138 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_139, Var_142);
          Var_135 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_136, Var_138);
          Var_133 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_134, Var_135);
          Var_131 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_132, Var_133);
          Var_129 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_130, Var_131);
          Var_126 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_127, Var_129);
          Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_125, Var_126);
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Stmt_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Type_28 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 1))));
            MR_Word Range_29 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 3))));
            MR_Word Cases_30 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 4))));
            MR_Word Default_31 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 5))));
            MR_Word RangeCord_32;
            MR_Word Var_184;
            MR_Word Var_185;
            MR_Word Var_186;
            MR_Word Var_188;
            MR_Word Var_189;
            MR_Word Var_191;
            MR_Word Var_192;
            MR_Word Var_193;
            MR_Word Var_194;
            MR_Word Var_196;
            MR_Word Var_197;
            MR_Word Var_198;
            MR_Word Var_199;
            MR_Word Var_200;
            MR_Word Var_201;
            MR_Word Var_202;
            MR_Word Var_203;
            MR_Word Var_204;
            MR_Integer Var_205;
            MR_Word Var_207;
            MR_Word Var_208;
            MR_Integer Var_209;
            MR_Word Var_211;
            MR_Word Var_212;
            MR_Word Var_213;
            MR_Word Rval_315 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 2))));

            if ((Range_29 == (MR_Word) ((MR_Unsigned) 0U)))
              RangeCord_32 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            else
            {
              MR_Integer Min_33 = ((MR_Integer) ((MR_hl_field(1, Range_29, 0))));
              MR_Integer Max_34 = ((MR_Integer) ((MR_hl_field(1, Range_29, 1))));
              MR_Word Var_176;
              MR_Word Var_178;
              MR_Word Var_179;
              MR_Word Var_180;
              MR_Word Var_181;
              MR_Word Var_183;

              Var_176 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) " from ");
              Var_179 = ml_backend__mlds_dump__intcord_1_f_0(Min_33);
              Var_181 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) " to ");
              Var_183 = ml_backend__mlds_dump__intcord_1_f_0(Max_34);
              Var_180 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_181, Var_183);
              Var_178 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_179, Var_180);
              RangeCord_32 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_176, Var_178);
            }
            Var_184 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_186 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "switch ");
            Var_189 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "(");
            Var_192 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Rval_315);
            Var_194 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_197 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(Type_28);
            Var_200 = ml_backend__mlds_dump__nl_strcord_0_f_0();
            Var_205 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
            {
              Var_204 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_204, 0) = ((MR_Box) (&ml_backend__mlds_dump_scalar_common_4[2]));
              MR_hl_field(0, Var_204, 1) = ((MR_Box) (ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0_1));
              MR_hl_field(0, Var_204, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_204, 3) = ((MR_Box) (Var_205));
            }
            Var_203 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&ml_backend__mlds_dump_scalar_common_1[0]), Var_204, Cases_30);
            Var_202 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_203);
            Var_209 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
            Var_208 = ml_backend__mlds_dump__mlds_switch_default_to_strcord_2_f_0(Var_209, Default_31);
            Var_212 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_213 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "end switch\n");
            Var_211 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_212, Var_213);
            Var_207 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_208, Var_211);
            Var_201 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_202, Var_207);
            Var_199 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_200, Var_201);
            Var_198 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RangeCord_32, Var_199);
            Var_196 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_197, Var_198);
            Var_193 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_194, Var_196);
            Var_191 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_192, Var_193);
            Var_188 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_189, Var_191);
            Var_185 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_186, Var_188);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_184, Var_185);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String LabelName_35;
            MR_Word Var_215 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 1))));
            MR_Word Var_216;
            MR_Word Var_217;
            MR_Word Var_218;
            MR_Word Var_220;
            MR_Word Var_221;
            MR_Word Var_222;

            LabelName_35 = (MR_String) (Var_215);
            Var_216 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_218 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "label ");
            Var_221 = ml_backend__mlds_dump__strcord_1_f_0(LabelName_35);
            Var_222 = ml_backend__mlds_dump__nl_strcord_0_f_0();
            Var_220 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_221, Var_222);
            Var_217 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_218, Var_220);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_216, Var_217);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Target_36 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 1))));
            MR_Word Var_223;
            MR_Word Var_224;
            MR_Word Var_225;
            MR_Word Var_227;
            MR_Word Var_228;
            MR_Word Var_229;

            Var_223 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_225 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "goto ");
            Var_228 = ml_backend__mlds_dump__mlds_goto_target_to_strcord_1_f_0(Target_36);
            Var_229 = ml_backend__mlds_dump__nl_strcord_0_f_0();
            Var_227 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_228, Var_229);
            Var_224 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_225, Var_227);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_223, Var_224);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Labels_37 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 2))));
            MR_Word Var_230;
            MR_Word Var_231;
            MR_Word Var_232;
            MR_Word Var_234;
            MR_Word Var_235;
            MR_Word Var_237;
            MR_Word Var_238;
            MR_Word Var_239;
            MR_Word Var_240;
            MR_Word Var_242;
            MR_Word Var_243;
            MR_Word Var_244;
            MR_Word Rval_322 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 1))));

            Var_230 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_232 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "computed goto ");
            Var_235 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "(");
            Var_238 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Rval_322);
            Var_240 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_243 = ml_backend__mlds_dump__nl_strcord_0_f_0();
            Var_244 = ml_backend__mlds_dump__mlds_computed_goto_labels_to_strcord_3_f_0(Indent_4, (MR_Integer) 0, Labels_37);
            Var_242 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_243, Var_244);
            Var_239 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_240, Var_242);
            Var_237 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_238, Var_239);
            Var_234 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_235, Var_237);
            Var_231 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_232, Var_234);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_230, Var_231);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word FuncRval_39 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 2))));
            MR_Word ArgRvals_40 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 3))));
            MR_Word RetLvals_41 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 4))));
            MR_Word TailCall_42 = ((MR_Unsigned) ((MR_hl_field(3, Stmt_5, 5))) & (MR_Integer) 3);
            MR_Word CallCord_43;
            MR_Word ArgsCord_44;
            MR_Word RetCord_47;
            MR_Word Var_261;
            MR_Word Var_262;
            MR_Word Var_263;
            MR_Word Var_264;
            MR_Word Var_265;

            switch (TailCall_42) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                CallCord_43 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "no_return_call ");
                break;
              case (MR_Integer) 2:
                CallCord_43 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "call ");
                break;
              case (MR_Integer) 1:
                CallCord_43 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "tail_call ");
                break;
            }
            if ((ArgRvals_40 == (MR_Word) ((MR_Unsigned) 0U)))
              ArgsCord_44 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            else
            {
              MR_Word HeadArgRval_45 = ((MR_Word) ((MR_hl_field(1, ArgRvals_40, 0))));
              MR_Word TailArgRvals_46 = ((MR_Word) ((MR_hl_field(1, ArgRvals_40, 1))));
              MR_Word Var_249;
              MR_Word Var_251;
              MR_Word Var_252;
              MR_Word Var_253;

              Var_249 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "(");
              Var_252 = ml_backend__mlds_dump__mlds_rvals_to_strcord_2_f_0(HeadArgRval_45, TailArgRvals_46);
              Var_253 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
              Var_251 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_252, Var_253);
              ArgsCord_44 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_249, Var_251);
            }
            if ((RetLvals_41 == (MR_Word) ((MR_Unsigned) 0U)))
              RetCord_47 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            else
            {
              MR_Word HeadRetLval_48 = ((MR_Word) ((MR_hl_field(1, RetLvals_41, 0))));
              MR_Word TailRetLvals_49 = ((MR_Word) ((MR_hl_field(1, RetLvals_41, 1))));
              MR_Word Var_255;
              MR_Word Var_257;
              MR_Word Var_258;
              MR_Word Var_259;

              Var_255 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) " -> (");
              Var_258 = ml_backend__mlds_dump__mlds_lvals_to_strcord_2_f_0(HeadRetLval_48, TailRetLvals_49);
              Var_259 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
              Var_257 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_258, Var_259);
              RetCord_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_255, Var_257);
            }
            Var_261 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_264 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(FuncRval_39);
            Var_265 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgsCord_44, RetCord_47);
            Var_263 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_264, Var_265);
            Var_262 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CallCord_43, Var_263);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_261, Var_262);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rvals_50 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 1))));

            if ((Rvals_50 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_266;
              MR_Word Var_267;

              Var_266 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
              Var_267 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "return");
              Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_266, Var_267);
            }
            else
            {
              MR_Word HeadRval_51 = ((MR_Word) ((MR_hl_field(1, Rvals_50, 0))));
              MR_Word TailRvals_52 = ((MR_Word) ((MR_hl_field(1, Rvals_50, 1))));
              MR_Word Var_269;
              MR_Word Var_270;
              MR_Word Var_271;
              MR_Word Var_273;

              Var_269 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
              Var_271 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "return ");
              Var_273 = ml_backend__mlds_dump__mlds_rvals_to_strcord_2_f_0(HeadRval_51, TailRvals_52);
              Var_270 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_271, Var_273);
              Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_269, Var_270);
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word RefLval_53 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 1))));
            MR_Word BodyStmt_54 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 2))));
            MR_Word HandlerStmt_55 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 3))));
            MR_Word Var_274;
            MR_Word Var_275;
            MR_Word Var_276;
            MR_Word Var_278;
            MR_Word Var_279;
            MR_Word Var_280;
            MR_Word Var_281;
            MR_Word Var_282;
            MR_Word Var_283;
            MR_Word Var_284;
            MR_Word Var_285;
            MR_Word Var_287;
            MR_Word Var_288;
            MR_Integer Var_289;
            MR_Word Var_291;
            MR_Word Var_292;
            MR_Word Var_293;
            MR_Word Var_294;
            MR_Word Var_296;
            MR_Word Var_297;
            MR_Integer Var_298;
            MR_Word Var_300;
            MR_Word Var_301;
            MR_Word Var_302;

            Var_274 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_276 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "try_commit ");
            Var_279 = ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(RefLval_53);
            Var_281 = ml_backend__mlds_dump__nl_strcord_0_f_0();
            Var_283 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_285 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "stmt to try\n");
            Var_289 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
            Var_288 = ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0(Var_289, BodyStmt_54);
            Var_292 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_294 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "commit handler stmt\n");
            Var_298 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
            Var_297 = ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0(Var_298, HandlerStmt_55);
            Var_301 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_302 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "end_try_commit\n");
            Var_300 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_301, Var_302);
            Var_296 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_297, Var_300);
            Var_293 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_294, Var_296);
            Var_291 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_292, Var_293);
            Var_287 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_288, Var_291);
            Var_284 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_285, Var_287);
            Var_282 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_283, Var_284);
            Var_280 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_281, Var_282);
            Var_278 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_279, Var_280);
            Var_275 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_276, Var_278);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_274, Var_275);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word RefRval_56 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 1))));
            MR_Word Var_304;
            MR_Word Var_305;
            MR_Word Var_306;
            MR_Word Var_308;

            Var_304 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_306 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "do_commit ");
            Var_308 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(RefRval_56);
            Var_305 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_306, Var_308);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_304, Var_305);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AtomicStmt_57 = ((MR_Word) ((MR_hl_field(3, Stmt_5, 1))));

            Cord_6 = ml_backend__mlds_dump__mlds_atomic_stmt_to_strcord_2_f_0(Indent_4, AtomicStmt_57);
          }
          break;
      }
      break;
  }
  return Cord_6;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_stmts_to_strcord_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_Word Stmt_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Stmts_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Word Var_9;

    Var_8 = ml_backend__mlds_dump__mlds_stmt_to_strcord_2_f_0(HeadVar__1_1, Stmt_6);
    Var_9 = ml_backend__mlds_dump__mlds_stmts_to_strcord_2_f_0(HeadVar__1_1, Stmts_7);
    HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_8, Var_9);
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_local_var_defns_to_strcord_2_f_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_Word Defn_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Defns_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word VarName_12 = ((MR_Word) ((MR_hl_field(0, Defn_6, 0))));
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(0, Defn_6, 2))));
    MR_Word Init_15 = ((MR_Word) ((MR_hl_field(0, Defn_6, 3))));
    MR_Word InitCord_17;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_String Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;

    switch (MR_tag((MR_Word) Init_15)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InitCord_17 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(1, Init_15, 0))));
          MR_Word Var_21;
          MR_Word Var_23;

          Var_21 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " init_obj ")));
          Var_23 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Rval_18);
          InitCord_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, Var_23);
        }
        break;
      case (MR_Integer) 2:
        InitCord_17 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " init_struct(...)")));
        break;
      case (MR_Integer) 3:
        InitCord_17 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " init_array(...)")));
        break;
    }
    Var_26 = ml_backend__mlds_dump__indent_strcord_1_f_0(HeadVar__1_1);
    Var_28 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "local ")));
    Var_32 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(VarName_12);
    Var_31 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_32)));
    Var_34 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
    Var_36 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(Type_14);
    Var_38 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
    Var_37 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitCord_17, Var_38);
    Var_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_36, Var_37);
    Var_33 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_34, Var_35);
    Var_30 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_31, Var_33);
    Var_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28, Var_30);
    Var_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_26, Var_27);
    Var_9 = ml_backend__mlds_dump__mlds_local_var_defns_to_strcord_2_f_0(HeadVar__1_1, Defns_7);
    HeadVar__3_3 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_8, Var_9);
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_rvals_to_strcord_2_f_0(
  MR_Word HeadRval_4,
  MR_Word TailRvals_5)
{
  MR_Word Cord_6;

  if ((TailRvals_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Cord_6 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(HeadRval_4);
  else
  {
    MR_Word HeadTailRval_7 = ((MR_Word) ((MR_hl_field(1, TailRvals_5, 0))));
    MR_Word TailTailRvals_8 = ((MR_Word) ((MR_hl_field(1, TailRvals_5, 1))));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;

    Var_9 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(HeadRval_4);
    Var_11 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
    Var_12 = ml_backend__mlds_dump__mlds_rvals_to_strcord_2_f_0(HeadTailRval_7, TailTailRvals_8);
    Var_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, Var_12);
    Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, Var_10);
  }
  return Cord_6;
}

static MR_Box MR_CALL 
ml_backend__mlds_dump__mlds_atomic_stmt_to_strcord_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Cord_6;

  conv1_Cord_6 = ml_backend__mlds_dump__outline_arg_to_strcord_2_f_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Cord_6));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__mlds_dump__mlds_atomic_stmt_to_strcord_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Cord_6;

  conv0_Cord_6 = ml_backend__mlds_dump__target_code_component_to_strcord_2_f_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Cord_6));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_atomic_stmt_to_strcord_2_f_0(
  MR_Integer Indent_4,
  MR_Word AtomicStmt_5)
{
  MR_Word Cord_6;

  switch (MR_tag((MR_Word) AtomicStmt_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_40;
        MR_Word Var_41;

        Var_40 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
        Var_41 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "gc_check\n");
        Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_40, Var_41);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Comment0_7 = ((MR_String) ((MR_hl_field(1, AtomicStmt_5, 0))));
        MR_String Comment_8;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;

        mercury__string__replace_all_4_p_0(Comment0_7, (MR_String) "\n", (MR_String) " ", &Comment_8);
        Var_36 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
        Var_38 = ml_backend__mlds_dump__strcord_1_f_0(Comment_8);
        Var_39 = ml_backend__mlds_dump__nl_strcord_0_f_0();
        Var_37 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_38, Var_39);
        Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_36, Var_37);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lval_9 = ((MR_Word) ((MR_hl_field(2, AtomicStmt_5, 0))));
        MR_Word Rval_10 = ((MR_Word) ((MR_hl_field(2, AtomicStmt_5, 1))));
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;

        Var_43 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
        Var_45 = ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(Lval_9);
        Var_47 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) " := ");
        Var_50 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Rval_10);
        Var_51 = ml_backend__mlds_dump__nl_strcord_0_f_0();
        Var_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, Var_51);
        Var_46 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_47, Var_49);
        Var_44 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, Var_46);
        Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_43, Var_44);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, AtomicStmt_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Lval_206 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_5, 1))));
            MR_Word Rval_207 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_5, 2))));

            Var_52 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_54 = ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(Lval_206);
            Var_56 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) " \?:= ");
            Var_59 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Rval_207);
            Var_60 = ml_backend__mlds_dump__nl_strcord_0_f_0();
            Var_58 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_59, Var_60);
            Var_55 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_56, Var_58);
            Var_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_54, Var_55);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_52, Var_53);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_67;
            MR_Word Rval_208 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_5, 1))));

            Var_61 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_63 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "delete object ");
            Var_66 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Rval_208);
            Var_67 = ml_backend__mlds_dump__nl_strcord_0_f_0();
            Var_65 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_66, Var_67);
            Var_62 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_63, Var_65);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_61, Var_62);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Target_11 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_5, 1))));
            MR_Word Ptag_12 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_5, 2))));
            MR_Word ExplicitSecTag_13 = ((MR_Unsigned) ((MR_hl_field(3, AtomicStmt_5, 3))) & (MR_Integer) 1);
            MR_Word Type_14 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_5, 4))));
            MR_Word MaybeSize_15 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_5, 5))));
            MR_Word SecTagCord_20;
            MR_Word SizeCord_21;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_86;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word Var_89;
            MR_Word Var_90;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_95;

            switch (ExplicitSecTag_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                SecTagCord_20 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "no explicit sectag");
                break;
              case (MR_Integer) 1:
                SecTagCord_20 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "explicit sectag");
                break;
            }
            if ((MaybeSize_15 == (MR_Word) ((MR_Unsigned) 0U)))
              SizeCord_21 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "no size");
            else
            {
              MR_Word Size_22 = ((MR_Word) ((MR_hl_field(1, MaybeSize_15, 0))));
              MR_Word Var_71;
              MR_Word Var_72;

              Var_71 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Size_22);
              Var_72 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) " words");
              SizeCord_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_71, Var_72);
            }
            Var_74 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_76 = ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(Target_11);
            Var_78 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) " := new object(ptag ");
            Var_81 = ml_backend__mlds_dump__ptag_to_strcord_1_f_0(Ptag_12);
            Var_83 = ml_backend__mlds_dump__comma_cord_0_f_0();
            Var_86 = ml_backend__mlds_dump__comma_cord_0_f_0();
            Var_89 = ml_backend__mlds_dump__comma_cord_0_f_0();
            Var_91 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(Type_14);
            Var_93 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_95 = ml_backend__mlds_dump__nl_strcord_0_f_0();
            Var_92 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_93, Var_95);
            Var_90 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_91, Var_92);
            Var_88 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_89, Var_90);
            Var_87 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SizeCord_21, Var_88);
            Var_85 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_86, Var_87);
            Var_84 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SecTagCord_20, Var_85);
            Var_82 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_83, Var_84);
            Var_80 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_81, Var_82);
            Var_77 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_78, Var_80);
            Var_75 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_76, Var_77);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_74, Var_75);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_100;
            MR_Word Var_101;
            MR_Word Var_102;
            MR_Word Lval_209 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_5, 1))));

            Var_96 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_98 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "mark_hp ");
            Var_101 = ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(Lval_209);
            Var_102 = ml_backend__mlds_dump__nl_strcord_0_f_0();
            Var_100 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_101, Var_102);
            Var_97 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_98, Var_100);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_96, Var_97);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_103;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_107;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Rval_210 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_5, 1))));

            Var_103 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_105 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "restore_hp ");
            Var_108 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Rval_210);
            Var_109 = ml_backend__mlds_dump__nl_strcord_0_f_0();
            Var_107 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_108, Var_109);
            Var_104 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_105, Var_107);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_103, Var_104);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TrailOp_23 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_5, 1))));

            switch (MR_tag((MR_Word) TrailOp_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(TrailOp_23)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_130;
                      MR_Word Var_131;
                      MR_Word Var_132;
                      MR_Word Var_134;

                      Var_130 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
                      Var_132 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "discard_ticket");
                      Var_134 = ml_backend__mlds_dump__nl_strcord_0_f_0();
                      Var_131 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_132, Var_134);
                      Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_130, Var_131);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_135;
                      MR_Word Var_136;
                      MR_Word Var_137;
                      MR_Word Var_139;

                      Var_135 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
                      Var_137 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "prune_ticket");
                      Var_139 = ml_backend__mlds_dump__nl_strcord_0_f_0();
                      Var_136 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_137, Var_139);
                      Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_135, Var_136);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_110;
                  MR_Word Var_111;
                  MR_Word Var_112;
                  MR_Word Var_114;
                  MR_Word Var_115;
                  MR_Word Var_116;
                  MR_Word Lval_211 = ((MR_Word) ((MR_hl_field(1, TrailOp_23, 0))));

                  Var_110 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
                  Var_112 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "store_ticket ");
                  Var_115 = ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(Lval_211);
                  Var_116 = ml_backend__mlds_dump__nl_strcord_0_f_0();
                  Var_114 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_115, Var_116);
                  Var_111 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_112, Var_114);
                  Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_110, Var_111);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Reason_24 = ((MR_Unsigned) ((MR_hl_field(2, TrailOp_23, 1))) & (MR_Integer) 7);
                  MR_Word ReasonCord_25;
                  MR_Word Var_122;
                  MR_Word Var_123;
                  MR_Word Var_124;
                  MR_Word Var_126;
                  MR_Word Var_127;
                  MR_Word Var_128;
                  MR_Word Var_129;
                  MR_Word Rval_212 = ((MR_Word) ((MR_hl_field(2, TrailOp_23, 0))));

                  switch (Reason_24) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      ReasonCord_25 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "commit ");
                      break;
                    case (MR_Integer) 3:
                      ReasonCord_25 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "exception ");
                      break;
                    case (MR_Integer) 4:
                      ReasonCord_25 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "gc ");
                      break;
                    case (MR_Integer) 2:
                      ReasonCord_25 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "solve ");
                      break;
                    case (MR_Integer) 0:
                      ReasonCord_25 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "undo ");
                      break;
                  }
                  Var_122 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
                  Var_124 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "reset_ticket for ");
                  Var_128 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Rval_212);
                  Var_129 = ml_backend__mlds_dump__nl_strcord_0_f_0();
                  Var_127 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_128, Var_129);
                  Var_126 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ReasonCord_25, Var_127);
                  Var_123 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_124, Var_126);
                  Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_122, Var_123);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, TrailOp_23, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_140;
                      MR_Word Var_141;
                      MR_Word Var_142;
                      MR_Word Var_144;
                      MR_Word Var_145;
                      MR_Word Var_146;
                      MR_Word Lval_213 = ((MR_Word) ((MR_hl_field(3, TrailOp_23, 1))));

                      Var_140 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
                      Var_142 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "mark_ticket_stack ");
                      Var_145 = ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(Lval_213);
                      Var_146 = ml_backend__mlds_dump__nl_strcord_0_f_0();
                      Var_144 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_145, Var_146);
                      Var_141 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_142, Var_144);
                      Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_140, Var_141);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_147;
                      MR_Word Var_148;
                      MR_Word Var_149;
                      MR_Word Var_151;
                      MR_Word Var_152;
                      MR_Word Var_153;
                      MR_Word Rval_214 = ((MR_Word) ((MR_hl_field(3, TrailOp_23, 1))));

                      Var_147 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
                      Var_149 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "prune_tickets_to ");
                      Var_152 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(Rval_214);
                      Var_153 = ml_backend__mlds_dump__nl_strcord_0_f_0();
                      Var_151 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_152, Var_153);
                      Var_148 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_149, Var_151);
                      Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_147, Var_148);
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Components_27 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_5, 2))));
            MR_Word Var_154;
            MR_Word Var_155;
            MR_Word Var_156;
            MR_Word Var_158;
            MR_Word Var_159;
            MR_Word Var_160;
            MR_Word Var_161;
            MR_Integer Var_162;
            MR_Word Var_164;
            MR_Word Var_165;
            MR_Word Var_166;

            Var_154 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_156 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "inline_target_code\n");
            Var_162 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
            {
              Var_161 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_161, 0) = ((MR_Box) (&ml_backend__mlds_dump_scalar_common_4[0]));
              MR_hl_field(0, Var_161, 1) = ((MR_Box) (ml_backend__mlds_dump__mlds_atomic_stmt_to_strcord_2_f_0_1));
              MR_hl_field(0, Var_161, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_161, 3) = ((MR_Box) (Var_162));
            }
            Var_160 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&ml_backend__mlds_dump_scalar_common_1[0]), Var_161, Components_27);
            Var_159 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_160);
            Var_165 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_166 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "end inline_target_code\n");
            Var_164 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_165, Var_166);
            Var_158 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_159, Var_164);
            Var_155 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_156, Var_158);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_154, Var_155);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word OutlineArgs_28 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_5, 2))));
            MR_Word ReturnLvals_29 = ((MR_Word) ((MR_hl_field(3, AtomicStmt_5, 3))));
            MR_String Code_30 = ((MR_String) ((MR_hl_field(3, AtomicStmt_5, 4))));
            MR_Word ReturnCord_31;
            MR_Word Var_182;
            MR_Word Var_183;
            MR_Word Var_184;
            MR_Word Var_186;
            MR_Word Var_187;
            MR_Word Var_188;
            MR_Word Var_189;
            MR_Integer Var_190;
            MR_Word Var_192;
            MR_Word Var_193;
            MR_Word Var_194;
            MR_Integer Var_195;
            MR_Word Var_197;
            MR_Word Var_198;
            MR_Word Var_200;
            MR_Word Var_201;
            MR_Word Var_202;
            MR_Word Var_203;
            MR_Word Var_204;

            if ((ReturnLvals_29 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_168;
              MR_Integer Var_169 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
              MR_Word Var_171;

              Var_168 = ml_backend__mlds_dump__indent_strcord_1_f_0(Var_169);
              Var_171 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "no return lvals\n");
              ReturnCord_31 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_168, Var_171);
            }
            else
            {
              MR_Word HeadLval_32 = ((MR_Word) ((MR_hl_field(1, ReturnLvals_29, 0))));
              MR_Word TailLvals_33 = ((MR_Word) ((MR_hl_field(1, ReturnLvals_29, 1))));
              MR_Word Var_173;
              MR_Integer Var_174 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
              MR_Word Var_176;
              MR_Word Var_177;
              MR_Word Var_179;
              MR_Word Var_180;
              MR_Word Var_181;

              Var_173 = ml_backend__mlds_dump__indent_strcord_1_f_0(Var_174);
              Var_177 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "return lvals ");
              Var_180 = ml_backend__mlds_dump__mlds_lvals_to_strcord_2_f_0(HeadLval_32, TailLvals_33);
              Var_181 = ml_backend__mlds_dump__nl_strcord_0_f_0();
              Var_179 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_180, Var_181);
              Var_176 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_177, Var_179);
              ReturnCord_31 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_173, Var_176);
            }
            Var_182 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_184 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "inline_target_code\n");
            Var_190 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
            {
              Var_189 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_189, 0) = ((MR_Box) (&ml_backend__mlds_dump_scalar_common_4[1]));
              MR_hl_field(0, Var_189, 1) = ((MR_Box) (ml_backend__mlds_dump__mlds_atomic_stmt_to_strcord_2_f_0_2));
              MR_hl_field(0, Var_189, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_189, 3) = ((MR_Box) (Var_190));
            }
            Var_188 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_outline_arg_0), (MR_Word) (&ml_backend__mlds_dump_scalar_common_1[0]), Var_189, OutlineArgs_28);
            Var_187 = mercury__cord__cord_list_to_cord_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_188);
            Var_195 = (MR_Integer) ((MR_Unsigned) Indent_4 + (MR_Unsigned) 1);
            Var_194 = ml_backend__mlds_dump__indent_strcord_1_f_0(Var_195);
            Var_198 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "code\n");
            Var_201 = ml_backend__mlds_dump__strcord_1_f_0(Code_30);
            Var_203 = ml_backend__mlds_dump__indent_strcord_1_f_0(Indent_4);
            Var_204 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "end inline_target_code\n");
            Var_202 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_203, Var_204);
            Var_200 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_201, Var_202);
            Var_197 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_198, Var_200);
            Var_193 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_194, Var_197);
            Var_192 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ReturnCord_31, Var_193);
            Var_186 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_187, Var_192);
            Var_183 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_184, Var_186);
            Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_182, Var_183);
          }
          break;
      }
      break;
  }
  return Cord_6;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__nl_strcord_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_lvals_to_strcord_2_f_0(
  MR_Word HeadLval_4,
  MR_Word TailLvals_5)
{
  MR_Word Cord_6;

  if ((TailLvals_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Cord_6 = ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(HeadLval_4);
  else
  {
    MR_Word HeadTailLval_7 = ((MR_Word) ((MR_hl_field(1, TailLvals_5, 0))));
    MR_Word TailTailLvals_8 = ((MR_Word) ((MR_hl_field(1, TailLvals_5, 1))));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;

    Var_9 = ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(HeadLval_4);
    Var_11 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
    Var_12 = ml_backend__mlds_dump__mlds_lvals_to_strcord_2_f_0(HeadTailLval_7, TailTailLvals_8);
    Var_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, Var_12);
    Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, Var_10);
  }
  return Cord_6;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(
  MR_Word Rval_3)
{
  MR_Word Cord_4;

  switch (MR_tag((MR_Word) Rval_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ScalarCommon_16 = (MR_Word) ((MR_Word) (Rval_3));
        MR_Word Var_86;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;

        Var_86 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "scalar_common(");
        Var_89 = ml_backend__mlds_dump__mlds_scalar_common_to_strcord_1_f_0(ScalarCommon_16);
        Var_90 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
        Var_88 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_89, Var_90);
        Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_86, Var_88);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_92;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word ScalarCommon_114 = (MR_Word) (MR_body((MR_Word) (Rval_3), (MR_Integer) 1));

        Var_92 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "scalar_common_addr(");
        Var_95 = ml_backend__mlds_dump__mlds_scalar_common_to_strcord_1_f_0(ScalarCommon_114);
        Var_96 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
        Var_94 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_95, Var_96);
        Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_92, Var_94);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lval_5 = ((MR_Word) ((MR_hl_field(2, Rval_3, 0))));

        Cord_4 = ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(Lval_5);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Rval_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Ptag_6 = ((MR_Word) ((MR_hl_field(3, Rval_3, 1))));
            MR_Word SubRval_7 = ((MR_Word) ((MR_hl_field(3, Rval_3, 2))));
            MR_Word Var_20;
            MR_Word Var_22;
            MR_Word Var_23;
            MR_Word Var_24;
            MR_Word Var_25;
            MR_Word Var_26;
            MR_Word Var_27;
            MR_Word Var_28;

            Var_20 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "mkword(");
            Var_23 = ml_backend__mlds_dump__ptag_to_strcord_1_f_0(Ptag_6);
            Var_25 = ml_backend__mlds_dump__comma_cord_0_f_0();
            Var_27 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(SubRval_7);
            Var_28 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_26 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_27, Var_28);
            Var_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, Var_26);
            Var_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, Var_24);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_20, Var_22);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RvalConst_8 = ((MR_Word) ((MR_hl_field(3, Rval_3, 1))));

            Cord_4 = ml_backend__mlds_dump__mlds_rval_const_to_strcord_1_f_0(RvalConst_8);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word FromType_9 = ((MR_Word) ((MR_hl_field(3, Rval_3, 1))));
            MR_Word Var_30;
            MR_Word Var_32;
            MR_Word Var_33;
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word SubRval_109 = ((MR_Word) ((MR_hl_field(3, Rval_3, 2))));

            Var_30 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "box(from ");
            Var_33 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(FromType_9);
            Var_35 = ml_backend__mlds_dump__comma_cord_0_f_0();
            Var_37 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(SubRval_109);
            Var_38 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_36 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_37, Var_38);
            Var_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_35, Var_36);
            Var_32 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_33, Var_34);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, Var_32);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ToType_10 = ((MR_Word) ((MR_hl_field(3, Rval_3, 1))));
            MR_Word Var_40;
            MR_Word Var_42;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word Var_46;
            MR_Word Var_47;
            MR_Word Var_48;
            MR_Word SubRval_110 = ((MR_Word) ((MR_hl_field(3, Rval_3, 2))));

            Var_40 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "unbox(to ");
            Var_43 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(ToType_10);
            Var_45 = ml_backend__mlds_dump__comma_cord_0_f_0();
            Var_47 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(SubRval_110);
            Var_48 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_46 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_47, Var_48);
            Var_44 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, Var_46);
            Var_42 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_43, Var_44);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_40, Var_42);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_50;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;
            MR_Word Var_56;
            MR_Word Var_57;
            MR_Word Var_58;
            MR_Word SubRval_111 = ((MR_Word) ((MR_hl_field(3, Rval_3, 2))));
            MR_Word ToType_112 = ((MR_Word) ((MR_hl_field(3, Rval_3, 1))));

            Var_50 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "cast(to ");
            Var_53 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(ToType_112);
            Var_55 = ml_backend__mlds_dump__comma_cord_0_f_0();
            Var_57 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(SubRval_111);
            Var_58 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_56 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_57, Var_58);
            Var_54 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_55, Var_56);
            Var_52 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_53, Var_54);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, Var_52);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word UnOp_11 = ((MR_Word) ((MR_hl_field(3, Rval_3, 1))));
            MR_Word SubRvalA_12 = ((MR_Word) ((MR_hl_field(3, Rval_3, 2))));
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_66;

            Var_60 = ml_backend__mlds_dump__unop_to_strcord_1_f_0(UnOp_11);
            Var_62 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "(");
            Var_65 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(SubRvalA_12);
            Var_66 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_64 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_65, Var_66);
            Var_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_62, Var_64);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_60, Var_61);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word BinOp_13 = ((MR_Word) ((MR_hl_field(3, Rval_3, 1))));
            MR_Word SubRvalB_14 = ((MR_Word) ((MR_hl_field(3, Rval_3, 3))));
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word SubRvalA_113 = ((MR_Word) ((MR_hl_field(3, Rval_3, 2))));

            Var_68 = ml_backend__mlds_dump__binop_to_strcord_1_f_0(BinOp_13);
            Var_70 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "(");
            Var_73 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(SubRvalA_113);
            Var_75 = ml_backend__mlds_dump__comma_cord_0_f_0();
            Var_77 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(SubRvalB_14);
            Var_78 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_76 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_77, Var_78);
            Var_74 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_75, Var_76);
            Var_72 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_73, Var_74);
            Var_69 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_70, Var_72);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_68, Var_69);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word SubLval_15 = ((MR_Word) ((MR_hl_field(3, Rval_3, 1))));
            MR_Word Var_80;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;

            Var_80 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "addr_of(");
            Var_83 = ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(SubLval_15);
            Var_84 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_82 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_83, Var_84);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_80, Var_82);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word VectorCommon_17 = ((MR_Word) ((MR_hl_field(3, Rval_3, 1))));
            MR_Word RowRval_18 = ((MR_Word) ((MR_hl_field(3, Rval_3, 2))));
            MR_Word Var_98;
            MR_Word Var_100;
            MR_Word Var_101;
            MR_Word Var_102;
            MR_Word Var_103;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_106;

            Var_98 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "vector_common_row_addr(");
            Var_101 = ml_backend__mlds_dump__mlds_vector_common_to_strcord_1_f_0(VectorCommon_17);
            Var_103 = ml_backend__mlds_dump__comma_cord_0_f_0();
            Var_105 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(RowRval_18);
            Var_106 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_104 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_105, Var_106);
            Var_102 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_103, Var_104);
            Var_100 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_101, Var_102);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_98, Var_100);
          }
          break;
        case (MR_Integer) 9:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "self");
          break;
      }
      break;
  }
  return Cord_4;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_lval_to_strcord_1_f_0(
  MR_Word Lval_3)
{
  MR_Word Cord_4;

  switch (MR_tag((MR_Word) Lval_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MaybePtag_19 = ((MR_Word) ((MR_hl_field(0, Lval_3, 0))));
        MR_Word PtrRval_20 = ((MR_Word) ((MR_hl_field(0, Lval_3, 1))));
        MR_Word FieldId_22 = ((MR_Word) ((MR_hl_field(0, Lval_3, 3))));
        MR_Word PtagCord_24;
        MR_Word FieldCord_27;
        MR_Word Var_60;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;

        if ((MaybePtag_19 == (MR_Word) ((MR_Unsigned) 0U)))
          PtagCord_24 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "ptag unknown")));
        else
        {
          MR_Word Ptag_25 = ((MR_Word) ((MR_hl_field(1, MaybePtag_19, 0))));
          MR_Word Var_57;
          MR_Word Var_59;
          uint8_t PtagUint8_84;
          MR_Integer Var_85;
          MR_String Var_86;

          Var_57 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "ptag ")));
          PtagUint8_84 = (uint8_t) (Ptag_25);
          Var_85 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_84);
          Var_86 = mercury__string__int_to_string_1_f_0(Var_85);
          Var_59 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_86)));
          PtagCord_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_57, Var_59);
        }
        if (((MR_tag((MR_Word) FieldId_22)) == (MR_Integer) 1))
        {
          MR_Word QualVarName_28 = ((MR_Word) ((MR_hl_field(1, FieldId_22, 0))));
          MR_Word FieldVarName_31 = ((MR_Word) ((MR_hl_field(0, QualVarName_28, 2))));

          FieldCord_27 = ml_backend__mlds_dump__mlds_field_var_name_to_strcord_1_f_0(FieldVarName_31);
        }
        else
        {
          MR_Word OffsetRval_26 = ((MR_Word) ((MR_hl_field(0, FieldId_22, 0))));

          FieldCord_27 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(OffsetRval_26);
        }
        Var_60 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "field(")));
        Var_64 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
        Var_66 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(PtrRval_20);
        Var_68 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
        Var_70 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")")));
        Var_69 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FieldCord_27, Var_70);
        Var_67 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_68, Var_69);
        Var_65 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_66, Var_67);
        Var_63 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_64, Var_65);
        Var_62 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PtagCord_24, Var_63);
        Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_60, Var_62);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word AddrRval_18 = ((MR_Word) ((MR_hl_field(1, Lval_3, 0))));
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_54;

        Var_50 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "mem_ref(");
        Var_53 = ml_backend__mlds_dump__mlds_rval_to_strcord_1_f_0(AddrRval_18);
        Var_54 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
        Var_52 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_53, Var_54);
        Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, Var_52);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word GlobalVarRef_16 = ((MR_Word) ((MR_hl_field(2, Lval_3, 0))));
        MR_String EnvVar_17 = (MR_String) (GlobalVarRef_16);
        MR_Word Var_44;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;

        Var_44 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "env_var_ref(");
        Var_47 = ml_backend__mlds_dump__strcord_1_f_0(EnvVar_17);
        Var_48 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
        Var_46 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_47, Var_48);
        Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_44, Var_46);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Lval_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word LocalVar_5 = ((MR_Word) ((MR_hl_field(3, Lval_3, 1))));
            MR_String Var_32;

            Var_32 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVar_5);
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_32);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word QualGlobalVar_7 = ((MR_Word) ((MR_hl_field(3, Lval_3, 1))));
            MR_Word GlobalVar_9 = ((MR_Word) ((MR_hl_field(0, QualGlobalVar_7, 1))));

            switch (MR_tag((MR_Word) GlobalVar_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "dummy_var");
                break;
              case (MR_Integer) 1:
                Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "rtti_id");
                break;
              case (MR_Integer) 2:
                Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "tabling_var");
                break;
              case (MR_Integer) 3:
                {
                  MR_Word GlobalConstVar_13 = ((MR_Unsigned) ((MR_hl_field(3, GlobalVar_9, 0))) & (MR_Integer) 7);
                  MR_Unsigned SeqNum_14 = ((MR_Unsigned) ((MR_hl_field(3, GlobalVar_9, 1))));
                  MR_Word GlobalCord_15;
                  MR_Word Var_42;
                  MR_String Var_101;

                  switch (GlobalConstVar_13) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 6:
                      GlobalCord_15 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "global bit vector ")));
                      break;
                    case (MR_Integer) 4:
                      GlobalCord_15 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "global closure layout ")));
                      break;
                    case (MR_Integer) 0:
                      GlobalCord_15 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "global const var ")));
                      break;
                    case (MR_Integer) 1:
                      GlobalCord_15 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "global float var ")));
                      break;
                    case (MR_Integer) 2:
                      GlobalCord_15 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "global int64 var ")));
                      break;
                    case (MR_Integer) 5:
                      GlobalCord_15 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "global typevar vector ")));
                      break;
                    case (MR_Integer) 3:
                      GlobalCord_15 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "global uint64 var ")));
                      break;
                  }
                  Var_101 = mercury__string__uint_to_string_1_f_0(SeqNum_14);
                  Var_42 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_101)));
                  Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), GlobalCord_15, Var_42);
                }
                break;
            }
          }
          break;
      }
      break;
  }
  return Cord_4;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_field_var_name_to_strcord_1_f_0(
  MR_Word FieldVarName_3)
{
  MR_Word Cord_4;

  switch (MR_tag((MR_Word) FieldVarName_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(FieldVarName_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "mr_value")));
          break;
        case (MR_Integer) 1:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "data_tag")));
          break;
        case (MR_Integer) 2:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "ptr_num")));
          break;
        case (MR_Integer) 3:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "prev")));
          break;
        case (MR_Integer) 4:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "trace")));
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned TypeNum_5 = ((MR_Unsigned) ((MR_hl_field(1, FieldVarName_3, 0))));
        MR_Unsigned FieldNum_6 = ((MR_Unsigned) ((MR_hl_field(1, FieldVarName_3, 1))));
        MR_String Str_7;
        MR_String Var_42;
        MR_String Var_49;
        MR_String Var_51;
        MR_String Var_53;
        MR_String Var_60;

        mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_dump_scalar_common_2[0]), (MR_Integer) 1, FieldNum_6, &Var_42);
        Var_49 = mercury__string__f_43_43_2_f_0(Var_42, (MR_String) ">");
        Var_51 = mercury__string__f_43_43_2_f_0((MR_String) ", field ", Var_49);
        mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ml_backend__mlds_dump_scalar_common_2[0]), (MR_Integer) 1, TypeNum_5, &Var_53);
        Var_60 = mercury__string__f_43_43_2_f_0(Var_53, Var_51);
        Str_7 = mercury__string__f_43_43_2_f_0((MR_String) "global data field <type ", Var_60);
        Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Str_7)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String FieldName_8 = ((MR_String) ((MR_hl_field(2, FieldVarName_3, 0))));
        MR_Word Var_18;
        MR_Word Var_20;

        Var_18 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "du ctor field hld ")));
        Var_20 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FieldName_8)));
        Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_18, Var_20);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, FieldVarName_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ConstName_9 = ((MR_String) ((MR_hl_field(3, FieldVarName_3, 1))));
            MR_Word Var_23;
            MR_Word Var_25;

            Var_23 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "enum_const ")));
            Var_25 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ConstName_9)));
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, Var_25);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer BaseNum_11 = ((MR_Integer) ((MR_hl_field(3, FieldVarName_3, 1))));
            MR_Word Var_31;
            MR_Word Var_33;
            MR_String Var_63;

            Var_31 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "base class ")));
            Var_63 = mercury__string__int_to_string_1_f_0(BaseNum_11);
            Var_33 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_63)));
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_31, Var_33);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word LocalVar_10 = ((MR_Word) ((MR_hl_field(3, FieldVarName_3, 1))));
            MR_Word Var_27;
            MR_Word Var_29;
            MR_String Var_30;

            Var_27 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "env field local var ")));
            Var_30 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVar_10);
            Var_29 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_30)));
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_27, Var_29);
          }
          break;
      }
      break;
  }
  return Cord_4;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__binop_to_strcord_1_f_0(
  MR_Word BinOp_3)
{
  MR_Word Cord_4;

  switch (MR_tag((MR_Word) BinOp_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(BinOp_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "logical_and");
          break;
        case (MR_Integer) 1:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "logical_or");
          break;
        case (MR_Integer) 2:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "body");
          break;
        case (MR_Integer) 3:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "string_raw_index_cu");
          break;
        case (MR_Integer) 4:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "str_nzp");
          break;
        case (MR_Integer) 5:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "in_range");
          break;
        case (MR_Integer) 6:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "float_from_dword");
          break;
        case (MR_Integer) 7:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "int64_from_dword");
          break;
        case (MR_Integer) 8:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "uint64_from_dword");
          break;
        case (MR_Integer) 9:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "ptr_eq");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArithOp_6 = ((MR_Unsigned) ((MR_hl_field(1, BinOp_3, 0))) & (MR_Integer) 7);
        MR_Word IntType_100 = ((((MR_Unsigned) ((MR_hl_field(1, BinOp_3, 0))) >> 3)) & (MR_Integer) 15);
        MR_String OpStr_101;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_108;

        OpStr_101 = backend_libs__builtin_ops__dump_arith_op_1_f_0(ArithOp_6);
        Var_102 = ml_backend__mlds_dump__strcord_1_f_0(OpStr_101);
        Var_104 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "<");
        Var_107 = ml_backend__mlds_dump__int_type_to_strcord_1_f_0(IntType_100);
        Var_108 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ">");
        Var_106 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_107, Var_108);
        Var_103 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_104, Var_106);
        Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_102, Var_103);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_188 = ((MR_Unsigned) ((MR_hl_field(2, BinOp_3, 0))) & (MR_Integer) 1);
        MR_Word Var_189 = ((((MR_Unsigned) ((MR_hl_field(2, BinOp_3, 0))) >> 1)) & (MR_Integer) 15);

        switch (Var_188) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_124;
              MR_Word Var_125;
              MR_Word Var_126;
              MR_Word Var_128;
              MR_Word Var_129;
              MR_Word Var_130;

              Var_124 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "raw_left_shift");
              Var_126 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "<");
              Var_129 = ml_backend__mlds_dump__int_type_to_strcord_1_f_0(Var_189);
              Var_130 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ">");
              Var_128 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_129, Var_130);
              Var_125 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_126, Var_128);
              Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_124, Var_125);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_135;
              MR_Word Var_136;
              MR_Word Var_137;
              MR_Word Var_139;
              MR_Word Var_140;
              MR_Word Var_141;

              Var_135 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "raw_left_ushift");
              Var_137 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "<");
              Var_140 = ml_backend__mlds_dump__int_type_to_strcord_1_f_0(Var_189);
              Var_141 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ">");
              Var_139 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_140, Var_141);
              Var_136 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_137, Var_139);
              Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_135, Var_136);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, BinOp_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_190 = ((MR_Unsigned) ((MR_hl_field(3, BinOp_3, 1))) & (MR_Integer) 1);
            MR_Word Var_191 = ((((MR_Unsigned) ((MR_hl_field(3, BinOp_3, 1))) >> 1)) & (MR_Integer) 15);

            switch (Var_190) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_157;
                  MR_Word Var_158;
                  MR_Word Var_159;
                  MR_Word Var_161;
                  MR_Word Var_162;
                  MR_Word Var_163;

                  Var_157 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "raw_right_shift");
                  Var_159 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "<");
                  Var_162 = ml_backend__mlds_dump__int_type_to_strcord_1_f_0(Var_191);
                  Var_163 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ">");
                  Var_161 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_162, Var_163);
                  Var_158 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_159, Var_161);
                  Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_157, Var_158);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_168;
                  MR_Word Var_169;
                  MR_Word Var_170;
                  MR_Word Var_172;
                  MR_Word Var_173;
                  MR_Word Var_174;

                  Var_168 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "raw_right_ushift");
                  Var_170 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "<");
                  Var_173 = ml_backend__mlds_dump__int_type_to_strcord_1_f_0(Var_191);
                  Var_174 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ">");
                  Var_172 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_173, Var_174);
                  Var_169 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_170, Var_172);
                  Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_168, Var_169);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word IntType_5 = ((MR_Unsigned) ((MR_hl_field(3, BinOp_3, 1))) & (MR_Integer) 15);
            MR_Word Var_17;
            MR_Word Var_18;
            MR_Word Var_19;
            MR_Word Var_21;
            MR_Word Var_22;
            MR_Word Var_23;

            Var_17 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "bitwise_and");
            Var_19 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "<");
            Var_22 = ml_backend__mlds_dump__int_type_to_strcord_1_f_0(IntType_5);
            Var_23 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ">");
            Var_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_22, Var_23);
            Var_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, Var_21);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17, Var_18);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word IntType_78 = ((MR_Unsigned) ((MR_hl_field(3, BinOp_3, 1))) & (MR_Integer) 15);
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_86;

            Var_80 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "bitwise_or");
            Var_82 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "<");
            Var_85 = ml_backend__mlds_dump__int_type_to_strcord_1_f_0(IntType_78);
            Var_86 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ">");
            Var_84 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_85, Var_86);
            Var_81 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_82, Var_84);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_80, Var_81);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word IntType_89 = ((MR_Unsigned) ((MR_hl_field(3, BinOp_3, 1))) & (MR_Integer) 15);
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_93;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Var_97;

            Var_91 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "bitwise_xor");
            Var_93 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "<");
            Var_96 = ml_backend__mlds_dump__int_type_to_strcord_1_f_0(IntType_89);
            Var_97 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ">");
            Var_95 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_96, Var_97);
            Var_92 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_93, Var_95);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_91, Var_92);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word CmpOp_8 = ((MR_Unsigned) ((MR_hl_field(3, BinOp_3, 1))) & (MR_Integer) 7);
            MR_Word IntType_111 = ((((MR_Unsigned) ((MR_hl_field(3, BinOp_3, 1))) >> 3)) & (MR_Integer) 15);
            MR_String OpStr_112;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_117;
            MR_Word Var_118;
            MR_Word Var_119;

            OpStr_112 = backend_libs__builtin_ops__dump_cmp_op_1_f_0(CmpOp_8);
            Var_113 = ml_backend__mlds_dump__strcord_1_f_0(OpStr_112);
            Var_115 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "<");
            Var_118 = ml_backend__mlds_dump__int_type_to_strcord_1_f_0(IntType_111);
            Var_119 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ">");
            Var_117 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_118, Var_119);
            Var_114 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_115, Var_117);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_113, Var_114);
          }
          break;
        case (MR_Integer) 5:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "array_index");
          break;
        case (MR_Integer) 6:
          {
            MR_String Var_56;
            MR_String OpStr_69;
            MR_Word CmpOp_70 = ((MR_Unsigned) ((MR_hl_field(3, BinOp_3, 1))) & (MR_Integer) 7);

            OpStr_69 = backend_libs__builtin_ops__dump_cmp_op_1_f_0(CmpOp_70);
            Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "str_", OpStr_69);
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_56);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Integer Offset_10 = ((MR_Integer) ((MR_hl_field(3, BinOp_3, 1))));
            MR_Word MaybeSize_11 = ((MR_Word) ((MR_hl_field(3, BinOp_3, 2))));

            if ((MaybeSize_11 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word Var_33;
              MR_Word Var_35;
              MR_Word Var_36;
              MR_Word Var_38;
              MR_Word Var_39;
              MR_Word Var_40;

              Var_33 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "offset_str_eq");
              Var_36 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "<");
              Var_39 = ml_backend__mlds_dump__intcord_1_f_0(Offset_10);
              Var_40 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ">");
              Var_38 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_39, Var_40);
              Var_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_36, Var_38);
              Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_33, Var_35);
            }
            else
            {
              MR_Integer Size_12 = ((MR_Integer) ((MR_hl_field(1, MaybeSize_11, 0))));
              MR_Word Var_42;
              MR_Word Var_44;
              MR_Word Var_45;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word Var_49;
              MR_Word Var_50;
              MR_Word Var_52;
              MR_Word Var_53;
              MR_Word Var_54;

              Var_42 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "offset_strn_eq");
              Var_45 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "<");
              Var_48 = ml_backend__mlds_dump__intcord_1_f_0(Offset_10);
              Var_50 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ",");
              Var_53 = ml_backend__mlds_dump__intcord_1_f_0(Size_12);
              Var_54 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ">");
              Var_52 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_53, Var_54);
              Var_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, Var_52);
              Var_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_48, Var_49);
              Var_44 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, Var_47);
              Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_42, Var_44);
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word CmpOp_68 = ((MR_Unsigned) ((MR_hl_field(3, BinOp_3, 1))) & (MR_Integer) 7);

            switch (CmpOp_68) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 3:
                Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "unsigned_le");
                break;
              case (MR_Integer) 2:
                Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "unsigned_lt");
                break;
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Var_59;
            MR_String Var_60;
            MR_Word ArithOp_71 = ((MR_Unsigned) ((MR_hl_field(3, BinOp_3, 1))) & (MR_Integer) 7);
            MR_String OpStr_72;

            Var_59 = (MR_Word) (ArithOp_71);
            OpStr_72 = backend_libs__builtin_ops__dump_arith_op_1_f_0(Var_59);
            Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "float_", OpStr_72);
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_60);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_String Var_62;
            MR_String OpStr_73;
            MR_Word CmpOp_74 = ((MR_Unsigned) ((MR_hl_field(3, BinOp_3, 1))) & (MR_Integer) 7);

            OpStr_73 = backend_libs__builtin_ops__dump_cmp_op_1_f_0(CmpOp_74);
            Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "float_", OpStr_73);
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_62);
          }
          break;
      }
      break;
  }
  return Cord_4;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__unop_to_strcord_1_f_0(
  MR_Word UnOp_3)
{
  MR_Word Cord_4;

  switch (MR_tag((MR_Word) UnOp_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(UnOp_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "tag")));
          break;
        case (MR_Integer) 1:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "strip_tag")));
          break;
        case (MR_Integer) 2:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "mkbody")));
          break;
        case (MR_Integer) 3:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "unmkbody")));
          break;
        case (MR_Integer) 4:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "logical_not")));
          break;
        case (MR_Integer) 5:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "hash_string1")));
          break;
        case (MR_Integer) 6:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "hash_string2")));
          break;
        case (MR_Integer) 7:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "hash_string3")));
          break;
        case (MR_Integer) 8:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "hash_string4")));
          break;
        case (MR_Integer) 9:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "hash_string5")));
          break;
        case (MR_Integer) 10:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "hash_string6")));
          break;
        case (MR_Integer) 11:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "float_get_word0")));
          break;
        case (MR_Integer) 12:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "float_get_word1")));
          break;
        case (MR_Integer) 13:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "int64_get_word0")));
          break;
        case (MR_Integer) 14:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "int64_get_word1")));
          break;
        case (MR_Integer) 15:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "uint64_get_word0")));
          break;
        case (MR_Integer) 16:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "uint64_get_word1")));
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntType_5 = ((MR_Unsigned) ((MR_hl_field(1, UnOp_3, 0))) & (MR_Integer) 15);
        MR_Word Var_10;
        MR_Word Var_12;
        MR_Word Var_13;
        MR_Word Var_14;

        Var_10 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "bitwise_complement<")));
        Var_13 = ml_backend__mlds_dump__int_type_to_strcord_1_f_0(IntType_5);
        Var_14 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ">")));
        Var_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_13, Var_14);
        Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_10, Var_12);
      }
      break;
  }
  return Cord_4;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_vector_common_to_strcord_1_f_0(
  MR_Word VectorCommon_3)
{
  MR_Word Cord_4;
  MR_Word TypeNum_7 = ((MR_Word) ((MR_hl_field(0, VectorCommon_3, 2))));
  MR_Unsigned StartRowNum_8 = ((MR_Unsigned) ((MR_hl_field(0, VectorCommon_3, 3))));
  MR_Unsigned NumRows_9 = ((MR_Unsigned) ((MR_hl_field(0, VectorCommon_3, 4))));
  MR_Unsigned TypeNumUInt_10 = (MR_Unsigned) (TypeNum_7);
  MR_Word Var_11;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_String Var_33;
  MR_String Var_38;
  MR_String Var_43;

  Var_11 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "vector_common(type ")));
  Var_33 = mercury__string__uint_to_string_1_f_0(TypeNumUInt_10);
  Var_14 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_33)));
  Var_16 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
  Var_18 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "start row ")));
  Var_38 = mercury__string__uint_to_string_1_f_0(StartRowNum_8);
  Var_21 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_38)));
  Var_23 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
  Var_25 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "num rows ")));
  Var_43 = mercury__string__uint_to_string_1_f_0(NumRows_9);
  Var_28 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_43)));
  Var_29 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")")));
  Var_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_28, Var_29);
  Var_24 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, Var_27);
  Var_22 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, Var_24);
  Var_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, Var_22);
  Var_17 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_18, Var_20);
  Var_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_16, Var_17);
  Var_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, Var_15);
  Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, Var_13);
  return Cord_4;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_scalar_common_to_strcord_1_f_0(
  MR_Word ScalarCommon_3)
{
  MR_Word Cord_4;
  MR_Word TypeNum_7 = ((MR_Word) ((MR_hl_field(0, ScalarCommon_3, 2))));
  MR_Unsigned RowNum_8 = ((MR_Unsigned) ((MR_hl_field(0, ScalarCommon_3, 3))));
  MR_Unsigned TypeNumUInt_9 = (MR_Unsigned) (TypeNum_7);
  MR_Word Var_10;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_String Var_25;
  MR_String Var_30;

  Var_10 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "scalar_common(type ")));
  Var_25 = mercury__string__uint_to_string_1_f_0(TypeNumUInt_9);
  Var_13 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_25)));
  Var_15 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
  Var_17 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "row ")));
  Var_30 = mercury__string__uint_to_string_1_f_0(RowNum_8);
  Var_20 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_30)));
  Var_21 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")")));
  Var_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_20, Var_21);
  Var_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17, Var_19);
  Var_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_15, Var_16);
  Var_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_13, Var_14);
  Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_10, Var_12);
  return Cord_4;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_rval_const_to_strcord_1_f_0(
  MR_Word Const_3)
{
  MR_Word Cord_4;

  switch (MR_tag((MR_Word) Const_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Const_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "true");
          break;
        case (MR_Integer) 1:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "false");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CodeAddr_24 = (MR_Word) (MR_body((MR_Word) (Const_3), (MR_Integer) 1));
        MR_Word QualFuncLabel_25 = ((MR_Word) ((MR_hl_field(0, CodeAddr_24, 0))));
        MR_Word FuncLabel_28 = ((MR_Word) ((MR_hl_field(0, QualFuncLabel_25, 1))));
        MR_Word FuncLabelCord_29;
        MR_Word Var_74;

        FuncLabelCord_29 = ml_backend__mlds_dump__mlds_func_label_to_strcord_1_f_0(FuncLabel_28);
        Var_74 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "&")));
        Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_74, FuncLabelCord_29);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Int_5 = ((MR_Integer) ((MR_hl_field(2, Const_3, 0))));
        MR_String Var_37;

        Var_37 = mercury__string__int_to_string_1_f_0(Int_5);
        Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_37);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Const_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Unsigned Uint_6 = ((MR_Unsigned) ((MR_hl_field(3, Const_3, 1))));
            MR_String Var_38;

            Var_38 = mercury__string__uint_to_string_1_f_0(Uint_6);
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_38);
          }
          break;
        case (MR_Integer) 1:
          {
            int8_t Int8_7 = ((int8_t) (MR_Word) (MR_hl_field(3, Const_3, 1)));
            MR_String Var_39;

            Var_39 = mercury__string__int8_to_string_1_f_0(Int8_7);
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_39);
          }
          break;
        case (MR_Integer) 2:
          {
            uint8_t Uint8_8 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_3, 1)));
            MR_String Var_40;

            Var_40 = mercury__string__uint8_to_string_1_f_0(Uint8_8);
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_40);
          }
          break;
        case (MR_Integer) 3:
          {
            int16_t Int16_9 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_3, 1)));
            MR_String Var_41;

            Var_41 = mercury__string__int16_to_string_1_f_0(Int16_9);
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_41);
          }
          break;
        case (MR_Integer) 4:
          {
            uint16_t Uint16_10 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_3, 1)));
            MR_String Var_42;

            Var_42 = mercury__string__uint16_to_string_1_f_0(Uint16_10);
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_42);
          }
          break;
        case (MR_Integer) 5:
          {
            int32_t Int32_11 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_3, 1)));
            MR_String Var_43;

            Var_43 = mercury__string__int32_to_string_1_f_0(Int32_11);
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_43);
          }
          break;
        case (MR_Integer) 6:
          {
            uint32_t Uint32_12 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_3, 1)));
            MR_String Var_44;

            Var_44 = mercury__string__uint32_to_string_1_f_0(Uint32_12);
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_44);
          }
          break;
        case (MR_Integer) 7:
          {
            int64_t Int64_13 = MR_unbox_int64((MR_hl_field(3, Const_3, 1)));
            MR_String Var_45;

            Var_45 = mercury__string__int64_to_string_1_f_0(Int64_13);
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_45);
          }
          break;
        case (MR_Integer) 8:
          {
            uint64_t Uint64_14 = MR_unbox_uint64((MR_hl_field(3, Const_3, 1)));
            MR_String Var_46;

            Var_46 = mercury__string__uint64_to_string_1_f_0(Uint64_14);
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_46);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Integer N_15 = ((MR_Integer) ((MR_hl_field(3, Const_3, 1))));
            MR_Word Type_16 = ((MR_Word) ((MR_hl_field(3, Const_3, 2))));
            MR_Word Var_47;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Word Var_52;
            MR_Word Var_53;
            MR_Word Var_54;
            MR_Word Var_55;

            Var_47 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "enum(");
            Var_50 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(Type_16);
            Var_52 = ml_backend__mlds_dump__comma_cord_0_f_0();
            Var_54 = ml_backend__mlds_dump__intcord_1_f_0(N_15);
            Var_55 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_54, Var_55);
            Var_51 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_52, Var_53);
            Var_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, Var_51);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_47, Var_49);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Integer Char_17 = ((MR_Integer) ((MR_hl_field(3, Const_3, 1))));
            MR_Word Var_57;
            MR_Word Var_59;
            MR_String Var_99;

            Var_57 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "char ")));
            Var_99 = mercury__string__int_to_string_1_f_0(Char_17);
            Var_59 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_99)));
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_57, Var_59);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Float Float_18 = MR_unbox_float((MR_hl_field(3, Const_3, 1)));
            MR_String Var_60;

            Var_60 = mercury__string__float_to_string_1_f_0(Float_18);
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Var_60);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_String Str_19 = ((MR_String) ((MR_hl_field(3, Const_3, 1))));
            MR_Word Var_61;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_65;

            Var_61 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "\"");
            Var_64 = ml_backend__mlds_dump__strcord_1_f_0(Str_19);
            Var_65 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "\"");
            Var_63 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_64, Var_65);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_61, Var_63);
          }
          break;
        case (MR_Integer) 13:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "multi_string");
          break;
        case (MR_Integer) 14:
          {
            MR_Word Var_68;
            MR_Word Var_70;
            MR_String Str_84 = ((MR_String) ((MR_hl_field(3, Const_3, 2))));

            Var_68 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "foreign ");
            Var_70 = ml_backend__mlds_dump__strcord_1_f_0(Str_84);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_68, Var_70);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Var_71;
            MR_Word Var_73;
            MR_String Str_85 = ((MR_String) ((MR_hl_field(3, Const_3, 2))));

            Var_71 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "named_const ");
            Var_73 = ml_backend__mlds_dump__strcord_1_f_0(Str_85);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_71, Var_73);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word LocalVar_30 = ((MR_Word) ((MR_hl_field(3, Const_3, 1))));
            MR_Word Var_76;
            MR_Word Var_78;
            MR_String Var_79;

            Var_76 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "&");
            Var_79 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVar_30);
            Var_78 = ml_backend__mlds_dump__strcord_1_f_0(Var_79);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_76, Var_78);
          }
          break;
        case (MR_Integer) 17:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "&global_var")));
          break;
        case (MR_Integer) 18:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "&rtti");
          break;
        case (MR_Integer) 19:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "&tabling");
          break;
        case (MR_Integer) 20:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "null");
          break;
      }
      break;
  }
  return Cord_4;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__comma_cord_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_func_label_to_strcord_1_f_0(
  MR_Word FuncLabel_3)
{
  MR_Word Cord_4;
  MR_Word ProcLabel_5 = ((MR_Word) ((MR_hl_field(0, FuncLabel_3, 0))));
  MR_Word MaybeAuxFuncId_6 = ((MR_Word) ((MR_hl_field(0, FuncLabel_3, 1))));
  MR_Word PredLabel_7 = ((MR_Word) ((MR_hl_field(0, ProcLabel_5, 0))));
  MR_Integer ProcId_8 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_5, 1))));
  MR_Word PredCord_15;
  MR_Word ProcCord_18;
  MR_Word AuxCord_19;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Integer Var_42;
  MR_Word Var_50;
  MR_String Var_71;

  if (((MR_tag((MR_Word) PredLabel_7)) == (MR_Integer) 1))
  {
    MR_String TypeName_16 = ((MR_String) ((MR_hl_field(1, PredLabel_7, 2))));
    MR_Integer TypeArity_17 = ((MR_Integer) ((MR_hl_field(1, PredLabel_7, 3))));
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_String PredName_53 = ((MR_String) ((MR_hl_field(1, PredLabel_7, 0))));
    MR_String Var_62;

    Var_29 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (PredName_53)));
    Var_31 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "_for_")));
    Var_34 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (TypeName_16)));
    Var_36 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "/")));
    Var_62 = mercury__string__int_to_string_1_f_0(TypeArity_17);
    Var_38 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_62)));
    Var_35 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_36, Var_38);
    Var_33 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_34, Var_35);
    Var_30 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_31, Var_33);
    PredCord_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_29, Var_30);
  }
  else
  {
    MR_Word PorF_9 = ((MR_Unsigned) ((MR_hl_field(0, PredLabel_7, 0))) & (MR_Integer) 1);
    MR_String PredName_11 = ((MR_String) ((MR_hl_field(0, PredLabel_7, 2))));
    MR_Word PredFormArity_12 = ((MR_Word) ((MR_hl_field(0, PredLabel_7, 3))));
    MR_Integer PredFormArityInt_13 = (MR_Integer) (PredFormArity_12);
    MR_Word PorFCord_14;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_String Var_68;

    switch (PorF_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        PorFCord_14 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "func_")));
        break;
      case (MR_Integer) 0:
        PorFCord_14 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "pred_")));
        break;
    }
    Var_24 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (PredName_11)));
    Var_26 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "/")));
    Var_68 = mercury__string__int_to_string_1_f_0(PredFormArityInt_13);
    Var_28 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_68)));
    Var_25 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_26, Var_28);
    Var_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_24, Var_25);
    PredCord_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PorFCord_14, Var_23);
  }
  Var_39 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "-")));
  Var_42 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_8);
  Var_71 = mercury__string__int_to_string_1_f_0(Var_42);
  Var_41 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_71)));
  ProcCord_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_39, Var_41);
  switch (MR_tag((MR_Word) MaybeAuxFuncId_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MaybeAuxFuncId_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          AuxCord_19 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          break;
        case (MR_Integer) 1:
          AuxCord_19 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\044gc")));
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Unsigned SeqNum_20 = ((MR_Unsigned) ((MR_hl_field(1, MaybeAuxFuncId_6, 0))));
        MR_Word Var_43;
        MR_Word Var_45;
        MR_String Var_78;

        Var_43 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\044aux_")));
        Var_78 = mercury__string__uint_to_string_1_f_0(SeqNum_20);
        Var_45 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_78)));
        AuxCord_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_43, Var_45);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_47;
        MR_Word Var_49;
        MR_Unsigned SeqNum_54 = ((MR_Unsigned) ((MR_hl_field(2, MaybeAuxFuncId_6, 0))));
        MR_String Var_74;

        Var_47 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\044gc_aux_")));
        Var_74 = mercury__string__uint_to_string_1_f_0(SeqNum_54);
        Var_49 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_74)));
        AuxCord_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_47, Var_49);
      }
      break;
  }
  Var_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ProcCord_18, AuxCord_19);
  Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PredCord_15, Var_50);
  return Cord_4;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_types_to_strcord_2_f_0(
  MR_Word HeadType_4,
  MR_Word TailTypes_5)
{
  MR_Word Cord_6;

  if ((TailTypes_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Cord_6 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(HeadType_4);
  else
  {
    MR_Word HeadTailType_7 = ((MR_Word) ((MR_hl_field(1, TailTypes_5, 0))));
    MR_Word TailTailTypes_8 = ((MR_Word) ((MR_hl_field(1, TailTypes_5, 1))));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;

    Var_9 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(HeadType_4);
    Var_11 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
    Var_12 = ml_backend__mlds_dump__mlds_types_to_strcord_2_f_0(HeadTailType_7, TailTailTypes_8);
    Var_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, Var_12);
    Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, Var_10);
  }
  return Cord_6;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_arguments_to_strcord_2_f_0(
  MR_Word HeadArg_4,
  MR_Word TailArgs_5)
{
  MR_Word Cord_6;

  if ((TailArgs_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word LocalVarName_14 = ((MR_Word) ((MR_hl_field(0, HeadArg_4, 0))));
    MR_Word Type_15 = ((MR_Word) ((MR_hl_field(0, HeadArg_4, 1))));
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_21;
    MR_String Var_22;

    Var_17 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(Type_15);
    Var_19 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) " ");
    Var_22 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_14);
    Var_21 = ml_backend__mlds_dump__strcord_1_f_0(Var_22);
    Var_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, Var_21);
    Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17, Var_18);
  }
  else
  {
    MR_Word HeadTailArg_7 = ((MR_Word) ((MR_hl_field(1, TailArgs_5, 0))));
    MR_Word TailTailArgs_8 = ((MR_Word) ((MR_hl_field(1, TailArgs_5, 1))));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word LocalVarName_24 = ((MR_Word) ((MR_hl_field(0, HeadArg_4, 0))));
    MR_Word Type_25 = ((MR_Word) ((MR_hl_field(0, HeadArg_4, 1))));
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_String Var_32;

    Var_27 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(Type_25);
    Var_29 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) " ");
    Var_32 = ml_backend__mlds__ml_local_var_name_to_string_1_f_0(LocalVarName_24);
    Var_31 = ml_backend__mlds_dump__strcord_1_f_0(Var_32);
    Var_28 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_29, Var_31);
    Var_9 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_27, Var_28);
    Var_11 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
    Var_12 = ml_backend__mlds_dump__mlds_arguments_to_strcord_2_f_0(HeadTailArg_7, TailTailArgs_8);
    Var_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, Var_12);
    Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, Var_10);
  }
  return Cord_6;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_func_params_to_strcord_1_f_0(
  MR_Word Params_3)
{
  MR_Word Cord_4;
  MR_Word Args_5 = ((MR_Word) ((MR_hl_field(0, Params_3, 0))));
  MR_Word ReturnTypes_6 = ((MR_Word) ((MR_hl_field(0, Params_3, 1))));
  MR_Word ArgsCord_7;
  MR_Word ReturnCord_10;

  if ((Args_5 == (MR_Word) ((MR_Unsigned) 0U)))
    ArgsCord_7 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_Word HeadArg_8 = ((MR_Word) ((MR_hl_field(1, Args_5, 0))));
    MR_Word TailArgs_9 = ((MR_Word) ((MR_hl_field(1, Args_5, 1))));
    MR_Word Var_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;

    Var_13 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "(")));
    Var_16 = ml_backend__mlds_dump__mlds_arguments_to_strcord_2_f_0(HeadArg_8, TailArgs_9);
    Var_17 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")")));
    Var_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_16, Var_17);
    ArgsCord_7 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_13, Var_15);
  }
  if ((ReturnTypes_6 == (MR_Word) ((MR_Unsigned) 0U)))
    ReturnCord_10 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_Word HeadReturnType_11 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_6, 0))));
    MR_Word TailReturnTypes_12 = ((MR_Word) ((MR_hl_field(1, ReturnTypes_6, 1))));
    MR_Word Var_19;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    Var_19 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "->(")));
    Var_22 = ml_backend__mlds_dump__mlds_types_to_strcord_2_f_0(HeadReturnType_11, TailReturnTypes_12);
    Var_23 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ")")));
    Var_21 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_22, Var_23);
    ReturnCord_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, Var_21);
  }
  Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ArgsCord_7, ReturnCord_10);
  return Cord_4;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(
  MR_Word MLDS_Type_3)
{
  MR_Word Cord_4;

  switch (MR_tag((MR_Word) MLDS_Type_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(MLDS_Type_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "commit_type");
          break;
        case (MR_Integer) 1:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "float");
          break;
        case (MR_Integer) 2:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "string");
          break;
        case (MR_Integer) 3:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "char");
          break;
        case (MR_Integer) 4:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "native bool");
          break;
        case (MR_Integer) 5:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "generic");
          break;
        case (MR_Integer) 6:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "generic_env_ptr");
          break;
        case (MR_Integer) 7:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "type_info");
          break;
        case (MR_Integer) 8:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "pseudo_type_info");
          break;
        case (MR_Integer) 9:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "unknown_type");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ClassId_16 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_3), (MR_Integer) 1));
        MR_Word QualClassName_17 = ((MR_Word) ((MR_hl_field(0, ClassId_16, 0))));
        MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(0, ClassId_16, 1))));
        MR_String ClassName_21 = ((MR_String) ((MR_hl_field(0, QualClassName_17, 2))));
        MR_Word Var_84;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;

        Var_84 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "class(");
        Var_87 = ml_backend__mlds_dump__strcord_1_f_0(ClassName_21);
        Var_89 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "/");
        Var_92 = ml_backend__mlds_dump__intcord_1_f_0(Arity_18);
        Var_93 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
        Var_91 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_92, Var_93);
        Var_88 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_89, Var_91);
        Var_86 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_87, Var_88);
        Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_84, Var_86);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word EnumClassId_22 = (MR_Word) (MR_body((MR_Word) (MLDS_Type_3), (MR_Integer) 2));
        MR_String EnumClassName_23 = ((MR_String) ((MR_hl_field(0, EnumClassId_22, 1))));
        MR_Word Var_95;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Integer Arity_147 = ((MR_Integer) ((MR_hl_field(0, EnumClassId_22, 2))));

        Var_95 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "enum(");
        Var_98 = ml_backend__mlds_dump__strcord_1_f_0(EnumClassName_23);
        Var_100 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "/");
        Var_103 = ml_backend__mlds_dump__intcord_1_f_0(Arity_147);
        Var_104 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
        Var_102 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_103, Var_104);
        Var_99 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_100, Var_102);
        Var_97 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_98, Var_99);
        Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_95, Var_97);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, MLDS_Type_3, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word EnvId_24 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_3, 1))));
            MR_String EnvsName_25 = ((MR_String) ((MR_hl_field(0, EnvId_24, 1))));
            MR_Word Var_106;
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_110;

            Var_106 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "env_struct(");
            Var_109 = ml_backend__mlds_dump__strcord_1_f_0(EnvsName_25);
            Var_110 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_108 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_109, Var_110);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_106, Var_108);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word StructId_26 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_3, 1))));
            MR_String StructName_27 = ((MR_String) ((MR_hl_field(0, StructId_26, 1))));
            MR_Word Var_112;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_116;

            Var_112 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "struct(");
            Var_115 = ml_backend__mlds_dump__strcord_1_f_0(StructName_27);
            Var_116 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_114 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_115, Var_116);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_112, Var_114);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word FuncParams_29 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_3, 1))));
            MR_Word Var_124;
            MR_Word Var_126;
            MR_Word Var_127;
            MR_Word Var_128;

            Var_124 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "func_type(");
            Var_127 = ml_backend__mlds_dump__mlds_func_params_to_strcord_1_f_0(FuncParams_29);
            Var_128 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_126 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_127, Var_128);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_124, Var_126);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word MerType_5 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_3, 1))));

            Cord_4 = ml_backend__mlds_dump__mercury_type_to_strcord_1_f_0(MerType_5);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word MLDS_ElementType_7 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_3, 1))));
            MR_Word Var_32;
            MR_Word Var_34;
            MR_Word Var_35;
            MR_Word Var_36;

            Var_32 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "mercury_array(");
            Var_35 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(MLDS_ElementType_7);
            Var_36 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_34 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_35, Var_36);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_32, Var_34);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MLDS_ReturnTypes_11 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_3, 1))));

            if ((MLDS_ReturnTypes_11 == (MR_Word) ((MR_Unsigned) 0U)))
              Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "cont_type(return: <>)");
            else
            {
              MR_Word Var_52;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_56;
              MR_Word HeadType_138 = ((MR_Word) ((MR_hl_field(1, MLDS_ReturnTypes_11, 0))));
              MR_Word TailTypes_139 = ((MR_Word) ((MR_hl_field(1, MLDS_ReturnTypes_11, 1))));

              Var_52 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "cont_type(return: <");
              Var_55 = ml_backend__mlds_dump__mlds_types_to_strcord_2_f_0(HeadType_138, TailTypes_139);
              Var_56 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ">)");
              Var_54 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_55, Var_56);
              Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_52, Var_54);
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word IntType_12 = ((MR_Unsigned) ((MR_hl_field(3, MLDS_Type_3, 1))) & (MR_Integer) 15);
            MR_String Str_13 = ((&ml_backend__mlds_dump_vector_common_3[10 + IntType_12]))->ml_backend__mlds_dump__vector_common_type_3_0__vct_3_f_0;

            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(Str_13);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word ForeignType_14 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_3, 1))));

            switch (MR_tag((MR_Word) ForeignType_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String TypeName_15;
                  MR_Word Var_63 = ((MR_Word) ((MR_hl_field(0, ForeignType_14, 0))));
                  MR_Word Var_64;
                  MR_Word Var_66;
                  MR_Word Var_67;
                  MR_Word Var_68;

                  TypeName_15 = (MR_String) (Var_63);
                  Var_64 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "c_type(");
                  Var_67 = ml_backend__mlds_dump__strcord_1_f_0(TypeName_15);
                  Var_68 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
                  Var_66 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_67, Var_68);
                  Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_64, Var_66);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_70 = ((MR_Word) ((MR_hl_field(1, ForeignType_14, 0))));
                  MR_Word Var_71;
                  MR_Word Var_73;
                  MR_Word Var_74;
                  MR_Word Var_75;
                  MR_String TypeName_144 = (MR_String) (Var_70);

                  Var_71 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "java_type(");
                  Var_74 = ml_backend__mlds_dump__strcord_1_f_0(TypeName_144);
                  Var_75 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
                  Var_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_74, Var_75);
                  Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_71, Var_73);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_77 = ((MR_Word) ((MR_hl_field(2, ForeignType_14, 0))));
                  MR_Word Var_78;
                  MR_Word Var_80;
                  MR_Word Var_81;
                  MR_Word Var_82;
                  MR_String TypeName_145 = (MR_String) (Var_77);

                  Var_78 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "csharp_type(");
                  Var_81 = ml_backend__mlds_dump__strcord_1_f_0(TypeName_145);
                  Var_82 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
                  Var_80 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_81, Var_82);
                  Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_78, Var_80);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Var_38;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word MLDS_ElementType_137 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_3, 1))));

            Var_38 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "array(");
            Var_41 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(MLDS_ElementType_137);
            Var_42 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_40 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, Var_42);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_38, Var_40);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word MLDS_ElementTypes_8 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_3, 1))));

            if ((MLDS_ElementTypes_8 == (MR_Word) ((MR_Unsigned) 0U)))
              Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "mostly_generic_array()");
            else
            {
              MR_Word HeadType_9 = ((MR_Word) ((MR_hl_field(1, MLDS_ElementTypes_8, 0))));
              MR_Word TailTypes_10 = ((MR_Word) ((MR_hl_field(1, MLDS_ElementTypes_8, 1))));
              MR_Word Var_45;
              MR_Word Var_47;
              MR_Word Var_48;
              MR_Word Var_49;

              Var_45 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "mostly_generic_array(");
              Var_48 = ml_backend__mlds_dump__mlds_types_to_strcord_2_f_0(HeadType_9, TailTypes_10);
              Var_49 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
              Var_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_48, Var_49);
              Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, Var_47);
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word PointedToType_28 = ((MR_Word) ((MR_hl_field(3, MLDS_Type_3, 1))));
            MR_Word Var_118;
            MR_Word Var_120;
            MR_Word Var_121;
            MR_Word Var_122;

            Var_118 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "ptr_to(");
            Var_121 = ml_backend__mlds_dump__mlds_type_to_strcord_1_f_0(PointedToType_28);
            Var_122 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_120 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_121, Var_122);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_118, Var_120);
          }
          break;
        case (MR_Integer) 11:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "rtti_type");
          break;
        case (MR_Integer) 12:
          Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "tabling_type");
          break;
      }
      break;
  }
  return Cord_4;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mercury_types_to_strcord_2_f_0(
  MR_Word HeadType_4,
  MR_Word TailTypes_5)
{
  MR_Word Cord_6;

  if ((TailTypes_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Cord_6 = ml_backend__mlds_dump__mercury_type_to_strcord_1_f_0(HeadType_4);
  else
  {
    MR_Word HeadTailType_7 = ((MR_Word) ((MR_hl_field(1, TailTypes_5, 0))));
    MR_Word TailTailTypes_8 = ((MR_Word) ((MR_hl_field(1, TailTypes_5, 1))));
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;

    Var_9 = ml_backend__mlds_dump__mercury_type_to_strcord_1_f_0(HeadType_4);
    Var_11 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ", ")));
    Var_12 = ml_backend__mlds_dump__mercury_types_to_strcord_2_f_0(HeadTailType_7, TailTailTypes_8);
    Var_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, Var_12);
    Cord_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, Var_10);
  }
  return Cord_6;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mercury_type_to_strcord_1_f_0(
  MR_Word MerType_3)
{
  while (MR_TRUE)
  {
    MR_Word Cord_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) MerType_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeVar_5 = ((MR_Word) ((MR_hl_field(0, MerType_3, 0))));
          MR_Word Var_21;
          MR_Word Var_23;
          MR_Integer Var_24;

          Var_21 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "type_var_");
          Var_24 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVar_5);
          Var_23 = ml_backend__mlds_dump__intcord_1_f_0(Var_24);
          Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, Var_23);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorSymName_7 = ((MR_Word) ((MR_hl_field(1, MerType_3, 0))));
          MR_Word ArgTypes_8 = ((MR_Word) ((MR_hl_field(1, MerType_3, 1))));
          MR_String TypeCtorName_9;

          TypeCtorName_9 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeCtorSymName_7);
          if ((ArgTypes_8 == (MR_Word) ((MR_Unsigned) 0U)))
            Cord_4 = ml_backend__mlds_dump__strcord_1_f_0(TypeCtorName_9);
          else
          {
            MR_Word HeadArgType_10 = ((MR_Word) ((MR_hl_field(1, ArgTypes_8, 0))));
            MR_Word TailArgTypes_11 = ((MR_Word) ((MR_hl_field(1, ArgTypes_8, 1))));
            MR_Word Var_25;
            MR_Word Var_26;
            MR_Word Var_27;
            MR_Word Var_29;
            MR_Word Var_30;
            MR_Word Var_31;

            Var_25 = ml_backend__mlds_dump__strcord_1_f_0(TypeCtorName_9);
            Var_27 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "(");
            Var_30 = ml_backend__mlds_dump__mercury_types_to_strcord_2_f_0(HeadArgType_10, TailArgTypes_11);
            Var_31 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
            Var_29 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, Var_31);
            Var_26 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_27, Var_29);
            Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, Var_26);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_12 = ((MR_Word) ((MR_hl_field(2, MerType_3, 0))));

          switch (MR_tag((MR_Word) BuiltinType_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(BuiltinType_12)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "float");
                  break;
                case (MR_Integer) 1:
                  Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "string");
                  break;
                case (MR_Integer) 2:
                  Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "char");
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word IntType_13 = ((MR_Unsigned) ((MR_hl_field(1, BuiltinType_12, 0))) & (MR_Integer) 15);

                Cord_4 = ml_backend__mlds_dump__int_type_to_strcord_1_f_0(IntType_13);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, MerType_3, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgTypes_78 = ((MR_Word) ((MR_hl_field(3, MerType_3, 1))));

              if ((ArgTypes_78 == (MR_Word) ((MR_Unsigned) 0U)))
                Cord_4 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "{}");
              else
              {
                MR_Word Var_37;
                MR_Word Var_39;
                MR_Word Var_40;
                MR_Word Var_41;
                MR_Word HeadArgType_73 = ((MR_Word) ((MR_hl_field(1, ArgTypes_78, 0))));
                MR_Word TailArgTypes_74 = ((MR_Word) ((MR_hl_field(1, ArgTypes_78, 1))));

                Var_37 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "{");
                Var_40 = ml_backend__mlds_dump__mercury_types_to_strcord_2_f_0(HeadArgType_73, TailArgTypes_74);
                Var_41 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "}");
                Var_39 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_40, Var_41);
                Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_37, Var_39);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_14 = ((MR_Unsigned) ((MR_hl_field(3, MerType_3, 1))) & (MR_Integer) 1);
              MR_Word Purity_16 = ((MR_Unsigned) ((MR_hl_field(3, MerType_3, 4))) & (MR_Integer) 3);
              MR_Word PurityCord_17;
              MR_Word PorFCord_18;
              MR_Word ArgCord_19;
              MR_Word Var_53;
              MR_Word ArgTypes_85 = ((MR_Word) ((MR_hl_field(3, MerType_3, 2))));

              switch (Purity_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  PurityCord_17 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "impure_");
                  break;
                case (MR_Integer) 0:
                  PurityCord_17 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
                  break;
                case (MR_Integer) 1:
                  PurityCord_17 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "semipure_");
                  break;
              }
              switch (PorF_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  PorFCord_18 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "func");
                  break;
                case (MR_Integer) 0:
                  PorFCord_18 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "pred");
                  break;
              }
              if ((ArgTypes_85 == (MR_Word) ((MR_Unsigned) 0U)))
                ArgCord_19 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
              else
              {
                MR_Word Var_47;
                MR_Word Var_49;
                MR_Word Var_50;
                MR_Word Var_51;
                MR_Word HeadArgType_81 = ((MR_Word) ((MR_hl_field(1, ArgTypes_85, 0))));
                MR_Word TailArgTypes_82 = ((MR_Word) ((MR_hl_field(1, ArgTypes_85, 1))));

                Var_47 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) "(");
                Var_50 = ml_backend__mlds_dump__mercury_types_to_strcord_2_f_0(HeadArgType_81, TailArgTypes_82);
                Var_51 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
                Var_49 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_50, Var_51);
                ArgCord_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_47, Var_49);
              }
              Var_53 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PorFCord_18, ArgCord_19);
              Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PurityCord_17, Var_53);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeVar_93 = ((MR_Word) ((MR_hl_field(3, MerType_3, 1))));
              MR_Word ArgTypes_95 = ((MR_Word) ((MR_hl_field(3, MerType_3, 2))));

              if ((ArgTypes_95 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_54;
                MR_Word Var_56;
                MR_Integer Var_57;
                MR_String Var_112;

                Var_54 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "apply_tvar_")));
                Var_57 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVar_93);
                Var_112 = mercury__string__int_to_string_1_f_0(Var_57);
                Var_56 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_112)));
                Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_54, Var_56);
              }
              else
              {
                MR_Word Var_58;
                MR_Word Var_60;
                MR_Word Var_61;
                MR_Integer Var_62;
                MR_Word Var_63;
                MR_Word Var_64;
                MR_Word Var_66;
                MR_Word Var_67;
                MR_Word Var_68;
                MR_Word HeadArgType_89 = ((MR_Word) ((MR_hl_field(1, ArgTypes_95, 0))));
                MR_Word TailArgTypes_90 = ((MR_Word) ((MR_hl_field(1, ArgTypes_95, 1))));

                Var_58 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "apply_tvar_")));
                Var_62 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TypeVar_93);
                Var_61 = ml_backend__mlds_dump__intcord_1_f_0(Var_62);
                Var_64 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "(")));
                Var_67 = ml_backend__mlds_dump__mercury_types_to_strcord_2_f_0(HeadArgType_89, TailArgTypes_90);
                Var_68 = ml_backend__mlds_dump__strcord_1_f_0((MR_String) ")");
                Var_66 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_67, Var_68);
                Var_63 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_64, Var_66);
                Var_60 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_61, Var_63);
                Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_58, Var_60);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType_20 = ((MR_Word) ((MR_hl_field(3, MerType_3, 1))));
              MR_Word next_value_of_MerType_3 = SubType_20;

              // direct tailcall eliminated
              ;
              MerType_3 = next_value_of_MerType_3;
              continue;
            }
            break;
        }
        break;
    }
    return Cord_4;
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__intcord_1_f_0(
  MR_Integer N_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

  Var_4 = mercury__string__int_to_string_1_f_0(N_3);
  HeadVar__2_2 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_4)));
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__int_type_to_strcord_1_f_0(
  MR_Word IntType_3)
{
  MR_Word HeadVar__2_2;
  MR_String Str_4 = ((&ml_backend__mlds_dump_vector_common_3[0 + IntType_3]))->ml_backend__mlds_dump__vector_common_type_3_0__vct_3_f_0;

  HeadVar__2_2 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Str_4)));
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__strcord_1_f_0(
  MR_String Str_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Str_3)));
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__ptag_to_strcord_1_f_0(
  MR_Word Ptag_3)
{
  MR_Word Cord_4;
  uint8_t PtagUint8_5 = (uint8_t) (Ptag_3);
  MR_Integer Var_6;
  MR_String Var_7;

  Var_6 = mercury__uint8__cast_to_int_1_f_0(PtagUint8_5);
  Var_7 = mercury__string__int_to_string_1_f_0(Var_6);
  Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_7)));
  return Cord_4;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_computed_goto_labels_to_strcord_3_f_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word HeadVar__4_4;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__4_4 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  else
  {
    MR_String LabelName_9;
    MR_Word Labels_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Integer Var_23;
    MR_String Var_27;

    LabelName_9 = (MR_String) (Var_11);
    Var_12 = ml_backend__mlds_dump__indent_strcord_1_f_0(HeadVar__1_1);
    Var_27 = mercury__string__int_to_string_1_f_0(HeadVar__2_2);
    Var_14 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_27)));
    Var_16 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ": ")));
    Var_19 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (LabelName_9)));
    Var_21 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
    Var_23 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
    Var_22 = ml_backend__mlds_dump__mlds_computed_goto_labels_to_strcord_3_f_0(HeadVar__1_1, Var_23, Labels_10);
    Var_20 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, Var_22);
    Var_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, Var_20);
    Var_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_16, Var_18);
    Var_13 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, Var_15);
    HeadVar__4_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_12, Var_13);
  }
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__mlds_goto_target_to_strcord_1_f_0(
  MR_Word Target_3)
{
  MR_Word Cord_4;

  switch (MR_tag((MR_Word) Target_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Target_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "break_switch")));
          break;
        case (MR_Integer) 1:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "break_loop")));
          break;
        case (MR_Integer) 2:
          Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "continue_loop")));
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String LabelName_5;
        MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, Target_3, 0))));

        LabelName_5 = (MR_String) (Var_6);
        Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (LabelName_5)));
      }
      break;
  }
  return Cord_4;
}

static MR_Word MR_CALL 
ml_backend__mlds_dump__indent_strcord_1_f_0(
  MR_Integer Indent_3)
{
  MR_bool succeeded;
  MR_Word Cord_4;
  MR_Word CordPrime_5;

  switch (Indent_3) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      {
        CordPrime_5 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
      {
        CordPrime_5 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "  ")));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        CordPrime_5 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "    ")));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      {
        CordPrime_5 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "      ")));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 4:
      {
        CordPrime_5 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "        ")));
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 5:
      {
        CordPrime_5 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "          ")));
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
    Cord_4 = CordPrime_5;
  else
  {
    succeeded = (Indent_3 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Integer Half_6;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Integer Var_16;

      Half_6 = mercury__int__f_slash_2_f_0(Indent_3, (MR_Integer) 2);
      Var_14 = ml_backend__mlds_dump__indent_strcord_1_f_0(Half_6);
      Var_16 = (MR_Integer) ((MR_Unsigned) Indent_3 - (MR_Unsigned) Half_6);
      Var_15 = ml_backend__mlds_dump__indent_strcord_1_f_0(Var_16);
      Cord_4 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_14, Var_15);
    }
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.mlds_dump.indent_strcord\'/1", (MR_String) "negative Indent");
  }
  return Cord_4;
}

static MR_bool MR_CALL 
ml_backend__mlds_dump____Unify____strcord_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__mlds_dump____Unify____strcord_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__mlds_dump____Compare____strcord_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__mlds_dump____Compare____strcord_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__mlds_dump__init(void)
{
}

void mercury__ml_backend__mlds_dump__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ml_backend__mlds_dump__ml_backend__mlds_dump__type_ctor_info_strcord_0);
}

void mercury__ml_backend__mlds_dump__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_dump__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_dump.
