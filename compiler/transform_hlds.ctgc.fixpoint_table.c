/*
** Automatically generated from `ctgc.fixpoint_table.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "transform_hlds.ctgc.mih"




#line 72 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__fixpoint_table____vpti_func_2__pseudo_1__pseudo_2;

#line 75 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2;

#line 78 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2;

#line 81 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__fixpoint_table__list__pti_list_1__pseudo_1;

#line 84 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fixpoint_table_2_0[4];

#line 87 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fixpoint_table_2_0[4];

#line 90 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0;

#line 93 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fixpoint_table_2_0[1];

#line 96 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fixpoint_table_2[1];

#line 99 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fixpoint_table_2[1];

#line 102 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fixpoint_table_2[1];

#line 105 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fp_entry_1_0[2];

#line 108 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fp_entry_1_0[2];

#line 111 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0;

#line 114 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fp_entry_1_0[1];

#line 117 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fp_entry_1[1];

#line 120 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fp_entry_1[1];

#line 123 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fp_entry_1[1];

#line 126 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0;

#line 129 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1;

#line 132 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_recursive_0[2];

#line 135 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_recursive_0[2];

#line 138 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_recursive_0[2];

#line 141 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0;

#line 144 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1;

#line 147 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_stable_0[2];

#line 150 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_stable_0[2];

#line 153 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_stable_0[2];

#line 156 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0_10001(
#line 159 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 161 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 163 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
#line 165 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4);

#line 168 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0_10001(
#line 171 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 173 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 175 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
#line 177 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4,
#line 179 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_5);

#line 182 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0_10001(
#line 185 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 187 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 189 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3);

#line 192 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0_10001(
#line 195 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 197 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 199 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
#line 201 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4);

#line 204 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0_10001(
#line 207 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 209 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2);

#line 212 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0_10001(
#line 215 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 217 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 219 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3);

#line 222 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0_10001(
#line 225 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 227 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2);

#line 230 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0_10001(
#line 233 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 235 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 237 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3);

#line 154 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_p_0(
#line 154 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11,
#line 154 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__Entry_6,
#line 154 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__S0_7,
#line 154 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__S_8);

#line 130 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__130__1_6_p_0(
#line 130 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24,
#line 130 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_25,
#line 130 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__InitFunction_4,
#line 130 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__HeadVar__4_14,
#line 130 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__5_15,
#line 130 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__6_16);

#line 117 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0(
#line 117 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
#line 117 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2,
#line 117 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__3_3);

#line 117 "ctgc.fixpoint_table.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0(
#line 117 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_1,
#line 117 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2);

#line 113 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0(
#line 113 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
#line 113 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2,
#line 113 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__3_3);

#line 113 "ctgc.fixpoint_table.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0(
#line 113 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_1,
#line 113 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2);

#line 107 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0(
#line 107 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11,
#line 107 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
#line 107 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2,
#line 107 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__3_3);

#line 107 "ctgc.fixpoint_table.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0(
#line 107 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_9,
#line 107 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
#line 107 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2);

#line 154 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__accumulate_instability_4_p_0(
#line 154 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_10,
#line 154 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11,
#line 154 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table___Key_5,
#line 154 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__Entry_6,
#line 154 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__S0_7,
#line 154 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__S_8);

#line 147 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0_1(
#line 147 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__closure_arg,
#line 147 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 147 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 147 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
#line 147 "ctgc.fixpoint_table.m"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_4);

#line 130 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0_1(
#line 130 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__closure_arg,
#line 130 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 130 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 130 "ctgc.fixpoint_table.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"



#line 427 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__fixpoint_table____vpti_func_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 437 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 445 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2
  }
};

#line 454 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__fixpoint_table__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 462 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fixpoint_table_2_0[4] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_recursive_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2
};

#line 470 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fixpoint_table_2_0[4] = {
  (MR_String) "keys",
  (MR_String) "run",
  (MR_String) "recursive",
  (MR_String) "mapping"
};

#line 478 "transform_hlds.ctgc.fixpoint_table.c"
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
  NULL
};

#line 493 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fixpoint_table_2_0[1] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0
};

#line 498 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fixpoint_table_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fixpoint_table_2_0
  }
};

#line 507 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fixpoint_table_2[1] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0
};

#line 512 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fixpoint_table_2[1] = {
  (MR_Integer) 0
};

#line 517 "transform_hlds.ctgc.fixpoint_table.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0_10001)),
  (MR_String) "transform_hlds.ctgc.fixpoint_table",
  (MR_String) "fixpoint_table",
  {
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fixpoint_table_2
  },
  {
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fixpoint_table_2
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fixpoint_table_2
};

#line 538 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fp_entry_1_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 544 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fp_entry_1_0[2] = {
  (MR_String) "entry_stable",
  (MR_String) "entry_elem"
};

#line 550 "transform_hlds.ctgc.fixpoint_table.c"
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
  NULL
};

#line 565 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fp_entry_1_0[1] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0
};

#line 570 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fp_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fp_entry_1_0
  }
};

#line 579 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fp_entry_1[1] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0
};

#line 584 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fp_entry_1[1] = {
  (MR_Integer) 0
};

#line 589 "transform_hlds.ctgc.fixpoint_table.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0_10001)),
  (MR_String) "transform_hlds.ctgc.fixpoint_table",
  (MR_String) "fp_entry",
  {
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fp_entry_1
  },
  {
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fp_entry_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fp_entry_1
};

#line 610 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0 = {
  (MR_String) "is_recursive",
  (MR_Integer) 0
};

#line 616 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1 = {
  (MR_String) "is_not_recursive",
  (MR_Integer) 1
};

#line 622 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_recursive_0[2] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0,
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1
};

#line 628 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_recursive_0[2] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1,
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0
};

#line 634 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_recursive_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 640 "transform_hlds.ctgc.fixpoint_table.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_recursive_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.fixpoint_table",
  (MR_String) "is_recursive",
  {
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_recursive_0
  },
  {
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_recursive_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_recursive_0
};

#line 661 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0 = {
  (MR_String) "is_stable",
  (MR_Integer) 0
};

#line 667 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1 = {
  (MR_String) "is_unstable",
  (MR_Integer) 1
};

#line 673 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_stable_0[2] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0,
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1
};

#line 679 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_stable_0[2] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0,
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1
};

#line 685 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_stable_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 691 "transform_hlds.ctgc.fixpoint_table.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.fixpoint_table",
  (MR_String) "is_stable",
  {
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_stable_0
  },
  {
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_stable_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_stable_0
};

#line 712 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0_10001(
#line 715 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 717 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 719 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
#line 721 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4)
#line 723 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 725 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 727 "transform_hlds.ctgc.fixpoint_table.c"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

#line 730 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 732 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_4));
    }
#line 735 "transform_hlds.ctgc.fixpoint_table.c"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 737 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 739 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 742 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0_10001(
#line 745 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 747 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 749 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
#line 751 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4,
#line 753 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_5)
#line 755 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 757 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 759 "transform_hlds.ctgc.fixpoint_table.c"
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1;

#line 762 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 764 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), &transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_4), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_5));
    }
#line 767 "transform_hlds.ctgc.fixpoint_table.c"
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1));
#line 769 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 771 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 774 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0_10001(
#line 777 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 779 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 781 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3)
#line 783 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 785 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 787 "transform_hlds.ctgc.fixpoint_table.c"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

#line 790 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 792 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3));
    }
#line 795 "transform_hlds.ctgc.fixpoint_table.c"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 797 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 799 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 802 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0_10001(
#line 805 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 807 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 809 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
#line 811 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4)
#line 813 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 815 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 817 "transform_hlds.ctgc.fixpoint_table.c"
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1;

#line 820 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 822 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), &transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_4));
    }
#line 825 "transform_hlds.ctgc.fixpoint_table.c"
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1));
#line 827 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 829 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 832 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0_10001(
#line 835 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 837 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2)
#line 839 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 841 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 843 "transform_hlds.ctgc.fixpoint_table.c"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

#line 846 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 848 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2));
    }
#line 851 "transform_hlds.ctgc.fixpoint_table.c"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 853 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 855 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 858 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0_10001(
#line 861 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 863 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 865 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3)
#line 867 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 869 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 871 "transform_hlds.ctgc.fixpoint_table.c"
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1;

#line 874 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 876 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0(&transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3));
    }
#line 879 "transform_hlds.ctgc.fixpoint_table.c"
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1));
#line 881 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 883 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 886 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0_10001(
#line 889 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 891 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2)
#line 893 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 895 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 897 "transform_hlds.ctgc.fixpoint_table.c"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

#line 900 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 902 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2));
    }
#line 905 "transform_hlds.ctgc.fixpoint_table.c"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 907 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 909 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 912 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0_10001(
#line 915 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 917 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 919 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3)
#line 921 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 923 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 925 "transform_hlds.ctgc.fixpoint_table.c"
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1;

#line 928 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 930 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0(&transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3));
    }
#line 933 "transform_hlds.ctgc.fixpoint_table.c"
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1));
#line 935 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 937 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 154 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_p_0(
#line 154 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11,
#line 154 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__Entry_6,
#line 154 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__S0_7,
#line 154 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__S_8)
#line 154 "ctgc.fixpoint_table.m"
{
#line 161 "ctgc.fixpoint_table.m"
  {
#line 161 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

#line 161 "ctgc.fixpoint_table.m"
    if ((transform_hlds__ctgc__fixpoint_table__S0_7 == (MR_Integer) 0))
#line 163 "ctgc.fixpoint_table.m"
      {
#line 163 "ctgc.fixpoint_table.m"
        MR_Box transform_hlds__ctgc__fixpoint_table__V_9_9;

#line 163 "ctgc.fixpoint_table.m"
        *transform_hlds__ctgc__fixpoint_table__S_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_6, (MR_Integer) 0)));
#line 163 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__V_9_9 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_6, (MR_Integer) 1));
#line 163 "ctgc.fixpoint_table.m"
      }
#line 161 "ctgc.fixpoint_table.m"
    else
#line 160 "ctgc.fixpoint_table.m"
      *transform_hlds__ctgc__fixpoint_table__S_8 = (MR_Integer) 1;
#line 161 "ctgc.fixpoint_table.m"
  }
#line 154 "ctgc.fixpoint_table.m"
}

#line 130 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__130__1_6_p_0(
#line 130 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24,
#line 130 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_25,
#line 130 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__InitFunction_4,
#line 130 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__HeadVar__4_14,
#line 130 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__5_15,
#line 130 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__6_16)
#line 130 "ctgc.fixpoint_table.m"
{
#line 130 "ctgc.fixpoint_table.m"
  {
#line 130 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 130 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_27_27;
#line 130 "ctgc.fixpoint_table.m"
    MR_Box transform_hlds__ctgc__fixpoint_table__E_10;
#line 130 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_17_17;
#line 131 "ctgc.fixpoint_table.m"
    MR_Box MR_CALL (* transform_hlds__ctgc__fixpoint_table__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__InitFunction_4, (MR_Integer) 1)));
#line 132 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__conv1_HeadVar__6_16;

#line 131 "ctgc.fixpoint_table.m"
    {
#line 131 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__E_10 = transform_hlds__ctgc__fixpoint_table__func_0(((MR_Box) transform_hlds__ctgc__fixpoint_table__InitFunction_4), transform_hlds__ctgc__fixpoint_table__HeadVar__4_14);
    }
#line 126 "ctgc.fixpoint_table.m"
    {
#line 126 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 126 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__V_17_17, 0) = ((MR_Box) ((MR_Integer) 1));
#line 126 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__V_17_17, 1) = transform_hlds__ctgc__fixpoint_table__E_10;
#line 126 "ctgc.fixpoint_table.m"
    }
#line 1027 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 1029 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1031 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_27_27, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
#line 1033 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_27_27, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_25));
#line 1035 "transform_hlds.ctgc.fixpoint_table.c"
    }
#line 132 "ctgc.fixpoint_table.m"
    {
#line 132 "ctgc.fixpoint_table.m"
      mercury__map__det_insert_4_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24, transform_hlds__ctgc__fixpoint_table__TypeInfo_27_27, transform_hlds__ctgc__fixpoint_table__HeadVar__4_14, ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_17_17)), (MR_Word) transform_hlds__ctgc__fixpoint_table__HeadVar__5_15, &transform_hlds__ctgc__fixpoint_table__conv1_HeadVar__6_16);
    }
#line 132 "ctgc.fixpoint_table.m"
    *transform_hlds__ctgc__fixpoint_table__HeadVar__6_16 = (MR_Word) transform_hlds__ctgc__fixpoint_table__conv1_HeadVar__6_16;
#line 130 "ctgc.fixpoint_table.m"
  }
#line 130 "ctgc.fixpoint_table.m"
}

#line 117 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0(
#line 117 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
#line 117 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2,
#line 117 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__3_3)
#line 117 "ctgc.fixpoint_table.m"
{
#line 117 "ctgc.fixpoint_table.m"
  {
#line 117 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 117 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;
#line 117 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__3_3;

#line 117 "ctgc.fixpoint_table.m"
    {
#line 117 "ctgc.fixpoint_table.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, transform_hlds__ctgc__fixpoint_table__Cast_HeadVar1_4, transform_hlds__ctgc__fixpoint_table__Cast_HeadVar2_5);
#line 117 "ctgc.fixpoint_table.m"
      return;
    }
#line 117 "ctgc.fixpoint_table.m"
  }
#line 117 "ctgc.fixpoint_table.m"
}

#line 117 "ctgc.fixpoint_table.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0(
#line 117 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_1,
#line 117 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2)
#line 117 "ctgc.fixpoint_table.m"
{
#line 1090 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 1092 "transform_hlds.ctgc.fixpoint_table.c"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__HeadVar__2_1 == transform_hlds__ctgc__fixpoint_table__HeadVar__2_2);

#line 1095 "transform_hlds.ctgc.fixpoint_table.c"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 1097 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 117 "ctgc.fixpoint_table.m"
}

#line 113 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0(
#line 113 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
#line 113 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2,
#line 113 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__3_3)
#line 113 "ctgc.fixpoint_table.m"
{
#line 113 "ctgc.fixpoint_table.m"
  {
#line 113 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 113 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;
#line 113 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__3_3;

#line 113 "ctgc.fixpoint_table.m"
    {
#line 113 "ctgc.fixpoint_table.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, transform_hlds__ctgc__fixpoint_table__Cast_HeadVar1_4, transform_hlds__ctgc__fixpoint_table__Cast_HeadVar2_5);
#line 113 "ctgc.fixpoint_table.m"
      return;
    }
#line 113 "ctgc.fixpoint_table.m"
  }
#line 113 "ctgc.fixpoint_table.m"
}

#line 113 "ctgc.fixpoint_table.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0(
#line 113 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_1,
#line 113 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2)
#line 113 "ctgc.fixpoint_table.m"
{
#line 1143 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 1145 "transform_hlds.ctgc.fixpoint_table.c"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__HeadVar__2_1 == transform_hlds__ctgc__fixpoint_table__HeadVar__2_2);

#line 1148 "transform_hlds.ctgc.fixpoint_table.c"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 1150 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 113 "ctgc.fixpoint_table.m"
}

#line 107 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0(
#line 107 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11,
#line 107 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
#line 107 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2,
#line 107 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__3_3)
#line 107 "ctgc.fixpoint_table.m"
{
#line 107 "ctgc.fixpoint_table.m"
  {
#line 107 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 107 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastX_9 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;
#line 107 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastY_10 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__3_3;

#line 107 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__CastX_9 == transform_hlds__ctgc__fixpoint_table__CastY_10);
#line 107 "ctgc.fixpoint_table.m"
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 1181 "transform_hlds.ctgc.fixpoint_table.c"
      *transform_hlds__ctgc__fixpoint_table__HeadVar__1_1 = (MR_Integer) 0;
#line 107 "ctgc.fixpoint_table.m"
    else
#line 107 "ctgc.fixpoint_table.m"
      {
#line 107 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "ctgc.fixpoint_table.m"
        MR_Box transform_hlds__ctgc__fixpoint_table__V_5_5 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 1));
#line 107 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__3_3, (MR_Integer) 0)));
#line 107 "ctgc.fixpoint_table.m"
        MR_Box transform_hlds__ctgc__fixpoint_table__V_7_7 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__3_3, (MR_Integer) 1));
#line 107 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_8_8;
#line 107 "ctgc.fixpoint_table.m"
        MR_Integer transform_hlds__ctgc__fixpoint_table__V_13_13 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__V_4_4;
#line 107 "ctgc.fixpoint_table.m"
        MR_Integer transform_hlds__ctgc__fixpoint_table__V_14_14 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__V_6_6;

#line 107 "ctgc.fixpoint_table.m"
        {
#line 107 "ctgc.fixpoint_table.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__fixpoint_table__V_8_8, transform_hlds__ctgc__fixpoint_table__V_13_13, transform_hlds__ctgc__fixpoint_table__V_14_14);
        }
#line 1207 "transform_hlds.ctgc.fixpoint_table.c"
        transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_8_8 == (MR_Integer) 0);
#line 107 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__succeeded = !(transform_hlds__ctgc__fixpoint_table__succeeded);
#line 107 "ctgc.fixpoint_table.m"
        if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 107 "ctgc.fixpoint_table.m"
          *transform_hlds__ctgc__fixpoint_table__HeadVar__1_1 = transform_hlds__ctgc__fixpoint_table__V_8_8;
#line 107 "ctgc.fixpoint_table.m"
        else
#line 107 "ctgc.fixpoint_table.m"
          {
#line 107 "ctgc.fixpoint_table.m"
            mercury__builtin__compare_3_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11, transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, transform_hlds__ctgc__fixpoint_table__V_5_5, transform_hlds__ctgc__fixpoint_table__V_7_7);
#line 107 "ctgc.fixpoint_table.m"
            return;
          }
#line 107 "ctgc.fixpoint_table.m"
      }
#line 107 "ctgc.fixpoint_table.m"
  }
#line 107 "ctgc.fixpoint_table.m"
}

#line 107 "ctgc.fixpoint_table.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0(
#line 107 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_9,
#line 107 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
#line 107 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2)
#line 107 "ctgc.fixpoint_table.m"
{
#line 107 "ctgc.fixpoint_table.m"
  {
#line 107 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 107 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastX_7 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__1_1;
#line 107 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastY_8 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;

#line 107 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__CastX_7 == transform_hlds__ctgc__fixpoint_table__CastY_8);
#line 107 "ctgc.fixpoint_table.m"
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 107 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
#line 107 "ctgc.fixpoint_table.m"
    else
#line 107 "ctgc.fixpoint_table.m"
      {
#line 107 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, (MR_Integer) 0)));
#line 107 "ctgc.fixpoint_table.m"
        MR_Box transform_hlds__ctgc__fixpoint_table__V_4_4 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, (MR_Integer) 1));
#line 107 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "ctgc.fixpoint_table.m"
        MR_Box transform_hlds__ctgc__fixpoint_table__V_6_6 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 1));

#line 1270 "transform_hlds.ctgc.fixpoint_table.c"
        transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_3_3 == transform_hlds__ctgc__fixpoint_table__V_5_5);
#line 107 "ctgc.fixpoint_table.m"
        if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 1274 "transform_hlds.ctgc.fixpoint_table.c"
          {
#line 1276 "transform_hlds.ctgc.fixpoint_table.c"
            return transform_hlds__ctgc__fixpoint_table__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_9, transform_hlds__ctgc__fixpoint_table__V_4_4, transform_hlds__ctgc__fixpoint_table__V_6_6);
          }
#line 107 "ctgc.fixpoint_table.m"
      }
#line 107 "ctgc.fixpoint_table.m"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 107 "ctgc.fixpoint_table.m"
  }
#line 107 "ctgc.fixpoint_table.m"
}

#line 99 "ctgc.fixpoint_table.m"
void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0(
#line 99 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_17,
#line 99 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_18,
#line 99 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
#line 99 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2,
#line 99 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__3_3)
#line 99 "ctgc.fixpoint_table.m"
{
#line 99 "ctgc.fixpoint_table.m"
  {
#line 99 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 99 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastX_15 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;
#line 99 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastY_16 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__3_3;

#line 99 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__CastX_15 == transform_hlds__ctgc__fixpoint_table__CastY_16);
#line 99 "ctgc.fixpoint_table.m"
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 1316 "transform_hlds.ctgc.fixpoint_table.c"
      *transform_hlds__ctgc__fixpoint_table__HeadVar__1_1 = (MR_Integer) 0;
#line 99 "ctgc.fixpoint_table.m"
    else
#line 99 "ctgc.fixpoint_table.m"
      {
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 0)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Integer transform_hlds__ctgc__fixpoint_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 1)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 2)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 3)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__3_3, (MR_Integer) 0)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Integer transform_hlds__ctgc__fixpoint_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__3_3, (MR_Integer) 1)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__3_3, (MR_Integer) 2)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__3_3, (MR_Integer) 3)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_12_12;

#line 99 "ctgc.fixpoint_table.m"
        {
#line 99 "ctgc.fixpoint_table.m"
          mercury__list____Compare____list_1_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_17, &transform_hlds__ctgc__fixpoint_table__V_12_12, transform_hlds__ctgc__fixpoint_table__V_4_4, transform_hlds__ctgc__fixpoint_table__V_8_8);
        }
#line 1346 "transform_hlds.ctgc.fixpoint_table.c"
        transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_12_12 == (MR_Integer) 0);
#line 99 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__succeeded = !(transform_hlds__ctgc__fixpoint_table__succeeded);
#line 99 "ctgc.fixpoint_table.m"
        if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 99 "ctgc.fixpoint_table.m"
          *transform_hlds__ctgc__fixpoint_table__HeadVar__1_1 = transform_hlds__ctgc__fixpoint_table__V_12_12;
#line 99 "ctgc.fixpoint_table.m"
        else
#line 99 "ctgc.fixpoint_table.m"
          {
#line 99 "ctgc.fixpoint_table.m"
            MR_Word transform_hlds__ctgc__fixpoint_table__V_13_13;

#line 99 "ctgc.fixpoint_table.m"
            {
#line 99 "ctgc.fixpoint_table.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__fixpoint_table__V_13_13, transform_hlds__ctgc__fixpoint_table__V_5_5, transform_hlds__ctgc__fixpoint_table__V_9_9);
            }
#line 1366 "transform_hlds.ctgc.fixpoint_table.c"
            transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_13_13 == (MR_Integer) 0);
#line 99 "ctgc.fixpoint_table.m"
            transform_hlds__ctgc__fixpoint_table__succeeded = !(transform_hlds__ctgc__fixpoint_table__succeeded);
#line 99 "ctgc.fixpoint_table.m"
            if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 99 "ctgc.fixpoint_table.m"
              *transform_hlds__ctgc__fixpoint_table__HeadVar__1_1 = transform_hlds__ctgc__fixpoint_table__V_13_13;
#line 99 "ctgc.fixpoint_table.m"
            else
#line 99 "ctgc.fixpoint_table.m"
              {
#line 99 "ctgc.fixpoint_table.m"
                MR_Word transform_hlds__ctgc__fixpoint_table__V_14_14;
#line 99 "ctgc.fixpoint_table.m"
                MR_Integer transform_hlds__ctgc__fixpoint_table__V_27_27 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__V_6_6;
#line 99 "ctgc.fixpoint_table.m"
                MR_Integer transform_hlds__ctgc__fixpoint_table__V_28_28 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__V_10_10;

#line 99 "ctgc.fixpoint_table.m"
                {
#line 99 "ctgc.fixpoint_table.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__fixpoint_table__V_14_14, transform_hlds__ctgc__fixpoint_table__V_27_27, transform_hlds__ctgc__fixpoint_table__V_28_28);
                }
#line 1390 "transform_hlds.ctgc.fixpoint_table.c"
                transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_14_14 == (MR_Integer) 0);
#line 99 "ctgc.fixpoint_table.m"
                transform_hlds__ctgc__fixpoint_table__succeeded = !(transform_hlds__ctgc__fixpoint_table__succeeded);
#line 99 "ctgc.fixpoint_table.m"
                if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 99 "ctgc.fixpoint_table.m"
                  *transform_hlds__ctgc__fixpoint_table__HeadVar__1_1 = transform_hlds__ctgc__fixpoint_table__V_14_14;
#line 99 "ctgc.fixpoint_table.m"
                else
#line 99 "ctgc.fixpoint_table.m"
                  {
#line 99 "ctgc.fixpoint_table.m"
                    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_24_24;

#line 1405 "transform_hlds.ctgc.fixpoint_table.c"
                    {
#line 1407 "transform_hlds.ctgc.fixpoint_table.c"
                      transform_hlds__ctgc__fixpoint_table__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1409 "transform_hlds.ctgc.fixpoint_table.c"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_24_24, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
#line 1411 "transform_hlds.ctgc.fixpoint_table.c"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_24_24, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_18));
#line 1413 "transform_hlds.ctgc.fixpoint_table.c"
                    }
#line 99 "ctgc.fixpoint_table.m"
                    {
#line 99 "ctgc.fixpoint_table.m"
                      mercury__tree234____Compare____tree234_2_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_17, transform_hlds__ctgc__fixpoint_table__TypeInfo_24_24, transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_7_7, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_11_11);
#line 99 "ctgc.fixpoint_table.m"
                      return;
                    }
#line 99 "ctgc.fixpoint_table.m"
                  }
#line 99 "ctgc.fixpoint_table.m"
              }
#line 99 "ctgc.fixpoint_table.m"
          }
#line 99 "ctgc.fixpoint_table.m"
      }
#line 99 "ctgc.fixpoint_table.m"
  }
#line 99 "ctgc.fixpoint_table.m"
}

#line 99 "ctgc.fixpoint_table.m"
MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0(
#line 99 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_13,
#line 99 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_14,
#line 99 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__1_1,
#line 99 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__HeadVar__2_2)
#line 99 "ctgc.fixpoint_table.m"
{
#line 99 "ctgc.fixpoint_table.m"
  {
#line 99 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 99 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastX_11 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__1_1;
#line 99 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__CastY_12 = (MR_Integer) transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;

#line 99 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__CastX_11 == transform_hlds__ctgc__fixpoint_table__CastY_12);
#line 99 "ctgc.fixpoint_table.m"
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 99 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
#line 99 "ctgc.fixpoint_table.m"
    else
#line 99 "ctgc.fixpoint_table.m"
      {
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_17_17;
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_18_18;
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, (MR_Integer) 0)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Integer transform_hlds__ctgc__fixpoint_table__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, (MR_Integer) 1)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, (MR_Integer) 2)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__1_1, (MR_Integer) 3)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 0)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Integer transform_hlds__ctgc__fixpoint_table__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 1)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 2)));
#line 99 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__HeadVar__2_2, (MR_Integer) 3)));

#line 1488 "transform_hlds.ctgc.fixpoint_table.c"
        {
#line 1490 "transform_hlds.ctgc.fixpoint_table.c"
          transform_hlds__ctgc__fixpoint_table__succeeded = mercury__list____Unify____list_1_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_13, transform_hlds__ctgc__fixpoint_table__V_3_3, transform_hlds__ctgc__fixpoint_table__V_7_7);
        }
#line 99 "ctgc.fixpoint_table.m"
        if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 99 "ctgc.fixpoint_table.m"
          {
#line 1497 "transform_hlds.ctgc.fixpoint_table.c"
            transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_4_4 == transform_hlds__ctgc__fixpoint_table__V_8_8);
#line 99 "ctgc.fixpoint_table.m"
            if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 99 "ctgc.fixpoint_table.m"
              {
#line 1503 "transform_hlds.ctgc.fixpoint_table.c"
                transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_5_5 == transform_hlds__ctgc__fixpoint_table__V_9_9);
#line 99 "ctgc.fixpoint_table.m"
                if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 99 "ctgc.fixpoint_table.m"
                  {
#line 1509 "transform_hlds.ctgc.fixpoint_table.c"
                    transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_17_17 = (MR_Word) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1;
#line 1511 "transform_hlds.ctgc.fixpoint_table.c"
                    {
#line 1513 "transform_hlds.ctgc.fixpoint_table.c"
                      transform_hlds__ctgc__fixpoint_table__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "transform_hlds.ctgc.fixpoint_table.c"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_18_18, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_17_17));
#line 1517 "transform_hlds.ctgc.fixpoint_table.c"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_18_18, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_14));
#line 1519 "transform_hlds.ctgc.fixpoint_table.c"
                    }
#line 1521 "transform_hlds.ctgc.fixpoint_table.c"
                    {
#line 1523 "transform_hlds.ctgc.fixpoint_table.c"
                      return transform_hlds__ctgc__fixpoint_table__succeeded = mercury__tree234____Unify____tree234_2_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_13, transform_hlds__ctgc__fixpoint_table__TypeInfo_18_18, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_6_6, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_10_10);
                    }
#line 99 "ctgc.fixpoint_table.m"
                  }
#line 99 "ctgc.fixpoint_table.m"
              }
#line 99 "ctgc.fixpoint_table.m"
          }
#line 99 "ctgc.fixpoint_table.m"
      }
#line 99 "ctgc.fixpoint_table.m"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 99 "ctgc.fixpoint_table.m"
  }
#line 99 "ctgc.fixpoint_table.m"
}

#line 154 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__accumulate_instability_4_p_0(
#line 154 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_10,
#line 154 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11,
#line 154 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table___Key_5,
#line 154 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__Entry_6,
#line 154 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__S0_7,
#line 154 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__S_8)
#line 154 "ctgc.fixpoint_table.m"
{
#line 161 "ctgc.fixpoint_table.m"
  {
#line 161 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

#line 161 "ctgc.fixpoint_table.m"
    {
#line 161 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_117_109_117_108_97_116_101_95_105_110_115_116_97_98_105_108_105_116_121_95_95_91_49_44_32_51_93_95_48_4_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_11, transform_hlds__ctgc__fixpoint_table__Entry_6, transform_hlds__ctgc__fixpoint_table__S0_7, transform_hlds__ctgc__fixpoint_table__S_8);
#line 161 "ctgc.fixpoint_table.m"
      return;
    }
#line 161 "ctgc.fixpoint_table.m"
  }
#line 154 "ctgc.fixpoint_table.m"
}

#line 84 "ctgc.fixpoint_table.m"
MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_p_0(
#line 84 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_13,
#line 84 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_14,
#line 84 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__Index_4,
#line 84 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__T_5,
#line 84 "ctgc.fixpoint_table.m"
  MR_Box * transform_hlds__ctgc__fixpoint_table__Elem_6)
#line 84 "ctgc.fixpoint_table.m"
{
#line 211 "ctgc.fixpoint_table.m"
  {
#line 211 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 211 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_16_16;
#line 211 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__Entry_7;
#line 211 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 3)));
#line 212 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 0)));
#line 212 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 1)));
#line 212 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 2)));
#line 212 "ctgc.fixpoint_table.m"
    MR_Box transform_hlds__ctgc__fixpoint_table__conv0_Entry_7;
#line 213 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_12_12;

#line 1611 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 1613 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1615 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_16_16, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
#line 1617 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_16_16, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_14));
#line 1619 "transform_hlds.ctgc.fixpoint_table.c"
    }
#line 212 "ctgc.fixpoint_table.m"
    {
#line 212 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__succeeded = mercury__map__search_3_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_13, transform_hlds__ctgc__fixpoint_table__TypeInfo_16_16, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_8_8, transform_hlds__ctgc__fixpoint_table__Index_4, &transform_hlds__ctgc__fixpoint_table__conv0_Entry_7);
    }
#line 212 "ctgc.fixpoint_table.m"
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 212 "ctgc.fixpoint_table.m"
      {
#line 212 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__Entry_7 = ((MR_Word) transform_hlds__ctgc__fixpoint_table__conv0_Entry_7);
#line 212 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
#line 212 "ctgc.fixpoint_table.m"
      }
#line 211 "ctgc.fixpoint_table.m"
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 211 "ctgc.fixpoint_table.m"
      {
#line 213 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_7, (MR_Integer) 0)));
#line 213 "ctgc.fixpoint_table.m"
        *transform_hlds__ctgc__fixpoint_table__Elem_6 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_7, (MR_Integer) 1));
#line 213 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
#line 211 "ctgc.fixpoint_table.m"
      }
#line 211 "ctgc.fixpoint_table.m"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 211 "ctgc.fixpoint_table.m"
  }
#line 84 "ctgc.fixpoint_table.m"
}

#line 79 "ctgc.fixpoint_table.m"
MR_Box MR_CALL 
transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_f_0(
#line 79 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_11,
#line 79 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_12,
#line 79 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__Index_4,
#line 79 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__T_5)
#line 79 "ctgc.fixpoint_table.m"
{
#line 207 "ctgc.fixpoint_table.m"
  {
#line 207 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 207 "ctgc.fixpoint_table.m"
    MR_Box transform_hlds__ctgc__fixpoint_table__Elem_6;
#line 207 "ctgc.fixpoint_table.m"
    MR_Box transform_hlds__ctgc__fixpoint_table__TabledElem_7;
#line 211 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_16_23;
#line 211 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__Entry_16;
#line 211 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 3)));
#line 212 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 0)));
#line 212 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 1)));
#line 212 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_5, (MR_Integer) 2)));
#line 212 "ctgc.fixpoint_table.m"
    MR_Box transform_hlds__ctgc__fixpoint_table__conv0_Entry_16;
#line 213 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_21_21;

#line 1693 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 1695 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__TypeInfo_16_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1697 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_16_23, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
#line 1699 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_16_23, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_12));
#line 1701 "transform_hlds.ctgc.fixpoint_table.c"
    }
#line 212 "ctgc.fixpoint_table.m"
    {
#line 212 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__succeeded = mercury__map__search_3_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_11, transform_hlds__ctgc__fixpoint_table__TypeInfo_16_23, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_17_17, transform_hlds__ctgc__fixpoint_table__Index_4, &transform_hlds__ctgc__fixpoint_table__conv0_Entry_16);
    }
#line 212 "ctgc.fixpoint_table.m"
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 212 "ctgc.fixpoint_table.m"
      {
#line 212 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__Entry_16 = ((MR_Word) transform_hlds__ctgc__fixpoint_table__conv0_Entry_16);
#line 212 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
#line 212 "ctgc.fixpoint_table.m"
      }
#line 211 "ctgc.fixpoint_table.m"
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 211 "ctgc.fixpoint_table.m"
      {
#line 213 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_16, (MR_Integer) 0)));
#line 213 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__TabledElem_7 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_16, (MR_Integer) 1));
#line 213 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
#line 211 "ctgc.fixpoint_table.m"
      }
#line 207 "ctgc.fixpoint_table.m"
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 206 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__Elem_6 = transform_hlds__ctgc__fixpoint_table__TabledElem_7;
#line 207 "ctgc.fixpoint_table.m"
    else
#line 208 "ctgc.fixpoint_table.m"
      {
#line 208 "ctgc.fixpoint_table.m"
        {
#line 208 "ctgc.fixpoint_table.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.fixpoint_table", (MR_String) "function \140transform_hlds.ctgc.fixpoint_table.get_from_fixpoint_table_final\'/2", (MR_String) "key not in map.");
        }
#line 208 "ctgc.fixpoint_table.m"
      }
#line 207 "ctgc.fixpoint_table.m"
    return transform_hlds__ctgc__fixpoint_table__Elem_6;
#line 207 "ctgc.fixpoint_table.m"
  }
#line 79 "ctgc.fixpoint_table.m"
}

#line 73 "ctgc.fixpoint_table.m"
MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_p_0(
#line 73 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_26,
#line 73 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_27,
#line 73 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__Index_5,
#line 73 "ctgc.fixpoint_table.m"
  MR_Box * transform_hlds__ctgc__fixpoint_table__Elem_6,
#line 73 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11,
#line 73 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_12)
#line 73 "ctgc.fixpoint_table.m"
{
#line 196 "ctgc.fixpoint_table.m"
  {
#line 196 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 196 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_28_28;
#line 196 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29;
#line 196 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__List_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 0)));
#line 196 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__Map_9;
#line 196 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__Entry_10;
#line 196 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_14_14;
#line 197 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 1)));
#line 197 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 2)));
#line 197 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 3)));
#line 199 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_18_18;
#line 199 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_19_19;
#line 199 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_20_20;
#line 200 "ctgc.fixpoint_table.m"
    MR_Box transform_hlds__ctgc__fixpoint_table__conv0_Entry_10;
#line 201 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_21_21;
#line 202 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_22_22;
#line 202 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_23_23;
#line 202 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_25_25;
#line 202 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_24_24;

#line 198 "ctgc.fixpoint_table.m"
    {
#line 198 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__succeeded = mercury__list__member_2_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_26, transform_hlds__ctgc__fixpoint_table__Index_5, transform_hlds__ctgc__fixpoint_table__List_8);
    }
#line 196 "ctgc.fixpoint_table.m"
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 196 "ctgc.fixpoint_table.m"
      {
#line 199 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 0)));
#line 199 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 1)));
#line 199 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 2)));
#line 199 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__Map_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 3)));
#line 1827 "transform_hlds.ctgc.fixpoint_table.c"
        transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_28_28 = (MR_Word) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1;
#line 1829 "transform_hlds.ctgc.fixpoint_table.c"
        {
#line 1831 "transform_hlds.ctgc.fixpoint_table.c"
          transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1833 "transform_hlds.ctgc.fixpoint_table.c"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_28_28));
#line 1835 "transform_hlds.ctgc.fixpoint_table.c"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_27));
#line 1837 "transform_hlds.ctgc.fixpoint_table.c"
        }
#line 200 "ctgc.fixpoint_table.m"
        {
#line 200 "ctgc.fixpoint_table.m"
          mercury__map__lookup_3_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_26, transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29, (MR_Word) transform_hlds__ctgc__fixpoint_table__Map_9, transform_hlds__ctgc__fixpoint_table__Index_5, &transform_hlds__ctgc__fixpoint_table__conv0_Entry_10);
        }
#line 200 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__Entry_10 = ((MR_Word) transform_hlds__ctgc__fixpoint_table__conv0_Entry_10);
#line 201 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_10, (MR_Integer) 0)));
#line 201 "ctgc.fixpoint_table.m"
        *transform_hlds__ctgc__fixpoint_table__Elem_6 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_10, (MR_Integer) 1));
#line 202 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__V_14_14 = (MR_Integer) 0;
#line 202 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 0)));
#line 202 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 1)));
#line 202 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 2)));
#line 202 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_11, (MR_Integer) 3)));
#line 202 "ctgc.fixpoint_table.m"
        {
#line 202 "ctgc.fixpoint_table.m"
          MR_Word base;
#line 202 "ctgc.fixpoint_table.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 202 "ctgc.fixpoint_table.m"
          *transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_12 = base;
#line 202 "ctgc.fixpoint_table.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_22_22));
#line 202 "ctgc.fixpoint_table.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_23_23));
#line 202 "ctgc.fixpoint_table.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_14_14));
#line 202 "ctgc.fixpoint_table.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_25_25));
#line 202 "ctgc.fixpoint_table.m"
        }
#line 202 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
#line 196 "ctgc.fixpoint_table.m"
      }
#line 196 "ctgc.fixpoint_table.m"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 196 "ctgc.fixpoint_table.m"
  }
#line 73 "ctgc.fixpoint_table.m"
}

#line 64 "ctgc.fixpoint_table.m"
void MR_CALL 
transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_p_0(
#line 64 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_27,
#line 64 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_28,
#line 64 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__IsLessOrEqualTest_6,
#line 64 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__Index_7,
#line 64 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__Elem_8,
#line 64 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16,
#line 64 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_17)
#line 64 "ctgc.fixpoint_table.m"
{
#line 173 "ctgc.fixpoint_table.m"
  {
#line 173 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 173 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30;
#line 173 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__Map0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 3)));
#line 173 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__Entry_11;
#line 173 "ctgc.fixpoint_table.m"
    MR_Box transform_hlds__ctgc__fixpoint_table__TabledElem_12;
#line 173 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__IsStable_13;
#line 173 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__FinalTabledElem_14;
#line 173 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__Map_15;
#line 174 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 0)));
#line 174 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 1)));
#line 174 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 2)));
#line 175 "ctgc.fixpoint_table.m"
    MR_Box transform_hlds__ctgc__fixpoint_table__conv0_Entry_11;
#line 176 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_22_22;
#line 177 "ctgc.fixpoint_table.m"
    MR_bool MR_CALL (* transform_hlds__ctgc__fixpoint_table__func_1)(MR_Box, MR_Box, MR_Box);
#line 193 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__conv2_Map_15;
#line 194 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_23_23;
#line 194 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_24_24;
#line 194 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_25_25;
#line 194 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_26_26;

#line 1949 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 1951 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1953 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
#line 1955 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_27));
#line 1957 "transform_hlds.ctgc.fixpoint_table.c"
    }
#line 175 "ctgc.fixpoint_table.m"
    {
#line 175 "ctgc.fixpoint_table.m"
      mercury__map__lookup_3_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_28, transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30, (MR_Word) transform_hlds__ctgc__fixpoint_table__Map0_10, transform_hlds__ctgc__fixpoint_table__Index_7, &transform_hlds__ctgc__fixpoint_table__conv0_Entry_11);
    }
#line 175 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__Entry_11 = ((MR_Word) transform_hlds__ctgc__fixpoint_table__conv0_Entry_11);
#line 176 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_11, (MR_Integer) 0)));
#line 176 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__TabledElem_12 = (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__Entry_11, (MR_Integer) 1));
#line 177 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__IsLessOrEqualTest_6, (MR_Integer) 1)));
#line 177 "ctgc.fixpoint_table.m"
    {
#line 177 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table__func_1(((MR_Box) transform_hlds__ctgc__fixpoint_table__IsLessOrEqualTest_6), transform_hlds__ctgc__fixpoint_table__Elem_8, transform_hlds__ctgc__fixpoint_table__TabledElem_12);
    }
#line 179 "ctgc.fixpoint_table.m"
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 178 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__IsStable_13 = (MR_Integer) 0;
#line 179 "ctgc.fixpoint_table.m"
    else
#line 180 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__IsStable_13 = (MR_Integer) 1;
#line 127 "ctgc.fixpoint_table.m"
    {
#line 127 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__FinalTabledElem_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 127 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__FinalTabledElem_14, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__IsStable_13));
#line 127 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__FinalTabledElem_14, 1) = transform_hlds__ctgc__fixpoint_table__Elem_8;
#line 127 "ctgc.fixpoint_table.m"
    }
#line 193 "ctgc.fixpoint_table.m"
    {
#line 193 "ctgc.fixpoint_table.m"
      mercury__map__det_update_4_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_28, transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30, transform_hlds__ctgc__fixpoint_table__Index_7, ((MR_Box) (transform_hlds__ctgc__fixpoint_table__FinalTabledElem_14)), (MR_Word) transform_hlds__ctgc__fixpoint_table__Map0_10, &transform_hlds__ctgc__fixpoint_table__conv2_Map_15);
    }
#line 193 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__Map_15 = (MR_Word) transform_hlds__ctgc__fixpoint_table__conv2_Map_15;
#line 194 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 0)));
#line 194 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 1)));
#line 194 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 2)));
#line 194 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_0_16, (MR_Integer) 3)));
#line 194 "ctgc.fixpoint_table.m"
    {
#line 194 "ctgc.fixpoint_table.m"
      MR_Word base;
#line 194 "ctgc.fixpoint_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 194 "ctgc.fixpoint_table.m"
      *transform_hlds__ctgc__fixpoint_table__STATE_VARIABLE_T_17 = base;
#line 194 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_23_23));
#line 194 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_24_24));
#line 194 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_25_25));
#line 194 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__Map_15));
#line 194 "ctgc.fixpoint_table.m"
    }
#line 173 "ctgc.fixpoint_table.m"
  }
#line 64 "ctgc.fixpoint_table.m"
}

#line 49 "ctgc.fixpoint_table.m"
MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table__is_recursive_1_p_0(
#line 49 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_7,
#line 49 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_8,
#line 49 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__T_2)
#line 49 "ctgc.fixpoint_table.m"
{
#line 141 "ctgc.fixpoint_table.m"
  {
#line 141 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 141 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 2)));
#line 141 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 0)));
#line 141 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 1)));
#line 141 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 3)));

#line 141 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_3_3 == (MR_Integer) 0);
#line 141 "ctgc.fixpoint_table.m"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 141 "ctgc.fixpoint_table.m"
  }
#line 49 "ctgc.fixpoint_table.m"
}

#line 45 "ctgc.fixpoint_table.m"
MR_String MR_CALL 
transform_hlds__ctgc__fixpoint_table__description_1_f_0(
#line 45 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_4,
#line 45 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_5,
#line 45 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__T_3)
#line 45 "ctgc.fixpoint_table.m"
{
#line 166 "ctgc.fixpoint_table.m"
  {
#line 166 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 166 "ctgc.fixpoint_table.m"
    MR_String transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;

#line 167 "ctgc.fixpoint_table.m"
    {
#line 167 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_4, transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_5, transform_hlds__ctgc__fixpoint_table__T_3);
    }
#line 166 "ctgc.fixpoint_table.m"
    if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 166 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__HeadVar__2_2 = (MR_String) "stable";
#line 166 "ctgc.fixpoint_table.m"
    else
#line 166 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__HeadVar__2_2 = (MR_String) "unstable";
#line 166 "ctgc.fixpoint_table.m"
    return transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;
#line 166 "ctgc.fixpoint_table.m"
  }
#line 45 "ctgc.fixpoint_table.m"
}

#line 147 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0_1(
#line 147 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__closure_arg,
#line 147 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 147 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 147 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
#line 147 "ctgc.fixpoint_table.m"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_4)
#line 147 "ctgc.fixpoint_table.m"
{
#line 147 "ctgc.fixpoint_table.m"
  {
#line 147 "ctgc.fixpoint_table.m"
    MR_Box transform_hlds__ctgc__fixpoint_table__closure = transform_hlds__ctgc__fixpoint_table__closure_arg;
#line 147 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_S_8;

#line 147 "ctgc.fixpoint_table.m"
    {
#line 147 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__accumulate_instability_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__closure, (MR_Integer) 4))), transform_hlds__ctgc__fixpoint_table__wrapper_arg_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3), &transform_hlds__ctgc__fixpoint_table__conv0_S_8);
    }
#line 147 "ctgc.fixpoint_table.m"
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_4 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_S_8));
#line 147 "ctgc.fixpoint_table.m"
  }
#line 147 "ctgc.fixpoint_table.m"
}

#line 41 "ctgc.fixpoint_table.m"
MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0(
#line 41 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_14,
#line 41 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_15,
#line 41 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__T_2)
#line 41 "ctgc.fixpoint_table.m"
{
#line 143 "ctgc.fixpoint_table.m"
  {
#line 143 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 143 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__IsRecursive_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 2)));
#line 143 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 3)));
#line 144 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 0)));
#line 144 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T_2, (MR_Integer) 1)));

#line 150 "ctgc.fixpoint_table.m"
    if ((transform_hlds__ctgc__fixpoint_table__IsRecursive_3 == (MR_Integer) 1))
#line 151 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__succeeded = MR_TRUE;
#line 150 "ctgc.fixpoint_table.m"
    else
#line 146 "ctgc.fixpoint_table.m"
      {
#line 146 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_21_21;
#line 146 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__FinalStability_4;
#line 146 "ctgc.fixpoint_table.m"
        MR_Word transform_hlds__ctgc__fixpoint_table__V_5_5;
#line 147 "ctgc.fixpoint_table.m"
        MR_Box transform_hlds__ctgc__fixpoint_table__conv1_FinalStability_4;

#line 147 "ctgc.fixpoint_table.m"
        {
#line 147 "ctgc.fixpoint_table.m"
          transform_hlds__ctgc__fixpoint_table__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 147 "ctgc.fixpoint_table.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__V_5_5, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table_scalar_common_2[1]));
#line 147 "ctgc.fixpoint_table.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__V_5_5, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0_1));
#line 147 "ctgc.fixpoint_table.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__V_5_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 147 "ctgc.fixpoint_table.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__V_5_5, 3) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_14));
#line 147 "ctgc.fixpoint_table.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__V_5_5, 4) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_15));
#line 147 "ctgc.fixpoint_table.m"
        }
#line 2195 "transform_hlds.ctgc.fixpoint_table.c"
        {
#line 2197 "transform_hlds.ctgc.fixpoint_table.c"
          transform_hlds__ctgc__fixpoint_table__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2199 "transform_hlds.ctgc.fixpoint_table.c"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_21_21, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
#line 2201 "transform_hlds.ctgc.fixpoint_table.c"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_21_21, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_15));
#line 2203 "transform_hlds.ctgc.fixpoint_table.c"
        }
#line 147 "ctgc.fixpoint_table.m"
        {
#line 147 "ctgc.fixpoint_table.m"
          mercury__map__foldl_4_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_14, transform_hlds__ctgc__fixpoint_table__TypeInfo_21_21, (MR_Word) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_5_5, (MR_Word) transform_hlds__ctgc__fixpoint_table__V_10_10, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__ctgc__fixpoint_table__conv1_FinalStability_4);
        }
#line 147 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__FinalStability_4 = ((MR_Word) transform_hlds__ctgc__fixpoint_table__conv1_FinalStability_4);
#line 149 "ctgc.fixpoint_table.m"
        transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__FinalStability_4 == (MR_Integer) 0);
#line 146 "ctgc.fixpoint_table.m"
      }
#line 143 "ctgc.fixpoint_table.m"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 143 "ctgc.fixpoint_table.m"
  }
#line 41 "ctgc.fixpoint_table.m"
}

#line 37 "ctgc.fixpoint_table.m"
MR_Integer MR_CALL 
transform_hlds__ctgc__fixpoint_table__which_run_1_f_0(
#line 37 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_7,
#line 37 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_8,
#line 37 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__T0_3)
#line 37 "ctgc.fixpoint_table.m"
{
#line 139 "ctgc.fixpoint_table.m"
  {
#line 139 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 139 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 1)));
#line 139 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 0)));
#line 139 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 2)));
#line 139 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 3)));

#line 139 "ctgc.fixpoint_table.m"
    return transform_hlds__ctgc__fixpoint_table__HeadVar__2_2;
#line 139 "ctgc.fixpoint_table.m"
  }
#line 37 "ctgc.fixpoint_table.m"
}

#line 33 "ctgc.fixpoint_table.m"
void MR_CALL 
transform_hlds__ctgc__fixpoint_table__new_run_2_p_0(
#line 33 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_14,
#line 33 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_15,
#line 33 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__T0_3,
#line 33 "ctgc.fixpoint_table.m"
  MR_Word * transform_hlds__ctgc__fixpoint_table__HeadVar__2_2)
#line 33 "ctgc.fixpoint_table.m"
{
#line 138 "ctgc.fixpoint_table.m"
  {
#line 138 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 138 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_4_4;
#line 138 "ctgc.fixpoint_table.m"
    MR_Integer transform_hlds__ctgc__fixpoint_table__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 1)));
#line 138 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 0)));
#line 138 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 2)));
#line 138 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__T0_3, (MR_Integer) 3)));

#line 138 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__V_4_4 = (transform_hlds__ctgc__fixpoint_table__V_5_5 + (MR_Integer) 1);
#line 138 "ctgc.fixpoint_table.m"
    {
#line 138 "ctgc.fixpoint_table.m"
      MR_Word base;
#line 138 "ctgc.fixpoint_table.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 138 "ctgc.fixpoint_table.m"
      *transform_hlds__ctgc__fixpoint_table__HeadVar__2_2 = base;
#line 138 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_7_7));
#line 138 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_4_4));
#line 138 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_8_8));
#line 138 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_9_9));
#line 138 "ctgc.fixpoint_table.m"
    }
#line 138 "ctgc.fixpoint_table.m"
  }
#line 33 "ctgc.fixpoint_table.m"
}

#line 130 "ctgc.fixpoint_table.m"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0_1(
#line 130 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__closure_arg,
#line 130 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 130 "ctgc.fixpoint_table.m"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 130 "ctgc.fixpoint_table.m"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_3)
#line 130 "ctgc.fixpoint_table.m"
{
#line 130 "ctgc.fixpoint_table.m"
  {
#line 130 "ctgc.fixpoint_table.m"
    MR_Box transform_hlds__ctgc__fixpoint_table__closure = transform_hlds__ctgc__fixpoint_table__closure_arg;
#line 130 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__6_16;

#line 130 "ctgc.fixpoint_table.m"
    {
#line 130 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__IntroducedFrom__pred__init_fixpoint_table__130__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__closure, (MR_Integer) 5))), transform_hlds__ctgc__fixpoint_table__wrapper_arg_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), &transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__6_16);
    }
#line 130 "ctgc.fixpoint_table.m"
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__6_16));
#line 130 "ctgc.fixpoint_table.m"
  }
#line 130 "ctgc.fixpoint_table.m"
}

#line 29 "ctgc.fixpoint_table.m"
MR_Word MR_CALL 
transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0(
#line 29 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24,
#line 29 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_25,
#line 29 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__InitFunction_4,
#line 29 "ctgc.fixpoint_table.m"
  MR_Word transform_hlds__ctgc__fixpoint_table__Ks_5)
#line 29 "ctgc.fixpoint_table.m"
{
#line 129 "ctgc.fixpoint_table.m"
  {
#line 129 "ctgc.fixpoint_table.m"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;
#line 129 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__FT_6;
#line 129 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29;
#line 129 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31;
#line 129 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__InsertElement_7;
#line 129 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__Map_9;
#line 129 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__V_19_19;
#line 134 "ctgc.fixpoint_table.m"
    MR_Word transform_hlds__ctgc__fixpoint_table__conv1_V_19_19;
#line 134 "ctgc.fixpoint_table.m"
    MR_Box transform_hlds__ctgc__fixpoint_table__conv2_Map_9;

#line 130 "ctgc.fixpoint_table.m"
    {
#line 130 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__InsertElement_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 130 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__InsertElement_7, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table_scalar_common_2[0]));
#line 130 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__InsertElement_7, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0_1));
#line 130 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__InsertElement_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 130 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__InsertElement_7, 3) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24));
#line 130 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__InsertElement_7, 4) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_25));
#line 130 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__InsertElement_7, 5) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__InitFunction_4));
#line 130 "ctgc.fixpoint_table.m"
    }
#line 2391 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 2393 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2395 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
#line 2397 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_25));
#line 2399 "transform_hlds.ctgc.fixpoint_table.c"
    }
#line 134 "ctgc.fixpoint_table.m"
    {
#line 134 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__conv1_V_19_19 = mercury__map__init_0_f_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24, transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29);
    }
#line 134 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__V_19_19 = (MR_Word) transform_hlds__ctgc__fixpoint_table__conv1_V_19_19;
#line 2408 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 2410 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2412 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 2414 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24));
#line 2416 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31, 2) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29));
#line 2418 "transform_hlds.ctgc.fixpoint_table.c"
    }
#line 134 "ctgc.fixpoint_table.m"
    {
#line 134 "ctgc.fixpoint_table.m"
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24, transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31, (MR_Word) transform_hlds__ctgc__fixpoint_table__InsertElement_7, transform_hlds__ctgc__fixpoint_table__Ks_5, ((MR_Box) (transform_hlds__ctgc__fixpoint_table__V_19_19)), &transform_hlds__ctgc__fixpoint_table__conv2_Map_9);
    }
#line 134 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__Map_9 = ((MR_Word) transform_hlds__ctgc__fixpoint_table__conv2_Map_9);
#line 136 "ctgc.fixpoint_table.m"
    {
#line 136 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__FT_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 136 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__FT_6, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__Ks_5));
#line 136 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__FT_6, 1) = ((MR_Box) ((MR_Integer) 0));
#line 136 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__FT_6, 2) = ((MR_Box) ((MR_Integer) 1));
#line 136 "ctgc.fixpoint_table.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__FT_6, 3) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__Map_9));
#line 136 "ctgc.fixpoint_table.m"
    }
#line 129 "ctgc.fixpoint_table.m"
    return transform_hlds__ctgc__fixpoint_table__FT_6;
#line 129 "ctgc.fixpoint_table.m"
  }
#line 29 "ctgc.fixpoint_table.m"
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
