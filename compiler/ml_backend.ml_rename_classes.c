/*
** Automatically generated from `ml_rename_classes.m'
** by the Mercury compiler,
** version rotd-2022-02-15
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


// :- module ml_backend.ml_rename_classes.
// :- implementation.

/*
INIT mercury__ml_backend__ml_rename_classes__init
ENDINIT
*/

#include "ml_backend.ml_rename_classes.mih"


#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "enum.mih"
#include "hlds.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.globals.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_TypeInfo_Struct2 ml_backend__ml_rename_classes__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__field_types_class_name_renaming_0_0[2];

static const MR_ConstString ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__field_names_class_name_renaming_0_0[2];

static const MR_DuFunctorDesc ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_functor_desc_class_name_renaming_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_stag_ordered_class_name_renaming_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_ptag_ordered_class_name_renaming_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_name_ordered_class_name_renaming_0[1];

static const MR_Integer ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__functor_number_map_class_name_renaming_0[1];

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_target_code_component_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Component_0_17,
  MR_Word * STATE_VARIABLE_Component_18);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_typed_rval_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_TypedRval_0_10,
  MR_Word * STATE_VARIABLE_TypedRval_11);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_switch_case_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Case_0_10,
  MR_Word * STATE_VARIABLE_Case_11);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_argument_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Argument_0_10,
  MR_Word * STATE_VARIABLE_Argument_11);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_field_var_defn_3_p_0(
  MR_Word Renaming_4,
  MR_Word FieldVarDefn0_5,
  MR_Word * FieldVarDefn_6);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_local_var_defn_3_p_0(
  MR_Word Renaming_4,
  MR_Word LocalVarDefn0_5,
  MR_Word * LocalVarDefn_6);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_switch_default_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Default_0_8,
  MR_Word * STATE_VARIABLE_Default_9);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Stmt_0_56,
  MR_Word * STATE_VARIABLE_Stmt_57);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Stmt_0_33,
  MR_Word * STATE_VARIABLE_Stmt_34);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Initializer_0_12,
  MR_Word * STATE_VARIABLE_Initializer_13);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Rval_0_26,
  MR_Word * STATE_VARIABLE_Rval_27);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Lval_0_22,
  MR_Word * STATE_VARIABLE_Lval_23);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Type_0_30,
  MR_Word * STATE_VARIABLE_Type_31);

static MR_bool MR_CALL 
ml_backend__ml_rename_classes____Unify____class_name_renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_rename_classes____Compare____class_name_renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_rename_classes_scalar_common_1[1][3];

static /* final */ const MR_Box ml_backend__ml_rename_classes_scalar_common_2[13][6];




static /* final */ const MR_Box ml_backend__ml_rename_classes_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_rename_classes_scalar_common_2[13][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0))
  },
};






static const MR_FA_TypeInfo_Struct2 ml_backend__ml_rename_classes__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__field_types_class_name_renaming_0_0[2] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_rename_classes__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0)
};

static const MR_ConstString ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__field_names_class_name_renaming_0_0[2] = {
  (MR_String) "cnr_module",
  (MR_String) "cnr_renaming"
};

static const MR_DuFunctorDesc ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_functor_desc_class_name_renaming_0_0 = {
  (MR_String) "class_name_renaming",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__field_types_class_name_renaming_0_0,
  ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__field_names_class_name_renaming_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_stag_ordered_class_name_renaming_0_0[1] = {
  &ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_functor_desc_class_name_renaming_0_0
};

static const MR_DuPtagLayout ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_ptag_ordered_class_name_renaming_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_stag_ordered_class_name_renaming_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_name_ordered_class_name_renaming_0[1] = {
  &ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_functor_desc_class_name_renaming_0_0
};

static const MR_Integer ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__functor_number_map_class_name_renaming_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_rename_classes____Unify____class_name_renaming_0_0_10001)),
  ((MR_Box) (ml_backend__ml_rename_classes____Compare____class_name_renaming_0_0_10001)),
  (MR_String) "ml_backend.ml_rename_classes",
  (MR_String) "class_name_renaming",
  { ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_name_ordered_class_name_renaming_0 },
  { ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__du_ptag_ordered_class_name_renaming_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__functor_number_map_class_name_renaming_0,

};

