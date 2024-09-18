/*
** Automatically generated from `prog_type.m'
** by the Mercury compiler,
** version rotd-2024-09-18
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


// :- module parse_tree.prog_type.
// :- implementation.

/*
INIT mercury__parse_tree__prog_type__init
ENDINIT
*/

#include "parse_tree.prog_type.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "integer.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_util.mih"




static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_2;

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_is_builtin_dummy_type_ctor_0[3];

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0[3];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0[3];

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_dummy_type_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_dummy_type_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_is_dummy_type_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_dummy_type_0[2];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_dummy_type_0[2];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_0;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_1;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_2;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_3;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_4;

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_nb_type_ctor_category_0_5[1];

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_nb_type_ctor_category_0_5[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_5;

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_nb_type_ctor_category_0_6[1];

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_nb_type_ctor_category_0_6[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_6;

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_nb_type_ctor_category_0_7[1];

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_nb_type_ctor_category_0_7[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_7;

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_nb_type_ctor_category_0_0[5];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_nb_type_ctor_category_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_nb_type_ctor_category_0_3[2];

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_nb_type_ctor_category_0[3];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_nb_type_ctor_category_0[8];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_nb_type_ctor_category_0[8];

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1;

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1[1];

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0[2];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0[2];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0[2];

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_cat_builtin_0_0[1];

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_cat_builtin_0_0[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_0;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_1;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_2;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_3;

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_cat_builtin_0_0[3];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_cat_builtin_0_1[1];

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_cat_builtin_0[2];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_cat_builtin_0[4];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0[4];

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1;

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_type_ctor_cat_enum_0[2];

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0[2];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0[2];

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3;

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_type_ctor_cat_system_0[4];

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0[4];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0[4];

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_3;

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_4;

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_type_ctor_cat_user_0[5];

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[5];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[5];

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4;

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5;

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6[1];

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_6[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6;

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_7[1];

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_7[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7;

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8[1];

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_8[1];

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8;

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0[5];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3[2];

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0[4];

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_category_0[9];

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_category_0[9];

static void MR_CALL 
parse_tree__prog_type__strip_module_names_from_type_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__strip_module_names_from_type_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__strip_module_names_from_type_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__strip_module_names_from_type_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type__strip_module_names_from_type_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_dummy_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____is_dummy_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____nb_type_ctor_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____nb_type_ctor_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_type_scalar_common_1[1][2];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_2[2][1];

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_3[1][7];


struct parse_tree__prog_type__vector_common_type_4_0_s {
  const MR_String parse_tree__prog_type__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct parse_tree__prog_type__vector_common_type_4_0_s parse_tree__prog_type_vector_common_4[8];



static /* final */ const MR_Box parse_tree__prog_type_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_2[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "{}")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "store")) },
};

static /* final */ const MR_Box parse_tree__prog_type_scalar_common_3[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_strip_what_module_names_0)),
    ((MR_Box) (&parse_tree__prog_util__parse_tree__prog_util__type_ctor_info_maybe_set_default_func_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};


static /* final */ const struct parse_tree__prog_type__vector_common_type_4_0_s parse_tree__prog_type_vector_common_4[8] = {
  /* row   0 */   { (MR_String) "base_typeclass_info" },
  /* row   1 */   { (MR_String) "type_ctor_info" },
  /* row   2 */   { (MR_String) "type_info" },
  /* row   3 */   { (MR_String) "typeclass_info" },
  /* row   4 */   { (MR_String) "base_typeclass_info" },
  /* row   5 */   { (MR_String) "type_ctor_info" },
  /* row   6 */   { (MR_String) "type_info" },
  /* row   7 */   { (MR_String) "typeclass_info" },
};


#include "array.mh"


static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0 = {
  (MR_String) "is_builtin_dummy_type_ctor",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1 = {
  (MR_String) "is_builtin_non_dummy_type_ctor",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_2 = {
  (MR_String) "is_not_builtin_dummy_type_ctor",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_is_builtin_dummy_type_ctor_0[3] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_2
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0[3] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_builtin_dummy_type_ctor_0_2
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_builtin_dummy_type_ctor_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "is_builtin_dummy_type_ctor",
  { parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_builtin_dummy_type_ctor_0 },
  { parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_is_builtin_dummy_type_ctor_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_builtin_dummy_type_ctor_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_dummy_type_0_0 = {
  (MR_String) "is_dummy_type",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_dummy_type_0_1 = {
  (MR_String) "is_not_dummy_type",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_is_dummy_type_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_dummy_type_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_dummy_type_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_dummy_type_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_dummy_type_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_is_dummy_type_0_1
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_dummy_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_dummy_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____is_dummy_type_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____is_dummy_type_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "is_dummy_type",
  { parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_is_dummy_type_0 },
  { parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_is_dummy_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_is_dummy_type_0,

};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_0 = {
  (MR_String) "ctor_cat_builtin_dummy",
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

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_1 = {
  (MR_String) "ctor_cat_void",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_2 = {
  (MR_String) "ctor_cat_variable",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_3 = {
  (MR_String) "ctor_cat_higher_order",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_4 = {
  (MR_String) "ctor_cat_tuple",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_nb_type_ctor_category_0_5[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0) };

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_nb_type_ctor_category_0_5[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_5 = {
  (MR_String) "ctor_cat_enum",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(5),
  parse_tree__prog_type__parse_tree__prog_type__field_types_nb_type_ctor_category_0_5,
  NULL,
  parse_tree__prog_type__parse_tree__prog_type__field_locns_nb_type_ctor_category_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_nb_type_ctor_category_0_6[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0) };

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_nb_type_ctor_category_0_6[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_6 = {
  (MR_String) "ctor_cat_system",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(6),
  parse_tree__prog_type__parse_tree__prog_type__field_types_nb_type_ctor_category_0_6,
  NULL,
  parse_tree__prog_type__parse_tree__prog_type__field_locns_nb_type_ctor_category_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_nb_type_ctor_category_0_7[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0) };

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_nb_type_ctor_category_0_7[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_7 = {
  (MR_String) "ctor_cat_user",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(7),
  parse_tree__prog_type__parse_tree__prog_type__field_types_nb_type_ctor_category_0_7,
  NULL,
  parse_tree__prog_type__parse_tree__prog_type__field_locns_nb_type_ctor_category_0_7,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_nb_type_ctor_category_0_0[5] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_4
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_nb_type_ctor_category_0_2[1] = { &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_5 };

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_nb_type_ctor_category_0_3[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_6,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_7
};

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_nb_type_ctor_category_0[3] = {
  {
    UINT32_C(5),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_nb_type_ctor_category_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_nb_type_ctor_category_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_nb_type_ctor_category_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_nb_type_ctor_category_0[8] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_5,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_6,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_4,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_7,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_nb_type_ctor_category_0_1
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_nb_type_ctor_category_0[8] = {
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_nb_type_ctor_category_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type____Unify____nb_type_ctor_category_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____nb_type_ctor_category_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "nb_type_ctor_category",
  { parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_nb_type_ctor_category_0 },
  { parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_nb_type_ctor_category_0 },
  (MR_Integer) 8,
  UINT16_C(4),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_nb_type_ctor_category_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0) };

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0 = {
  (MR_String) "type_info_cell",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_type__parse_tree__prog_type__field_types_polymorphism_cell_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1 = {
  (MR_String) "typeclass_info_cell",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0[1] = { &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1 };

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1[1] = { &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0 };

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_polymorphism_cell_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_polymorphism_cell_0_1
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_polymorphism_cell_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "polymorphism_cell",
  { parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_polymorphism_cell_0 },
  { parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_polymorphism_cell_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_polymorphism_cell_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_cat_builtin_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_int_type_0) };

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_cat_builtin_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_0 = {
  (MR_String) "cat_builtin_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_cat_builtin_0_0,
  NULL,
  parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_cat_builtin_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_1 = {
  (MR_String) "cat_builtin_float",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_2 = {
  (MR_String) "cat_builtin_char",
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

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_3 = {
  (MR_String) "cat_builtin_string",
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

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_cat_builtin_0_0[3] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_3
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_cat_builtin_0_1[1] = { &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_0 };

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_cat_builtin_0[2] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_cat_builtin_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_cat_builtin_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_cat_builtin_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_cat_builtin_0_3
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_builtin",
  { parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_cat_builtin_0 },
  { parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_cat_builtin_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_builtin_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0 = {
  (MR_String) "cat_enum_mercury",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1 = {
  (MR_String) "cat_enum_foreign",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_type_ctor_cat_enum_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_enum_0_0
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_enum",
  { parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_enum_0 },
  { parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_type_ctor_cat_enum_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_enum_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0 = {
  (MR_String) "cat_system_type_info",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1 = {
  (MR_String) "cat_system_type_ctor_info",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2 = {
  (MR_String) "cat_system_typeclass_info",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3 = {
  (MR_String) "cat_system_base_typeclass_info",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_type_ctor_cat_system_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0[4] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_system_0_2
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_system",
  { parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_system_0 },
  { parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_type_ctor_cat_system_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_system_0,

};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0 = {
  (MR_String) "cat_user_direct_dummy",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1 = {
  (MR_String) "cat_user_abstract_dummy",
  INT32_C(1)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2 = {
  (MR_String) "cat_user_notag",
  INT32_C(2)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_3 = {
  (MR_String) "cat_user_abstract_notag",
  INT32_C(3)
};

static const MR_EnumFunctorDesc parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_4 = {
  (MR_String) "cat_user_general",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_type_ctor_cat_user_0[5] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_4
};

static const MR_EnumFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0[5] = {
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_4,
  &parse_tree__prog_type__parse_tree__prog_type__enum_functor_desc_type_ctor_cat_user_0_2
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_cat_user",
  { parse_tree__prog_type__parse_tree__prog_type__enum_name_ordered_type_ctor_cat_user_0 },
  { parse_tree__prog_type__parse_tree__prog_type__enum_ordinal_ordered_type_ctor_cat_user_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_cat_user_0,

};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0) };

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0 = {
  (MR_String) "ctor_cat_builtin",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1 = {
  (MR_String) "ctor_cat_builtin_dummy",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2 = {
  (MR_String) "ctor_cat_void",
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

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3 = {
  (MR_String) "ctor_cat_variable",
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

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4 = {
  (MR_String) "ctor_cat_higher_order",
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

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5 = {
  (MR_String) "ctor_cat_tuple",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0) };

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_6[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6 = {
  (MR_String) "ctor_cat_enum",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(6),
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_6,
  NULL,
  parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_7[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0) };

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_7[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7 = {
  (MR_String) "ctor_cat_system",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(7),
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_7,
  NULL,
  parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_7,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0) };

static const MR_DuArgLocn parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_8[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8 = {
  (MR_String) "ctor_cat_user",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(8),
  parse_tree__prog_type__parse_tree__prog_type__field_types_type_ctor_category_0_8,
  NULL,
  parse_tree__prog_type__parse_tree__prog_type__field_locns_type_ctor_category_0_8,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0[5] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1[1] = { &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0 };

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2[1] = { &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6 };

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3[2] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8
};

static const MR_DuPtagLayout parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0[4] = {
  {
    UINT32_C(5),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__prog_type__parse_tree__prog_type__du_stag_ordered_type_ctor_category_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_category_0[9] = {
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_0,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_1,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_6,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_4,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_7,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_5,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_8,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_3,
  &parse_tree__prog_type__parse_tree__prog_type__du_functor_desc_type_ctor_category_0_2
};

static const MR_Integer parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_category_0[9] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 6
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_category_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type____Unify____type_ctor_category_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type____Compare____type_ctor_category_0_0_10001)),
  (MR_String) "parse_tree.prog_type",
  (MR_String) "type_ctor_category",
  { parse_tree__prog_type__parse_tree__prog_type__du_name_ordered_type_ctor_category_0 },
  { parse_tree__prog_type__parse_tree__prog_type__du_ptag_ordered_type_ctor_category_0 },
  (MR_Integer) 9,
  UINT16_C(12),
  parse_tree__prog_type__parse_tree__prog_type__functor_number_map_type_ctor_category_0,

};

void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0(
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
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0(
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
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0(
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
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_type____Compare____nb_type_ctor_category_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  parse_tree__prog_type____Compare____type_ctor_category_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0(
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
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Integer Var_22 = (MR_Integer) (ArgX1_6);
              MR_Integer Var_23 = (MR_Integer) (ArgY1_7);

              succeeded = (Var_22 < Var_23);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_22 > Var_23);
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
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_8 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                      MR_Word ArgY1_9 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                      MR_Integer Var_20 = (MR_Integer) (ArgX1_8);
                      MR_Integer Var_21 = (MR_Integer) (ArgY1_9);

                      succeeded = (Var_20 < Var_21);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_20 > Var_21);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_10 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                      MR_Word ArgY1_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
                      MR_Integer Var_18 = (MR_Integer) (ArgX1_10);
                      MR_Integer Var_19 = (MR_Integer) (ArgY1_11);

                      succeeded = (Var_18 < Var_19);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_18 > Var_19);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(
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
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
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
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
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
                }
                break;
              case (MR_Integer) 1:
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
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
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
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
parse_tree__prog_type____Unify____nb_type_ctor_category_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = parse_tree__prog_type____Unify____type_ctor_category_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_14 == CastX_13);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_15 == ArgY1_16);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                succeeded = (ArgX1_17 == ArgY1_18);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_19 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_20 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                succeeded = (ArgX1_19 == ArgY1_20);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_8 == CastX_7);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_type____Compare____is_dummy_type_0_0(
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
parse_tree__prog_type____Unify____is_dummy_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0(
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
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__prog_type__apply_partial_map_to_list_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box X_6 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
    MR_Word Xs_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Box Y_8;
    MR_Word Ys_9;
    MR_Box Y0_10;

    succeeded = mercury__map__search_3_p_0(TypeInfo_for_T_11, TypeInfo_for_T_11, HeadVar__1_1, X_6, &Y0_10);
    if (succeeded)
      Y_8 = Y0_10;
    else
      Y_8 = X_6;
    parse_tree__prog_type__apply_partial_map_to_list_3_p_0(TypeInfo_for_T_11, HeadVar__1_1, Xs_7, &Ys_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = Y_8;
      MR_hl_field(1, base, 1) = ((MR_Box) (Ys_9));
    }
  }
}

void MR_CALL 
parse_tree__prog_type__qualify_cons_id_4_p_0(
  MR_Word Args_5,
  MR_Word ConsId0_6,
  MR_Word * ConsId_7,
  MR_Word * InstConsId_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) ConsId0_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Var_45;
        MR_Word PrivateBuiltin_56;
        MR_Word TypeCtor_57;
        MR_Word SymbolSymName_58;
        MR_Word InstDuCtor_59;

        *ConsId_7 = ConsId0_6;
        Var_45 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), Args_5);
        PrivateBuiltin_56 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        TypeCtor_57 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
        {
          SymbolSymName_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SymbolSymName_58, 0) = ((MR_Box) (PrivateBuiltin_56));
          MR_hl_field(1, SymbolSymName_58, 1) = ((MR_Box) ((MR_String) "typeclass_info"));
        }
        {
          InstDuCtor_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InstDuCtor_59, 0) = ((MR_Box) (SymbolSymName_58));
          MR_hl_field(0, InstDuCtor_59, 1) = ((MR_Box) (Var_45));
          MR_hl_field(0, InstDuCtor_59, 2) = ((MR_Box) (TypeCtor_57));
        }
        *InstConsId_8 = (MR_Word) (MR_mkword(1, (MR_Word) (InstDuCtor_59)));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word DuCtor0_9 = (MR_Word) (MR_body((MR_Word) (ConsId0_6), (MR_Integer) 1));
        MR_Word Name0_10 = ((MR_Word) ((MR_hl_field(0, DuCtor0_9, (MR_Integer) 0))));
        MR_Integer OrigArity_11 = ((MR_Integer) ((MR_hl_field(0, DuCtor0_9, (MR_Integer) 1))));
        MR_Word TypeCtor_12 = ((MR_Word) ((MR_hl_field(0, DuCtor0_9, (MR_Integer) 2))));
        MR_Word TypeModule_13;
        MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, TypeCtor_12, (MR_Integer) 0))));

        succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 1);
        if (succeeded)
        {
          TypeModule_13 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
          {
            MR_String UnqualName_16;
            MR_Word Name_17;
            MR_Word DuCtor_18;

            UnqualName_16 = mdbcomp__sym_name__unqualify_name_1_f_0(Name0_10);
            {
              Name_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Name_17, 0) = ((MR_Box) (TypeModule_13));
              MR_hl_field(1, Name_17, 1) = ((MR_Box) (UnqualName_16));
            }
            {
              DuCtor_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DuCtor_18, 0) = ((MR_Box) (Name_17));
              MR_hl_field(0, DuCtor_18, 1) = ((MR_Box) (OrigArity_11));
              MR_hl_field(0, DuCtor_18, 2) = ((MR_Box) (TypeCtor_12));
            }
            *ConsId_7 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_18)));
          }
        }
        else
          *ConsId_7 = ConsId0_6;
        *InstConsId_8 = *ConsId_7;
      }
      break;
    case (MR_Integer) 2:
      {
        *ConsId_7 = ConsId0_6;
        *InstConsId_8 = *ConsId_7;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsId0_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_43;
            MR_Word PrivateBuiltin_50;
            MR_Word TypeCtor_51;
            MR_Word SymbolSymName_52;
            MR_Word InstDuCtor_53;

            *ConsId_7 = ConsId0_6;
            Var_43 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_type_scalar_common_1[0]), Args_5);
            PrivateBuiltin_50 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
            TypeCtor_51 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
            {
              SymbolSymName_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SymbolSymName_52, 0) = ((MR_Box) (PrivateBuiltin_50));
              MR_hl_field(1, SymbolSymName_52, 1) = ((MR_Box) ((MR_String) "type_info"));
            }
            {
              InstDuCtor_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, InstDuCtor_53, 0) = ((MR_Box) (SymbolSymName_52));
              MR_hl_field(0, InstDuCtor_53, 1) = ((MR_Box) (Var_43));
              MR_hl_field(0, InstDuCtor_53, 2) = ((MR_Box) (TypeCtor_51));
            }
            *InstConsId_8 = (MR_Word) (MR_mkword(1, (MR_Word) (InstDuCtor_53)));
          }
          break;
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
          {
            *ConsId_7 = ConsId0_6;
            *InstConsId_8 = *ConsId_7;
          }
          break;
      }
      break;
  }
}

MR_Word MR_CALL 
parse_tree__prog_type__cell_inst_cons_id_2_f_0(
  MR_Word Which_4,
  MR_Integer Arity_5)
{
  MR_Word InstConsId_6;
  MR_String Symbol_8;
  MR_Word PrivateBuiltin_9;
  MR_Word TypeCtor_10;
  MR_Word SymbolSymName_11;
  MR_Word InstDuCtor_12;

  if ((Which_4 == (MR_Word) ((MR_Unsigned) 0U)))
    Symbol_8 = (MR_String) "typeclass_info";
  else
    Symbol_8 = (MR_String) "type_info";
  PrivateBuiltin_9 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  TypeCtor_10 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
  {
    SymbolSymName_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SymbolSymName_11, 0) = ((MR_Box) (PrivateBuiltin_9));
    MR_hl_field(1, SymbolSymName_11, 1) = ((MR_Box) (Symbol_8));
  }
  {
    InstDuCtor_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InstDuCtor_12, 0) = ((MR_Box) (SymbolSymName_11));
    MR_hl_field(0, InstDuCtor_12, 1) = ((MR_Box) (Arity_5));
    MR_hl_field(0, InstDuCtor_12, 2) = ((MR_Box) (TypeCtor_10));
  }
  InstConsId_6 = (MR_Word) (MR_mkword(1, (MR_Word) (InstDuCtor_12)));
  return InstConsId_6;
}

MR_Word MR_CALL 
parse_tree__prog_type__cell_cons_id_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Ctor_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, HeadVar__2_2, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, HeadVar__2_2, 1) = ((MR_Box) (Ctor_3));
    }
  }
  return HeadVar__2_2;
}

void MR_CALL 
parse_tree__prog_type__add_new_prefix_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Module_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String Name0_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String Name_8;

    mercury__string__append_3_p_2((MR_String) "new ", Name0_7, &Name_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Module_6));
      MR_hl_field(1, base, 1) = ((MR_Box) (Name_8));
    }
  }
  else
  {
    MR_String Name0_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String Name_4;

    mercury__string__append_3_p_2((MR_String) "new ", Name0_3, &Name_4);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__2_2 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Name_4));
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__remove_new_prefix_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Module_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String Name0_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String Name_8;

    succeeded = mercury__string__append_3_p_1((MR_String) "new ", &Name_8, Name0_7);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Module_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (Name_8));
      }
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_String Name0_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String Name_4;

    succeeded = mercury__string__append_3_p_1((MR_String) "new ", &Name_4, Name0_3);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__2_2 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Name_4));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_category_1_f_0(
  MR_Word TypeCtorCat_3)
{
  MR_Word IsIntroduced_4;

  switch (MR_tag((MR_Word) TypeCtorCat_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      IsIntroduced_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TypeCtorCat_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          IsIntroduced_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          IsIntroduced_4 = (MR_Integer) 0;
          break;
      }
      break;
  }
  return IsIntroduced_4;
}

