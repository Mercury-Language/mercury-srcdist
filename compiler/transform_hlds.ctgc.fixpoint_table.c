/*
** Automatically generated from `ctgc.fixpoint_table.m'
** by the Mercury compiler,
** version rotd-2016-02-18
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module transform_hlds.ctgc.fixpoint_table. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__fixpoint_table__init
ENDINIT
*/

#include "transform_hlds.ctgc.fixpoint_table.mih"


#include "transform_hlds.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
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

static const MR_DuFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fixpoint_table_2_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fixpoint_table_2[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fixpoint_table_2[1];

static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fixpoint_table_2[1];

static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fp_entry_1_0[2];

static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fp_entry_1_0[2];

static const MR_DuFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fp_entry_1_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fp_entry_1[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fp_entry_1[1];

static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fp_entry_1[1];

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0;

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_recursive_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_recursive_0[2];

static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_recursive_0[2];

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0;

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_stable_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_stable_0[2];

static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_stable_0[2];

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0_10001(
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0_10001(
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0_10001(
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0_10001(
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4);

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0_10001(
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0_10001(
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0_10001(
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0_10001(
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_p_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11,
  MR_Word transform_hlds__ctgc__fixpoint_table__Entry_6,
  MR_Word transform_hlds__ctgc__fixpoint_table__S0_7,
  MR_Word * transform_hlds__ctgc__fixpoint_table__S_8);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__129__1_6_p_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_25,
  MR_Word transform_hlds__ctgc__fixpoint_table__InitFunction_4,
  MR_Box transform_hlds__ctgc__fixpoint_table__LambdaHeadVar__1_14,
  MR_Word transform_hlds__ctgc__fixpoint_table__LambdaHeadVar__2_15,
  MR_Word * transform_hlds__ctgc__fixpoint_table__LambdaHeadVar__3_16);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0(
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_1,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0(
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_1,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11,
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_9,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__accumulate_instability_4_p_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_10,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11,
  MR_Box transform_hlds__ctgc__fixpoint_table___Key_5,
  MR_Word transform_hlds__ctgc__fixpoint_table__Entry_6,
  MR_Word transform_hlds__ctgc__fixpoint_table__S0_7,
  MR_Word * transform_hlds__ctgc__fixpoint_table__S_8);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0_1(
  MR_Box transform_hlds__ctgc__fixpoint_table__closure_arg,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0_1(
  MR_Box transform_hlds__ctgc__fixpoint_table__closure_arg,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_3);


static /* final */ const MR_Integer transform_hlds__ctgc__fixpoint_table_scalar_common_1[1][3];

static /* final */ const MR_Box transform_hlds__ctgc__fixpoint_table_scalar_common_2[2][9];




static /* final */ const MR_Integer transform_hlds__ctgc__fixpoint_table_scalar_common_1[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__fixpoint_table_scalar_common_2[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table____vpti_func_2__pseudo_1__pseudo_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2)),
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2)),
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0)),
    ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_VA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__fixpoint_table____vpti_func_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__fixpoint_table__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fixpoint_table_2_0[4] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_recursive_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2
};

static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fixpoint_table_2_0[4] = {
  (MR_String) "keys",
  (MR_String) "run",
  (MR_String) "recursive",
  (MR_String) "mapping"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0 = {
  (MR_String) "fixpoint_table",
  (MR_Integer) 4,
  (MR_Integer) 9,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fixpoint_table_2_0,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fixpoint_table_2_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fixpoint_table_2_0[1] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fixpoint_table_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fixpoint_table_2_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fixpoint_table_2[1] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0
};

static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fixpoint_table_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2 = {
  (MR_Integer) 2,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0_10001)),
  (MR_String) "transform_hlds.ctgc.fixpoint_table",
  (MR_String) "fixpoint_table",
  {     transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fixpoint_table_2 },
  {     transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fixpoint_table_2 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fixpoint_table_2
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fp_entry_1_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fp_entry_1_0[2] = {
  (MR_String) "entry_stable",
  (MR_String) "entry_elem"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0 = {
  (MR_String) "entry",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fp_entry_1_0,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fp_entry_1_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fp_entry_1_0[1] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fp_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fp_entry_1_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fp_entry_1[1] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0
};

static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fp_entry_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0_10001)),
  (MR_String) "transform_hlds.ctgc.fixpoint_table",
  (MR_String) "fp_entry",
  {     transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fp_entry_1 },
  {     transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fp_entry_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fp_entry_1
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0 = {
  (MR_String) "is_recursive",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1 = {
  (MR_String) "is_not_recursive",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_recursive_0[2] = {
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.fixpoint_table",
  (MR_String) "is_recursive",
  {     transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_recursive_0 },
  {     transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_recursive_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_recursive_0
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0 = {
  (MR_String) "is_stable",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1 = {
  (MR_String) "is_unstable",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_stable_0[2] = {
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.fixpoint_table",
  (MR_String) "is_stable",
  {     transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_stable_0 },
  {     transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_stable_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_stable_0
};

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0_10001(
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

    {
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_4));
    }
    return transform_hlds__ctgc__fixpoint_table__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0_10001(
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_5)
{
  {
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1;

    {
      transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), &transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_4), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_5));
    }
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0_10001(
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

    {
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3));
    }
    return transform_hlds__ctgc__fixpoint_table__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0_10001(
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4)
{
  {
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1;

    {
      transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), &transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_4));
    }
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0_10001(
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

    {
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2));
    }
    return transform_hlds__ctgc__fixpoint_table__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0_10001(
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1;

    {
      transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0(&transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3));
    }
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0_10001(
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

    {
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2));
    }
    return transform_hlds__ctgc__fixpoint_table__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0_10001(
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1;

    {
      transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0(&transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3));
    }
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_p_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11,
  MR_Word transform_hlds__ctgc__fixpoint_table__Entry_6,
  MR_Word transform_hlds__ctgc__fixpoint_table__S0_7,
  MR_Word * transform_hlds__ctgc__fixpoint_table__S_8)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

    switch (transform_hlds__ctgc__fixpoint_table__S0_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box transform_hlds__ctgc__fixpoint_table__V_9_9;

          *transform_hlds__ctgc__fixpoint_table__S_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_6, (MR_Integer) 0)));
          transform_hlds__ctgc__fixpoint_table__V_9_9 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_6, (MR_Integer) 1));
        }
        break;
      case (MR_Integer) 1:
        *transform_hlds__ctgc__fixpoint_table__S_8 = (MR_Integer) 1;
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__129__1_6_p_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_25,
  MR_Word transform_hlds__ctgc__fixpoint_table__InitFunction_4,
  MR_Box transform_hlds__ctgc__fixpoint_table__LambdaHeadVar__1_14,
  MR_Word transform_hlds__ctgc__fixpoint_table__LambdaHeadVar__2_15,
  MR_Word * transform_hlds__ctgc__fixpoint_table__LambdaHeadVar__3_16)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_27_27;
    MR_Box transform_hlds__ctgc__fixpoint_table__E_10;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_17_17;
    MR_Box MR_CALL (* transform_hlds__ctgc__fixpoint_table__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__InitFunction_4, (MR_Integer) 1)));
    MR_Word transform_hlds__ctgc__fixpoint_table__conv1_LambdaHeadVar__3_16;

    {
      transform_hlds__ctgc__fixpoint_table__E_10 = transform_hlds__ctgc__fixpoint_table__func_0(((MR_Box) transform_hlds__ctgc__fixpoint_table__InitFunction_4), transform_hlds__ctgc__fixpoint_table__LambdaHeadVar__1_14);
    }
    {
      transform_hlds__ctgc__fixpoint_table__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__V_17_17, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__V_17_17, 1) = transform_hlds__ctgc__fixpoint_table__E_10;
    }
    {
      transform_hlds__ctgc__fixpoint_table__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_27_27, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_27_27, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_25));
    }
    {
      mercury__map__det_insert_4_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24, transform_hlds__ctgc__fixpoint_table__TypeInfo_27_27, transform_hlds__ctgc__fixpoint_table__LambdaHeadVar__1_14, ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_17_17)), (MR_Word) transform_hlds__ctgc__fixpoint_table__LambdaHeadVar__2_15, &transform_hlds__ctgc__fixpoint_table__conv1_LambdaHeadVar__3_16);
    }
    *transform_hlds__ctgc__fixpoint_table__LambdaHeadVar__3_16 = (MR_Word) transform_hlds__ctgc__fixpoint_table__conv1_LambdaHeadVar__3_16;
  }
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0(
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Integer transform_hlds__ctgc__fixpoint_table__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;
    MR_Integer transform_hlds__ctgc__fixpoint_table__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, transform_hlds__ctgc__fixpoint_table__Cast_HeadVar1_4, transform_hlds__ctgc__fixpoint_table__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_1,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__HeadVar__2_1 == transform_hlds__ctgc__fixpoint_table__HeadVar__2_2);

    return transform_hlds__ctgc__fixpoint_table__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0(
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Integer transform_hlds__ctgc__fixpoint_table__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;
    MR_Integer transform_hlds__ctgc__fixpoint_table__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, transform_hlds__ctgc__fixpoint_table__Cast_HeadVar1_4, transform_hlds__ctgc__fixpoint_table__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_1,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__HeadVar__2_1 == transform_hlds__ctgc__fixpoint_table__HeadVar__2_2);

    return transform_hlds__ctgc__fixpoint_table__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11,
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastX_9 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastY_10 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__3_3;

    transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__CastX_9 == transform_hlds__ctgc__fixpoint_table__CastY_10);
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
      *transform_hlds__ctgc__fixpoint_table__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__ctgc__fixpoint_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box transform_hlds__ctgc__fixpoint_table__V_5_5 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 1));
        MR_Word transform_hlds__ctgc__fixpoint_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__3_3, (MR_Integer) 0)));
        MR_Box transform_hlds__ctgc__fixpoint_table__V_7_7 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__3_3, (MR_Integer) 1));
        MR_Word transform_hlds__ctgc__fixpoint_table__V_8_8;
        MR_Integer transform_hlds__ctgc__fixpoint_table__V_13_13 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__V_4_4;
        MR_Integer transform_hlds__ctgc__fixpoint_table__V_14_14 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__V_6_6;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__fixpoint_table__V_8_8, transform_hlds__ctgc__fixpoint_table__V_13_13, transform_hlds__ctgc__fixpoint_table__V_14_14);
        }
        transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_8_8 == (MR_Integer) 0);
        transform_hlds__ctgc__fixpoint_table__succeeded = !(transform_hlds__ctgc__fixpoint_table__succeeded);
        if (transform_hlds__ctgc__fixpoint_table__succeeded)
          *transform_hlds__ctgc__fixpoint_table__HeadVar__1_1 = transform_hlds__ctgc__fixpoint_table__V_8_8;
        else
          {
            mercury__builtin__compare_3_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11, transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, transform_hlds__ctgc__fixpoint_table__V_5_5, transform_hlds__ctgc__fixpoint_table__V_7_7);
          }
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_9,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastX_7 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__1_1;
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastY_8 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;

    transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__CastX_7 == transform_hlds__ctgc__fixpoint_table__CastY_8);
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
      transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__ctgc__fixpoint_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Box transform_hlds__ctgc__fixpoint_table__V_4_4 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, (MR_Integer) 1));
        MR_Word transform_hlds__ctgc__fixpoint_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box transform_hlds__ctgc__fixpoint_table__V_6_6 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 1));

        transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_3_3 == transform_hlds__ctgc__fixpoint_table__V_5_5);
        if (transform_hlds__ctgc__fixpoint_table__succeeded)
          {
            transform_hlds__ctgc__fixpoint_table__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_9, transform_hlds__ctgc__fixpoint_table__V_4_4, transform_hlds__ctgc__fixpoint_table__V_6_6);
          }
      }
    return transform_hlds__ctgc__fixpoint_table__succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_17,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_18,
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastX_15 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastY_16 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__3_3;

    transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__CastX_15 == transform_hlds__ctgc__fixpoint_table__CastY_16);
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
      *transform_hlds__ctgc__fixpoint_table__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word transform_hlds__ctgc__fixpoint_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer transform_hlds__ctgc__fixpoint_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__ctgc__fixpoint_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__ctgc__fixpoint_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word transform_hlds__ctgc__fixpoint_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer transform_hlds__ctgc__fixpoint_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__ctgc__fixpoint_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word transform_hlds__ctgc__fixpoint_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word transform_hlds__ctgc__fixpoint_table__V_12_12;

        {
          mercury__list____Compare____list_1_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_17, &transform_hlds__ctgc__fixpoint_table__V_12_12, transform_hlds__ctgc__fixpoint_table__V_4_4, transform_hlds__ctgc__fixpoint_table__V_8_8);
        }
        transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_12_12 == (MR_Integer) 0);
        transform_hlds__ctgc__fixpoint_table__succeeded = !(transform_hlds__ctgc__fixpoint_table__succeeded);
        if (transform_hlds__ctgc__fixpoint_table__succeeded)
          *transform_hlds__ctgc__fixpoint_table__HeadVar__1_1 = transform_hlds__ctgc__fixpoint_table__V_12_12;
        else
          {
            MR_Word transform_hlds__ctgc__fixpoint_table__V_13_13;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__fixpoint_table__V_13_13, transform_hlds__ctgc__fixpoint_table__V_5_5, transform_hlds__ctgc__fixpoint_table__V_9_9);
            }
            transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_13_13 == (MR_Integer) 0);
            transform_hlds__ctgc__fixpoint_table__succeeded = !(transform_hlds__ctgc__fixpoint_table__succeeded);
            if (transform_hlds__ctgc__fixpoint_table__succeeded)
              *transform_hlds__ctgc__fixpoint_table__HeadVar__1_1 = transform_hlds__ctgc__fixpoint_table__V_13_13;
            else
              {
                MR_Word transform_hlds__ctgc__fixpoint_table__V_14_14;
                MR_Integer transform_hlds__ctgc__fixpoint_table__V_27_27 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__V_6_6;
                MR_Integer transform_hlds__ctgc__fixpoint_table__V_28_28 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__V_10_10;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__fixpoint_table__V_14_14, transform_hlds__ctgc__fixpoint_table__V_27_27, transform_hlds__ctgc__fixpoint_table__V_28_28);
                }
                transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_14_14 == (MR_Integer) 0);
                transform_hlds__ctgc__fixpoint_table__succeeded = !(transform_hlds__ctgc__fixpoint_table__succeeded);
                if (transform_hlds__ctgc__fixpoint_table__succeeded)
                  *transform_hlds__ctgc__fixpoint_table__HeadVar__1_1 = transform_hlds__ctgc__fixpoint_table__V_14_14;
                else
                  {
                    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_24_24;

                    {
                      transform_hlds__ctgc__fixpoint_table__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_24_24, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_24_24, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_18));
                    }
                    {
                      mercury__tree234____Compare____tree234_2_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_17, transform_hlds__ctgc__fixpoint_table__TypeInfo_24_24, transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_7_7, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_11_11);
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_13,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_14,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastX_11 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__1_1;
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastY_12 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;

    transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__CastX_11 == transform_hlds__ctgc__fixpoint_table__CastY_12);
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
      transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
    else
      {
        MR_Word transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_17_17;
        MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_18_18;
        MR_Word transform_hlds__ctgc__fixpoint_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer transform_hlds__ctgc__fixpoint_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word transform_hlds__ctgc__fixpoint_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word transform_hlds__ctgc__fixpoint_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word transform_hlds__ctgc__fixpoint_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer transform_hlds__ctgc__fixpoint_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word transform_hlds__ctgc__fixpoint_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word transform_hlds__ctgc__fixpoint_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 3)));

        {
          transform_hlds__ctgc__fixpoint_table__succeeded = mercury__list____Unify____list_1_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_13, transform_hlds__ctgc__fixpoint_table__V_3_3, transform_hlds__ctgc__fixpoint_table__V_7_7);
        }
        if (transform_hlds__ctgc__fixpoint_table__succeeded)
          {
            transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_4_4 == transform_hlds__ctgc__fixpoint_table__V_8_8);
            if (transform_hlds__ctgc__fixpoint_table__succeeded)
              {
                transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_5_5 == transform_hlds__ctgc__fixpoint_table__V_9_9);
                if (transform_hlds__ctgc__fixpoint_table__succeeded)
                  {
                    transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_17_17 = (MR_Word) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1;
                    {
                      transform_hlds__ctgc__fixpoint_table__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_18_18, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_17_17));
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_18_18, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_14));
                    }
                    {
                      transform_hlds__ctgc__fixpoint_table__succeeded = mercury__tree234____Unify____tree234_2_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_13, transform_hlds__ctgc__fixpoint_table__TypeInfo_18_18, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_6_6, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_10_10);
                    }
                  }
              }
          }
      }
    return transform_hlds__ctgc__fixpoint_table__succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__accumulate_instability_4_p_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_10,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11,
  MR_Box transform_hlds__ctgc__fixpoint_table___Key_5,
  MR_Word transform_hlds__ctgc__fixpoint_table__Entry_6,
  MR_Word transform_hlds__ctgc__fixpoint_table__S0_7,
  MR_Word * transform_hlds__ctgc__fixpoint_table__S_8)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

    {
      transform_hlds__ctgc__fixpoint_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11, transform_hlds__ctgc__fixpoint_table__Entry_6, transform_hlds__ctgc__fixpoint_table__S0_7, transform_hlds__ctgc__fixpoint_table__S_8);
    }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_p_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_13,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_14,
  MR_Box transform_hlds__ctgc__fixpoint_table__Index_4,
  MR_Word transform_hlds__ctgc__fixpoint_table__T_5,
  MR_Box * transform_hlds__ctgc__fixpoint_table__Elem_6)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_16_16;
    MR_Word transform_hlds__ctgc__fixpoint_table__Entry_7;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 3)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 0)));
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 1)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 2)));
    MR_Box transform_hlds__ctgc__fixpoint_table__conv0_Entry_7;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_12_12;

    {
      transform_hlds__ctgc__fixpoint_table__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_16_16, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_16_16, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_14));
    }
    {
      transform_hlds__ctgc__fixpoint_table__succeeded = mercury__map__search_3_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_13, transform_hlds__ctgc__fixpoint_table__TypeInfo_16_16, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_8_8, transform_hlds__ctgc__fixpoint_table__Index_4, &transform_hlds__ctgc__fixpoint_table__conv0_Entry_7);
    }
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
      {
        transform_hlds__ctgc__fixpoint_table__Entry_7 = ((MR_Word) transform_hlds__ctgc__fixpoint_table__conv0_Entry_7);
        transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
      }
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
      {
        transform_hlds__ctgc__fixpoint_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_7, (MR_Integer) 0)));
        *transform_hlds__ctgc__fixpoint_table__Elem_6 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_7, (MR_Integer) 1));
        transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
      }
    return transform_hlds__ctgc__fixpoint_table__succeeded;
  }
}

