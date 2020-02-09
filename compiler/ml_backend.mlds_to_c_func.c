/*
** Automatically generated from `mlds_to_c_func.m'
** by the Mercury compiler,
** version 20.01.1-beta-2020-02-09
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


// :- module ml_backend.mlds_to_c_func.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_c_func__init
ENDINIT
*/

#include "ml_backend.mlds_to_c_func.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_name.mih"
#include "ml_backend.mlds_to_c_stmt.mih"
#include "ml_backend.mlds_to_c_type.mih"
#include "ml_backend.mlds_to_c_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0_s {
  MR_Word * ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__SubType_4;
  MR_Cont ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont;
  void * ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont_env_ptr;
  MR_Word ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__Type_5;
  MR_Box ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__conv0_Type_5;
  MR_Word ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__Var_17;
  MR_Box ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__conv1_Var_17;
  MR_Box ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__conv2_SubType_4;
};

struct ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0_s {
  MR_Box * ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0__wrapper_arg_1;
  MR_Cont ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0__cont;
  void * ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0__cont_env_ptr;
  MR_Word ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0__conv0_SubType_4;
};


static const MR_VA_PseudoTypeInfo_Struct4 ml_backend__mlds_to_c_func____vpti_pred_4__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_func__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0;

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_param_8_p_0(
  MR_Word Opts_9,
  MR_Word OutputPrefix_10,
  MR_Word OutputSuffix_11,
  MR_Integer Indent_12,
  MR_Word Context_13,
  MR_Word Arg_14);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_prefix_suffix_6_p_0(
  MR_Word Opts_7,
  MR_Word OutputPrefix_8,
  MR_Word OutputSuffix_9,
  MR_Word Value_10);