MR_bool MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_ctor_1_p_0(
  MR_Word TypeCtor_2)
{
  MR_bool succeeded;
  MR_Word PrivateBuiltin_3;
  MR_String Name_4;
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, TypeCtor_2, (MR_Integer) 0))));
  MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_2, (MR_Integer) 1))));
  MR_Word Var_7;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 1);
  if (succeeded)
  {
    PrivateBuiltin_3 = ((MR_Word) ((MR_hl_field(1, Var_5, (MR_Integer) 0))));
    Name_4 = ((MR_String) ((MR_hl_field(1, Var_5, (MR_Integer) 1))));
    succeeded = (Var_6 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_7 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PrivateBuiltin_3, Var_7);
      if (succeeded)
      {
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 3;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(Name_4, ((&parse_tree__prog_type_vector_common_4[4 + mid_2]))->parse_tree__prog_type__vector_common_type_4_0__vct_4_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_3 < (MR_Integer) 0))
            hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
          else
            lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
        }
        while ((lo_0 <= hi_1));
        succeeded = MR_FALSE;
      label_0:;
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type__is_introduced_type_info_type_1_p_0(
  MR_Word Type_2)
{
  MR_bool succeeded;
  MR_Word TypeCtor_3;
  MR_Word PrivateBuiltin_5;
  MR_String Name_6;
  MR_Word Var_7;
  MR_Integer Var_8;
  MR_Word Var_9;
  MR_Word _ArgTypes_4;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_2, &TypeCtor_3, &_ArgTypes_4);
  if (succeeded)
  {
    Var_7 = ((MR_Word) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 0))));
    Var_8 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      PrivateBuiltin_5 = ((MR_Word) ((MR_hl_field(1, Var_7, (MR_Integer) 0))));
      Name_6 = ((MR_String) ((MR_hl_field(1, Var_7, (MR_Integer) 1))));
      succeeded = (Var_8 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_9 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PrivateBuiltin_5, Var_9);
        if (succeeded)
        {
          // binary string simple lookup switch
          ;
          lo_0 = (MR_Integer) 0;
          hi_1 = (MR_Integer) 3;
          do
          {
            mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
            result_3 = MR_strcmp(Name_6, ((&parse_tree__prog_type_vector_common_4[0 + mid_2]))->parse_tree__prog_type__vector_common_type_4_0__vct_4_f_0);
            if ((result_3 == (MR_Integer) 0))
            {
              succeeded = MR_TRUE;
              // jump out of search loop
              ;
              goto label_0;
            }
            else
            if ((result_3 < (MR_Integer) 0))
              hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
            else
              lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
          }
          while ((lo_0 <= hi_1));
          succeeded = MR_FALSE;
        label_0:;
        }
      }
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
parse_tree__prog_type__is_type_ctor_a_builtin_dummy_1_f_0(
  MR_Word TypeCtor_3)
{
  MR_bool succeeded;
  MR_Word IsBuiltinDummy_4;
  MR_Word CtorSymName_5 = ((MR_Word) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 0))));
  MR_Integer TypeArity_6 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) CtorSymName_5)) == (MR_Integer) 1))
  {
    MR_Word ModuleName_7 = ((MR_Word) ((MR_hl_field(1, CtorSymName_5, (MR_Integer) 0))));
    MR_String TypeName_8 = ((MR_String) ((MR_hl_field(1, CtorSymName_5, (MR_Integer) 1))));

    switch (TypeArity_6) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_12;

          succeeded = (strcmp(TypeName_8, (MR_String) "state") == 0);
          if (succeeded)
          {
            Var_12 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_7, Var_12);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_10;
          MR_Word Var_14;

          succeeded = (strcmp(TypeName_8, (MR_String) "store") == 0);
          if (succeeded)
          {
            Var_10 = (MR_Word) (&parse_tree__prog_type_scalar_common_2[1]);
            Var_14 = mdbcomp__builtin_modules__maybe_add_stdlib_wrapper_1_f_0(Var_10);
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_7, Var_14);
          }
        }
        break;
    }
    if (succeeded)
      IsBuiltinDummy_4 = (MR_Integer) 0;
    else
    {
      switch (TypeArity_6) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word Var_16;

            succeeded = (strcmp(TypeName_8, (MR_String) "comparison_result") == 0);
            if (succeeded)
            {
              Var_16 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_7, Var_16);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_15;

            succeeded = (strcmp(TypeName_8, (MR_String) "store_at_ref_type") == 0);
            if (succeeded)
            {
              Var_15 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_7, Var_15);
            }
          }
          break;
      }
      if (succeeded)
        IsBuiltinDummy_4 = (MR_Integer) 1;
      else
        IsBuiltinDummy_4 = (MR_Integer) 2;
    }
  }
  else
    IsBuiltinDummy_4 = (MR_Integer) 2;
  return IsBuiltinDummy_4;
}