void MR_CALL 
ml_backend__ml_rename_classes____Compare____class_name_renaming_0_0(
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

    ml_backend__mlds____Compare____mlds_module_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_rename_classes_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
ml_backend__ml_rename_classes____Unify____class_name_renaming_0_0(
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

    succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&ml_backend__ml_rename_classes_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_target_code_component_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Component_0_17,
  MR_Word * STATE_VARIABLE_Component_18)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_Component_0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Component_18 = STATE_VARIABLE_Component_0_17;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Component_18 = STATE_VARIABLE_Component_0_17;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Component_18 = STATE_VARIABLE_Component_0_17;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Component_0_17, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Component_0_17, (MR_Integer) 1))));
            MR_Word Rval_12;

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_11, &Rval_12);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Component_18 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_12));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Component_0_17, (MR_Integer) 1))));
            MR_Word Lval_14;

            ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(Renaming_4, Lval0_13, &Lval_14);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Component_18 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_14));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Component_0_17, (MR_Integer) 1))));
            MR_Word Type_16;

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_15, &Type_16);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Component_18 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_16));
            }
          }
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Component_18 = STATE_VARIABLE_Component_0_17;
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_typed_rval_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_TypedRval_0_10,
  MR_Word * STATE_VARIABLE_TypedRval_11)
{
  MR_Word Rval0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TypedRval_0_10, (MR_Integer) 0))));
  MR_Word Type0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TypedRval_0_10, (MR_Integer) 1))));
  MR_Word Rval_8;
  MR_Word Type_9;

  ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_6, &Rval_8);
  ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_7, &Type_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_TypedRval_11 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_8));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_9));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_switch_case_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Case_0_10,
  MR_Word * STATE_VARIABLE_Case_11)
{
  MR_Word FirstMatchCond_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_10, (MR_Integer) 0))));
  MR_Word LaterMatchConds_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_10, (MR_Integer) 1))));
  MR_Word Stmt0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Case_0_10, (MR_Integer) 2))));
  MR_Word Stmt_9;

  ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(Renaming_4, Stmt0_8, &Stmt_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Case_11 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstMatchCond_6));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LaterMatchConds_7));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Stmt_9));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_argument_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Argument_0_10,
  MR_Word * STATE_VARIABLE_Argument_11)
{
  MR_Word Name_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Argument_0_10, (MR_Integer) 0))));
  MR_Word Type0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Argument_0_10, (MR_Integer) 1))));
  MR_Word GCStmt_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Argument_0_10, (MR_Integer) 2))));
  MR_Word Type_9;

  ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_7, &Type_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Argument_11 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_6));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Type_9));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (GCStmt_8));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_field_var_defn_3_p_0(
  MR_Word Renaming_4,
  MR_Word FieldVarDefn0_5,
  MR_Word * FieldVarDefn_6)
{
  MR_Word FieldVarName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn0_5, (MR_Integer) 0))));
  MR_Word Context_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn0_5, (MR_Integer) 1))));
  MR_Word Flags_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn0_5, (MR_Integer) 2))));
  MR_Word Type0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn0_5, (MR_Integer) 3))));
  MR_Word Initializer0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn0_5, (MR_Integer) 4))));
  MR_Word GCStmt_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldVarDefn0_5, (MR_Integer) 5))));
  MR_Word Type_13;
  MR_Word Initializer_14;

  ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_10, &Type_13);
  ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0(Renaming_4, Initializer0_11, &Initializer_14);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *FieldVarDefn_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FieldVarName_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_8));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Flags_9));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Type_13));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Initializer_14));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (GCStmt_12));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_local_var_defn_3_p_0(
  MR_Word Renaming_4,
  MR_Word LocalVarDefn0_5,
  MR_Word * LocalVarDefn_6)
{
  MR_Word LocalVarName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn0_5, (MR_Integer) 0))));
  MR_Word Context_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn0_5, (MR_Integer) 1))));
  MR_Word Type0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn0_5, (MR_Integer) 2))));
  MR_Word Initializer0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn0_5, (MR_Integer) 3))));
  MR_Word GCStmt_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn0_5, (MR_Integer) 4))));
  MR_Word Type_12;
  MR_Word Initializer_13;

  ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_9, &Type_12);
  ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0(Renaming_4, Initializer0_10, &Initializer_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *LocalVarDefn_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LocalVarName_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_8));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Type_12));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Initializer_13));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (GCStmt_11));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_FuncDefn_6;

  ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_FuncDefn_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_FuncDefn_6));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_ClassDefn_6;

  ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_ClassDefn_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_ClassDefn_6));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_FieldVarDefn_6;

  ml_backend__ml_rename_classes__rename_class_names_in_field_var_defn_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_FieldVarDefn_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_FieldVarDefn_6));
}

void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0(
  MR_Word Renaming_4,
  MR_Word ClassDefn0_5,
  MR_Word * ClassDefn_6)
{
  MR_String ClassName_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), ClassDefn0_5, (MR_Integer) 0))));
  MR_Integer Arity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassDefn0_5, (MR_Integer) 1))));
  MR_Word Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_5, (MR_Integer) 2))));
  MR_Word Flags_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_5, (MR_Integer) 3))));
  MR_Word ClassKind_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassDefn0_5, (MR_Integer) 4))) & (MR_Integer) 3);
  MR_Word Imports_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_5, (MR_Integer) 5))));
  MR_Word Inherits_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_5, (MR_Integer) 6))));
  MR_Word Implements_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_5, (MR_Integer) 7))));
  MR_Word TypeParams_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_5, (MR_Integer) 8))));
  MR_Word MemberFields0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_5, (MR_Integer) 9))));
  MR_Word MemberClasses0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_5, (MR_Integer) 10))));
  MR_Word MemberMethods0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_5, (MR_Integer) 11))));
  MR_Word Ctors0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn0_5, (MR_Integer) 12))));
  MR_Word MemberFields_20;
  MR_Word MemberClasses_21;
  MR_Word MemberMethods_22;
  MR_Word Ctors_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;

  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[11]));
    MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), Var_24, MemberFields0_16, &MemberFields_20);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[12]));
    MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_2));
    MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), Var_25, MemberClasses0_17, &MemberClasses_21);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[6]));
    MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_class_defn_3_p_0_3));
    MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_26, MemberMethods0_18, &MemberMethods_22);
  mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_26, Ctors0_19, &Ctors_23);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *ClassDefn_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ClassName_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Arity_8));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_9));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Flags_10));
    MR_hl_field(MR_mktag(0), base, 4) = (MR_Box) ((MR_Unsigned) (ClassKind_11));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Imports_12));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Inherits_13));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Implements_14));
    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (TypeParams_15));
    MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (MemberFields_20));
    MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (MemberClasses_21));
    MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (MemberMethods_22));
    MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Ctors_23));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Type_31;

  ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Type_31);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Type_31));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Argument_11;

  ml_backend__ml_rename_classes__rename_class_names_in_argument_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Argument_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Argument_11));
}