static void MR_CALL 
ml_backend__mlds_to_c_func__standardize_param_names_4_p_0(
  MR_Word STATE_VARIABLE_Argument_0_11,
  MR_Word * STATE_VARIABLE_Argument_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_13,
  MR_Integer * STATE_VARIABLE_ArgNum_14);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_type_forward_decl_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word Type_8);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0(
  MR_Word Types_3,
  MR_Word * SubType_4,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_8_p_0(
  MR_Word Opts_9,
  MR_Integer Indent_10,
  MR_Word QualFuncName_11,
  MR_Word Context_12,
  MR_Word Params_13,
  MR_Word FunctionBody_14);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params_8_p_0(
  MR_Word Opts_9,
  MR_Word OutputPrefix_10,
  MR_Word OutputSuffix_11,
  MR_Integer Indent_12,
  MR_Word Context_13,
  MR_Word Parameters_14);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_flags_5_p_0(
  MR_Word Opts_6,
  MR_Word Flags_7,
  MR_Word MaybeBody_8);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_pred_proc_id_4_p_0(
  MR_Word Opts_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word QualifiedName_10,
  MR_Word Context_11,
  MR_Word Signature_12);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0(
  MR_Word Opts_11,
  MR_Integer Indent_12,
  MR_Word QualFuncName_13,
  MR_Word Context_14,
  MR_String CallingConvention_15,
  MR_Word Signature_16);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_8_p_0(
  MR_Word Opts_9,
  MR_Integer Indent_12,
  MR_Word Context_13,
  MR_Word Parameters_14);


static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_1[2][7];

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_2[6][3];

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_3[1][11];

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_4[1][9];

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_5[1][5];

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_6[1][8];




static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_1[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_1[0])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_params__ho2_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_1[0])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_params__ho2_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_1[0])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_1[0])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_1[1])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_1[1])),
    ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_3[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_func____vpti_pred_4__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_func____vpti_pred_4__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_4[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_func____vpti_pred_4__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&ml_backend__mlds_to_c_func____vpti_pred_4__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds_to_c_func__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_c_func_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_VA_PseudoTypeInfo_Struct4 ml_backend__mlds_to_c_func____vpti_pred_4__plain_ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0__plain_ml_backend__mlds__type_ctor_info_mlds_type_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds_to_c_util__ml_backend__mlds_to_c_util__type_ctor_info_mlds_to_c_opts_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_c_func__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)
  }
};

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_param_8_p_0(
  MR_Word Opts_9,
  MR_Word OutputPrefix_10,
  MR_Word OutputSuffix_11,
  MR_Integer Indent_12,
  MR_Word Context_13,
  MR_Word Arg_14)
{
  {
    MR_Word LocalVarName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_14, (MR_Integer) 0))));
    MR_Word Type_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_14, (MR_Integer) 1))));
    MR_Word GCStmt_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_14, (MR_Integer) 2))));
    MR_Word Var_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_STATE_VARIABLE_IO_24_24;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_IO_28_28;

    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_21, Context_13);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_12);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputPrefix_10, (MR_Integer) 1))));
    func_0(((MR_Box) (OutputPrefix_10)), ((MR_Box) (Opts_9)), ((MR_Box) (Type_17)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_24_24);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    ml_backend__mlds_to_c_name__mlds_output_local_var_name_3_p_0(LocalVarName_16);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputSuffix_11, (MR_Integer) 1))));
    func_2(((MR_Box) (OutputSuffix_11)), ((MR_Box) (Opts_9)), ((MR_Box) (Type_17)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_28_28);
    ml_backend__mlds_to_c_stmt__mlds_output_gc_statement_6_p_0(Opts_9, Indent_12, GCStmt_18, (MR_String) "\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_prefix_suffix_6_p_0(
  MR_Word Opts_7,
  MR_Word OutputPrefix_8,
  MR_Word OutputSuffix_9,
  MR_Word Value_10)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputPrefix_8, (MR_Integer) 1))));
    MR_Box conv1_STATE_VARIABLE_IO_14_14;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_STATE_VARIABLE_IO_13;

    func_0(((MR_Box) (OutputPrefix_8)), ((MR_Box) (Opts_7)), ((MR_Box) (Value_10)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_14_14);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputSuffix_9, (MR_Integer) 1))));
    func_2(((MR_Box) (OutputSuffix_9)), ((MR_Box) (Opts_7)), ((MR_Box) (Value_10)), ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_13);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__standardize_param_names_4_p_0(
  MR_Word STATE_VARIABLE_Argument_0_11,
  MR_Word * STATE_VARIABLE_Argument_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_13,
  MR_Integer * STATE_VARIABLE_ArgNum_14)
{
  {
    MR_Word VarName_7;
    MR_Word Type_9;
    MR_Word GCStmt_10;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (STATE_VARIABLE_ArgNum_0_13));
    }
    {
      VarName_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), VarName_7, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(MR_mktag(3), VarName_7, 1) = ((MR_Box) (Var_15));
    }
    Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Argument_0_11, (MR_Integer) 1))));
    GCStmt_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Argument_0_11, (MR_Integer) 2))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Argument_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (VarName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (GCStmt_10));
    }
    *STATE_VARIABLE_ArgNum_14 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_13 + (MR_Unsigned) 1);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_type_forward_decl_5_p_0(
  MR_Word Opts_6,
  MR_Integer Indent_7,
  MR_Word Type_8)
{
  {
    MR_bool succeeded;
    MR_Word ClassType_14;

    if (((MR_tag((MR_Word) Type_8)) == (MR_Integer) 1))
    {
      MR_Word ClassId_10 = (MR_Word) (MR_body((MR_Word) (Type_8), (MR_Integer) 1));
      MR_Word Kind_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassId_10, (MR_Integer) 2))) & (MR_Integer) 3);

      succeeded = (Kind_13 != (MR_Integer) 3);
      if (succeeded)
      {
        ClassType_14 = Type_8;
        succeeded = MR_TRUE;
      }
    }
    else
    if (((((MR_tag((MR_Word) Type_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
    {
      MR_Word MercuryType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_8, (MR_Integer) 1))));
      MR_Word TypeCtor_17;
      MR_Word ClassName_18;
      MR_Integer ClassArity_19;
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Type_8, (MR_Integer) 2))));
      MR_Word Var_23;
      MR_Word ClassId_28;

      succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_22, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(MercuryType_15, &TypeCtor_17);
        if (succeeded)
        {
          ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_17, &ClassName_18, &ClassArity_19);
          Var_23 = (MR_Integer) 0;
          {
            ClassId_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClassId_28, 0) = ((MR_Box) (ClassName_18));
            MR_hl_field(MR_mktag(0), ClassId_28, 1) = ((MR_Box) (ClassArity_19));
            MR_hl_field(MR_mktag(0), ClassId_28, 2) = (MR_Box) ((MR_Unsigned) (Var_23));
          }
          ClassType_14 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_28)));
          succeeded = MR_TRUE;
        }
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
      ml_backend__mlds_to_c_type__mlds_output_type_4_p_0(Opts_6, ClassType_14);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__Type_5 = ((MR_Word) ((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__conv0_Type_5));
    ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_4(
  void * env_ptr_arg)
{
  {
    struct ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__Var_17 = ((MR_Word) ((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__conv1_Var_17));
    ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_3(env_ptr);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word _Name_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__Var_17, (MR_Integer) 0))));
      MR_Word _GCStmt_16;

      *((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__SubType_4) = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__Var_17, (MR_Integer) 1))));
      _GCStmt_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__Var_17, (MR_Integer) 2))));
      ((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont)((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_5(
  void * env_ptr_arg)
{
  {
    struct ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0_s *) (env_ptr_arg);

    *((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__SubType_4) = ((MR_Word) ((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__conv2_SubType_4));
    ((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont)((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0_s * env_ptr = (struct ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0_s *) (env_ptr_arg);

    switch (MR_tag((MR_Word) (env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__Type_5)) {
      case (MR_Integer) 2:
        {
          MR_Word Parameters_11 = (MR_Word) (MR_body((MR_Word) ((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__Type_5), (MR_Integer) 2));
          MR_Word Arguments_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Parameters_11, (MR_Integer) 0))));
          MR_Word RetTypes_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Parameters_11, (MR_Integer) 1))));

          mercury__list__member_2_p_1((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), &(env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__conv1_Var_17, Arguments_13, ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_4, env_ptr);
          mercury__list__member_2_p_1((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), &(env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__conv2_SubType_4, RetTypes_14, ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_5, env_ptr);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__Type_5, (MR_Integer) 0))))) {
          case (MR_Integer) 1:
            {
              *((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__SubType_4) = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__Type_5, (MR_Integer) 1))));
              ((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont)((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont_env_ptr);
            }
            break;
          case (MR_Integer) 5:
            {
              *((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__SubType_4) = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__Type_5, (MR_Integer) 1))));
              ((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont)((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont_env_ptr);
            }
            break;
          case (MR_Integer) 7:
            {
              *((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__SubType_4) = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__Type_5, (MR_Integer) 1))));
              ((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont)((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont_env_ptr);
            }
            break;
        }
        break;
    }
    {
      *((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__SubType_4) = (env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__Type_5;
      ((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont)((env_ptr)->ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0(
  MR_Word Types_3,
  MR_Word * SubType_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0_s env;

    (env).ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__SubType_4 = SubType_4;
    (env).ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont = cont;
    (env).ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
    mercury__list__member_2_p_1((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), &(env).ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_env_0__conv0_Type_5, Types_3, ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0_2, &env);
  }
}

void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_defns_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FuncDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word FuncDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__4_4;

      ml_backend__mlds_to_c_func__mlds_output_function_defn_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, FuncDefn_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = FuncDefns_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_defn_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word ModuleName_9,
  MR_Word FunctionDefn_10)
{
  {
    MR_bool succeeded;
    MR_Word FuncName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 0))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 1))));
    MR_Word Flags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 2))));
    MR_Word MaybePredProcId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 3))));
    MR_Word Params_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 4))));
    MR_Word MaybeBody_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 5))));
    MR_Word QualFuncName_21;
    MR_Word Var_25;
    MR_Word Access_52;
    MR_Word PerInstance_53;
    MR_Word Comments_54;

    mercury__io__nl_2_p_0();
    Var_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_25, Context_13);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    Access_52 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    PerInstance_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))) & (MR_Integer) 1);
    Comments_54 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
    switch (Comments_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          switch (Access_52) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              mercury__io__write_string_3_p_0((MR_String) "/* private: */ ");
              break;
            case (MR_Integer) 0:
              mercury__io__write_string_3_p_0((MR_String) "/* public: */ ");
              break;
          }
          switch (PerInstance_53) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__io__write_string_3_p_0((MR_String) "/* one_copy */ ");
              break;
            case (MR_Integer) 1:
              {
              }
              break;
          }
        }
        break;
    }
    succeeded = (Access_52 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (MaybeBody_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
      mercury__io__write_string_3_p_0((MR_String) "static ");
    if (!((MaybePredProcId_15 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PredProcId_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredProcId_15, (MR_Integer) 0))));

      ml_backend__mlds_to_c_func__mlds_output_pred_proc_id_4_p_0(Opts_7, PredProcId_20);
    }
    {
      QualFuncName_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), QualFuncName_21, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), QualFuncName_21, 1) = ((MR_Box) (FuncName_12));
    }
    ml_backend__mlds_to_c_func__mlds_output_func_8_p_0(Opts_7, Indent_8, QualFuncName_21, Context_13, Params_16, MaybeBody_17);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_8_p_0(
  MR_Word Opts_9,
  MR_Integer Indent_10,
  MR_Word QualFuncName_11,
  MR_Word Context_12,
  MR_Word Params_13,
  MR_Word FunctionBody_14)
{
  {
    ml_backend__mlds_to_c_func__mlds_output_func_decl_7_p_0(Opts_9, Indent_10, QualFuncName_11, Context_12, Params_13);
    if ((FunctionBody_14 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) ";\n");
    else
    {
      MR_Word Body_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FunctionBody_14, (MR_Integer) 0))));
      MR_Word ProfileTime_17;
      MR_Word Signature_18;
      MR_Word FuncInfo_19;
      MR_Word Var_25;
      MR_Integer Var_33;
      MR_Word Var_36;

      mercury__io__write_string_3_p_0((MR_String) "\n");
      Var_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_25, Context_12);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
      mercury__io__write_string_3_p_0((MR_String) "{\n");
      ProfileTime_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
      switch (ProfileTime_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);

            ml_backend__mlds_to_c_stmt__mlds_output_time_profile_instr_6_p_0(Opts_9, Context_12, Var_30, QualFuncName_11);
          }
          break;
      }
      Signature_18 = ml_backend__mlds__mlds_get_func_signature_1_f_0(Params_13);
      {
        FuncInfo_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FuncInfo_19, 0) = ((MR_Box) (QualFuncName_11));
        MR_hl_field(MR_mktag(0), FuncInfo_19, 1) = ((MR_Box) (Signature_18));
      }
      Var_33 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
      ml_backend__mlds_to_c_stmt__mlds_output_statement_6_p_0(Opts_9, Var_33, FuncInfo_19, Body_16);
      Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_9, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
      ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_36, Context_12);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Argument_12;
    MR_Integer conv2_STATE_VARIABLE_ArgNum_14;

    ml_backend__mlds_to_c_func__standardize_param_names_4_p_0(((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Argument_12, ((MR_Integer) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ArgNum_14);
    *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Argument_12));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ArgNum_14));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_func__mlds_output_prefix_suffix_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0(
  MR_Word Opts_11,
  MR_Integer Indent_12,
  MR_Word QualFuncName_13,
  MR_Word Context_14,
  MR_String CallingConvention_15,
  MR_Word Signature_16,
  MR_Word OutputPrefix_17,
  MR_Word OutputSuffix_18)
{
  {
    MR_Word Parameters0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_16, (MR_Integer) 0))));
    MR_Word RetTypes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_16, (MR_Integer) 1))));
    MR_Word StdDecl_26;
    MR_Word Parameters_27;

    if ((RetTypes_21 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) "void");
    else
    {
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_21, (MR_Integer) 1))));
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_21, (MR_Integer) 0))));

      if ((Var_78 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputPrefix_17, (MR_Integer) 1))));
        MR_Box conv1_STATE_VARIABLE_IO_41_41;

        func_0(((MR_Box) (OutputPrefix_17)), ((MR_Box) (Opts_11)), ((MR_Box) (Var_79)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_41_41);
      }
      else
      {
        MR_Word Var_36;

        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_decl_ho_10_p_0_1));
          MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Opts_11));
          MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (OutputPrefix_17));
          MR_hl_field(MR_mktag(0), Var_36, 5) = ((MR_Box) (OutputSuffix_18));
        }
        ml_backend__mlds_to_c_type__mlds_output_return_list_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), RetTypes_21, Var_36);
      }
    }
    mercury__io__write_char_3_p_0((MR_Char) 32);
    mercury__io__write_string_3_p_0(CallingConvention_15);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_3_p_0(QualFuncName_13);
    StdDecl_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_11, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    switch (StdDecl_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Parameters_27 = Parameters0_20;
        break;
      case (MR_Integer) 1:
        {
          MR_Box conv4_Var_28;

          mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds_to_c_func_scalar_common_2[5]), Parameters0_20, &Parameters_27, ((MR_Box) ((MR_Integer) 1)), &conv4_Var_28);
        }
        break;
    }
    ml_backend__mlds_to_c_func__mlds_output_params_8_p_0(Opts_11, OutputPrefix_17, OutputSuffix_18, Indent_12, Context_14, Parameters_27);
    if (!((RetTypes_21 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_21, (MR_Integer) 1))));
      MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_21, (MR_Integer) 0))));

      if ((Var_80 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), OutputSuffix_18, (MR_Integer) 1))));
        MR_Box conv6_STATE_VARIABLE_IO_34;

        func_5(((MR_Box) (OutputSuffix_18)), ((MR_Box) (Opts_11)), ((MR_Box) (Var_81)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_34);
      }
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_func__mlds_output_param_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params_8_p_0(
  MR_Word Opts_9,
  MR_Word OutputPrefix_10,
  MR_Word OutputSuffix_11,
  MR_Integer Indent_12,
  MR_Word Context_13,
  MR_Word Parameters_14)
{
  {
    mercury__io__write_char_3_p_0((MR_Char) 40);
    if ((Parameters_14 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) "void");
    else
    {
      MR_Word Var_24;
      MR_Integer Var_26;

      mercury__io__nl_2_p_0();
      Var_26 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_params_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Opts_9));
        MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (OutputPrefix_10));
        MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (OutputSuffix_11));
        MR_hl_field(MR_mktag(0), Var_24, 6) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), Var_24, 7) = ((MR_Box) (Context_13));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Parameters_14, (MR_String) ",\n", Var_24);
    }
    mercury__io__write_char_3_p_0((MR_Char) 41);
  }
}

