/*
** Automatically generated from `prog_mutable.m'
** by the Mercury compiler,
** version 22.01.6-beta-2023-02-04
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


// :- module parse_tree.prog_mutable.
// :- implementation.

/*
INIT mercury__parse_tree__prog_mutable__init
ENDINIT
*/

#include "parse_tree.prog_mutable.mih"


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
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.set_of_var.mih"




static const MR_VA_TypeInfo_Struct3 parse_tree__prog_mutable____vti_func_3libs__globals__type_ctor_info_foreign_language_0parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo parse_tree__prog_mutable__parse_tree__prog_mutable__field_types_module_params_0_0[3];

static const MR_ConstString parse_tree__prog_mutable__parse_tree__prog_mutable__field_names_module_params_0_0[3];

static const MR_DuFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__du_functor_desc_module_params_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__du_stag_ordered_module_params_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_mutable__parse_tree__prog_mutable__du_ptag_ordered_module_params_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__du_name_ordered_module_params_0[1];

static const MR_Integer parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_module_params_0[1];

static const MR_PseudoTypeInfo parse_tree__prog_mutable__parse_tree__prog_mutable__field_types_mutable_target_params_0_0[2];

static const MR_ConstString parse_tree__prog_mutable__parse_tree__prog_mutable__field_names_mutable_target_params_0_0[2];

static const MR_DuArgLocn parse_tree__prog_mutable__parse_tree__prog_mutable__field_locns_mutable_target_params_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__du_functor_desc_mutable_target_params_0_0;

static const MR_DuFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__du_stag_ordered_mutable_target_params_0_0[1];

static const MR_DuPtagLayout parse_tree__prog_mutable__parse_tree__prog_mutable__du_ptag_ordered_mutable_target_params_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__du_name_ordered_mutable_target_params_0[1];

static const MR_Integer parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_mutable_target_params_0[1];

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_lock_unlock_preds_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_lock_unlock_preds_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_ordinal_ordered_need_lock_unlock_preds_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_need_lock_unlock_preds_0[2];

static const MR_Integer parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_need_lock_unlock_preds_0[2];

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_pre_init_pred_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_pre_init_pred_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_ordinal_ordered_need_pre_init_pred_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_need_pre_init_pred_0[2];

static const MR_Integer parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_need_pre_init_pred_0[2];

static void MR_CALL 
parse_tree__prog_mutable____Compare____need_pre_init_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____need_pre_init_pred_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_mutable____Compare____need_lock_unlock_preds_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____need_lock_unlock_preds_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_mutable____Compare____mutable_target_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____mutable_target_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_mutable__declare_and_define_mutable_aux_preds_10_p_0(
  MR_Word ModuleParams_11,
  MR_Word TargetParams_12,
  MR_Word ItemMutable_13,
  MR_String TargetMutableName_14,
  MR_Word * PredDecls_15,
  MR_Word * ClauseInfos_16,
  MR_Word * ForeignProcs_17,
  MR_Word * PragmaFPEInfo_18,
  MR_Word STATE_VARIABLE_PredTargetNames_0_68,
  MR_Word * STATE_VARIABLE_PredTargetNames_69);

static void MR_CALL 
parse_tree__prog_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_102_105_110_101_95_110_111_110_99_111_110_115_116_97_110_116_95_103_101_116_95_115_101_116_95_112_114_101_100_115_95_95_91_50_93_95_48_9_p_0(
  MR_Word ModuleName_10,
  MR_String MutableName_12,
  MR_Word AttachToIO_13,
  MR_Word Context_14,
  MR_Word MaybeLockUnlockExprs_15,
  MR_Word CallUnsafeGetExpr_16,
  MR_Word CallUnsafeSetExpr_17,
  MR_Word * ClauseInfos_18);

static MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_set_pred_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String MutableName_5);

static void MR_CALL 
parse_tree__prog_mutable__define_init_pred_9_p_0(
  MR_Word ModuleName_10,
  MR_Word Lang_11,
  MR_Word ItemMutable_12,
  MR_Word InitSetPredName_13,
  MR_Word MaybeCallPreInitExpr_14,
  MR_Word * InitClauseInfo_15,
  MR_Word * PragmaFPEInfo_16,
  MR_Word STATE_VARIABLE_PredTargetNames_0_44,
  MR_Word * STATE_VARIABLE_PredTargetNames_45);

static void MR_CALL 
parse_tree__prog_mutable__declare_init_pred_4_p_0(
  MR_Word ModuleName_5,
  MR_String MutableName_6,
  MR_Word Context_7,
  MR_Word * InitPredDecl_8);

static void MR_CALL 
parse_tree__prog_mutable__declare_nonconstant_get_set_preds_10_p_0(
  MR_Word ModuleName_11,
  MR_String MutableName_12,
  MR_Word Type_13,
  MR_Word Inst_14,
  MR_Word AttachToIO_15,
  MR_Word Context_16,
  MR_Word * InitSetPredName_17,
  MR_Word * GetPredDecl_18,
  MR_Word * SetPredDecl_19,
  MR_Word * IOPredDecls_20);

static void MR_CALL 
parse_tree__prog_mutable__define_constant_get_set_preds_8_p_0(
  MR_Word ModuleName_9,
  MR_Word TargetParams_10,
  MR_String MutableName_11,
  MR_Word Inst_12,
  MR_Word Context_13,
  MR_String TargetMutableName_14,
  MR_Word Attrs_15,
  MR_Word * ForeignProcs_16);

static void MR_CALL 
parse_tree__prog_mutable__declare_constant_get_set_preds_8_p_0(
  MR_Word ModuleName_9,
  MR_String MutableName_10,
  MR_Word Type_11,
  MR_Word Inst_12,
  MR_Word Context_13,
  MR_Word * InitSetPredName_14,
  MR_Word * GetPredDecl_15,
  MR_Word * SetPredDecl_16);

static void MR_CALL 
parse_tree__prog_mutable__define_unsafe_get_set_preds_12_p_0(
  MR_Word ModuleParams_13,
  MR_Word TargetParams_14,
  MR_String MutableName_15,
  MR_Word Type_16,
  MR_Word Inst_17,
  MR_Word Local_18,
  MR_Word Context_19,
  MR_String TargetMutableName_20,
  MR_Word Attrs_21,
  MR_Word * UnsafeGetExpr_22,
  MR_Word * UnsafeSetExpr_23,
  MR_Word * ForeignProcs_24);

static MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unsafe_set_pred_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String MutableName_5);

static MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unsafe_get_pred_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String MutableName_5);

static MR_String MR_CALL 
parse_tree__prog_mutable__global_foreign_type_name_4_f_0(
  MR_Word ModuleParams_6,
  MR_Word BoxPolicy_7,
  MR_Word Lang_8,
  MR_Word Type_9);

static void MR_CALL 
parse_tree__prog_mutable__declare_unsafe_get_set_preds_7_p_0(
  MR_Word ModuleName_8,
  MR_String MutableName_9,
  MR_Word Type_10,
  MR_Word Inst_11,
  MR_Word Context_12,
  MR_Word * UnsafeGetPredDecl_13,
  MR_Word * UnsafeSetPredDecl_14);

static void MR_CALL 
parse_tree__prog_mutable__define_lock_unlock_preds_9_p_0(
  MR_Word ModuleName_10,
  MR_Word TargetParams_11,
  MR_String MutableName_12,
  MR_Word Local_13,
  MR_Word Context_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Tuple * LockUnlockExprs_17,
  MR_Word * ForeignProcs_18);

static void MR_CALL 
parse_tree__prog_mutable__declare_lock_unlock_preds_5_p_0(
  MR_Word ModuleName_6,
  MR_String MutableName_7,
  MR_Word Context_8,
  MR_Word * LockPredDecl_9,
  MR_Word * UnlockPredDecl_10);

static void MR_CALL 
parse_tree__prog_mutable__define_pre_init_pred_9_p_0(
  MR_Word ModuleName_10,
  MR_Word TargetParams_11,
  MR_String MutableName_12,
  MR_Word Local_13,
  MR_Word Context_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Word * CallPreInitExpr_17,
  MR_Word * ForeignProc_18);

static void MR_CALL 
parse_tree__prog_mutable__declare_pre_init_pred_4_p_0(
  MR_Word ModuleName_5,
  MR_String MutableName_6,
  MR_Word Context_7,
  MR_Word * PreInitPredDecl_8);

static void MR_CALL 
parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(
  MR_Word ModuleName_9,
  MR_String MutableName_10,
  MR_Word PredSymName_11,
  MR_Word ArgTypesAndModes_12,
  MR_Word Purity_13,
  MR_Word Kind_14,
  MR_Word Context_15,
  MR_Word * PredDecl_16);

static void MR_CALL 
parse_tree__prog_mutable__do_we_need_pre_init_lock_unlock_4_p_0(
  MR_Word Lang_5,
  MR_Word Local_6,
  MR_Word * PreInit_7,
  MR_Word * LockUnlock_8);

static void MR_CALL 
parse_tree__prog_mutable__define_mutable_global_var_11_p_0(
  MR_Word ModuleParams_12,
  MR_Word Lang_13,
  MR_String MutableName_14,
  MR_Word Type_15,
  MR_Word MutAttrs_16,
  MR_Word Context_17,
  MR_String * TargetMutableName_18,
  MR_Word STATE_VARIABLE_ForeignDeclCodes_0_26,
  MR_Word * STATE_VARIABLE_ForeignDeclCodes_27,
  MR_Word STATE_VARIABLE_ForeignBodyCodes_0_28,
  MR_Word * STATE_VARIABLE_ForeignBodyCodes_29);

static void MR_CALL 
parse_tree__prog_mutable__define_mutable_global_var_java_5_p_0(
  MR_String TargetMutableName_6,
  MR_Word Type_7,
  MR_Word Const_8,
  MR_Word Context_9,
  MR_Word * ForeignBodyCode_10);

static void MR_CALL 
parse_tree__prog_mutable__define_mutable_global_var_c_7_p_0(
  MR_Word ModuleParams_8,
  MR_String TargetMutableName_9,
  MR_Word Type_10,
  MR_Word Const_11,
  MR_Word Context_12,
  MR_Word * ForeignDeclCode_13,
  MR_Word * ForeignBodyCode_14);

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____module_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mutable____Compare____module_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____mutable_target_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mutable____Compare____mutable_target_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____need_lock_unlock_preds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mutable____Compare____need_lock_unlock_preds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____need_pre_init_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mutable____Compare____need_pre_init_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____type_foreign_name_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_mutable____Compare____type_foreign_name_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_1[6][2];

static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_2[1][5];

static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_3[2][1];




static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pragma_info_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_foreign_proc_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "#endif\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) ">();\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ", MR_MUTEX_ATTR);\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[1])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_2[1][5] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_func_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_mutable_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_VA_TypeInfo_Struct3 parse_tree__prog_mutable____vti_func_3libs__globals__type_ctor_info_foreign_language_0parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__prog_mutable__parse_tree__prog_mutable__field_types_module_params_0_0[3] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_mutable____vti_func_3libs__globals__type_ctor_info_foreign_language_0parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_string_0)
};

static const MR_ConstString parse_tree__prog_mutable__parse_tree__prog_mutable__field_names_module_params_0_0[3] = {
  (MR_String) "mp_globals",
  (MR_String) "mp_module_name",
  (MR_String) "mp_type_name_func"
};

static const MR_DuFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__du_functor_desc_module_params_0_0 = {
  (MR_String) "module_params",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_mutable__parse_tree__prog_mutable__field_types_module_params_0_0,
  parse_tree__prog_mutable__parse_tree__prog_mutable__field_names_module_params_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__du_stag_ordered_module_params_0_0[1] = {
  &parse_tree__prog_mutable__parse_tree__prog_mutable__du_functor_desc_module_params_0_0
};

static const MR_DuPtagLayout parse_tree__prog_mutable__parse_tree__prog_mutable__du_ptag_ordered_module_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_mutable__parse_tree__prog_mutable__du_stag_ordered_module_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__du_name_ordered_module_params_0[1] = {
  &parse_tree__prog_mutable__parse_tree__prog_mutable__du_functor_desc_module_params_0_0
};

static const MR_Integer parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_module_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_module_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_mutable____Unify____module_params_0_0_10001)),
  ((MR_Box) (parse_tree__prog_mutable____Compare____module_params_0_0_10001)),
  (MR_String) "parse_tree.prog_mutable",
  (MR_String) "module_params",
  {     parse_tree__prog_mutable__parse_tree__prog_mutable__du_name_ordered_module_params_0 },
  {     parse_tree__prog_mutable__parse_tree__prog_mutable__du_ptag_ordered_module_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_module_params_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_mutable__parse_tree__prog_mutable__field_types_mutable_target_params_0_0[2] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_box_policy_0)
};

