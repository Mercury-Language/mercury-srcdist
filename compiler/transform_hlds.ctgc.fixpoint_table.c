/*
** Automatically generated from `ctgc.fixpoint_table.m'
** by the Mercury compiler,
** version rotd-2025-09-13
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


// :- module transform_hlds.ctgc.fixpoint_table.
// :- implementation.

/*
INIT mercury__transform_hlds__ctgc__fixpoint_table__init
ENDINIT
*/

#include "transform_hlds.ctgc.fixpoint_table.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "builtin.mih"
#include "enum.mih"
#include "int.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "term.mih"
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "transform_hlds.ctgc.mih"




static const MR_VA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__fixpoint_table____vpti_func_2__pseudo_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__fixpoint_table__list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fixpoint_table_2_0[4];

static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fixpoint_table_2_0[4];

static const MR_DuArgLocn transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_locns_fixpoint_table_2_0[4];

static const MR_DuFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fixpoint_table_2_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fixpoint_table_2[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fixpoint_table_2[1];

static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fixpoint_table_2[1];

static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fp_entry_1_0[2];

static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fp_entry_1_0[2];

static const MR_DuArgLocn transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_locns_fp_entry_1_0[2];

static const MR_DuFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fp_entry_1_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fp_entry_1[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fp_entry_1[1];

static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fp_entry_1[1];

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0;

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_ordinal_ordered_is_recursive_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_recursive_0[2];

static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_recursive_0[2];

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0;

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_ordinal_ordered_is_stable_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_stable_0[2];

static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_stable_0[2];

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__129__1_6_p_0(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_E_25,
  MR_Word InitFunction_4,
  MR_Box LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word * LambdaHeadVar__3_14);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0(
  MR_Word TypeInfo_for_E_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0(
  MR_Word TypeInfo_for_E_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__accumulate_instability_4_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_E_11,
  MR_Box _Key_5,
  MR_Word Entry_6,
  MR_Word S0_7,
  MR_Word * S_8);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_p_0(
  MR_Word TypeInfo_for_E_11,
  MR_Word Entry_6,
  MR_Word S0_7,
  MR_Word * S_8);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Integer transform_hlds__ctgc__fixpoint_table_scalar_common_1[1][3];

static /* final */ const MR_Box transform_hlds__ctgc__fixpoint_table_scalar_common_2[2][9];




static /* final */ const MR_Integer transform_hlds__ctgc__fixpoint_table_scalar_common_1[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__fixpoint_table_scalar_common_2[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table____vpti_func_2__pseudo_1__pseudo_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2)),
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table_scalar_common_1[0])),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2)),
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0)),
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0))
  },
};



#include "array.mh"


static const MR_VA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__fixpoint_table____vpti_func_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__fixpoint_table__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fixpoint_table_2_0[4] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__fixpoint_table__list__pti_list_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_recursive_0),
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2)
};

static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fixpoint_table_2_0[4] = {
  (MR_String) "keys",
  (MR_String) "run",
  (MR_String) "recursive",
  (MR_String) "mapping"
};

static const MR_DuArgLocn transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_locns_fixpoint_table_2_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
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

static const MR_DuFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0 = {
  (MR_String) "fixpoint_table",
  INT16_C(4),
  UINT16_C(9),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fixpoint_table_2_0,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fixpoint_table_2_0,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_locns_fixpoint_table_2_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fixpoint_table_2_0[1] = { &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0 };

static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fixpoint_table_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fixpoint_table_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fixpoint_table_2[1] = { &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0 };

static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fixpoint_table_2[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0_10001)),
  (MR_String) "transform_hlds.ctgc.fixpoint_table",
  (MR_String) "fixpoint_table",
  { transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fixpoint_table_2 },
  { transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fixpoint_table_2 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fixpoint_table_2,

};

static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fp_entry_1_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fp_entry_1_0[2] = {
  (MR_String) "entry_stable",
  (MR_String) "entry_elem"
};