void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0(
  MR_Word Renaming_4,
  MR_Word FuncDefn0_5,
  MR_Word * FuncDefn_6)
{
  MR_Word Name_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 0))));
  MR_Word Context_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 1))));
  MR_Word Flags_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 2))));
  MR_Word MaybePredProcId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 3))));
  MR_Word FuncParams0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 4))));
  MR_Word FuncBody0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 5))));
  MR_Word EnvVarNames_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 6))));
  MR_Word MaybeRequireTailrecInfo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 7))));
  MR_Word FuncParams_15;
  MR_Word FuncBody_18;
  MR_Word Arguments0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncParams0_11, (MR_Integer) 0))));
  MR_Word RetTypes0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncParams0_11, (MR_Integer) 1))));
  MR_Word Arguments_25;
  MR_Word RetTypes_26;
  MR_Word Var_27;
  MR_Word Var_28;

  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[1]));
    MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0_1));
    MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Var_27, Arguments0_23, &Arguments_25);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[0]));
    MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0_2));
    MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (Renaming_4));
  }
  mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), Var_28, RetTypes0_24, &RetTypes_26);
  {
    FuncParams_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), FuncParams_15, 0) = ((MR_Box) (Arguments_25));
    MR_hl_field(MR_mktag(0), FuncParams_15, 1) = ((MR_Box) (RetTypes_26));
  }
  if ((FuncBody0_12 == (MR_Word) ((MR_Unsigned) 0U)))
    FuncBody_18 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Stmt0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncBody0_12, (MR_Integer) 0))));
    MR_Word Stmt_17;

    ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(Renaming_4, Stmt0_16, &Stmt_17);
    {
      FuncBody_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), FuncBody_18, 0) = ((MR_Box) (Stmt_17));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *FuncDefn_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_8));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Flags_9));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybePredProcId_10));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FuncParams_15));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FuncBody_18));
    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (EnvVarNames_13));
    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MaybeRequireTailrecInfo_14));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_switch_default_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Default_0_8,
  MR_Word * STATE_VARIABLE_Default_9)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_Default_0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(STATE_VARIABLE_Default_0_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Default_9 = STATE_VARIABLE_Default_0_8;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Default_9 = STATE_VARIABLE_Default_0_8;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stmt0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Default_0_8, (MR_Integer) 0))));
        MR_Word Stmt_7;

        ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(Renaming_4, Stmt0_6, &Stmt_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Default_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_7));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Case_11;

  ml_backend__ml_rename_classes__rename_class_names_in_switch_case_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv7_STATE_VARIABLE_Case_11);
  *wrapper_arg_2 = ((MR_Box) (conv7_STATE_VARIABLE_Case_11));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Rval_27;

  ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv6_STATE_VARIABLE_Rval_27);
  *wrapper_arg_2 = ((MR_Box) (conv6_STATE_VARIABLE_Rval_27));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Lval_23;

  ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv5_STATE_VARIABLE_Lval_23);
  *wrapper_arg_2 = ((MR_Box) (conv5_STATE_VARIABLE_Lval_23));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Rval_27;

  ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_Rval_27);
  *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_Rval_27));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Type_31;

  ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Type_31);
  *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Type_31));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Stmt_57;

  ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Stmt_57);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Stmt_57));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_FuncDefn_6;

  ml_backend__ml_rename_classes__rename_class_names_in_function_defn_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_FuncDefn_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_FuncDefn_6));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LocalVarDefn_6;

  ml_backend__ml_rename_classes__rename_class_names_in_local_var_defn_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_LocalVarDefn_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_LocalVarDefn_6));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Stmt_0_56,
  MR_Word * STATE_VARIABLE_Stmt_57)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_Stmt_0_56)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LocalVarDefns0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 0))));
        MR_Word FuncDefns0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1))));
        MR_Word SubStmts0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2))));
        MR_Word Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 3))));
        MR_Word LocalVarDefns_10;
        MR_Word FuncDefns_11;
        MR_Word SubStmts_12;
        MR_Word Var_73;
        MR_Word Var_74;
        MR_Word Var_75;

        {
          Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[5]));
          MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_1));
          MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (Renaming_4));
        }
        mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), Var_73, LocalVarDefns0_6, &LocalVarDefns_10);
        {
          Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[6]));
          MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_2));
          MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (Renaming_4));
        }
        mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_74, FuncDefns0_7, &FuncDefns_11);
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[7]));
          MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_3));
          MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Renaming_4));
        }
        mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_75, SubStmts0_8, &SubStmts_12);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Stmt_57 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LocalVarDefns_10));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FuncDefns_11));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SubStmts_12));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_9));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Kind_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Rval0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1))));
        MR_Word SubStmt0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2))));
        MR_Word LoopLocalVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 3))));
        MR_Word Rval_17;
        MR_Word SubStmt_18;
        MR_Word Context_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 4))));

        ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_14, &Rval_17);
        ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(Renaming_4, SubStmt0_15, &SubStmt_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Stmt_57 = base;
          MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (Kind_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rval_17));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (SubStmt_18));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (LoopLocalVars_16));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Context_77));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Then0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1))));
        MR_Word MaybeElse0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2))));
        MR_Word Then_21;
        MR_Word MaybeElse_24;
        MR_Word Context_78 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 3))));
        MR_Word Rval0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 0))));
        MR_Word Rval_80;

        ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_79, &Rval_80);
        ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(Renaming_4, Then0_19, &Then_21);
        if ((MaybeElse0_20 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeElse_24 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word Else0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse0_20, (MR_Integer) 0))));
          MR_Word Else_23;

          ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(Renaming_4, Else0_22, &Else_23);
          {
            MaybeElse_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeElse_24, 0) = ((MR_Box) (Else_23));
          }
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Stmt_57 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Rval_80));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Then_21));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (MaybeElse_24));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Context_78));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Type0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1))));
            MR_Word SwitchRange_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 3))));
            MR_Word Cases0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 4))));
            MR_Word Default0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 5))));
            MR_Word Type_29;
            MR_Word Cases_30;
            MR_Word Default_31;
            MR_Word Var_69;
            MR_Word Context_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 6))));
            MR_Word Rval0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2))));
            MR_Word Rval_83;

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_25, &Type_29);
            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_82, &Rval_83);
            {
              Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[10]));
              MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_8));
              MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (Renaming_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), Var_69, Cases0_27, &Cases_30);
            ml_backend__ml_rename_classes__rename_class_names_in_switch_default_3_p_0(Renaming_4, Default0_28, &Default_31);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Stmt_57 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_29));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_83));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SwitchRange_26));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Cases_30));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Default_31));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Context_81));
            }
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Stmt_57 = STATE_VARIABLE_Stmt_0_56;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Stmt_57 = STATE_VARIABLE_Stmt_0_56;
          break;
        case (MR_Integer) 3:
          {
            MR_Word Labels_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2))));
            MR_Word Context_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 3))));
            MR_Word Rval0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1))));
            MR_Word Rval_86;

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_85, &Rval_86);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Stmt_57 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_86));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Labels_36));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Context_84));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Signature0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1))));
            MR_Word Rvals0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 3))));
            MR_Word RetLvals0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 4))));
            MR_Word CallKind_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 5))) & (MR_Integer) 3);
            MR_Word ArgTypes0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature0_37, (MR_Integer) 0))));
            MR_Word RetTypes0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Signature0_37, (MR_Integer) 1))));
            MR_Word ArgTypes_43;
            MR_Word RetTypes_44;
            MR_Word Signature_45;
            MR_Word Rvals_46;
            MR_Word RetLvals_47;
            MR_Word Var_63;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Context_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 6))));
            MR_Word Rval0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2))));
            MR_Word Rval_89;

            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_4));
              MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Renaming_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), Var_63, ArgTypes0_41, &ArgTypes_43);
            mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), Var_63, RetTypes0_42, &RetTypes_44);
            {
              Signature_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Signature_45, 0) = ((MR_Box) (ArgTypes_43));
              MR_hl_field(MR_mktag(0), Signature_45, 1) = ((MR_Box) (RetTypes_44));
            }
            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_88, &Rval_89);
            {
              Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[8]));
              MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_5));
              MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (Renaming_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_65, Rvals0_38, &Rvals_46);
            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[9]));
              MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_6));
              MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (Renaming_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Var_66, RetLvals0_39, &RetLvals_47);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Stmt_57 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Signature_45));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_89));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Rvals_46));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (RetLvals_47));
              MR_hl_field(MR_mktag(3), base, 5) = (MR_Box) ((MR_Unsigned) (CallKind_40));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Context_87));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Var_61;
            MR_Word Context_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2))));
            MR_Word Rvals0_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1))));
            MR_Word Rvals_92;

            {
              Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[8]));
              MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0_7));
              MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Renaming_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), Var_61, Rvals0_91, &Rvals_92);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Stmt_57 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rvals_92));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_90));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Lval0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1))));
            MR_Word BodyStmt0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2))));
            MR_Word HandlerStmt0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 3))));
            MR_Word Lval_51;
            MR_Word BodyStmt_52;
            MR_Word HandlerStmt_53;
            MR_Word Context_93 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 4))));

            ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(Renaming_4, Lval0_48, &Lval_51);
            ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(Renaming_4, BodyStmt0_49, &BodyStmt_52);
            ml_backend__ml_rename_classes__rename_class_names_in_stmt_3_p_0(Renaming_4, HandlerStmt0_50, &HandlerStmt_53);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Stmt_57 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_51));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (BodyStmt_52));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (HandlerStmt_53));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Context_93));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Context_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2))));
            MR_Word Rval0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1))));
            MR_Word Rval_96;

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_95, &Rval_96);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Stmt_57 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_96));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_94));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AtomicStmt0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 1))));
            MR_Word AtomicStmt_55;
            MR_Word Context_97 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_56, (MR_Integer) 2))));

            ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0(Renaming_4, AtomicStmt0_54, &AtomicStmt_55);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Stmt_57 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (AtomicStmt_55));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_97));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TypedRval_11;

  ml_backend__ml_rename_classes__rename_class_names_in_typed_rval_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_TypedRval_11);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_TypedRval_11));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Component_18;

  ml_backend__ml_rename_classes__rename_class_names_in_target_code_component_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Component_18);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Component_18));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Stmt_0_33,
  MR_Word * STATE_VARIABLE_Stmt_34)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_Stmt_0_33)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Stmt_34 = STATE_VARIABLE_Stmt_0_33;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Stmt_34 = STATE_VARIABLE_Stmt_0_33;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lval0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 0))));
        MR_Word Rval0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 1))));
        MR_Word Lval_8;
        MR_Word Rval_9;

        ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(Renaming_4, Lval0_6, &Lval_8);
        ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_7, &Rval_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Stmt_34 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Lval_8));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Rval_9));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 1))));
            MR_Word Rval0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 2))));
            MR_Word Lval_44;
            MR_Word Rval_45;

            ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(Renaming_4, Lval0_42, &Lval_44);
            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_43, &Rval_45);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Stmt_34 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_44));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_45));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 1))));
            MR_Word Rval_47;

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_46, &Rval_47);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Stmt_34 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_47));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TargetLval0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 1))));
            MR_Word MaybeTag_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 2))));
            MR_Word ExplicitSecTag_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Word Type0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 4))));
            MR_Word MaybeSize_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 5))));
            MR_Word MaybeCtorName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 6))));
            MR_Word ArgRvalsTypes0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 7))));
            MR_Word MayUseAtomic_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 8))) & (MR_Integer) 1);
            MR_Word AllocId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 9))));
            MR_Word TargetLval_19;
            MR_Word Type_20;
            MR_Word ArgRvalsTypes_21;
            MR_Word Var_37;

            ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(Renaming_4, TargetLval0_10, &TargetLval_19);
            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_13, &Type_20);
            {
              Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[4]));
              MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_2));
              MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Renaming_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0), Var_37, ArgRvalsTypes0_16, &ArgRvalsTypes_21);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Stmt_34 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TargetLval_19));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (MaybeTag_11));
              MR_hl_field(MR_mktag(3), base, 3) = (MR_Box) ((MR_Unsigned) (ExplicitSecTag_12));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Type_20));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MaybeSize_14));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (MaybeCtorName_15));
              MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ArgRvalsTypes_21));
              MR_hl_field(MR_mktag(3), base, 8) = (MR_Box) ((MR_Unsigned) (MayUseAtomic_17));
              MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (AllocId_18));
            }
          }
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Stmt_34 = STATE_VARIABLE_Stmt_0_33;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_Stmt_34 = STATE_VARIABLE_Stmt_0_33;
          break;
        case (MR_Integer) 5:
          *STATE_VARIABLE_Stmt_34 = STATE_VARIABLE_Stmt_0_33;
          break;
        case (MR_Integer) 6:
          {
            MR_Word Lang_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word Components0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Stmt_0_33, (MR_Integer) 2))));

            switch (Lang_22) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Stmt_34 = STATE_VARIABLE_Stmt_0_33;
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_Stmt_34 = STATE_VARIABLE_Stmt_0_33;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Components_24;
                  MR_Word Var_35;

                  {
                    Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[3]));
                    MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_atomic_3_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (Renaming_4));
                  }
                  mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), Var_35, Components0_23, &Components_24);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Stmt_34 = base;
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Lang_22));
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Components_24));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 7:
          *STATE_VARIABLE_Stmt_34 = STATE_VARIABLE_Stmt_0_33;
          break;
      }
      break;
  }
}