MR_Word MR_CALL 
parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;
  MR_Word Var_3;
  MR_Word Var_4;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;

  Var_4 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_3, 0) = ((MR_Box) (Var_4));
    MR_hl_field(1, Var_3, 1) = ((MR_Box) ((MR_String) "int"));
  }
  {
    Var_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_2, 0) = ((MR_Box) (Var_3));
    MR_hl_field(0, Var_2, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_10));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) ((MR_String) "int8"));
  }
  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_16 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (Var_16));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_String) "int16"));
  }
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_22 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_String) "int32"));
  }
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_28 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_String) "int64"));
  }
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_34 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_String) "uint"));
  }
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_40 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_String) "uint8"));
  }
  {
    Var_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(0, Var_38, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_46 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_String) "uint16"));
  }
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_52 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_String) "uint32"));
  }
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (Var_51));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_58 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_String) "uint64"));
  }
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_64 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_String) "string"));
  }
  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_62, 0) = ((MR_Box) (Var_63));
    MR_hl_field(0, Var_62, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_70 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_String) "character"));
  }
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (Var_69));
    MR_hl_field(0, Var_68, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_76 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_String) "float"));
  }
  {
    Var_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_74, 0) = ((MR_Box) (Var_75));
    MR_hl_field(0, Var_74, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_82 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_String) "pred"));
  }
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (Var_81));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_88 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_String) "func"));
  }
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (Var_87));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_94 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_String) "void"));
  }
  {
    Var_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_92, 0) = ((MR_Box) (Var_93));
    MR_hl_field(0, Var_92, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  Var_100 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_String) "tuple"));
  }
  {
    Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_98, 0) = ((MR_Box) (Var_99));
    MR_hl_field(0, Var_98, 1) = ((MR_Box) ((MR_Integer) 0));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_97));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_91));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_85));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_79));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_73));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_61));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_25));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_19));
  }
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (Var_8));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) (Var_13));
  }
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(1, HeadVar__1_1, 1) = ((MR_Box) (Var_7));
  }
  return HeadVar__1_1;
}