static const MR_DuArgLocn transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_locns_fp_entry_1_0[2] = {
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

static const MR_DuFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0 = {
  (MR_String) "entry",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fp_entry_1_0,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fp_entry_1_0,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_locns_fp_entry_1_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fp_entry_1_0[1] = { &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0 };

static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fp_entry_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fp_entry_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fp_entry_1[1] = { &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0 };

static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fp_entry_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0_10001)),
  (MR_String) "transform_hlds.ctgc.fixpoint_table",
  (MR_String) "fp_entry",
  { transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fp_entry_1 },
  { transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fp_entry_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fp_entry_1,

};

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0 = {
  (MR_String) "is_recursive",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1 = {
  (MR_String) "is_not_recursive",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_ordinal_ordered_is_recursive_0[2] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0,
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_recursive_0[2] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1,
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0
};

static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_recursive_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_recursive_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.fixpoint_table",
  (MR_String) "is_recursive",
  { transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_recursive_0 },
  { transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_ordinal_ordered_is_recursive_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_recursive_0,

};

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0 = {
  (MR_String) "is_stable",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1 = {
  (MR_String) "is_unstable",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_ordinal_ordered_is_stable_0[2] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0,
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_stable_0[2] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0,
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1
};

static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_stable_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.fixpoint_table",
  (MR_String) "is_stable",
  { transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_stable_0 },
  { transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_ordinal_ordered_is_stable_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_stable_0,

};

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__129__1_6_p_0(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_E_25,
  MR_Word InitFunction_4,
  MR_Box LambdaHeadVar__1_12,
  MR_Word LambdaHeadVar__2_13,
  MR_Word * LambdaHeadVar__3_14)
{
  MR_Word TypeInfo_27_27;
  MR_Box E_10;
  MR_Word Var_17;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, InitFunction_4, 1))));
  MR_Word conv1_LambdaHeadVar__3_14;

  E_10 = func_0(((MR_Box) (InitFunction_4)), LambdaHeadVar__1_12);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 1) = E_10;
  }
  {
    TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_27_27, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
    MR_hl_field(0, TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_E_25));
  }
  mercury__map__det_insert_4_p_0(TypeInfo_for_K_24, TypeInfo_27_27, LambdaHeadVar__1_12, ((MR_Box) (Var_17)), (MR_Word) (LambdaHeadVar__2_13), &conv1_LambdaHeadVar__3_14);
  *LambdaHeadVar__3_14 = (MR_Word) (conv1_LambdaHeadVar__3_14);
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0(
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

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0(
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

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0(
  MR_Word TypeInfo_for_E_11,
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Box ArgX2_7 = (MR_hl_field(0, HeadVar__2_2, 1));
    MR_Box ArgY2_8 = (MR_hl_field(0, HeadVar__3_3, 1));
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
      mercury__builtin__compare_3_p_0(TypeInfo_for_E_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0(
  MR_Word TypeInfo_for_E_9,
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Box ArgX2_5 = (MR_hl_field(0, HeadVar__1_1, 1));
    MR_Box ArgY2_6 = (MR_hl_field(0, HeadVar__2_2, 1));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_E_9, ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_E_18,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__list____Compare____list_1_0(TypeInfo_for_K_17, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_27 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_28 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_27 < Var_28);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_27 > Var_28);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word TypeInfo_24_24;

          {
            TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_24_24, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
            MR_hl_field(0, TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_E_18));
          }
          mercury__tree234____Compare____tree234_2_0(TypeInfo_for_K_17, TypeInfo_24_24, HeadVar__1_1, (MR_Word) (ArgX4_13), (MR_Word) (ArgY4_14));
        }
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_E_14,
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
  {
    MR_Word TypeCtorInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_K_13, ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeCtorInfo_17_17 = (MR_Word) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1);
          {
            TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_18_18, 0) = ((MR_Box) (TypeCtorInfo_17_17));
            MR_hl_field(0, TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_E_14));
          }
          succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_K_13, TypeInfo_18_18, (MR_Word) (ArgX4_9), (MR_Word) (ArgY4_10));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__accumulate_instability_4_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_E_11,
  MR_Box _Key_5,
  MR_Word Entry_6,
  MR_Word S0_7,
  MR_Word * S_8)
{
  transform_hlds__ctgc__fixpoint_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_p_0(TypeInfo_for_E_11, Entry_6, S0_7, S_8);
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_p_0(
  MR_Word TypeInfo_for_E_11,
  MR_Word Entry_6,
  MR_Word S0_7,
  MR_Word * S_8)
{
  switch (S0_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *S_8 = ((MR_Unsigned) ((MR_hl_field(0, Entry_6, 0))) & (MR_Integer) 1);
      break;
    case (MR_Integer) 1:
      *S_8 = (MR_Integer) 1;
      break;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_E_14,
  MR_Box Index_4,
  MR_Word T_5,
  MR_Box * Elem_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_16_16;
  MR_Word Entry_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, T_5, 3))));
  MR_Box conv0_Entry_7;

  {
    TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
    MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_E_14));
  }
  succeeded = mercury__map__search_3_p_0(TypeInfo_for_K_13, TypeInfo_16_16, (MR_Word) (Var_8), Index_4, &conv0_Entry_7);
  if (succeeded)
  {
    Entry_7 = ((MR_Word) (conv0_Entry_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Elem_6 = (MR_hl_field(0, Entry_7, 1));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Box MR_CALL 
transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_f_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_E_11,
  MR_Box Index_4,
  MR_Word T_5)
{
  MR_bool succeeded;
  MR_Box Elem_6;
  MR_Box TabledElem_7;
  MR_Word TypeInfo_16_19;
  MR_Word Entry_12;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, T_5, 3))));
  MR_Box conv0_Entry_12;

  {
    TypeInfo_16_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_16_19, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
    MR_hl_field(0, TypeInfo_16_19, 1) = ((MR_Box) (TypeInfo_for_E_11));
  }
  succeeded = mercury__map__search_3_p_0(TypeInfo_for_K_10, TypeInfo_16_19, (MR_Word) (Var_13), Index_4, &conv0_Entry_12);
  if (succeeded)
  {
    Entry_12 = ((MR_Word) (conv0_Entry_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    TabledElem_7 = (MR_hl_field(0, Entry_12, 1));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    Elem_6 = TabledElem_7;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140transform_hlds.ctgc.fixpoint_table.get_from_fixpoint_table_final\'/2", (MR_String) "key not in map.");
  return Elem_6;
}

MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_p_0(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_E_27,
  MR_Box Index_5,
  MR_Box * Elem_6,
  MR_Word STATE_VARIABLE_T_0_11,
  MR_Word * STATE_VARIABLE_T_12)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_28_28;
  MR_Word TypeInfo_29_29;
  MR_Word List_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_T_0_11, 0))));
  MR_Word Map_9;
  MR_Word Entry_10;
  MR_Word Var_14;
  MR_Box conv0_Entry_10;
  MR_Word Var_22;
  MR_Integer Var_23;
  MR_Word Var_25;

  succeeded = mercury__list__member_2_p_0(TypeInfo_for_K_26, Index_5, List_8);
  if (succeeded)
  {
    Map_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_T_0_11, 3))));
    TypeCtorInfo_28_28 = (MR_Word) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1);
    {
      TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_29_29, 0) = ((MR_Box) (TypeCtorInfo_28_28));
      MR_hl_field(0, TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_for_E_27));
    }
    mercury__map__lookup_3_p_0(TypeInfo_for_K_26, TypeInfo_29_29, (MR_Word) (Map_9), Index_5, &conv0_Entry_10);
    Entry_10 = ((MR_Word) (conv0_Entry_10));
    *Elem_6 = (MR_hl_field(0, Entry_10, 1));
    Var_14 = (MR_Integer) 0;
    Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_T_0_11, 0))));
    Var_23 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_T_0_11, 1))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_T_0_11, 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_T_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_23));
      MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_14));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_25));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_p_0(
  MR_Word TypeInfo_for_E_26,
  MR_Word TypeInfo_for_K_27,
  MR_Word IsLessOrEqualTest_6,
  MR_Box Index_7,
  MR_Box Elem_8,
  MR_Word STATE_VARIABLE_T_0_16,
  MR_Word * STATE_VARIABLE_T_17)
{
  MR_bool succeeded;
  MR_Word TypeInfo_29_29;
  MR_Word Map0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_T_0_16, 3))));
  MR_Word Entry_11;
  MR_Box TabledElem_12;
  MR_Word IsStable_13;
  MR_Word FinalTabledElem_14;
  MR_Word Map_15;
  MR_Box conv0_Entry_11;
  MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box);
  MR_Word conv2_Map_15;
  MR_Word Var_22;
  MR_Integer Var_23;
  MR_Word Var_24;

  {
    TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_29_29, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
    MR_hl_field(0, TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_for_E_26));
  }
  mercury__map__lookup_3_p_0(TypeInfo_for_K_27, TypeInfo_29_29, (MR_Word) (Map0_10), Index_7, &conv0_Entry_11);
  Entry_11 = ((MR_Word) (conv0_Entry_11));
  TabledElem_12 = (MR_hl_field(0, Entry_11, 1));
  func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, IsLessOrEqualTest_6, 1))));
  succeeded = func_1(((MR_Box) (IsLessOrEqualTest_6)), Elem_8, TabledElem_12);
  if (succeeded)
    IsStable_13 = (MR_Integer) 0;
  else
    IsStable_13 = (MR_Integer) 1;
  {
    FinalTabledElem_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FinalTabledElem_14, 0) = (MR_Box) ((MR_Unsigned) (IsStable_13));
    MR_hl_field(0, FinalTabledElem_14, 1) = Elem_8;
  }
  mercury__map__det_update_4_p_0(TypeInfo_for_K_27, TypeInfo_29_29, Index_7, ((MR_Box) (FinalTabledElem_14)), (MR_Word) (Map0_10), &conv2_Map_15);
  Map_15 = (MR_Word) (conv2_Map_15);
  Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_T_0_16, 0))));
  Var_23 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_T_0_16, 1))));
  Var_24 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_T_0_16, 2))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_T_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_24));
    MR_hl_field(0, base, 3) = ((MR_Box) (Map_15));
  }
}