static const MR_ConstString parse_tree__prog_mutable__parse_tree__prog_mutable__field_names_mutable_target_params_0_0[2] = {
  (MR_String) "tp_target_lang",
  (MR_String) "tp_box_policy"
};

static const MR_DuArgLocn parse_tree__prog_mutable__parse_tree__prog_mutable__field_locns_mutable_target_params_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__du_functor_desc_mutable_target_params_0_0 = {
  (MR_String) "mutable_target_params",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_mutable__parse_tree__prog_mutable__field_types_mutable_target_params_0_0,
  parse_tree__prog_mutable__parse_tree__prog_mutable__field_names_mutable_target_params_0_0,
  parse_tree__prog_mutable__parse_tree__prog_mutable__field_locns_mutable_target_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__du_stag_ordered_mutable_target_params_0_0[1] = {
  &parse_tree__prog_mutable__parse_tree__prog_mutable__du_functor_desc_mutable_target_params_0_0
};

static const MR_DuPtagLayout parse_tree__prog_mutable__parse_tree__prog_mutable__du_ptag_ordered_mutable_target_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_mutable__parse_tree__prog_mutable__du_stag_ordered_mutable_target_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__du_name_ordered_mutable_target_params_0[1] = {
  &parse_tree__prog_mutable__parse_tree__prog_mutable__du_functor_desc_mutable_target_params_0_0
};

static const MR_Integer parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_mutable_target_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_mutable_target_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_mutable____Unify____mutable_target_params_0_0_10001)),
  ((MR_Box) (parse_tree__prog_mutable____Compare____mutable_target_params_0_0_10001)),
  (MR_String) "parse_tree.prog_mutable",
  (MR_String) "mutable_target_params",
  {     parse_tree__prog_mutable__parse_tree__prog_mutable__du_name_ordered_mutable_target_params_0 },
  {     parse_tree__prog_mutable__parse_tree__prog_mutable__du_ptag_ordered_mutable_target_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_mutable_target_params_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_lock_unlock_preds_0_0 = {
  (MR_String) "dont_need_lock_unlock_preds",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_lock_unlock_preds_0_1 = {
  (MR_String) "need_lock_unlock_preds",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_ordinal_ordered_need_lock_unlock_preds_0[2] = {
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_lock_unlock_preds_0_0,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_lock_unlock_preds_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_need_lock_unlock_preds_0[2] = {
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_lock_unlock_preds_0_0,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_lock_unlock_preds_0_1
};

static const MR_Integer parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_need_lock_unlock_preds_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_need_lock_unlock_preds_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_mutable____Unify____need_lock_unlock_preds_0_0_10001)),
  ((MR_Box) (parse_tree__prog_mutable____Compare____need_lock_unlock_preds_0_0_10001)),
  (MR_String) "parse_tree.prog_mutable",
  (MR_String) "need_lock_unlock_preds",
  {     parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_need_lock_unlock_preds_0 },
  {     parse_tree__prog_mutable__parse_tree__prog_mutable__enum_ordinal_ordered_need_lock_unlock_preds_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_need_lock_unlock_preds_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_pre_init_pred_0_0 = {
  (MR_String) "dont_need_pre_init_pred",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_pre_init_pred_0_1 = {
  (MR_String) "need_pre_init_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_ordinal_ordered_need_pre_init_pred_0[2] = {
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_pre_init_pred_0_0,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_pre_init_pred_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_need_pre_init_pred_0[2] = {
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_pre_init_pred_0_0,
  &parse_tree__prog_mutable__parse_tree__prog_mutable__enum_functor_desc_need_pre_init_pred_0_1
};

static const MR_Integer parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_need_pre_init_pred_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_need_pre_init_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_mutable____Unify____need_pre_init_pred_0_0_10001)),
  ((MR_Box) (parse_tree__prog_mutable____Compare____need_pre_init_pred_0_0_10001)),
  (MR_String) "parse_tree.prog_mutable",
  (MR_String) "need_pre_init_pred",
  {     parse_tree__prog_mutable__parse_tree__prog_mutable__enum_name_ordered_need_pre_init_pred_0 },
  {     parse_tree__prog_mutable__parse_tree__prog_mutable__enum_ordinal_ordered_need_pre_init_pred_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_mutable__parse_tree__prog_mutable__functor_number_map_need_pre_init_pred_0,

};

const MR_TypeCtorInfo_Struct parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_type_foreign_name_func_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_mutable____Unify____type_foreign_name_func_0_0_10001)),
  ((MR_Box) (parse_tree__prog_mutable____Compare____type_foreign_name_func_0_0_10001)),
  (MR_String) "parse_tree.prog_mutable",
  (MR_String) "type_foreign_name_func",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__prog_mutable____vti_func_3libs__globals__type_ctor_info_foreign_language_0parse_tree__prog_data__type_ctor_info_mer_type_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
parse_tree__prog_mutable____Compare____type_foreign_name_func_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_mutable_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____type_foreign_name_func_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mutable____Compare____need_pre_init_pred_0_0(
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
parse_tree__prog_mutable____Unify____need_pre_init_pred_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mutable____Compare____need_lock_unlock_preds_0_0(
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
parse_tree__prog_mutable____Unify____need_lock_unlock_preds_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mutable____Compare____mutable_target_params_0_0(
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
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SubResult1_6;
      MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_13 > Var_14);
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
        MR_Integer Var_15 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_16 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_15 < Var_16);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_15 > Var_16);
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
parse_tree__prog_mutable____Unify____mutable_target_params_0_0(
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
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__prog_mutable____Compare____module_params_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      libs__globals____Compare____globals_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__prog_mutable_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____module_params_0_0(
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = libs__globals____Unify____globals_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX3_7), (MR_Word) (ArgY3_8));
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
parse_tree__prog_mutable__declare_mutable_aux_preds_for_int0_2_f_0(
  MR_Word ModuleName_4,
  MR_Word ItemMutable_5)
{
  {
    MR_Word PublicAuxPredDecls_6;
    MR_String MutableName_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_5, (MR_Integer) 0))));
    MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_5, (MR_Integer) 2))));
    MR_Word Inst_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_5, (MR_Integer) 4))));
    MR_Word MutAttrs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_5, (MR_Integer) 7))));
    MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_5, (MR_Integer) 8))));
    MR_Word Const_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MutAttrs_14, (MR_Integer) 1))));

    if ((Const_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word _InitSetPredName_19;
      MR_Word GetPredDecl_20;
      MR_Word GetArg_39;
      MR_Word SetArg_40;
      MR_Word GetPredName_41;
      MR_Word Var_43;
      MR_Word Var_47;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_String Var_59;
      MR_String Var_63;
      MR_Word _SetPredDecl_21;

      Var_53 = parse_tree__prog_mode__out_mode_1_f_0(Inst_11);
      {
        GetArg_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GetArg_39, 0) = ((MR_Box) (Type_9));
        MR_hl_field(MR_mktag(1), GetArg_39, 1) = ((MR_Box) (Var_53));
      }
      Var_56 = parse_tree__prog_mode__in_mode_1_f_0(Inst_11);
      {
        SetArg_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SetArg_40, 0) = ((MR_Box) (Type_9));
        MR_hl_field(MR_mktag(1), SetArg_40, 1) = ((MR_Box) (Var_56));
      }
      Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "get_", MutableName_7);
      {
        GetPredName_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GetPredName_41, 0) = ((MR_Box) (ModuleName_4));
        MR_hl_field(MR_mktag(1), GetPredName_41, 1) = ((MR_Box) (Var_59));
      }
      Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "secret_initialization_only_set_", MutableName_7);
      {
        _InitSetPredName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), _InitSetPredName_19, 0) = ((MR_Box) (ModuleName_4));
        MR_hl_field(MR_mktag(1), _InitSetPredName_19, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (GetArg_39));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(ModuleName_4, MutableName_7, GetPredName_41, Var_43, (MR_Integer) 0, (MR_Integer) 4, Context_15, &GetPredDecl_20);
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (SetArg_40));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(ModuleName_4, MutableName_7, _InitSetPredName_19, Var_47, (MR_Integer) 2, (MR_Integer) 5, Context_15, &_SetPredDecl_21);
      {
        PublicAuxPredDecls_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PublicAuxPredDecls_6, 0) = ((MR_Box) (GetPredDecl_20));
        MR_hl_field(MR_mktag(1), PublicAuxPredDecls_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word AttachToIO_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_18, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SetPredDecl_24;
      MR_Word IOPredDecls_25;
      MR_Word Var_26;
      MR_Word GetPredDecl_30;
      MR_Word _InitSetPredName_28;

      parse_tree__prog_mutable__declare_nonconstant_get_set_preds_10_p_0(ModuleName_4, MutableName_7, Type_9, Inst_11, AttachToIO_22, Context_15, &_InitSetPredName_28, &GetPredDecl_30, &SetPredDecl_24, &IOPredDecls_25);
      {
        Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (SetPredDecl_24));
        MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (IOPredDecls_25));
      }
      {
        PublicAuxPredDecls_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PublicAuxPredDecls_6, 0) = ((MR_Box) (GetPredDecl_30));
        MR_hl_field(MR_mktag(1), PublicAuxPredDecls_6, 1) = ((MR_Box) (Var_26));
      }
    }
    return PublicAuxPredDecls_6;
  }
}

void MR_CALL 
parse_tree__prog_mutable__implement_mutable_12_p_0(
  MR_Word ModuleParams_13,
  MR_Word ItemMutable_14,
  MR_Word * PredDecls_15,
  MR_Word * ClauseInfos_16,
  MR_Word * ForeignProcs_17,
  MR_Word * FPEInfo_18,
  MR_Word STATE_VARIABLE_ForeignDeclCodes_0_36,
  MR_Word * STATE_VARIABLE_ForeignDeclCodes_37,
  MR_Word STATE_VARIABLE_ForeignBodyCodes_0_38,
  MR_Word * STATE_VARIABLE_ForeignBodyCodes_39,
  MR_Word STATE_VARIABLE_PredTargetNames_0_40,
  MR_Word * STATE_VARIABLE_PredTargetNames_41)
{
  {
    MR_String MutableName_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 0))));
    MR_Word Type_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 2))));
    MR_Word MutAttrs_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 7))));
    MR_Word Context_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_14, (MR_Integer) 8))));
    MR_Word Globals_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleParams_13, (MR_Integer) 0))));
    MR_Word TargetParams_33;
    MR_Word Lang_34;
    MR_String TargetMutableName_35;
    MR_Word CompilationTarget_50;
    MR_Word BoxPolicy_53;

    libs__globals__get_target_2_p_0(Globals_32, &CompilationTarget_50);
    switch (CompilationTarget_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word HighLevelCode_52;

          Lang_34 = (MR_Integer) 0;
          libs__globals__lookup_bool_option_3_p_0(Globals_32, (MR_Integer) 302, &HighLevelCode_52);
          switch (HighLevelCode_52) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              BoxPolicy_53 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              BoxPolicy_53 = (MR_Integer) 0;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          Lang_34 = (MR_Integer) 1;
          BoxPolicy_53 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          Lang_34 = (MR_Integer) 2;
          BoxPolicy_53 = (MR_Integer) 0;
        }
        break;
    }
    {
      TargetParams_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TargetParams_33, 0) = (MR_Box) (((((MR_Unsigned) (Lang_34) << 1)) | (MR_Unsigned) (BoxPolicy_53)));
    }
    parse_tree__prog_mutable__define_mutable_global_var_11_p_0(ModuleParams_13, Lang_34, MutableName_22, Type_24, MutAttrs_29, Context_30, &TargetMutableName_35, STATE_VARIABLE_ForeignDeclCodes_0_36, STATE_VARIABLE_ForeignDeclCodes_37, STATE_VARIABLE_ForeignBodyCodes_0_38, STATE_VARIABLE_ForeignBodyCodes_39);
    parse_tree__prog_mutable__declare_and_define_mutable_aux_preds_10_p_0(ModuleParams_13, TargetParams_33, ItemMutable_14, TargetMutableName_35, PredDecls_15, ClauseInfos_16, ForeignProcs_17, FPEInfo_18, STATE_VARIABLE_PredTargetNames_0_40, STATE_VARIABLE_PredTargetNames_41);
  }
}