MR_Box MR_CALL 
transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_f_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_11,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_12,
  MR_Box transform_hlds__ctgc__fixpoint_table__Index_4,
  MR_Word transform_hlds__ctgc__fixpoint_table__T_5)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Box transform_hlds__ctgc__fixpoint_table__Elem_6;
    MR_Box transform_hlds__ctgc__fixpoint_table__TabledElem_7;
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_16_23;
    MR_Word transform_hlds__ctgc__fixpoint_table__Entry_16;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 3)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 0)));
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 1)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 2)));
    MR_Box transform_hlds__ctgc__fixpoint_table__conv0_Entry_16;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_21_21;

    {
      transform_hlds__ctgc__fixpoint_table__TypeInfo_16_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_16_23, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_16_23, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_12));
    }
    {
      transform_hlds__ctgc__fixpoint_table__succeeded = mercury__map__search_3_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_11, transform_hlds__ctgc__fixpoint_table__TypeInfo_16_23, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_17_17, transform_hlds__ctgc__fixpoint_table__Index_4, &transform_hlds__ctgc__fixpoint_table__conv0_Entry_16);
    }
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
      {
        transform_hlds__ctgc__fixpoint_table__Entry_16 = ((MR_Word) transform_hlds__ctgc__fixpoint_table__conv0_Entry_16);
        transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
      }
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
      {
        transform_hlds__ctgc__fixpoint_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_16, (MR_Integer) 0)));
        transform_hlds__ctgc__fixpoint_table__TabledElem_7 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_16, (MR_Integer) 1));
        transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
      }
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
      transform_hlds__ctgc__fixpoint_table__Elem_6 = transform_hlds__ctgc__fixpoint_table__TabledElem_7;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.fixpoint_table", (MR_String) "function \140transform_hlds.ctgc.fixpoint_table.get_from_fixpoint_table_final\'/2", (MR_String) "key not in map.");
        }
      }
    return transform_hlds__ctgc__fixpoint_table__Elem_6;
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_p_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_26,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_27,
  MR_Box transform_hlds__ctgc__fixpoint_table__Index_5,
  MR_Box * transform_hlds__ctgc__fixpoint_table__Elem_6,
  MR_Word transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11,
  MR_Word * transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_12)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_28_28;
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29;
    MR_Word transform_hlds__ctgc__fixpoint_table__List_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 0)));
    MR_Word transform_hlds__ctgc__fixpoint_table__Map_9;
    MR_Word transform_hlds__ctgc__fixpoint_table__Entry_10;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_14_14;
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 1)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 2)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 3)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_18_18;
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_19_19;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_20_20;
    MR_Box transform_hlds__ctgc__fixpoint_table__conv0_Entry_10;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_21_21;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_22_22;
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_23_23;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_25_25;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_24_24;

    {
      transform_hlds__ctgc__fixpoint_table__succeeded = mercury__list__member_2_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_26, transform_hlds__ctgc__fixpoint_table__Index_5, transform_hlds__ctgc__fixpoint_table__List_8);
    }
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
      {
        transform_hlds__ctgc__fixpoint_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 0)));
        transform_hlds__ctgc__fixpoint_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 1)));
        transform_hlds__ctgc__fixpoint_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 2)));
        transform_hlds__ctgc__fixpoint_table__Map_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 3)));
        transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_28_28 = (MR_Word) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1;
        {
          transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_28_28));
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_27));
        }
        {
          mercury__map__lookup_3_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_26, transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29, (MR_Word) transform_hlds__ctgc__fixpoint_table__Map_9, transform_hlds__ctgc__fixpoint_table__Index_5, &transform_hlds__ctgc__fixpoint_table__conv0_Entry_10);
        }
        transform_hlds__ctgc__fixpoint_table__Entry_10 = ((MR_Word) transform_hlds__ctgc__fixpoint_table__conv0_Entry_10);
        transform_hlds__ctgc__fixpoint_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_10, (MR_Integer) 0)));
        *transform_hlds__ctgc__fixpoint_table__Elem_6 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_10, (MR_Integer) 1));
        transform_hlds__ctgc__fixpoint_table__V_14_14 = (MR_Integer) 0;
        transform_hlds__ctgc__fixpoint_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 0)));
        transform_hlds__ctgc__fixpoint_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 1)));
        transform_hlds__ctgc__fixpoint_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 2)));
        transform_hlds__ctgc__fixpoint_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 3)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_22_22));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_23_23));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_14_14));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_25_25));
        }
        transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
      }
    return transform_hlds__ctgc__fixpoint_table__succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_p_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_27,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_28,
  MR_Word transform_hlds__ctgc__fixpoint_table__IsLessOrEqualTest_6,
  MR_Box transform_hlds__ctgc__fixpoint_table__Index_7,
  MR_Box transform_hlds__ctgc__fixpoint_table__Elem_8,
  MR_Word transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16,
  MR_Word * transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_17)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30;
    MR_Word transform_hlds__ctgc__fixpoint_table__Map0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 3)));
    MR_Word transform_hlds__ctgc__fixpoint_table__Entry_11;
    MR_Box transform_hlds__ctgc__fixpoint_table__TabledElem_12;
    MR_Word transform_hlds__ctgc__fixpoint_table__IsStable_13;
    MR_Word transform_hlds__ctgc__fixpoint_table__FinalTabledElem_14;
    MR_Word transform_hlds__ctgc__fixpoint_table__Map_15;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 0)));
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 1)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 2)));
    MR_Box transform_hlds__ctgc__fixpoint_table__conv0_Entry_11;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_22_22;
    MR_bool MR_CALL (* transform_hlds__ctgc__fixpoint_table__func_1)(MR_Box, MR_Box, MR_Box);
    MR_Word transform_hlds__ctgc__fixpoint_table__conv2_Map_15;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_23_23;
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_24_24;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_25_25;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_26_26;

    {
      transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_27));
    }
    {
      mercury__map__lookup_3_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_28, transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30, (MR_Word) transform_hlds__ctgc__fixpoint_table__Map0_10, transform_hlds__ctgc__fixpoint_table__Index_7, &transform_hlds__ctgc__fixpoint_table__conv0_Entry_11);
    }
    transform_hlds__ctgc__fixpoint_table__Entry_11 = ((MR_Word) transform_hlds__ctgc__fixpoint_table__conv0_Entry_11);
    transform_hlds__ctgc__fixpoint_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_11, (MR_Integer) 0)));
    transform_hlds__ctgc__fixpoint_table__TabledElem_12 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_11, (MR_Integer) 1));
    transform_hlds__ctgc__fixpoint_table__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__IsLessOrEqualTest_6, (MR_Integer) 1)));
    {
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table__func_1(((MR_Box) transform_hlds__ctgc__fixpoint_table__IsLessOrEqualTest_6), transform_hlds__ctgc__fixpoint_table__Elem_8, transform_hlds__ctgc__fixpoint_table__TabledElem_12);
    }
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
      transform_hlds__ctgc__fixpoint_table__IsStable_13 = (MR_Integer) 0;
    else
      transform_hlds__ctgc__fixpoint_table__IsStable_13 = (MR_Integer) 1;
    {
      transform_hlds__ctgc__fixpoint_table__FinalTabledElem_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__FinalTabledElem_14, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__IsStable_13));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__FinalTabledElem_14, 1) = transform_hlds__ctgc__fixpoint_table__Elem_8;
    }
    {
      mercury__map__det_update_4_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_28, transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30, transform_hlds__ctgc__fixpoint_table__Index_7, ((MR_Box) (transform_hlds__ctgc__fixpoint_table__FinalTabledElem_14)), (MR_Word) transform_hlds__ctgc__fixpoint_table__Map0_10, &transform_hlds__ctgc__fixpoint_table__conv2_Map_15);
    }
    transform_hlds__ctgc__fixpoint_table__Map_15 = (MR_Word) transform_hlds__ctgc__fixpoint_table__conv2_Map_15;
    transform_hlds__ctgc__fixpoint_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 0)));
    transform_hlds__ctgc__fixpoint_table__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 1)));
    transform_hlds__ctgc__fixpoint_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 2)));
    transform_hlds__ctgc__fixpoint_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 3)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_23_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_24_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_25_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__Map_15));
    }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table__is_recursive_1_p_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_7,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_8,
  MR_Word transform_hlds__ctgc__fixpoint_table__T_2)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 2)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 0)));
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 1)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 3)));

    transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_3_3 == (MR_Integer) 0);
    return transform_hlds__ctgc__fixpoint_table__succeeded;
  }
}

