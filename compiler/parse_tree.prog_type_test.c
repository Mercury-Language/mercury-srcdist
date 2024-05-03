/*
** Automatically generated from `prog_type_test.m'
** by the Mercury compiler,
** version rotd-2024-05-03
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


// :- module parse_tree.prog_type_test.
// :- implementation.

/*
INIT mercury__parse_tree__prog_type_test__init
ENDINIT
*/

#include "parse_tree.prog_type_test.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "string.builder.mih"



struct parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0_s {
  MR_Word parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0__Type_2;
  MR_bool parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0__succeeded;
  jmp_buf parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0__commit_0;
};

struct parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0_s {
  MR_Word parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__Type_3;
  MR_Word parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__Except_4;
  MR_bool parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__succeeded;
  jmp_buf parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__commit_0;
  MR_Word parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__TVar_5;
};

struct parse_tree__prog_type_test__type_is_ground_1_p_0_env_0_s {
  MR_Word parse_tree__prog_type_test__type_is_ground_1_p_0_env_0__Type_2;
  MR_bool parse_tree__prog_type_test__type_is_ground_1_p_0_env_0__succeeded;
  jmp_buf parse_tree__prog_type_test__type_is_ground_1_p_0_env_0__commit_0;
};


static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_test__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_0[2];

static const MR_DuFunctorDesc parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_test__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_1[3];

static const MR_DuFunctorDesc parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_1;

static const MR_PseudoTypeInfo parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_2[1];

static const MR_DuFunctorDesc parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_2;

static const MR_PseudoTypeInfo parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_3[2];

static const MR_DuFunctorDesc parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_3;

static const MR_PseudoTypeInfo parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_4[4];

static const MR_DuArgLocn parse_tree__prog_type_test__parse_tree__prog_type_test__field_locns_non_kinded_type_0_4[4];

static const MR_DuFunctorDesc parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_4;

static const MR_PseudoTypeInfo parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_5[3];

static const MR_DuFunctorDesc parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_5;

static const MR_DuFunctorDescPtr parse_tree__prog_type_test__parse_tree__prog_type_test__du_stag_ordered_non_kinded_type_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__prog_type_test__parse_tree__prog_type_test__du_stag_ordered_non_kinded_type_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__prog_type_test__parse_tree__prog_type_test__du_stag_ordered_non_kinded_type_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__prog_type_test__parse_tree__prog_type_test__du_stag_ordered_non_kinded_type_0_3[3];

static const MR_DuPtagLayout parse_tree__prog_type_test__parse_tree__prog_type_test__du_ptag_ordered_non_kinded_type_0[4];

static const MR_DuFunctorDescPtr parse_tree__prog_type_test__parse_tree__prog_type_test__du_name_ordered_non_kinded_type_0[6];

static const MR_Integer parse_tree__prog_type_test__parse_tree__prog_type_test__functor_number_map_non_kinded_type_0[6];

static void MR_CALL 
parse_tree__prog_type_test__type_is_nonground_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type_test__type_is_nonground_1_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_3(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__prog_type_test__types_are_ground_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
parse_tree__prog_type_test__type_is_ground_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__prog_type_test__type_is_ground_1_p_0_2(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__prog_type_test____Unify____non_kinded_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__prog_type_test____Compare____non_kinded_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__prog_type_test_scalar_common_1[3][2];

static /* final */ const MR_Box parse_tree__prog_type_test_scalar_common_2[1][1];




static /* final */ const MR_Box parse_tree__prog_type_test_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__prog_type_test_scalar_common_2[0])),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_type_test_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "tuple")) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_test__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_type_test__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)
};

static const MR_DuFunctorDesc parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_0 = {
  (MR_String) "type_variable",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__prog_type_test__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_PseudoTypeInfo parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_1[3] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_type_test__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)
};

static const MR_DuFunctorDesc parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_1 = {
  (MR_String) "defined_type",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_builtin_type_0) };

static const MR_DuFunctorDesc parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_2 = {
  (MR_String) "builtin_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_3[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_type_test__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)
};

static const MR_DuFunctorDesc parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_3 = {
  (MR_String) "tuple_type",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_4[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_type_test__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ho_inst_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0)
};