static void MR_CALL 
parse_tree__prog_mutable__declare_and_define_mutable_aux_preds_10_p_0(
  MR_Word ModuleParams_11,
  MR_Word TargetParams_12,
  MR_Word ItemMutable_13,
  MR_String TargetMutableName_14,
  MR_Word * PredDecls_15,
  MR_Word * ClauseInfos_16,
  MR_Word * ForeignProcs_17,
  MR_Word * PragmaFPEInfo_18,
  MR_Word STATE_VARIABLE_PredTargetNames_0_68,
  MR_Word * STATE_VARIABLE_PredTargetNames_69)
{
  {
    MR_String MutableName_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 0))));
    MR_Word Type_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 2))));
    MR_Word Inst_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 4))));
    MR_Word MutAttrs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 7))));
    MR_Word Context_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_13, (MR_Integer) 8))));
    MR_Word Lang_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_12, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
    MR_Word BoxPolicy_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_12, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word Attrs0_32;
    MR_Word Attrs_34;
    MR_Word ModuleName_35;
    MR_Word Const_37;
    MR_Word InitSetPredName_38;
    MR_Word GetSetForeignProcs_41;
    MR_Word NonInitPredDecls_42;
    MR_Word GetSetClauseInfos_43;
    MR_Word PreInitForeignProcs_44;
    MR_Word MaybeCallPreInitExpr_45;
    MR_Word LockUnlockForeignProcs_46;
    MR_Word UnsafeGetSetForeignProcs_47;
    MR_Word InitPredDecl_66;
    MR_Word InitClauseInfo_67;
    MR_Word Var_89;
    MR_Word Var_90;

    Attrs0_32 = parse_tree__prog_data_foreign__default_attributes_1_f_0(Lang_30);
    switch (Lang_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Attrs1_33;

          parse_tree__prog_data_foreign__set_box_policy_3_p_0(BoxPolicy_31, Attrs0_32, &Attrs1_33);
          parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, Attrs1_33, &Attrs_34);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        parse_tree__prog_data_foreign__set_may_export_body_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_3[0])), Attrs0_32, &Attrs_34);
        break;
    }
    ModuleName_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleParams_11, (MR_Integer) 1))));
    Const_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MutAttrs_27, (MR_Integer) 1))));
    if ((Const_37 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word GetPredDecl_39;
      MR_Word SetPredDecl_40;
      MR_Word Var_86;

      parse_tree__prog_mutable__declare_constant_get_set_preds_8_p_0(ModuleName_35, MutableName_20, Type_22, Inst_24, Context_28, &InitSetPredName_38, &GetPredDecl_39, &SetPredDecl_40);
      parse_tree__prog_mutable__define_constant_get_set_preds_8_p_0(ModuleName_35, TargetParams_12, MutableName_20, Inst_24, Context_28, TargetMutableName_14, Attrs_34, &GetSetForeignProcs_41);
      {
        Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (SetPredDecl_40));
        MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        NonInitPredDecls_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NonInitPredDecls_42, 0) = ((MR_Box) (GetPredDecl_39));
        MR_hl_field(MR_mktag(1), NonInitPredDecls_42, 1) = ((MR_Box) (Var_86));
      }
      GetSetClauseInfos_43 = (MR_Word) ((MR_Unsigned) 0U);
      PreInitForeignProcs_44 = (MR_Word) ((MR_Unsigned) 0U);
      MaybeCallPreInitExpr_45 = (MR_Word) ((MR_Unsigned) 0U);
      LockUnlockForeignProcs_46 = (MR_Word) ((MR_Unsigned) 0U);
      UnsafeGetSetForeignProcs_47 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word AttachToIO_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_37, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word Local_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_37, (MR_Integer) 1))));
      MR_Word IOPredDecls_50;
      MR_Word PreInit_51;
      MR_Word LockUnlock_52;
      MR_Word PreInitPredDecls_53;
      MR_Word LockUnlockPredDecls_57;
      MR_Word MaybeLockUnlockExprs_58;
      MR_Word UnsafeGetPredDecl_62;
      MR_Word UnsafeSetPredDecl_63;
      MR_Word UnsafeGetExpr_64;
      MR_Word UnsafeSetExpr_65;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word GetPredDecl_91;
      MR_Word SetPredDecl_92;

      parse_tree__prog_mutable__declare_nonconstant_get_set_preds_10_p_0(ModuleName_35, MutableName_20, Type_22, Inst_24, AttachToIO_48, Context_28, &InitSetPredName_38, &GetPredDecl_91, &SetPredDecl_92, &IOPredDecls_50);
      parse_tree__prog_mutable__do_we_need_pre_init_lock_unlock_4_p_0(Lang_30, Local_49, &PreInit_51, &LockUnlock_52);
      switch (PreInit_51) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            PreInitPredDecls_53 = (MR_Word) ((MR_Unsigned) 0U);
            PreInitForeignProcs_44 = (MR_Word) ((MR_Unsigned) 0U);
            MaybeCallPreInitExpr_45 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PreInitPredDecl_54;
            MR_Word CallPreInitExpr_55;
            MR_Word PreInitForeignProc_56;

            parse_tree__prog_mutable__declare_pre_init_pred_4_p_0(ModuleName_35, MutableName_20, Context_28, &PreInitPredDecl_54);
            {
              PreInitPredDecls_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), PreInitPredDecls_53, 0) = ((MR_Box) (PreInitPredDecl_54));
              MR_hl_field(MR_mktag(1), PreInitPredDecls_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            parse_tree__prog_mutable__define_pre_init_pred_9_p_0(ModuleName_35, TargetParams_12, MutableName_20, Local_49, Context_28, TargetMutableName_14, Attrs_34, &CallPreInitExpr_55, &PreInitForeignProc_56);
            {
              PreInitForeignProcs_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), PreInitForeignProcs_44, 0) = ((MR_Box) (PreInitForeignProc_56));
              MR_hl_field(MR_mktag(1), PreInitForeignProcs_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MaybeCallPreInitExpr_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeCallPreInitExpr_45, 0) = ((MR_Box) (CallPreInitExpr_55));
            }
          }
          break;
      }
      switch (LockUnlock_52) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            LockUnlockPredDecls_57 = (MR_Word) ((MR_Unsigned) 0U);
            LockUnlockForeignProcs_46 = (MR_Word) ((MR_Unsigned) 0U);
            MaybeLockUnlockExprs_58 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LockPredDecl_59;
            MR_Word UnlockPredDecl_60;
            MR_Tuple LockUnlockExprs_61;
            MR_Word Var_75;

            parse_tree__prog_mutable__declare_lock_unlock_preds_5_p_0(ModuleName_35, MutableName_20, Context_28, &LockPredDecl_59, &UnlockPredDecl_60);
            parse_tree__prog_mutable__define_lock_unlock_preds_9_p_0(ModuleName_35, TargetParams_12, MutableName_20, Local_49, Context_28, TargetMutableName_14, Attrs_34, &LockUnlockExprs_61, &LockUnlockForeignProcs_46);
            {
              Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (UnlockPredDecl_60));
              MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              LockUnlockPredDecls_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), LockUnlockPredDecls_57, 0) = ((MR_Box) (LockPredDecl_59));
              MR_hl_field(MR_mktag(1), LockUnlockPredDecls_57, 1) = ((MR_Box) (Var_75));
            }
            {
              MaybeLockUnlockExprs_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeLockUnlockExprs_58, 0) = ((MR_Box) (LockUnlockExprs_61));
            }
          }
          break;
      }
      parse_tree__prog_mutable__declare_unsafe_get_set_preds_7_p_0(ModuleName_35, MutableName_20, Type_22, Inst_24, Context_28, &UnsafeGetPredDecl_62, &UnsafeSetPredDecl_63);
      parse_tree__prog_mutable__define_unsafe_get_set_preds_12_p_0(ModuleParams_11, TargetParams_12, MutableName_20, Type_22, Inst_24, Local_49, Context_28, TargetMutableName_14, Attrs_34, &UnsafeGetExpr_64, &UnsafeSetExpr_65, &UnsafeGetSetForeignProcs_47);
      parse_tree__prog_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_102_105_110_101_95_110_111_110_99_111_110_115_116_97_110_116_95_103_101_116_95_115_101_116_95_112_114_101_100_115_95_95_91_50_93_95_48_9_p_0(ModuleName_35, MutableName_20, AttachToIO_48, Context_28, MaybeLockUnlockExprs_58, UnsafeGetExpr_64, UnsafeSetExpr_65, &GetSetClauseInfos_43);
      GetSetForeignProcs_41 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (SetPredDecl_92));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (GetSetForeignProcs_41));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (GetPredDecl_91));
        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (UnsafeSetPredDecl_63));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (GetSetForeignProcs_41));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (UnsafeGetPredDecl_62));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_84));
      }
      Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), LockUnlockPredDecls_57, Var_83);
      Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), PreInitPredDecls_53, Var_82);
      Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), IOPredDecls_50, Var_81);
      NonInitPredDecls_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0), Var_77, Var_80);
    }
    parse_tree__prog_mutable__declare_init_pred_4_p_0(ModuleName_35, MutableName_20, Context_28, &InitPredDecl_66);
    parse_tree__prog_mutable__define_init_pred_9_p_0(ModuleName_35, Lang_30, ItemMutable_13, InitSetPredName_38, MaybeCallPreInitExpr_45, &InitClauseInfo_67, PragmaFPEInfo_18, STATE_VARIABLE_PredTargetNames_0_68, STATE_VARIABLE_PredTargetNames_69);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *PredDecls_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InitPredDecl_66));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NonInitPredDecls_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ClauseInfos_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InitClauseInfo_67));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (GetSetClauseInfos_43));
    }
    Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_mutable_scalar_common_1[0]), GetSetForeignProcs_41, UnsafeGetSetForeignProcs_47);
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_mutable_scalar_common_1[0]), LockUnlockForeignProcs_46, Var_90);
    *ForeignProcs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_mutable_scalar_common_1[0]), PreInitForeignProcs_44, Var_89);
  }
}