static void MR_CALL 
parse_tree__prog_type__strip_module_names_from_type_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_8;

  parse_tree__prog_type__strip_module_names_from_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Type_8));
}

void MR_CALL 
parse_tree__prog_type__strip_module_names_from_type_list_4_p_0(
  MR_Word StripWhat_5,
  MR_Word SetDefaultFunc_6,
  MR_Word Types0_7,
  MR_Word * Types_8)
{
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_3[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (parse_tree__prog_type__strip_module_names_from_type_list_4_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (StripWhat_5));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (SetDefaultFunc_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_9, Types0_7, Types_8);
}

static void MR_CALL 
parse_tree__prog_type__strip_module_names_from_type_4_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Type_8;

  parse_tree__prog_type__strip_module_names_from_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_Type_8);
  *wrapper_arg_2 = ((MR_Box) (conv3_Type_8));
}

static void MR_CALL 
parse_tree__prog_type__strip_module_names_from_type_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Type_8;

  parse_tree__prog_type__strip_module_names_from_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Type_8);
  *wrapper_arg_2 = ((MR_Box) (conv2_Type_8));
}

static void MR_CALL 
parse_tree__prog_type__strip_module_names_from_type_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Type_8;

  parse_tree__prog_type__strip_module_names_from_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Type_8);
  *wrapper_arg_2 = ((MR_Box) (conv1_Type_8));
}

