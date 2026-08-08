/*
** Automatically generated from `equiv_type.m'
** by the Mercury compiler,
** version rotd-2026-08-08
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


// :- module parse_tree.equiv_type.
// :- implementation.

/*
INIT mercury__parse_tree__equiv_type__init
ENDINIT
*/

#include "parse_tree.equiv_type.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0;

static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1[1];

static const MR_DuArgLocn parse_tree__equiv_type__parse_tree__equiv_type__field_locns_maybe_record_sym_name_use_0_1[1];

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1;

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1[1];

static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_maybe_record_sym_name_use_0[2];

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0[2];

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0[2];

static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__report_contains_circular_eqv_type__558__1_1_f_0(
  MR_Word LambdaHeadVar__1_55);

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Constraint0_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_TVarSet_0_23,
  MR_Word * STATE_VARIABLE_TVarSet_24,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_25,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28);

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(
  MR_Word InstEqvMap_10,
  MR_Word ExpandedInstCtors0_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_26,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_27,
  MR_Word STATE_VARIABLE_UsedModules_0_28,
  MR_Word * STATE_VARIABLE_UsedModules_29);

static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_type_report_circular_eqvs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Ctor0_13,
  MR_Word * Ctor_14,
  MR_Word STATE_VARIABLE_TVarSet_0_34,
  MR_Word * STATE_VARIABLE_TVarSet_35,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_36,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39);

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_loop_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Circ_0_6,
  MR_Word * STATE_VARIABLE_Circ_7,
  MR_Word STATE_VARIABLE_TVarSet_0_8,
  MR_Word * STATE_VARIABLE_TVarSet_9,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_10,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_11,
  MR_Word STATE_VARIABLE_UsedModules_0_12,
  MR_Word * STATE_VARIABLE_UsedModules_13);

static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
  MR_Word TypeEqvMap_19,
  MR_Word MaybeRecord_20,
  MR_Word TypeCtorsAlreadyExpanded_21,
  MR_Word Type0_22,
  MR_Word TypeCtor_23,
  MR_Word ArgTypes_24,
  MR_Word Kind_25,
  MR_Word * Type_26,
  MR_Word ArgTypesChanged_27,
  MR_Word * Changed_28,
  MR_Word STATE_VARIABLE_Circ_0_49,
  MR_Word * STATE_VARIABLE_Circ_50,
  MR_Word STATE_VARIABLE_TVarSet_0_51,
  MR_Word * STATE_VARIABLE_TVarSet_52,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_53,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_54,
  MR_Word STATE_VARIABLE_UsedModules_0_55,
  MR_Word * STATE_VARIABLE_UsedModules_56);

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_TVarSet_0_9,
  MR_Word * STATE_VARIABLE_TVarSet_10,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_11,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_12,
  MR_Word STATE_VARIABLE_UsedModules_0_13,
  MR_Word * STATE_VARIABLE_UsedModules_14);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____circ_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____circ_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[16][2];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[2][13];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[1][5];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[1][3];




static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[16][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "because its expansion contains the"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "cannot have its equivalences fully expanded,"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "circular equivalence type"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "circular equivalence types"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__equiv_type_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[2][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0)),
    ((MR_Box) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0])),
    ((MR_Box) (parse_tree__equiv_type__replace_in_type_report_circular_eqvs_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0) }
};

const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_circ_types_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__equiv_type____Unify____circ_types_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____circ_types_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "circ_types",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__equiv_type__set_ordlist__ti_set_ordlist_1parse_tree__prog_data__type_ctor_info_type_ctor_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0 = {
  (MR_String) "do_not_record_sym_name_use",
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

static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_item_visibility_0) };

static const MR_DuArgLocn parse_tree__equiv_type__parse_tree__equiv_type__field_locns_maybe_record_sym_name_use_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1 = {
  (MR_String) "record_sym_name_use",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1,
  NULL,
  parse_tree__equiv_type__parse_tree__equiv_type__field_locns_maybe_record_sym_name_use_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0[1] = { &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0 };

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1[1] = { &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1 };

static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_maybe_record_sym_name_use_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1
};

static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "maybe_record_sym_name_use",
  { parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0 },
  { parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_maybe_record_sym_name_use_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0,

};

static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__report_contains_circular_eqv_type__558__1_1_f_0(
  MR_Word LambdaHeadVar__1_55)
{
  MR_Word LambdaHeadVar__2_56;

  {
    LambdaHeadVar__2_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_56, 0) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, LambdaHeadVar__2_56, 1) = ((MR_Box) (LambdaHeadVar__1_55));
  }
  return LambdaHeadVar__2_56;
}

void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__equiv_type____Compare____circ_types_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__equiv_type____Unify____circ_types_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Constraint0_13,
  MR_Word * Constraint_14,
  MR_Word STATE_VARIABLE_TVarSet_0_23,
  MR_Word * STATE_VARIABLE_TVarSet_24,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_25,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28)
{
  MR_Word ClassName_18 = ((MR_Word) ((MR_hl_field(0, Constraint0_13, 0))));
  MR_Word ArgTypes0_19 = ((MR_Word) ((MR_hl_field(0, Constraint0_13, 1))));
  MR_Word ArgTypes_20;
  MR_Word Var_30;
  MR_Word Var_21;
  MR_Word Var_22;

  Var_30 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_11, MaybeRecord_12, (MR_Word) ((MR_Unsigned) 0U), ArgTypes0_19, &ArgTypes_20, &Var_21, Var_30, &Var_22, STATE_VARIABLE_TVarSet_0_23, STATE_VARIABLE_TVarSet_24, STATE_VARIABLE_ItemRecompDeps_0_25, STATE_VARIABLE_ItemRecompDeps_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Constraint_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassName_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (ArgTypes_20));
  }
}

void MR_CALL 
parse_tree__equiv_type__replace_in_inst_8_p_0(
  MR_Word InstEqvMap_9,
  MR_Word MaybeRecord_10,
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_15,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_16,
  MR_Word STATE_VARIABLE_UsedModules_0_17,
  MR_Word * STATE_VARIABLE_UsedModules_18)
{
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_50_93_95_48_8_p_0(InstEqvMap_9, Inst0_11, Inst_12, STATE_VARIABLE_ItemRecompDeps_0_15, STATE_VARIABLE_ItemRecompDeps_16, STATE_VARIABLE_UsedModules_0_17, STATE_VARIABLE_UsedModules_18);
}

void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_50_93_95_48_8_p_0(
  MR_Word InstEqvMap_9,
  MR_Word Inst0_11,
  MR_Word * Inst_12,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_15,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_16,
  MR_Word STATE_VARIABLE_UsedModules_0_17,
  MR_Word * STATE_VARIABLE_UsedModules_18)
{
  MR_Word Var_19;

  Var_19 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0));
  parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(InstEqvMap_9, Var_19, Inst0_11, Inst_12, STATE_VARIABLE_ItemRecompDeps_0_15, STATE_VARIABLE_ItemRecompDeps_16, STATE_VARIABLE_UsedModules_0_17, STATE_VARIABLE_UsedModules_18);
}