static void MR_CALL 
parse_tree__prog_mutable__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_102_105_110_101_95_110_111_110_99_111_110_115_116_97_110_116_95_103_101_116_95_115_101_116_95_112_114_101_100_115_95_95_91_50_93_95_48_9_p_0(
  MR_Word ModuleName_10,
  MR_String MutableName_12,
  MR_Word AttachToIO_13,
  MR_Word Context_14,
  MR_Word MaybeLockUnlockExprs_15,
  MR_Word CallUnsafeGetExpr_16,
  MR_Word CallUnsafeSetExpr_17,
  MR_Word * ClauseInfos_18)
{
  {
    MR_Word X_20;
    MR_Word VarSetOnlyX_21;
    MR_Word StdGetPredName_22;
    MR_Word StdSetPredName_23;
    MR_Word ImpureGetExpr_24;
    MR_Word StdPredArgs_28;
    MR_Word StdGetPredExpr_29;
    MR_Word StdSetPredExpr_30;
    MR_Word StdGetClauseInfo_31;
    MR_Word StdSetClauseInfo_32;
    MR_Word Var_48;
    MR_Word Var_52;
    MR_Word Var_56;
    MR_Word Var_60;
    MR_String Var_94;

    Var_48 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "X", &X_20, Var_48, &VarSetOnlyX_21);
    Var_94 = mercury__string__f_43_43_2_f_0((MR_String) "get_", MutableName_12);
    {
      StdGetPredName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StdGetPredName_22, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(1), StdGetPredName_22, 1) = ((MR_Box) (Var_94));
    }
    StdSetPredName_23 = parse_tree__prog_mutable__mutable_set_pred_name_2_f_0(ModuleName_10, MutableName_12);
    if ((MaybeLockUnlockExprs_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      ImpureGetExpr_24 = CallUnsafeGetExpr_16;
      StdSetPredExpr_30 = CallUnsafeSetExpr_17;
    }
    else
    {
      MR_Word CallLockExpr_26;
      MR_Word CallUnlockExpr_27;
      MR_Tuple Var_49 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeLockUnlockExprs_15, (MR_Integer) 0))));
      MR_Word Var_50;
      MR_Word Var_51;

      CallLockExpr_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 0))));
      CallUnlockExpr_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_49, (MR_Integer) 1))));
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_50, 0) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(2), Var_50, 1) = ((MR_Box) (CallUnsafeGetExpr_16));
        MR_hl_field(MR_mktag(2), Var_50, 2) = ((MR_Box) (CallUnlockExpr_27));
      }
      {
        ImpureGetExpr_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), ImpureGetExpr_24, 0) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(2), ImpureGetExpr_24, 1) = ((MR_Box) (CallLockExpr_26));
        MR_hl_field(MR_mktag(2), ImpureGetExpr_24, 2) = ((MR_Box) (Var_50));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_51, 0) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(2), Var_51, 1) = ((MR_Box) (CallUnsafeSetExpr_17));
        MR_hl_field(MR_mktag(2), Var_51, 2) = ((MR_Box) (CallUnlockExpr_27));
      }
      {
        StdSetPredExpr_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), StdSetPredExpr_30, 0) = ((MR_Box) (Context_14));
        MR_hl_field(MR_mktag(2), StdSetPredExpr_30, 1) = ((MR_Box) (CallLockExpr_26));
        MR_hl_field(MR_mktag(2), StdSetPredExpr_30, 2) = ((MR_Box) (Var_51));
      }
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (X_20));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Context_14));
    }
    {
      StdPredArgs_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), StdPredArgs_28, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), StdPredArgs_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      StdGetPredExpr_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), StdGetPredExpr_29, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(MR_mktag(3), StdGetPredExpr_29, 1) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(3), StdGetPredExpr_29, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), StdGetPredExpr_29, 3) = ((MR_Box) (ImpureGetExpr_24));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (StdGetPredExpr_29));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      StdGetClauseInfo_31 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StdGetClauseInfo_31, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), StdGetClauseInfo_31, 1) = ((MR_Box) (StdGetPredName_22));
      MR_hl_field(MR_mktag(0), StdGetClauseInfo_31, 2) = ((MR_Box) (StdPredArgs_28));
      MR_hl_field(MR_mktag(0), StdGetClauseInfo_31, 3) = ((MR_Box) (VarSetOnlyX_21));
      MR_hl_field(MR_mktag(0), StdGetClauseInfo_31, 4) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), StdGetClauseInfo_31, 5) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), StdGetClauseInfo_31, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (StdSetPredExpr_30));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      StdSetClauseInfo_32 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StdSetClauseInfo_32, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), StdSetClauseInfo_32, 1) = ((MR_Box) (StdSetPredName_23));
      MR_hl_field(MR_mktag(0), StdSetClauseInfo_32, 2) = ((MR_Box) (StdPredArgs_28));
      MR_hl_field(MR_mktag(0), StdSetClauseInfo_32, 3) = ((MR_Box) (VarSetOnlyX_21));
      MR_hl_field(MR_mktag(0), StdSetClauseInfo_32, 4) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), StdSetClauseInfo_32, 5) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), StdSetClauseInfo_32, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    switch (AttachToIO_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word IO0_33;
          MR_Word VarSetXandIOs0_34;
          MR_Word IO_35;
          MR_Word VarSetXandIOs_36;
          MR_Word IOPredArgs_39;
          MR_Word CopyIOExpr_40;
          MR_Word IOGetPredExpr_41;
          MR_Word IOSetPredExpr_42;
          MR_Word PureIOGetPredExpr_43;
          MR_Word PureIOSetPredExpr_44;
          MR_Word IOGetClauseInfo_45;
          MR_Word IOSetClauseInfo_46;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_77;
          MR_Word Var_81;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_86;

          mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO0", &IO0_33, VarSetOnlyX_21, &VarSetXandIOs0_34);
          mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "IO", &IO_35, VarSetXandIOs0_34, &VarSetXandIOs_36);
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (IO0_33));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Context_14));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (IO_35));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Context_14));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
            MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
          }
          {
            IOPredArgs_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), IOPredArgs_39, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(1), IOPredArgs_39, 1) = ((MR_Box) (Var_66));
          }
          {
            CopyIOExpr_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CopyIOExpr_40, 0) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(0), CopyIOExpr_40, 1) = ((MR_Box) (Var_67));
            MR_hl_field(MR_mktag(0), CopyIOExpr_40, 2) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(0), CopyIOExpr_40, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          }
          {
            IOGetPredExpr_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), IOGetPredExpr_41, 0) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(2), IOGetPredExpr_41, 1) = ((MR_Box) (ImpureGetExpr_24));
            MR_hl_field(MR_mktag(2), IOGetPredExpr_41, 2) = ((MR_Box) (CopyIOExpr_40));
          }
          {
            IOSetPredExpr_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), IOSetPredExpr_42, 0) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(2), IOSetPredExpr_42, 1) = ((MR_Box) (StdSetPredExpr_30));
            MR_hl_field(MR_mktag(2), IOSetPredExpr_42, 2) = ((MR_Box) (CopyIOExpr_40));
          }
          {
            PureIOGetPredExpr_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), PureIOGetPredExpr_43, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), PureIOGetPredExpr_43, 1) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(3), PureIOGetPredExpr_43, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), PureIOGetPredExpr_43, 3) = ((MR_Box) (IOGetPredExpr_41));
          }
          {
            PureIOSetPredExpr_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), PureIOSetPredExpr_44, 0) = ((MR_Box) ((MR_Unsigned) 7U));
            MR_hl_field(MR_mktag(3), PureIOSetPredExpr_44, 1) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(3), PureIOSetPredExpr_44, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), PureIOSetPredExpr_44, 3) = ((MR_Box) (IOSetPredExpr_42));
          }
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (PureIOGetPredExpr_43));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            IOGetClauseInfo_45 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IOGetClauseInfo_45, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), IOGetClauseInfo_45, 1) = ((MR_Box) (StdGetPredName_22));
            MR_hl_field(MR_mktag(0), IOGetClauseInfo_45, 2) = ((MR_Box) (IOPredArgs_39));
            MR_hl_field(MR_mktag(0), IOGetClauseInfo_45, 3) = ((MR_Box) (VarSetXandIOs_36));
            MR_hl_field(MR_mktag(0), IOGetClauseInfo_45, 4) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(0), IOGetClauseInfo_45, 5) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(0), IOGetClauseInfo_45, 6) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (PureIOSetPredExpr_44));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            IOSetClauseInfo_46 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), IOSetClauseInfo_46, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), IOSetClauseInfo_46, 1) = ((MR_Box) (StdSetPredName_23));
            MR_hl_field(MR_mktag(0), IOSetClauseInfo_46, 2) = ((MR_Box) (IOPredArgs_39));
            MR_hl_field(MR_mktag(0), IOSetClauseInfo_46, 3) = ((MR_Box) (VarSetXandIOs_36));
            MR_hl_field(MR_mktag(0), IOSetClauseInfo_46, 4) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(0), IOSetClauseInfo_46, 5) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(0), IOSetClauseInfo_46, 6) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (IOSetClauseInfo_46));
            MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (IOGetClauseInfo_45));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_86));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (StdSetClauseInfo_32));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (Var_85));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ClauseInfos_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StdGetClauseInfo_31));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_84));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_88;

          {
            Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (StdSetClauseInfo_32));
            MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ClauseInfos_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StdGetClauseInfo_31));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_88));
          }
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_set_pred_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String MutableName_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

    Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "set_", MutableName_5);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
parse_tree__prog_mutable__define_init_pred_9_p_0(
  MR_Word ModuleName_10,
  MR_Word Lang_11,
  MR_Word ItemMutable_12,
  MR_Word InitSetPredName_13,
  MR_Word MaybeCallPreInitExpr_14,
  MR_Word * InitClauseInfo_15,
  MR_Word * PragmaFPEInfo_16,
  MR_Word STATE_VARIABLE_PredTargetNames_0_44,
  MR_Word * STATE_VARIABLE_PredTargetNames_45)
{
  {
    MR_String MutableName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), ItemMutable_12, (MR_Integer) 0))));
    MR_Word InitTerm_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_12, (MR_Integer) 5))));
    MR_Word VarSetMutable_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_12, (MR_Integer) 6))));
    MR_Word Context_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_12, (MR_Integer) 8))));
    MR_Word SeqNum_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemMutable_12, (MR_Integer) 9))));
    MR_Word X_28;
    MR_Word VarSetMutableX_29;
    MR_Word VarX_30;
    MR_Word UnifyExpr_31;
    MR_Word CallSetExpr_32;
    MR_Word UnifyCallSetExpr_33;
    MR_Word InitPredExpr_34;
    MR_Word InitPredName_36;
    MR_Word Attrs_37;
    MR_Word Origin_38;
    MR_Integer SeqNumInt_40;
    MR_String TargetName_41;
    MR_Word PredNameModesPF_42;
    MR_Word FPEInfo_43;
    MR_Word Var_48;
    MR_Word Var_53;
    MR_Word Var_56;
    MR_String Var_67;

    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "X", &X_28, VarSetMutable_24, &VarSetMutableX_29);
    {
      VarX_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), VarX_30, 0) = ((MR_Box) (X_28));
      MR_hl_field(MR_mktag(1), VarX_30, 1) = ((MR_Box) (Context_26));
    }
    {
      UnifyExpr_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnifyExpr_31, 0) = ((MR_Box) (Context_26));
      MR_hl_field(MR_mktag(0), UnifyExpr_31, 1) = ((MR_Box) (VarX_30));
      MR_hl_field(MR_mktag(0), UnifyExpr_31, 2) = ((MR_Box) (InitTerm_23));
      MR_hl_field(MR_mktag(0), UnifyExpr_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (VarX_30));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      CallSetExpr_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CallSetExpr_32, 0) = ((MR_Box) (Context_26));
      MR_hl_field(MR_mktag(1), CallSetExpr_32, 1) = ((MR_Box) (InitSetPredName_13));
      MR_hl_field(MR_mktag(1), CallSetExpr_32, 2) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), CallSetExpr_32, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
    {
      UnifyCallSetExpr_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), UnifyCallSetExpr_33, 0) = ((MR_Box) (Context_26));
      MR_hl_field(MR_mktag(2), UnifyCallSetExpr_33, 1) = ((MR_Box) (UnifyExpr_31));
      MR_hl_field(MR_mktag(2), UnifyCallSetExpr_33, 2) = ((MR_Box) (CallSetExpr_32));
    }
    if ((MaybeCallPreInitExpr_14 == (MR_Word) ((MR_Unsigned) 0U)))
      InitPredExpr_34 = UnifyCallSetExpr_33;
    else
    {
      MR_Word CallPreInitExpr_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCallPreInitExpr_14, (MR_Integer) 0))));

      {
        InitPredExpr_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), InitPredExpr_34, 0) = ((MR_Box) (Context_26));
        MR_hl_field(MR_mktag(2), InitPredExpr_34, 1) = ((MR_Box) (CallPreInitExpr_35));
        MR_hl_field(MR_mktag(2), InitPredExpr_34, 2) = ((MR_Box) (UnifyCallSetExpr_33));
      }
    }
    Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "initialise_mutable_", MutableName_18);
    {
      InitPredName_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InitPredName_36, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(1), InitPredName_36, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (InitPredExpr_34));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *InitClauseInfo_15 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InitPredName_36));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarSetMutableX_29));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Context_26));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(3), Var_56, 2) = ((MR_Box) (MutableName_18));
      MR_hl_field(MR_mktag(3), Var_56, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 11));
    }
    Attrs_37 = (MR_Word) (Var_56);
    {
      Origin_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Origin_38, 0) = ((MR_Box) (Attrs_37));
    }
    if ((SeqNum_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mutable.define_init_pred\'/9", (MR_String) "item_no_seq_num");
        return;
      }
    else
      SeqNumInt_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), SeqNum_27, (MR_Integer) 0))));
    parse_tree__prog_foreign__new_user_init_pred_7_p_0(ModuleName_10, SeqNumInt_40, InitPredName_36, (MR_Integer) 0, &TargetName_41, STATE_VARIABLE_PredTargetNames_0_44, STATE_VARIABLE_PredTargetNames_45);
    {
      PredNameModesPF_42 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredNameModesPF_42, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), PredNameModesPF_42, 1) = ((MR_Box) (InitPredName_36));
      MR_hl_field(MR_mktag(0), PredNameModesPF_42, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FPEInfo_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FPEInfo_43, 0) = ((MR_Box) (Origin_38));
      MR_hl_field(MR_mktag(0), FPEInfo_43, 1) = (MR_Box) ((MR_Unsigned) (Lang_11));
      MR_hl_field(MR_mktag(0), FPEInfo_43, 2) = ((MR_Box) (PredNameModesPF_42));
      MR_hl_field(MR_mktag(0), FPEInfo_43, 3) = ((MR_Box) (TargetName_41));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *PragmaFPEInfo_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FPEInfo_43));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_26));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mutable__declare_init_pred_4_p_0(
  MR_Word ModuleName_5,
  MR_String MutableName_6,
  MR_Word Context_7,
  MR_Word * InitPredDecl_8)
{
  {
    MR_Word InitPredName_9;
    MR_String Var_15;

    Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "initialise_mutable_", MutableName_6);
    {
      InitPredName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InitPredName_9, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(1), InitPredName_9, 1) = ((MR_Box) (Var_15));
    }
    parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(ModuleName_5, MutableName_6, InitPredName_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, (MR_Integer) 11, Context_7, InitPredDecl_8);
  }
}