static void MR_CALL 
parse_tree__prog_type__strip_module_names_from_type_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Type_8;

  parse_tree__prog_type__strip_module_names_from_type_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_Type_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Type_8));
}

void MR_CALL 
parse_tree__prog_type__strip_module_names_from_type_4_p_0(
  MR_Word StripWhat_5,
  MR_Word SetDefaultFunc_6,
  MR_Word Type0_7,
  MR_Word * Type_8)
{
  switch (MR_tag((MR_Word) Type0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      *Type_8 = Type0_7;
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName0_12 = ((MR_Word) ((MR_hl_field(1, Type0_7, (MR_Integer) 0))));
        MR_Word ArgTypes0_13 = ((MR_Word) ((MR_hl_field(1, Type0_7, (MR_Integer) 1))));
        MR_Word Kind_14 = ((MR_Word) ((MR_hl_field(1, Type0_7, (MR_Integer) 2))));
        MR_Word SymName_15;
        MR_Word ArgTypes_16;
        MR_Word Var_35;

        parse_tree__prog_util__strip_module_names_from_sym_name_3_p_0(StripWhat_5, SymName0_12, &SymName_15);
        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_3[0]));
          MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__prog_type__strip_module_names_from_type_4_p_0_2));
          MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_35, 3) = ((MR_Box) (StripWhat_5));
          MR_hl_field(0, Var_35, 4) = ((MR_Box) (SetDefaultFunc_6));
        }
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_35, ArgTypes0_13, &ArgTypes_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *Type_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SymName_15));
          MR_hl_field(1, base, 1) = ((MR_Box) (ArgTypes_16));
          MR_hl_field(1, base, 2) = ((MR_Box) (Kind_14));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type0_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgTypes0_26 = ((MR_Word) ((MR_hl_field(3, Type0_7, (MR_Integer) 1))));
            MR_Word Kind_27 = ((MR_Word) ((MR_hl_field(3, Type0_7, (MR_Integer) 2))));
            MR_Word ArgTypes_28;
            MR_Word Var_39;

            {
              Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_39, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_3[0]));
              MR_hl_field(0, Var_39, 1) = ((MR_Box) (parse_tree__prog_type__strip_module_names_from_type_4_p_0_4));
              MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_39, 3) = ((MR_Box) (StripWhat_5));
              MR_hl_field(0, Var_39, 4) = ((MR_Box) (SetDefaultFunc_6));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_39, ArgTypes0_26, &ArgTypes_28);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (ArgTypes_28));
              MR_hl_field(3, base, 2) = ((MR_Box) (Kind_27));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_17 = ((MR_Unsigned) ((MR_hl_field(3, Type0_7, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word HOInstInfo0_18 = ((MR_Word) ((MR_hl_field(3, Type0_7, (MR_Integer) 3))));
            MR_Word Purity_19 = ((MR_Unsigned) ((MR_hl_field(3, Type0_7, (MR_Integer) 4))) & (MR_Integer) 3);
            MR_Word HOInstInfo_20;
            MR_Word ArgTypes0_24 = ((MR_Word) ((MR_hl_field(3, Type0_7, (MR_Integer) 2))));
            MR_Word ArgTypes_25;
            MR_Word Var_37;

            {
              Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_37, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_3[0]));
              MR_hl_field(0, Var_37, 1) = ((MR_Box) (parse_tree__prog_type__strip_module_names_from_type_4_p_0_3));
              MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_37, 3) = ((MR_Box) (StripWhat_5));
              MR_hl_field(0, Var_37, 4) = ((MR_Box) (SetDefaultFunc_6));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_37, ArgTypes0_24, &ArgTypes_25);
            parse_tree__prog_mode__strip_module_names_from_ho_inst_info_4_p_0(StripWhat_5, SetDefaultFunc_6, HOInstInfo0_18, &HOInstInfo_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Type_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (PorF_17));
              MR_hl_field(3, base, 2) = ((MR_Box) (ArgTypes_25));
              MR_hl_field(3, base, 3) = ((MR_Box) (HOInstInfo_20));
              MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_19));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_21 = ((MR_Word) ((MR_hl_field(3, Type0_7, (MR_Integer) 1))));
            MR_Word ArgTypes0_29 = ((MR_Word) ((MR_hl_field(3, Type0_7, (MR_Integer) 2))));
            MR_Word Kind_30 = ((MR_Word) ((MR_hl_field(3, Type0_7, (MR_Integer) 3))));
            MR_Word ArgTypes_31;
            MR_Word Var_33;

            {
              Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_33, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_3[0]));
              MR_hl_field(0, Var_33, 1) = ((MR_Box) (parse_tree__prog_type__strip_module_names_from_type_4_p_0_1));
              MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_33, 3) = ((MR_Box) (StripWhat_5));
              MR_hl_field(0, Var_33, 4) = ((MR_Box) (SetDefaultFunc_6));
            }
            mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Var_33, ArgTypes0_29, &ArgTypes_31);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Type_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Var_21));
              MR_hl_field(3, base, 2) = ((MR_Box) (ArgTypes_31));
              MR_hl_field(3, base, 3) = ((MR_Box) (Kind_30));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubType0_22 = ((MR_Word) ((MR_hl_field(3, Type0_7, (MR_Integer) 1))));
            MR_Word SubType_23;
            MR_Word Kind_32 = ((MR_Word) ((MR_hl_field(3, Type0_7, (MR_Integer) 2))));

            parse_tree__prog_type__strip_module_names_from_type_4_p_0(StripWhat_5, SetDefaultFunc_6, SubType0_22, &SubType_23);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Type_8 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (SubType_23));
              MR_hl_field(3, base, 2) = ((MR_Box) (Kind_32));
            }
          }
          break;
      }
      break;
  }
}