void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decls_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word FuncDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word FuncDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__4_4;

      mercury__io__nl_2_p_0();
      ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, FuncDefn_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = FuncDefns_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_func__mlds_output_type_forward_decl_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0_s * env_ptr = (struct ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0__conv0_SubType_4));
    ((env_ptr)->ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0__cont)((env_ptr)->ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0_s env;

    (env).ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0__cont = cont;
    (env).ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      ml_backend__mlds_to_c_func__mlds_type_list_contains_type_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &(env).ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2_env_0__conv0_SubType_4, ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_1, &env);
    }
  }
}

void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0(
  MR_Word Opts_7,
  MR_Integer Indent_8,
  MR_Word ModuleName_9,
  MR_Word FunctionDefn_10)
{
  {
    MR_Word FuncName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 0))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 1))));
    MR_Word Flags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 2))));
    MR_Word MaybePredProcId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 3))));
    MR_Word Params_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 4))));
    MR_Word MaybeBody_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FunctionDefn_10, (MR_Integer) 5))));
    MR_Word HighLevelData_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
    MR_Word QualFuncName_24;
    MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_7, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);

    switch (HighLevelData_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Arguments_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 0))));
          MR_Word ParamTypes_23;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Box conv1_STATE_VARIABLE_IO_28_28;

          ParamTypes_23 = ml_backend__mlds__mlds_get_arg_types_1_f_0(Arguments_21);
          {
            Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (ParamTypes_23));
          }
          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_function_decl_opts_6_p_0_3));
            MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (Opts_7));
            MR_hl_field(MR_mktag(0), Var_74, 4) = ((MR_Box) (Indent_8));
          }
          mercury__solutions__aggregate_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_73, Var_74, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_28_28);
        }
        break;
    }
    ml_backend__mlds_to_c_util__c_output_context_4_p_0(Var_39, Context_13);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    ml_backend__mlds_to_c_func__mlds_output_function_decl_flags_5_p_0(Opts_7, Flags_14, MaybeBody_17);
    {
      QualFuncName_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), QualFuncName_24, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), QualFuncName_24, 1) = ((MR_Box) (FuncName_12));
    }
    if (!((MaybePredProcId_15 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word PredProcId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredProcId_15, (MR_Integer) 0))));

      ml_backend__mlds_to_c_func__mlds_output_pred_proc_id_4_p_0(Opts_7, PredProcId_25);
    }
    ml_backend__mlds_to_c_func__mlds_output_func_decl_7_p_0(Opts_7, Indent_8, QualFuncName_24, Context_13, Params_16);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_function_decl_flags_5_p_0(
  MR_Word Opts_6,
  MR_Word Flags_7,
  MR_Word MaybeBody_8)
{
  {
    MR_bool succeeded;
    MR_Word Access_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word PerInstance_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_7, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Comments_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_6, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);

    switch (Comments_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          switch (Access_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              mercury__io__write_string_3_p_0((MR_String) "/* private: */ ");
              break;
            case (MR_Integer) 0:
              mercury__io__write_string_3_p_0((MR_String) "/* public: */ ");
              break;
          }
          switch (PerInstance_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__io__write_string_3_p_0((MR_String) "/* one_copy */ ");
              break;
            case (MR_Integer) 1:
              {
              }
              break;
          }
        }
        break;
    }
    succeeded = (Access_10 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (MaybeBody_8 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
      mercury__io__write_string_3_p_0((MR_String) "static ");
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_pred_proc_id_4_p_0(
  MR_Word Opts_5,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ProcId_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Comments_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_5, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);

    switch (Comments_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer PredIdNum_10;
          MR_Integer ProcIdNum_11;

          mercury__io__write_string_3_p_0((MR_String) "// pred_id: ");
          hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_6, &PredIdNum_10);
          mercury__io__write_int_3_p_0(PredIdNum_10);
          mercury__io__write_string_3_p_0((MR_String) ", proc_id: ");
          hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_7, &ProcIdNum_11);
          mercury__io__write_int_3_p_0(ProcIdNum_11);
          mercury__io__nl_2_p_0();
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_7_p_0(
  MR_Word Opts_8,
  MR_Integer Indent_9,
  MR_Word QualifiedName_10,
  MR_Word Context_11,
  MR_Word Signature_12)
{
  ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0(Opts_8, Indent_9, QualifiedName_10, Context_11, (MR_String) "MR_CALL ", Signature_12);
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Argument_12;
    MR_Integer conv0_STATE_VARIABLE_ArgNum_14;

    ml_backend__mlds_to_c_func__standardize_param_names_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Argument_12, ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ArgNum_14);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Argument_12));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ArgNum_14));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_func__mlds_output_prefix_suffix_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_type__mlds_output_type_suffix_no_size_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0(
  MR_Word Opts_11,
  MR_Integer Indent_12,
  MR_Word QualFuncName_13,
  MR_Word Context_14,
  MR_String CallingConvention_15,
  MR_Word Signature_16)
{
  {
    MR_Word Parameters0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_16, (MR_Integer) 0))));
    MR_Word RetTypes_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature_16, (MR_Integer) 1))));
    MR_Word StdDecl_26;
    MR_Word Parameters_27;

    if ((RetTypes_21 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) "void");
    else
    {
      MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_21, (MR_Integer) 1))));
      MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_21, (MR_Integer) 0))));

      if ((Var_78 == (MR_Word) ((MR_Unsigned) 0U)))
        ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(Opts_11, Var_79);
      else
      {
        MR_Word Var_36;

        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_func_decl_ho__ho1_10_p_0_3));
          MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Opts_11));
          MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_2[2]));
          MR_hl_field(MR_mktag(0), Var_36, 5) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_2[3]));
        }
        ml_backend__mlds_to_c_type__mlds_output_return_list_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), RetTypes_21, Var_36);
      }
    }
    mercury__io__write_char_3_p_0((MR_Char) 32);
    mercury__io__write_string_3_p_0(CallingConvention_15);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_c_name__mlds_output_fully_qualified_function_name_3_p_0(QualFuncName_13);
    StdDecl_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Opts_11, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    switch (StdDecl_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Parameters_27 = Parameters0_20;
        break;
      case (MR_Integer) 1:
        {
          MR_Box conv2_Var_28;

          mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds_to_c_func_scalar_common_2[4]), Parameters0_20, &Parameters_27, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_28);
        }
        break;
    }
    ml_backend__mlds_to_c_func__mlds_output_params__ho2_8_p_0(Opts_11, Indent_12, Context_14, Parameters_27);
    if (!((RetTypes_21 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_21, (MR_Integer) 1))));
      MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RetTypes_21, (MR_Integer) 0))));

      if ((Var_80 == (MR_Word) ((MR_Unsigned) 0U)))
        ml_backend__mlds_to_c_type__mlds_output_type_suffix_no_size_4_p_0(Opts_11, Var_81);
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_func__mlds_output_param_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_type__mlds_output_type_suffix_no_size_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_c_type__mlds_output_type_prefix_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_c_func__mlds_output_params__ho2_8_p_0(
  MR_Word Opts_9,
  MR_Integer Indent_12,
  MR_Word Context_13,
  MR_Word Parameters_14)
{
  {
    mercury__io__write_char_3_p_0((MR_Char) 40);
    if ((Parameters_14 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) "void");
    else
    {
      MR_Word Var_24;
      MR_Integer Var_26;

      mercury__io__nl_2_p_0();
      Var_26 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ml_backend__mlds_to_c_func__mlds_output_params__ho2_8_p_0_3));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Opts_9));
        MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_2[0]));
        MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (&ml_backend__mlds_to_c_func_scalar_common_2[1]));
        MR_hl_field(MR_mktag(0), Var_24, 6) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), Var_24, 7) = ((MR_Box) (Context_13));
      }
      mercury__io__write_list_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Parameters_14, (MR_String) ",\n", Var_24);
    }
    mercury__io__write_char_3_p_0((MR_Char) 41);
  }
}

void mercury__ml_backend__mlds_to_c_func__init(void)
{
}

void mercury__ml_backend__mlds_to_c_func__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_c_func__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_c_func__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_c_func.
