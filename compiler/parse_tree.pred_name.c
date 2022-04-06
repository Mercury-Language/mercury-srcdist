/*
** Automatically generated from `pred_name.m'
** by the Mercury compiler,
** version rotd-2022-04-06
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


// :- module parse_tree.pred_name.
// :- implementation.

/*
INIT mercury__parse_tree__pred_name__init
ENDINIT
*/

#include "parse_tree.pred_name.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
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
#include "libs.compiler_util.mih"
#include "libs.globals.mih"
#include "libs.rat.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__pred_name__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_0;

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_1;

static const MR_EnumFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__enum_ordinal_ordered_aux_tabling_maybe_single_proc_0[2];

static const MR_EnumFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__enum_name_ordered_aux_tabling_maybe_single_proc_0[2];

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_aux_tabling_maybe_single_proc_0[2];

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_1;

static const MR_EnumFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__enum_ordinal_ordered_aux_tabling_pred_kind_0[2];

static const MR_EnumFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__enum_name_ordered_aux_tabling_pred_kind_0[2];

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_aux_tabling_pred_kind_0[2];

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_line_number_and_counter_0_0[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_line_number_and_counter_0_0;

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_line_number_and_counter_0_0[1];

static const MR_DuPtagLayout parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_line_number_and_counter_0[1];

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_line_number_and_counter_0[1];

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_line_number_and_counter_0[1];

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_0;

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_1;

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_2;

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_3;

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_4;

static const MR_EnumFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__enum_ordinal_ordered_stm_clone_kind_0[5];

static const MR_EnumFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__enum_name_ordered_stm_clone_kind_0[5];

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_stm_clone_kind_0[5];

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_0[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_0[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_0;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_1[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_1[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_1;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_2[5];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_2[5];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_2;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_3[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_3[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_3;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_4[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_4[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_4;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_5[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_5[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_5;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_6[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_6[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_6;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_7[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_7[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_7;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_8[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_8[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_8;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_9[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_9[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_9;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_10[1];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_10[1];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_10;

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_11[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_11[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_11;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_12[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_12[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_12;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_13[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_13[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_13;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_14[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_14[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_14;

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__pred_name__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_15[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_15;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_16[1];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_16[1];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_16;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_17[2];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_17[2];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_17;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_18[5];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_18[5];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_18;

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_19[3];

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_19[3];

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_19;

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_3[17];

static const MR_DuPtagLayout parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_transform_name_0[4];

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_transform_name_0[20];

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_transform_name_0[20];

static MR_String MR_CALL 
parse_tree__pred_name__type_var_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__pred_name__instance_type_ctor_to_string_2_p_0(
  MR_Word Type_3,
  MR_String * Str_4);

static void MR_CALL 
parse_tree__pred_name__make_instance_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__pred_name__make_instance_method_pred_name_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__pred_name__ints_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__pred_name__ints_to_string_1_f_0(
  MR_Word Ints_3);

static MR_Box MR_CALL 
parse_tree__pred_name__type_subst_to_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
parse_tree__pred_name__type_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word TypeSubst_5);

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____aux_tabling_maybe_single_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__pred_name____Compare____aux_tabling_maybe_single_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____aux_tabling_pred_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__pred_name____Compare____aux_tabling_pred_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____line_number_and_counter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__pred_name____Compare____line_number_and_counter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____stm_clone_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__pred_name____Compare____stm_clone_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____transform_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__pred_name____Compare____transform_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__pred_name_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_2[4][3];

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_4[1][6];

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_5[2][5];


struct parse_tree__pred_name__vector_common_type_6_0_s {
  const MR_String parse_tree__pred_name__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct parse_tree__pred_name__vector_common_type_6_0_s parse_tree__pred_name_vector_common_6[5];



static /* final */ const MR_Box parse_tree__pred_name_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__pred_name_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__pred_name_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__pred_name_scalar_common_5[0])),
    ((MR_Box) (parse_tree__pred_name__ints_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__pred_name_scalar_common_5[1])),
    ((MR_Box) (parse_tree__pred_name__make_instance_method_pred_name_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__pred_name_scalar_common_5[1])),
    ((MR_Box) (parse_tree__pred_name__make_instance_string_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_3[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__pred_name__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__pred_name_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct parse_tree__pred_name__vector_common_type_6_0_s parse_tree__pred_name_vector_common_6[5] = {
  /* row   0 */   { (MR_String) "top_level" },
  /* row   1 */   { (MR_String) "rollback" },
  /* row   2 */   { (MR_String) "wrapper" },
  /* row   3 */   { (MR_String) "simple_wrapper" },
  /* row   4 */   { (MR_String) "or_else" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__pred_name__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__pred_name__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__pred_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_0 = {
  (MR_String) "is_not_single_proc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_1 = {
  (MR_String) "is_single_proc",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__enum_ordinal_ordered_aux_tabling_maybe_single_proc_0[2] = {
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_0,
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__enum_name_ordered_aux_tabling_maybe_single_proc_0[2] = {
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_0,
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_maybe_single_proc_0_1
};

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_aux_tabling_maybe_single_proc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_aux_tabling_maybe_single_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__pred_name____Unify____aux_tabling_maybe_single_proc_0_0_10001)),
  ((MR_Box) (parse_tree__pred_name____Compare____aux_tabling_maybe_single_proc_0_0_10001)),
  (MR_String) "parse_tree.pred_name",
  (MR_String) "aux_tabling_maybe_single_proc",
  { parse_tree__pred_name__parse_tree__pred_name__enum_name_ordered_aux_tabling_maybe_single_proc_0 },
  { parse_tree__pred_name__parse_tree__pred_name__enum_ordinal_ordered_aux_tabling_maybe_single_proc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__pred_name__parse_tree__pred_name__functor_number_map_aux_tabling_maybe_single_proc_0,

};

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_0 = {
  (MR_String) "atpk_statistics",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_1 = {
  (MR_String) "atpk_reset",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__enum_ordinal_ordered_aux_tabling_pred_kind_0[2] = {
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_0,
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__enum_name_ordered_aux_tabling_pred_kind_0[2] = {
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_1,
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_aux_tabling_pred_kind_0_0
};

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_aux_tabling_pred_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_aux_tabling_pred_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__pred_name____Unify____aux_tabling_pred_kind_0_0_10001)),
  ((MR_Box) (parse_tree__pred_name____Compare____aux_tabling_pred_kind_0_0_10001)),
  (MR_String) "parse_tree.pred_name",
  (MR_String) "aux_tabling_pred_kind",
  { parse_tree__pred_name__parse_tree__pred_name__enum_name_ordered_aux_tabling_pred_kind_0 },
  { parse_tree__pred_name__parse_tree__pred_name__enum_ordinal_ordered_aux_tabling_pred_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__pred_name__parse_tree__pred_name__functor_number_map_aux_tabling_pred_kind_0,

};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_line_number_and_counter_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_line_number_and_counter_0_0 = {
  (MR_String) "lnc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__pred_name__parse_tree__pred_name__field_types_line_number_and_counter_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_line_number_and_counter_0_0[1] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_line_number_and_counter_0_0
};

static const MR_DuPtagLayout parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_line_number_and_counter_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_line_number_and_counter_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_line_number_and_counter_0[1] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_line_number_and_counter_0_0
};

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_line_number_and_counter_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__pred_name____Unify____line_number_and_counter_0_0_10001)),
  ((MR_Box) (parse_tree__pred_name____Compare____line_number_and_counter_0_0_10001)),
  (MR_String) "parse_tree.pred_name",
  (MR_String) "line_number_and_counter",
  { parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_line_number_and_counter_0 },
  { parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_line_number_and_counter_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__pred_name__parse_tree__pred_name__functor_number_map_line_number_and_counter_0,

};

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_0 = {
  (MR_String) "stmck_top_level",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_1 = {
  (MR_String) "stmck_rollback",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_2 = {
  (MR_String) "stmck_wrapper",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_3 = {
  (MR_String) "stmck_simple_wrapper",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_4 = {
  (MR_String) "stmck_or_else",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__enum_ordinal_ordered_stm_clone_kind_0[5] = {
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_0,
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_1,
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_2,
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_3,
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_4
};

static const MR_EnumFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__enum_name_ordered_stm_clone_kind_0[5] = {
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_4,
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_1,
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_3,
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_0,
  &parse_tree__pred_name__parse_tree__pred_name__enum_functor_desc_stm_clone_kind_0_2
};

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_stm_clone_kind_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_stm_clone_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__pred_name____Unify____stm_clone_kind_0_0_10001)),
  ((MR_Box) (parse_tree__pred_name____Compare____stm_clone_kind_0_0_10001)),
  (MR_String) "parse_tree.pred_name",
  (MR_String) "stm_clone_kind",
  { parse_tree__pred_name__parse_tree__pred_name__enum_name_ordered_stm_clone_kind_0 },
  { parse_tree__pred_name__parse_tree__pred_name__enum_ordinal_ordered_stm_clone_kind_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  parse_tree__pred_name__parse_tree__pred_name__functor_number_map_stm_clone_kind_0,

};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_0 = {
  (MR_String) "tn_higher_order",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_0,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_1[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_1[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_1 = {
  (MR_String) "tn_higher_order_type_spec",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_1,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_2[5] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_aux_tabling_pred_kind_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_aux_tabling_maybe_single_proc_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_2[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_2 = {
  (MR_String) "tn_aux_tabling",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_2,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_3[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_3[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_3 = {
  (MR_String) "tn_accumulator",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_3,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_4[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_4[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_4 = {
  (MR_String) "tn_deforestation",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_4,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_5[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_5[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_5 = {
  (MR_String) "tn_lambda",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_5,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_6[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_6[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_6 = {
  (MR_String) "tn_loop_inv",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_6,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_7[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_7[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_7 = {
  (MR_String) "tn_tupling",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_7,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_7,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_8[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_8[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_8 = {
  (MR_String) "tn_untupling",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_8,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_8,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_9[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_9[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_9 = {
  (MR_String) "tn_last_call_modulo_cons",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_9,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_9,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_10[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_10[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_10 = {
  (MR_String) "tn_ssdb_stdlib_proxy",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_10,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_10,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_11[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_11[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_11 = {
  (MR_String) "tn_dep_par_conj",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(11),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_11,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_11,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_12[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_12[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_12 = {
  (MR_String) "tn_par_distance_granularity",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(12),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_12,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_12,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_13[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_13[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_13 = {
  (MR_String) "tn_par_loop_control",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 10,
  INT32_C(13),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_13,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_13,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_14[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_14[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_14 = {
  (MR_String) "tn_structure_reuse",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 11,
  INT32_C(14),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_14,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_14,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__pred_name__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__pred_name__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__pred_name__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__pred_name__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_15[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0)
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_15 = {
  (MR_String) "tn_pragma_type_spec",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 12,
  INT32_C(15),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_16[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_16[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_16 = {
  (MR_String) "tn_io_tabling",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 13,
  INT32_C(16),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_16,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_16,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_17[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_17[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_17 = {
  (MR_String) "tn_minimal_model_generator",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 14,
  INT32_C(17),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_17,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_17,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_18[5] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_stm_clone_kind_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_18[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
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
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_18 = {
  (MR_String) "tn_stm_expanded",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 15,
  INT32_C(18),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_18,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_18,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_19[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__pred_name__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_19[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_19 = {
  (MR_String) "tn_unused_args",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 16,
  INT32_C(19),
  parse_tree__pred_name__parse_tree__pred_name__field_types_transform_name_0_19,
  NULL,
  parse_tree__pred_name__parse_tree__pred_name__field_locns_transform_name_0_19,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_0[1] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_0
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_1[1] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_1
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_2[1] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_2
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_3[17] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_3,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_4,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_5,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_6,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_7,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_8,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_9,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_10,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_11,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_12,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_13,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_14,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_15,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_16,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_17,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_18,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_19
};

static const MR_DuPtagLayout parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_transform_name_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(17),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__pred_name__parse_tree__pred_name__du_stag_ordered_transform_name_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_transform_name_0[20] = {
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_3,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_2,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_4,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_11,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_0,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_1,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_16,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_5,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_9,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_6,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_17,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_12,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_13,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_15,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_10,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_18,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_14,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_7,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_8,
  &parse_tree__pred_name__parse_tree__pred_name__du_functor_desc_transform_name_0_19
};

static const MR_Integer parse_tree__pred_name__parse_tree__pred_name__functor_number_map_transform_name_0[20] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 17,
  (MR_Integer) 18,
  (MR_Integer) 8,
  (MR_Integer) 14,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 16,
  (MR_Integer) 13,
  (MR_Integer) 6,
  (MR_Integer) 10,
  (MR_Integer) 15,
  (MR_Integer) 19
};

const MR_TypeCtorInfo_Struct parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_transform_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__pred_name____Unify____transform_name_0_0_10001)),
  ((MR_Box) (parse_tree__pred_name____Compare____transform_name_0_0_10001)),
  (MR_String) "parse_tree.pred_name",
  (MR_String) "transform_name",
  { parse_tree__pred_name__parse_tree__pred_name__du_name_ordered_transform_name_0 },
  { parse_tree__pred_name__parse_tree__pred_name__du_ptag_ordered_transform_name_0 },
  (MR_Integer) 20,
  UINT16_C(12),
  parse_tree__pred_name__parse_tree__pred_name__functor_number_map_transform_name_0,

};

void MR_CALL 
parse_tree__pred_name____Compare____transform_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_143 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_144 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_143 == CastY_144);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer Var_4;
    MR_Integer Var_5;

    parse_tree__pred_name____Index____transform_name_0_0(HeadVar__2_2, &Var_4);
    parse_tree__pred_name____Index____transform_name_0_0(HeadVar__3_3, &Var_5);
    succeeded = (Var_4 < Var_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_4 > Var_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word Var_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_8;
              MR_Integer ArgX2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              MR_Integer ArgY2_11;
              MR_Word SubResult1_9;
              MR_Integer Var_211;
              MR_Integer Var_212;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                ArgY2_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                Var_211 = (MR_Integer) (ArgX1_7);
                Var_212 = (MR_Integer) (ArgY1_8);
                succeeded = (Var_211 < Var_212);
                if (succeeded)
                {
                  SubResult1_9 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_211 > Var_212);
                  if (succeeded)
                  {
                    SubResult1_9 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_9 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  Var_6 = SubResult1_9;
                else
                {
                  succeeded = (ArgX2_10 < ArgY2_11);
                  if (succeeded)
                    Var_6 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX2_10 > ArgY2_11);
                    if (succeeded)
                      Var_6 = (MR_Integer) 2;
                    else
                      Var_6 = (MR_Integer) 0;
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_13;
              MR_Integer ArgX2_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              MR_Integer ArgY2_16;
              MR_Integer ArgX3_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer ArgY3_19;
              MR_Word SubResult1_14;
              MR_Integer Var_213;
              MR_Integer Var_214;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                ArgY2_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                ArgY3_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                Var_213 = (MR_Integer) (ArgX1_12);
                Var_214 = (MR_Integer) (ArgY1_13);
                succeeded = (Var_213 < Var_214);
                if (succeeded)
                {
                  SubResult1_14 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_213 > Var_214);
                  if (succeeded)
                  {
                    SubResult1_14 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_14 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  Var_6 = SubResult1_14;
                else
                {
                  MR_Word SubResult2_17;

                  succeeded = (ArgX2_15 < ArgY2_16);
                  if (succeeded)
                  {
                    SubResult2_17 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX2_15 > ArgY2_16);
                    if (succeeded)
                    {
                      SubResult2_17 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_17 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    Var_6 = SubResult2_17;
                  else
                  {
                    succeeded = (ArgX3_18 < ArgY3_19);
                    if (succeeded)
                      Var_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (ArgX3_18 > ArgY3_19);
                      if (succeeded)
                        Var_6 = (MR_Integer) 2;
                      else
                        Var_6 = (MR_Integer) 0;
                    }
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_21;
              MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_24;
              MR_Word ArgX3_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
              MR_Word ArgY3_27;
              MR_Word ArgX4_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word ArgY4_30;
              MR_Integer ArgX5_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
              MR_Integer ArgY5_33;
              MR_Word SubResult1_22;
              MR_Integer Var_199;
              MR_Integer Var_200;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
              if (succeeded)
              {
                ArgY1_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                ArgY2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                ArgY3_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
                ArgY4_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
                ArgY5_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                Var_199 = (MR_Integer) (ArgX1_20);
                Var_200 = (MR_Integer) (ArgY1_21);
                succeeded = (Var_199 < Var_200);
                if (succeeded)
                {
                  SubResult1_22 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_199 > Var_200);
                  if (succeeded)
                  {
                    SubResult1_22 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_22 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  Var_6 = SubResult1_22;
                else
                {
                  MR_Word SubResult2_25;
                  MR_Integer Var_201 = (MR_Integer) (ArgX2_23);
                  MR_Integer Var_202 = (MR_Integer) (ArgY2_24);

                  succeeded = (Var_201 < Var_202);
                  if (succeeded)
                  {
                    SubResult2_25 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_201 > Var_202);
                    if (succeeded)
                    {
                      SubResult2_25 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_25 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    Var_6 = SubResult2_25;
                  else
                  {
                    MR_Word SubResult3_28;
                    MR_Integer Var_203 = (MR_Integer) (ArgX3_26);
                    MR_Integer Var_204 = (MR_Integer) (ArgY3_27);

                    succeeded = (Var_203 < Var_204);
                    if (succeeded)
                    {
                      SubResult3_28 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_203 > Var_204);
                      if (succeeded)
                      {
                        SubResult3_28 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult3_28 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult3_28;
                    else
                    {
                      MR_Word SubResult4_31;
                      MR_Integer Var_205 = (MR_Integer) (ArgX4_29);
                      MR_Integer Var_206 = (MR_Integer) (ArgY4_30);

                      succeeded = (Var_205 < Var_206);
                      if (succeeded)
                      {
                        SubResult4_31 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_205 > Var_206);
                        if (succeeded)
                        {
                          SubResult4_31 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult4_31 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult4_31;
                      else
                      {
                        succeeded = (ArgX5_32 < ArgY5_33);
                        if (succeeded)
                          Var_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX5_32 > ArgY5_33);
                          if (succeeded)
                            Var_6 = (MR_Integer) 2;
                          else
                            Var_6 = (MR_Integer) 0;
                        }
                      }
                    }
                  }
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgX1_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_35;
                  MR_Word ArgX2_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_38;
                  MR_Word SubResult1_36;
                  MR_Integer Var_197;
                  MR_Integer Var_198;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    ArgY1_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_197 = (MR_Integer) (ArgX1_34);
                    Var_198 = (MR_Integer) (ArgY1_35);
                    succeeded = (Var_197 < Var_198);
                    if (succeeded)
                    {
                      SubResult1_36 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_197 > Var_198);
                      if (succeeded)
                      {
                        SubResult1_36 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_36 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_36;
                    else
                      parse_tree__pred_name____Compare____line_number_and_counter_0_0(&Var_6, ArgX2_37, ArgY2_38);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgX1_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_40;
                  MR_Word ArgX2_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_43;
                  MR_Word SubResult1_41;
                  MR_Integer Var_207;
                  MR_Integer Var_208;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    ArgY1_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_207 = (MR_Integer) (ArgX1_39);
                    Var_208 = (MR_Integer) (ArgY1_40);
                    succeeded = (Var_207 < Var_208);
                    if (succeeded)
                    {
                      SubResult1_41 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_207 > Var_208);
                      if (succeeded)
                      {
                        SubResult1_41 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_41 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_41;
                    else
                      parse_tree__pred_name____Compare____line_number_and_counter_0_0(&Var_6, ArgX2_42, ArgY2_43);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgX1_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_45;
                  MR_Word ArgX2_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_48;
                  MR_Word SubResult1_46;
                  MR_Integer Var_217;
                  MR_Integer Var_218;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    ArgY1_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_217 = (MR_Integer) (ArgX1_44);
                    Var_218 = (MR_Integer) (ArgY1_45);
                    succeeded = (Var_217 < Var_218);
                    if (succeeded)
                    {
                      SubResult1_46 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_217 > Var_218);
                      if (succeeded)
                      {
                        SubResult1_46 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_46 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_46;
                    else
                      parse_tree__pred_name____Compare____line_number_and_counter_0_0(&Var_6, ArgX2_47, ArgY2_48);
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgX1_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_50;
                  MR_Integer ArgX2_52 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_53;
                  MR_Word ArgX3_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_56;
                  MR_Word SubResult1_51;
                  MR_Integer Var_221;
                  MR_Integer Var_222;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    ArgY1_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_221 = (MR_Integer) (ArgX1_49);
                    Var_222 = (MR_Integer) (ArgY1_50);
                    succeeded = (Var_221 < Var_222);
                    if (succeeded)
                    {
                      SubResult1_51 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_221 > Var_222);
                      if (succeeded)
                      {
                        SubResult1_51 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_51 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_51;
                    else
                    {
                      MR_Word SubResult2_54;

                      succeeded = (ArgX2_52 < ArgY2_53);
                      if (succeeded)
                      {
                        SubResult2_54 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_52 > ArgY2_53);
                        if (succeeded)
                        {
                          SubResult2_54 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_54 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult2_54;
                      else
                        parse_tree__pred_name____Compare____line_number_and_counter_0_0(&Var_6, ArgX3_55, ArgY3_56);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ArgX1_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_58;
                  MR_Integer ArgX2_60 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_61;
                  MR_Word ArgX3_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_64;
                  MR_Word SubResult1_59;
                  MR_Integer Var_237;
                  MR_Integer Var_238;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ArgY1_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_237 = (MR_Integer) (ArgX1_57);
                    Var_238 = (MR_Integer) (ArgY1_58);
                    succeeded = (Var_237 < Var_238);
                    if (succeeded)
                    {
                      SubResult1_59 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_237 > Var_238);
                      if (succeeded)
                      {
                        SubResult1_59 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_59 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_59;
                    else
                    {
                      MR_Word SubResult2_62;

                      succeeded = (ArgX2_60 < ArgY2_61);
                      if (succeeded)
                      {
                        SubResult2_62 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_60 > ArgY2_61);
                        if (succeeded)
                        {
                          SubResult2_62 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_62 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult2_62;
                      else
                        parse_tree__pred_name____Compare____line_number_and_counter_0_0(&Var_6, ArgX3_63, ArgY3_64);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ArgX1_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_66;
                  MR_Integer ArgX2_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_69;
                  MR_Word ArgX3_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_72;
                  MR_Word SubResult1_67;
                  MR_Integer Var_239;
                  MR_Integer Var_240;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    ArgY1_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_69 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_239 = (MR_Integer) (ArgX1_65);
                    Var_240 = (MR_Integer) (ArgY1_66);
                    succeeded = (Var_239 < Var_240);
                    if (succeeded)
                    {
                      SubResult1_67 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_239 > Var_240);
                      if (succeeded)
                      {
                        SubResult1_67 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_67 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_67;
                    else
                    {
                      MR_Word SubResult2_70;

                      succeeded = (ArgX2_68 < ArgY2_69);
                      if (succeeded)
                      {
                        SubResult2_70 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_68 > ArgY2_69);
                        if (succeeded)
                        {
                          SubResult2_70 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_70 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult2_70;
                      else
                        parse_tree__pred_name____Compare____line_number_and_counter_0_0(&Var_6, ArgX3_71, ArgY3_72);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ArgX1_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_74;
                  MR_Integer ArgX2_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_77;
                  MR_Word SubResult1_75;
                  MR_Integer Var_219;
                  MR_Integer Var_220;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    ArgY1_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_77 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_219 = (MR_Integer) (ArgX1_73);
                    Var_220 = (MR_Integer) (ArgY1_74);
                    succeeded = (Var_219 < Var_220);
                    if (succeeded)
                    {
                      SubResult1_75 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_219 > Var_220);
                      if (succeeded)
                      {
                        SubResult1_75 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_75 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_75;
                    else
                    {
                      succeeded = (ArgX2_76 < ArgY2_77);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_76 > ArgY2_77);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word ArgX1_78 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_79;
                  MR_Integer Var_229;
                  MR_Integer Var_230;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                  if (succeeded)
                  {
                    ArgY1_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    Var_229 = (MR_Integer) (ArgX1_78);
                    Var_230 = (MR_Integer) (ArgY1_79);
                    succeeded = (Var_229 < Var_230);
                    if (succeeded)
                      Var_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_229 > Var_230);
                      if (succeeded)
                        Var_6 = (MR_Integer) 2;
                      else
                        Var_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ArgX1_80 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_81;
                  MR_Integer ArgX2_83 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_84;
                  MR_Word ArgX3_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_87;
                  MR_Word SubResult1_82;
                  MR_Integer Var_209;
                  MR_Integer Var_210;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    ArgY1_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_209 = (MR_Integer) (ArgX1_80);
                    Var_210 = (MR_Integer) (ArgY1_81);
                    succeeded = (Var_209 < Var_210);
                    if (succeeded)
                    {
                      SubResult1_82 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_209 > Var_210);
                      if (succeeded)
                      {
                        SubResult1_82 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_82 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_82;
                    else
                    {
                      MR_Word SubResult2_85;

                      succeeded = (ArgX2_83 < ArgY2_84);
                      if (succeeded)
                      {
                        SubResult2_85 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_83 > ArgY2_84);
                        if (succeeded)
                        {
                          SubResult2_85 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_85 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult2_85;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[1]), &Var_6, ((MR_Box) (ArgX3_86)), ((MR_Box) (ArgY3_87)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Word ArgX1_88 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_89;
                  MR_Integer ArgX2_91 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_92;
                  MR_Word SubResult1_90;
                  MR_Integer Var_225;
                  MR_Integer Var_226;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
                  if (succeeded)
                  {
                    ArgY1_89 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_92 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_225 = (MR_Integer) (ArgX1_88);
                    Var_226 = (MR_Integer) (ArgY1_89);
                    succeeded = (Var_225 < Var_226);
                    if (succeeded)
                    {
                      SubResult1_90 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_225 > Var_226);
                      if (succeeded)
                      {
                        SubResult1_90 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_90 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_90;
                    else
                    {
                      succeeded = (ArgX2_91 < ArgY2_92);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_91 > ArgY2_92);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_Word ArgX1_93 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_94;
                  MR_Integer ArgX2_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_97;
                  MR_Word SubResult1_95;
                  MR_Integer Var_227;
                  MR_Integer Var_228;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
                  if (succeeded)
                  {
                    ArgY1_94 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_227 = (MR_Integer) (ArgX1_93);
                    Var_228 = (MR_Integer) (ArgY1_94);
                    succeeded = (Var_227 < Var_228);
                    if (succeeded)
                    {
                      SubResult1_95 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_227 > Var_228);
                      if (succeeded)
                      {
                        SubResult1_95 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_95 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_95;
                    else
                    {
                      succeeded = (ArgX2_96 < ArgY2_97);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_96 > ArgY2_97);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_Word ArgX1_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_99;
                  MR_Integer ArgX2_101 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_102;
                  MR_Word ArgX3_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_105;
                  MR_Word SubResult1_100;
                  MR_Integer Var_235;
                  MR_Integer Var_236;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    ArgY1_99 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_102 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_235 = (MR_Integer) (ArgX1_98);
                    Var_236 = (MR_Integer) (ArgY1_99);
                    succeeded = (Var_235 < Var_236);
                    if (succeeded)
                    {
                      SubResult1_100 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_235 > Var_236);
                      if (succeeded)
                      {
                        SubResult1_100 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_100 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_100;
                    else
                    {
                      MR_Word SubResult2_103;

                      succeeded = (ArgX2_101 < ArgY2_102);
                      if (succeeded)
                      {
                        SubResult2_103 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_101 > ArgY2_102);
                        if (succeeded)
                        {
                          SubResult2_103 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_103 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult2_103;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[1]), &Var_6, ((MR_Box) (ArgX3_104)), ((MR_Box) (ArgY3_105)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word ArgX1_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  MR_Word ArgY1_107;
                  MR_Word ArgX2_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Word ArgY2_110;
                  MR_Word ArgX3_112 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_113;
                  MR_Word SubResult1_108;
                  MR_Word TypeInfo_183_183;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
                  if (succeeded)
                  {
                    ArgY1_107 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                    ArgY2_110 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_113 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    TypeInfo_183_183 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[2]);
                    mercury__builtin__compare_3_p_0(TypeInfo_183_183, &SubResult1_108, ((MR_Box) (ArgX1_106)), ((MR_Box) (ArgY1_107)));
                    succeeded = (SubResult1_108 != (MR_Integer) 0);
                    if (succeeded)
                      Var_6 = SubResult1_108;
                    else
                    {
                      MR_Word SubResult2_111;

                      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[3]), &SubResult2_111, ((MR_Box) (ArgX2_109)), ((MR_Box) (ArgY2_110)));
                      succeeded = (SubResult2_111 != (MR_Integer) 0);
                      if (succeeded)
                        Var_6 = SubResult2_111;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[4]), &Var_6, ((MR_Box) (ArgX3_112)), ((MR_Box) (ArgY3_113)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_Word ArgX1_114 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_115;
                  MR_Integer Var_215;
                  MR_Integer Var_216;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
                  if (succeeded)
                  {
                    ArgY1_115 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    Var_215 = (MR_Integer) (ArgX1_114);
                    Var_216 = (MR_Integer) (ArgY1_115);
                    succeeded = (Var_215 < Var_216);
                    if (succeeded)
                      Var_6 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_215 > Var_216);
                      if (succeeded)
                        Var_6 = (MR_Integer) 2;
                      else
                        Var_6 = (MR_Integer) 0;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_Word ArgX1_116 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_117;
                  MR_Integer ArgX2_119 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_120;
                  MR_Word SubResult1_118;
                  MR_Integer Var_223;
                  MR_Integer Var_224;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
                  if (succeeded)
                  {
                    ArgY1_117 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    Var_223 = (MR_Integer) (ArgX1_116);
                    Var_224 = (MR_Integer) (ArgY1_117);
                    succeeded = (Var_223 < Var_224);
                    if (succeeded)
                    {
                      SubResult1_118 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_223 > Var_224);
                      if (succeeded)
                      {
                        SubResult1_118 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_118 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_118;
                    else
                    {
                      succeeded = (ArgX2_119 < ArgY2_120);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX2_119 > ArgY2_120);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 15:
                {
                  MR_Word ArgX1_121 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
                  MR_Word ArgY1_122;
                  MR_Word ArgX2_124 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                  MR_Word ArgY2_125;
                  MR_Integer ArgX3_127 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY3_128;
                  MR_Integer ArgX4_130 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Integer ArgY4_131;
                  MR_Integer ArgX5_133 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                  MR_Integer ArgY5_134;
                  MR_Word SubResult1_123;
                  MR_Integer Var_231;
                  MR_Integer Var_232;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
                  if (succeeded)
                  {
                    ArgY1_122 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
                    ArgY2_125 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
                    ArgY3_128 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY4_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    ArgY5_134 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                    Var_231 = (MR_Integer) (ArgX1_121);
                    Var_232 = (MR_Integer) (ArgY1_122);
                    succeeded = (Var_231 < Var_232);
                    if (succeeded)
                    {
                      SubResult1_123 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_231 > Var_232);
                      if (succeeded)
                      {
                        SubResult1_123 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_123 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_123;
                    else
                    {
                      MR_Word SubResult2_126;
                      MR_Integer Var_233 = (MR_Integer) (ArgX2_124);
                      MR_Integer Var_234 = (MR_Integer) (ArgY2_125);

                      succeeded = (Var_233 < Var_234);
                      if (succeeded)
                      {
                        SubResult2_126 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_233 > Var_234);
                        if (succeeded)
                        {
                          SubResult2_126 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_126 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult2_126;
                      else
                      {
                        MR_Word SubResult3_129;

                        succeeded = (ArgX3_127 < ArgY3_128);
                        if (succeeded)
                        {
                          SubResult3_129 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX3_127 > ArgY3_128);
                          if (succeeded)
                          {
                            SubResult3_129 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult3_129 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          Var_6 = SubResult3_129;
                        else
                        {
                          MR_Word SubResult4_132;

                          succeeded = (ArgX4_130 < ArgY4_131);
                          if (succeeded)
                          {
                            SubResult4_132 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (ArgX4_130 > ArgY4_131);
                            if (succeeded)
                            {
                              SubResult4_132 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult4_132 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            Var_6 = SubResult4_132;
                          else
                          {
                            succeeded = (ArgX5_133 < ArgY5_134);
                            if (succeeded)
                              Var_6 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (ArgX5_133 > ArgY5_134);
                              if (succeeded)
                                Var_6 = (MR_Integer) 2;
                              else
                                Var_6 = (MR_Integer) 0;
                            }
                          }
                        }
                      }
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_Word ArgX1_135 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgY1_136;
                  MR_Integer ArgX2_138 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  MR_Integer ArgY2_139;
                  MR_Word ArgX3_141 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                  MR_Word ArgY3_142;
                  MR_Word SubResult1_137;
                  MR_Integer Var_241;
                  MR_Integer Var_242;

                  succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 16)));
                  if (succeeded)
                  {
                    ArgY1_136 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                    ArgY2_139 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                    ArgY3_142 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                    Var_241 = (MR_Integer) (ArgX1_135);
                    Var_242 = (MR_Integer) (ArgY1_136);
                    succeeded = (Var_241 < Var_242);
                    if (succeeded)
                    {
                      SubResult1_137 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_241 > Var_242);
                      if (succeeded)
                      {
                        SubResult1_137 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult1_137 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      Var_6 = SubResult1_137;
                    else
                    {
                      MR_Word SubResult2_140;

                      succeeded = (ArgX2_138 < ArgY2_139);
                      if (succeeded)
                      {
                        SubResult2_140 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX2_138 > ArgY2_139);
                        if (succeeded)
                        {
                          SubResult2_140 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult2_140 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult2_140;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_1[1]), &Var_6, ((MR_Box) (ArgX3_141)), ((MR_Box) (ArgY3_142)));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = Var_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
parse_tree__pred_name____Index____transform_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 16;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 17;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 18;
          break;
        case (MR_Integer) 16:
          *HeadVar__2_2 = (MR_Integer) 19;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
parse_tree__pred_name____Unify____transform_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_107 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_108 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_107 == CastY_108);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_8;
          MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_10;
          MR_Integer ArgX3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
            {
              succeeded = (ArgX2_9 == ArgY2_10);
              if (succeeded)
                succeeded = (ArgX3_11 == ArgY3_12);
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_14;
          MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_16;
          MR_Word ArgX3_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
          MR_Word ArgY3_18;
          MR_Word ArgX4_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
          MR_Word ArgY4_20;
          MR_Integer ArgX5_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Integer ArgY5_22;
          MR_Integer Var_116;
          MR_Integer Var_117;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
            ArgY4_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
            ArgY5_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            succeeded = (ArgX1_13 == ArgY1_14);
            if (succeeded)
            {
              succeeded = (ArgX3_17 == ArgY3_18);
              if (succeeded)
              {
                succeeded = (ArgX4_19 == ArgY4_20);
                if (succeeded)
                {
                  succeeded = (ArgX5_21 == ArgY5_22);
                  if (succeeded)
                  {
                    Var_116 = (MR_Integer) (ArgX2_15);
                    Var_117 = (MR_Integer) (ArgY2_16);
                    succeeded = (Var_116 == Var_117);
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_24;
              MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_23 == ArgY1_24);
                if (succeeded)
                  succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX2_25, ArgY2_26);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_28;
              MR_Word ArgX2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_30;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_27 == ArgY1_28);
                if (succeeded)
                  succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX2_29, ArgY2_30);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_32;
              MR_Word ArgX2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_34;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_31 == ArgY1_32);
                if (succeeded)
                  succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX2_33, ArgY2_34);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_36;
              MR_Integer ArgX2_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_38;
              MR_Word ArgX3_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_40;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_35 == ArgY1_36);
                if (succeeded)
                {
                  succeeded = (ArgX2_37 == ArgY2_38);
                  if (succeeded)
                    succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX3_39, ArgY3_40);
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_42;
              MR_Integer ArgX2_43 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_44;
              MR_Word ArgX3_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_46;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_41 == ArgY1_42);
                if (succeeded)
                {
                  succeeded = (ArgX2_43 == ArgY2_44);
                  if (succeeded)
                    succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX3_45, ArgY3_46);
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ArgX1_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_48;
              MR_Integer ArgX2_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_50;
              MR_Word ArgX3_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_52;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_50 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_47 == ArgY1_48);
                if (succeeded)
                {
                  succeeded = (ArgX2_49 == ArgY2_50);
                  if (succeeded)
                    succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(ArgX3_51, ArgY3_52);
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgX1_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_54;
              MR_Integer ArgX2_55 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_56;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_53 == ArgY1_54);
                if (succeeded)
                  succeeded = (ArgX2_55 == ArgY2_56);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ArgX1_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_58;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_57 == ArgY1_58);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word TypeInfo_110_110;
              MR_Word ArgX1_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_60;
              MR_Integer ArgX2_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_62;
              MR_Word ArgX3_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_64;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_64 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_59 == ArgY1_60);
                if (succeeded)
                {
                  succeeded = (ArgX2_61 == ArgY2_62);
                  if (succeeded)
                  {
                    TypeInfo_110_110 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_110_110, ((MR_Box) (ArgX3_63)), ((MR_Box) (ArgY3_64)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ArgX1_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_66;
              MR_Integer ArgX2_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_68;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_65 == ArgY1_66);
                if (succeeded)
                  succeeded = (ArgX2_67 == ArgY2_68);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ArgX1_69 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_70;
              MR_Integer ArgX2_71 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_72;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
              if (succeeded)
              {
                ArgY1_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_69 == ArgY1_70);
                if (succeeded)
                  succeeded = (ArgX2_71 == ArgY2_72);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word TypeInfo_114_114;
              MR_Word ArgX1_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_74;
              MR_Integer ArgX2_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_76;
              MR_Word ArgX3_77 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_78;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
              if (succeeded)
              {
                ArgY1_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_76 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_73 == ArgY1_74);
                if (succeeded)
                {
                  succeeded = (ArgX2_75 == ArgY2_76);
                  if (succeeded)
                  {
                    TypeInfo_114_114 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_114_114, ((MR_Box) (ArgX3_77)), ((MR_Box) (ArgY3_78)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word TypeInfo_111_111;
              MR_Word TypeInfo_112_112;
              MR_Word TypeInfo_113_113;
              MR_Word ArgX1_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_80;
              MR_Word ArgX2_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_82;
              MR_Word ArgX3_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_84;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
              if (succeeded)
              {
                ArgY1_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                TypeInfo_111_111 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_111_111, ((MR_Box) (ArgX1_79)), ((MR_Box) (ArgY1_80)));
                if (succeeded)
                {
                  TypeInfo_112_112 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_112_112, ((MR_Box) (ArgX2_81)), ((MR_Box) (ArgY2_82)));
                  if (succeeded)
                  {
                    TypeInfo_113_113 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[4]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_113_113, ((MR_Box) (ArgX3_83)), ((MR_Box) (ArgY3_84)));
                  }
                }
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ArgX1_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_86;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
              if (succeeded)
              {
                ArgY1_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                succeeded = (ArgX1_85 == ArgY1_86);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ArgX1_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_88;
              MR_Integer ArgX2_89 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_90;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
              if (succeeded)
              {
                ArgY1_88 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (ArgX1_87 == ArgY1_88);
                if (succeeded)
                  succeeded = (ArgX2_89 == ArgY2_90);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ArgX1_91 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
              MR_Word ArgY1_92;
              MR_Word ArgX2_93 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word ArgY2_94;
              MR_Integer ArgX3_95 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY3_96;
              MR_Integer ArgX4_97 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Integer ArgY4_98;
              MR_Integer ArgX5_99 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
              MR_Integer ArgY5_100;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
              if (succeeded)
              {
                ArgY1_92 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
                ArgY2_94 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                ArgY3_96 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY4_98 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                ArgY5_100 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                succeeded = (ArgX1_91 == ArgY1_92);
                if (succeeded)
                {
                  succeeded = (ArgX2_93 == ArgY2_94);
                  if (succeeded)
                  {
                    succeeded = (ArgX3_95 == ArgY3_96);
                    if (succeeded)
                    {
                      succeeded = (ArgX4_97 == ArgY4_98);
                      if (succeeded)
                        succeeded = (ArgX5_99 == ArgY5_100);
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word TypeInfo_115_115;
              MR_Word ArgX1_101 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY1_102;
              MR_Integer ArgX2_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_104;
              MR_Word ArgX3_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
              MR_Word ArgY3_106;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16)));
              if (succeeded)
              {
                ArgY1_102 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
                ArgY2_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_106 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
                succeeded = (ArgX1_101 == ArgY1_102);
                if (succeeded)
                {
                  succeeded = (ArgX2_103 == ArgY2_104);
                  if (succeeded)
                  {
                    TypeInfo_115_115 = (MR_Word) (&parse_tree__pred_name_scalar_common_1[1]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_115_115, ((MR_Box) (ArgX3_105)), ((MR_Box) (ArgY3_106)));
                  }
                }
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__pred_name____Compare____stm_clone_kind_0_0(
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
parse_tree__pred_name____Unify____stm_clone_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__pred_name____Compare____line_number_and_counter_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
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
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__pred_name____Unify____line_number_and_counter_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__pred_name____Compare____aux_tabling_pred_kind_0_0(
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
parse_tree__pred_name____Unify____aux_tabling_pred_kind_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__pred_name____Compare____aux_tabling_maybe_single_proc_0_0(
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
parse_tree__pred_name____Unify____aux_tabling_maybe_single_proc_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

  return succeeded;
}

static MR_String MR_CALL 
parse_tree__pred_name__type_var_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_2)
{
  MR_String Str_7;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word Type_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_String VarName_8;
  MR_String TypeStr_9;
  MR_String Var_19;

  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_4, Var_5, &VarName_8);
  TypeStr_9 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(VarSet_4, (MR_Integer) 0, Type_6);
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) " = ", TypeStr_9);
  Str_7 = mercury__string__f_43_43_2_f_0(VarName_8, Var_19);
  return Str_7;
}

static void MR_CALL 
parse_tree__pred_name__instance_type_ctor_to_string_2_p_0(
  MR_Word Type_3,
  MR_String * Str_4)
{
  MR_Word TypeCtor_5;
  MR_Word TypeName_6;
  MR_Integer TypeArity_7;
  MR_String TypeNameStr_8;
  MR_String Var_17;
  MR_String Var_24;
  MR_String Var_26;

  parse_tree__prog_type__type_to_ctor_det_2_p_0(Type_3, &TypeCtor_5);
  TypeName_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 0))));
  TypeArity_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_5, (MR_Integer) 1))));
  TypeNameStr_8 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(TypeName_6, (MR_String) "__");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), TypeArity_7, &Var_17);
  Var_24 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) "__");
  Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "__arity", Var_24);
  *Str_4 = mercury__string__f_43_43_2_f_0(TypeNameStr_8, Var_26);
}

MR_String MR_CALL 
parse_tree__pred_name__uci_pred_name_2_f_0(
  MR_Word SpecialPred_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String Name_7;
  MR_Word SymName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Integer Arity_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_String BaseName_8;

  BaseName_8 = mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(SpecialPred_4);
  succeeded = mercury__builtin__semidet_fail_0_p_0();
  if (succeeded)
  {
    MR_String Var_9;
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_13;

    Var_10 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymName_5);
    Var_13 = mercury__string__int_to_string_1_f_0(Arity_6);
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_13);
    Var_9 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
    Name_7 = mercury__string__f_43_43_2_f_0(BaseName_8, Var_9);
  }
  else
    Name_7 = BaseName_8;
  return Name_7;
}

MR_String MR_CALL 
parse_tree__pred_name__promise_pred_name_3_f_0(
  MR_Word PromiseType_5,
  MR_String FileName_6,
  MR_Integer LineNumber_7)
{
  MR_String Name_8;
  MR_String PromiseTypeStr_9;
  MR_String Var_19;
  MR_String Var_20;
  MR_String Var_27;
  MR_String Var_29;

  PromiseTypeStr_9 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_5);
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "__", FileName_6);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), LineNumber_7, &Var_20);
  Var_27 = mercury__string__f_43_43_2_f_0(Var_20, Var_19);
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_27);
  Name_8 = mercury__string__f_43_43_2_f_0(PromiseTypeStr_9, Var_29);
  return Name_8;
}

static void MR_CALL 
parse_tree__pred_name__make_instance_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_Str_4;

  parse_tree__pred_name__instance_type_ctor_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Str_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Str_4));
}

void MR_CALL 
parse_tree__pred_name__make_instance_string_2_p_0(
  MR_Word InstanceTypes_3,
  MR_String * InstanceStr_4)
{
  MR_Word InstanceStrs_5;

  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__pred_name_scalar_common_2[3]), InstanceTypes_3, &InstanceStrs_5);
  mercury__string__append_list_2_p_0(InstanceStrs_5, InstanceStr_4);
}

static void MR_CALL 
parse_tree__pred_name__make_instance_method_pred_name_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_Str_4;

  parse_tree__pred_name__instance_type_ctor_to_string_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Str_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Str_4));
}

void MR_CALL 
parse_tree__pred_name__make_instance_method_pred_name_5_p_0(
  MR_Word ClassId_6,
  MR_Word MethodName_7,
  MR_Word UserArity_8,
  MR_Word InstanceTypes_9,
  MR_String * PredName_10)
{
  MR_Word ClassName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassId_6, (MR_Integer) 0))));
  MR_String ClassNameStr_13;
  MR_String MethodNameStr_14;
  MR_String InstanceStr_15;
  MR_Integer UserArityInt_16;
  MR_String Var_29;
  MR_String Var_37;
  MR_String Var_38;
  MR_String Var_40;
  MR_String Var_41;
  MR_String Var_43;
  MR_String Var_44;
  MR_Word InstanceStrs_48;

  ClassNameStr_13 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ClassName_11, (MR_String) "__");
  MethodNameStr_14 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(MethodName_7, (MR_String) "__");
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__pred_name_scalar_common_2[2]), InstanceTypes_9, &InstanceStrs_48);
  mercury__string__append_list_2_p_0(InstanceStrs_48, &InstanceStr_15);
  UserArityInt_16 = (MR_Integer) (UserArity_8);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), UserArityInt_16, &Var_29);
  Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_29);
  Var_38 = mercury__string__f_43_43_2_f_0(MethodNameStr_14, Var_37);
  Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "____", Var_38);
  Var_41 = mercury__string__f_43_43_2_f_0(InstanceStr_15, Var_40);
  Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "____", Var_41);
  Var_44 = mercury__string__f_43_43_2_f_0(ClassNameStr_13, Var_43);
  *PredName_10 = mercury__string__f_43_43_2_f_0((MR_String) "ClassMethod_for_", Var_44);
}

void MR_CALL 
parse_tree__pred_name__make_transformed_pred_sym_name_4_p_0(
  MR_Word ModuleName_5,
  MR_String OrigName_6,
  MR_Word Transform_7,
  MR_Word * TransformedSymName_8)
{
  MR_String TransformedName_9;

  parse_tree__pred_name__make_transformed_pred_name_3_p_0(OrigName_6, Transform_7, &TransformedName_9);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *TransformedSymName_8 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ModuleName_5));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TransformedName_9));
  }
}

void MR_CALL 
parse_tree__pred_name__make_transformed_pred_name_3_p_0(
  MR_String OrigName_4,
  MR_Word Transform_5,
  MR_String * TransformedName_6)
{
  switch (MR_tag((MR_Word) Transform_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Counter_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Transform_5, (MR_Integer) 1))));
        MR_String Var_405;
        MR_String Var_413;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_8, &Var_405);
        Var_413 = mercury__string__f_43_43_2_f_0((MR_String) "__ho", Var_405);
        *TransformedName_6 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_413);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer ProcNum_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Transform_5, (MR_Integer) 1))));
        MR_Integer Version_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Transform_5, (MR_Integer) 2))));
        MR_String Var_386;
        MR_String Var_394;
        MR_String Var_395;
        MR_String Var_402;
        MR_String Var_404;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Version_10, &Var_386);
        Var_394 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_386);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_9, &Var_395);
        Var_402 = mercury__string__f_43_43_2_f_0(Var_395, Var_394);
        Var_404 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_402);
        *TransformedName_6 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_404);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word UserArity_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 1))));
        MR_Word AuxTablingPredKind_12 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
        MR_Word SingleProc_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 2))) & (MR_Integer) 1);
        MR_Integer ProcIdInt_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Transform_5, (MR_Integer) 3))));
        MR_Integer UserArityInt_15 = (MR_Integer) (UserArity_11);
        MR_String KindStr_16;

        switch (AuxTablingPredKind_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            KindStr_16 = (MR_String) "reset";
            break;
          case (MR_Integer) 0:
            KindStr_16 = (MR_String) "statistics";
            break;
        }
        switch (SingleProc_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_428;
              MR_String Var_436;
              MR_String Var_437;
              MR_String Var_444;
              MR_String Var_446;
              MR_String Var_447;
              MR_String Var_449;
              MR_String Var_450;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcIdInt_14, &Var_428);
              Var_436 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_428);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), UserArityInt_15, &Var_437);
              Var_444 = mercury__string__f_43_43_2_f_0(Var_437, Var_436);
              Var_446 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_444);
              Var_447 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_446);
              Var_449 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", Var_447);
              Var_450 = mercury__string__f_43_43_2_f_0(KindStr_16, Var_449);
              *TransformedName_6 = mercury__string__f_43_43_2_f_0((MR_String) "table_", Var_450);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_414;
              MR_String Var_422;
              MR_String Var_423;
              MR_String Var_425;
              MR_String Var_426;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), UserArityInt_15, &Var_414);
              Var_422 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_414);
              Var_423 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_422);
              Var_425 = mercury__string__f_43_43_2_f_0((MR_String) "_for_", Var_423);
              Var_426 = mercury__string__f_43_43_2_f_0(KindStr_16, Var_425);
              *TransformedName_6 = mercury__string__f_43_43_2_f_0((MR_String) "table_", Var_426);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
        case (MR_Integer) 12:
        case (MR_Integer) 13:
        case (MR_Integer) 14:
        case (MR_Integer) 16:
          {
            MR_String Prefix_61;
            MR_String Suffix_63;
            MR_String Var_654;
            MR_String Var_655;
            MR_String Var_657;

            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word PredOrFunc_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Integer Line_62;
                  MR_String Var_177;
                  MR_Integer Counter_244;
                  MR_String Var_636;
                  MR_String Var_637;
                  MR_String Var_645;
                  MR_String Var_646;

                  Var_177 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_58);
                  Var_636 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_177);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "AccFrom", Var_636);
                  Line_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_59, (MR_Integer) 0))));
                  Counter_244 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_59, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_244, &Var_637);
                  Var_645 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_637);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_62, &Var_646);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_646, Var_645);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word PredOrFunc_274 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_275 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Integer Line_277;
                  MR_String Var_283;
                  MR_Integer Counter_291;
                  MR_String Var_618;
                  MR_String Var_619;
                  MR_String Var_627;
                  MR_String Var_628;

                  Var_283 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_274);
                  Var_618 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_283);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "DeforestationIn", Var_618);
                  Line_277 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_275, (MR_Integer) 0))));
                  Counter_291 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_275, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_291, &Var_619);
                  Var_627 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_619);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_277, &Var_628);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_628, Var_627);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word PredOrFunc_292 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_293 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Integer Line_295;
                  MR_String Var_301;
                  MR_Integer Counter_309;
                  MR_String Var_589;
                  MR_String Var_590;
                  MR_String Var_598;
                  MR_String Var_599;

                  Var_301 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_292);
                  Var_589 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_301);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "IntroducedFrom", Var_589);
                  Line_295 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_293, (MR_Integer) 0))));
                  Counter_309 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_293, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_309, &Var_590);
                  Var_598 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_590);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_295, &Var_599);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_599, Var_598);
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_String Var_162;
                  MR_Integer Counter_245;
                  MR_Integer ProcNum_246 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_247 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_248 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_250;
                  MR_String Var_554;
                  MR_String Var_555;
                  MR_String Var_563;
                  MR_String Var_564;
                  MR_String Var_571;
                  MR_String Var_573;
                  MR_String Var_574;

                  Var_162 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_247);
                  Var_554 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_162);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "loop_inv", Var_554);
                  Line_250 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_248, (MR_Integer) 0))));
                  Counter_245 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_248, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_246, &Var_555);
                  Var_563 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_555);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_245, &Var_564);
                  Var_571 = mercury__string__f_43_43_2_f_0(Var_564, Var_563);
                  Var_573 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_571);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_250, &Var_574);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_574, Var_573);
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_String Var_315;
                  MR_Integer Counter_325;
                  MR_Integer ProcNum_326 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_327 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_328 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_330;
                  MR_String Var_491;
                  MR_String Var_492;
                  MR_String Var_500;
                  MR_String Var_501;
                  MR_String Var_508;
                  MR_String Var_510;
                  MR_String Var_511;

                  Var_315 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_327);
                  Var_491 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_315);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "tupling", Var_491);
                  Line_330 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_328, (MR_Integer) 0))));
                  Counter_325 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_328, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_326, &Var_492);
                  Var_500 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_492);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_325, &Var_501);
                  Var_508 = mercury__string__f_43_43_2_f_0(Var_501, Var_500);
                  Var_510 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_508);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_330, &Var_511);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_511, Var_510);
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_String Var_336;
                  MR_Integer Counter_346;
                  MR_Integer ProcNum_347 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_348 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word LNC_349 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_Integer Line_351;
                  MR_String Var_463;
                  MR_String Var_464;
                  MR_String Var_472;
                  MR_String Var_473;
                  MR_String Var_480;
                  MR_String Var_482;
                  MR_String Var_483;

                  Var_336 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_348);
                  Var_463 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_336);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "untupling", Var_463);
                  Line_351 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_349, (MR_Integer) 0))));
                  Counter_346 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LNC_349, (MR_Integer) 1))));
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_347, &Var_464);
                  Var_472 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_464);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_346, &Var_473);
                  Var_480 = mercury__string__f_43_43_2_f_0(Var_473, Var_472);
                  Var_482 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_480);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Line_351, &Var_483);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_483, Var_482);
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Integer VariantNum_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_String Var_151;
                  MR_Word PredOrFunc_251 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_151 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_251);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "LCMC__", Var_151);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), VariantNum_64, &Suffix_63);
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_String Var_146;
                  MR_Word PredOrFunc_252 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_146 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_252);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "SSDB__", Var_146);
                  Suffix_63 = (MR_String) "";
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ArgNums_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_134;
                  MR_String Var_139;
                  MR_Integer ProcNum_253 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_254 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_String Var_608;
                  MR_String Var_616;

                  Var_134 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_254);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "Parallel__", Var_134);
                  Var_139 = parse_tree__pred_name__ints_to_string_1_f_0(ArgNums_65);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_253, &Var_608);
                  Var_616 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_608);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_139, Var_616);
                }
                break;
              case (MR_Integer) 9:
                {
                  MR_Integer Distance_66 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_String Var_125;
                  MR_Word PredOrFunc_255 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_125 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_255);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "DistanceGranularityFor__", Var_125);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Distance_66, &Suffix_63);
                }
                break;
              case (MR_Integer) 10:
                {
                  MR_String Var_116;
                  MR_Integer ProcNum_256 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_257 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_String Var_531;

                  Var_116 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_257);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "LoopControl__", Var_116);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_256, &Var_531);
                  Suffix_63 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_531);
                }
                break;
              case (MR_Integer) 11:
                {
                  MR_String Var_104;
                  MR_String Var_111;
                  MR_Integer ProcNum_258 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_259 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgNums_260 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_520;
                  MR_String Var_521;

                  Var_104 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_259);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "ctgc__", Var_104);
                  Var_111 = parse_tree__pred_name__ints_to_string_1_f_0(ArgNums_260);
                  Var_520 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_111);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_258, &Var_521);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_521, Var_520);
                }
                break;
              case (MR_Integer) 12:
                {
                  MR_Word MaybePredOrFunc_67 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))));
                  MR_Word VarSet_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word TypeSubst_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String PredOrFuncStr_70;

                  if ((MaybePredOrFunc_67 == (MR_Word) ((MR_Unsigned) 0U)))
                    PredOrFuncStr_70 = (MR_String) "pred_or_func";
                  else
                  {
                    MR_Word PredOrFunc_261 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePredOrFunc_67, (MR_Integer) 0))));

                    PredOrFuncStr_70 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_261);
                  }
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "TypeSpecOf__", PredOrFuncStr_70);
                  Suffix_63 = parse_tree__pred_name__type_subst_to_string_2_f_0(VarSet_68, TypeSubst_69);
                }
                break;
              case (MR_Integer) 13:
                {
                  MR_String Var_95;
                  MR_Word PredOrFunc_264 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_95 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_264);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "OutlinedForIOTablingFrom__", Var_95);
                  Suffix_63 = (MR_String) "";
                }
                break;
              case (MR_Integer) 14:
                {
                  MR_String Var_86;
                  MR_Integer ProcNum_265 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_266 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);

                  Var_86 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_266);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "GeneratorFor_", Var_86);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_265, &Suffix_63);
                }
                break;
              case (MR_Integer) 16:
                {
                  MR_String Var_74;
                  MR_String Var_79;
                  MR_Integer ProcNum_267 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
                  MR_Word PredOrFunc_268 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word ArgNums_269 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
                  MR_String Var_453;
                  MR_String Var_461;

                  Var_74 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_268);
                  Prefix_61 = mercury__string__f_43_43_2_f_0((MR_String) "UnusedArgs__", Var_74);
                  Var_79 = parse_tree__pred_name__ints_to_string_1_f_0(ArgNums_269);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), ProcNum_267, &Var_453);
                  Var_461 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_453);
                  Suffix_63 = mercury__string__f_43_43_2_f_0(Var_79, Var_461);
                }
                break;
            }
            Var_654 = mercury__string__f_43_43_2_f_0((MR_String) "__", Suffix_63);
            Var_655 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_654);
            Var_657 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_655);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0(Prefix_61, Var_657);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word CloneKind_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 2))));
            MR_Integer PredNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 3))));
            MR_String CloneKindStr_20 = ((&parse_tree__pred_name_vector_common_6[0 + CloneKind_17]))->parse_tree__pred_name__vector_common_type_6_0__vct_6_f_0;
            MR_Integer Counter_243 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Transform_5, (MR_Integer) 4))));
            MR_String Var_352;
            MR_String Var_360;
            MR_String Var_361;
            MR_String Var_368;
            MR_String Var_370;
            MR_String Var_371;
            MR_String Var_378;
            MR_String Var_380;
            MR_String Var_381;
            MR_String Var_383;
            MR_String Var_384;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Counter_243, &Var_352);
            Var_360 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_352);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), PredNum_19, &Var_361);
            Var_368 = mercury__string__f_43_43_2_f_0(Var_361, Var_360);
            Var_370 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_368);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__pred_name_scalar_common_3[0]), Arity_18, &Var_371);
            Var_378 = mercury__string__f_43_43_2_f_0(Var_371, Var_370);
            Var_380 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_378);
            Var_381 = mercury__string__f_43_43_2_f_0(OrigName_4, Var_380);
            Var_383 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_381);
            Var_384 = mercury__string__f_43_43_2_f_0(CloneKindStr_20, Var_383);
            *TransformedName_6 = mercury__string__f_43_43_2_f_0((MR_String) "StmExpanded_", Var_384);
          }
          break;
      }
      break;
  }
}