static const MR_DuArgLocn parse_tree__prog_type_test__parse_tree__prog_type_test__field_locns_non_kinded_type_0_4[4] = {
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
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_4 = {
  (MR_String) "higher_order_type",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_4,
  NULL,
  parse_tree__prog_type_test__parse_tree__prog_type_test__field_locns_non_kinded_type_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_5[3] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_type_test__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_type_test__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0)
};

static const MR_DuFunctorDesc parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_5 = {
  (MR_String) "apply_n_type",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  parse_tree__prog_type_test__parse_tree__prog_type_test__field_types_non_kinded_type_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__prog_type_test__parse_tree__prog_type_test__du_stag_ordered_non_kinded_type_0_0[1] = { &parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_0 };

static const MR_DuFunctorDescPtr parse_tree__prog_type_test__parse_tree__prog_type_test__du_stag_ordered_non_kinded_type_0_1[1] = { &parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_1 };

static const MR_DuFunctorDescPtr parse_tree__prog_type_test__parse_tree__prog_type_test__du_stag_ordered_non_kinded_type_0_2[1] = { &parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_2 };

static const MR_DuFunctorDescPtr parse_tree__prog_type_test__parse_tree__prog_type_test__du_stag_ordered_non_kinded_type_0_3[3] = {
  &parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_3,
  &parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_4,
  &parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_5
};

static const MR_DuPtagLayout parse_tree__prog_type_test__parse_tree__prog_type_test__du_ptag_ordered_non_kinded_type_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_type_test__parse_tree__prog_type_test__du_stag_ordered_non_kinded_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_type_test__parse_tree__prog_type_test__du_stag_ordered_non_kinded_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__prog_type_test__parse_tree__prog_type_test__du_stag_ordered_non_kinded_type_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__prog_type_test__parse_tree__prog_type_test__du_stag_ordered_non_kinded_type_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__prog_type_test__parse_tree__prog_type_test__du_name_ordered_non_kinded_type_0[6] = {
  &parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_5,
  &parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_2,
  &parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_1,
  &parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_4,
  &parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_3,
  &parse_tree__prog_type_test__parse_tree__prog_type_test__du_functor_desc_non_kinded_type_0_0
};

static const MR_Integer parse_tree__prog_type_test__parse_tree__prog_type_test__functor_number_map_non_kinded_type_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__prog_type_test__parse_tree__prog_type_test__type_ctor_info_non_kinded_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_type_test____Unify____non_kinded_type_0_0_10001)),
  ((MR_Box) (parse_tree__prog_type_test____Compare____non_kinded_type_0_0_10001)),
  (MR_String) "parse_tree.prog_type_test",
  (MR_String) "non_kinded_type",
  { parse_tree__prog_type_test__parse_tree__prog_type_test__du_name_ordered_non_kinded_type_0 },
  { parse_tree__prog_type_test__parse_tree__prog_type_test__du_ptag_ordered_non_kinded_type_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  parse_tree__prog_type_test__parse_tree__prog_type_test__functor_number_map_non_kinded_type_0,

};