void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_global_var_defn_3_p_0(
  MR_Word Renaming_4,
  MR_Word GlobalVarDefn0_5,
  MR_Word * GlobalVarDefn_6)
{
  MR_Word GlobalVarName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn0_5, (MR_Integer) 0))));
  MR_Word Context_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn0_5, (MR_Integer) 1))));
  MR_Word Flags_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn0_5, (MR_Integer) 2))));
  MR_Word Type0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn0_5, (MR_Integer) 3))));
  MR_Word Initializer0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn0_5, (MR_Integer) 4))));
  MR_Word GCStmt_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn0_5, (MR_Integer) 5))));
  MR_Word Type_13;
  MR_Word Initializer_14;

  ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_10, &Type_13);
  ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0(Renaming_4, Initializer0_11, &Initializer_14);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *GlobalVarDefn_6 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GlobalVarName_7));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_8));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Flags_9));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Type_13));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Initializer_14));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (GCStmt_12));
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Initializer_13;

  ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Initializer_13);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Initializer_13));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Initializer_13;

  ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_Initializer_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_Initializer_13));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Initializer_0_12,
  MR_Word * STATE_VARIABLE_Initializer_13)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_Initializer_0_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Initializer_13 = STATE_VARIABLE_Initializer_0_12;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Initializer_0_12, (MR_Integer) 0))));
        MR_Word Rval_7;

        ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_6, &Rval_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Initializer_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_7));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Type0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Initializer_0_12, (MR_Integer) 0))));
        MR_Word Initializers0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Initializer_0_12, (MR_Integer) 1))));
        MR_Word Type_10;
        MR_Word Initializers_11;
        MR_Word Var_16;

        ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_8, &Type_10);
        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[2]));
          MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0_2));
          MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (Renaming_4));
        }
        mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_16, Initializers0_9, &Initializers_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Initializer_13 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Type_10));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Initializers_11));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Var_14;
        MR_Word Initializers0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Initializer_0_12, (MR_Integer) 0))));
        MR_Word Initializers_20;

        {
          Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[2]));
          MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_initializer_3_p_0_1));
          MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Renaming_4));
        }
        mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_14, Initializers0_19, &Initializers_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Initializer_13 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Initializers_20));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Rval_0_26,
  MR_Word * STATE_VARIABLE_Rval_27)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_Rval_0_26)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Rval_27 = STATE_VARIABLE_Rval_0_26;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Rval_27 = STATE_VARIABLE_Rval_0_26;
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lval0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), STATE_VARIABLE_Rval_0_26, (MR_Integer) 0))));
        MR_Word Lval_7;

        ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(Renaming_4, Lval0_6, &Lval_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Rval_27 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Lval_7));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_5;
            MR_Word Tag_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 1))));
            MR_Word Rval0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 2))));

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_9, &Rval_5);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Rval_27 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Tag_8));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_5));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RvalConst0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 1))));
            MR_Word RvalConst_11;

            switch (MR_tag((MR_Word) RvalConst0_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(RvalConst0_10)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 1:
                    RvalConst_11 = RvalConst0_10;
                    break;
                }
                break;
              case (MR_Integer) 1:
                RvalConst_11 = RvalConst0_10;
                break;
              case (MR_Integer) 2:
                RvalConst_11 = RvalConst0_10;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), RvalConst0_10, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 1:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 2:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 3:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 4:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 5:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 6:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 7:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 8:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 9:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 10:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 11:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 12:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 13:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 14:
                    {
                      MR_Word Lang_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), RvalConst0_10, (MR_Integer) 1))) & (MR_Integer) 3);
                      MR_String String_59 = ((MR_String) ((MR_hl_field(MR_mktag(3), RvalConst0_10, (MR_Integer) 2))));
                      MR_Word Type0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalConst0_10, (MR_Integer) 3))));
                      MR_Word Type_61;

                      ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_60, &Type_61);
                      {
                        RvalConst_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), RvalConst_11, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                        MR_hl_field(MR_mktag(3), RvalConst_11, 1) = (MR_Box) ((MR_Unsigned) (Lang_58));
                        MR_hl_field(MR_mktag(3), RvalConst_11, 2) = ((MR_Box) (String_59));
                        MR_hl_field(MR_mktag(3), RvalConst_11, 3) = ((MR_Box) (Type_61));
                      }
                    }
                    break;
                  case (MR_Integer) 15:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 16:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 17:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 18:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 19:
                    RvalConst_11 = RvalConst0_10;
                    break;
                  case (MR_Integer) 20:
                    {
                      MR_Word Type0_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), RvalConst0_10, (MR_Integer) 1))));
                      MR_Word Type_91;

                      ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_90, &Type_91);
                      {
                        RvalConst_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), RvalConst_11, 0) = ((MR_Box) ((MR_Unsigned) 20U));
                        MR_hl_field(MR_mktag(3), RvalConst_11, 1) = ((MR_Box) (Type_91));
                      }
                    }
                    break;
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Rval_27 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RvalConst_11));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 1))));
            MR_Word SubRval0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 2))));
            MR_Word Type_14;
            MR_Word SubRval_15;

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_12, &Type_14);
            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, SubRval0_13, &SubRval_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Rval_27 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_14));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_15));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Type0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 1))));
            MR_Word SubRval0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 2))));
            MR_Word Type_41;
            MR_Word SubRval_42;

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_39, &Type_41);
            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, SubRval0_40, &SubRval_42);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Rval_27 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_41));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_42));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Type0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 1))));
            MR_Word SubRval0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 2))));
            MR_Word Type_45;
            MR_Word SubRval_46;

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_43, &Type_45);
            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, SubRval0_44, &SubRval_46);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Rval_27 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_45));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_46));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Op_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 1))));
            MR_Word SubRval0_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 2))));
            MR_Word SubRval_48;

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, SubRval0_47, &SubRval_48);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Rval_27 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Op_16));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRval_48));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word SubRvalA0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 2))));
            MR_Word SubRvalB0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 3))));
            MR_Word SubRvalA_19;
            MR_Word SubRvalB_20;
            MR_Word Op_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 1))));

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, SubRvalA0_17, &SubRvalA_19);
            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, SubRvalB0_18, &SubRvalB_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Rval_27 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Op_49));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (SubRvalA_19));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (SubRvalB_20));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Lval0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 1))));
            MR_Word Lval_51;

            ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(Renaming_4, Lval0_50, &Lval_51);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Rval_27 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_51));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word VectorCommon_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 1))));
            MR_Word RowRval0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 2))));
            MR_Word RowRval_25;

            ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, RowRval0_24, &RowRval_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Rval_27 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (VectorCommon_23));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RowRval_25));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Type0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Rval_0_26, (MR_Integer) 1))));
            MR_Word Type_53;

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_52, &Type_53);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Rval_27 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_53));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_lval_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Lval_0_22,
  MR_Word * STATE_VARIABLE_Lval_23)
{
  switch (MR_tag((MR_Word) STATE_VARIABLE_Lval_0_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Tag_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Lval_0_22, (MR_Integer) 0))));
        MR_Word PtrRval0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Lval_0_22, (MR_Integer) 1))));
        MR_Word PtrType0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Lval_0_22, (MR_Integer) 2))));
        MR_Word FieldId0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Lval_0_22, (MR_Integer) 3))));
        MR_Word FieldType0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Lval_0_22, (MR_Integer) 4))));
        MR_Word PtrRval_11;
        MR_Word PtrType_12;
        MR_Word FieldId_13;
        MR_Word FieldType_14;

        ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, PtrRval0_7, &PtrRval_11);
        ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, PtrType0_8, &PtrType_12);
        if (((MR_tag((MR_Word) FieldId0_9)) == (MR_Integer) 1))
        {
          MR_Word Name_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId0_9, (MR_Integer) 0))));
          MR_Word Type0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldId0_9, (MR_Integer) 1))));
          MR_Word Type_40;

          ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_39, &Type_40);
          {
            FieldId_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), FieldId_13, 0) = ((MR_Box) (Name_38));
            MR_hl_field(MR_mktag(1), FieldId_13, 1) = ((MR_Box) (Type_40));
          }
        }
        else
        {
          MR_Word Rval0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldId0_9, (MR_Integer) 0))));
          MR_Word Rval_37;

          ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_36, &Rval_37);
          {
            FieldId_13 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), FieldId_13, 0) = ((MR_Box) (Rval_37));
          }
        }
        ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, FieldType0_10, &FieldType_14);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Lval_23 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Tag_6));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (PtrRval_11));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PtrType_12));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldId_13));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FieldType_14));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Lval_0_22, (MR_Integer) 0))));
        MR_Word Type0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_Lval_0_22, (MR_Integer) 1))));
        MR_Word Rval_17;
        MR_Word Type_18;

        ml_backend__ml_rename_classes__rename_class_names_in_rval_3_p_0(Renaming_4, Rval0_15, &Rval_17);
        ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_16, &Type_18);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Lval_23 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Type_18));
        }
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Lval_23 = STATE_VARIABLE_Lval_0_22;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Lval_0_22, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word LocalVar_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Lval_0_22, (MR_Integer) 1))));
            MR_Word Type0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Lval_0_22, (MR_Integer) 2))));
            MR_Word Type_31;

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_30, &Type_31);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Lval_23 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (LocalVar_21));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Type_31));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word GlobalVar_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Lval_0_22, (MR_Integer) 1))));
            MR_Word Type0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Lval_0_22, (MR_Integer) 2))));
            MR_Word Type_29;

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_28, &Type_29);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Lval_23 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (GlobalVar_20));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Type_29));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Type_31;

  ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_Type_31);
  *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_Type_31));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Type_31;

  ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Type_31);
  *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Type_31));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_Argument_11;

  ml_backend__ml_rename_classes__rename_class_names_in_argument_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_STATE_VARIABLE_Argument_11);
  *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_Argument_11));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Type_31;

  ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_STATE_VARIABLE_Type_31);
  *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Type_31));
}