void MR_CALL 
parse_tree__prog_type__var_list_to_type_list_3_p_0(
  MR_Word KindMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Type_8;
    MR_Word Types_9;
    MR_Word Kind_10;

    parse_tree__prog_data__get_tvar_kind_3_p_0(KindMap_1, Var_6, &Kind_10);
    {
      Type_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Type_8, 0) = ((MR_Box) (Var_6));
      MR_hl_field(0, Type_8, 1) = ((MR_Box) (Kind_10));
    }
    parse_tree__prog_type__var_list_to_type_list_3_p_0(KindMap_1, Vars_7, &Types_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Type_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Types_9));
    }
  }
}

void MR_CALL 
parse_tree__prog_type__var_to_type_3_p_0(
  MR_Word KindMap_4,
  MR_Word Var_5,
  MR_Word * Type_6)
{
  MR_Word Kind_7;

  parse_tree__prog_data__get_tvar_kind_3_p_0(KindMap_4, Var_5, &Kind_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Type_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (Kind_7));
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_list_to_var_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Type_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Types_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_5;
    MR_Word Vars_6;

    succeeded = ((MR_tag((MR_Word) Type_3)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_5 = ((MR_Word) ((MR_hl_field(0, Type_3, (MR_Integer) 0))));
      succeeded = parse_tree__prog_type__type_list_to_var_list_2_p_0(Types_4, &Vars_6);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_5));
          MR_hl_field(1, base, 1) = ((MR_Box) (Vars_6));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__prog_type__type_to_ctor_det_2_p_0(
  MR_Word Type_3,
  MR_Word * TypeCtor_4)
{
  MR_Word _ArgTypes_5;

  parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(Type_3, TypeCtor_4, &_ArgTypes_5);
}

MR_bool MR_CALL 
parse_tree__prog_type__type_to_ctor_2_p_0(
  MR_Word Type_3,
  MR_Word * TypeCtor_4)
{
  MR_bool succeeded;
  MR_Word _ArgTypes_5;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_3, TypeCtor_4, &_ArgTypes_5);
  return succeeded;
}