static void MR_CALL 
parse_tree__prog_mutable__declare_nonconstant_get_set_preds_10_p_0(
  MR_Word ModuleName_11,
  MR_String MutableName_12,
  MR_Word Type_13,
  MR_Word Inst_14,
  MR_Word AttachToIO_15,
  MR_Word Context_16,
  MR_Word * InitSetPredName_17,
  MR_Word * GetPredDecl_18,
  MR_Word * SetPredDecl_19,
  MR_Word * IOPredDecls_20)
{
  {
    MR_Word GetArg_21;
    MR_Word SetArg_22;
    MR_Word GetPredName_23;
    MR_Word Var_29;
    MR_Word Var_33;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_String Var_55;
    MR_String Var_59;

    Var_49 = parse_tree__prog_mode__out_mode_1_f_0(Inst_14);
    {
      GetArg_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GetArg_21, 0) = ((MR_Box) (Type_13));
      MR_hl_field(MR_mktag(1), GetArg_21, 1) = ((MR_Box) (Var_49));
    }
    Var_52 = parse_tree__prog_mode__in_mode_1_f_0(Inst_14);
    {
      SetArg_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SetArg_22, 0) = ((MR_Box) (Type_13));
      MR_hl_field(MR_mktag(1), SetArg_22, 1) = ((MR_Box) (Var_52));
    }
    Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "get_", MutableName_12);
    {
      GetPredName_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GetPredName_23, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(1), GetPredName_23, 1) = ((MR_Box) (Var_55));
    }
    Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "set_", MutableName_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *InitSetPredName_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (GetArg_21));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(ModuleName_11, MutableName_12, GetPredName_23, Var_29, (MR_Integer) 1, (MR_Integer) 0, Context_16, GetPredDecl_18);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (SetArg_22));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(ModuleName_11, MutableName_12, *InitSetPredName_17, Var_33, (MR_Integer) 2, (MR_Integer) 1, Context_16, SetPredDecl_19);
    switch (AttachToIO_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word IOGetPredName_25;
          MR_Word IOSetPredName_26;
          MR_Word IOGetPredDecl_27;
          MR_Word IOSetPredDecl_28;
          MR_Word Var_37;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_String Var_63;
          MR_String Var_67;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;

          Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "get_", MutableName_12);
          {
            IOGetPredName_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), IOGetPredName_25, 0) = ((MR_Box) (ModuleName_11));
            MR_hl_field(MR_mktag(1), IOGetPredName_25, 1) = ((MR_Box) (Var_63));
          }
          Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "set_", MutableName_12);
          {
            IOSetPredName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), IOSetPredName_26, 0) = ((MR_Box) (ModuleName_11));
            MR_hl_field(MR_mktag(1), IOSetPredName_26, 1) = ((MR_Box) (Var_67));
          }
          Var_70 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          Var_71 = parse_tree__prog_mode__di_mode_0_f_0();
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
          }
          Var_74 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          Var_75 = parse_tree__prog_mode__uo_mode_0_f_0();
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
          }
          {
            Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_69));
            MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_72));
          }
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (GetArg_21));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
          }
          parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(ModuleName_11, MutableName_12, IOGetPredName_25, Var_37, (MR_Integer) 0, (MR_Integer) 2, Context_16, &IOGetPredDecl_27);
          Var_78 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          Var_79 = parse_tree__prog_mode__di_mode_0_f_0();
          {
            Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
            MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_79));
          }
          Var_82 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
          Var_83 = parse_tree__prog_mode__uo_mode_0_f_0();
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_83));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_77));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_80));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (SetArg_22));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
          }
          parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(ModuleName_11, MutableName_12, IOSetPredName_26, Var_41, (MR_Integer) 0, (MR_Integer) 3, Context_16, &IOSetPredDecl_28);
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (IOSetPredDecl_28));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *IOPredDecls_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOGetPredDecl_27));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_45));
          }
        }
        break;
      case (MR_Integer) 0:
        *IOPredDecls_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_mutable__define_constant_get_set_preds_8_p_0(
  MR_Word ModuleName_9,
  MR_Word TargetParams_10,
  MR_String MutableName_11,
  MR_Word Inst_12,
  MR_Word Context_13,
  MR_String TargetMutableName_14,
  MR_Word Attrs_15,
  MR_Word * ForeignProcs_16)
{
  {
    MR_Word BoxPolicy_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_10, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word X_19;
    MR_Word VarSetOnlyX_20;
    MR_Word ConstantGetPredName_21;
    MR_Word ConstantSetPredName_22;
    MR_Word ConstantGetAttrs0_23;
    MR_Word ConstantGetAttrs_24;
    MR_String ConstantGetCode_26;
    MR_String ConstantSetCode_27;
    MR_Word ConstantGetFCInfo_28;
    MR_Word ConstantSetFCInfo_29;
    MR_Word ConstantGetForeignProc_30;
    MR_Word ConstantSetForeignProc_31;
    MR_Word Var_33;
    MR_String Var_37;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_60;
    MR_String Var_68;
    MR_String Var_72;

    Var_33 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "X", &X_19, Var_33, &VarSetOnlyX_20);
    Var_68 = mercury__string__f_43_43_2_f_0((MR_String) "get_", MutableName_11);
    {
      ConstantGetPredName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ConstantGetPredName_21, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(1), ConstantGetPredName_21, 1) = ((MR_Box) (Var_68));
    }
    Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "secret_initialization_only_set_", MutableName_11);
    {
      ConstantSetPredName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ConstantSetPredName_22, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(1), ConstantSetPredName_22, 1) = ((MR_Box) (Var_72));
    }
    parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, Attrs_15, &ConstantGetAttrs0_23);
    parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, ConstantGetAttrs0_23, &ConstantGetAttrs_24);
    Var_37 = mercury__string__f_43_43_2_f_0(TargetMutableName_14, (MR_String) ";\n");
    ConstantGetCode_26 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", Var_37);
    ConstantSetCode_27 = mercury__string__f_43_43_2_f_0(TargetMutableName_14, (MR_String) " = X;\n");
    Var_44 = parse_tree__prog_mode__out_mode_1_f_0(Inst_12);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (X_19));
      MR_hl_field(MR_mktag(0), Var_42, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), Var_42, 2) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_42, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_18));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_46 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Context_13));
    }
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (ConstantGetCode_26));
      MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (Var_48));
    }
    {
      ConstantGetFCInfo_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConstantGetFCInfo_28, 0) = ((MR_Box) (ConstantGetAttrs_24));
      MR_hl_field(MR_mktag(0), ConstantGetFCInfo_28, 1) = ((MR_Box) (ConstantGetPredName_21));
      MR_hl_field(MR_mktag(0), ConstantGetFCInfo_28, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ConstantGetFCInfo_28, 3) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), ConstantGetFCInfo_28, 4) = ((MR_Box) (VarSetOnlyX_20));
      MR_hl_field(MR_mktag(0), ConstantGetFCInfo_28, 5) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(0), ConstantGetFCInfo_28, 6) = ((MR_Box) (Var_47));
    }
    Var_53 = parse_tree__prog_mode__in_mode_1_f_0(Inst_12);
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (X_19));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(0), Var_51, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_18));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_55 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (ConstantSetCode_27));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Var_48));
    }
    {
      ConstantSetFCInfo_29 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConstantSetFCInfo_29, 0) = ((MR_Box) (Attrs_15));
      MR_hl_field(MR_mktag(0), ConstantSetFCInfo_29, 1) = ((MR_Box) (ConstantSetPredName_22));
      MR_hl_field(MR_mktag(0), ConstantSetFCInfo_29, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ConstantSetFCInfo_29, 3) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(0), ConstantSetFCInfo_29, 4) = ((MR_Box) (VarSetOnlyX_20));
      MR_hl_field(MR_mktag(0), ConstantSetFCInfo_29, 5) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), ConstantSetFCInfo_29, 6) = ((MR_Box) (Var_56));
    }
    {
      ConstantGetForeignProc_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConstantGetForeignProc_30, 0) = ((MR_Box) (ConstantGetFCInfo_28));
      MR_hl_field(MR_mktag(0), ConstantGetForeignProc_30, 1) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), ConstantGetForeignProc_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ConstantSetForeignProc_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ConstantSetForeignProc_31, 0) = ((MR_Box) (ConstantSetFCInfo_29));
      MR_hl_field(MR_mktag(0), ConstantSetForeignProc_31, 1) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), ConstantSetForeignProc_31, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (ConstantSetForeignProc_31));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ForeignProcs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConstantGetForeignProc_30));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_60));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mutable__declare_constant_get_set_preds_8_p_0(
  MR_Word ModuleName_9,
  MR_String MutableName_10,
  MR_Word Type_11,
  MR_Word Inst_12,
  MR_Word Context_13,
  MR_Word * InitSetPredName_14,
  MR_Word * GetPredDecl_15,
  MR_Word * SetPredDecl_16)
{
  {
    MR_Word GetArg_17;
    MR_Word SetArg_18;
    MR_Word GetPredName_19;
    MR_Word Var_21;
    MR_Word Var_25;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_String Var_37;
    MR_String Var_41;

    Var_31 = parse_tree__prog_mode__out_mode_1_f_0(Inst_12);
    {
      GetArg_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GetArg_17, 0) = ((MR_Box) (Type_11));
      MR_hl_field(MR_mktag(1), GetArg_17, 1) = ((MR_Box) (Var_31));
    }
    Var_34 = parse_tree__prog_mode__in_mode_1_f_0(Inst_12);
    {
      SetArg_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SetArg_18, 0) = ((MR_Box) (Type_11));
      MR_hl_field(MR_mktag(1), SetArg_18, 1) = ((MR_Box) (Var_34));
    }
    Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "get_", MutableName_10);
    {
      GetPredName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GetPredName_19, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(1), GetPredName_19, 1) = ((MR_Box) (Var_37));
    }
    Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "secret_initialization_only_set_", MutableName_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *InitSetPredName_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (GetArg_17));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(ModuleName_9, MutableName_10, GetPredName_19, Var_21, (MR_Integer) 0, (MR_Integer) 4, Context_13, GetPredDecl_15);
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (SetArg_18));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(ModuleName_9, MutableName_10, *InitSetPredName_14, Var_25, (MR_Integer) 2, (MR_Integer) 5, Context_13, SetPredDecl_16);
  }
}