void MR_CALL 
parse_tree__prog_type_test____Compare____non_kinded_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__prog_type_test____Unify____non_kinded_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = parse_tree__prog_data____Unify____mer_type_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_has_variable_arity_ctor_3_p_0(
  MR_Word Type_4,
  MR_Word * TypeCtor_5,
  MR_Word * ArgTypes_6)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_8;
  MR_Word ArgTypes0_9;
  MR_Word Var_18;

  Var_18 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(Type_4);
  succeeded = ((((MR_tag((MR_Word) Var_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    PredOrFunc_8 = ((MR_Unsigned) ((MR_hl_field(3, Var_18, (MR_Integer) 1))) & (MR_Integer) 1);
    ArgTypes0_9 = ((MR_Word) ((MR_hl_field(3, Var_18, (MR_Integer) 2))));
    {
      MR_String PredOrFuncStr_10;
      MR_Word Var_12;

      *ArgTypes_6 = ArgTypes0_9;
      PredOrFuncStr_10 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PredOrFunc_8);
      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_12, 0) = ((MR_Box) (PredOrFuncStr_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *TypeCtor_5 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_12));
        MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Word Var_20;

    Var_20 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(Type_4);
    succeeded = ((((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_20, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      *ArgTypes_6 = ((MR_Word) ((MR_hl_field(3, Var_20, (MR_Integer) 1))));
      *TypeCtor_5 = (MR_Word) (&parse_tree__prog_type_test_scalar_common_1[2]);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_ctor_is_bitmap_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Var_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Var_3;
  MR_String Var_4;
  MR_String Var_5;
  MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  succeeded = ((MR_tag((MR_Word) Var_2)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_3 = ((MR_Word) ((MR_hl_field(1, Var_2, (MR_Integer) 0))));
    Var_5 = ((MR_String) ((MR_hl_field(1, Var_2, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_3)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_4 = ((MR_String) ((MR_hl_field(0, Var_3, (MR_Integer) 0))));
      succeeded = (strcmp(Var_4, (MR_String) "bitmap") == 0);
      if (succeeded)
      {
        succeeded = (strcmp(Var_5, (MR_String) "bitmap") == 0);
        if (succeeded)
          succeeded = (Var_6 == (MR_Integer) 0);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_ctor_is_array_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Var_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Var_3;
  MR_String Var_4;
  MR_String Var_5;
  MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  succeeded = ((MR_tag((MR_Word) Var_2)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_3 = ((MR_Word) ((MR_hl_field(1, Var_2, (MR_Integer) 0))));
    Var_5 = ((MR_String) ((MR_hl_field(1, Var_2, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) Var_3)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_4 = ((MR_String) ((MR_hl_field(0, Var_3, (MR_Integer) 0))));
      succeeded = (strcmp(Var_4, (MR_String) "array") == 0);
      if (succeeded)
      {
        succeeded = (strcmp(Var_5, (MR_String) "array") == 0);
        if (succeeded)
          succeeded = (Var_6 == (MR_Integer) 1);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_is_io_state_1_p_0(
  MR_Word Type_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_11_11;
  MR_Word TypeCtor_3;
  MR_Word ModuleName_4;
  MR_Word Var_6;
  MR_String Var_7;
  MR_Integer Var_8;
  MR_Word Var_9;
  MR_Word Var_10;

  succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(Type_2, &TypeCtor_3, &Var_9);
  if (succeeded)
  {
    TypeInfo_11_11 = (MR_Word) (&parse_tree__prog_type_test_scalar_common_1[1]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_9)));
    if (succeeded)
    {
      ModuleName_4 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
      Var_6 = ((MR_Word) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 0))));
      Var_8 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_3, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_6)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_10 = ((MR_Word) ((MR_hl_field(1, Var_6, (MR_Integer) 0))));
        Var_7 = ((MR_String) ((MR_hl_field(1, Var_6, (MR_Integer) 1))));
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_4, Var_10);
        if (succeeded)
        {
          succeeded = (strcmp(Var_7, (MR_String) "state") == 0);
          if (succeeded)
            succeeded = (Var_8 == (MR_Integer) 0);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_ctor_is_tuple_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Var_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_String Var_4;

  succeeded = ((MR_tag((MR_Word) Var_3)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_4 = ((MR_String) ((MR_hl_field(0, Var_3, (MR_Integer) 0))));
    succeeded = (strcmp(Var_4, (MR_String) "{}") == 0);
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_ctor_is_higher_order_3_p_0(
  MR_Word TypeCtor_4,
  MR_Word * Purity_5,
  MR_Word * PredOrFunc_6)
{
  MR_bool succeeded;
  MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(0, TypeCtor_4, (MR_Integer) 0))));
  MR_String PorFStr_10;

  if (((MR_tag((MR_Word) SymName_7)) == (MR_Integer) 1))
  {
    MR_Word ModuleSymName_9 = ((MR_Word) ((MR_hl_field(1, SymName_7, (MR_Integer) 0))));
    MR_String Qualifier_11;

    PorFStr_10 = ((MR_String) ((MR_hl_field(1, SymName_7, (MR_Integer) 1))));
    succeeded = ((MR_tag((MR_Word) ModuleSymName_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      Qualifier_11 = ((MR_String) ((MR_hl_field(0, ModuleSymName_9, (MR_Integer) 0))));
      if ((strcmp(Qualifier_11, (MR_String) "impure") == 0))
      {
        *Purity_5 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      if ((strcmp(Qualifier_11, (MR_String) "semipure") == 0))
      {
        *Purity_5 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
  }
  else
  {
    PorFStr_10 = ((MR_String) ((MR_hl_field(0, SymName_7, (MR_Integer) 0))));
    *Purity_5 = (MR_Integer) 0;
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    if ((strcmp(PorFStr_10, (MR_String) "func") == 0))
    {
      *PredOrFunc_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(PorFStr_10, (MR_String) "pred") == 0))
    {
      *PredOrFunc_6 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_type_test__type_is_nonground_1_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__prog_type_test__type_is_nonground_1_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word Var_3;

        parse_tree__prog_type_scan__type_contains_var_2_p_0((env_ptr)->parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0__Type_2, &Var_3, parse_tree__prog_type_test__type_is_nonground_1_p_0_1, env_ptr);
      }
      (env_ptr)->parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0__succeeded = MR_TRUE;
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_is_nonground_1_p_0(
  MR_Word Type_2)
{
  struct parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0_s env;

  (env).parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0__Type_2 = Type_2;
  parse_tree__prog_type_test__type_is_nonground_1_p_0_2(&env);
  return (env).parse_tree__prog_type_test__type_is_nonground_1_p_0_env_0__succeeded;
}

static void MR_CALL 
parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0_s *) (env_ptr_arg);

  {
    (env_ptr)->parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__succeeded = mercury__list__contains_2_p_0((MR_Word) (&parse_tree__prog_type_test_scalar_common_1[0]), (env_ptr)->parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__Except_4, ((MR_Box) ((env_ptr)->parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__TVar_5)));
    (env_ptr)->parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__succeeded = !((env_ptr)->parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__succeeded);
    if ((env_ptr)->parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__succeeded)
      parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_3(
  void * env_ptr_arg)
{
  struct parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__commit_0) == 0)
    {
      parse_tree__prog_type_scan__type_contains_var_2_p_0((env_ptr)->parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__Type_3, &(env_ptr)->parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__TVar_5, parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_2, env_ptr);
      (env_ptr)->parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__succeeded = MR_TRUE;
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0(
  MR_Word Type_3,
  MR_Word Except_4)
{
  struct parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0_s env;

  (env).parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__Type_3 = Type_3;
  (env).parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__Except_4 = Except_4;
  parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_3(&env);
  (env).parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__succeeded = !((env).parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__succeeded);
  return (env).parse_tree__prog_type_test__type_is_ground_except_vars_2_p_0_env_0__succeeded;
}

static MR_bool MR_CALL 
parse_tree__prog_type_test__types_are_ground_2_p_0(
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
    MR_Word GroundType_5;
    MR_Word GroundTypes_6;

    succeeded = parse_tree__prog_type_test__type_is_ground_2_p_0(Type_3, &GroundType_5);
    if (succeeded)
    {
      succeeded = parse_tree__prog_type_test__types_are_ground_2_p_0(Types_4, &GroundTypes_6);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (GroundType_5));
          MR_hl_field(1, base, 1) = ((MR_Box) (GroundTypes_6));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_is_ground_2_p_0(
  MR_Word Type_3,
  MR_Word * GroundType_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Type_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      {
        MR_Word SymName_10 = ((MR_Word) ((MR_hl_field(1, Type_3, (MR_Integer) 0))));
        MR_Word ArgTypes_11 = ((MR_Word) ((MR_hl_field(1, Type_3, (MR_Integer) 1))));
        MR_Word Kind_12 = ((MR_Word) ((MR_hl_field(1, Type_3, (MR_Integer) 2))));
        MR_Word GroundArgTypes_13;

        succeeded = parse_tree__prog_type_test__types_are_ground_2_p_0(ArgTypes_11, &GroundArgTypes_13);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *GroundType_4 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (SymName_10));
            MR_hl_field(1, base, 1) = ((MR_Box) (GroundArgTypes_13));
            MR_hl_field(1, base, 2) = ((MR_Box) (Kind_12));
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word BuiltinType_9 = ((MR_Word) ((MR_hl_field(2, Type_3, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *GroundType_4 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (BuiltinType_9));
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Type_3, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word ArgTypes_20 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 1))));
            MR_Word Kind_21 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 2))));
            MR_Word GroundArgTypes_22;

            succeeded = parse_tree__prog_type_test__types_are_ground_2_p_0(ArgTypes_20, &GroundArgTypes_22);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *GroundType_4 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, base, 1) = ((MR_Box) (GroundArgTypes_22));
                MR_hl_field(3, base, 2) = ((MR_Box) (Kind_21));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PorF_14 = ((MR_Unsigned) ((MR_hl_field(3, Type_3, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word HoInstInfo_15 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 3))));
            MR_Word Purity_16 = ((MR_Unsigned) ((MR_hl_field(3, Type_3, (MR_Integer) 4))) & (MR_Integer) 3);
            MR_Word ArgTypes_23 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 2))));
            MR_Word GroundArgTypes_24;

            succeeded = parse_tree__prog_type_test__types_are_ground_2_p_0(ArgTypes_23, &GroundArgTypes_24);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *GroundType_4 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (PorF_14));
                MR_hl_field(3, base, 2) = ((MR_Box) (GroundArgTypes_24));
                MR_hl_field(3, base, 3) = ((MR_Box) (HoInstInfo_15));
                MR_hl_field(3, base, 4) = (MR_Box) ((MR_Unsigned) (Purity_16));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word SubType_17 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 1))));
            MR_Word GroundSubType_18;
            MR_Word Kind_25 = ((MR_Word) ((MR_hl_field(3, Type_3, (MR_Integer) 2))));

            succeeded = parse_tree__prog_type_test__type_is_ground_2_p_0(SubType_17, &GroundSubType_18);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *GroundType_4 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(3, base, 1) = ((MR_Box) (GroundSubType_18));
                MR_hl_field(3, base, 2) = ((MR_Box) (Kind_25));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_type_test__type_is_ground_1_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__prog_type_test__type_is_ground_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type_test__type_is_ground_1_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__prog_type_test__type_is_ground_1_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__prog_type_test__type_is_ground_1_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__prog_type_test__type_is_ground_1_p_0_env_0_s * env_ptr = (struct parse_tree__prog_type_test__type_is_ground_1_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__prog_type_test__type_is_ground_1_p_0_env_0__commit_0) == 0)
    {
      {
        MR_Word Var_3;

        parse_tree__prog_type_scan__type_contains_var_2_p_0((env_ptr)->parse_tree__prog_type_test__type_is_ground_1_p_0_env_0__Type_2, &Var_3, parse_tree__prog_type_test__type_is_ground_1_p_0_1, env_ptr);
      }
      (env_ptr)->parse_tree__prog_type_test__type_is_ground_1_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__prog_type_test__type_is_ground_1_p_0_env_0__succeeded = MR_TRUE;
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_is_ground_1_p_0(
  MR_Word Type_2)
{
  struct parse_tree__prog_type_test__type_is_ground_1_p_0_env_0_s env;

  (env).parse_tree__prog_type_test__type_is_ground_1_p_0_env_0__Type_2 = Type_2;
  parse_tree__prog_type_test__type_is_ground_1_p_0_2(&env);
  (env).parse_tree__prog_type_test__type_is_ground_1_p_0_env_0__succeeded = !((env).parse_tree__prog_type_test__type_is_ground_1_p_0_env_0__succeeded);
  return (env).parse_tree__prog_type_test__type_is_ground_1_p_0_env_0__succeeded;
}

void MR_CALL 
parse_tree__prog_type_test__type_is_higher_order_details_det_4_p_0(
  MR_Word Type_5,
  MR_Word * STATE_VARIABLE_Purity_9,
  MR_Word * STATE_VARIABLE_PredOrFunc_10,
  MR_Word * STATE_VARIABLE_PredArgTypes_11)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Purity_12_12;
  MR_Word STATE_VARIABLE_PredOrFunc_13_13;
  MR_Word STATE_VARIABLE_PredArgTypes_14_14;
  MR_Word Var_18;

  Var_18 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(Type_5);
  succeeded = ((((MR_tag((MR_Word) Var_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    STATE_VARIABLE_PredOrFunc_13_13 = ((MR_Unsigned) ((MR_hl_field(3, Var_18, (MR_Integer) 1))) & (MR_Integer) 1);
    STATE_VARIABLE_PredArgTypes_14_14 = ((MR_Word) ((MR_hl_field(3, Var_18, (MR_Integer) 2))));
    STATE_VARIABLE_Purity_12_12 = ((MR_Unsigned) ((MR_hl_field(3, Var_18, (MR_Integer) 4))) & (MR_Integer) 3);
    *STATE_VARIABLE_PredArgTypes_11 = STATE_VARIABLE_PredArgTypes_14_14;
    *STATE_VARIABLE_PredOrFunc_10 = STATE_VARIABLE_PredOrFunc_13_13;
    *STATE_VARIABLE_Purity_9 = STATE_VARIABLE_Purity_12_12;
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.prog_type_test.type_is_higher_order_details_det\'/4", (MR_String) "type is not higher-order");
      return;
    }
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_is_higher_order_details_4_p_0(
  MR_Word Type_5,
  MR_Word * Purity_6,
  MR_Word * PredOrFunc_7,
  MR_Word * ArgTypes_8)
{
  MR_bool succeeded;
  MR_Word Var_10;

  Var_10 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(Type_5);
  succeeded = ((((MR_tag((MR_Word) Var_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
    *PredOrFunc_7 = ((MR_Unsigned) ((MR_hl_field(3, Var_10, (MR_Integer) 1))) & (MR_Integer) 1);
    *ArgTypes_8 = ((MR_Word) ((MR_hl_field(3, Var_10, (MR_Integer) 2))));
    *Purity_6 = ((MR_Unsigned) ((MR_hl_field(3, Var_10, (MR_Integer) 4))) & (MR_Integer) 3);
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_is_higher_order_1_p_0(
  MR_Word Type_2)
{
  MR_bool succeeded;
  MR_Word Var_7;

  Var_7 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(Type_2);
  succeeded = ((((MR_tag((MR_Word) Var_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
  if (succeeded)
  {
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_is_tuple_2_p_0(
  MR_Word Type_3,
  MR_Word * ArgTypes_4)
{
  MR_bool succeeded;
  MR_Word Var_6;

  Var_6 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(Type_3);
  succeeded = ((((MR_tag((MR_Word) Var_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_6, (MR_Integer) 0)))) == (MR_Integer) 0)));
  if (succeeded)
    *ArgTypes_4 = ((MR_Word) ((MR_hl_field(3, Var_6, (MR_Integer) 1))));
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_is_nonvar_1_p_0(
  MR_Word Type_2)
{
  MR_bool succeeded;
  MR_Word Var_5;

  Var_5 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(Type_2);
  succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 0);
  if (succeeded)
  {
  }
  succeeded = !(succeeded);
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__prog_type_test__type_is_var_1_p_0(
  MR_Word Type_2)
{
  MR_bool succeeded;
  MR_Word Var_5;

  Var_5 = parse_tree__prog_type_test__strip_kind_annotation_1_f_0(Type_2);
  succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 0);
  if (succeeded)
  {
  }
  return succeeded;
}

MR_Word MR_CALL 
parse_tree__prog_type_test__strip_kind_annotation_1_f_0(
  MR_Word Type0_3)
{
  while (MR_TRUE)
  {
    MR_Word Type_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Type0_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Type_4 = (MR_Word) (Type0_3);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Type0_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            Type_4 = (MR_Word) (Type0_3);
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type1_5 = ((MR_Word) ((MR_hl_field(3, Type0_3, (MR_Integer) 1))));
              MR_Word next_value_of_Type0_3 = Type1_5;

              // direct tailcall eliminated
              ;
              Type0_3 = next_value_of_Type0_3;
              continue;
            }
            break;
        }
        break;
    }
    return Type_4;
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__prog_type_test____Unify____non_kinded_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__prog_type_test____Unify____non_kinded_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__prog_type_test____Compare____non_kinded_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__prog_type_test____Compare____non_kinded_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__prog_type_test__init(void)
{
}

void mercury__parse_tree__prog_type_test__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_type_test__parse_tree__prog_type_test__type_ctor_info_non_kinded_type_0);
}

void mercury__parse_tree__prog_type_test__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__prog_type_test__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.prog_type_test.