MR_String MR_CALL 
transform_hlds__ctgc__fixpoint_table__description_1_f_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_4,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_5,
  MR_Word transform_hlds__ctgc__fixpoint_table__T_3)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_String transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;

    {
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_4, transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_5, transform_hlds__ctgc__fixpoint_table__T_3);
    }
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
      transform_hlds__ctgc__fixpoint_table__HeadVar__2_2 = (MR_String) "stable";
    else
      transform_hlds__ctgc__fixpoint_table__HeadVar__2_2 = (MR_String) "unstable";
    return transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;
  }
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0_1(
  MR_Box transform_hlds__ctgc__fixpoint_table__closure_arg,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_4)
{
  {
    MR_Box transform_hlds__ctgc__fixpoint_table__closure = transform_hlds__ctgc__fixpoint_table__closure_arg;
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_S_8;

    {
      transform_hlds__ctgc__fixpoint_table__accumulate_instability_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__closure, (MR_Integer) 4))), transform_hlds__ctgc__fixpoint_table__wrapper_arg_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3), &transform_hlds__ctgc__fixpoint_table__conv0_S_8);
    }
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_S_8));
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_14,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_15,
  MR_Word transform_hlds__ctgc__fixpoint_table__T_2)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Word transform_hlds__ctgc__fixpoint_table__IsRecursive_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 2)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 3)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 0)));
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 1)));

    switch (transform_hlds__ctgc__fixpoint_table__IsRecursive_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_21_21;
          MR_Word transform_hlds__ctgc__fixpoint_table__FinalStability_4;
          MR_Word transform_hlds__ctgc__fixpoint_table__V_5_5;
          MR_Box transform_hlds__ctgc__fixpoint_table__conv1_FinalStability_4;

          {
            transform_hlds__ctgc__fixpoint_table__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__V_5_5, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table_scalar_common_2[1]));
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__V_5_5, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0_1));
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__V_5_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__V_5_5, 3) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_14));
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__V_5_5, 4) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_15));
          }
          {
            transform_hlds__ctgc__fixpoint_table__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_21_21, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_21_21, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_15));
          }
          {
            mercury__map__foldl_4_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_14, transform_hlds__ctgc__fixpoint_table__TypeInfo_21_21, (MR_Word) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_5_5, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_10_10, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__ctgc__fixpoint_table__conv1_FinalStability_4);
          }
          transform_hlds__ctgc__fixpoint_table__FinalStability_4 = ((MR_Word) transform_hlds__ctgc__fixpoint_table__conv1_FinalStability_4);
          transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__FinalStability_4 == (MR_Integer) 0);
        }
        break;
    }
    return transform_hlds__ctgc__fixpoint_table__succeeded;
  }
}

