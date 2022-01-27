/*
** Automatically generated from `ctgc.fixpoint_table.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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




#line 73 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__fixpoint_table____vpti_func_2__pseudo_1__pseudo_2;

#line 76 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2;

#line 79 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2;

#line 82 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__fixpoint_table__list__pti_list_1__pseudo_1;

#line 85 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fixpoint_table_2_0[4];

#line 88 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fixpoint_table_2_0[4];

#line 91 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0;

#line 94 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fixpoint_table_2_0[1];

#line 97 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fixpoint_table_2[1];

#line 100 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fixpoint_table_2[1];

#line 103 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fixpoint_table_2[1];

#line 106 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fp_entry_1_0[2];

#line 109 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fp_entry_1_0[2];

#line 112 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0;

#line 115 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fp_entry_1_0[1];

#line 118 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fp_entry_1[1];

#line 121 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fp_entry_1[1];

#line 124 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fp_entry_1[1];

#line 127 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0;

#line 130 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1;

#line 133 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_recursive_0[2];

#line 136 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_recursive_0[2];

#line 139 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_recursive_0[2];

#line 142 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0;

#line 145 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1;

#line 148 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_stable_0[2];

#line 151 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_stable_0[2];

#line 154 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_stable_0[2];

#line 157 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0_10001(
#line 160 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 162 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 164 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
#line 166 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4);

#line 169 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0_10001(
#line 172 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 174 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 176 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
#line 178 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4,
#line 180 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_5);

#line 183 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0_10001(
#line 186 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 188 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 190 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3);

#line 193 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0_10001(
#line 196 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 198 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 200 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
#line 202 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4);

#line 205 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0_10001(
#line 208 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 210 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2);

#line 213 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0_10001(
#line 216 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 218 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 220 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3);

#line 223 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0_10001(
#line 226 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 228 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2);

#line 231 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0_10001(
#line 234 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 236 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 238 "transform_hlds.ctgc.fixpoint_table.c"
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



#line 428 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_VA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__fixpoint_table____vpti_func_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 438 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 446 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2
  }
};

#line 455 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__fixpoint_table__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 463 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fixpoint_table_2_0[4] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_recursive_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__tree234__pti_tree234_2__pseudo_1__pseudo_transform_hlds__ctgc__fixpoint_table__pti_fp_entry_1__pseudo_2
};

#line 471 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fixpoint_table_2_0[4] = {
  (MR_String) "keys",
  (MR_String) "run",
  (MR_String) "recursive",
  (MR_String) "mapping"
};

#line 479 "transform_hlds.ctgc.fixpoint_table.c"
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

#line 494 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fixpoint_table_2_0[1] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0
};

#line 499 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fixpoint_table_2[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fixpoint_table_2_0
  }
};

#line 508 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fixpoint_table_2[1] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fixpoint_table_2_0
};

#line 513 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fixpoint_table_2[1] = {
  (MR_Integer) 0
};

#line 518 "transform_hlds.ctgc.fixpoint_table.c"
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

#line 539 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_types_fp_entry_1_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_is_stable_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 545 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_ConstString transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__field_names_fp_entry_1_0[2] = {
  (MR_String) "entry_stable",
  (MR_String) "entry_elem"
};

#line 551 "transform_hlds.ctgc.fixpoint_table.c"
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

#line 566 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fp_entry_1_0[1] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0
};

#line 571 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuPtagLayout transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_ptag_ordered_fp_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_stag_ordered_fp_entry_1_0
  }
};

#line 580 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_name_ordered_fp_entry_1[1] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__du_functor_desc_fp_entry_1_0
};

#line 585 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_fp_entry_1[1] = {
  (MR_Integer) 0
};

#line 590 "transform_hlds.ctgc.fixpoint_table.c"
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

#line 611 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0 = {
  (MR_String) "is_recursive",
  (MR_Integer) 0
};

#line 617 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1 = {
  (MR_String) "is_not_recursive",
  (MR_Integer) 1
};

#line 623 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_recursive_0[2] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0,
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1
};

#line 629 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_recursive_0[2] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_1,
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_recursive_0_0
};

#line 635 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_recursive_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 641 "transform_hlds.ctgc.fixpoint_table.c"
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

#line 662 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0 = {
  (MR_String) "is_stable",
  (MR_Integer) 0
};

#line 668 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDesc transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1 = {
  (MR_String) "is_unstable",
  (MR_Integer) 1
};

#line 674 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_value_ordered_is_stable_0[2] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0,
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1
};

#line 680 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_EnumFunctorDescPtr transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_name_ordered_is_stable_0[2] = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_0,
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__enum_functor_desc_is_stable_0_1
};

#line 686 "transform_hlds.ctgc.fixpoint_table.c"
static const MR_Integer transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__functor_number_map_is_stable_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 692 "transform_hlds.ctgc.fixpoint_table.c"
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

#line 713 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0_10001(
#line 716 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 718 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 720 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
#line 722 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4)
#line 724 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 726 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 728 "transform_hlds.ctgc.fixpoint_table.c"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

#line 731 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 733 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table____Unify____fixpoint_table_2_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_4));
    }
#line 736 "transform_hlds.ctgc.fixpoint_table.c"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 738 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 740 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 743 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0_10001(
#line 746 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 748 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 750 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
#line 752 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4,
#line 754 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_5)
#line 756 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 758 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 760 "transform_hlds.ctgc.fixpoint_table.c"
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1;

#line 763 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 765 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table____Compare____fixpoint_table_2_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), &transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_4), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_5));
    }
#line 768 "transform_hlds.ctgc.fixpoint_table.c"
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1));
#line 770 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 772 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 775 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0_10001(
#line 778 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 780 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 782 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3)
#line 784 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 786 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 788 "transform_hlds.ctgc.fixpoint_table.c"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

#line 791 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 793 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table____Unify____fp_entry_1_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3));
    }
#line 796 "transform_hlds.ctgc.fixpoint_table.c"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 798 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 800 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 803 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0_10001(
#line 806 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 808 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 810 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3,
#line 812 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_4)
#line 814 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 816 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 818 "transform_hlds.ctgc.fixpoint_table.c"
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1;

#line 821 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 823 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table____Compare____fp_entry_1_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), &transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_4));
    }
#line 826 "transform_hlds.ctgc.fixpoint_table.c"
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1));
#line 828 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 830 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 833 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0_10001(
#line 836 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 838 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2)
#line 840 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 842 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 844 "transform_hlds.ctgc.fixpoint_table.c"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

#line 847 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 849 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table____Unify____is_recursive_0_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2));
    }
#line 852 "transform_hlds.ctgc.fixpoint_table.c"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 854 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 856 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 859 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0_10001(
#line 862 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 864 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 866 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3)
#line 868 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 870 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 872 "transform_hlds.ctgc.fixpoint_table.c"
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1;

#line 875 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 877 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table____Compare____is_recursive_0_0(&transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3));
    }
#line 880 "transform_hlds.ctgc.fixpoint_table.c"
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1));
#line 882 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 884 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 887 "transform_hlds.ctgc.fixpoint_table.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0_10001(
#line 890 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 892 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2)
#line 894 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 896 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 898 "transform_hlds.ctgc.fixpoint_table.c"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded;

#line 901 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 903 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__succeeded = transform_hlds__ctgc__fixpoint_table____Unify____is_stable_0_0(((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2));
    }
#line 906 "transform_hlds.ctgc.fixpoint_table.c"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 908 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 910 "transform_hlds.ctgc.fixpoint_table.c"
}

#line 913 "transform_hlds.ctgc.fixpoint_table.c"
static void MR_CALL 
transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0_10001(
#line 916 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box * transform_hlds__ctgc__fixpoint_table__wrapper_arg_1,
#line 918 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_2,
#line 920 "transform_hlds.ctgc.fixpoint_table.c"
  MR_Box transform_hlds__ctgc__fixpoint_table__wrapper_arg_3)
#line 922 "transform_hlds.ctgc.fixpoint_table.c"
{
#line 924 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 926 "transform_hlds.ctgc.fixpoint_table.c"
    MR_Word transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1;

#line 929 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 931 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table____Compare____is_stable_0_0(&transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__fixpoint_table__wrapper_arg_3));
    }
#line 934 "transform_hlds.ctgc.fixpoint_table.c"
    *transform_hlds__ctgc__fixpoint_table__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__conv0_HeadVar__1_1));
#line 936 "transform_hlds.ctgc.fixpoint_table.c"
  }
#line 938 "transform_hlds.ctgc.fixpoint_table.c"
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
#line 1028 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 1030 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1032 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_27_27, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
#line 1034 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_27_27, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_25));
#line 1036 "transform_hlds.ctgc.fixpoint_table.c"
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
#line 1091 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 1093 "transform_hlds.ctgc.fixpoint_table.c"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__HeadVar__2_1 == transform_hlds__ctgc__fixpoint_table__HeadVar__2_2);

#line 1096 "transform_hlds.ctgc.fixpoint_table.c"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 1098 "transform_hlds.ctgc.fixpoint_table.c"
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
#line 1144 "transform_hlds.ctgc.fixpoint_table.c"
  {
#line 1146 "transform_hlds.ctgc.fixpoint_table.c"
    MR_bool transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__HeadVar__2_1 == transform_hlds__ctgc__fixpoint_table__HeadVar__2_2);

#line 1149 "transform_hlds.ctgc.fixpoint_table.c"
    return transform_hlds__ctgc__fixpoint_table__succeeded;
#line 1151 "transform_hlds.ctgc.fixpoint_table.c"
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
#line 1182 "transform_hlds.ctgc.fixpoint_table.c"
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
#line 1208 "transform_hlds.ctgc.fixpoint_table.c"
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

#line 1271 "transform_hlds.ctgc.fixpoint_table.c"
        transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_3_3 == transform_hlds__ctgc__fixpoint_table__V_5_5);
#line 107 "ctgc.fixpoint_table.m"
        if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 1275 "transform_hlds.ctgc.fixpoint_table.c"
          {
#line 1277 "transform_hlds.ctgc.fixpoint_table.c"
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
#line 1317 "transform_hlds.ctgc.fixpoint_table.c"
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
#line 1347 "transform_hlds.ctgc.fixpoint_table.c"
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
#line 1367 "transform_hlds.ctgc.fixpoint_table.c"
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
#line 1391 "transform_hlds.ctgc.fixpoint_table.c"
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

#line 1406 "transform_hlds.ctgc.fixpoint_table.c"
                    {
#line 1408 "transform_hlds.ctgc.fixpoint_table.c"
                      transform_hlds__ctgc__fixpoint_table__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1410 "transform_hlds.ctgc.fixpoint_table.c"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_24_24, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
#line 1412 "transform_hlds.ctgc.fixpoint_table.c"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_24_24, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_18));
#line 1414 "transform_hlds.ctgc.fixpoint_table.c"
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

#line 1489 "transform_hlds.ctgc.fixpoint_table.c"
        {
#line 1491 "transform_hlds.ctgc.fixpoint_table.c"
          transform_hlds__ctgc__fixpoint_table__succeeded = mercury__list____Unify____list_1_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_13, transform_hlds__ctgc__fixpoint_table__V_3_3, transform_hlds__ctgc__fixpoint_table__V_7_7);
        }
#line 99 "ctgc.fixpoint_table.m"
        if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 99 "ctgc.fixpoint_table.m"
          {
#line 1498 "transform_hlds.ctgc.fixpoint_table.c"
            transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_4_4 == transform_hlds__ctgc__fixpoint_table__V_8_8);
#line 99 "ctgc.fixpoint_table.m"
            if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 99 "ctgc.fixpoint_table.m"
              {
#line 1504 "transform_hlds.ctgc.fixpoint_table.c"
                transform_hlds__ctgc__fixpoint_table__succeeded = (transform_hlds__ctgc__fixpoint_table__V_5_5 == transform_hlds__ctgc__fixpoint_table__V_9_9);
#line 99 "ctgc.fixpoint_table.m"
                if (transform_hlds__ctgc__fixpoint_table__succeeded)
#line 99 "ctgc.fixpoint_table.m"
                  {
#line 1510 "transform_hlds.ctgc.fixpoint_table.c"
                    transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_17_17 = (MR_Word) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1;
#line 1512 "transform_hlds.ctgc.fixpoint_table.c"
                    {
#line 1514 "transform_hlds.ctgc.fixpoint_table.c"
                      transform_hlds__ctgc__fixpoint_table__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1516 "transform_hlds.ctgc.fixpoint_table.c"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_18_18, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_17_17));
#line 1518 "transform_hlds.ctgc.fixpoint_table.c"
                      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_18_18, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_14));
#line 1520 "transform_hlds.ctgc.fixpoint_table.c"
                    }
#line 1522 "transform_hlds.ctgc.fixpoint_table.c"
                    {
#line 1524 "transform_hlds.ctgc.fixpoint_table.c"
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

#line 1612 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 1614 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1616 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_16_16, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
#line 1618 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_16_16, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_14));
#line 1620 "transform_hlds.ctgc.fixpoint_table.c"
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

#line 1694 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 1696 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__TypeInfo_16_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1698 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_16_23, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
#line 1700 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_16_23, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_12));
#line 1702 "transform_hlds.ctgc.fixpoint_table.c"
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
#line 1828 "transform_hlds.ctgc.fixpoint_table.c"
        transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_28_28 = (MR_Word) &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1;
#line 1830 "transform_hlds.ctgc.fixpoint_table.c"
        {
#line 1832 "transform_hlds.ctgc.fixpoint_table.c"
          transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1834 "transform_hlds.ctgc.fixpoint_table.c"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29, 0) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeCtorInfo_28_28));
#line 1836 "transform_hlds.ctgc.fixpoint_table.c"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_27));
#line 1838 "transform_hlds.ctgc.fixpoint_table.c"
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

#line 1950 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 1952 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1954 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
#line 1956 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_30_30, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_27));
#line 1958 "transform_hlds.ctgc.fixpoint_table.c"
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
#line 168 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__HeadVar__2_2 = (MR_String) "stable";
#line 166 "ctgc.fixpoint_table.m"
    else
#line 170 "ctgc.fixpoint_table.m"
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
#line 2196 "transform_hlds.ctgc.fixpoint_table.c"
        {
#line 2198 "transform_hlds.ctgc.fixpoint_table.c"
          transform_hlds__ctgc__fixpoint_table__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2200 "transform_hlds.ctgc.fixpoint_table.c"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_21_21, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
#line 2202 "transform_hlds.ctgc.fixpoint_table.c"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_21_21, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_15));
#line 2204 "transform_hlds.ctgc.fixpoint_table.c"
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
#line 2392 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 2394 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2396 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29, 0) = ((MR_Box) (&transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fp_entry_1));
#line 2398 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_E_25));
#line 2400 "transform_hlds.ctgc.fixpoint_table.c"
    }
#line 134 "ctgc.fixpoint_table.m"
    {
#line 134 "ctgc.fixpoint_table.m"
      transform_hlds__ctgc__fixpoint_table__conv1_V_19_19 = mercury__map__init_0_f_0(transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24, transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29);
    }
#line 134 "ctgc.fixpoint_table.m"
    transform_hlds__ctgc__fixpoint_table__V_19_19 = (MR_Word) transform_hlds__ctgc__fixpoint_table__conv1_V_19_19;
#line 2409 "transform_hlds.ctgc.fixpoint_table.c"
    {
#line 2411 "transform_hlds.ctgc.fixpoint_table.c"
      transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2413 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 2415 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31, 1) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_for_K_24));
#line 2417 "transform_hlds.ctgc.fixpoint_table.c"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__fixpoint_table__TypeInfo_31_31, 2) = ((MR_Box) (transform_hlds__ctgc__fixpoint_table__TypeInfo_29_29));
#line 2419 "transform_hlds.ctgc.fixpoint_table.c"
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