static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_50_93_95_48_9_p_0(
  MR_Word InstEqvMap_10,
  MR_Word ExpandedInstCtors0_12,
  MR_Word Inst0_13,
  MR_Word * Inst_14,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_26,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_27,
  MR_Word STATE_VARIABLE_UsedModules_0_28,
  MR_Word * STATE_VARIABLE_UsedModules_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Inst0_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Inst0_13, 0)))) == (MR_Integer) 0)));
    MR_Word SymName_17;
    MR_Word ArgInsts_18;
    MR_Word Var_30;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_30 = ((MR_Word) ((MR_hl_field(3, Inst0_13, 1))));
      succeeded = ((MR_tag((MR_Word) Var_30)) == (MR_Integer) 0);
      if (succeeded)
      {
        SymName_17 = ((MR_Word) ((MR_hl_field(0, Var_30, 0))));
        ArgInsts_18 = ((MR_Word) ((MR_hl_field(0, Var_30, 1))));
      }
    }
    if (succeeded)
    {
      MR_Word InstCtor_19;
      MR_Integer Var_31;

      Var_31 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), ArgInsts_18);
      {
        InstCtor_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, InstCtor_19, 0) = ((MR_Box) (SymName_17));
        MR_hl_field(0, InstCtor_19, 1) = ((MR_Box) (Var_31));
      }
      succeeded = mercury__set__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), ((MR_Box) (InstCtor_19)), ExpandedInstCtors0_12);
      if (succeeded)
      {
        *Inst_14 = Inst0_13;
        *STATE_VARIABLE_UsedModules_29 = STATE_VARIABLE_UsedModules_0_28;
        *STATE_VARIABLE_ItemRecompDeps_27 = STATE_VARIABLE_ItemRecompDeps_0_26;
      }
      else
      {
        MR_Word EqvInstParams_21;
        MR_Word EqvInst_22;
        MR_Word EqvInstBody_20;
        MR_Box conv0_EqvInstBody_20;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_inst_body_0), InstEqvMap_10, ((MR_Box) (InstCtor_19)), &conv0_EqvInstBody_20);
        if (succeeded)
        {
          EqvInstBody_20 = ((MR_Word) (conv0_EqvInstBody_20));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          EqvInstParams_21 = ((MR_Word) ((MR_hl_field(0, EqvInstBody_20, 0))));
          EqvInst_22 = ((MR_Word) ((MR_hl_field(0, EqvInstBody_20, 1))));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Inst1_23;
          MR_Word InstCtorItem_24;
          MR_Word ExpandedInstCtors_25;
          MR_Word Var_32;
          MR_Word STATE_VARIABLE_ItemRecompDeps_1_33;
          MR_Word next_value_of_ExpandedInstCtors0_12;
          MR_Word next_value_of_Inst0_13;
          MR_Word next_value_of_STATE_VARIABLE_ItemRecompDeps_0_26;

          parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(EqvInstParams_21, ArgInsts_18, EqvInst_22, &Inst1_23);
          InstCtorItem_24 = recompilation__item_types__inst_ctor_to_recomp_item_name_1_f_0(InstCtor_19);
          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_32, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
            MR_hl_field(0, Var_32, 1) = ((MR_Box) (InstCtorItem_24));
          }
          recompilation__record_uses__gather_item_recomp_dep_3_p_0(Var_32, STATE_VARIABLE_ItemRecompDeps_0_26, &STATE_VARIABLE_ItemRecompDeps_1_33);
          mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), ((MR_Box) (InstCtor_19)), ExpandedInstCtors0_12, &ExpandedInstCtors_25);
          // direct tailcall eliminated
          ;
          next_value_of_ExpandedInstCtors0_12 = ExpandedInstCtors_25;
          next_value_of_Inst0_13 = Inst1_23;
          next_value_of_STATE_VARIABLE_ItemRecompDeps_0_26 = STATE_VARIABLE_ItemRecompDeps_1_33;
          ExpandedInstCtors0_12 = next_value_of_ExpandedInstCtors0_12;
          Inst0_13 = next_value_of_Inst0_13;
          STATE_VARIABLE_ItemRecompDeps_0_26 = next_value_of_STATE_VARIABLE_ItemRecompDeps_0_26;
          continue;
        }
        else
        {
          *Inst_14 = Inst0_13;
          *STATE_VARIABLE_UsedModules_29 = STATE_VARIABLE_UsedModules_0_28;
          *STATE_VARIABLE_ItemRecompDeps_27 = STATE_VARIABLE_ItemRecompDeps_0_26;
        }
      }
    }
    else
    {
      *Inst_14 = Inst0_13;
      *STATE_VARIABLE_UsedModules_29 = STATE_VARIABLE_UsedModules_0_28;
      *STATE_VARIABLE_ItemRecompDeps_27 = STATE_VARIABLE_ItemRecompDeps_0_26;
    }
    break;
  }
}

void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_ignore_circ_11_p_0(
  MR_Word TypeEqvMap_12,
  MR_Word MaybeRecord_13,
  MR_Word Type0_14,
  MR_Word * Type_15,
  MR_Word * Changed_16,
  MR_Word STATE_VARIABLE_TVarSet_0_21,
  MR_Word * STATE_VARIABLE_TVarSet_22,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_23,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_24,
  MR_Word STATE_VARIABLE_UsedModules_0_25,
  MR_Word * STATE_VARIABLE_UsedModules_26)
{
  MR_Word Var_20;

  parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_12, MaybeRecord_13, (MR_Word) ((MR_Unsigned) 0U), Type0_14, Type_15, Changed_16, &Var_20, STATE_VARIABLE_TVarSet_0_21, STATE_VARIABLE_TVarSet_22, STATE_VARIABLE_ItemRecompDeps_0_23, STATE_VARIABLE_ItemRecompDeps_24, STATE_VARIABLE_UsedModules_0_25, STATE_VARIABLE_UsedModules_26);
}

void MR_CALL 
parse_tree__equiv_type__replace_in_type_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word Type0_10,
  MR_Word * Type_11,
  MR_Word * Changed_12,
  MR_Word STATE_VARIABLE_TVarSet_0_17,
  MR_Word * STATE_VARIABLE_TVarSet_18,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_19,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_20)
{
  MR_Word Var_25;
  MR_Word _Circ_15;
  MR_Word Var_16;

  Var_25 = parse_tree__prog_data_used_modules__used_eqv_modules_init_0_f_0();
  parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Type0_10, Type_11, Changed_12, &_Circ_15, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_ItemRecompDeps_0_19, STATE_VARIABLE_ItemRecompDeps_20, Var_25, &Var_16);
}