MR_Integer MR_CALL 
transform_hlds__ctgc__fixpoint_table__which_run_1_f_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_7,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_8,
  MR_Word transform_hlds__ctgc__fixpoint_table__T0_3)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Integer transform_hlds__ctgc__fixpoint_table__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 1)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 0)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 2)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 3)));

    return transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;
  }
}

void MR_CALL 
transform_hlds__ctgc__fixpoint_table__new_run_2_p_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_14,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_15,
  MR_Word transform_hlds__ctgc__fixpoint_table__T0_3,
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_4_4;
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 1)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 0)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 2)));
    MR_Word transform_hlds__ctgc__fixpoint_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 3)));

    transform_hlds__ctgc__fixpoint_table__V_4_4 = (transform_hlds__ctgc__fixpoint_table__V_5_5 + (MR_Integer) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *transform_hlds__ctgc__fixpoint_table__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_7_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_4_4));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_8_8));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_9_9));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0_1(
  MR_Box transform_hlds__ctgc__fixpoint_table__closure_arg,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__ctgc__fixpoint_table__closure = transform_hlds__ctgc__fixpoint_table__closure_arg;
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_LambdaHeadVar__3_16;

    {
      transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__129__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__closure, (MR_Integer) 5))), transform_hlds__ctgc__fixpoint_table__wrapper_arg_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), &transform_hlds__ctgc__fixpoint_table__conv0_LambdaHeadVar__3_16);
    }
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_LambdaHeadVar__3_16));
  }
}