static void MR_CALL 
parse_tree__prog_mutable__define_unsafe_get_set_preds_12_p_0(
  MR_Word ModuleParams_13,
  MR_Word TargetParams_14,
  MR_String MutableName_15,
  MR_Word Type_16,
  MR_Word Inst_17,
  MR_Word Local_18,
  MR_Word Context_19,
  MR_String TargetMutableName_20,
  MR_Word Attrs_21,
  MR_Word * UnsafeGetExpr_22,
  MR_Word * UnsafeSetExpr_23,
  MR_Word * ForeignProcs_24)
{
  {
    MR_bool succeeded;
    MR_Word ModuleName_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleParams_13, (MR_Integer) 1))));
    MR_Word Lang_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
    MR_Word BoxPolicy_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_14, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word X_28;
    MR_Word VarSetOnlyX_29;
    MR_Word UnsafeGetAttrs_31;
    MR_Word UnsafeSetAttrs_32;
    MR_String TrailCode_34;
    MR_String UnsafeGetCode_36;
    MR_String UnsafeSetCode_37;
    MR_Word UnsafeGetPredName_40;
    MR_Word UnsafeSetPredName_41;
    MR_Word UnsafeGetFCInfo_42;
    MR_Word UnsafeSetFCInfo_43;
    MR_Word UnsafeGetForeignProc_44;
    MR_Word UnsafeSetForeignProc_45;
    MR_Word Var_47;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_100;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_109;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_String Var_113;
    MR_Word Var_117;
    MR_Word Var_119;
    MR_Word Var_120;

    Var_47 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "X", &X_28, Var_47, &VarSetOnlyX_29);
    parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attrs_21, &UnsafeSetAttrs_32);
    parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 1, UnsafeSetAttrs_32, &UnsafeGetAttrs_31);
    switch (Lang_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Trailed_33;

          Trailed_33 = parse_tree__prog_item__mutable_thread_local_trailed_1_f_0(Local_18);
          switch (Trailed_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_String Var_78;

                Var_78 = mercury__string__f_43_43_2_f_0(TargetMutableName_20, (MR_String) ");\n");
                TrailCode_34 = mercury__string__f_43_43_2_f_0((MR_String) "MR_trail_current_value(&", Var_78);
              }
              break;
            case (MR_Integer) 0:
              TrailCode_34 = (MR_String) "";
              break;
          }
          if ((Local_18 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String TypeName_38;
            MR_String Var_81;
            MR_String Var_82;
            MR_String Var_84;
            MR_String Var_87;
            MR_String Var_88;
            MR_String Var_90;

            TypeName_38 = parse_tree__prog_mutable__global_foreign_type_name_4_f_0(ModuleParams_13, BoxPolicy_27, Lang_26, Type_16);
            Var_84 = mercury__string__f_43_43_2_f_0(TargetMutableName_20, (MR_String) ");\n");
            Var_82 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", Var_84);
            Var_81 = mercury__string__f_43_43_2_f_0(TypeName_38, Var_82);
            UnsafeGetCode_36 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_thread_local_mutable(", Var_81);
            Var_90 = mercury__string__f_43_43_2_f_0(TargetMutableName_20, (MR_String) ");\n");
            Var_88 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", Var_90);
            Var_87 = mercury__string__f_43_43_2_f_0(TypeName_38, Var_88);
            UnsafeSetCode_37 = mercury__string__f_43_43_2_f_0((MR_String) "MR_set_thread_local_mutable(", Var_87);
          }
          else
          {
            MR_String Var_93;

            Var_93 = mercury__string__f_43_43_2_f_0(TargetMutableName_20, (MR_String) ";\n");
            UnsafeGetCode_36 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", Var_93);
            UnsafeSetCode_37 = mercury__string__f_43_43_2_f_0(TargetMutableName_20, (MR_String) " = X;\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          TrailCode_34 = (MR_String) "";
          if ((Local_18 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Cast_39;
            MR_String Var_63;
            MR_String Var_64;
            MR_String Var_66;
            MR_String Var_69;
            MR_Word Var_141;

            Var_141 = parse_tree__builtin_lib_types__int_type_0_f_0();
            succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_16, Var_141);
            if (succeeded)
              Cast_39 = (MR_String) "(int) ";
            else
              Cast_39 = (MR_String) "";
            Var_66 = mercury__string__f_43_43_2_f_0(TargetMutableName_20, (MR_String) ");\n");
            Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "runtime.ThreadLocalMutables.get(", Var_66);
            Var_63 = mercury__string__f_43_43_2_f_0(Cast_39, Var_64);
            UnsafeGetCode_36 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", Var_63);
            Var_69 = mercury__string__f_43_43_2_f_0(TargetMutableName_20, (MR_String) ", X);\n");
            UnsafeSetCode_37 = mercury__string__f_43_43_2_f_0((MR_String) "\truntime.ThreadLocalMutables.set(", Var_69);
          }
          else
          {
            MR_String Var_72;
            MR_String Var_75;

            Var_72 = mercury__string__f_43_43_2_f_0(TargetMutableName_20, (MR_String) ";\n");
            UnsafeGetCode_36 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", Var_72);
            Var_75 = mercury__string__f_43_43_2_f_0(TargetMutableName_20, (MR_String) " = X;\n");
            UnsafeSetCode_37 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_75);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          TrailCode_34 = (MR_String) "";
          if ((Local_18 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_String Var_51;
            MR_String Var_54;

            Var_51 = mercury__string__f_43_43_2_f_0(TargetMutableName_20, (MR_String) ".get();\n");
            UnsafeGetCode_36 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", Var_51);
            Var_54 = mercury__string__f_43_43_2_f_0(TargetMutableName_20, (MR_String) ".set(X);\n");
            UnsafeSetCode_37 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_54);
          }
          else
          {
            MR_String Var_57;
            MR_String Var_60;

            Var_57 = mercury__string__f_43_43_2_f_0(TargetMutableName_20, (MR_String) ";\n");
            UnsafeGetCode_36 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", Var_57);
            Var_60 = mercury__string__f_43_43_2_f_0(TargetMutableName_20, (MR_String) " = X;\n");
            UnsafeSetCode_37 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_60);
          }
        }
        break;
    }
    UnsafeGetPredName_40 = parse_tree__prog_mutable__mutable_unsafe_get_pred_name_2_f_0(ModuleName_25, MutableName_15);
    UnsafeSetPredName_41 = parse_tree__prog_mutable__mutable_unsafe_set_pred_name_2_f_0(ModuleName_25, MutableName_15);
    Var_100 = parse_tree__prog_mode__out_mode_1_f_0(Inst_17);
    {
      Var_98 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_98, 0) = ((MR_Box) (X_28));
      MR_hl_field(MR_mktag(0), Var_98, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), Var_98, 2) = ((MR_Box) (Var_100));
      MR_hl_field(MR_mktag(0), Var_98, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_27));
    }
    {
      Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (Var_98));
      MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_102 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    {
      Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Context_19));
    }
    {
      Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (UnsafeGetCode_36));
      MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (Var_104));
    }
    {
      UnsafeGetFCInfo_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_42, 0) = ((MR_Box) (UnsafeGetAttrs_31));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_42, 1) = ((MR_Box) (UnsafeGetPredName_40));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_42, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_42, 3) = ((MR_Box) (Var_97));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_42, 4) = ((MR_Box) (VarSetOnlyX_29));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_42, 5) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(0), UnsafeGetFCInfo_42, 6) = ((MR_Box) (Var_103));
    }
    Var_109 = parse_tree__prog_mode__in_mode_1_f_0(Inst_17);
    {
      Var_107 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (X_28));
      MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) ((MR_String) "X"));
      MR_hl_field(MR_mktag(0), Var_107, 2) = ((MR_Box) (Var_109));
      MR_hl_field(MR_mktag(0), Var_107, 3) = (MR_Box) ((MR_Unsigned) (BoxPolicy_27));
    }
    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_111 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    Var_113 = mercury__string__f_43_43_2_f_0(TrailCode_34, UnsafeSetCode_37);
    {
      Var_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_112, 0) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(0), Var_112, 1) = ((MR_Box) (Var_104));
    }
    {
      UnsafeSetFCInfo_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_43, 0) = ((MR_Box) (UnsafeSetAttrs_32));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_43, 1) = ((MR_Box) (UnsafeSetPredName_41));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_43, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_43, 3) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_43, 4) = ((MR_Box) (VarSetOnlyX_29));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_43, 5) = ((MR_Box) (Var_111));
      MR_hl_field(MR_mktag(0), UnsafeSetFCInfo_43, 6) = ((MR_Box) (Var_112));
    }
    {
      UnsafeGetForeignProc_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnsafeGetForeignProc_44, 0) = ((MR_Box) (UnsafeGetFCInfo_42));
      MR_hl_field(MR_mktag(0), UnsafeGetForeignProc_44, 1) = ((MR_Box) (Context_19));
      MR_hl_field(MR_mktag(0), UnsafeGetForeignProc_44, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      UnsafeSetForeignProc_45 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnsafeSetForeignProc_45, 0) = ((MR_Box) (UnsafeSetFCInfo_43));
      MR_hl_field(MR_mktag(0), UnsafeSetForeignProc_45, 1) = ((MR_Box) (Context_19));
      MR_hl_field(MR_mktag(0), UnsafeSetForeignProc_45, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (UnsafeSetForeignProc_45));
      MR_hl_field(MR_mktag(1), Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *ForeignProcs_24 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UnsafeGetForeignProc_44));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_117));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (X_28));
      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Context_19));
    }
    {
      Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Var_120));
      MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *UnsafeGetExpr_22 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Context_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnsafeGetPredName_40));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(1), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *UnsafeSetExpr_23 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Context_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnsafeSetPredName_41));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(1), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unsafe_set_pred_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String MutableName_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

    Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "unsafe_set_", MutableName_5);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
parse_tree__prog_mutable__mutable_unsafe_get_pred_name_2_f_0(
  MR_Word ModuleName_4,
  MR_String MutableName_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_String Var_6;

    Var_6 = mercury__string__f_43_43_2_f_0((MR_String) "unsafe_get_", MutableName_5);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (ModuleName_4));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_6));
    }
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
parse_tree__prog_mutable__global_foreign_type_name_4_f_0(
  MR_Word ModuleParams_6,
  MR_Word BoxPolicy_7,
  MR_Word Lang_8,
  MR_Word Type_9)
{
  {
    MR_String String_10;

    switch (BoxPolicy_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        String_10 = (MR_String) "MR_Word";
        break;
      case (MR_Integer) 0:
        {
          MR_Word TypeNameFunc_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleParams_6, (MR_Integer) 2))));
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), TypeNameFunc_11, (MR_Integer) 1))));
          MR_Box conv1_String_10;

          conv1_String_10 = func_0(((MR_Box) (TypeNameFunc_11)), ((MR_Box) (Lang_8)), ((MR_Box) (Type_9)));
          String_10 = ((MR_String) (conv1_String_10));
        }
        break;
    }
    return String_10;
  }
}

static void MR_CALL 
parse_tree__prog_mutable__declare_unsafe_get_set_preds_7_p_0(
  MR_Word ModuleName_8,
  MR_String MutableName_9,
  MR_Word Type_10,
  MR_Word Inst_11,
  MR_Word Context_12,
  MR_Word * UnsafeGetPredDecl_13,
  MR_Word * UnsafeSetPredDecl_14)
{
  {
    MR_Word GetArg_15;
    MR_Word SetArg_16;
    MR_Word UnsafeGetPredName_17;
    MR_Word UnsafeSetPredName_18;
    MR_Word Var_19;
    MR_Word Var_23;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_String Var_35;
    MR_String Var_39;

    Var_29 = parse_tree__prog_mode__out_mode_1_f_0(Inst_11);
    {
      GetArg_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GetArg_15, 0) = ((MR_Box) (Type_10));
      MR_hl_field(MR_mktag(1), GetArg_15, 1) = ((MR_Box) (Var_29));
    }
    Var_32 = parse_tree__prog_mode__in_mode_1_f_0(Inst_11);
    {
      SetArg_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SetArg_16, 0) = ((MR_Box) (Type_10));
      MR_hl_field(MR_mktag(1), SetArg_16, 1) = ((MR_Box) (Var_32));
    }
    Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "unsafe_get_", MutableName_9);
    {
      UnsafeGetPredName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), UnsafeGetPredName_17, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(1), UnsafeGetPredName_17, 1) = ((MR_Box) (Var_35));
    }
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "unsafe_set_", MutableName_9);
    {
      UnsafeSetPredName_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), UnsafeSetPredName_18, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(1), UnsafeSetPredName_18, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (GetArg_15));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(ModuleName_8, MutableName_9, UnsafeGetPredName_17, Var_19, (MR_Integer) 1, (MR_Integer) 0, Context_12, UnsafeGetPredDecl_13);
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (SetArg_16));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(ModuleName_8, MutableName_9, UnsafeSetPredName_18, Var_23, (MR_Integer) 2, (MR_Integer) 1, Context_12, UnsafeSetPredDecl_14);
  }
}