static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_type_report_circular_eqvs_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_56;

  conv0_LambdaHeadVar__2_56 = parse_tree__equiv_type__IntroducedFrom__func__report_contains_circular_eqv_type__558__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_56));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__equiv_type__replace_in_type_report_circular_eqvs_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word TVarSet0_10,
  MR_Word Context_11,
  MR_Word Type0_12,
  MR_Word * Type_13,
  MR_Word * Changed_14,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_Word Circ_16;
  MR_Word CircTypes_20;
  MR_Word Var_29;
  MR_Word _TVarSet_17;
  MR_Word Var_18;
  MR_Word Var_19;

  Var_29 = parse_tree__prog_data_used_modules__used_eqv_modules_init_0_f_0();
  parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Type0_12, Type_13, Changed_14, &Circ_16, TVarSet0_10, &_TVarSet_17, (MR_Word) ((MR_Unsigned) 0U), &Var_18, Var_29, &Var_19);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Circ_16, &CircTypes_20);
  if ((CircTypes_20 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
  else
  {
    MR_Word HeadCircTypeCtor_21 = ((MR_Word) ((MR_hl_field(1, CircTypes_20, 0))));
    MR_Word TailCircTypeCtors_22 = ((MR_Word) ((MR_hl_field(1, CircTypes_20, 1))));
    MR_Word Spec_23;
    MR_String TypeStr_31;
    MR_Word MainPieces_32;
    MR_Word CircSpecs_33;
    MR_Word Pieces_35;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;

    TypeStr_31 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet0_10, (MR_Integer) 0, Type0_12);
    {
      Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_42, 1) = ((MR_Box) (TypeStr_31));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_40 = parse_tree__error_spec__color_as_subject_1_f_0(Var_41);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[8])));
    MainPieces_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[4])), Var_39);
    if ((TailCircTypeCtors_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_44;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;

      Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[10])));
      {
        Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 20U));
        MR_hl_field(3, Var_49, 1) = ((MR_Box) (HeadCircTypeCtor_21));
      }
      {
        Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
        MR_hl_field(1, Var_48, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])));
      }
      Var_47 = parse_tree__error_spec__color_as_subject_1_f_0(Var_48);
      Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[13])));
      CircSpecs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_46);
    }
    else
    {
      MR_Word TypeCtorPieces_34;
      MR_Word Var_54;
      MR_Word Var_56;
      MR_Word Var_57;

      TypeCtorPieces_34 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_4[0]), CircTypes_20);
      Var_54 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[15])));
      Var_57 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[12])), TypeCtorPieces_34);
      Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, (MR_Word) (MR_mkword(1, &parse_tree__equiv_type_scalar_common_1[13])));
      CircSpecs_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_56);
    }
    Pieces_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_32, CircSpecs_33);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "function \140parse_tree.equiv_type.report_contains_circular_eqv_type\'/5"));
      MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 52U));
      MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_11));
      MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
    }
  }
}

void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
  MR_Word TypeEqvMap_13,
  MR_Word MaybeRecord_14,
  MR_Word STATE_VARIABLE_Types_0_21,
  MR_Word * STATE_VARIABLE_Types_22,
  MR_Word * Changed_16,
  MR_Word * ContainsCirc_17,
  MR_Word STATE_VARIABLE_TVarSet_0_23,
  MR_Word * STATE_VARIABLE_TVarSet_24,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_25,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_26,
  MR_Word STATE_VARIABLE_UsedModules_0_27,
  MR_Word * STATE_VARIABLE_UsedModules_28)
{
  MR_Word Var_31;

  Var_31 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_13, MaybeRecord_14, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Types_0_21, STATE_VARIABLE_Types_22, Changed_16, Var_31, ContainsCirc_17, STATE_VARIABLE_TVarSet_0_23, STATE_VARIABLE_TVarSet_24, STATE_VARIABLE_ItemRecompDeps_0_25, STATE_VARIABLE_ItemRecompDeps_26, STATE_VARIABLE_UsedModules_0_27, STATE_VARIABLE_UsedModules_28);
}

void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
  MR_Word TypeEqvMap_12,
  MR_Word MaybeRecord_13,
  MR_Word STATE_VARIABLE_Types_0_20,
  MR_Word * STATE_VARIABLE_Types_21,
  MR_Word * Changed_15,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_24,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  MR_Word Var_29;
  MR_Word Var_19;

  Var_29 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_12, MaybeRecord_13, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Types_0_20, STATE_VARIABLE_Types_21, Changed_15, Var_29, &Var_19, STATE_VARIABLE_TVarSet_0_22, STATE_VARIABLE_TVarSet_23, STATE_VARIABLE_ItemRecompDeps_0_24, STATE_VARIABLE_ItemRecompDeps_25, STATE_VARIABLE_UsedModules_0_26, STATE_VARIABLE_UsedModules_27);
}

void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_8_p_0(
  MR_Word TypeEqvMap_9,
  MR_Word STATE_VARIABLE_Types_0_15,
  MR_Word * STATE_VARIABLE_Types_16,
  MR_Word * Changed_11,
  MR_Word STATE_VARIABLE_TVarSet_0_17,
  MR_Word * STATE_VARIABLE_TVarSet_18,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_19,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_20)
{
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_14;
  MR_Word Var_26;

  Var_25 = parse_tree__prog_data_used_modules__used_eqv_modules_init_0_f_0();
  Var_28 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_9, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Types_0_15, STATE_VARIABLE_Types_16, Changed_11, Var_28, &Var_26, STATE_VARIABLE_TVarSet_0_17, STATE_VARIABLE_TVarSet_18, STATE_VARIABLE_ItemRecompDeps_0_19, STATE_VARIABLE_ItemRecompDeps_20, Var_25, &Var_14);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Constraint_14;
  MR_Word conv2_STATE_VARIABLE_TVarSet_24;
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word STATE_VARIABLE_Constraints_0_17,
  MR_Word * STATE_VARIABLE_Constraints_18,
  MR_Word STATE_VARIABLE_TVarSet_0_19,
  MR_Word * STATE_VARIABLE_TVarSet_20,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_21,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_22,
  MR_Word STATE_VARIABLE_UsedModules_0_23,
  MR_Word * STATE_VARIABLE_UsedModules_24)
{
  MR_Word Var_25;
  MR_Box conv6_STATE_VARIABLE_TVarSet_20;
  MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_22;
  MR_Box conv4_STATE_VARIABLE_UsedModules_24;

  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_2[0]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (TypeEqvMap_11));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) (MaybeRecord_12));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), Var_25, STATE_VARIABLE_Constraints_0_17, STATE_VARIABLE_Constraints_18, ((MR_Box) (STATE_VARIABLE_TVarSet_0_19)), &conv6_STATE_VARIABLE_TVarSet_20, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_0_21)), &conv5_STATE_VARIABLE_ItemRecompDeps_22, ((MR_Box) (STATE_VARIABLE_UsedModules_0_23)), &conv4_STATE_VARIABLE_UsedModules_24);
  *STATE_VARIABLE_TVarSet_20 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_20));
  *STATE_VARIABLE_ItemRecompDeps_22 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_22));
  *STATE_VARIABLE_UsedModules_24 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_24));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Constraint_14;
  MR_Word conv2_STATE_VARIABLE_TVarSet_24;
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word STATE_VARIABLE_Constraints_0_13,
  MR_Word * STATE_VARIABLE_Constraints_14,
  MR_Word STATE_VARIABLE_TVarSet_0_15,
  MR_Word * STATE_VARIABLE_TVarSet_16,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_17,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_18)
{
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Box conv6_STATE_VARIABLE_TVarSet_16;
  MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_18;
  MR_Box conv4_Var_12;

  Var_23 = parse_tree__prog_data_used_modules__used_eqv_modules_init_0_f_0();
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_2[0]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (TypeEqvMap_8));
    MR_hl_field(0, Var_24, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), Var_24, STATE_VARIABLE_Constraints_0_13, STATE_VARIABLE_Constraints_14, ((MR_Box) (STATE_VARIABLE_TVarSet_0_15)), &conv6_STATE_VARIABLE_TVarSet_16, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_0_17)), &conv5_STATE_VARIABLE_ItemRecompDeps_18, ((MR_Box) (Var_23)), &conv4_Var_12);
  *STATE_VARIABLE_TVarSet_16 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_16));
  *STATE_VARIABLE_ItemRecompDeps_18 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_18));
}