void MR_CALL 
parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(
  MR_Word Type_4,
  MR_Word * TypeCtor_5,
  MR_Word * ArgTypes_6)
{
  MR_bool succeeded;
  MR_Word TypeCtorPrime_7;
  MR_Word ArgTypesPrime_8;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_4, &TypeCtorPrime_7, &ArgTypesPrime_8);
  if (succeeded)
  {
    *TypeCtor_5 = TypeCtorPrime_7;
    *ArgTypes_6 = ArgTypesPrime_8;
  }
  else
  {
    MR_String Var_10;
    MR_String Var_12;

    Var_12 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ((MR_Box) (Type_4)));
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "type_to_ctor_and_args failed: ", Var_12);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args_det\'/3", Var_10);
      return;
    }
  }
}

MR_bool MR_CALL 
parse_tree__prog_type__type_to_ctor_and_args_3_p_0(
  MR_Word Type_4,
  MR_Word * TypeCtor_5,
  MR_Word * ArgTypes_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type_4)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SymName_9 = ((MR_Word) ((MR_hl_field(1, Type_4, (MR_Integer) 0))));
          MR_Integer Arity_11;

          *ArgTypes_6 = ((MR_Word) ((MR_hl_field(1, Type_4, (MR_Integer) 1))));
          Arity_11 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), *ArgTypes_6);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *TypeCtor_5 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (SymName_9));
            MR_hl_field(0, base, 1) = ((MR_Box) (Arity_11));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinType_12 = ((MR_Word) ((MR_hl_field(2, Type_4, (MR_Integer) 0))));
          MR_String Name_13;
          MR_Word SymName_33;

          parse_tree__prog_data__builtin_type_name_2_p_0(BuiltinType_12, &Name_13);
          {
            SymName_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SymName_33, 0) = ((MR_Box) (Name_13));
          }
          *ArgTypes_6 = (MR_Word) ((MR_Unsigned) 0U);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *TypeCtor_5 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (SymName_33));
            MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Arity_37;

              *ArgTypes_6 = ((MR_Word) ((MR_hl_field(3, Type_4, (MR_Integer) 1))));
              Arity_37 = mercury__list__length_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), *ArgTypes_6);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypeCtor_5 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (&parse_tree__prog_type_scalar_common_2[0]));
                MR_hl_field(0, base, 1) = ((MR_Box) (Arity_37));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PorF_14 = ((MR_Unsigned) ((MR_hl_field(3, Type_4, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Purity_16;
              MR_Integer NumArgTypes_17;
              MR_String PorFStr_18;
              MR_Integer UserArity_19;
              MR_Word SymName0_20;
              MR_Word SymName_35;

              *ArgTypes_6 = ((MR_Word) ((MR_hl_field(3, Type_4, (MR_Integer) 2))));
              Purity_16 = ((MR_Unsigned) ((MR_hl_field(3, Type_4, (MR_Integer) 4))) & (MR_Integer) 3);
              mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), *ArgTypes_6, &NumArgTypes_17);
              switch (PorF_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    PorFStr_18 = (MR_String) "func";
                    UserArity_19 = (MR_Integer) ((MR_Unsigned) NumArgTypes_17 - (MR_Unsigned) 1);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    PorFStr_18 = (MR_String) "pred";
                    UserArity_19 = NumArgTypes_17;
                  }
                  break;
              }
              {
                SymName0_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SymName0_20, 0) = ((MR_Box) (PorFStr_18));
              }
              switch (Purity_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 2:
                  SymName_35 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "impure", SymName0_20);
                  break;
                case (MR_Integer) 0:
                  SymName_35 = SymName0_20;
                  break;
                case (MR_Integer) 1:
                  SymName_35 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "semipure", SymName0_20);
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *TypeCtor_5 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (SymName_35));
                MR_hl_field(0, base, 1) = ((MR_Box) (UserArity_19));
              }
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__require__sorry_2_p_0((MR_String) "predicate \140parse_tree.prog_type.type_to_ctor_and_args\'/3", (MR_String) "apply/N types");
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubType_25 = ((MR_Word) ((MR_hl_field(3, Type_4, (MR_Integer) 1))));
              MR_Word next_value_of_Type_4 = SubType_25;

              // direct tailcall eliminated
              ;
              Type_4 = next_value_of_Type_4;
              continue;
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_type____Unify____is_builtin_dummy_type_ctor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_type____Compare____is_builtin_dummy_type_ctor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____is_dummy_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_type____Unify____is_dummy_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_type____Compare____is_dummy_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_type____Compare____is_dummy_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____nb_type_ctor_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_type____Unify____nb_type_ctor_category_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_type____Compare____nb_type_ctor_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_type____Compare____nb_type_ctor_category_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____polymorphism_cell_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_type____Unify____polymorphism_cell_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_type____Compare____polymorphism_cell_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_type____Compare____polymorphism_cell_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_type____Unify____type_ctor_cat_builtin_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_type____Compare____type_ctor_cat_builtin_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_type____Unify____type_ctor_cat_enum_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_type____Compare____type_ctor_cat_enum_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_system_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_type____Unify____type_ctor_cat_system_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_system_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_type____Compare____type_ctor_cat_system_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_cat_user_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_type____Unify____type_ctor_cat_user_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_cat_user_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_type____Compare____type_ctor_cat_user_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__prog_type____Unify____type_ctor_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_type____Unify____type_ctor_category_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_type____Compare____type_ctor_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_type____Compare____type_ctor_category_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__prog_type__init(void)
{
}

void mercury__parse_tree__prog_type__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_builtin_dummy_type_ctor_0);
	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_dummy_type_0);
	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_nb_type_ctor_category_0);
	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_polymorphism_cell_0);
	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_builtin_0);
	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_enum_0);
	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_system_0);
	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_cat_user_0);
	MR_register_type_ctor_info(&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_type_ctor_category_0);
}

void mercury__parse_tree__prog_type__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_type__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_type.