static void MR_CALL 
parse_tree__prog_mutable__define_lock_unlock_preds_9_p_0(
  MR_Word ModuleName_10,
  MR_Word TargetParams_11,
  MR_String MutableName_12,
  MR_Word Local_13,
  MR_Word Context_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Tuple * LockUnlockExprs_17,
  MR_Word * ForeignProcs_18)
{
  {
    MR_Word Lang_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_11, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

    switch (Lang_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LockAndUnlockAttrs_20;
          MR_String MutableMutexVarName_21;
          MR_String LockForeignProcBody_23;
          MR_String UnlockForeignProcBody_24;
          MR_Word LockPredName_25;
          MR_Word UnlockPredName_26;
          MR_Word LockFCInfo_27;
          MR_Word UnlockFCInfo_28;
          MR_Word LockForeignProc_29;
          MR_Word UnlockForeignProc_30;
          MR_Word CallLockExpr0_31;
          MR_Word CallUnlockExpr0_32;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_72;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_78;
          MR_String Var_92;
          MR_String Var_96;

          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attrs_16, &LockAndUnlockAttrs_20);
          MutableMutexVarName_21 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) "_lock");
          if ((Local_13 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            LockForeignProcBody_23 = (MR_String) "";
            UnlockForeignProcBody_24 = (MR_String) "";
          }
          else
          {
            MR_Word Var_38;
            MR_Word Var_40;
            MR_String Var_41;
            MR_String Var_43;
            MR_String Var_44;
            MR_String Var_46;
            MR_String Var_47;
            MR_Word Var_51;
            MR_Word Var_53;
            MR_String Var_54;
            MR_String Var_56;
            MR_String Var_57;
            MR_String Var_59;
            MR_String Var_60;

            Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "\");\n", (MR_String) "#endif\n");
            Var_46 = mercury__string__f_43_43_2_f_0(MutableMutexVarName_21, Var_47);
            Var_44 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", Var_46);
            Var_43 = mercury__string__f_43_43_2_f_0(MutableMutexVarName_21, Var_44);
            Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_LOCK(&", Var_43);
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
              MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
            }
            LockForeignProcBody_23 = mercury__string__append_list_1_f_0(Var_38);
            Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "\");\n", (MR_String) "#endif\n");
            Var_59 = mercury__string__f_43_43_2_f_0(MutableMutexVarName_21, Var_60);
            Var_57 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                    \"", Var_59);
            Var_56 = mercury__string__f_43_43_2_f_0(MutableMutexVarName_21, Var_57);
            Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_UNLOCK(&", Var_56);
            {
              Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
              MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
              MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
            }
            UnlockForeignProcBody_24 = mercury__string__append_list_1_f_0(Var_51);
          }
          Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "lock_", MutableName_12);
          {
            LockPredName_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), LockPredName_25, 0) = ((MR_Box) (ModuleName_10));
            MR_hl_field(MR_mktag(1), LockPredName_25, 1) = ((MR_Box) (Var_92));
          }
          Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "unlock_", MutableName_12);
          {
            UnlockPredName_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), UnlockPredName_26, 0) = ((MR_Box) (ModuleName_10));
            MR_hl_field(MR_mktag(1), UnlockPredName_26, 1) = ((MR_Box) (Var_96));
          }
          Var_66 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          Var_67 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Context_14));
          }
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (LockForeignProcBody_23));
            MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (Var_69));
          }
          {
            LockFCInfo_27 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LockFCInfo_27, 0) = ((MR_Box) (LockAndUnlockAttrs_20));
            MR_hl_field(MR_mktag(0), LockFCInfo_27, 1) = ((MR_Box) (LockPredName_25));
            MR_hl_field(MR_mktag(0), LockFCInfo_27, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), LockFCInfo_27, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), LockFCInfo_27, 4) = ((MR_Box) (Var_66));
            MR_hl_field(MR_mktag(0), LockFCInfo_27, 5) = ((MR_Box) (Var_67));
            MR_hl_field(MR_mktag(0), LockFCInfo_27, 6) = ((MR_Box) (Var_68));
          }
          Var_72 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          Var_73 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (UnlockForeignProcBody_24));
            MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (Var_69));
          }
          {
            UnlockFCInfo_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), UnlockFCInfo_28, 0) = ((MR_Box) (LockAndUnlockAttrs_20));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_28, 1) = ((MR_Box) (UnlockPredName_26));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_28, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_28, 3) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_28, 4) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_28, 5) = ((MR_Box) (Var_73));
            MR_hl_field(MR_mktag(0), UnlockFCInfo_28, 6) = ((MR_Box) (Var_74));
          }
          {
            LockForeignProc_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), LockForeignProc_29, 0) = ((MR_Box) (LockFCInfo_27));
            MR_hl_field(MR_mktag(0), LockForeignProc_29, 1) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(0), LockForeignProc_29, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            UnlockForeignProc_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), UnlockForeignProc_30, 0) = ((MR_Box) (UnlockFCInfo_28));
            MR_hl_field(MR_mktag(0), UnlockForeignProc_30, 1) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(0), UnlockForeignProc_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (UnlockForeignProc_30));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *ForeignProcs_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LockForeignProc_29));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_78));
          }
          {
            CallLockExpr0_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CallLockExpr0_31, 0) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(1), CallLockExpr0_31, 1) = ((MR_Box) (LockPredName_25));
            MR_hl_field(MR_mktag(1), CallLockExpr0_31, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), CallLockExpr0_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          }
          {
            CallUnlockExpr0_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CallUnlockExpr0_32, 0) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(1), CallUnlockExpr0_32, 1) = ((MR_Box) (UnlockPredName_26));
            MR_hl_field(MR_mktag(1), CallUnlockExpr0_32, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), CallUnlockExpr0_32, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
          }
          {
            MR_Tuple base;
            base = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            *LockUnlockExprs_17 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CallLockExpr0_31));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (CallUnlockExpr0_32));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mutable.define_lock_unlock_preds\'/9", (MR_String) "lock_unlock for csharp");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mutable.define_lock_unlock_preds\'/9", (MR_String) "lock_unlock for java");
          return;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__prog_mutable__declare_lock_unlock_preds_5_p_0(
  MR_Word ModuleName_6,
  MR_String MutableName_7,
  MR_Word Context_8,
  MR_Word * LockPredDecl_9,
  MR_Word * UnlockPredDecl_10)
{
  {
    MR_Word LockPredName_11;
    MR_Word UnlockPredName_12;
    MR_String Var_21;
    MR_String Var_25;

    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "lock_", MutableName_7);
    {
      LockPredName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LockPredName_11, 0) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(1), LockPredName_11, 1) = ((MR_Box) (Var_21));
    }
    Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "unlock_", MutableName_7);
    {
      UnlockPredName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), UnlockPredName_12, 0) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(1), UnlockPredName_12, 1) = ((MR_Box) (Var_25));
    }
    parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(ModuleName_6, MutableName_7, LockPredName_11, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, (MR_Integer) 8, Context_8, LockPredDecl_9);
    parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(ModuleName_6, MutableName_7, UnlockPredName_12, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, (MR_Integer) 9, Context_8, UnlockPredDecl_10);
  }
}

static void MR_CALL 
parse_tree__prog_mutable__define_pre_init_pred_9_p_0(
  MR_Word ModuleName_10,
  MR_Word TargetParams_11,
  MR_String MutableName_12,
  MR_Word Local_13,
  MR_Word Context_14,
  MR_String TargetMutableName_15,
  MR_Word Attrs_16,
  MR_Word * CallPreInitExpr_17,
  MR_Word * ForeignProc_18)
{
  {
    MR_Word Lang_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TargetParams_11, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
    MR_Word PreInitPredName_20;
    MR_String PreInitCode_22;
    MR_Word PreInitFCInfo_23;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_String Var_53;

    Var_53 = mercury__string__f_43_43_2_f_0((MR_String) "pre_initialise_mutable_", MutableName_12);
    {
      PreInitPredName_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PreInitPredName_20, 0) = ((MR_Box) (ModuleName_10));
      MR_hl_field(MR_mktag(1), PreInitPredName_20, 1) = ((MR_Box) (Var_53));
    }
    switch (Lang_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        if ((Local_13 == (MR_Word) ((MR_Unsigned) 0U)))
          PreInitCode_22 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) " = MR_new_thread_local_mutable_index();\n");
        else
        {
          MR_Word Var_28;
          MR_Word Var_30;
          MR_Word Var_32;
          MR_String Var_33;

          Var_33 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) "_lock");
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
            MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[4])));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) ((MR_String) "   pthread_mutex_init(&"));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
          }
          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
          }
          PreInitCode_22 = mercury__string__append_list_1_f_0(Var_28);
        }
        break;
      case (MR_Integer) 1:
        PreInitCode_22 = mercury__string__f_43_43_2_f_0(TargetMutableName_15, (MR_String) " = runtime.ThreadLocalMutables.new_index();\n");
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_mutable.define_pre_init_pred\'/9", (MR_String) "preinit for java");
          return;
        }
        break;
    }
    Var_41 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_42 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Context_14));
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (PreInitCode_22));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (Var_44));
    }
    {
      PreInitFCInfo_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PreInitFCInfo_23, 0) = ((MR_Box) (Attrs_16));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_23, 1) = ((MR_Box) (PreInitPredName_20));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_23, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_23, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_23, 4) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_23, 5) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), PreInitFCInfo_23, 6) = ((MR_Box) (Var_43));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *ForeignProc_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PreInitFCInfo_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      *CallPreInitExpr_17 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PreInitPredName_20));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mutable__declare_pre_init_pred_4_p_0(
  MR_Word ModuleName_5,
  MR_String MutableName_6,
  MR_Word Context_7,
  MR_Word * PreInitPredDecl_8)
{
  {
    MR_Word PreInitPredName_9;
    MR_String Var_15;

    Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "pre_initialise_mutable_", MutableName_6);
    {
      PreInitPredName_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PreInitPredName_9, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(1), PreInitPredName_9, 1) = ((MR_Box) (Var_15));
    }
    parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(ModuleName_5, MutableName_6, PreInitPredName_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 2, (MR_Integer) 10, Context_7, PreInitPredDecl_8);
  }
}