void MR_CALL 
parse_tree__equiv_type__replace_in_univ_exist_constraints_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word Cs0_9,
  MR_Word * Cs_10,
  MR_Word STATE_VARIABLE_TVarSet_0_14,
  MR_Word * STATE_VARIABLE_TVarSet_15,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_16,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_17)
{
  MR_Word Var_21;
  MR_Word Var_13;

  Var_21 = parse_tree__prog_data_used_modules__used_eqv_modules_init_0_f_0();
  parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0(TypeEqvMap_8, (MR_Word) ((MR_Unsigned) 0U), Cs0_9, Cs_10, STATE_VARIABLE_TVarSet_0_14, STATE_VARIABLE_TVarSet_15, STATE_VARIABLE_ItemRecompDeps_0_16, STATE_VARIABLE_ItemRecompDeps_17, Var_21, &Var_13);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Constraint_14;
  MR_Word conv2_STATE_VARIABLE_TVarSet_24;
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

void MR_CALL 
parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Cs0_13,
  MR_Word * Cs_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_24,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  MR_Word UnivCs0_18 = ((MR_Word) ((MR_hl_field(0, Cs0_13, 0))));
  MR_Word ExistCs0_19 = ((MR_Word) ((MR_hl_field(0, Cs0_13, 1))));
  MR_Word UnivCs_20;
  MR_Word ExistCs_21;
  MR_Word STATE_VARIABLE_TVarSet_1_28;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_29;
  MR_Word STATE_VARIABLE_UsedModules_1_30;
  MR_Word Var_31;
  MR_Box conv6_STATE_VARIABLE_TVarSet_1_28;
  MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_1_29;
  MR_Box conv4_STATE_VARIABLE_UsedModules_1_30;
  MR_Box conv9_STATE_VARIABLE_TVarSet_23;
  MR_Box conv8_STATE_VARIABLE_ItemRecompDeps_25;
  MR_Box conv7_STATE_VARIABLE_UsedModules_27;

  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_2[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_univ_exist_constraints_location_10_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (TypeEqvMap_11));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (MaybeRecord_12));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), Var_31, UnivCs0_18, &UnivCs_20, ((MR_Box) (STATE_VARIABLE_TVarSet_0_22)), &conv6_STATE_VARIABLE_TVarSet_1_28, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_0_24)), &conv5_STATE_VARIABLE_ItemRecompDeps_1_29, ((MR_Box) (STATE_VARIABLE_UsedModules_0_26)), &conv4_STATE_VARIABLE_UsedModules_1_30);
  STATE_VARIABLE_TVarSet_1_28 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_1_28));
  STATE_VARIABLE_ItemRecompDeps_1_29 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_1_29));
  STATE_VARIABLE_UsedModules_1_30 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_1_30));
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), Var_31, ExistCs0_19, &ExistCs_21, ((MR_Box) (STATE_VARIABLE_TVarSet_1_28)), &conv9_STATE_VARIABLE_TVarSet_23, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_1_29)), &conv8_STATE_VARIABLE_ItemRecompDeps_25, ((MR_Box) (STATE_VARIABLE_UsedModules_1_30)), &conv7_STATE_VARIABLE_UsedModules_27);
  *STATE_VARIABLE_TVarSet_23 = ((MR_Word) (conv9_STATE_VARIABLE_TVarSet_23));
  *STATE_VARIABLE_ItemRecompDeps_25 = ((MR_Word) (conv8_STATE_VARIABLE_ItemRecompDeps_25));
  *STATE_VARIABLE_UsedModules_27 = ((MR_Word) (conv7_STATE_VARIABLE_UsedModules_27));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Cs_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (UnivCs_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (ExistCs_21));
  }
}

void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0(
  MR_Word TypeEqvMap_8,
  MR_Word STATE_VARIABLE_Ctors_0_13,
  MR_Word * STATE_VARIABLE_Ctors_14,
  MR_Word STATE_VARIABLE_TVarSet_0_15,
  MR_Word * STATE_VARIABLE_TVarSet_16,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_17,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_18)
{
  MR_Word Var_23;
  MR_Word Var_12;

  Var_23 = parse_tree__prog_data_used_modules__used_eqv_modules_init_0_f_0();
  parse_tree__equiv_type__replace_in_ctors_location_10_p_0(TypeEqvMap_8, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Ctors_0_13, STATE_VARIABLE_Ctors_14, STATE_VARIABLE_TVarSet_0_15, STATE_VARIABLE_TVarSet_16, STATE_VARIABLE_ItemRecompDeps_0_17, STATE_VARIABLE_ItemRecompDeps_18, Var_23, &Var_12);
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Ctor_14;
  MR_Word conv2_STATE_VARIABLE_TVarSet_35;
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_37;
  MR_Word conv0_STATE_VARIABLE_UsedModules_39;

  parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Ctor_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_35, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_37, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_39);
  *wrapper_arg_2 = ((MR_Box) (conv3_Ctor_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_35));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_37));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_39));
}