static void MR_CALL 
ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Type_0_30,
  MR_Word * STATE_VARIABLE_Type_31)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) STATE_VARIABLE_Type_0_30)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(STATE_VARIABLE_Type_0_30)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
        case (MR_Integer) 5:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
        case (MR_Integer) 6:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
        case (MR_Integer) 7:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
        case (MR_Integer) 8:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
        case (MR_Integer) 9:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ClassId0_9 = (MR_Word) (MR_body((MR_Word) (STATE_VARIABLE_Type_0_30), (MR_Integer) 1));
        MR_Word QualClassName0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId0_9, (MR_Integer) 0))));
        MR_Integer Arity_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ClassId0_9, (MR_Integer) 1))));
        MR_Word ClassKind_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ClassId0_9, (MR_Integer) 2))) & (MR_Integer) 3);
        MR_Word ModuleName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualClassName0_10, (MR_Integer) 0))));
        MR_Word QualKind_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), QualClassName0_10, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_String ClassName0_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), QualClassName0_10, (MR_Integer) 2))));
        MR_String ClassName_17;
        MR_Word TypeCtorInfo_48_48;
        MR_Word RenamingMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Renaming_4, (MR_Integer) 1))));
        MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Renaming_4, (MR_Integer) 0))));
        MR_Box conv0_ClassName_17;

        succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModuleName_13, Var_52);
        if (succeeded)
        {
          TypeCtorInfo_48_48 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_48_48, TypeCtorInfo_48_48, RenamingMap_16, ((MR_Box) (ClassName0_15)), &conv0_ClassName_17);
          if (succeeded)
          {
            ClassName_17 = ((MR_String) (conv0_ClassName_17));
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word QualClassName_18;
          MR_Word ClassId_19;

          {
            QualClassName_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), QualClassName_18, 0) = ((MR_Box) (ModuleName_13));
            MR_hl_field(MR_mktag(0), QualClassName_18, 1) = (MR_Box) ((MR_Unsigned) (QualKind_14));
            MR_hl_field(MR_mktag(0), QualClassName_18, 2) = ((MR_Box) (ClassName_17));
          }
          {
            ClassId_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ClassId_19, 0) = ((MR_Box) (QualClassName_18));
            MR_hl_field(MR_mktag(0), ClassId_19, 1) = ((MR_Box) (Arity_11));
            MR_hl_field(MR_mktag(0), ClassId_19, 2) = (MR_Box) ((MR_Unsigned) (ClassKind_12));
          }
          *STATE_VARIABLE_Type_31 = (MR_Word) (MR_mkword(MR_mktag(1), (MR_Word) (ClassId_19)));
        }
        else
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word FuncParams0_22 = (MR_Word) (MR_body((MR_Word) (STATE_VARIABLE_Type_0_30), (MR_Integer) 2));
        MR_Word FuncParams_23;
        MR_Word Arguments0_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncParams0_22, (MR_Integer) 0))));
        MR_Word RetTypes0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncParams0_22, (MR_Integer) 1))));
        MR_Word Arguments_60;
        MR_Word RetTypes_61;
        MR_Word Var_62;
        MR_Word Var_63;

        {
          Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[1]));
          MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_2));
          MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (Renaming_4));
        }
        mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), Var_62, Arguments0_58, &Arguments_60);
        {
          Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[0]));
          MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_3));
          MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (Renaming_4));
        }
        mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), Var_63, RetTypes0_59, &RetTypes_61);
        {
          FuncParams_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FuncParams_23, 0) = ((MR_Box) (Arguments_60));
          MR_hl_field(MR_mktag(0), FuncParams_23, 1) = ((MR_Box) (RetTypes_61));
        }
        *STATE_VARIABLE_Type_31 = (MR_Word) (MR_mkword(MR_mktag(2), (MR_Word) (FuncParams_23)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Type_0_30, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Type_5;
            MR_Word Type0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Type_0_30, (MR_Integer) 1))));

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_6, &Type_5);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Type_31 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_5));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word RetTypes0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Type_0_30, (MR_Integer) 1))));
            MR_Word RetTypes_8;
            MR_Word Var_38;

            {
              Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_1));
              MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Renaming_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), Var_38, RetTypes0_7, &RetTypes_8);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Type_31 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RetTypes_8));
            }
          }
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
        case (MR_Integer) 4:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
        case (MR_Integer) 5:
          {
            MR_Word Type_41;
            MR_Word Type0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Type_0_30, (MR_Integer) 1))));

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_42, &Type_41);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Type_31 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_41));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Types0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Type_0_30, (MR_Integer) 1))));
            MR_Word Types_21;
            MR_Word Var_34;

            {
              Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&ml_backend__ml_rename_classes_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0_4));
              MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (Renaming_4));
            }
            mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0), Var_34, Types0_20, &Types_21);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Type_31 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Types_21));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Type_43;
            MR_Word Type0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), STATE_VARIABLE_Type_0_30, (MR_Integer) 1))));

            ml_backend__ml_rename_classes__rename_class_names_in_type_3_p_0(Renaming_4, Type0_44, &Type_43);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Type_31 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_43));
            }
          }
          break;
        case (MR_Integer) 8:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
        case (MR_Integer) 9:
          *STATE_VARIABLE_Type_31 = STATE_VARIABLE_Type_0_30;
          break;
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_rename_classes____Unify____class_name_renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_rename_classes____Unify____class_name_renaming_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_rename_classes____Compare____class_name_renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_rename_classes____Compare____class_name_renaming_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ml_backend__ml_rename_classes__init(void)
{
}

void mercury__ml_backend__ml_rename_classes__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_rename_classes__ml_backend__ml_rename_classes__type_ctor_info_class_name_renaming_0);
}

void mercury__ml_backend__ml_rename_classes__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_rename_classes__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_rename_classes.