static void MR_CALL 
parse_tree__prog_mutable__make_aux_pred_decl_8_p_0(
  MR_Word ModuleName_9,
  MR_String MutableName_10,
  MR_Word PredSymName_11,
  MR_Word ArgTypesAndModes_12,
  MR_Word Purity_13,
  MR_Word Kind_14,
  MR_Word Context_15,
  MR_Word * PredDecl_16)
{
  {
    MR_Word Origin_19;
    MR_Word CompilerAttrs_20;
    MR_Word MaybeAttrs_21;
    MR_Word TypeVarSet_22;
    MR_Word InstVarSet_23;

    {
      Origin_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Origin_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Origin_19, 1) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(3), Origin_19, 2) = ((MR_Box) (MutableName_10));
      MR_hl_field(MR_mktag(3), Origin_19, 3) = (MR_Box) ((MR_Unsigned) (Kind_14));
    }
    CompilerAttrs_20 = (MR_Word) (Origin_19);
    {
      MaybeAttrs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeAttrs_21, 0) = ((MR_Box) (CompilerAttrs_20));
    }
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TypeVarSet_22);
    mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), &InstVarSet_23);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      *PredDecl_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredSymName_11));
      MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ArgTypesAndModes_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_3[1])));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MaybeAttrs_21));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (TypeVarSet_22));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (InstVarSet_23));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 10) = (MR_Box) ((MR_Unsigned) (Purity_13));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (&parse_tree__prog_mutable_scalar_common_1[5]));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Context_15));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mutable__do_we_need_pre_init_lock_unlock_4_p_0(
  MR_Word Lang_5,
  MR_Word Local_6,
  MR_Word * PreInit_7,
  MR_Word * LockUnlock_8)
{
  switch (Lang_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *PreInit_7 = (MR_Integer) 1;
        *LockUnlock_8 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 1:
      {
        if ((Local_6 == (MR_Word) ((MR_Unsigned) 0U)))
          *PreInit_7 = (MR_Integer) 1;
        else
          *PreInit_7 = (MR_Integer) 0;
        *LockUnlock_8 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
      {
        *PreInit_7 = (MR_Integer) 0;
        *LockUnlock_8 = (MR_Integer) 0;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__prog_mutable__define_mutable_global_var_11_p_0(
  MR_Word ModuleParams_12,
  MR_Word Lang_13,
  MR_String MutableName_14,
  MR_Word Type_15,
  MR_Word MutAttrs_16,
  MR_Word Context_17,
  MR_String * TargetMutableName_18,
  MR_Word STATE_VARIABLE_ForeignDeclCodes_0_26,
  MR_Word * STATE_VARIABLE_ForeignDeclCodes_27,
  MR_Word STATE_VARIABLE_ForeignBodyCodes_0_28,
  MR_Word * STATE_VARIABLE_ForeignBodyCodes_29)
{
  {
    MR_bool succeeded;
    MR_Word LangMap_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MutAttrs_16, (MR_Integer) 0))));
    MR_Word Const_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MutAttrs_16, (MR_Integer) 1))));
    MR_Word ModuleName_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleParams_12, (MR_Integer) 1))));
    MR_Word ForeignBodyCode_25;
    MR_String TargetVarName_41;
    MR_Box conv0_TargetVarName_41;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LangMap_21, ((MR_Box) (Lang_13)), &conv0_TargetVarName_41);
    if (succeeded)
    {
      TargetVarName_41 = ((MR_String) (conv0_TargetVarName_41));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *TargetMutableName_18 = TargetVarName_41;
    else
    {
      MR_String RawVarName_42;
      MR_Word QualifiedVarName0_43;
      MR_Word QualifiedVarName_44;

      RawVarName_42 = mercury__string__f_43_43_2_f_0((MR_String) "mutable_variable_", MutableName_14);
      {
        QualifiedVarName0_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), QualifiedVarName0_43, 0) = ((MR_Box) (ModuleName_23));
        MR_hl_field(MR_mktag(1), QualifiedVarName0_43, 1) = ((MR_Box) (RawVarName_42));
      }
      succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_23);
      if (succeeded)
        QualifiedVarName_44 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", QualifiedVarName0_43);
      else
        QualifiedVarName_44 = QualifiedVarName0_43;
      *TargetMutableName_18 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(QualifiedVarName_44);
    }
    switch (Lang_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ForeignDeclCode_24;

          parse_tree__prog_mutable__define_mutable_global_var_c_7_p_0(ModuleParams_12, *TargetMutableName_18, Type_15, Const_22, Context_17, &ForeignDeclCode_24, &ForeignBodyCode_25);
          mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), ((MR_Box) (ForeignDeclCode_24)), STATE_VARIABLE_ForeignDeclCodes_0_26, STATE_VARIABLE_ForeignDeclCodes_27);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word IsThreadLocal_54;
          MR_String TypeStr_55;
          MR_String DefnBody_56;
          MR_String Var_58;
          MR_String Var_59;
          MR_String Var_61;
          MR_Word Var_64;

          IsThreadLocal_54 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(Const_22);
          switch (IsThreadLocal_54) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_65;

                Var_65 = parse_tree__builtin_lib_types__int_type_0_f_0();
                succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_15, Var_65);
                if (succeeded)
                  TypeStr_55 = (MR_String) "int";
                else
                  TypeStr_55 = (MR_String) "object";
              }
              break;
            case (MR_Integer) 1:
              TypeStr_55 = (MR_String) "int";
              break;
          }
          Var_61 = mercury__string__f_43_43_2_f_0(*TargetMutableName_18, (MR_String) ";\n");
          Var_59 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_61);
          Var_58 = mercury__string__f_43_43_2_f_0(TypeStr_55, Var_59);
          DefnBody_56 = mercury__string__f_43_43_2_f_0((MR_String) "static ", Var_58);
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (DefnBody_56));
          }
          {
            ForeignBodyCode_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ForeignBodyCode_25, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ForeignBodyCode_25, 1) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(0), ForeignBodyCode_25, 2) = ((MR_Box) (Context_17));
          }
          *STATE_VARIABLE_ForeignDeclCodes_27 = STATE_VARIABLE_ForeignDeclCodes_0_26;
        }
        break;
      case (MR_Integer) 2:
        {
          parse_tree__prog_mutable__define_mutable_global_var_java_5_p_0(*TargetMutableName_18, Type_15, Const_22, Context_17, &ForeignBodyCode_25);
          *STATE_VARIABLE_ForeignDeclCodes_27 = STATE_VARIABLE_ForeignDeclCodes_0_26;
        }
        break;
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), ((MR_Box) (ForeignBodyCode_25)), STATE_VARIABLE_ForeignBodyCodes_0_28, STATE_VARIABLE_ForeignBodyCodes_29);
  }
}

static void MR_CALL 
parse_tree__prog_mutable__define_mutable_global_var_java_5_p_0(
  MR_String TargetMutableName_6,
  MR_Word Type_7,
  MR_Word Const_8,
  MR_Word Context_9,
  MR_Word * ForeignBodyCode_10)
{
  {
    MR_bool succeeded;
    MR_Word IsThreadLocal_11;
    MR_String DefnBody_13;
    MR_Word Var_33;

    IsThreadLocal_11 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(Const_8);
    switch (IsThreadLocal_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String TypeStr_12;
          MR_String Var_27;
          MR_String Var_28;
          MR_String Var_30;
          MR_Word Var_35;

          Var_35 = parse_tree__builtin_lib_types__int_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_7, Var_35);
          if (succeeded)
            TypeStr_12 = (MR_String) "int";
          else
            TypeStr_12 = (MR_String) "java.lang.Object";
          Var_30 = mercury__string__f_43_43_2_f_0(TargetMutableName_6, (MR_String) ";\n");
          Var_28 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_30);
          Var_27 = mercury__string__f_43_43_2_f_0(TypeStr_12, Var_28);
          DefnBody_13 = mercury__string__f_43_43_2_f_0((MR_String) "static ", Var_27);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_14;
          MR_Word Var_16;
          MR_Word Var_17;
          MR_Word Var_19;
          MR_Word Var_20;
          MR_Word Var_22;
          MR_String TypeStr_34;
          MR_Word Var_36;

          Var_36 = parse_tree__builtin_lib_types__int_type_0_f_0();
          succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Type_7, Var_36);
          if (succeeded)
            TypeStr_34 = (MR_String) "java.lang.Integer";
          else
            TypeStr_34 = (MR_String) "java.lang.Object";
          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (TypeStr_34));
            MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[3])));
          }
          {
            Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) " = new java.lang.InheritableThreadLocal<"));
            MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
          }
          {
            Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (TargetMutableName_6));
            MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
          }
          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) ((MR_String) "> "));
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
          }
          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (TypeStr_34));
            MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_17));
          }
          {
            Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) ((MR_String) "static java.lang.ThreadLocal<"));
            MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_16));
          }
          DefnBody_13 = mercury__string__append_list_1_f_0(Var_14);
        }
        break;
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (DefnBody_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *ForeignBodyCode_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_9));
    }
  }
}

static void MR_CALL 
parse_tree__prog_mutable__define_mutable_global_var_c_7_p_0(
  MR_Word ModuleParams_8,
  MR_String TargetMutableName_9,
  MR_Word Type_10,
  MR_Word Const_11,
  MR_Word Context_12,
  MR_Word * ForeignDeclCode_13,
  MR_Word * ForeignBodyCode_14)
{
  {
    MR_bool succeeded;
    MR_Word IsThreadLocal_15;
    MR_String HighLevelTypeName_16;
    MR_String LowLevelTypeName_17;
    MR_String TypeName_20;
    MR_Word LockDeclStrs_21;
    MR_Word LockDefnStrs_22;
    MR_String DeclBody_24;
    MR_String DefnBody_25;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_69;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_81;

    IsThreadLocal_15 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(Const_11);
    switch (IsThreadLocal_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Globals_18;
          MR_Word HighLevelCode_19;
          MR_Word TypeNameFunc_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleParams_8, (MR_Integer) 2))));
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), TypeNameFunc_89, (MR_Integer) 1))));
          MR_Box conv1_HighLevelTypeName_16;

          conv1_HighLevelTypeName_16 = func_0(((MR_Box) (TypeNameFunc_89)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Type_10)));
          HighLevelTypeName_16 = ((MR_String) (conv1_HighLevelTypeName_16));
          LowLevelTypeName_17 = (MR_String) "MR_Word";
          Globals_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleParams_8, (MR_Integer) 0))));
          libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 302, &HighLevelCode_19);
          switch (HighLevelCode_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              TypeName_20 = LowLevelTypeName_17;
              break;
            case (MR_Integer) 1:
              TypeName_20 = HighLevelTypeName_16;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          TypeName_20 = (MR_String) "MR_Unsigned";
          HighLevelTypeName_16 = TypeName_20;
          LowLevelTypeName_17 = TypeName_20;
        }
        break;
    }
    succeeded = (Const_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
      succeeded = (IsThreadLocal_15 == (MR_Integer) 1);
    if (succeeded)
    {
      LockDeclStrs_21 = (MR_Word) ((MR_Unsigned) 0U);
      LockDefnStrs_22 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String MutexVarName_23;
      MR_Word Var_32;
      MR_Word Var_34;
      MR_Word Var_41;
      MR_Word Var_43;

      MutexVarName_23 = mercury__string__f_43_43_2_f_0(TargetMutableName_9, (MR_String) "_lock");
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MutexVarName_23));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[2])));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_String) "    extern MercuryLock "));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
      }
      {
        LockDeclStrs_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LockDeclStrs_21, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
        MR_hl_field(MR_mktag(1), LockDeclStrs_21, 1) = ((MR_Box) (Var_32));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MutexVarName_23));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_mutable_scalar_common_1[2])));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_String) "    MercuryLock "));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
      }
      {
        LockDefnStrs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LockDefnStrs_22, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
        MR_hl_field(MR_mktag(1), LockDefnStrs_22, 1) = ((MR_Box) (Var_41));
      }
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) ((MR_String) "#endif\n"));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (LockDeclStrs_21));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) ((MR_String) ";\n"));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (TargetMutableName_9));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_66));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (LowLevelTypeName_17));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) ((MR_String) "    extern "));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) ((MR_String) "#else\n"));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) ((MR_String) ";\n"));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (TargetMutableName_9));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (HighLevelTypeName_16));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) ((MR_String) "    extern "));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) ((MR_String) "#ifdef MR_HIGHLEVEL_CODE\n"));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_51));
    }
    DeclBody_24 = mercury__string__append_list_1_f_0(Var_49);
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (DeclBody_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *ForeignDeclCode_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_12));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) ((MR_String) ";\n"));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (LockDefnStrs_22));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (TargetMutableName_9));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (TypeName_20));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_75));
    }
    DefnBody_25 = mercury__string__append_list_1_f_0(Var_74);
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (DefnBody_25));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *ForeignBodyCode_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_12));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____module_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_mutable____Unify____module_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mutable____Compare____module_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_mutable____Compare____module_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____mutable_target_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_mutable____Unify____mutable_target_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mutable____Compare____mutable_target_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_mutable____Compare____mutable_target_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____need_lock_unlock_preds_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_mutable____Unify____need_lock_unlock_preds_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mutable____Compare____need_lock_unlock_preds_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_mutable____Compare____need_lock_unlock_preds_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____need_pre_init_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_mutable____Unify____need_pre_init_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mutable____Compare____need_pre_init_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_mutable____Compare____need_pre_init_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__prog_mutable____Unify____type_foreign_name_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__prog_mutable____Unify____type_foreign_name_func_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__prog_mutable____Compare____type_foreign_name_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__prog_mutable____Compare____type_foreign_name_func_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__prog_mutable__init(void)
{
}

void mercury__parse_tree__prog_mutable__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_module_params_0);
	MR_register_type_ctor_info(&parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_mutable_target_params_0);
	MR_register_type_ctor_info(&parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_need_lock_unlock_preds_0);
	MR_register_type_ctor_info(&parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_need_pre_init_pred_0);
	MR_register_type_ctor_info(&parse_tree__prog_mutable__parse_tree__prog_mutable__type_ctor_info_type_foreign_name_func_0);
}

void mercury__parse_tree__prog_mutable__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_mutable__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_mutable.