void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Ctors0_13,
  MR_Word * Ctors_14,
  MR_Word STATE_VARIABLE_TVarSet_0_22,
  MR_Word * STATE_VARIABLE_TVarSet_23,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_24,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_25,
  MR_Word STATE_VARIABLE_UsedModules_0_26,
  MR_Word * STATE_VARIABLE_UsedModules_27)
{
  MR_Word HeadCtor0_18 = ((MR_Word) ((MR_hl_field(0, Ctors0_13, 0))));
  MR_Word TailCtors0_19 = ((MR_Word) ((MR_hl_field(0, Ctors0_13, 1))));
  MR_Word HeadCtor_20;
  MR_Word TailCtors_21;
  MR_Word STATE_VARIABLE_TVarSet_1_28;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_29;
  MR_Word STATE_VARIABLE_UsedModules_1_30;
  MR_Word Var_31;
  MR_Box conv6_STATE_VARIABLE_TVarSet_23;
  MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_25;
  MR_Box conv4_STATE_VARIABLE_UsedModules_27;

  parse_tree__equiv_type__replace_in_ctor_10_p_0(TypeEqvMap_11, MaybeRecord_12, HeadCtor0_18, &HeadCtor_20, STATE_VARIABLE_TVarSet_0_22, &STATE_VARIABLE_TVarSet_1_28, STATE_VARIABLE_ItemRecompDeps_0_24, &STATE_VARIABLE_ItemRecompDeps_1_29, STATE_VARIABLE_UsedModules_0_26, &STATE_VARIABLE_UsedModules_1_30);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_2[1]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (TypeEqvMap_11));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (MaybeRecord_12));
  }
  mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), Var_31, TailCtors0_19, &TailCtors_21, ((MR_Box) (STATE_VARIABLE_TVarSet_1_28)), &conv6_STATE_VARIABLE_TVarSet_23, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_1_29)), &conv5_STATE_VARIABLE_ItemRecompDeps_25, ((MR_Box) (STATE_VARIABLE_UsedModules_1_30)), &conv4_STATE_VARIABLE_UsedModules_27);
  *STATE_VARIABLE_TVarSet_23 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_23));
  *STATE_VARIABLE_ItemRecompDeps_25 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_25));
  *STATE_VARIABLE_UsedModules_27 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_27));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Ctors_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (HeadCtor_20));
    MR_hl_field(0, base, 1) = ((MR_Box) (TailCtors_21));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Constraint_14;
  MR_Word conv2_STATE_VARIABLE_TVarSet_24;
  MR_Word conv1_STATE_VARIABLE_ItemRecompDeps_26;
  MR_Word conv0_STATE_VARIABLE_UsedModules_28;

  parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Constraint_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_TVarSet_24, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_ItemRecompDeps_26, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_UsedModules_28);
  *wrapper_arg_2 = ((MR_Box) (conv3_Constraint_14));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_TVarSet_24));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_ItemRecompDeps_26));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_UsedModules_28));
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
  MR_Word TypeEqvMap_11,
  MR_Word MaybeRecord_12,
  MR_Word Ctor0_13,
  MR_Word * Ctor_14,
  MR_Word STATE_VARIABLE_TVarSet_0_34,
  MR_Word * STATE_VARIABLE_TVarSet_35,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_36,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_37,
  MR_Word STATE_VARIABLE_UsedModules_0_38,
  MR_Word * STATE_VARIABLE_UsedModules_39)
{
  uint32_t Ordinal_18 = ((uint32_t) (MR_Word) (MR_hl_field(0, Ctor0_13, 0)));
  MR_Word MaybeExistConstraints0_19 = ((MR_Word) ((MR_hl_field(0, Ctor0_13, 1))));
  MR_Word CtorName_20 = ((MR_Word) ((MR_hl_field(0, Ctor0_13, 2))));
  MR_Word CtorArgs0_21 = ((MR_Word) ((MR_hl_field(0, Ctor0_13, 3))));
  MR_Integer Arity_22 = ((MR_Integer) ((MR_hl_field(0, Ctor0_13, 4))));
  MR_Word Ctxt_23 = ((MR_Word) ((MR_hl_field(0, Ctor0_13, 5))));
  MR_Word CtorArgs_24;
  MR_Word MaybeExistConstraints_26;
  MR_Word STATE_VARIABLE_TVarSet_1_40;
  MR_Word STATE_VARIABLE_ItemRecompDeps_1_41;
  MR_Word STATE_VARIABLE_UsedModules_1_42;
  MR_Word Var_44;
  MR_Word Var_25;

  Var_44 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  parse_tree__equiv_type__replace_in_ctor_arg_list_loop_13_p_0(TypeEqvMap_11, MaybeRecord_12, (MR_Word) ((MR_Unsigned) 0U), CtorArgs0_21, &CtorArgs_24, Var_44, &Var_25, STATE_VARIABLE_TVarSet_0_34, &STATE_VARIABLE_TVarSet_1_40, STATE_VARIABLE_ItemRecompDeps_0_36, &STATE_VARIABLE_ItemRecompDeps_1_41, STATE_VARIABLE_UsedModules_0_38, &STATE_VARIABLE_UsedModules_1_42);
  if ((MaybeExistConstraints0_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeExistConstraints_26 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_TVarSet_35 = STATE_VARIABLE_TVarSet_1_40;
    *STATE_VARIABLE_ItemRecompDeps_37 = STATE_VARIABLE_ItemRecompDeps_1_41;
    *STATE_VARIABLE_UsedModules_39 = STATE_VARIABLE_UsedModules_1_42;
  }
  else
  {
    MR_Word ExistConstraints0_27 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints0_19), (MR_Integer) 1));
    MR_Word ExistQVars_28 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_27, 0))));
    MR_Word Constraints0_29 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_27, 1))));
    MR_Word UnconstrainedExistQTVars_30 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_27, 2))));
    MR_Word ConstrainedExistQTVars_31 = ((MR_Word) ((MR_hl_field(0, ExistConstraints0_27, 3))));
    MR_Word Constraints_32;
    MR_Word ExistConstraints_33;
    MR_Word Var_46;
    MR_Box conv6_STATE_VARIABLE_TVarSet_35;
    MR_Box conv5_STATE_VARIABLE_ItemRecompDeps_37;
    MR_Box conv4_STATE_VARIABLE_UsedModules_39;

    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_46, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_2[0]));
      MR_hl_field(0, Var_46, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_10_p_0_1));
      MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_46, 3) = ((MR_Box) (TypeEqvMap_11));
      MR_hl_field(0, Var_46, 4) = ((MR_Box) (MaybeRecord_12));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[0]), (MR_Word) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_item_recomp_deps_0), (MR_Word) (&parse_tree__prog_data_used_modules__parse_tree__prog_data_used_modules__type_ctor_info_used_eqv_modules_0), Var_46, Constraints0_29, &Constraints_32, ((MR_Box) (STATE_VARIABLE_TVarSet_1_40)), &conv6_STATE_VARIABLE_TVarSet_35, ((MR_Box) (STATE_VARIABLE_ItemRecompDeps_1_41)), &conv5_STATE_VARIABLE_ItemRecompDeps_37, ((MR_Box) (STATE_VARIABLE_UsedModules_1_42)), &conv4_STATE_VARIABLE_UsedModules_39);
    *STATE_VARIABLE_TVarSet_35 = ((MR_Word) (conv6_STATE_VARIABLE_TVarSet_35));
    *STATE_VARIABLE_ItemRecompDeps_37 = ((MR_Word) (conv5_STATE_VARIABLE_ItemRecompDeps_37));
    *STATE_VARIABLE_UsedModules_39 = ((MR_Word) (conv4_STATE_VARIABLE_UsedModules_39));
    {
      ExistConstraints_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ExistConstraints_33, 0) = ((MR_Box) (ExistQVars_28));
      MR_hl_field(0, ExistConstraints_33, 1) = ((MR_Box) (Constraints_32));
      MR_hl_field(0, ExistConstraints_33, 2) = ((MR_Box) (UnconstrainedExistQTVars_30));
      MR_hl_field(0, ExistConstraints_33, 3) = ((MR_Box) (ConstrainedExistQTVars_31));
    }
    MaybeExistConstraints_26 = (MR_Word) (MR_mkword(1, (MR_Word) (ExistConstraints_33)));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Ctor_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MR_Word) (Ordinal_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeExistConstraints_26));
    MR_hl_field(0, base, 2) = ((MR_Box) (CtorName_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (CtorArgs_24));
    MR_hl_field(0, base, 4) = ((MR_Box) (Arity_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (Ctxt_23));
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_loop_13_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_Circ_0_6,
  MR_Word * STATE_VARIABLE_Circ_7,
  MR_Word STATE_VARIABLE_TVarSet_0_8,
  MR_Word * STATE_VARIABLE_TVarSet_9,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_10,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_11,
  MR_Word STATE_VARIABLE_UsedModules_0_12,
  MR_Word * STATE_VARIABLE_UsedModules_13)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_UsedModules_13 = STATE_VARIABLE_UsedModules_0_12;
    *STATE_VARIABLE_ItemRecompDeps_11 = STATE_VARIABLE_ItemRecompDeps_0_10;
    *STATE_VARIABLE_TVarSet_9 = STATE_VARIABLE_TVarSet_0_8;
    *STATE_VARIABLE_Circ_7 = STATE_VARIABLE_Circ_0_6;
  }
  else
  {
    MR_Word CtorArg0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word CtorArgs0_33 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word CtorArg_34;
    MR_Word CtorArgs_35;
    MR_Word Name_40 = ((MR_Word) ((MR_hl_field(0, CtorArg0_32, 0))));
    MR_Word Type0_41 = ((MR_Word) ((MR_hl_field(0, CtorArg0_32, 1))));
    MR_Word Context_42 = ((MR_Word) ((MR_hl_field(0, CtorArg0_32, 2))));
    MR_Word Type_43;
    MR_Word TypeCirc_45;
    MR_Word STATE_VARIABLE_TVarSet_1_54;
    MR_Word STATE_VARIABLE_ItemRecompDeps_1_55;
    MR_Word STATE_VARIABLE_UsedModules_1_56;
    MR_Word STATE_VARIABLE_Circ_1_57;
    MR_Word Var_44;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Type0_41, &Type_43, &Var_44, &TypeCirc_45, STATE_VARIABLE_TVarSet_0_8, &STATE_VARIABLE_TVarSet_1_54, STATE_VARIABLE_ItemRecompDeps_0_10, &STATE_VARIABLE_ItemRecompDeps_1_55, STATE_VARIABLE_UsedModules_0_12, &STATE_VARIABLE_UsedModules_1_56);
    {
      CtorArg_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CtorArg_34, 0) = ((MR_Box) (Name_40));
      MR_hl_field(0, CtorArg_34, 1) = ((MR_Box) (Type_43));
      MR_hl_field(0, CtorArg_34, 2) = ((MR_Box) (Context_42));
    }
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), TypeCirc_45, STATE_VARIABLE_Circ_0_6, &STATE_VARIABLE_Circ_1_57);
    parse_tree__equiv_type__replace_in_ctor_arg_list_loop_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, CtorArgs0_33, &CtorArgs_35, STATE_VARIABLE_Circ_1_57, STATE_VARIABLE_Circ_7, STATE_VARIABLE_TVarSet_1_54, STATE_VARIABLE_TVarSet_9, STATE_VARIABLE_ItemRecompDeps_1_55, STATE_VARIABLE_ItemRecompDeps_11, STATE_VARIABLE_UsedModules_1_56, STATE_VARIABLE_UsedModules_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (CtorArg_34));
      MR_hl_field(1, base, 1) = ((MR_Box) (CtorArgs_35));
    }
  }
}