MR_String MR_CALL 
transform_hlds__ctgc__fixpoint_table__description_1_f_0(
  MR_Word TypeInfo_for_K_4,
  MR_Word TypeInfo_for_E_5,
  MR_Word T_3)
{
  MR_bool succeeded;
  MR_String HeadVar__2_2;

  succeeded = transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0(TypeInfo_for_K_4, TypeInfo_for_E_5, T_3);
  if (succeeded)
    HeadVar__2_2 = (MR_String) "stable";
  else
    HeadVar__2_2 = (MR_String) "unstable";
  return HeadVar__2_2;
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_S_8;

  transform_hlds__ctgc__fixpoint_table__accumulate_instability_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_S_8);
  *wrapper_arg_4 = ((MR_Box) (conv0_S_8));
}

MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_E_15,
  MR_Word T_2)
{
  MR_bool succeeded;
  MR_Word IsRecursive_3 = ((MR_Unsigned) ((MR_hl_field(0, T_2, 2))) & (MR_Integer) 1);
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, T_2, 3))));

  switch (IsRecursive_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 0:
      {
        MR_Word TypeInfo_21_21;
        MR_Word FinalStability_4;
        MR_Word Var_5;
        MR_Box conv1_FinalStability_4;

        {
          Var_5 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_5, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table_scalar_common_2[1]));
          MR_hl_field(0, Var_5, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0_1));
          MR_hl_field(0, Var_5, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_5, 3) = ((MR_Box) (TypeInfo_for_K_14));
          MR_hl_field(0, Var_5, 4) = ((MR_Box) (TypeInfo_for_E_15));
        }
        {
          TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_21_21, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
          MR_hl_field(0, TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_E_15));
        }
        mercury__map__foldl_4_p_0(TypeInfo_for_K_14, TypeInfo_21_21, (MR_Word) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0), (MR_Word) (Var_5), (MR_Word) (Var_10), ((MR_Box) ((MR_Integer) 0)), &conv1_FinalStability_4);
        FinalStability_4 = ((MR_Word) (conv1_FinalStability_4));
        succeeded = (FinalStability_4 == (MR_Integer) 0);
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table__is_recursive_1_p_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_E_8,
  MR_Word T_2)
{
  MR_bool succeeded;
  MR_Word Var_3 = ((MR_Unsigned) ((MR_hl_field(0, T_2, 2))) & (MR_Integer) 1);

  succeeded = (Var_3 == (MR_Integer) 0);
  return succeeded;
}