MR_Word MR_CALL 
transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0(
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24,
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_25,
  MR_Word transform_hlds__ctgc__fixpoint_table__InitFunction_4,
  MR_Word transform_hlds__ctgc__fixpoint_table__Ks_5)
{
  {
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
    MR_Word transform_hlds__ctgc__fixpoint_table__FT_6;
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29;
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31;
    MR_Word transform_hlds__ctgc__fixpoint_table__InsertElement_7;
    MR_Word transform_hlds__ctgc__fixpoint_table__Map_9;
    MR_Word transform_hlds__ctgc__fixpoint_table__V_19_19;
    MR_Word transform_hlds__ctgc__fixpoint_table__conv1_V_19_19;
    MR_Box transform_hlds__ctgc__fixpoint_table__conv2_Map_9;

    {
      transform_hlds__ctgc__fixpoint_table__InsertElement_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__InsertElement_7, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__InsertElement_7, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0_1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__InsertElement_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__InsertElement_7, 3) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__InsertElement_7, 4) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_25));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__InsertElement_7, 5) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__InitFunction_4));
    }
    {
      transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_25));
    }
    {
      transform_hlds__ctgc__fixpoint_table__conv1_V_19_19 = mercury__map__init_0_f_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24, transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29);
    }
    transform_hlds__ctgc__fixpoint_table__V_19_19 = (MR_Word) transform_hlds__ctgc__fixpoint_table__conv1_V_19_19;
    {
      transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31, 2) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29));
    }
    {
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24, transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31, (MR_Word) transform_hlds__ctgc__fixpoint_table__InsertElement_7, transform_hlds__ctgc__fixpoint_table__Ks_5, ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_19_19)), &transform_hlds__ctgc__fixpoint_table__conv2_Map_9);
    }
    transform_hlds__ctgc__fixpoint_table__Map_9 = ((MR_Word) transform_hlds__ctgc__fixpoint_table__conv2_Map_9);
    {
      transform_hlds__ctgc__fixpoint_table__FT_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__FT_6, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__Ks_5));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__FT_6, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__FT_6, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__FT_6, 3) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__Map_9));
    }
    return transform_hlds__ctgc__fixpoint_table__FT_6;
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ctgc.fixpoint_table. */