void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(
  MR_Word TypeEqvMap_14,
  MR_Word MaybeRecord_15,
  MR_Word TypeCtorsAlreadyExpanded_16,
  MR_Word Type0_17,
  MR_Word * Type_18,
  MR_Word * Changed_19,
  MR_Word * Circ_20,
  MR_Word STATE_VARIABLE_TVarSet_0_45,
  MR_Word * STATE_VARIABLE_TVarSet_46,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_47,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_48,
  MR_Word STATE_VARIABLE_UsedModules_0_49,
  MR_Word * STATE_VARIABLE_UsedModules_50)
{
  switch (MR_tag((MR_Word) Type0_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Type_18 = Type0_17;
        *Changed_19 = (MR_Integer) 0;
        *Circ_20 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        *STATE_VARIABLE_TVarSet_46 = STATE_VARIABLE_TVarSet_0_45;
        *STATE_VARIABLE_ItemRecompDeps_48 = STATE_VARIABLE_ItemRecompDeps_0_47;
        *STATE_VARIABLE_UsedModules_50 = STATE_VARIABLE_UsedModules_0_49;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(1, Type0_17, 0))));
        MR_Word ArgTypes0_27 = ((MR_Word) ((MR_hl_field(1, Type0_17, 1))));
        MR_Word ArgTypes_28;
        MR_Word ArgTypesChanged_29;
        MR_Word Circ0_30;
        MR_Integer Arity_31;
        MR_Word TypeCtor_32;
        MR_Word Var_51;
        MR_Word STATE_VARIABLE_TVarSet_1_52;
        MR_Word STATE_VARIABLE_ItemRecompDeps_1_53;
        MR_Word STATE_VARIABLE_UsedModules_1_54;
        MR_Word Kind_73 = ((MR_Word) ((MR_hl_field(1, Type0_17, 2))));

        Var_51 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_14, MaybeRecord_15, TypeCtorsAlreadyExpanded_16, ArgTypes0_27, &ArgTypes_28, &ArgTypesChanged_29, Var_51, &Circ0_30, STATE_VARIABLE_TVarSet_0_45, &STATE_VARIABLE_TVarSet_1_52, STATE_VARIABLE_ItemRecompDeps_0_47, &STATE_VARIABLE_ItemRecompDeps_1_53, STATE_VARIABLE_UsedModules_0_49, &STATE_VARIABLE_UsedModules_1_54);
        Arity_31 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_28);
        {
          TypeCtor_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeCtor_32, 0) = ((MR_Box) (SymName_26));
          MR_hl_field(0, TypeCtor_32, 1) = ((MR_Box) (Arity_31));
        }
        parse_tree__equiv_type__replace_type_ctor_18_p_0(TypeEqvMap_14, MaybeRecord_15, TypeCtorsAlreadyExpanded_16, Type0_17, TypeCtor_32, ArgTypes_28, Kind_73, Type_18, ArgTypesChanged_29, Changed_19, Circ0_30, Circ_20, STATE_VARIABLE_TVarSet_1_52, STATE_VARIABLE_TVarSet_46, STATE_VARIABLE_ItemRecompDeps_1_53, STATE_VARIABLE_ItemRecompDeps_48, STATE_VARIABLE_UsedModules_1_54, STATE_VARIABLE_UsedModules_50);
      }
      break;
    case (MR_Integer) 2:
      {
        *Type_18 = Type0_17;
        *Changed_19 = (MR_Integer) 0;
        *Circ_20 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
        *STATE_VARIABLE_TVarSet_46 = STATE_VARIABLE_TVarSet_0_45;
        *STATE_VARIABLE_ItemRecompDeps_48 = STATE_VARIABLE_ItemRecompDeps_0_47;
        *STATE_VARIABLE_UsedModules_50 = STATE_VARIABLE_UsedModules_0_49;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type0_17, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TupleArgTypes0_39 = ((MR_Word) ((MR_hl_field(3, Type0_17, 1))));
            MR_Word TupleArgTypes_40;
            MR_Word Var_62;
            MR_Word Kind_74 = ((MR_Word) ((MR_hl_field(3, Type0_17, 2))));

            Var_62 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_14, MaybeRecord_15, TypeCtorsAlreadyExpanded_16, TupleArgTypes0_39, &TupleArgTypes_40, Changed_19, Var_62, Circ_20, STATE_VARIABLE_TVarSet_0_45, STATE_VARIABLE_TVarSet_46, STATE_VARIABLE_ItemRecompDeps_0_47, STATE_VARIABLE_ItemRecompDeps_48, STATE_VARIABLE_UsedModules_0_49, STATE_VARIABLE_UsedModules_50);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (TupleArgTypes_40));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Kind_74));
                }
                break;
              case (MR_Integer) 0:
                *Type_18 = Type0_17;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_34 = ((MR_Unsigned) ((MR_hl_field(3, Type0_17, 1))) & (MR_Integer) 1);
            MR_Word HOArgTypes0_35 = ((MR_Word) ((MR_hl_field(3, Type0_17, 2))));
            MR_Word HOInstInfo_36 = ((MR_Word) ((MR_hl_field(3, Type0_17, 3))));
            MR_Word Purity_37 = ((MR_Unsigned) ((MR_hl_field(3, Type0_17, 4))) & (MR_Integer) 3);
            MR_Word HOArgTypes_38;
            MR_Word Var_58;

            Var_58 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_14, MaybeRecord_15, TypeCtorsAlreadyExpanded_16, HOArgTypes0_35, &HOArgTypes_38, Changed_19, Var_58, Circ_20, STATE_VARIABLE_TVarSet_0_45, STATE_VARIABLE_TVarSet_46, STATE_VARIABLE_ItemRecompDeps_0_47, STATE_VARIABLE_ItemRecompDeps_48, STATE_VARIABLE_UsedModules_0_49, STATE_VARIABLE_UsedModules_50);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (PorF_34));
                  MR_hl_field(3, base, 2) = ((MR_Box) (HOArgTypes_38));
                  MR_hl_field(3, base, 3) = ((MR_Box) (HOInstInfo_36));
                  MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_37));
                }
                break;
              case (MR_Integer) 0:
                *Type_18 = Type0_17;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ApplyArgTypes0_41 = ((MR_Word) ((MR_hl_field(3, Type0_17, 2))));
            MR_Word ApplyArgTypes_42;
            MR_Word Var_66;
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(3, Type0_17, 1))));
            MR_Word Kind_76 = ((MR_Word) ((MR_hl_field(3, Type0_17, 3))));

            Var_66 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
            parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(TypeEqvMap_14, MaybeRecord_15, TypeCtorsAlreadyExpanded_16, ApplyArgTypes0_41, &ApplyArgTypes_42, Changed_19, Var_66, Circ_20, STATE_VARIABLE_TVarSet_0_45, STATE_VARIABLE_TVarSet_46, STATE_VARIABLE_ItemRecompDeps_0_47, STATE_VARIABLE_ItemRecompDeps_48, STATE_VARIABLE_UsedModules_0_49, STATE_VARIABLE_UsedModules_50);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (Var_75));
                  MR_hl_field(3, base, 2) = ((MR_Box) (ApplyArgTypes_42));
                  MR_hl_field(3, base, 3) = ((MR_Box) (Kind_76));
                }
                break;
              case (MR_Integer) 0:
                *Type_18 = Type0_17;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word RawType0_43 = ((MR_Word) ((MR_hl_field(3, Type0_17, 1))));
            MR_Word RawType_44;
            MR_Word Kind_77 = ((MR_Word) ((MR_hl_field(3, Type0_17, 2))));

            parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_14, MaybeRecord_15, TypeCtorsAlreadyExpanded_16, RawType0_43, &RawType_44, Changed_19, Circ_20, STATE_VARIABLE_TVarSet_0_45, STATE_VARIABLE_TVarSet_46, STATE_VARIABLE_ItemRecompDeps_0_47, STATE_VARIABLE_ItemRecompDeps_48, STATE_VARIABLE_UsedModules_0_49, STATE_VARIABLE_UsedModules_50);
            switch (*Changed_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Type_18 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, base, 1) = ((MR_Box) (RawType_44));
                  MR_hl_field(3, base, 2) = ((MR_Box) (Kind_77));
                }
                break;
              case (MR_Integer) 0:
                *Type_18 = Type0_17;
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
  MR_Word TypeEqvMap_19,
  MR_Word MaybeRecord_20,
  MR_Word TypeCtorsAlreadyExpanded_21,
  MR_Word Type0_22,
  MR_Word TypeCtor_23,
  MR_Word ArgTypes_24,
  MR_Word Kind_25,
  MR_Word * Type_26,
  MR_Word ArgTypesChanged_27,
  MR_Word * Changed_28,
  MR_Word STATE_VARIABLE_Circ_0_49,
  MR_Word * STATE_VARIABLE_Circ_50,
  MR_Word STATE_VARIABLE_TVarSet_0_51,
  MR_Word * STATE_VARIABLE_TVarSet_52,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_53,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_54,
  MR_Word STATE_VARIABLE_UsedModules_0_55,
  MR_Word * STATE_VARIABLE_UsedModules_56)
{
  MR_bool succeeded;
  MR_Word AlreadyExpanded_33;
  MR_Word NewCirc_34;
  MR_Word EqvTypeParams0_37;
  MR_Word Body0_38;
  MR_Word Renaming_39;
  MR_Word STATE_VARIABLE_TVarSet_1_57;
  MR_Word EqvTypeBody_35;
  MR_Word EqvTVarSet_36;
  MR_Box conv0_EqvTypeBody_35;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_23)), TypeCtorsAlreadyExpanded_21);
  if (succeeded)
  {
    AlreadyExpanded_33 = (MR_Integer) 1;
    NewCirc_34 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), ((MR_Box) (TypeCtor_23)));
  }
  else
  {
    AlreadyExpanded_33 = (MR_Integer) 0;
    NewCirc_34 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0));
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__build_eqv_maps__parse_tree__build_eqv_maps__type_ctor_info_eqv_type_body_0), TypeEqvMap_19, ((MR_Box) (TypeCtor_23)), &conv0_EqvTypeBody_35);
  if (succeeded)
  {
    EqvTypeBody_35 = ((MR_Word) (conv0_EqvTypeBody_35));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    EqvTVarSet_36 = ((MR_Word) ((MR_hl_field(0, EqvTypeBody_35, 0))));
    EqvTypeParams0_37 = ((MR_Word) ((MR_hl_field(0, EqvTypeBody_35, 1))));
    Body0_38 = ((MR_Word) ((MR_hl_field(0, EqvTypeBody_35, 2))));
    parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(STATE_VARIABLE_TVarSet_0_51, EqvTVarSet_36, &STATE_VARIABLE_TVarSet_1_57, &Renaming_39);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), STATE_VARIABLE_Circ_0_49);
    if (succeeded)
      succeeded = (AlreadyExpanded_33 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word EqvTypeParams_41;
    MR_Word Body1_42;
    MR_Word TypeCtorItem_43;
    MR_Word Subst_44;
    MR_Word Body_45;
    MR_Word STATE_VARIABLE_UsedModules_1_58;
    MR_Word Var_59;
    MR_Word STATE_VARIABLE_ItemRecompDeps_1_60;
    MR_Word Var_62;
    MR_Word Var_46;

    if ((MaybeRecord_20 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_UsedModules_1_58 = STATE_VARIABLE_UsedModules_0_55;
    else
    {
      MR_Word Visibility_40 = ((MR_Unsigned) ((MR_hl_field(1, MaybeRecord_20, 0))) & (MR_Integer) 1);

      parse_tree__prog_data_used_modules__record_expanded_eqv_type_ctor_4_p_0(Visibility_40, TypeCtor_23, STATE_VARIABLE_UsedModules_0_55, &STATE_VARIABLE_UsedModules_1_58);
    }
    *Changed_28 = (MR_Integer) 1;
    mercury__map__apply_to_list_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), EqvTypeParams0_37, Renaming_39, &EqvTypeParams_41);
    parse_tree__prog_type_subst__apply_renaming_to_type_3_p_0(Renaming_39, Body0_38, &Body1_42);
    TypeCtorItem_43 = recompilation__item_types__type_ctor_to_recomp_item_name_1_f_0(TypeCtor_23);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_59, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(0, Var_59, 1) = ((MR_Box) (TypeCtorItem_43));
    }
    recompilation__record_uses__gather_item_recomp_dep_3_p_0(Var_59, STATE_VARIABLE_ItemRecompDeps_0_53, &STATE_VARIABLE_ItemRecompDeps_1_60);
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&parse_tree__equiv_type_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), EqvTypeParams_41, ArgTypes_24, &Subst_44);
    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(Subst_44, Body1_42, &Body_45);
    {
      Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_62, 0) = ((MR_Box) (TypeCtor_23));
      MR_hl_field(1, Var_62, 1) = ((MR_Box) (TypeCtorsAlreadyExpanded_21));
    }
    parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(TypeEqvMap_19, MaybeRecord_20, Var_62, Body_45, Type_26, &Var_46, STATE_VARIABLE_Circ_50, STATE_VARIABLE_TVarSet_1_57, STATE_VARIABLE_TVarSet_52, STATE_VARIABLE_ItemRecompDeps_1_60, STATE_VARIABLE_ItemRecompDeps_54, STATE_VARIABLE_UsedModules_1_58, STATE_VARIABLE_UsedModules_56);
  }
  else
  {
    switch (ArgTypesChanged_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word SymName_47 = ((MR_Word) ((MR_hl_field(0, TypeCtor_23, 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *Type_26 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (SymName_47));
            MR_hl_field(1, base, 1) = ((MR_Box) (ArgTypes_24));
            MR_hl_field(1, base, 2) = ((MR_Box) (Kind_25));
          }
        }
        break;
      case (MR_Integer) 0:
        *Type_26 = Type0_22;
        break;
    }
    *Changed_28 = ArgTypesChanged_27;
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), NewCirc_34, STATE_VARIABLE_Circ_0_49, STATE_VARIABLE_Circ_50);
    *STATE_VARIABLE_UsedModules_56 = STATE_VARIABLE_UsedModules_0_55;
    *STATE_VARIABLE_ItemRecompDeps_54 = STATE_VARIABLE_ItemRecompDeps_0_53;
    *STATE_VARIABLE_TVarSet_52 = STATE_VARIABLE_TVarSet_0_51;
  }
}