static MR_Box MR_CALL 
parse_tree__pred_name__ints_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
parse_tree__pred_name__ints_to_string_1_f_0(
  MR_Word Ints_3)
{
  MR_String Str_4;
  MR_Word IntStrs_5;
  MR_String IntsStr_6;
  MR_String Var_18;

  IntStrs_5 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__pred_name_scalar_common_2[1]), Ints_3);
  IntsStr_6 = mercury__string__join_list_2_f_0((MR_String) ", ", IntStrs_5);
  Var_18 = mercury__string__f_43_43_2_f_0(IntsStr_6, (MR_String) "]");
  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_18);
  return Str_4;
}

static MR_Box MR_CALL 
parse_tree__pred_name__type_subst_to_string_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Str_7;

  conv0_Str_7 = parse_tree__pred_name__type_var_subst_to_string_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Str_7));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
parse_tree__pred_name__type_subst_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word TypeSubst_5)
{
  MR_String Str_6;
  MR_Word TVarStrs_7;
  MR_String TVarsStr_8;
  MR_Word Var_9;
  MR_String Var_20;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&parse_tree__pred_name_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (parse_tree__pred_name__type_subst_to_string_2_f_0_1));
    MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (VarSet_4));
  }
  TVarStrs_7 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__pred_name_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, TypeSubst_5);
  TVarsStr_8 = mercury__string__join_list_2_f_0((MR_String) ", ", TVarStrs_7);
  Var_20 = mercury__string__f_43_43_2_f_0(TVarsStr_8, (MR_String) "]");
  Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_20);
  return Str_6;
}

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____aux_tabling_maybe_single_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__pred_name____Unify____aux_tabling_maybe_single_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__pred_name____Compare____aux_tabling_maybe_single_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__pred_name____Compare____aux_tabling_maybe_single_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____aux_tabling_pred_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__pred_name____Unify____aux_tabling_pred_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__pred_name____Compare____aux_tabling_pred_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__pred_name____Compare____aux_tabling_pred_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____line_number_and_counter_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__pred_name____Unify____line_number_and_counter_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__pred_name____Compare____line_number_and_counter_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__pred_name____Compare____line_number_and_counter_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____stm_clone_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__pred_name____Unify____stm_clone_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__pred_name____Compare____stm_clone_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__pred_name____Compare____stm_clone_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__pred_name____Unify____transform_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__pred_name____Unify____transform_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__pred_name____Compare____transform_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__pred_name____Compare____transform_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__pred_name__init(void)
{
}

void mercury__parse_tree__pred_name__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_aux_tabling_maybe_single_proc_0);
	MR_register_type_ctor_info(&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_aux_tabling_pred_kind_0);
	MR_register_type_ctor_info(&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_line_number_and_counter_0);
	MR_register_type_ctor_info(&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_stm_clone_kind_0);
	MR_register_type_ctor_info(&parse_tree__pred_name__parse_tree__pred_name__type_ctor_info_transform_name_0);
}

void mercury__parse_tree__pred_name__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__pred_name__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.pred_name.