MR_Integer MR_CALL 
transform_hlds__ctgc__fixpoint_table__which_run_1_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_E_8,
  MR_Word T0_3)
{
  MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(0, T0_3, 1))));

  return HeadVar__2_2;
}

void MR_CALL 
transform_hlds__ctgc__fixpoint_table__new_run_2_p_0(
  MR_Word TypeInfo_for_K_14,
  MR_Word TypeInfo_for_E_15,
  MR_Word T0_3,
  MR_Word * HeadVar__2_2)
{
  MR_Integer Var_4;
  MR_Integer Var_5 = ((MR_Integer) ((MR_hl_field(0, T0_3, 1))));
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, T0_3, 0))));
  MR_Word Var_8 = ((MR_Unsigned) ((MR_hl_field(0, T0_3, 2))) & (MR_Integer) 1);
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, T0_3, 3))));

  Var_4 = (MR_Integer) ((MR_Unsigned) Var_5 + (MR_Unsigned) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_4));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Var_8));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_9));
  }
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_14;

  transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__129__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_14));
}

MR_Word MR_CALL 
transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0(
  MR_Word TypeInfo_for_K_24,
  MR_Word TypeInfo_for_E_25,
  MR_Word InitFunction_4,
  MR_Word Ks_5)
{
  MR_Word FT_6;
  MR_Word TypeInfo_29_29;
  MR_Word TypeInfo_31_31;
  MR_Word InsertElement_7;
  MR_Word Map_9;
  MR_Word Var_19;
  MR_Word conv1_Var_19;
  MR_Box conv2_Map_9;

  {
    InsertElement_7 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InsertElement_7, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table_scalar_common_2[0]));
    MR_hl_field(0, InsertElement_7, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0_1));
    MR_hl_field(0, InsertElement_7, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, InsertElement_7, 3) = ((MR_Box) (TypeInfo_for_K_24));
    MR_hl_field(0, InsertElement_7, 4) = ((MR_Box) (TypeInfo_for_E_25));
    MR_hl_field(0, InsertElement_7, 5) = ((MR_Box) (InitFunction_4));
  }
  {
    TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_29_29, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
    MR_hl_field(0, TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_for_E_25));
  }
  conv1_Var_19 = mercury__map__init_0_f_0(TypeInfo_for_K_24, TypeInfo_29_29);
  Var_19 = (MR_Word) (conv1_Var_19);
  {
    TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_31_31, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
    MR_hl_field(0, TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_K_24));
    MR_hl_field(0, TypeInfo_31_31, 2) = ((MR_Box) (TypeInfo_29_29));
  }
  mercury__list__foldl_4_p_0(TypeInfo_for_K_24, TypeInfo_31_31, (MR_Word) (InsertElement_7), Ks_5, ((MR_Box) (Var_19)), &conv2_Map_9);
  Map_9 = ((MR_Word) (conv2_Map_9));
  {
    FT_6 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FT_6, 0) = ((MR_Box) (Ks_5));
    MR_hl_field(0, FT_6, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, FT_6, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, FT_6, 3) = ((MR_Box) (Map_9));
  }
  return FT_6;
}

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__ctgc__fixpoint_table__init(void)
{
}

void mercury__transform_hlds__ctgc__fixpoint_table__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2);
  MR_register_type_ctor_info(&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1);
  MR_register_type_ctor_info(&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_recursive_0);
  MR_register_type_ctor_info(&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0);
}

void mercury__transform_hlds__ctgc__fixpoint_table__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__fixpoint_table__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.fixpoint_table.