static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_TVarSet_0_9,
  MR_Word * STATE_VARIABLE_TVarSet_10,
  MR_Word STATE_VARIABLE_ItemRecompDeps_0_11,
  MR_Word * STATE_VARIABLE_ItemRecompDeps_12,
  MR_Word STATE_VARIABLE_UsedModules_0_13,
  MR_Word * STATE_VARIABLE_UsedModules_14)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Integer) 0;
    *STATE_VARIABLE_UsedModules_14 = STATE_VARIABLE_UsedModules_0_13;
    *STATE_VARIABLE_ItemRecompDeps_12 = STATE_VARIABLE_ItemRecompDeps_0_11;
    *STATE_VARIABLE_TVarSet_10 = STATE_VARIABLE_TVarSet_0_9;
    *HeadVar__8_8 = HeadVar__7_7;
  }
  else
  {
    MR_Word HeadType0_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word TailTypes0_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word HeadType_42;
    MR_Word HeadChanged_43;
    MR_Word HeadCirc_44;
    MR_Word TailTypes_45;
    MR_Word TailChanged_46;
    MR_Word STATE_VARIABLE_TVarSet_1_55;
    MR_Word STATE_VARIABLE_ItemRecompDeps_1_56;
    MR_Word STATE_VARIABLE_UsedModules_1_57;
    MR_Word STATE_VARIABLE_Circ_1_58;

    parse_tree__equiv_type__replace_in_type_maybe_record_use_13_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadType0_34, &HeadType_42, &HeadChanged_43, &HeadCirc_44, STATE_VARIABLE_TVarSet_0_9, &STATE_VARIABLE_TVarSet_1_55, STATE_VARIABLE_ItemRecompDeps_0_11, &STATE_VARIABLE_ItemRecompDeps_1_56, STATE_VARIABLE_UsedModules_0_13, &STATE_VARIABLE_UsedModules_1_57);
    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), HeadCirc_44, HeadVar__7_7, &STATE_VARIABLE_Circ_1_58);
    parse_tree__equiv_type__replace_in_type_list_location_acc_circ_14_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, TailTypes0_35, &TailTypes_45, &TailChanged_46, STATE_VARIABLE_Circ_1_58, HeadVar__8_8, STATE_VARIABLE_TVarSet_1_55, STATE_VARIABLE_TVarSet_10, STATE_VARIABLE_ItemRecompDeps_1_56, STATE_VARIABLE_ItemRecompDeps_12, STATE_VARIABLE_UsedModules_1_57, STATE_VARIABLE_UsedModules_14);
    succeeded = (HeadChanged_43 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (TailChanged_46 == (MR_Integer) 1);
    if (succeeded)
    {
      *HeadVar__6_6 = (MR_Integer) 1;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadType_42));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailTypes_45));
      }
    }
    else
    {
      *HeadVar__6_6 = (MR_Integer) 0;
      *HeadVar__5_5 = HeadVar__4_4;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____circ_types_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__equiv_type____Unify____circ_types_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____circ_types_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__equiv_type____Compare____circ_types_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__equiv_type__init(void)
{
}

void mercury__parse_tree__equiv_type__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_circ_types_0);
  MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0);
}

void mercury__parse_tree__equiv_type__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__equiv_type__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.equiv_type.
