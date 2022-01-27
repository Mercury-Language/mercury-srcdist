/*
** Automatically generated from `eqvclass.m'
** by the Mercury compiler,
** version 14.01-beta-2014-01-02, configured for x86_64-apple-darwin12.5.0.
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


/* :- module eqvclass. */
/* :- implementation. */

/*
INIT mercury__eqvclass__init
ENDINIT
*/

#include "eqvclass.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"




#line 87 "eqvclass.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__eqvclass____vpti_func_2__pseudo_1__pseudo_2;

#line 90 "eqvclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__eqvclass__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 93 "eqvclass.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 96 "eqvclass.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0;

#line 99 "eqvclass.c"
static const MR_PseudoTypeInfo mercury__eqvclass__eqvclass__field_types_eqvclass_1_0[3];

#line 102 "eqvclass.c"
static const MR_ConstString mercury__eqvclass__eqvclass__field_names_eqvclass_1_0[3];

#line 105 "eqvclass.c"
static const MR_DuFunctorDesc mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0;

#line 108 "eqvclass.c"
static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_stag_ordered_eqvclass_1_0[1];

#line 111 "eqvclass.c"
static const MR_DuPtagLayout mercury__eqvclass__eqvclass__du_ptag_ordered_eqvclass_1[1];

#line 114 "eqvclass.c"
static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_name_ordered_eqvclass_1[1];

#line 117 "eqvclass.c"
static const MR_Integer mercury__eqvclass__eqvclass__functor_number_map_eqvclass_1[1];

#line 120 "eqvclass.c"
static MR_bool MR_CALL 
mercury__eqvclass____Unify____eqvclass_1_0_10001(
#line 123 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 125 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_2,
#line 127 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_3);

#line 130 "eqvclass.c"
static void MR_CALL 
mercury__eqvclass____Compare____eqvclass_1_0_10001(
#line 133 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 135 "eqvclass.c"
  MR_Box * mercury__eqvclass__wrapper_arg_2,
#line 137 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_3,
#line 139 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_4);

#line 142 "eqvclass.c"
static MR_bool MR_CALL 
mercury__eqvclass____Unify____partition_id_0_0_10001(
#line 145 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 147 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_2);

#line 150 "eqvclass.c"
static void MR_CALL 
mercury__eqvclass____Compare____partition_id_0_0_10001(
#line 153 "eqvclass.c"
  MR_Box * mercury__eqvclass__wrapper_arg_1,
#line 155 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_2,
#line 157 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_3);

#line 202 "list.int"
static void MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__list_0(
#line 202 "list.int"
  MR_Word mercury__eqvclass__V_51_51,
#line 202 "list.int"
  MR_Word mercury__eqvclass__V_52_52,
#line 202 "list.int"
  MR_Word mercury__eqvclass__V_53_53,
#line 202 "list.int"
  MR_Integer mercury__eqvclass__V_54_54,
#line 202 "list.int"
  MR_Word mercury__eqvclass__HeadVar__2_2,
#line 202 "list.int"
  MR_Word mercury__eqvclass__HeadVar__3_3,
#line 202 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__4_4,
#line 202 "list.int"
  MR_Word mercury__eqvclass__HeadVar__5_5,
#line 202 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__6_6,
#line 202 "list.int"
  MR_Word mercury__eqvclass__HeadVar__7_7,
#line 202 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__8_8,
#line 202 "list.int"
  MR_Word mercury__eqvclass__HeadVar__9_9,
#line 202 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__10_10);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 469 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__make_partition_4_p_0(
#line 469 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_17,
#line 469 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 469 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__2_2,
#line 469 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3,
#line 469 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_ElementMap_4);

#line 385 "eqvclass.m"
static MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_list_2_3_p_0(
#line 385 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
#line 385 "eqvclass.m"
  MR_Word mercury__eqvclass__ElementMap_1,
#line 385 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__2_2,
#line 385 "eqvclass.m"
  MR_Integer mercury__eqvclass__Id_3);

#line 365 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__change_partition_4_p_0(
#line 365 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_17,
#line 365 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 365 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__2_2,
#line 365 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3,
#line 365 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_ElementMap_4);

#line 342 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__add_equivalence_4_p_0(
#line 342 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_24,
#line 342 "eqvclass.m"
  MR_Integer mercury__eqvclass__IdA_5,
#line 342 "eqvclass.m"
  MR_Integer mercury__eqvclass__IdB_6,
#line 342 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_7,
#line 342 "eqvclass.m"
  MR_Word * mercury__eqvclass__EqvClass_8);

#line 503 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_f_0_1(
#line 503 "eqvclass.m"
  MR_Box mercury__eqvclass__closure_arg,
#line 503 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 503 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_2,
#line 503 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_3,
#line 503 "eqvclass.m"
  MR_Box * mercury__eqvclass__wrapper_arg_4,
#line 503 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_5,
#line 503 "eqvclass.m"
  MR_Box * mercury__eqvclass__wrapper_arg_6,
#line 503 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_7,
#line 503 "eqvclass.m"
  MR_Box * mercury__eqvclass__wrapper_arg_8);


static /* final */ const MR_Box mercury__eqvclass_scalar_common_1[2][3];

static /* final */ const MR_Box mercury__eqvclass_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__eqvclass_scalar_common_3[2][5];

static /* final */ const MR_Integer mercury__eqvclass_scalar_common_4[1][3];

static /* final */ const MR_Box mercury__eqvclass_scalar_common_5[1][14];




static /* final */ const MR_Box mercury__eqvclass_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__eqvclass_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__eqvclass_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__eqvclass_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__eqvclass_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__eqvclass_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__eqvclass_scalar_common_4[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box mercury__eqvclass_scalar_common_5[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__eqvclass_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__eqvclass____vpti_func_2__pseudo_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__eqvclass__set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (&mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (&mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0))
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
#include "builtin.mh"
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
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
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
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "char.mh"
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
#include "construct.mh"
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
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "private_builtin.mh"
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
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 671 "eqvclass.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__eqvclass____vpti_func_2__pseudo_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 681 "eqvclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__eqvclass__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 689 "eqvclass.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__eqvclass__set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

#line 698 "eqvclass.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 707 "eqvclass.c"
static const MR_PseudoTypeInfo mercury__eqvclass__eqvclass__field_types_eqvclass_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__eqvclass__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__eqvclass__tree234__pti_tree234_2__pseudo_1__plain_builtin__type_ctor_info_int_0
};

#line 714 "eqvclass.c"
static const MR_ConstString mercury__eqvclass__eqvclass__field_names_eqvclass_1_0[3] = {
  (MR_String) "next_id",
  (MR_String) "partitions",
  (MR_String) "keys"
};

#line 721 "eqvclass.c"
static const MR_DuFunctorDesc mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0 = {
  (MR_String) "eqvclass",
  (MR_Integer) 3,
  (MR_Integer) 6,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__eqvclass__eqvclass__field_types_eqvclass_1_0,
  mercury__eqvclass__eqvclass__field_names_eqvclass_1_0,
  NULL,
  NULL
};

#line 736 "eqvclass.c"
static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_stag_ordered_eqvclass_1_0[1] = {
  &mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0
};

#line 741 "eqvclass.c"
static const MR_DuPtagLayout mercury__eqvclass__eqvclass__du_ptag_ordered_eqvclass_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__eqvclass__eqvclass__du_stag_ordered_eqvclass_1_0
  }
};

#line 750 "eqvclass.c"
static const MR_DuFunctorDescPtr mercury__eqvclass__eqvclass__du_name_ordered_eqvclass_1[1] = {
  &mercury__eqvclass__eqvclass__du_functor_desc_eqvclass_1_0
};

#line 755 "eqvclass.c"
static const MR_Integer mercury__eqvclass__eqvclass__functor_number_map_eqvclass_1[1] = {
  (MR_Integer) 0
};

#line 760 "eqvclass.c"
const MR_TypeCtorInfo_Struct mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__eqvclass____Unify____eqvclass_1_0_10001)),
  ((MR_Box) (mercury__eqvclass____Compare____eqvclass_1_0_10001)),
  (MR_String) "eqvclass",
  (MR_String) "eqvclass",
  {
    mercury__eqvclass__eqvclass__du_name_ordered_eqvclass_1
  },
  {
    mercury__eqvclass__eqvclass__du_ptag_ordered_eqvclass_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__eqvclass__eqvclass__functor_number_map_eqvclass_1
};

#line 781 "eqvclass.c"
const MR_TypeCtorInfo_Struct mercury__eqvclass__eqvclass__type_ctor_info_partition_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__eqvclass____Unify____partition_id_0_0_10001)),
  ((MR_Box) (mercury__eqvclass____Compare____partition_id_0_0_10001)),
  (MR_String) "eqvclass",
  (MR_String) "partition_id",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 802 "eqvclass.c"
static MR_bool MR_CALL 
mercury__eqvclass____Unify____eqvclass_1_0_10001(
#line 805 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 807 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_2,
#line 809 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_3)
#line 811 "eqvclass.c"
{
#line 813 "eqvclass.c"
  {
#line 815 "eqvclass.c"
    MR_bool mercury__eqvclass__succeeded;

#line 818 "eqvclass.c"
    {
#line 820 "eqvclass.c"
      mercury__eqvclass__succeeded = mercury__eqvclass____Unify____eqvclass_1_0(((MR_Word) mercury__eqvclass__wrapper_arg_1), ((MR_Word) mercury__eqvclass__wrapper_arg_2), ((MR_Word) mercury__eqvclass__wrapper_arg_3));
    }
#line 823 "eqvclass.c"
    return mercury__eqvclass__succeeded;
#line 825 "eqvclass.c"
  }
#line 827 "eqvclass.c"
}

#line 830 "eqvclass.c"
static void MR_CALL 
mercury__eqvclass____Compare____eqvclass_1_0_10001(
#line 833 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 835 "eqvclass.c"
  MR_Box * mercury__eqvclass__wrapper_arg_2,
#line 837 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_3,
#line 839 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_4)
#line 841 "eqvclass.c"
{
#line 843 "eqvclass.c"
  {
#line 845 "eqvclass.c"
    MR_Word mercury__eqvclass__conv0_HeadVar__1_1;

#line 848 "eqvclass.c"
    {
#line 850 "eqvclass.c"
      mercury__eqvclass____Compare____eqvclass_1_0(((MR_Word) mercury__eqvclass__wrapper_arg_1), &mercury__eqvclass__conv0_HeadVar__1_1, ((MR_Word) mercury__eqvclass__wrapper_arg_3), ((MR_Word) mercury__eqvclass__wrapper_arg_4));
    }
#line 853 "eqvclass.c"
    *mercury__eqvclass__wrapper_arg_2 = ((MR_Box) (mercury__eqvclass__conv0_HeadVar__1_1));
#line 855 "eqvclass.c"
  }
#line 857 "eqvclass.c"
}

#line 860 "eqvclass.c"
static MR_bool MR_CALL 
mercury__eqvclass____Unify____partition_id_0_0_10001(
#line 863 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 865 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_2)
#line 867 "eqvclass.c"
{
#line 869 "eqvclass.c"
  {
#line 871 "eqvclass.c"
    MR_bool mercury__eqvclass__succeeded;

#line 874 "eqvclass.c"
    {
#line 876 "eqvclass.c"
      mercury__eqvclass__succeeded = mercury__eqvclass____Unify____partition_id_0_0(((MR_Integer) mercury__eqvclass__wrapper_arg_1), ((MR_Integer) mercury__eqvclass__wrapper_arg_2));
    }
#line 879 "eqvclass.c"
    return mercury__eqvclass__succeeded;
#line 881 "eqvclass.c"
  }
#line 883 "eqvclass.c"
}

#line 886 "eqvclass.c"
static void MR_CALL 
mercury__eqvclass____Compare____partition_id_0_0_10001(
#line 889 "eqvclass.c"
  MR_Box * mercury__eqvclass__wrapper_arg_1,
#line 891 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_2,
#line 893 "eqvclass.c"
  MR_Box mercury__eqvclass__wrapper_arg_3)
#line 895 "eqvclass.c"
{
#line 897 "eqvclass.c"
  {
#line 899 "eqvclass.c"
    MR_Word mercury__eqvclass__conv0_HeadVar__1_1;

#line 902 "eqvclass.c"
    {
#line 904 "eqvclass.c"
      mercury__eqvclass____Compare____partition_id_0_0(&mercury__eqvclass__conv0_HeadVar__1_1, ((MR_Integer) mercury__eqvclass__wrapper_arg_2), ((MR_Integer) mercury__eqvclass__wrapper_arg_3));
    }
#line 907 "eqvclass.c"
    *mercury__eqvclass__wrapper_arg_1 = ((MR_Box) (mercury__eqvclass__conv0_HeadVar__1_1));
#line 909 "eqvclass.c"
  }
#line 911 "eqvclass.c"
}

#line 202 "list.int"
static void MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__list_0(
#line 202 "list.int"
  MR_Word mercury__eqvclass__V_51_51,
#line 202 "list.int"
  MR_Word mercury__eqvclass__V_52_52,
#line 202 "list.int"
  MR_Word mercury__eqvclass__V_53_53,
#line 202 "list.int"
  MR_Integer mercury__eqvclass__V_54_54,
#line 202 "list.int"
  MR_Word mercury__eqvclass__HeadVar__2_2,
#line 202 "list.int"
  MR_Word mercury__eqvclass__HeadVar__3_3,
#line 202 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__4_4,
#line 202 "list.int"
  MR_Word mercury__eqvclass__HeadVar__5_5,
#line 202 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__6_6,
#line 202 "list.int"
  MR_Word mercury__eqvclass__HeadVar__7_7,
#line 202 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__8_8,
#line 202 "list.int"
  MR_Word mercury__eqvclass__HeadVar__9_9,
#line 202 "list.int"
  MR_Word * mercury__eqvclass__HeadVar__10_10)
#line 202 "list.int"
{
#line 361 "list.opt"
  while (MR_TRUE)
#line 361 "list.opt"
    {
#line 361 "list.opt"
      /* tailcall optimized into a loop */
#line 361 "list.opt"
      {
#line 361 "list.opt"
        MR_bool mercury__eqvclass__succeeded;

#line 361 "list.opt"
        if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "list.opt"
          {
#line 361 "list.opt"
            *mercury__eqvclass__HeadVar__10_10 = mercury__eqvclass__HeadVar__9_9;
#line 361 "list.opt"
            *mercury__eqvclass__HeadVar__8_8 = mercury__eqvclass__HeadVar__7_7;
#line 361 "list.opt"
            *mercury__eqvclass__HeadVar__6_6 = mercury__eqvclass__HeadVar__5_5;
#line 361 "list.opt"
            *mercury__eqvclass__HeadVar__4_4 = mercury__eqvclass__HeadVar__3_3;
#line 361 "list.opt"
          }
#line 361 "list.opt"
        else
#line 366 "list.opt"
          {
#line 366 "list.opt"
            MR_Box mercury__eqvclass__H_25_21 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0));
#line 366 "list.opt"
            MR_Word mercury__eqvclass__T_26_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
#line 366 "list.opt"
            MR_Word mercury__eqvclass__STATE_VARIABLE_A_39_39_31;
#line 366 "list.opt"
            MR_Word mercury__eqvclass__STATE_VARIABLE_B_40_40_32;
#line 366 "list.opt"
            MR_Word mercury__eqvclass__STATE_VARIABLE_C_41_41_33;
#line 366 "list.opt"
            MR_Word mercury__eqvclass__STATE_VARIABLE_D_42_42_34;

#line 367 "list.opt"
            {
#line 367 "list.opt"
              mercury__eqvclass__divide_equivalence_classes_3_11_p_0(mercury__eqvclass__V_51_51, mercury__eqvclass__V_52_52, mercury__eqvclass__V_53_53, mercury__eqvclass__V_54_54, mercury__eqvclass__H_25_21, mercury__eqvclass__HeadVar__3_3, &mercury__eqvclass__STATE_VARIABLE_A_39_39_31, mercury__eqvclass__HeadVar__5_5, &mercury__eqvclass__STATE_VARIABLE_B_40_40_32, mercury__eqvclass__HeadVar__7_7, &mercury__eqvclass__STATE_VARIABLE_C_41_41_33, mercury__eqvclass__HeadVar__9_9, &mercury__eqvclass__STATE_VARIABLE_D_42_42_34);
            }
#line 368 "list.opt"
            /* direct tailcall eliminated */
#line 368 "list.opt"
            {
#line 368 "list.opt"
              MR_Word mercury__eqvclass__HeadVar__2__tmp_copy_2 = mercury__eqvclass__T_26_22;
#line 368 "list.opt"
              MR_Word mercury__eqvclass__HeadVar__3__tmp_copy_3 = mercury__eqvclass__STATE_VARIABLE_A_39_39_31;
#line 368 "list.opt"
              MR_Word mercury__eqvclass__HeadVar__5__tmp_copy_5 = mercury__eqvclass__STATE_VARIABLE_B_40_40_32;
#line 368 "list.opt"
              MR_Word mercury__eqvclass__HeadVar__7__tmp_copy_7 = mercury__eqvclass__STATE_VARIABLE_C_41_41_33;
#line 368 "list.opt"
              MR_Word mercury__eqvclass__HeadVar__9__tmp_copy_9 = mercury__eqvclass__STATE_VARIABLE_D_42_42_34;

#line 368 "list.opt"
              mercury__eqvclass__HeadVar__9_9 = mercury__eqvclass__HeadVar__9__tmp_copy_9;
#line 368 "list.opt"
              mercury__eqvclass__HeadVar__7_7 = mercury__eqvclass__HeadVar__7__tmp_copy_7;
#line 368 "list.opt"
              mercury__eqvclass__HeadVar__5_5 = mercury__eqvclass__HeadVar__5__tmp_copy_5;
#line 368 "list.opt"
              mercury__eqvclass__HeadVar__3_3 = mercury__eqvclass__HeadVar__3__tmp_copy_3;
#line 368 "list.opt"
              mercury__eqvclass__HeadVar__2_2 = mercury__eqvclass__HeadVar__2__tmp_copy_2;
#line 368 "list.opt"
            }
#line 368 "list.opt"
            continue;
#line 366 "list.opt"
          }
#line 361 "list.opt"
      }
#line 361 "list.opt"
      break;
#line 361 "list.opt"
    }
#line 202 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__eqvclass__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 173 "eqvclass.m"
void MR_CALL 
mercury__eqvclass____Compare____partition_id_0_0(
#line 173 "eqvclass.m"
  MR_Word * mercury__eqvclass__HeadVar__1_1,
#line 173 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__2_2,
#line 173 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__3_3)
#line 173 "eqvclass.m"
{
#line 173 "eqvclass.m"
  {
#line 173 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 173 "eqvclass.m"
    MR_Integer mercury__eqvclass__Cast_HeadVar1_4 = mercury__eqvclass__HeadVar__2_2;
#line 173 "eqvclass.m"
    MR_Integer mercury__eqvclass__Cast_HeadVar2_5 = mercury__eqvclass__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__eqvclass__succeeded = (mercury__eqvclass__Cast_HeadVar1_4 < mercury__eqvclass__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__eqvclass__succeeded)
#line 68 "private_builtin.opt"
      *mercury__eqvclass__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__eqvclass__succeeded = (mercury__eqvclass__Cast_HeadVar1_4 == mercury__eqvclass__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__eqvclass__succeeded)
#line 73 "private_builtin.opt"
          *mercury__eqvclass__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__eqvclass__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 173 "eqvclass.m"
  }
#line 173 "eqvclass.m"
}

#line 173 "eqvclass.m"
MR_bool MR_CALL 
mercury__eqvclass____Unify____partition_id_0_0(
#line 173 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__1_1,
#line 173 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__2_2)
#line 173 "eqvclass.m"
{
#line 173 "eqvclass.m"
  {
#line 173 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 173 "eqvclass.m"
    MR_Integer mercury__eqvclass__Cast_HeadVar1_3 = mercury__eqvclass__HeadVar__1_1;
#line 173 "eqvclass.m"
    MR_Integer mercury__eqvclass__Cast_HeadVar2_4 = mercury__eqvclass__HeadVar__2_2;

#line 173 "eqvclass.m"
    mercury__eqvclass__succeeded = (mercury__eqvclass__Cast_HeadVar1_3 == mercury__eqvclass__Cast_HeadVar2_4);
#line 173 "eqvclass.m"
    return mercury__eqvclass__succeeded;
#line 173 "eqvclass.m"
  }
#line 173 "eqvclass.m"
}

#line 166 "eqvclass.m"
void MR_CALL 
mercury__eqvclass____Compare____eqvclass_1_0(
#line 166 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_14,
#line 166 "eqvclass.m"
  MR_Word * mercury__eqvclass__HeadVar__1_1,
#line 166 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__2_2,
#line 166 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__3_3)
#line 166 "eqvclass.m"
{
#line 166 "eqvclass.m"
  {
#line 166 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 166 "eqvclass.m"
    MR_Integer mercury__eqvclass__CastX_12 = (MR_Integer) mercury__eqvclass__HeadVar__2_2;
#line 166 "eqvclass.m"
    MR_Integer mercury__eqvclass__CastY_13 = (MR_Integer) mercury__eqvclass__HeadVar__3_3;

#line 166 "eqvclass.m"
    mercury__eqvclass__succeeded = (mercury__eqvclass__CastX_12 == mercury__eqvclass__CastY_13);
#line 166 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 1149 "eqvclass.c"
      *mercury__eqvclass__HeadVar__1_1 = (MR_Integer) 0;
#line 166 "eqvclass.m"
    else
#line 166 "eqvclass.m"
      {
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0)));
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 2)));
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, (MR_Integer) 0)));
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, (MR_Integer) 1)));
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, (MR_Integer) 2)));
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__V_10_10;
#line 166 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_24_24 = (MR_Integer) mercury__eqvclass__V_4_4;
#line 166 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_25_25 = (MR_Integer) mercury__eqvclass__V_7_7;

#line 66 "private_builtin.opt"
        mercury__eqvclass__succeeded = (mercury__eqvclass__V_24_24 < mercury__eqvclass__V_25_25);
#line 69 "private_builtin.opt"
        if (mercury__eqvclass__succeeded)
#line 68 "private_builtin.opt"
          mercury__eqvclass__V_10_10 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__eqvclass__succeeded = (mercury__eqvclass__V_24_24 == mercury__eqvclass__V_25_25);
#line 74 "private_builtin.opt"
            if (mercury__eqvclass__succeeded)
#line 73 "private_builtin.opt"
              mercury__eqvclass__V_10_10 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__eqvclass__V_10_10 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 1196 "eqvclass.c"
        mercury__eqvclass__succeeded = (mercury__eqvclass__V_10_10 == (MR_Integer) 0);
#line 166 "eqvclass.m"
        mercury__eqvclass__succeeded = !(mercury__eqvclass__succeeded);
#line 166 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 166 "eqvclass.m"
          *mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__V_10_10;
#line 166 "eqvclass.m"
        else
#line 166 "eqvclass.m"
          {
#line 166 "eqvclass.m"
            MR_Word mercury__eqvclass__V_11_11;
#line 166 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 166 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_17_17 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 166 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_18_18;

#line 1217 "eqvclass.c"
            {
#line 1219 "eqvclass.c"
              mercury__eqvclass__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_18_18, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_17_17));
#line 1223 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_18_18, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_14));
#line 1225 "eqvclass.c"
            }
#line 166 "eqvclass.m"
            {
#line 166 "eqvclass.m"
              mercury__tree234____Compare____tree234_2_0(mercury__eqvclass__TypeCtorInfo_16_16, mercury__eqvclass__TypeInfo_18_18, &mercury__eqvclass__V_11_11, mercury__eqvclass__V_5_5, mercury__eqvclass__V_8_8);
            }
#line 1232 "eqvclass.c"
            mercury__eqvclass__succeeded = (mercury__eqvclass__V_11_11 == (MR_Integer) 0);
#line 166 "eqvclass.m"
            mercury__eqvclass__succeeded = !(mercury__eqvclass__succeeded);
#line 166 "eqvclass.m"
            if (mercury__eqvclass__succeeded)
#line 166 "eqvclass.m"
              *mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__V_11_11;
#line 166 "eqvclass.m"
            else
#line 166 "eqvclass.m"
              {
#line 166 "eqvclass.m"
                MR_Word mercury__eqvclass__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 166 "eqvclass.m"
                {
#line 166 "eqvclass.m"
                  mercury__tree234____Compare____tree234_2_0(mercury__eqvclass__TypeInfo_for_T_14, mercury__eqvclass__TypeCtorInfo_21_21, mercury__eqvclass__HeadVar__1_1, mercury__eqvclass__V_6_6, mercury__eqvclass__V_9_9);
#line 166 "eqvclass.m"
                  return;
                }
#line 166 "eqvclass.m"
              }
#line 166 "eqvclass.m"
          }
#line 166 "eqvclass.m"
      }
#line 166 "eqvclass.m"
  }
#line 166 "eqvclass.m"
}

#line 166 "eqvclass.m"
MR_bool MR_CALL 
mercury__eqvclass____Unify____eqvclass_1_0(
#line 166 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_11,
#line 166 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 166 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__2_2)
#line 166 "eqvclass.m"
{
#line 166 "eqvclass.m"
  {
#line 166 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 166 "eqvclass.m"
    MR_Integer mercury__eqvclass__CastX_9 = (MR_Integer) mercury__eqvclass__HeadVar__1_1;
#line 166 "eqvclass.m"
    MR_Integer mercury__eqvclass__CastY_10 = (MR_Integer) mercury__eqvclass__HeadVar__2_2;

#line 166 "eqvclass.m"
    mercury__eqvclass__succeeded = (mercury__eqvclass__CastX_9 == mercury__eqvclass__CastY_10);
#line 166 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 166 "eqvclass.m"
      mercury__eqvclass__succeeded = MR_TRUE;
#line 166 "eqvclass.m"
    else
#line 166 "eqvclass.m"
      {
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_13_13;
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_14_14;
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeInfo_15_15;
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_18_18;
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0)));
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 2)));
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0)));
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
#line 166 "eqvclass.m"
        MR_Word mercury__eqvclass__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 2)));
#line 166 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_21_21 = (MR_Integer) mercury__eqvclass__V_3_3;
#line 166 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_22_22 = (MR_Integer) mercury__eqvclass__V_6_6;

#line 1320 "eqvclass.c"
        mercury__eqvclass__succeeded = (mercury__eqvclass__V_21_21 == mercury__eqvclass__V_22_22);
#line 166 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 166 "eqvclass.m"
          {
#line 1326 "eqvclass.c"
            mercury__eqvclass__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1328 "eqvclass.c"
            mercury__eqvclass__TypeCtorInfo_14_14 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 1330 "eqvclass.c"
            {
#line 1332 "eqvclass.c"
              mercury__eqvclass__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1334 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_15_15, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_14_14));
#line 1336 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_15_15, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_11));
#line 1338 "eqvclass.c"
            }
#line 1340 "eqvclass.c"
            {
#line 1342 "eqvclass.c"
              mercury__eqvclass__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__eqvclass__TypeCtorInfo_13_13, mercury__eqvclass__TypeInfo_15_15, mercury__eqvclass__V_4_4, mercury__eqvclass__V_7_7);
            }
#line 166 "eqvclass.m"
            if (mercury__eqvclass__succeeded)
#line 166 "eqvclass.m"
              {
#line 1349 "eqvclass.c"
                mercury__eqvclass__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1351 "eqvclass.c"
                {
#line 1353 "eqvclass.c"
                  return mercury__eqvclass__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__TypeCtorInfo_18_18, mercury__eqvclass__V_5_5, mercury__eqvclass__V_8_8);
                }
#line 166 "eqvclass.m"
              }
#line 166 "eqvclass.m"
          }
#line 166 "eqvclass.m"
      }
#line 166 "eqvclass.m"
    return mercury__eqvclass__succeeded;
#line 166 "eqvclass.m"
  }
#line 166 "eqvclass.m"
}

#line 527 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_3_11_p_0(
#line 527 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_45,
#line 527 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_U_46,
#line 527 "eqvclass.m"
  MR_Word mercury__eqvclass__F_12,
#line 527 "eqvclass.m"
  MR_Integer mercury__eqvclass__MainId_13,
#line 527 "eqvclass.m"
  MR_Box mercury__eqvclass__Item_14,
#line 527 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_Map_0_26,
#line 527 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Map_27,
#line 527 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_Counter_0_28,
#line 527 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Counter_29,
#line 527 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_Partitions_0_30,
#line 527 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Partitions_31,
#line 527 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_Keys_0_32,
#line 527 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Keys_33)
#line 527 "eqvclass.m"
{
#line 534 "eqvclass.m"
  {
#line 534 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 534 "eqvclass.m"
    MR_Box mercury__eqvclass__Value_19;
#line 535 "eqvclass.m"
    MR_Box MR_CALL (* mercury__eqvclass__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__eqvclass__F_12, (MR_Integer) 1)));
#line 550 "eqvclass.m"
    MR_Integer mercury__eqvclass__Id_20;
#line 536 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_47_47;
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv1_Id_20;

#line 535 "eqvclass.m"
    {
#line 535 "eqvclass.m"
      mercury__eqvclass__Value_19 = mercury__eqvclass__func_0(((MR_Box) mercury__eqvclass__F_12), mercury__eqvclass__Item_14);
    }
#line 1420 "eqvclass.c"
    mercury__eqvclass__TypeCtorInfo_47_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_U_46, mercury__eqvclass__TypeCtorInfo_47_47, mercury__eqvclass__STATE_VARIABLE_Map_0_26, mercury__eqvclass__Value_19, &mercury__eqvclass__conv1_Id_20);
    }
#line 39 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__eqvclass__Id_20 = ((MR_Integer) mercury__eqvclass__conv1_Id_20);
#line 39 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 550 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 539 "eqvclass.m"
      {
#line 537 "eqvclass.m"
        mercury__eqvclass__succeeded = (mercury__eqvclass__Id_20 == mercury__eqvclass__MainId_13);
#line 539 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 538 "eqvclass.m"
          {
#line 538 "eqvclass.m"
            *mercury__eqvclass__STATE_VARIABLE_Keys_33 = mercury__eqvclass__STATE_VARIABLE_Keys_0_32;
#line 538 "eqvclass.m"
            *mercury__eqvclass__STATE_VARIABLE_Partitions_31 = mercury__eqvclass__STATE_VARIABLE_Partitions_0_30;
#line 538 "eqvclass.m"
          }
#line 539 "eqvclass.m"
        else
#line 540 "eqvclass.m"
          {
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_48_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_49_49 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_50_50;
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__MainSet0_21;
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__MainSet_22;
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__Set0_23;
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__Set_24;
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__STATE_VARIABLE_Partitions_34_34;
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__V_11_66;
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__Xs_4_67;
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__Ys_5_68;
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__Set_6_69;
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__List0_5_74;
#line 540 "eqvclass.m"
            MR_Word mercury__eqvclass__List_6_75;
#line 540 "eqvclass.m"
            MR_Box mercury__eqvclass__conv2_MainSet0_21;
#line 542 "eqvclass.m"
            MR_Word mercury__eqvclass__conv3_STATE_VARIABLE_Partitions_34_34;
#line 544 "eqvclass.m"
            MR_Box mercury__eqvclass__conv4_Set0_23;
#line 546 "eqvclass.m"
            MR_Word mercury__eqvclass__conv5_STATE_VARIABLE_Partitions_31;

#line 1494 "eqvclass.c"
            {
#line 1496 "eqvclass.c"
              mercury__eqvclass__TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1498 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_50_50, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_49_49));
#line 1500 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_50_50, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_45));
#line 1502 "eqvclass.c"
            }
#line 540 "eqvclass.m"
            {
#line 540 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_50_50, (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_0_30, mercury__eqvclass__MainId_13, &mercury__eqvclass__conv2_MainSet0_21);
            }
#line 540 "eqvclass.m"
            mercury__eqvclass__MainSet0_21 = ((MR_Word) mercury__eqvclass__conv2_MainSet0_21);
#line 82 "set_ordlist.opt"
            mercury__eqvclass__V_11_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 81 "set_ordlist.opt"
            {
#line 81 "set_ordlist.opt"
              mercury__eqvclass__Ys_5_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 81 "set_ordlist.opt"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__Ys_5_68, 0) = mercury__eqvclass__Item_14;
#line 81 "set_ordlist.opt"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__Ys_5_68, 1) = ((MR_Box) (mercury__eqvclass__V_11_66));
#line 81 "set_ordlist.opt"
            }
#line 123 "set_ordlist.opt"
            mercury__eqvclass__Xs_4_67 = (MR_Word) mercury__eqvclass__MainSet0_21;
#line 124 "set_ordlist.opt"
            {
#line 124 "set_ordlist.opt"
              mercury__set_ordlist__difference_2_3_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__Xs_4_67, mercury__eqvclass__Ys_5_68, &mercury__eqvclass__Set_6_69);
            }
#line 123 "set_ordlist.opt"
            mercury__eqvclass__MainSet_22 = (MR_Word) mercury__eqvclass__Set_6_69;
#line 542 "eqvclass.m"
            {
#line 542 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_50_50, mercury__eqvclass__MainId_13, ((MR_Box) (mercury__eqvclass__MainSet_22)), (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_0_30, &mercury__eqvclass__conv3_STATE_VARIABLE_Partitions_34_34);
            }
#line 542 "eqvclass.m"
            mercury__eqvclass__STATE_VARIABLE_Partitions_34_34 = (MR_Word) mercury__eqvclass__conv3_STATE_VARIABLE_Partitions_34_34;
#line 544 "eqvclass.m"
            {
#line 544 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_50_50, (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_34_34, mercury__eqvclass__Id_20, &mercury__eqvclass__conv4_Set0_23);
            }
#line 544 "eqvclass.m"
            mercury__eqvclass__Set0_23 = ((MR_Word) mercury__eqvclass__conv4_Set0_23);
#line 67 "set_ordlist.opt"
            mercury__eqvclass__List0_5_74 = (MR_Word) mercury__eqvclass__Set0_23;
#line 68 "set_ordlist.opt"
            {
#line 68 "set_ordlist.opt"
              mercury__set_ordlist__insert_2_3_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__List0_5_74, mercury__eqvclass__Item_14, &mercury__eqvclass__List_6_75);
            }
#line 67 "set_ordlist.opt"
            mercury__eqvclass__Set_24 = (MR_Word) mercury__eqvclass__List_6_75;
#line 546 "eqvclass.m"
            {
#line 546 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_50_50, mercury__eqvclass__Id_20, ((MR_Box) (mercury__eqvclass__Set_24)), (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_34_34, &mercury__eqvclass__conv5_STATE_VARIABLE_Partitions_31);
            }
#line 546 "eqvclass.m"
            *mercury__eqvclass__STATE_VARIABLE_Partitions_31 = (MR_Word) mercury__eqvclass__conv5_STATE_VARIABLE_Partitions_31;
#line 548 "eqvclass.m"
            {
#line 548 "eqvclass.m"
              mercury__map__det_update_4_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__TypeCtorInfo_48_48, mercury__eqvclass__Item_14, ((MR_Box) (mercury__eqvclass__Id_20)), mercury__eqvclass__STATE_VARIABLE_Keys_0_32, mercury__eqvclass__STATE_VARIABLE_Keys_33);
            }
#line 540 "eqvclass.m"
          }
#line 548 "eqvclass.m"
        *mercury__eqvclass__STATE_VARIABLE_Counter_29 = mercury__eqvclass__STATE_VARIABLE_Counter_0_28;
#line 548 "eqvclass.m"
        *mercury__eqvclass__STATE_VARIABLE_Map_27 = mercury__eqvclass__STATE_VARIABLE_Map_0_26;
#line 539 "eqvclass.m"
      }
#line 550 "eqvclass.m"
    else
#line 551 "eqvclass.m"
      {
#line 551 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_51_51;
#line 551 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_52_52;
#line 551 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeInfo_53_53;
#line 551 "eqvclass.m"
        MR_Integer mercury__eqvclass__NewId_25 = (MR_Integer) mercury__eqvclass__STATE_VARIABLE_Counter_0_28;
#line 551 "eqvclass.m"
        MR_Word mercury__eqvclass__STATE_VARIABLE_Partitions_39_39;
#line 551 "eqvclass.m"
        MR_Word mercury__eqvclass__MainSet0_42;
#line 551 "eqvclass.m"
        MR_Word mercury__eqvclass__MainSet_43;
#line 551 "eqvclass.m"
        MR_Word mercury__eqvclass__Set_44;
#line 551 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_5_77 = (mercury__eqvclass__NewId_25 + (MR_Integer) 1);
#line 551 "eqvclass.m"
        MR_Word mercury__eqvclass__V_11_88;
#line 551 "eqvclass.m"
        MR_Word mercury__eqvclass__Xs_4_89;
#line 551 "eqvclass.m"
        MR_Word mercury__eqvclass__Ys_5_90;
#line 551 "eqvclass.m"
        MR_Word mercury__eqvclass__Set_6_91;
#line 554 "eqvclass.m"
        MR_Box mercury__eqvclass__conv6_MainSet0_42;
#line 556 "eqvclass.m"
        MR_Word mercury__eqvclass__conv7_STATE_VARIABLE_Partitions_39_39;
#line 559 "eqvclass.m"
        MR_Word mercury__eqvclass__conv8_STATE_VARIABLE_Partitions_31;

#line 8 "counter.opt"
        *mercury__eqvclass__STATE_VARIABLE_Counter_29 = (MR_Word) mercury__eqvclass__V_5_77;
#line 1614 "eqvclass.c"
        mercury__eqvclass__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 552 "eqvclass.m"
        {
#line 552 "eqvclass.m"
          mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_U_46, mercury__eqvclass__TypeCtorInfo_51_51, mercury__eqvclass__Value_19, ((MR_Box) (mercury__eqvclass__NewId_25)), mercury__eqvclass__STATE_VARIABLE_Map_0_26, mercury__eqvclass__STATE_VARIABLE_Map_27);
        }
#line 1621 "eqvclass.c"
        mercury__eqvclass__TypeCtorInfo_52_52 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 1623 "eqvclass.c"
        {
#line 1625 "eqvclass.c"
          mercury__eqvclass__TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1627 "eqvclass.c"
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_53_53, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_52_52));
#line 1629 "eqvclass.c"
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_53_53, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_45));
#line 1631 "eqvclass.c"
        }
#line 554 "eqvclass.m"
        {
#line 554 "eqvclass.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_53_53, (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_0_30, mercury__eqvclass__MainId_13, &mercury__eqvclass__conv6_MainSet0_42);
        }
#line 554 "eqvclass.m"
        mercury__eqvclass__MainSet0_42 = ((MR_Word) mercury__eqvclass__conv6_MainSet0_42);
#line 82 "set_ordlist.opt"
        mercury__eqvclass__V_11_88 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 81 "set_ordlist.opt"
        {
#line 81 "set_ordlist.opt"
          mercury__eqvclass__Ys_5_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 81 "set_ordlist.opt"
          MR_hl_field(MR_mktag(1), mercury__eqvclass__Ys_5_90, 0) = mercury__eqvclass__Item_14;
#line 81 "set_ordlist.opt"
          MR_hl_field(MR_mktag(1), mercury__eqvclass__Ys_5_90, 1) = ((MR_Box) (mercury__eqvclass__V_11_88));
#line 81 "set_ordlist.opt"
        }
#line 123 "set_ordlist.opt"
        mercury__eqvclass__Xs_4_89 = (MR_Word) mercury__eqvclass__MainSet0_42;
#line 124 "set_ordlist.opt"
        {
#line 124 "set_ordlist.opt"
          mercury__set_ordlist__difference_2_3_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__Xs_4_89, mercury__eqvclass__Ys_5_90, &mercury__eqvclass__Set_6_91);
        }
#line 123 "set_ordlist.opt"
        mercury__eqvclass__MainSet_43 = (MR_Word) mercury__eqvclass__Set_6_91;
#line 556 "eqvclass.m"
        {
#line 556 "eqvclass.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_53_53, mercury__eqvclass__MainId_13, ((MR_Box) (mercury__eqvclass__MainSet_43)), (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_0_30, &mercury__eqvclass__conv7_STATE_VARIABLE_Partitions_39_39);
        }
#line 556 "eqvclass.m"
        mercury__eqvclass__STATE_VARIABLE_Partitions_39_39 = (MR_Word) mercury__eqvclass__conv7_STATE_VARIABLE_Partitions_39_39;
#line 558 "eqvclass.m"
        {
#line 558 "eqvclass.m"
          mercury__eqvclass__Set_44 = mercury__set__make_singleton_set_1_f_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__Item_14);
        }
#line 559 "eqvclass.m"
        {
#line 559 "eqvclass.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_53_53, mercury__eqvclass__NewId_25, ((MR_Box) (mercury__eqvclass__Set_44)), (MR_Word) mercury__eqvclass__STATE_VARIABLE_Partitions_39_39, &mercury__eqvclass__conv8_STATE_VARIABLE_Partitions_31);
        }
#line 559 "eqvclass.m"
        *mercury__eqvclass__STATE_VARIABLE_Partitions_31 = (MR_Word) mercury__eqvclass__conv8_STATE_VARIABLE_Partitions_31;
#line 561 "eqvclass.m"
        {
#line 561 "eqvclass.m"
          mercury__map__det_update_4_p_0(mercury__eqvclass__TypeInfo_for_T_45, mercury__eqvclass__TypeCtorInfo_51_51, mercury__eqvclass__Item_14, ((MR_Box) (mercury__eqvclass__NewId_25)), mercury__eqvclass__STATE_VARIABLE_Keys_0_32, mercury__eqvclass__STATE_VARIABLE_Keys_33);
#line 561 "eqvclass.m"
          return;
        }
#line 551 "eqvclass.m"
      }
#line 534 "eqvclass.m"
  }
#line 527 "eqvclass.m"
}

#line 507 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_9_p_0(
#line 507 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_34,
#line 507 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_U_35,
#line 507 "eqvclass.m"
  MR_Word mercury__eqvclass__F_10,
#line 507 "eqvclass.m"
  MR_Integer mercury__eqvclass__Id_11,
#line 507 "eqvclass.m"
  MR_Word mercury__eqvclass__ItemSet_12,
#line 507 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_Counter_0_23,
#line 507 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Counter_24,
#line 507 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_Partitions_0_25,
#line 507 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Partitions_26,
#line 507 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_Keys_0_27,
#line 507 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_Keys_28)
#line 507 "eqvclass.m"
{
#line 513 "eqvclass.m"
  {
#line 513 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 513 "eqvclass.m"
    MR_Word mercury__eqvclass__ItemList_16 = (MR_Word) mercury__eqvclass__ItemSet_12;

#line 518 "eqvclass.m"
    if ((mercury__eqvclass__ItemList_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "eqvclass.m"
      {
#line 517 "eqvclass.m"
        {
#line 517 "eqvclass.m"
          mercury__require__error_1_p_0((MR_String) "divide_equivalence_classes_2: empty partition");
#line 517 "eqvclass.m"
          return;
        }
#line 516 "eqvclass.m"
      }
#line 518 "eqvclass.m"
    else
#line 519 "eqvclass.m"
      {
#line 519 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_36_36;
#line 519 "eqvclass.m"
        MR_Box mercury__eqvclass__Item_17 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__ItemList_16, (MR_Integer) 0));
#line 519 "eqvclass.m"
        MR_Word mercury__eqvclass__Items_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__ItemList_16, (MR_Integer) 1)));
#line 519 "eqvclass.m"
        MR_Box mercury__eqvclass__MainValue_19;
#line 519 "eqvclass.m"
        MR_Word mercury__eqvclass__Map0_20;
#line 519 "eqvclass.m"
        MR_Word mercury__eqvclass__Map1_21;
#line 520 "eqvclass.m"
        MR_Box MR_CALL (* mercury__eqvclass__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__eqvclass__F_10, (MR_Integer) 1)));
#line 523 "eqvclass.m"
        MR_Word mercury__eqvclass___Map_22;

#line 520 "eqvclass.m"
        {
#line 520 "eqvclass.m"
          mercury__eqvclass__MainValue_19 = mercury__eqvclass__func_0(((MR_Box) mercury__eqvclass__F_10), mercury__eqvclass__Item_17);
        }
#line 1767 "eqvclass.c"
        mercury__eqvclass__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 48 "tree234.opt"
        mercury__eqvclass__Map0_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 522 "eqvclass.m"
        {
#line 522 "eqvclass.m"
          mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_U_35, mercury__eqvclass__TypeCtorInfo_36_36, mercury__eqvclass__MainValue_19, ((MR_Box) (mercury__eqvclass__Id_11)), mercury__eqvclass__Map0_20, &mercury__eqvclass__Map1_21);
        }
#line 523 "eqvclass.m"
        {
#line 523 "eqvclass.m"
          mercury__eqvclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_52_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_57_44_32_49_48_44_32_49_49_44_32_49_50_44_32_49_51_93_95_48_10_p_in__list_0(mercury__eqvclass__TypeInfo_for_T_34, mercury__eqvclass__TypeInfo_for_U_35, mercury__eqvclass__F_10, mercury__eqvclass__Id_11, mercury__eqvclass__Items_18, mercury__eqvclass__Map1_21, &mercury__eqvclass___Map_22, mercury__eqvclass__STATE_VARIABLE_Counter_0_23, mercury__eqvclass__STATE_VARIABLE_Counter_24, mercury__eqvclass__STATE_VARIABLE_Partitions_0_25, mercury__eqvclass__STATE_VARIABLE_Partitions_26, mercury__eqvclass__STATE_VARIABLE_Keys_0_27, mercury__eqvclass__STATE_VARIABLE_Keys_28);
        }
#line 519 "eqvclass.m"
      }
#line 513 "eqvclass.m"
  }
#line 507 "eqvclass.m"
}

#line 469 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__make_partition_4_p_0(
#line 469 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_17,
#line 469 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 469 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__2_2,
#line 469 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3,
#line 469 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_ElementMap_4)
#line 469 "eqvclass.m"
{
#line 472 "eqvclass.m"
  while (MR_TRUE)
#line 472 "eqvclass.m"
    {
#line 472 "eqvclass.m"
      /* tailcall optimized into a loop */
#line 472 "eqvclass.m"
      {
#line 472 "eqvclass.m"
        MR_bool mercury__eqvclass__succeeded;

#line 472 "eqvclass.m"
        if ((mercury__eqvclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 472 "eqvclass.m"
          *mercury__eqvclass__STATE_VARIABLE_ElementMap_4 = mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3;
#line 472 "eqvclass.m"
        else
#line 473 "eqvclass.m"
          {
#line 473 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 473 "eqvclass.m"
            MR_Box mercury__eqvclass__Element_9 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0));
#line 473 "eqvclass.m"
            MR_Word mercury__eqvclass__Elements_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 473 "eqvclass.m"
            MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15;

#line 474 "eqvclass.m"
            {
#line 474 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_17, mercury__eqvclass__TypeCtorInfo_18_18, mercury__eqvclass__Element_9, ((MR_Box) (mercury__eqvclass__HeadVar__2_2)), mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3, &mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15);
            }
#line 475 "eqvclass.m"
            /* direct tailcall eliminated */
#line 475 "eqvclass.m"
            {
#line 475 "eqvclass.m"
              MR_Word mercury__eqvclass__HeadVar__1__tmp_copy_1 = mercury__eqvclass__Elements_10;
#line 475 "eqvclass.m"
              MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0__tmp_copy_3 = mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15;

#line 475 "eqvclass.m"
              mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3 = mercury__eqvclass__STATE_VARIABLE_ElementMap_0__tmp_copy_3;
#line 475 "eqvclass.m"
              mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__HeadVar__1__tmp_copy_1;
#line 475 "eqvclass.m"
            }
#line 475 "eqvclass.m"
            continue;
#line 473 "eqvclass.m"
          }
#line 472 "eqvclass.m"
      }
#line 472 "eqvclass.m"
      break;
#line 472 "eqvclass.m"
    }
#line 469 "eqvclass.m"
}

#line 420 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__partition_ids_2_p_0(
#line 420 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_8,
#line 420 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_3,
#line 420 "eqvclass.m"
  MR_Word * mercury__eqvclass__Ids_4)
#line 420 "eqvclass.m"
{
#line 423 "eqvclass.m"
  {
#line 423 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 423 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_9_9 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 423 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_10_10 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 423 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_11_11;
#line 423 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 1)));
#line 423 "eqvclass.m"
    MR_Word mercury__eqvclass__V_5_16;
#line 424 "eqvclass.m"
    MR_Word mercury__eqvclass__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 0)));
#line 424 "eqvclass.m"
    MR_Word mercury__eqvclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 2)));

#line 1894 "eqvclass.c"
    {
#line 1896 "eqvclass.c"
      mercury__eqvclass__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1898 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_11, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_10_10));
#line 1900 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_11, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_8));
#line 1902 "eqvclass.c"
    }
#line 69 "tree234.opt"
    mercury__eqvclass__V_5_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__eqvclass__TypeCtorInfo_9_9, mercury__eqvclass__TypeInfo_11_11, mercury__eqvclass__PartitionMap0_5, mercury__eqvclass__V_5_16, mercury__eqvclass__Ids_4);
#line 70 "tree234.opt"
      return;
    }
#line 423 "eqvclass.m"
  }
#line 420 "eqvclass.m"
}

#line 410 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__partitions_3_p_0(
#line 410 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
#line 410 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 410 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__2_2,
#line 410 "eqvclass.m"
  MR_Word * mercury__eqvclass__HeadVar__3_3)
#line 410 "eqvclass.m"
{
#line 413 "eqvclass.m"
  {
#line 413 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;

#line 413 "eqvclass.m"
    if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 413 "eqvclass.m"
      *mercury__eqvclass__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 413 "eqvclass.m"
    else
#line 414 "eqvclass.m"
      {
#line 414 "eqvclass.m"
        MR_Integer mercury__eqvclass__Id_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0)));
#line 414 "eqvclass.m"
        MR_Word mercury__eqvclass__Ids_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
#line 414 "eqvclass.m"
        MR_Word mercury__eqvclass__Partition_8;
#line 414 "eqvclass.m"
        MR_Word mercury__eqvclass__Partitions_9;
#line 414 "eqvclass.m"
        MR_Word mercury__eqvclass__PartitionMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 433 "eqvclass.m"
        MR_Word mercury__eqvclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0)));
#line 433 "eqvclass.m"
        MR_Word mercury__eqvclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 2)));
#line 436 "eqvclass.m"
        MR_Word mercury__eqvclass__PartitionPrime_15;
#line 434 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_14_20 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 434 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeInfo_15_21;
#line 39 "map.opt"
        MR_Box mercury__eqvclass__conv0_PartitionPrime_15;

#line 1967 "eqvclass.c"
        {
#line 1969 "eqvclass.c"
          mercury__eqvclass__TypeInfo_15_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1971 "eqvclass.c"
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_15_21, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_14_20));
#line 1973 "eqvclass.c"
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_15_21, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_10));
#line 1975 "eqvclass.c"
        }
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_15_21, (MR_Word) mercury__eqvclass__PartitionMap0_14, mercury__eqvclass__Id_6, &mercury__eqvclass__conv0_PartitionPrime_15);
        }
#line 39 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__eqvclass__PartitionPrime_15 = ((MR_Word) mercury__eqvclass__conv0_PartitionPrime_15);
#line 39 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 436 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 435 "eqvclass.m"
          mercury__eqvclass__Partition_8 = mercury__eqvclass__PartitionPrime_15;
#line 436 "eqvclass.m"
        else
#line 437 "eqvclass.m"
          {
#line 437 "eqvclass.m"
            {
#line 437 "eqvclass.m"
              mercury__require__error_1_p_0((MR_String) "partition id not known to equivalence class");
#line 437 "eqvclass.m"
              return;
            }
#line 437 "eqvclass.m"
          }
#line 416 "eqvclass.m"
        {
#line 416 "eqvclass.m"
          mercury__eqvclass__partitions_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__HeadVar__1_1, mercury__eqvclass__Ids_7, &mercury__eqvclass__Partitions_9);
        }
#line 414 "eqvclass.m"
        {
#line 414 "eqvclass.m"
          MR_Word base;
#line 414 "eqvclass.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "eqvclass.m"
          *mercury__eqvclass__HeadVar__3_3 = base;
#line 414 "eqvclass.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__eqvclass__Partition_8));
#line 414 "eqvclass.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__eqvclass__Partitions_9));
#line 414 "eqvclass.m"
        }
#line 414 "eqvclass.m"
      }
#line 413 "eqvclass.m"
  }
#line 410 "eqvclass.m"
}

#line 385 "eqvclass.m"
static MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_list_2_3_p_0(
#line 385 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
#line 385 "eqvclass.m"
  MR_Word mercury__eqvclass__ElementMap_1,
#line 385 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__2_2,
#line 385 "eqvclass.m"
  MR_Integer mercury__eqvclass__Id_3)
#line 385 "eqvclass.m"
{
#line 388 "eqvclass.m"
  while (MR_TRUE)
#line 388 "eqvclass.m"
    {
#line 388 "eqvclass.m"
      /* tailcall optimized into a loop */
#line 388 "eqvclass.m"
      {
#line 388 "eqvclass.m"
        MR_bool mercury__eqvclass__succeeded;

#line 388 "eqvclass.m"
        if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 388 "eqvclass.m"
          mercury__eqvclass__succeeded = MR_TRUE;
#line 388 "eqvclass.m"
        else
#line 389 "eqvclass.m"
          {
#line 389 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 389 "eqvclass.m"
            MR_Box mercury__eqvclass__Element_7 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0));
#line 389 "eqvclass.m"
            MR_Word mercury__eqvclass__Elements_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
#line 389 "eqvclass.m"
            MR_Integer mercury__eqvclass__V_12_12;
#line 39 "map.opt"
            MR_Box mercury__eqvclass__conv0_V_12_12;

#line 39 "map.opt"
            {
#line 39 "map.opt"
              mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__TypeCtorInfo_11_11, mercury__eqvclass__ElementMap_1, mercury__eqvclass__Element_7, &mercury__eqvclass__conv0_V_12_12);
            }
#line 39 "map.opt"
            if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
              {
#line 39 "map.opt"
                mercury__eqvclass__V_12_12 = ((MR_Integer) mercury__eqvclass__conv0_V_12_12);
#line 39 "map.opt"
                mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
              }
#line 389 "eqvclass.m"
            if (mercury__eqvclass__succeeded)
#line 389 "eqvclass.m"
              {
#line 390 "eqvclass.m"
                mercury__eqvclass__succeeded = (mercury__eqvclass__Id_3 == mercury__eqvclass__V_12_12);
#line 389 "eqvclass.m"
                if (mercury__eqvclass__succeeded)
#line 391 "eqvclass.m"
                  {
#line 391 "eqvclass.m"
                    /* direct tailcall eliminated */
#line 391 "eqvclass.m"
                    {
#line 391 "eqvclass.m"
                      MR_Word mercury__eqvclass__HeadVar__2__tmp_copy_2 = mercury__eqvclass__Elements_8;

#line 391 "eqvclass.m"
                      mercury__eqvclass__HeadVar__2_2 = mercury__eqvclass__HeadVar__2__tmp_copy_2;
#line 391 "eqvclass.m"
                    }
#line 391 "eqvclass.m"
                    continue;
#line 391 "eqvclass.m"
                  }
#line 389 "eqvclass.m"
              }
#line 389 "eqvclass.m"
          }
#line 388 "eqvclass.m"
        return mercury__eqvclass__succeeded;
#line 388 "eqvclass.m"
      }
#line 388 "eqvclass.m"
      break;
#line 388 "eqvclass.m"
    }
#line 385 "eqvclass.m"
}

#line 365 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__change_partition_4_p_0(
#line 365 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_17,
#line 365 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 365 "eqvclass.m"
  MR_Integer mercury__eqvclass__HeadVar__2_2,
#line 365 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3,
#line 365 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_ElementMap_4)
#line 365 "eqvclass.m"
{
#line 368 "eqvclass.m"
  while (MR_TRUE)
#line 368 "eqvclass.m"
    {
#line 368 "eqvclass.m"
      /* tailcall optimized into a loop */
#line 368 "eqvclass.m"
      {
#line 368 "eqvclass.m"
        MR_bool mercury__eqvclass__succeeded;

#line 368 "eqvclass.m"
        if ((mercury__eqvclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 368 "eqvclass.m"
          *mercury__eqvclass__STATE_VARIABLE_ElementMap_4 = mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3;
#line 368 "eqvclass.m"
        else
#line 369 "eqvclass.m"
          {
#line 369 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 369 "eqvclass.m"
            MR_Box mercury__eqvclass__Element_9 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0));
#line 369 "eqvclass.m"
            MR_Word mercury__eqvclass__Elements_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 369 "eqvclass.m"
            MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15;

#line 117 "map.opt"
            {
#line 117 "map.opt"
              mercury__tree234__set_4_p_0(mercury__eqvclass__TypeInfo_for_T_17, mercury__eqvclass__TypeCtorInfo_18_18, mercury__eqvclass__Element_9, ((MR_Box) (mercury__eqvclass__HeadVar__2_2)), mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3, &mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15);
            }
#line 371 "eqvclass.m"
            /* direct tailcall eliminated */
#line 371 "eqvclass.m"
            {
#line 371 "eqvclass.m"
              MR_Word mercury__eqvclass__HeadVar__1__tmp_copy_1 = mercury__eqvclass__Elements_10;
#line 371 "eqvclass.m"
              MR_Word mercury__eqvclass__STATE_VARIABLE_ElementMap_0__tmp_copy_3 = mercury__eqvclass__STATE_VARIABLE_ElementMap_15_15;

#line 371 "eqvclass.m"
              mercury__eqvclass__STATE_VARIABLE_ElementMap_0_3 = mercury__eqvclass__STATE_VARIABLE_ElementMap_0__tmp_copy_3;
#line 371 "eqvclass.m"
              mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__HeadVar__1__tmp_copy_1;
#line 371 "eqvclass.m"
            }
#line 371 "eqvclass.m"
            continue;
#line 369 "eqvclass.m"
          }
#line 368 "eqvclass.m"
      }
#line 368 "eqvclass.m"
      break;
#line 368 "eqvclass.m"
    }
#line 365 "eqvclass.m"
}

#line 342 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__add_equivalence_4_p_0(
#line 342 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_24,
#line 342 "eqvclass.m"
  MR_Integer mercury__eqvclass__IdA_5,
#line 342 "eqvclass.m"
  MR_Integer mercury__eqvclass__IdB_6,
#line 342 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_7,
#line 342 "eqvclass.m"
  MR_Word * mercury__eqvclass__EqvClass_8)
#line 342 "eqvclass.m"
{
#line 345 "eqvclass.m"
  {
#line 345 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 345 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 345 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_26_26 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 345 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_27_27;
#line 345 "eqvclass.m"
    MR_Word mercury__eqvclass__NextId0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 345 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 345 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 345 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionA_12;
#line 345 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionB_13;
#line 345 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap_16;
#line 345 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_18;
#line 347 "eqvclass.m"
    MR_Box mercury__eqvclass__conv0_PartitionA_12;
#line 348 "eqvclass.m"
    MR_Box mercury__eqvclass__conv1_PartitionB_13;
#line 350 "eqvclass.m"
    MR_Integer mercury__eqvclass__V_20_20;
#line 350 "eqvclass.m"
    MR_Integer mercury__eqvclass__V_21_21;
#line 350 "eqvclass.m"
    MR_Word mercury__eqvclass__Set_3_33;
#line 350 "eqvclass.m"
    MR_Word mercury__eqvclass__Set_3_42;

#line 2261 "eqvclass.c"
    {
#line 2263 "eqvclass.c"
      mercury__eqvclass__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2265 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_27_27, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_26_26));
#line 2267 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_27_27, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_24));
#line 2269 "eqvclass.c"
    }
#line 347 "eqvclass.m"
    {
#line 347 "eqvclass.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_27_27, (MR_Word) mercury__eqvclass__PartitionMap0_10, mercury__eqvclass__IdA_5, &mercury__eqvclass__conv0_PartitionA_12);
    }
#line 347 "eqvclass.m"
    mercury__eqvclass__PartitionA_12 = ((MR_Word) mercury__eqvclass__conv0_PartitionA_12);
#line 348 "eqvclass.m"
    {
#line 348 "eqvclass.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_27_27, (MR_Word) mercury__eqvclass__PartitionMap0_10, mercury__eqvclass__IdB_6, &mercury__eqvclass__conv1_PartitionB_13);
    }
#line 348 "eqvclass.m"
    mercury__eqvclass__PartitionB_13 = ((MR_Word) mercury__eqvclass__conv1_PartitionB_13);
#line 127 "set_ordlist.opt"
    mercury__eqvclass__Set_3_33 = (MR_Word) mercury__eqvclass__PartitionA_12;
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__Set_3_33, (MR_Integer) 0, &mercury__eqvclass__V_20_20);
    }
#line 127 "set_ordlist.opt"
    mercury__eqvclass__Set_3_42 = (MR_Word) mercury__eqvclass__PartitionB_13;
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__Set_3_42, (MR_Integer) 0, &mercury__eqvclass__V_21_21);
    }
#line 350 "eqvclass.m"
    mercury__eqvclass__succeeded = (mercury__eqvclass__V_20_20 < mercury__eqvclass__V_21_21);
#line 356 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 351 "eqvclass.m"
      {
#line 351 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeInfo_for_K_63;
#line 351 "eqvclass.m"
        MR_Word mercury__eqvclass__PartitionMap1_14;
#line 351 "eqvclass.m"
        MR_Word mercury__eqvclass__Partition_15;
#line 351 "eqvclass.m"
        MR_Word mercury__eqvclass__ElementsA_17;
#line 351 "eqvclass.m"
        MR_Word mercury__eqvclass__Set0_4_56;
#line 351 "eqvclass.m"
        MR_Word mercury__eqvclass__Set1_5_57;
#line 351 "eqvclass.m"
        MR_Word mercury__eqvclass__Set_6_58;
#line 61 "tree234.opt"
        MR_Word mercury__eqvclass__V_7_52;

#line 61 "tree234.opt"
        {
#line 61 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__eqvclass__TypeCtorInfo_25_25, mercury__eqvclass__TypeInfo_27_27, mercury__eqvclass__PartitionMap0_10, ((MR_Box) (mercury__eqvclass__IdA_5)), &mercury__eqvclass__PartitionMap1_14, &mercury__eqvclass__V_7_52);
        }
#line 100 "set_ordlist.opt"
        mercury__eqvclass__Set0_4_56 = (MR_Word) mercury__eqvclass__PartitionB_13;
#line 100 "set_ordlist.opt"
        mercury__eqvclass__Set1_5_57 = (MR_Word) mercury__eqvclass__PartitionA_12;
#line 101 "set_ordlist.opt"
        {
#line 101 "set_ordlist.opt"
          mercury__list__merge_and_remove_dups_3_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__Set0_4_56, mercury__eqvclass__Set1_5_57, &mercury__eqvclass__Set_6_58);
        }
#line 100 "set_ordlist.opt"
        mercury__eqvclass__Partition_15 = (MR_Word) mercury__eqvclass__Set_6_58;
#line 2338 "eqvclass.c"
        mercury__eqvclass__TypeInfo_for_K_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 117 "map.opt"
        {
#line 117 "map.opt"
          mercury__tree234__set_4_p_0(mercury__eqvclass__TypeInfo_for_K_63, mercury__eqvclass__TypeInfo_27_27, ((MR_Box) (mercury__eqvclass__IdB_6)), ((MR_Box) (mercury__eqvclass__Partition_15)), mercury__eqvclass__PartitionMap1_14, &mercury__eqvclass__PartitionMap_16);
        }
#line 38 "set_ordlist.opt"
        mercury__eqvclass__ElementsA_17 = (MR_Word) mercury__eqvclass__PartitionA_12;
#line 355 "eqvclass.m"
        {
#line 355 "eqvclass.m"
          mercury__eqvclass__change_partition_4_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__ElementsA_17, mercury__eqvclass__IdB_6, mercury__eqvclass__ElementMap0_11, &mercury__eqvclass__ElementMap_18);
        }
#line 351 "eqvclass.m"
      }
#line 356 "eqvclass.m"
    else
#line 357 "eqvclass.m"
      {
#line 357 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeInfo_for_K_84;
#line 357 "eqvclass.m"
        MR_Word mercury__eqvclass__ElementsB_19;
#line 357 "eqvclass.m"
        MR_Word mercury__eqvclass__PartitionMap1_22;
#line 357 "eqvclass.m"
        MR_Word mercury__eqvclass__Partition_23;
#line 357 "eqvclass.m"
        MR_Word mercury__eqvclass__Set0_4_77;
#line 357 "eqvclass.m"
        MR_Word mercury__eqvclass__Set1_5_78;
#line 357 "eqvclass.m"
        MR_Word mercury__eqvclass__Set_6_79;
#line 61 "tree234.opt"
        MR_Word mercury__eqvclass__V_7_73;

#line 61 "tree234.opt"
        {
#line 61 "tree234.opt"
          mercury__tree234__delete_2_4_p_0(mercury__eqvclass__TypeCtorInfo_25_25, mercury__eqvclass__TypeInfo_27_27, mercury__eqvclass__PartitionMap0_10, ((MR_Box) (mercury__eqvclass__IdB_6)), &mercury__eqvclass__PartitionMap1_22, &mercury__eqvclass__V_7_73);
        }
#line 100 "set_ordlist.opt"
        mercury__eqvclass__Set0_4_77 = (MR_Word) mercury__eqvclass__PartitionA_12;
#line 100 "set_ordlist.opt"
        mercury__eqvclass__Set1_5_78 = (MR_Word) mercury__eqvclass__PartitionB_13;
#line 101 "set_ordlist.opt"
        {
#line 101 "set_ordlist.opt"
          mercury__list__merge_and_remove_dups_3_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__Set0_4_77, mercury__eqvclass__Set1_5_78, &mercury__eqvclass__Set_6_79);
        }
#line 100 "set_ordlist.opt"
        mercury__eqvclass__Partition_23 = (MR_Word) mercury__eqvclass__Set_6_79;
#line 2391 "eqvclass.c"
        mercury__eqvclass__TypeInfo_for_K_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 117 "map.opt"
        {
#line 117 "map.opt"
          mercury__tree234__set_4_p_0(mercury__eqvclass__TypeInfo_for_K_84, mercury__eqvclass__TypeInfo_27_27, ((MR_Box) (mercury__eqvclass__IdA_5)), ((MR_Box) (mercury__eqvclass__Partition_23)), mercury__eqvclass__PartitionMap1_22, &mercury__eqvclass__PartitionMap_16);
        }
#line 38 "set_ordlist.opt"
        mercury__eqvclass__ElementsB_19 = (MR_Word) mercury__eqvclass__PartitionB_13;
#line 361 "eqvclass.m"
        {
#line 361 "eqvclass.m"
          mercury__eqvclass__change_partition_4_p_0(mercury__eqvclass__TypeInfo_for_T_24, mercury__eqvclass__ElementsB_19, mercury__eqvclass__IdA_5, mercury__eqvclass__ElementMap0_11, &mercury__eqvclass__ElementMap_18);
        }
#line 357 "eqvclass.m"
      }
#line 363 "eqvclass.m"
    {
#line 363 "eqvclass.m"
      MR_Word base;
#line 363 "eqvclass.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 363 "eqvclass.m"
      *mercury__eqvclass__EqvClass_8 = base;
#line 363 "eqvclass.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_9));
#line 363 "eqvclass.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_16));
#line 363 "eqvclass.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_18));
#line 363 "eqvclass.m"
    }
#line 345 "eqvclass.m"
  }
#line 342 "eqvclass.m"
}

#line 216 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__add_element_4_p_0(
#line 216 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_18,
#line 216 "eqvclass.m"
  MR_Box mercury__eqvclass__Element_5,
#line 216 "eqvclass.m"
  MR_Integer * mercury__eqvclass__Id_6,
#line 216 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_15,
#line 216 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_16)
#line 216 "eqvclass.m"
{
#line 219 "eqvclass.m"
  {
#line 219 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 219 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_19_19;
#line 219 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_20_20;
#line 219 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_21_21;
#line 219 "eqvclass.m"
    MR_Word mercury__eqvclass__Counter0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_15, (MR_Integer) 0)));
#line 219 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_15, (MR_Integer) 1)));
#line 219 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_15, (MR_Integer) 2)));
#line 219 "eqvclass.m"
    MR_Word mercury__eqvclass__Counter_11;
#line 219 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_12;
#line 219 "eqvclass.m"
    MR_Word mercury__eqvclass__Partition_13;
#line 219 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap_14;
#line 219 "eqvclass.m"
    MR_Integer mercury__eqvclass__V_5_23;
#line 219 "eqvclass.m"
    MR_Word mercury__eqvclass__V_4_30;
#line 219 "eqvclass.m"
    MR_Word mercury__eqvclass__V_5_31;
#line 224 "eqvclass.m"
    MR_Word mercury__eqvclass__conv0_PartitionMap_14;

#line 8 "counter.opt"
    *mercury__eqvclass__Id_6 = (MR_Integer) mercury__eqvclass__Counter0_8;
#line 9 "counter.opt"
    mercury__eqvclass__V_5_23 = (*mercury__eqvclass__Id_6 + (MR_Integer) 1);
#line 8 "counter.opt"
    mercury__eqvclass__Counter_11 = (MR_Word) mercury__eqvclass__V_5_23;
#line 2482 "eqvclass.c"
    mercury__eqvclass__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 222 "eqvclass.m"
    {
#line 222 "eqvclass.m"
      mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_18, mercury__eqvclass__TypeCtorInfo_19_19, mercury__eqvclass__Element_5, ((MR_Box) (*mercury__eqvclass__Id_6)), mercury__eqvclass__ElementMap0_10, &mercury__eqvclass__ElementMap_12);
    }
#line 43 "set_ordlist.opt"
    mercury__eqvclass__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 42 "set_ordlist.opt"
    {
#line 42 "set_ordlist.opt"
      mercury__eqvclass__V_4_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 42 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__eqvclass__V_4_30, 0) = mercury__eqvclass__Element_5;
#line 42 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__eqvclass__V_4_30, 1) = ((MR_Box) (mercury__eqvclass__V_5_31));
#line 42 "set_ordlist.opt"
    }
#line 41 "set_ordlist.opt"
    mercury__eqvclass__Partition_13 = (MR_Word) mercury__eqvclass__V_4_30;
#line 2503 "eqvclass.c"
    mercury__eqvclass__TypeCtorInfo_20_20 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 2505 "eqvclass.c"
    {
#line 2507 "eqvclass.c"
      mercury__eqvclass__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2509 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_21_21, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_20_20));
#line 2511 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_21_21, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_18));
#line 2513 "eqvclass.c"
    }
#line 224 "eqvclass.m"
    {
#line 224 "eqvclass.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_21_21, *mercury__eqvclass__Id_6, ((MR_Box) (mercury__eqvclass__Partition_13)), (MR_Word) mercury__eqvclass__PartitionMap0_9, &mercury__eqvclass__conv0_PartitionMap_14);
    }
#line 224 "eqvclass.m"
    mercury__eqvclass__PartitionMap_14 = (MR_Word) mercury__eqvclass__conv0_PartitionMap_14;
#line 225 "eqvclass.m"
    {
#line 225 "eqvclass.m"
      MR_Word base;
#line 225 "eqvclass.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 225 "eqvclass.m"
      *mercury__eqvclass__STATE_VARIABLE_EqvClass_16 = base;
#line 225 "eqvclass.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__Counter_11));
#line 225 "eqvclass.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_14));
#line 225 "eqvclass.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_12));
#line 225 "eqvclass.m"
    }
#line 219 "eqvclass.m"
  }
#line 216 "eqvclass.m"
}

#line 503 "eqvclass.m"
static void MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_f_0_1(
#line 503 "eqvclass.m"
  MR_Box mercury__eqvclass__closure_arg,
#line 503 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_1,
#line 503 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_2,
#line 503 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_3,
#line 503 "eqvclass.m"
  MR_Box * mercury__eqvclass__wrapper_arg_4,
#line 503 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_5,
#line 503 "eqvclass.m"
  MR_Box * mercury__eqvclass__wrapper_arg_6,
#line 503 "eqvclass.m"
  MR_Box mercury__eqvclass__wrapper_arg_7,
#line 503 "eqvclass.m"
  MR_Box * mercury__eqvclass__wrapper_arg_8)
#line 503 "eqvclass.m"
{
#line 503 "eqvclass.m"
  {
#line 503 "eqvclass.m"
    MR_Box mercury__eqvclass__closure = mercury__eqvclass__closure_arg;
#line 503 "eqvclass.m"
    MR_Word mercury__eqvclass__conv2_STATE_VARIABLE_Counter_24;
#line 503 "eqvclass.m"
    MR_Word mercury__eqvclass__conv1_STATE_VARIABLE_Partitions_26;
#line 503 "eqvclass.m"
    MR_Word mercury__eqvclass__conv0_STATE_VARIABLE_Keys_28;

#line 503 "eqvclass.m"
    {
#line 503 "eqvclass.m"
      mercury__eqvclass__divide_equivalence_classes_2_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__closure, (MR_Integer) 5))), ((MR_Integer) mercury__eqvclass__wrapper_arg_1), ((MR_Word) mercury__eqvclass__wrapper_arg_2), ((MR_Word) mercury__eqvclass__wrapper_arg_3), &mercury__eqvclass__conv2_STATE_VARIABLE_Counter_24, ((MR_Word) mercury__eqvclass__wrapper_arg_5), &mercury__eqvclass__conv1_STATE_VARIABLE_Partitions_26, ((MR_Word) mercury__eqvclass__wrapper_arg_7), &mercury__eqvclass__conv0_STATE_VARIABLE_Keys_28);
    }
#line 503 "eqvclass.m"
    *mercury__eqvclass__wrapper_arg_4 = ((MR_Box) (mercury__eqvclass__conv2_STATE_VARIABLE_Counter_24));
#line 503 "eqvclass.m"
    *mercury__eqvclass__wrapper_arg_6 = ((MR_Box) (mercury__eqvclass__conv1_STATE_VARIABLE_Partitions_26));
#line 503 "eqvclass.m"
    *mercury__eqvclass__wrapper_arg_8 = ((MR_Box) (mercury__eqvclass__conv0_STATE_VARIABLE_Keys_28));
#line 503 "eqvclass.m"
  }
#line 503 "eqvclass.m"
}

#line 151 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__divide_equivalence_classes_2_f_0(
#line 151 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_15,
#line 151 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_U_16,
#line 151 "eqvclass.m"
  MR_Word mercury__eqvclass__F_4,
#line 151 "eqvclass.m"
  MR_Word mercury__eqvclass__E0_5)
#line 151 "eqvclass.m"
{
#line 501 "eqvclass.m"
  {
#line 501 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__E_6;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_25_25;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_26_26;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_27_27;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_29_29;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_30_30;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_31_31;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_for_K_40;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_for_A_41;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__Counter0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__E0_5, (MR_Integer) 0)));
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__Partitions0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__E0_5, (MR_Integer) 1)));
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__Keys0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__E0_5, (MR_Integer) 2)));
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__Counter_10;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__Partitions_11;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__Keys_12;
#line 501 "eqvclass.m"
    MR_Word mercury__eqvclass__V_13_13;
#line 221 "map.opt"
    MR_Box mercury__eqvclass__conv5_Counter_10;
#line 221 "map.opt"
    MR_Box mercury__eqvclass__conv4_Partitions_11;
#line 221 "map.opt"
    MR_Box mercury__eqvclass__conv3_Keys_12;

#line 503 "eqvclass.m"
    {
#line 503 "eqvclass.m"
      mercury__eqvclass__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 503 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__V_13_13, 0) = ((MR_Box) (&mercury__eqvclass_scalar_common_5[0]));
#line 503 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__V_13_13, 1) = ((MR_Box) (mercury__eqvclass__divide_equivalence_classes_2_f_0_1));
#line 503 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 503 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__V_13_13, 3) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_15));
#line 503 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__V_13_13, 4) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_U_16));
#line 503 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__V_13_13, 5) = ((MR_Box) (mercury__eqvclass__F_4));
#line 503 "eqvclass.m"
    }
#line 2667 "eqvclass.c"
    mercury__eqvclass__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2669 "eqvclass.c"
    mercury__eqvclass__TypeCtorInfo_26_26 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 2671 "eqvclass.c"
    {
#line 2673 "eqvclass.c"
      mercury__eqvclass__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2675 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_27_27, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_26_26));
#line 2677 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_27_27, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_15));
#line 2679 "eqvclass.c"
    }
#line 2681 "eqvclass.c"
    mercury__eqvclass__TypeCtorInfo_29_29 = (MR_Word) &mercury__tree234__tree234__type_ctor_info_tree234_2;
#line 2683 "eqvclass.c"
    {
#line 2685 "eqvclass.c"
      mercury__eqvclass__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2687 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_30_30, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_29_29));
#line 2689 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_30_30, 1) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_25_25));
#line 2691 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_30_30, 2) = ((MR_Box) (mercury__eqvclass__TypeInfo_27_27));
#line 2693 "eqvclass.c"
    }
#line 2695 "eqvclass.c"
    {
#line 2697 "eqvclass.c"
      mercury__eqvclass__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2699 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_31_31, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_29_29));
#line 2701 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_31_31, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_15));
#line 2703 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_31_31, 2) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_25_25));
#line 2705 "eqvclass.c"
    }
#line 2707 "eqvclass.c"
    mercury__eqvclass__TypeInfo_for_K_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2709 "eqvclass.c"
    mercury__eqvclass__TypeInfo_for_A_41 = (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0;
#line 221 "map.opt"
    {
#line 221 "map.opt"
      mercury__tree234__foldl3_8_p_0(mercury__eqvclass__TypeInfo_for_K_40, mercury__eqvclass__TypeInfo_27_27, mercury__eqvclass__TypeInfo_for_A_41, mercury__eqvclass__TypeInfo_30_30, mercury__eqvclass__TypeInfo_31_31, mercury__eqvclass__V_13_13, mercury__eqvclass__Partitions0_8, ((MR_Box) (mercury__eqvclass__Counter0_7)), &mercury__eqvclass__conv5_Counter_10, ((MR_Box) (mercury__eqvclass__Partitions0_8)), &mercury__eqvclass__conv4_Partitions_11, ((MR_Box) (mercury__eqvclass__Keys0_9)), &mercury__eqvclass__conv3_Keys_12);
    }
#line 221 "map.opt"
    mercury__eqvclass__Counter_10 = ((MR_Word) mercury__eqvclass__conv5_Counter_10);
#line 221 "map.opt"
    mercury__eqvclass__Partitions_11 = ((MR_Word) mercury__eqvclass__conv4_Partitions_11);
#line 221 "map.opt"
    mercury__eqvclass__Keys_12 = ((MR_Word) mercury__eqvclass__conv3_Keys_12);
#line 505 "eqvclass.m"
    {
#line 505 "eqvclass.m"
      mercury__eqvclass__E_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 505 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__E_6, 0) = ((MR_Box) (mercury__eqvclass__Counter_10));
#line 505 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__E_6, 1) = ((MR_Box) (mercury__eqvclass__Partitions_11));
#line 505 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__E_6, 2) = ((MR_Box) (mercury__eqvclass__Keys_12));
#line 505 "eqvclass.m"
    }
#line 501 "eqvclass.m"
    return mercury__eqvclass__E_6;
#line 501 "eqvclass.m"
  }
#line 151 "eqvclass.m"
}

#line 143 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__remove_equivalent_elements_3_p_0(
#line 143 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_9,
#line 143 "eqvclass.m"
  MR_Box mercury__eqvclass__X_4,
#line 143 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6,
#line 143 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_7)
#line 143 "eqvclass.m"
{
#line 489 "eqvclass.m"
  {
#line 489 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;

#line 489 "eqvclass.m"
    {
#line 489 "eqvclass.m"
      *mercury__eqvclass__STATE_VARIABLE_EqvClass_7 = mercury__eqvclass__remove_equivalent_elements_2_f_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, mercury__eqvclass__X_4);
    }
#line 489 "eqvclass.m"
  }
#line 143 "eqvclass.m"
}

#line 142 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__remove_equivalent_elements_2_f_0(
#line 142 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_13,
#line 142 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 142 "eqvclass.m"
  MR_Box mercury__eqvclass__X_7)
#line 142 "eqvclass.m"
{
#line 492 "eqvclass.m"
  {
#line 492 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 492 "eqvclass.m"
    MR_Word mercury__eqvclass__HeadVar__3_3;
#line 492 "eqvclass.m"
    MR_Word mercury__eqvclass__Id_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0)));
#line 492 "eqvclass.m"
    MR_Word mercury__eqvclass__P0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 492 "eqvclass.m"
    MR_Word mercury__eqvclass__E0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 2)));
#line 492 "eqvclass.m"
    MR_Word mercury__eqvclass__P_8;
#line 492 "eqvclass.m"
    MR_Word mercury__eqvclass__E_9;
#line 496 "eqvclass.m"
    MR_Integer mercury__eqvclass__Partition_10;
#line 493 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv0_Partition_10;

#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_13, mercury__eqvclass__TypeCtorInfo_14_14, mercury__eqvclass__E0_6, mercury__eqvclass__X_7, &mercury__eqvclass__conv0_Partition_10);
    }
#line 39 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__eqvclass__Partition_10 = ((MR_Integer) mercury__eqvclass__conv0_Partition_10);
#line 39 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 496 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 494 "eqvclass.m"
      {
#line 494 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 494 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_16_16 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 494 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeInfo_17_17;
#line 494 "eqvclass.m"
        MR_Word mercury__eqvclass__Eq_11;
#line 494 "eqvclass.m"
        MR_Word mercury__eqvclass__V_12_12;
#line 494 "eqvclass.m"
        MR_Box mercury__eqvclass__conv1_Eq_11;

#line 2835 "eqvclass.c"
        {
#line 2837 "eqvclass.c"
          mercury__eqvclass__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2839 "eqvclass.c"
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_17_17, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_16_16));
#line 2841 "eqvclass.c"
          MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_17_17, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_13));
#line 2843 "eqvclass.c"
        }
#line 494 "eqvclass.m"
        {
#line 494 "eqvclass.m"
          mercury__map__det_remove_4_p_0(mercury__eqvclass__TypeCtorInfo_15_15, mercury__eqvclass__TypeInfo_17_17, ((MR_Box) (mercury__eqvclass__Partition_10)), &mercury__eqvclass__conv1_Eq_11, mercury__eqvclass__P0_5, &mercury__eqvclass__P_8);
        }
#line 494 "eqvclass.m"
        mercury__eqvclass__Eq_11 = ((MR_Word) mercury__eqvclass__conv1_Eq_11);
#line 38 "set_ordlist.opt"
        mercury__eqvclass__V_12_12 = (MR_Word) mercury__eqvclass__Eq_11;
#line 495 "eqvclass.m"
        {
#line 495 "eqvclass.m"
          mercury__map__delete_list_3_p_0(mercury__eqvclass__TypeInfo_for_T_13, mercury__eqvclass__TypeCtorInfo_15_15, mercury__eqvclass__V_12_12, mercury__eqvclass__E0_6, &mercury__eqvclass__E_9);
        }
#line 494 "eqvclass.m"
      }
#line 496 "eqvclass.m"
    else
#line 497 "eqvclass.m"
      {
#line 497 "eqvclass.m"
        mercury__eqvclass__P_8 = mercury__eqvclass__P0_5;
#line 498 "eqvclass.m"
        mercury__eqvclass__E_9 = mercury__eqvclass__E0_6;
#line 497 "eqvclass.m"
      }
#line 492 "eqvclass.m"
    {
#line 492 "eqvclass.m"
      mercury__eqvclass__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 492 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, 0) = ((MR_Box) (mercury__eqvclass__Id_4));
#line 492 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, 1) = ((MR_Box) (mercury__eqvclass__P_8));
#line 492 "eqvclass.m"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__3_3, 2) = ((MR_Box) (mercury__eqvclass__E_9));
#line 492 "eqvclass.m"
    }
#line 492 "eqvclass.m"
    return mercury__eqvclass__HeadVar__3_3;
#line 492 "eqvclass.m"
  }
#line 142 "eqvclass.m"
}

#line 137 "eqvclass.m"
MR_Box MR_CALL 
mercury__eqvclass__get_minimum_element_2_f_0(
#line 137 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_8,
#line 137 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass_4,
#line 137 "eqvclass.m"
  MR_Box mercury__eqvclass__X_5)
#line 137 "eqvclass.m"
{
#line 484 "eqvclass.m"
  {
#line 484 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 484 "eqvclass.m"
    MR_Box mercury__eqvclass__HeadVar__3_3;
#line 484 "eqvclass.m"
    MR_Word mercury__eqvclass__V_6_6;
#line 484 "eqvclass.m"
    MR_Word mercury__eqvclass__V_7_7;

#line 486 "eqvclass.m"
    {
#line 486 "eqvclass.m"
      mercury__eqvclass__V_7_7 = mercury__eqvclass__get_equivalent_elements_2_f_0(mercury__eqvclass__TypeInfo_for_T_8, mercury__eqvclass__EqvClass_4, mercury__eqvclass__X_5);
    }
#line 38 "set_ordlist.opt"
    mercury__eqvclass__V_6_6 = (MR_Word) mercury__eqvclass__V_7_7;
#line 484 "eqvclass.m"
    {
#line 484 "eqvclass.m"
      return mercury__eqvclass__HeadVar__3_3 = mercury__list__det_head_1_f_0(mercury__eqvclass__TypeInfo_for_T_8, mercury__eqvclass__V_6_6);
    }
#line 484 "eqvclass.m"
    return mercury__eqvclass__HeadVar__3_3;
#line 484 "eqvclass.m"
  }
#line 137 "eqvclass.m"
}

#line 132 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__get_equivalent_elements_2_f_0(
#line 132 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
#line 132 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 132 "eqvclass.m"
  MR_Box mercury__eqvclass__X_7)
#line 132 "eqvclass.m"
{
#line 477 "eqvclass.m"
  {
#line 477 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 477 "eqvclass.m"
    MR_Word mercury__eqvclass__HeadVar__3_3;
#line 477 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 477 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 2)));
#line 477 "eqvclass.m"
    MR_Word mercury__eqvclass__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0)));
#line 477 "eqvclass.m"
    MR_Word mercury__eqvclass__Eqv_8;
#line 478 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 478 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_12_12 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 478 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_13_13;
#line 478 "eqvclass.m"
    MR_Integer mercury__eqvclass__V_9_9;
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv0_V_9_9;
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv1_Eqv_8;

#line 2969 "eqvclass.c"
    {
#line 2971 "eqvclass.c"
      mercury__eqvclass__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2973 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_13_13, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_12_12));
#line 2975 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_13_13, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_10));
#line 2977 "eqvclass.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__TypeCtorInfo_11_11, mercury__eqvclass__ElementMap_6, mercury__eqvclass__X_7, &mercury__eqvclass__conv0_V_9_9);
    }
#line 39 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__eqvclass__V_9_9 = ((MR_Integer) mercury__eqvclass__conv0_V_9_9);
#line 39 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 478 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 478 "eqvclass.m"
      {
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_13_13, (MR_Word) mercury__eqvclass__PartitionMap_5, mercury__eqvclass__V_9_9, &mercury__eqvclass__conv1_Eqv_8);
        }
#line 39 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__eqvclass__Eqv_8 = ((MR_Word) mercury__eqvclass__conv1_Eqv_8);
#line 39 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 478 "eqvclass.m"
      }
#line 477 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 477 "eqvclass.m"
      mercury__eqvclass__HeadVar__3_3 = mercury__eqvclass__Eqv_8;
#line 477 "eqvclass.m"
    else
#line 41 "set_ordlist.opt"
      {
#line 41 "set_ordlist.opt"
        MR_Word mercury__eqvclass__V_4_33;
#line 41 "set_ordlist.opt"
        MR_Word mercury__eqvclass__V_5_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 42 "set_ordlist.opt"
        {
#line 42 "set_ordlist.opt"
          mercury__eqvclass__V_4_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 42 "set_ordlist.opt"
          MR_hl_field(MR_mktag(1), mercury__eqvclass__V_4_33, 0) = mercury__eqvclass__X_7;
#line 42 "set_ordlist.opt"
          MR_hl_field(MR_mktag(1), mercury__eqvclass__V_4_33, 1) = ((MR_Box) (mercury__eqvclass__V_5_34));
#line 42 "set_ordlist.opt"
        }
#line 41 "set_ordlist.opt"
        mercury__eqvclass__HeadVar__3_3 = (MR_Word) mercury__eqvclass__V_4_33;
#line 41 "set_ordlist.opt"
      }
#line 477 "eqvclass.m"
    return mercury__eqvclass__HeadVar__3_3;
#line 477 "eqvclass.m"
  }
#line 132 "eqvclass.m"
}

#line 126 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__partition_list_to_eqvclass_2_p_0(
#line 126 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_18,
#line 126 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 126 "eqvclass.m"
  MR_Word * mercury__eqvclass__EqvClass_2)
#line 126 "eqvclass.m"
{
#line 450 "eqvclass.m"
  {
#line 450 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;

#line 450 "eqvclass.m"
    if ((mercury__eqvclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 178 "eqvclass.m"
      {
#line 178 "eqvclass.m"
        MR_Word mercury__eqvclass__PartitionMap_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "eqvclass.m"
        MR_Word mercury__eqvclass__ElementMap_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "eqvclass.m"
        MR_Word mercury__eqvclass__V_25_25 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

#line 181 "eqvclass.m"
        *mercury__eqvclass__EqvClass_2 = (MR_Word) &mercury__eqvclass_scalar_common_1[1];
#line 178 "eqvclass.m"
      }
#line 450 "eqvclass.m"
    else
#line 452 "eqvclass.m"
      {
#line 452 "eqvclass.m"
        MR_Word mercury__eqvclass__Partition_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0)));
#line 452 "eqvclass.m"
        MR_Word mercury__eqvclass__Ps_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 452 "eqvclass.m"
        MR_Word mercury__eqvclass__EqvClass0_7;
#line 452 "eqvclass.m"
        MR_Word mercury__eqvclass__Counter0_8;
#line 452 "eqvclass.m"
        MR_Word mercury__eqvclass__PartitionMap0_9;
#line 452 "eqvclass.m"
        MR_Word mercury__eqvclass__ElementMap0_10;
#line 452 "eqvclass.m"
        MR_Word mercury__eqvclass__Elements_11;
#line 452 "eqvclass.m"
        MR_Word mercury__eqvclass__Counter_12;
#line 452 "eqvclass.m"
        MR_Word mercury__eqvclass__ElementMap_13;
#line 452 "eqvclass.m"
        MR_Word mercury__eqvclass__PartitionMap_14;

#line 453 "eqvclass.m"
        {
#line 453 "eqvclass.m"
          mercury__eqvclass__partition_list_to_eqvclass_2_p_0(mercury__eqvclass__TypeInfo_for_T_18, mercury__eqvclass__Ps_5, &mercury__eqvclass__EqvClass0_7);
        }
#line 454 "eqvclass.m"
        mercury__eqvclass__Counter0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 454 "eqvclass.m"
        mercury__eqvclass__PartitionMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 454 "eqvclass.m"
        mercury__eqvclass__ElementMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 38 "set_ordlist.opt"
        mercury__eqvclass__Elements_11 = (MR_Word) mercury__eqvclass__Partition_4;
#line 461 "eqvclass.m"
        if ((mercury__eqvclass__Elements_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "eqvclass.m"
          {
#line 458 "eqvclass.m"
            mercury__eqvclass__Counter_12 = mercury__eqvclass__Counter0_8;
#line 459 "eqvclass.m"
            mercury__eqvclass__ElementMap_13 = mercury__eqvclass__ElementMap0_10;
#line 460 "eqvclass.m"
            mercury__eqvclass__PartitionMap_14 = mercury__eqvclass__PartitionMap0_9;
#line 457 "eqvclass.m"
          }
#line 461 "eqvclass.m"
        else
#line 462 "eqvclass.m"
          {
#line 462 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_20_20;
#line 462 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_21_21;
#line 462 "eqvclass.m"
            MR_Integer mercury__eqvclass__Id_17 = (MR_Integer) mercury__eqvclass__Counter0_8;
#line 462 "eqvclass.m"
            MR_Integer mercury__eqvclass__V_5_37 = (mercury__eqvclass__Id_17 + (MR_Integer) 1);
#line 465 "eqvclass.m"
            MR_Word mercury__eqvclass__conv0_PartitionMap_14;

#line 8 "counter.opt"
            mercury__eqvclass__Counter_12 = (MR_Word) mercury__eqvclass__V_5_37;
#line 464 "eqvclass.m"
            {
#line 464 "eqvclass.m"
              mercury__eqvclass__make_partition_4_p_0(mercury__eqvclass__TypeInfo_for_T_18, mercury__eqvclass__Elements_11, mercury__eqvclass__Id_17, mercury__eqvclass__ElementMap0_10, &mercury__eqvclass__ElementMap_13);
            }
#line 3152 "eqvclass.c"
            mercury__eqvclass__TypeCtorInfo_20_20 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 3154 "eqvclass.c"
            {
#line 3156 "eqvclass.c"
              mercury__eqvclass__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3158 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_21_21, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_20_20));
#line 3160 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_21_21, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_18));
#line 3162 "eqvclass.c"
            }
#line 465 "eqvclass.m"
            {
#line 465 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_21_21, mercury__eqvclass__Id_17, ((MR_Box) (mercury__eqvclass__Partition_4)), (MR_Word) mercury__eqvclass__PartitionMap0_9, &mercury__eqvclass__conv0_PartitionMap_14);
            }
#line 465 "eqvclass.m"
            mercury__eqvclass__PartitionMap_14 = (MR_Word) mercury__eqvclass__conv0_PartitionMap_14;
#line 462 "eqvclass.m"
          }
#line 467 "eqvclass.m"
        {
#line 467 "eqvclass.m"
          MR_Word base;
#line 467 "eqvclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 467 "eqvclass.m"
          *mercury__eqvclass__EqvClass_2 = base;
#line 467 "eqvclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__Counter_12));
#line 467 "eqvclass.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_14));
#line 467 "eqvclass.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_13));
#line 467 "eqvclass.m"
        }
#line 452 "eqvclass.m"
      }
#line 450 "eqvclass.m"
  }
#line 126 "eqvclass.m"
}

#line 125 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__partition_list_to_eqvclass_1_f_0(
#line 125 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_5,
#line 125 "eqvclass.m"
  MR_Word mercury__eqvclass__Xs_3)
#line 125 "eqvclass.m"
{
#line 448 "eqvclass.m"
  {
#line 448 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 448 "eqvclass.m"
    MR_Word mercury__eqvclass__EqvClass_4;

#line 448 "eqvclass.m"
    {
#line 448 "eqvclass.m"
      mercury__eqvclass__partition_list_to_eqvclass_2_p_0(mercury__eqvclass__TypeInfo_for_T_5, mercury__eqvclass__Xs_3, &mercury__eqvclass__EqvClass_4);
    }
#line 448 "eqvclass.m"
    return mercury__eqvclass__EqvClass_4;
#line 448 "eqvclass.m"
  }
#line 125 "eqvclass.m"
}

#line 119 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__partition_set_to_eqvclass_2_p_0(
#line 119 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_6,
#line 119 "eqvclass.m"
  MR_Word mercury__eqvclass__SetSet_3,
#line 119 "eqvclass.m"
  MR_Word * mercury__eqvclass__EqvClass_4)
#line 119 "eqvclass.m"
{
#line 443 "eqvclass.m"
  {
#line 443 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 443 "eqvclass.m"
    MR_Word mercury__eqvclass__ListSet_5 = (MR_Word) mercury__eqvclass__SetSet_3;

#line 445 "eqvclass.m"
    {
#line 445 "eqvclass.m"
      mercury__eqvclass__partition_list_to_eqvclass_2_p_0(mercury__eqvclass__TypeInfo_for_T_6, mercury__eqvclass__ListSet_5, mercury__eqvclass__EqvClass_4);
#line 445 "eqvclass.m"
      return;
    }
#line 443 "eqvclass.m"
  }
#line 119 "eqvclass.m"
}

#line 118 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__partition_set_to_eqvclass_1_f_0(
#line 118 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_5,
#line 118 "eqvclass.m"
  MR_Word mercury__eqvclass__Set_3)
#line 118 "eqvclass.m"
{
#line 443 "eqvclass.m"
  {
#line 443 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 443 "eqvclass.m"
    MR_Word mercury__eqvclass__EqvClass_4;
#line 443 "eqvclass.m"
    MR_Word mercury__eqvclass__ListSet_8 = (MR_Word) mercury__eqvclass__Set_3;

#line 445 "eqvclass.m"
    {
#line 445 "eqvclass.m"
      mercury__eqvclass__partition_list_to_eqvclass_2_p_0(mercury__eqvclass__TypeInfo_for_T_5, mercury__eqvclass__ListSet_8, &mercury__eqvclass__EqvClass_4);
    }
#line 443 "eqvclass.m"
    return mercury__eqvclass__EqvClass_4;
#line 443 "eqvclass.m"
  }
#line 118 "eqvclass.m"
}

#line 113 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__partition_list_2_p_0(
#line 113 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_6,
#line 113 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass_3,
#line 113 "eqvclass.m"
  MR_Word * mercury__eqvclass__PartitionList_4)
#line 113 "eqvclass.m"
{
#line 404 "eqvclass.m"
  {
#line 404 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 404 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_9_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 404 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_10_13 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 404 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_11_14;
#line 404 "eqvclass.m"
    MR_Word mercury__eqvclass__Ids_5;
#line 404 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 1)));
#line 404 "eqvclass.m"
    MR_Word mercury__eqvclass__V_5_19;
#line 424 "eqvclass.m"
    MR_Word mercury__eqvclass__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 0)));
#line 424 "eqvclass.m"
    MR_Word mercury__eqvclass__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 2)));

#line 3316 "eqvclass.c"
    {
#line 3318 "eqvclass.c"
      mercury__eqvclass__TypeInfo_11_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3320 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_14, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_10_13));
#line 3322 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_14, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_6));
#line 3324 "eqvclass.c"
    }
#line 69 "tree234.opt"
    mercury__eqvclass__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__eqvclass__TypeCtorInfo_9_12, mercury__eqvclass__TypeInfo_11_14, mercury__eqvclass__PartitionMap0_9, mercury__eqvclass__V_5_19, &mercury__eqvclass__Ids_5);
    }
#line 406 "eqvclass.m"
    {
#line 406 "eqvclass.m"
      mercury__eqvclass__partitions_3_p_0(mercury__eqvclass__TypeInfo_for_T_6, mercury__eqvclass__EqvClass_3, mercury__eqvclass__Ids_5, mercury__eqvclass__PartitionList_4);
#line 406 "eqvclass.m"
      return;
    }
#line 404 "eqvclass.m"
  }
#line 113 "eqvclass.m"
}

#line 112 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__partition_list_1_f_0(
#line 112 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_5,
#line 112 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass_3)
#line 112 "eqvclass.m"
{
#line 404 "eqvclass.m"
  {
#line 404 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 404 "eqvclass.m"
    MR_Word mercury__eqvclass__Xs_4;
#line 404 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_9_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 404 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_10_15 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 404 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_11_16;
#line 404 "eqvclass.m"
    MR_Word mercury__eqvclass__Ids_8;
#line 404 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 1)));
#line 404 "eqvclass.m"
    MR_Word mercury__eqvclass__V_5_21;
#line 424 "eqvclass.m"
    MR_Word mercury__eqvclass__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 0)));
#line 424 "eqvclass.m"
    MR_Word mercury__eqvclass__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 2)));

#line 3377 "eqvclass.c"
    {
#line 3379 "eqvclass.c"
      mercury__eqvclass__TypeInfo_11_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3381 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_16, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_10_15));
#line 3383 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_11_16, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_5));
#line 3385 "eqvclass.c"
    }
#line 69 "tree234.opt"
    mercury__eqvclass__V_5_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__eqvclass__TypeCtorInfo_9_14, mercury__eqvclass__TypeInfo_11_16, mercury__eqvclass__PartitionMap0_11, mercury__eqvclass__V_5_21, &mercury__eqvclass__Ids_8);
    }
#line 406 "eqvclass.m"
    {
#line 406 "eqvclass.m"
      mercury__eqvclass__partitions_3_p_0(mercury__eqvclass__TypeInfo_for_T_5, mercury__eqvclass__EqvClass_3, mercury__eqvclass__Ids_8, &mercury__eqvclass__Xs_4);
    }
#line 404 "eqvclass.m"
    return mercury__eqvclass__Xs_4;
#line 404 "eqvclass.m"
  }
#line 112 "eqvclass.m"
}

#line 108 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__partition_set_2_p_0(
#line 108 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_7,
#line 108 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_3,
#line 108 "eqvclass.m"
  MR_Word * mercury__eqvclass__PartitionSet_4)
#line 108 "eqvclass.m"
{
#line 396 "eqvclass.m"
  {
#line 396 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 396 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeInfo_9_9;
#line 396 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_9_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 396 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_10_16 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 396 "eqvclass.m"
    MR_Word mercury__eqvclass__Ids_5;
#line 396 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionList_6;
#line 396 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 1)));
#line 396 "eqvclass.m"
    MR_Word mercury__eqvclass__V_5_22;
#line 396 "eqvclass.m"
    MR_Word mercury__eqvclass__List_4_27;
#line 396 "eqvclass.m"
    MR_Integer mercury__eqvclass__V_5_30;
#line 424 "eqvclass.m"
    MR_Word mercury__eqvclass__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 0)));
#line 424 "eqvclass.m"
    MR_Word mercury__eqvclass__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_3, (MR_Integer) 2)));
#line 110 "list.opt"
    MR_Word mercury__eqvclass__conv0_List_4_27;

#line 3446 "eqvclass.c"
    {
#line 3448 "eqvclass.c"
      mercury__eqvclass__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3450 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_9_9, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_10_16));
#line 3452 "eqvclass.c"
      MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_9_9, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_7));
#line 3454 "eqvclass.c"
    }
#line 69 "tree234.opt"
    mercury__eqvclass__V_5_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__eqvclass__TypeCtorInfo_9_15, mercury__eqvclass__TypeInfo_9_9, mercury__eqvclass__PartitionMap0_12, mercury__eqvclass__V_5_22, &mercury__eqvclass__Ids_5);
    }
#line 398 "eqvclass.m"
    {
#line 398 "eqvclass.m"
      mercury__eqvclass__partitions_3_p_0(mercury__eqvclass__TypeInfo_for_T_7, mercury__eqvclass__EqvClass0_3, mercury__eqvclass__Ids_5, &mercury__eqvclass__PartitionList_6);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__eqvclass__TypeInfo_9_9, (MR_Word) mercury__eqvclass__PartitionList_6, (MR_Integer) 0, &mercury__eqvclass__V_5_30);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__eqvclass__TypeInfo_9_9, mercury__eqvclass__V_5_30, (MR_Word) mercury__eqvclass__PartitionList_6, &mercury__eqvclass__conv0_List_4_27);
    }
#line 110 "list.opt"
    mercury__eqvclass__List_4_27 = (MR_Word) mercury__eqvclass__conv0_List_4_27;
#line 26 "set_ordlist.opt"
    *mercury__eqvclass__PartitionSet_4 = (MR_Word) mercury__eqvclass__List_4_27;
#line 396 "eqvclass.m"
  }
#line 108 "eqvclass.m"
}

#line 107 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__partition_set_1_f_0(
#line 107 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_5,
#line 107 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass_3)
#line 107 "eqvclass.m"
{
#line 394 "eqvclass.m"
  {
#line 394 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 394 "eqvclass.m"
    MR_Word mercury__eqvclass__S_4;

#line 394 "eqvclass.m"
    {
#line 394 "eqvclass.m"
      mercury__eqvclass__partition_set_2_p_0(mercury__eqvclass__TypeInfo_for_T_5, mercury__eqvclass__EqvClass_3, &mercury__eqvclass__S_4);
    }
#line 394 "eqvclass.m"
    return mercury__eqvclass__S_4;
#line 394 "eqvclass.m"
  }
#line 107 "eqvclass.m"
}

#line 103 "eqvclass.m"
MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_list_2_p_0(
#line 103 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_11,
#line 103 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass_1,
#line 103 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__2_2)
#line 103 "eqvclass.m"
{
#line 379 "eqvclass.m"
  {
#line 379 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;

#line 379 "eqvclass.m"
    if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "eqvclass.m"
      mercury__eqvclass__succeeded = MR_TRUE;
#line 379 "eqvclass.m"
    else
#line 380 "eqvclass.m"
      {
#line 380 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 380 "eqvclass.m"
        MR_Box mercury__eqvclass__Element_5 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0));
#line 380 "eqvclass.m"
        MR_Word mercury__eqvclass__Elements_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "eqvclass.m"
        MR_Word mercury__eqvclass__ElementMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_1, (MR_Integer) 2)));
#line 380 "eqvclass.m"
        MR_Integer mercury__eqvclass__Id_8;
#line 381 "eqvclass.m"
        MR_Word mercury__eqvclass__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_1, (MR_Integer) 0)));
#line 381 "eqvclass.m"
        MR_Word mercury__eqvclass__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_1, (MR_Integer) 1)));
#line 39 "map.opt"
        MR_Box mercury__eqvclass__conv0_Id_8;

#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__TypeCtorInfo_12_12, mercury__eqvclass__ElementMap_7, mercury__eqvclass__Element_5, &mercury__eqvclass__conv0_Id_8);
        }
#line 39 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__eqvclass__Id_8 = ((MR_Integer) mercury__eqvclass__conv0_Id_8);
#line 39 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 380 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 383 "eqvclass.m"
          {
#line 383 "eqvclass.m"
            return mercury__eqvclass__succeeded = mercury__eqvclass__same_eqvclass_list_2_3_p_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__ElementMap_7, mercury__eqvclass__Elements_6, mercury__eqvclass__Id_8);
          }
#line 380 "eqvclass.m"
      }
#line 379 "eqvclass.m"
    return mercury__eqvclass__succeeded;
#line 379 "eqvclass.m"
  }
#line 103 "eqvclass.m"
}

#line 99 "eqvclass.m"
MR_bool MR_CALL 
mercury__eqvclass__same_eqvclass_3_p_0(
#line 99 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_12,
#line 99 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_4,
#line 99 "eqvclass.m"
  MR_Box mercury__eqvclass__Element1_5,
#line 99 "eqvclass.m"
  MR_Box mercury__eqvclass__Element2_6)
#line 99 "eqvclass.m"
{
#line 373 "eqvclass.m"
  {
#line 373 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 373 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 373 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_4, (MR_Integer) 2)));
#line 373 "eqvclass.m"
    MR_Integer mercury__eqvclass__Id1_8;
#line 373 "eqvclass.m"
    MR_Integer mercury__eqvclass__Id2_9;
#line 374 "eqvclass.m"
    MR_Word mercury__eqvclass__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_4, (MR_Integer) 0)));
#line 374 "eqvclass.m"
    MR_Word mercury__eqvclass__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_4, (MR_Integer) 1)));
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv0_Id1_8;
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv1_Id2_9;

#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_12, mercury__eqvclass__TypeCtorInfo_13_13, mercury__eqvclass__ElementMap0_7, mercury__eqvclass__Element1_5, &mercury__eqvclass__conv0_Id1_8);
    }
#line 39 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__eqvclass__Id1_8 = ((MR_Integer) mercury__eqvclass__conv0_Id1_8);
#line 39 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 373 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 373 "eqvclass.m"
      {
#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_12, mercury__eqvclass__TypeCtorInfo_13_13, mercury__eqvclass__ElementMap0_7, mercury__eqvclass__Element2_6, &mercury__eqvclass__conv1_Id2_9);
        }
#line 39 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__eqvclass__Id2_9 = ((MR_Integer) mercury__eqvclass__conv1_Id2_9);
#line 39 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 373 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 377 "eqvclass.m"
          mercury__eqvclass__succeeded = (mercury__eqvclass__Id1_8 == mercury__eqvclass__Id2_9);
#line 373 "eqvclass.m"
      }
#line 373 "eqvclass.m"
    return mercury__eqvclass__succeeded;
#line 373 "eqvclass.m"
  }
#line 99 "eqvclass.m"
}

#line 94 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__new_equivalence_4_p_0(
#line 94 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_56,
#line 94 "eqvclass.m"
  MR_Box mercury__eqvclass__ElementA_5,
#line 94 "eqvclass.m"
  MR_Box mercury__eqvclass__ElementB_6,
#line 94 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_7,
#line 94 "eqvclass.m"
  MR_Word * mercury__eqvclass__EqvClass_8)
#line 94 "eqvclass.m"
{
#line 288 "eqvclass.m"
  {
#line 288 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 288 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 292 "eqvclass.m"
    MR_Word mercury__eqvclass__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 292 "eqvclass.m"
    MR_Word mercury__eqvclass__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 309 "eqvclass.m"
    MR_Integer mercury__eqvclass__IdA_10;
#line 293 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_57_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv0_IdA_10;

#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__TypeCtorInfo_57_57, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementA_5, &mercury__eqvclass__conv0_IdA_10);
    }
#line 39 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__eqvclass__IdA_10 = ((MR_Integer) mercury__eqvclass__conv0_IdA_10);
#line 39 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 309 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 300 "eqvclass.m"
      {
#line 300 "eqvclass.m"
        MR_Integer mercury__eqvclass__IdB_11;
#line 294 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 39 "map.opt"
        MR_Box mercury__eqvclass__conv1_IdB_11;

#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__TypeCtorInfo_58_58, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementB_6, &mercury__eqvclass__conv1_IdB_11);
        }
#line 39 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__eqvclass__IdB_11 = ((MR_Integer) mercury__eqvclass__conv1_IdB_11);
#line 39 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 300 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 297 "eqvclass.m"
          {
#line 295 "eqvclass.m"
            mercury__eqvclass__succeeded = (mercury__eqvclass__IdA_10 == mercury__eqvclass__IdB_11);
#line 297 "eqvclass.m"
            if (mercury__eqvclass__succeeded)
#line 296 "eqvclass.m"
              {
#line 296 "eqvclass.m"
                {
#line 296 "eqvclass.m"
                  mercury__require__error_1_p_0((MR_String) "two elements are already equivalent");
#line 296 "eqvclass.m"
                  return;
                }
#line 296 "eqvclass.m"
              }
#line 297 "eqvclass.m"
            else
#line 298 "eqvclass.m"
              {
#line 298 "eqvclass.m"
                mercury__eqvclass__add_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__IdA_10, mercury__eqvclass__IdB_11, mercury__eqvclass__EqvClass0_7, mercury__eqvclass__EqvClass_8);
#line 298 "eqvclass.m"
                return;
              }
#line 297 "eqvclass.m"
          }
#line 300 "eqvclass.m"
        else
#line 301 "eqvclass.m"
          {
#line 301 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_59_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 301 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_60_60 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 301 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_61_61;
#line 301 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 301 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionA_13;
#line 301 "eqvclass.m"
            MR_Word mercury__eqvclass__Partition_14;
#line 301 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap_15;
#line 301 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap_16;
#line 301 "eqvclass.m"
            MR_Word mercury__eqvclass__NextId0_17;
#line 301 "eqvclass.m"
            MR_Word mercury__eqvclass__List0_5_82;
#line 301 "eqvclass.m"
            MR_Word mercury__eqvclass__List_6_83;
#line 301 "eqvclass.m"
            MR_Word mercury__eqvclass__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 301 "eqvclass.m"
            MR_Word mercury__eqvclass__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 302 "eqvclass.m"
            MR_Box mercury__eqvclass__conv2_PartitionA_13;
#line 304 "eqvclass.m"
            MR_Word mercury__eqvclass__conv3_PartitionMap_15;
#line 306 "eqvclass.m"
            MR_Word mercury__eqvclass__V_46_46;
#line 306 "eqvclass.m"
            MR_Word mercury__eqvclass__V_47_47;

#line 3810 "eqvclass.c"
            {
#line 3812 "eqvclass.c"
              mercury__eqvclass__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3814 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_61_61, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_60_60));
#line 3816 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_61_61, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_56));
#line 3818 "eqvclass.c"
            }
#line 302 "eqvclass.m"
            {
#line 302 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_61_61, (MR_Word) mercury__eqvclass__PartitionMap0_12, mercury__eqvclass__IdA_10, &mercury__eqvclass__conv2_PartitionA_13);
            }
#line 302 "eqvclass.m"
            mercury__eqvclass__PartitionA_13 = ((MR_Word) mercury__eqvclass__conv2_PartitionA_13);
#line 67 "set_ordlist.opt"
            mercury__eqvclass__List0_5_82 = (MR_Word) mercury__eqvclass__PartitionA_13;
#line 68 "set_ordlist.opt"
            {
#line 68 "set_ordlist.opt"
              mercury__set_ordlist__insert_2_3_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__List0_5_82, mercury__eqvclass__ElementB_6, &mercury__eqvclass__List_6_83);
            }
#line 67 "set_ordlist.opt"
            mercury__eqvclass__Partition_14 = (MR_Word) mercury__eqvclass__List_6_83;
#line 304 "eqvclass.m"
            {
#line 304 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_61_61, mercury__eqvclass__IdA_10, ((MR_Box) (mercury__eqvclass__Partition_14)), (MR_Word) mercury__eqvclass__PartitionMap0_12, &mercury__eqvclass__conv3_PartitionMap_15);
            }
#line 304 "eqvclass.m"
            mercury__eqvclass__PartitionMap_15 = (MR_Word) mercury__eqvclass__conv3_PartitionMap_15;
#line 305 "eqvclass.m"
            {
#line 305 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__TypeCtorInfo_59_59, mercury__eqvclass__ElementB_6, ((MR_Box) (mercury__eqvclass__IdA_10)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap_16);
            }
#line 306 "eqvclass.m"
            mercury__eqvclass__NextId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 306 "eqvclass.m"
            mercury__eqvclass__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 306 "eqvclass.m"
            mercury__eqvclass__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 307 "eqvclass.m"
            {
#line 307 "eqvclass.m"
              MR_Word base;
#line 307 "eqvclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 307 "eqvclass.m"
              *mercury__eqvclass__EqvClass_8 = base;
#line 307 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_17));
#line 307 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_15));
#line 307 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_16));
#line 307 "eqvclass.m"
            }
#line 301 "eqvclass.m"
          }
#line 300 "eqvclass.m"
      }
#line 309 "eqvclass.m"
    else
#line 318 "eqvclass.m"
      {
#line 318 "eqvclass.m"
        MR_Word mercury__eqvclass__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 318 "eqvclass.m"
        MR_Word mercury__eqvclass__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 311 "eqvclass.m"
        MR_Word mercury__eqvclass__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 318 "eqvclass.m"
        MR_Integer mercury__eqvclass__IdB_36;
#line 310 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_62_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 39 "map.opt"
        MR_Box mercury__eqvclass__conv4_IdB_36;

#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__TypeCtorInfo_62_62, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementB_6, &mercury__eqvclass__conv4_IdB_36);
        }
#line 39 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__eqvclass__IdB_36 = ((MR_Integer) mercury__eqvclass__conv4_IdB_36);
#line 39 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 318 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 311 "eqvclass.m"
          {
#line 311 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_63_63 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 311 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_64_64 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 311 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_65_65;
#line 311 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionB_18;
#line 311 "eqvclass.m"
            MR_Word mercury__eqvclass__Partition_27;
#line 311 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap_28;
#line 311 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap_29;
#line 311 "eqvclass.m"
            MR_Word mercury__eqvclass__NextId0_30;
#line 311 "eqvclass.m"
            MR_Word mercury__eqvclass__List0_5_91;
#line 311 "eqvclass.m"
            MR_Word mercury__eqvclass__List_6_92;
#line 312 "eqvclass.m"
            MR_Box mercury__eqvclass__conv5_PartitionB_18;
#line 314 "eqvclass.m"
            MR_Word mercury__eqvclass__conv6_PartitionMap_28;
#line 316 "eqvclass.m"
            MR_Word mercury__eqvclass__V_50_50;
#line 316 "eqvclass.m"
            MR_Word mercury__eqvclass__V_51_51;

#line 3939 "eqvclass.c"
            {
#line 3941 "eqvclass.c"
              mercury__eqvclass__TypeInfo_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3943 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_65_65, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_64_64));
#line 3945 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_65_65, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_56));
#line 3947 "eqvclass.c"
            }
#line 312 "eqvclass.m"
            {
#line 312 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_65_65, (MR_Word) mercury__eqvclass__V_70_70, mercury__eqvclass__IdB_36, &mercury__eqvclass__conv5_PartitionB_18);
            }
#line 312 "eqvclass.m"
            mercury__eqvclass__PartitionB_18 = ((MR_Word) mercury__eqvclass__conv5_PartitionB_18);
#line 67 "set_ordlist.opt"
            mercury__eqvclass__List0_5_91 = (MR_Word) mercury__eqvclass__PartitionB_18;
#line 68 "set_ordlist.opt"
            {
#line 68 "set_ordlist.opt"
              mercury__set_ordlist__insert_2_3_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__List0_5_91, mercury__eqvclass__ElementA_5, &mercury__eqvclass__List_6_92);
            }
#line 67 "set_ordlist.opt"
            mercury__eqvclass__Partition_27 = (MR_Word) mercury__eqvclass__List_6_92;
#line 314 "eqvclass.m"
            {
#line 314 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_65_65, mercury__eqvclass__IdB_36, ((MR_Box) (mercury__eqvclass__Partition_27)), (MR_Word) mercury__eqvclass__V_70_70, &mercury__eqvclass__conv6_PartitionMap_28);
            }
#line 314 "eqvclass.m"
            mercury__eqvclass__PartitionMap_28 = (MR_Word) mercury__eqvclass__conv6_PartitionMap_28;
#line 315 "eqvclass.m"
            {
#line 315 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__TypeCtorInfo_63_63, mercury__eqvclass__ElementA_5, ((MR_Box) (mercury__eqvclass__IdB_36)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap_29);
            }
#line 316 "eqvclass.m"
            mercury__eqvclass__NextId0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 316 "eqvclass.m"
            mercury__eqvclass__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 316 "eqvclass.m"
            mercury__eqvclass__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 317 "eqvclass.m"
            {
#line 317 "eqvclass.m"
              MR_Word base;
#line 317 "eqvclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 317 "eqvclass.m"
              *mercury__eqvclass__EqvClass_8 = base;
#line 317 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_30));
#line 317 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_28));
#line 317 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_29));
#line 317 "eqvclass.m"
            }
#line 311 "eqvclass.m"
          }
#line 318 "eqvclass.m"
        else
#line 319 "eqvclass.m"
          {
#line 319 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_66_66;
#line 319 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_67_67;
#line 319 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_68_68;
#line 319 "eqvclass.m"
            MR_Integer mercury__eqvclass__Id_19 = (MR_Integer) mercury__eqvclass__V_71_71;
#line 319 "eqvclass.m"
            MR_Word mercury__eqvclass__NextId_20;
#line 319 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap1_21;
#line 319 "eqvclass.m"
            MR_Word mercury__eqvclass__V_23_23;
#line 319 "eqvclass.m"
            MR_Word mercury__eqvclass__V_24_24;
#line 319 "eqvclass.m"
            MR_Word mercury__eqvclass__V_25_25;
#line 319 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap0_31;
#line 319 "eqvclass.m"
            MR_Word mercury__eqvclass__Partition_32;
#line 319 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap_33;
#line 319 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap_34;
#line 319 "eqvclass.m"
            MR_Integer mercury__eqvclass__V_5_94 = (mercury__eqvclass__Id_19 + (MR_Integer) 1);
#line 323 "eqvclass.m"
            MR_Word mercury__eqvclass__V_54_54;
#line 323 "eqvclass.m"
            MR_Word mercury__eqvclass__V_55_55;
#line 325 "eqvclass.m"
            MR_Word mercury__eqvclass__conv7_PartitionMap_33;

#line 8 "counter.opt"
            mercury__eqvclass__NextId_20 = (MR_Word) mercury__eqvclass__V_5_94;
#line 4042 "eqvclass.c"
            mercury__eqvclass__TypeCtorInfo_66_66 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 321 "eqvclass.m"
            {
#line 321 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__TypeCtorInfo_66_66, mercury__eqvclass__ElementA_5, ((MR_Box) (mercury__eqvclass__Id_19)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap1_21);
            }
#line 322 "eqvclass.m"
            {
#line 322 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__TypeCtorInfo_66_66, mercury__eqvclass__ElementB_6, ((MR_Box) (mercury__eqvclass__Id_19)), mercury__eqvclass__ElementMap1_21, &mercury__eqvclass__ElementMap_34);
            }
#line 323 "eqvclass.m"
            mercury__eqvclass__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 323 "eqvclass.m"
            mercury__eqvclass__PartitionMap0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 323 "eqvclass.m"
            mercury__eqvclass__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 324 "eqvclass.m"
            mercury__eqvclass__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 324 "eqvclass.m"
            {
#line 324 "eqvclass.m"
              mercury__eqvclass__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_24_24, 0) = mercury__eqvclass__ElementB_6;
#line 324 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_24_24, 1) = ((MR_Box) (mercury__eqvclass__V_25_25));
#line 324 "eqvclass.m"
            }
#line 324 "eqvclass.m"
            {
#line 324 "eqvclass.m"
              mercury__eqvclass__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_23_23, 0) = mercury__eqvclass__ElementA_5;
#line 324 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_23_23, 1) = ((MR_Box) (mercury__eqvclass__V_24_24));
#line 324 "eqvclass.m"
            }
#line 324 "eqvclass.m"
            {
#line 324 "eqvclass.m"
              mercury__set__list_to_set_2_p_0(mercury__eqvclass__TypeInfo_for_T_56, mercury__eqvclass__V_23_23, &mercury__eqvclass__Partition_32);
            }
#line 4087 "eqvclass.c"
            mercury__eqvclass__TypeCtorInfo_67_67 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 4089 "eqvclass.c"
            {
#line 4091 "eqvclass.c"
              mercury__eqvclass__TypeInfo_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4093 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_68_68, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_67_67));
#line 4095 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_68_68, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_56));
#line 4097 "eqvclass.c"
            }
#line 325 "eqvclass.m"
            {
#line 325 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_68_68, mercury__eqvclass__Id_19, ((MR_Box) (mercury__eqvclass__Partition_32)), (MR_Word) mercury__eqvclass__PartitionMap0_31, &mercury__eqvclass__conv7_PartitionMap_33);
            }
#line 325 "eqvclass.m"
            mercury__eqvclass__PartitionMap_33 = (MR_Word) mercury__eqvclass__conv7_PartitionMap_33;
#line 326 "eqvclass.m"
            {
#line 326 "eqvclass.m"
              MR_Word base;
#line 326 "eqvclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 326 "eqvclass.m"
              *mercury__eqvclass__EqvClass_8 = base;
#line 326 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId_20));
#line 326 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_33));
#line 326 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_34));
#line 326 "eqvclass.m"
            }
#line 319 "eqvclass.m"
          }
#line 318 "eqvclass.m"
      }
#line 288 "eqvclass.m"
  }
#line 94 "eqvclass.m"
}

#line 93 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__new_equivalence_3_f_0(
#line 93 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_11,
#line 93 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_8,
#line 93 "eqvclass.m"
  MR_Box mercury__eqvclass__X_6,
#line 93 "eqvclass.m"
  MR_Box mercury__eqvclass__Y_7)
#line 93 "eqvclass.m"
{
#line 286 "eqvclass.m"
  {
#line 286 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 286 "eqvclass.m"
    MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_9;

#line 286 "eqvclass.m"
    {
#line 286 "eqvclass.m"
      mercury__eqvclass__new_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__X_6, mercury__eqvclass__Y_7, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_8, &mercury__eqvclass__STATE_VARIABLE_EqvClass_9);
    }
#line 286 "eqvclass.m"
    return mercury__eqvclass__STATE_VARIABLE_EqvClass_9;
#line 286 "eqvclass.m"
  }
#line 93 "eqvclass.m"
}

#line 87 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(
#line 87 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_29,
#line 87 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__1_1,
#line 87 "eqvclass.m"
  MR_Word mercury__eqvclass__HeadVar__2_2,
#line 87 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_3,
#line 87 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_4)
#line 87 "eqvclass.m"
{
#line 330 "eqvclass.m"
  while (MR_TRUE)
#line 330 "eqvclass.m"
    {
#line 330 "eqvclass.m"
      /* tailcall optimized into a loop */
#line 330 "eqvclass.m"
      {
#line 330 "eqvclass.m"
        MR_bool mercury__eqvclass__succeeded;

#line 330 "eqvclass.m"
        if ((mercury__eqvclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 330 "eqvclass.m"
          if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 330 "eqvclass.m"
            *mercury__eqvclass__STATE_VARIABLE_EqvClass_4 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0_3;
#line 330 "eqvclass.m"
          else
#line 331 "eqvclass.m"
            {
#line 332 "eqvclass.m"
              {
#line 332 "eqvclass.m"
                mercury__require__error_1_p_0((MR_String) "eqvclass.ensure_corresponding_equivalences: list mismatch");
#line 332 "eqvclass.m"
                return;
              }
#line 331 "eqvclass.m"
            }
#line 330 "eqvclass.m"
        else
#line 330 "eqvclass.m"
          {
#line 330 "eqvclass.m"
            MR_Word mercury__eqvclass__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 1)));
#line 330 "eqvclass.m"
            MR_Box mercury__eqvclass__V_31_31 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__1_1, (MR_Integer) 0));

#line 330 "eqvclass.m"
            if ((mercury__eqvclass__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "eqvclass.m"
              {
#line 334 "eqvclass.m"
                {
#line 334 "eqvclass.m"
                  mercury__require__error_1_p_0((MR_String) "eqvclass.ensure_corresponding_equivalences: list mismatch");
#line 334 "eqvclass.m"
                  return;
                }
#line 333 "eqvclass.m"
              }
#line 330 "eqvclass.m"
            else
#line 335 "eqvclass.m"
              {
#line 335 "eqvclass.m"
                MR_Box mercury__eqvclass__H2_22 = (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 0));
#line 335 "eqvclass.m"
                MR_Word mercury__eqvclass__T2_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__eqvclass__HeadVar__2_2, (MR_Integer) 1)));
#line 335 "eqvclass.m"
                MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_27_27;

#line 336 "eqvclass.m"
                {
#line 336 "eqvclass.m"
                  mercury__eqvclass__ensure_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_29, mercury__eqvclass__V_31_31, mercury__eqvclass__H2_22, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_3, &mercury__eqvclass__STATE_VARIABLE_EqvClass_27_27);
                }
#line 337 "eqvclass.m"
                /* direct tailcall eliminated */
#line 337 "eqvclass.m"
                {
#line 337 "eqvclass.m"
                  MR_Word mercury__eqvclass__HeadVar__1__tmp_copy_1 = mercury__eqvclass__V_30_30;
#line 337 "eqvclass.m"
                  MR_Word mercury__eqvclass__HeadVar__2__tmp_copy_2 = mercury__eqvclass__T2_23;
#line 337 "eqvclass.m"
                  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0__tmp_copy_3 = mercury__eqvclass__STATE_VARIABLE_EqvClass_27_27;

#line 337 "eqvclass.m"
                  mercury__eqvclass__STATE_VARIABLE_EqvClass_0_3 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0__tmp_copy_3;
#line 337 "eqvclass.m"
                  mercury__eqvclass__HeadVar__2_2 = mercury__eqvclass__HeadVar__2__tmp_copy_2;
#line 337 "eqvclass.m"
                  mercury__eqvclass__HeadVar__1_1 = mercury__eqvclass__HeadVar__1__tmp_copy_1;
#line 337 "eqvclass.m"
                }
#line 337 "eqvclass.m"
                continue;
#line 335 "eqvclass.m"
              }
#line 330 "eqvclass.m"
          }
#line 330 "eqvclass.m"
      }
#line 330 "eqvclass.m"
      break;
#line 330 "eqvclass.m"
    }
#line 87 "eqvclass.m"
}

#line 85 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__ensure_corresponding_equivalences_3_f_0(
#line 85 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_9,
#line 85 "eqvclass.m"
  MR_Word mercury__eqvclass__L1_5,
#line 85 "eqvclass.m"
  MR_Word mercury__eqvclass__L2_6,
#line 85 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_7)
#line 85 "eqvclass.m"
{
#line 340 "eqvclass.m"
  {
#line 340 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 340 "eqvclass.m"
    MR_Word mercury__eqvclass__EqvClass_8;

#line 340 "eqvclass.m"
    {
#line 340 "eqvclass.m"
      mercury__eqvclass__ensure_corresponding_equivalences_4_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__L1_5, mercury__eqvclass__L2_6, mercury__eqvclass__EqvClass0_7, &mercury__eqvclass__EqvClass_8);
    }
#line 340 "eqvclass.m"
    return mercury__eqvclass__EqvClass_8;
#line 340 "eqvclass.m"
  }
#line 85 "eqvclass.m"
}

#line 82 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__ensure_equivalence_4_p_0(
#line 82 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_55,
#line 82 "eqvclass.m"
  MR_Box mercury__eqvclass__ElementA_5,
#line 82 "eqvclass.m"
  MR_Box mercury__eqvclass__ElementB_6,
#line 82 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass0_7,
#line 82 "eqvclass.m"
  MR_Word * mercury__eqvclass__EqvClass_8)
#line 82 "eqvclass.m"
{
#line 230 "eqvclass.m"
  {
#line 230 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 230 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 245 "eqvclass.m"
    MR_Word mercury__eqvclass__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 245 "eqvclass.m"
    MR_Word mercury__eqvclass__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 262 "eqvclass.m"
    MR_Integer mercury__eqvclass__IdA_10;
#line 246 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv0_IdA_10;

#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_56_56, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementA_5, &mercury__eqvclass__conv0_IdA_10);
    }
#line 39 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__eqvclass__IdA_10 = ((MR_Integer) mercury__eqvclass__conv0_IdA_10);
#line 39 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 262 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 253 "eqvclass.m"
      {
#line 253 "eqvclass.m"
        MR_Integer mercury__eqvclass__IdB_11;
#line 247 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_57_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 39 "map.opt"
        MR_Box mercury__eqvclass__conv1_IdB_11;

#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_57_57, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementB_6, &mercury__eqvclass__conv1_IdB_11);
        }
#line 39 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__eqvclass__IdB_11 = ((MR_Integer) mercury__eqvclass__conv1_IdB_11);
#line 39 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 253 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 250 "eqvclass.m"
          {
#line 248 "eqvclass.m"
            mercury__eqvclass__succeeded = (mercury__eqvclass__IdA_10 == mercury__eqvclass__IdB_11);
#line 250 "eqvclass.m"
            if (mercury__eqvclass__succeeded)
#line 249 "eqvclass.m"
              *mercury__eqvclass__EqvClass_8 = mercury__eqvclass__EqvClass0_7;
#line 250 "eqvclass.m"
            else
#line 251 "eqvclass.m"
              {
#line 251 "eqvclass.m"
                mercury__eqvclass__add_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__IdA_10, mercury__eqvclass__IdB_11, mercury__eqvclass__EqvClass0_7, mercury__eqvclass__EqvClass_8);
#line 251 "eqvclass.m"
                return;
              }
#line 250 "eqvclass.m"
          }
#line 253 "eqvclass.m"
        else
#line 254 "eqvclass.m"
          {
#line 254 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 254 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_59_59 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 254 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_60_60;
#line 254 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 254 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionA_13;
#line 254 "eqvclass.m"
            MR_Word mercury__eqvclass__Partition_14;
#line 254 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap_15;
#line 254 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap_16;
#line 254 "eqvclass.m"
            MR_Word mercury__eqvclass__NextId0_17;
#line 254 "eqvclass.m"
            MR_Word mercury__eqvclass__List0_5_81;
#line 254 "eqvclass.m"
            MR_Word mercury__eqvclass__List_6_82;
#line 254 "eqvclass.m"
            MR_Word mercury__eqvclass__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 254 "eqvclass.m"
            MR_Word mercury__eqvclass__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 255 "eqvclass.m"
            MR_Box mercury__eqvclass__conv2_PartitionA_13;
#line 257 "eqvclass.m"
            MR_Word mercury__eqvclass__conv3_PartitionMap_15;
#line 259 "eqvclass.m"
            MR_Word mercury__eqvclass__V_45_45;
#line 259 "eqvclass.m"
            MR_Word mercury__eqvclass__V_46_46;

#line 4445 "eqvclass.c"
            {
#line 4447 "eqvclass.c"
              mercury__eqvclass__TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4449 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_60_60, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_59_59));
#line 4451 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_60_60, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_55));
#line 4453 "eqvclass.c"
            }
#line 255 "eqvclass.m"
            {
#line 255 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_60_60, (MR_Word) mercury__eqvclass__PartitionMap0_12, mercury__eqvclass__IdA_10, &mercury__eqvclass__conv2_PartitionA_13);
            }
#line 255 "eqvclass.m"
            mercury__eqvclass__PartitionA_13 = ((MR_Word) mercury__eqvclass__conv2_PartitionA_13);
#line 67 "set_ordlist.opt"
            mercury__eqvclass__List0_5_81 = (MR_Word) mercury__eqvclass__PartitionA_13;
#line 68 "set_ordlist.opt"
            {
#line 68 "set_ordlist.opt"
              mercury__set_ordlist__insert_2_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__List0_5_81, mercury__eqvclass__ElementB_6, &mercury__eqvclass__List_6_82);
            }
#line 67 "set_ordlist.opt"
            mercury__eqvclass__Partition_14 = (MR_Word) mercury__eqvclass__List_6_82;
#line 257 "eqvclass.m"
            {
#line 257 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_60_60, mercury__eqvclass__IdA_10, ((MR_Box) (mercury__eqvclass__Partition_14)), (MR_Word) mercury__eqvclass__PartitionMap0_12, &mercury__eqvclass__conv3_PartitionMap_15);
            }
#line 257 "eqvclass.m"
            mercury__eqvclass__PartitionMap_15 = (MR_Word) mercury__eqvclass__conv3_PartitionMap_15;
#line 258 "eqvclass.m"
            {
#line 258 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_58_58, mercury__eqvclass__ElementB_6, ((MR_Box) (mercury__eqvclass__IdA_10)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap_16);
            }
#line 259 "eqvclass.m"
            mercury__eqvclass__NextId0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 259 "eqvclass.m"
            mercury__eqvclass__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 259 "eqvclass.m"
            mercury__eqvclass__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 260 "eqvclass.m"
            {
#line 260 "eqvclass.m"
              MR_Word base;
#line 260 "eqvclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 260 "eqvclass.m"
              *mercury__eqvclass__EqvClass_8 = base;
#line 260 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_17));
#line 260 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_15));
#line 260 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_16));
#line 260 "eqvclass.m"
            }
#line 254 "eqvclass.m"
          }
#line 253 "eqvclass.m"
      }
#line 262 "eqvclass.m"
    else
#line 271 "eqvclass.m"
      {
#line 271 "eqvclass.m"
        MR_Word mercury__eqvclass__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 271 "eqvclass.m"
        MR_Word mercury__eqvclass__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 264 "eqvclass.m"
        MR_Word mercury__eqvclass__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 271 "eqvclass.m"
        MR_Integer mercury__eqvclass__IdB_35;
#line 263 "eqvclass.m"
        MR_Word mercury__eqvclass__TypeCtorInfo_61_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 39 "map.opt"
        MR_Box mercury__eqvclass__conv4_IdB_35;

#line 39 "map.opt"
        {
#line 39 "map.opt"
          mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_61_61, mercury__eqvclass__ElementMap0_9, mercury__eqvclass__ElementB_6, &mercury__eqvclass__conv4_IdB_35);
        }
#line 39 "map.opt"
        if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
          {
#line 39 "map.opt"
            mercury__eqvclass__IdB_35 = ((MR_Integer) mercury__eqvclass__conv4_IdB_35);
#line 39 "map.opt"
            mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
          }
#line 271 "eqvclass.m"
        if (mercury__eqvclass__succeeded)
#line 264 "eqvclass.m"
          {
#line 264 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_62_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 264 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_63_63 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 264 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_64_64;
#line 264 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionB_18;
#line 264 "eqvclass.m"
            MR_Word mercury__eqvclass__Partition_26;
#line 264 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap_27;
#line 264 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap_28;
#line 264 "eqvclass.m"
            MR_Word mercury__eqvclass__NextId0_29;
#line 264 "eqvclass.m"
            MR_Word mercury__eqvclass__List0_5_90;
#line 264 "eqvclass.m"
            MR_Word mercury__eqvclass__List_6_91;
#line 265 "eqvclass.m"
            MR_Box mercury__eqvclass__conv5_PartitionB_18;
#line 267 "eqvclass.m"
            MR_Word mercury__eqvclass__conv6_PartitionMap_27;
#line 269 "eqvclass.m"
            MR_Word mercury__eqvclass__V_49_49;
#line 269 "eqvclass.m"
            MR_Word mercury__eqvclass__V_50_50;

#line 4574 "eqvclass.c"
            {
#line 4576 "eqvclass.c"
              mercury__eqvclass__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4578 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_64_64, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_63_63));
#line 4580 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_64_64, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_55));
#line 4582 "eqvclass.c"
            }
#line 265 "eqvclass.m"
            {
#line 265 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mercury__eqvclass__TypeInfo_64_64, (MR_Word) mercury__eqvclass__V_69_69, mercury__eqvclass__IdB_35, &mercury__eqvclass__conv5_PartitionB_18);
            }
#line 265 "eqvclass.m"
            mercury__eqvclass__PartitionB_18 = ((MR_Word) mercury__eqvclass__conv5_PartitionB_18);
#line 67 "set_ordlist.opt"
            mercury__eqvclass__List0_5_90 = (MR_Word) mercury__eqvclass__PartitionB_18;
#line 68 "set_ordlist.opt"
            {
#line 68 "set_ordlist.opt"
              mercury__set_ordlist__insert_2_3_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__List0_5_90, mercury__eqvclass__ElementA_5, &mercury__eqvclass__List_6_91);
            }
#line 67 "set_ordlist.opt"
            mercury__eqvclass__Partition_26 = (MR_Word) mercury__eqvclass__List_6_91;
#line 267 "eqvclass.m"
            {
#line 267 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_64_64, mercury__eqvclass__IdB_35, ((MR_Box) (mercury__eqvclass__Partition_26)), (MR_Word) mercury__eqvclass__V_69_69, &mercury__eqvclass__conv6_PartitionMap_27);
            }
#line 267 "eqvclass.m"
            mercury__eqvclass__PartitionMap_27 = (MR_Word) mercury__eqvclass__conv6_PartitionMap_27;
#line 268 "eqvclass.m"
            {
#line 268 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_62_62, mercury__eqvclass__ElementA_5, ((MR_Box) (mercury__eqvclass__IdB_35)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap_28);
            }
#line 269 "eqvclass.m"
            mercury__eqvclass__NextId0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 269 "eqvclass.m"
            mercury__eqvclass__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 269 "eqvclass.m"
            mercury__eqvclass__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 270 "eqvclass.m"
            {
#line 270 "eqvclass.m"
              MR_Word base;
#line 270 "eqvclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 270 "eqvclass.m"
              *mercury__eqvclass__EqvClass_8 = base;
#line 270 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId0_29));
#line 270 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_27));
#line 270 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_28));
#line 270 "eqvclass.m"
            }
#line 264 "eqvclass.m"
          }
#line 271 "eqvclass.m"
        else
#line 272 "eqvclass.m"
          {
#line 272 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_65_65;
#line 272 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeCtorInfo_66_66;
#line 272 "eqvclass.m"
            MR_Word mercury__eqvclass__TypeInfo_67_67;
#line 272 "eqvclass.m"
            MR_Integer mercury__eqvclass__Id_19 = (MR_Integer) mercury__eqvclass__V_70_70;
#line 272 "eqvclass.m"
            MR_Word mercury__eqvclass__NextId_20;
#line 272 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap1_21;
#line 272 "eqvclass.m"
            MR_Word mercury__eqvclass__V_22_22;
#line 272 "eqvclass.m"
            MR_Word mercury__eqvclass__V_23_23;
#line 272 "eqvclass.m"
            MR_Word mercury__eqvclass__V_24_24;
#line 272 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap0_30;
#line 272 "eqvclass.m"
            MR_Word mercury__eqvclass__Partition_31;
#line 272 "eqvclass.m"
            MR_Word mercury__eqvclass__PartitionMap_32;
#line 272 "eqvclass.m"
            MR_Word mercury__eqvclass__ElementMap_33;
#line 272 "eqvclass.m"
            MR_Integer mercury__eqvclass__V_5_93 = (mercury__eqvclass__Id_19 + (MR_Integer) 1);
#line 278 "eqvclass.m"
            MR_Word mercury__eqvclass__V_53_53;
#line 278 "eqvclass.m"
            MR_Word mercury__eqvclass__V_54_54;
#line 280 "eqvclass.m"
            MR_Word mercury__eqvclass__conv7_PartitionMap_32;

#line 8 "counter.opt"
            mercury__eqvclass__NextId_20 = (MR_Word) mercury__eqvclass__V_5_93;
#line 4677 "eqvclass.c"
            mercury__eqvclass__TypeCtorInfo_65_65 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 274 "eqvclass.m"
            {
#line 274 "eqvclass.m"
              mercury__map__det_insert_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_65_65, mercury__eqvclass__ElementA_5, ((MR_Box) (mercury__eqvclass__Id_19)), mercury__eqvclass__ElementMap0_9, &mercury__eqvclass__ElementMap1_21);
            }
#line 277 "eqvclass.m"
            {
#line 277 "eqvclass.m"
              mercury__map__set_4_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__TypeCtorInfo_65_65, mercury__eqvclass__ElementB_6, ((MR_Box) (mercury__eqvclass__Id_19)), mercury__eqvclass__ElementMap1_21, &mercury__eqvclass__ElementMap_33);
            }
#line 278 "eqvclass.m"
            mercury__eqvclass__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 0)));
#line 278 "eqvclass.m"
            mercury__eqvclass__PartitionMap0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 1)));
#line 278 "eqvclass.m"
            mercury__eqvclass__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass0_7, (MR_Integer) 2)));
#line 279 "eqvclass.m"
            mercury__eqvclass__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 279 "eqvclass.m"
            {
#line 279 "eqvclass.m"
              mercury__eqvclass__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_23_23, 0) = mercury__eqvclass__ElementB_6;
#line 279 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_23_23, 1) = ((MR_Box) (mercury__eqvclass__V_24_24));
#line 279 "eqvclass.m"
            }
#line 279 "eqvclass.m"
            {
#line 279 "eqvclass.m"
              mercury__eqvclass__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_22_22, 0) = mercury__eqvclass__ElementA_5;
#line 279 "eqvclass.m"
              MR_hl_field(MR_mktag(1), mercury__eqvclass__V_22_22, 1) = ((MR_Box) (mercury__eqvclass__V_23_23));
#line 279 "eqvclass.m"
            }
#line 279 "eqvclass.m"
            {
#line 279 "eqvclass.m"
              mercury__set__list_to_set_2_p_0(mercury__eqvclass__TypeInfo_for_T_55, mercury__eqvclass__V_22_22, &mercury__eqvclass__Partition_31);
            }
#line 4722 "eqvclass.c"
            mercury__eqvclass__TypeCtorInfo_66_66 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 4724 "eqvclass.c"
            {
#line 4726 "eqvclass.c"
              mercury__eqvclass__TypeInfo_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4728 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_67_67, 0) = ((MR_Box) (mercury__eqvclass__TypeCtorInfo_66_66));
#line 4730 "eqvclass.c"
              MR_hl_field(MR_mktag(0), mercury__eqvclass__TypeInfo_67_67, 1) = ((MR_Box) (mercury__eqvclass__TypeInfo_for_T_55));
#line 4732 "eqvclass.c"
            }
#line 280 "eqvclass.m"
            {
#line 280 "eqvclass.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mercury__eqvclass__TypeInfo_67_67, mercury__eqvclass__Id_19, ((MR_Box) (mercury__eqvclass__Partition_31)), (MR_Word) mercury__eqvclass__PartitionMap0_30, &mercury__eqvclass__conv7_PartitionMap_32);
            }
#line 280 "eqvclass.m"
            mercury__eqvclass__PartitionMap_32 = (MR_Word) mercury__eqvclass__conv7_PartitionMap_32;
#line 281 "eqvclass.m"
            {
#line 281 "eqvclass.m"
              MR_Word base;
#line 281 "eqvclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 281 "eqvclass.m"
              *mercury__eqvclass__EqvClass_8 = base;
#line 281 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__eqvclass__NextId_20));
#line 281 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__eqvclass__PartitionMap_32));
#line 281 "eqvclass.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__eqvclass__ElementMap_33));
#line 281 "eqvclass.m"
            }
#line 272 "eqvclass.m"
          }
#line 271 "eqvclass.m"
      }
#line 230 "eqvclass.m"
  }
#line 82 "eqvclass.m"
}

#line 81 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__ensure_equivalence_3_f_0(
#line 81 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_11,
#line 81 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_8,
#line 81 "eqvclass.m"
  MR_Box mercury__eqvclass__X_6,
#line 81 "eqvclass.m"
  MR_Box mercury__eqvclass__Y_7)
#line 81 "eqvclass.m"
{
#line 228 "eqvclass.m"
  {
#line 228 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 228 "eqvclass.m"
    MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_9;

#line 228 "eqvclass.m"
    {
#line 228 "eqvclass.m"
      mercury__eqvclass__ensure_equivalence_4_p_0(mercury__eqvclass__TypeInfo_for_T_11, mercury__eqvclass__X_6, mercury__eqvclass__Y_7, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_8, &mercury__eqvclass__STATE_VARIABLE_EqvClass_9);
    }
#line 228 "eqvclass.m"
    return mercury__eqvclass__STATE_VARIABLE_EqvClass_9;
#line 228 "eqvclass.m"
  }
#line 81 "eqvclass.m"
}

#line 76 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__new_element_3_p_0(
#line 76 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_15,
#line 76 "eqvclass.m"
  MR_Box mercury__eqvclass__Element_4,
#line 76 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9,
#line 76 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_10)
#line 76 "eqvclass.m"
{
#line 208 "eqvclass.m"
  {
#line 208 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 208 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9, (MR_Integer) 2)));
#line 209 "eqvclass.m"
    MR_Word mercury__eqvclass__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9, (MR_Integer) 0)));
#line 209 "eqvclass.m"
    MR_Word mercury__eqvclass__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9, (MR_Integer) 1)));
#line 210 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 39 "map.opt"
    MR_Integer mercury__eqvclass___OldId_7;
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv0__OldId_7;

#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_15, mercury__eqvclass__TypeCtorInfo_16_16, mercury__eqvclass__ElementMap0_6, mercury__eqvclass__Element_4, &mercury__eqvclass__conv0__OldId_7);
    }
#line 39 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__eqvclass___OldId_7 = ((MR_Integer) mercury__eqvclass__conv0__OldId_7);
#line 39 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 212 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 211 "eqvclass.m"
      {
#line 211 "eqvclass.m"
        {
#line 211 "eqvclass.m"
          mercury__require__error_1_p_0((MR_String) "new element is already in equivalence class");
#line 211 "eqvclass.m"
          return;
        }
#line 211 "eqvclass.m"
      }
#line 212 "eqvclass.m"
    else
#line 213 "eqvclass.m"
      {
#line 213 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_8_8;

#line 213 "eqvclass.m"
        {
#line 213 "eqvclass.m"
          mercury__eqvclass__add_element_4_p_0(mercury__eqvclass__TypeInfo_for_T_15, mercury__eqvclass__Element_4, &mercury__eqvclass__V_8_8, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_9, mercury__eqvclass__STATE_VARIABLE_EqvClass_10);
        }
#line 213 "eqvclass.m"
      }
#line 208 "eqvclass.m"
  }
#line 76 "eqvclass.m"
}

#line 75 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__new_element_2_f_0(
#line 75 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_9,
#line 75 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6,
#line 75 "eqvclass.m"
  MR_Box mercury__eqvclass__X_5)
#line 75 "eqvclass.m"
{
#line 208 "eqvclass.m"
  {
#line 208 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 208 "eqvclass.m"
    MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_7;
#line 208 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 2)));
#line 209 "eqvclass.m"
    MR_Word mercury__eqvclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 0)));
#line 209 "eqvclass.m"
    MR_Word mercury__eqvclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 1)));
#line 210 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_16_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 39 "map.opt"
    MR_Integer mercury__eqvclass___OldId_15;
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv0__OldId_15;

#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__TypeCtorInfo_16_21, mercury__eqvclass__ElementMap0_14, mercury__eqvclass__X_5, &mercury__eqvclass__conv0__OldId_15);
    }
#line 39 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__eqvclass___OldId_15 = ((MR_Integer) mercury__eqvclass__conv0__OldId_15);
#line 39 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 212 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 211 "eqvclass.m"
      {
#line 211 "eqvclass.m"
        {
#line 211 "eqvclass.m"
          mercury__require__error_1_p_0((MR_String) "new element is already in equivalence class");
        }
#line 211 "eqvclass.m"
      }
#line 212 "eqvclass.m"
    else
#line 213 "eqvclass.m"
      {
#line 213 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_16_16;

#line 213 "eqvclass.m"
        {
#line 213 "eqvclass.m"
          mercury__eqvclass__add_element_4_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__X_5, &mercury__eqvclass__V_16_16, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, &mercury__eqvclass__STATE_VARIABLE_EqvClass_7);
        }
#line 213 "eqvclass.m"
      }
#line 208 "eqvclass.m"
    return mercury__eqvclass__STATE_VARIABLE_EqvClass_7;
#line 208 "eqvclass.m"
  }
#line 75 "eqvclass.m"
}

#line 68 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__ensure_element_3_p_0(
#line 68 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
#line 68 "eqvclass.m"
  MR_Box mercury__eqvclass__Element_4,
#line 68 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7,
#line 68 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_8)
#line 68 "eqvclass.m"
{
#line 197 "eqvclass.m"
  {
#line 197 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 197 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7, (MR_Integer) 2)));
#line 198 "eqvclass.m"
    MR_Word mercury__eqvclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7, (MR_Integer) 0)));
#line 198 "eqvclass.m"
    MR_Word mercury__eqvclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7, (MR_Integer) 1)));
#line 199 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_16_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 39 "map.opt"
    MR_Integer mercury__eqvclass__OldId_17;
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv0_OldId_17;

#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__TypeCtorInfo_16_21, mercury__eqvclass__ElementMap_16, mercury__eqvclass__Element_4, &mercury__eqvclass__conv0_OldId_17);
    }
#line 39 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__eqvclass__OldId_17 = ((MR_Integer) mercury__eqvclass__conv0_OldId_17);
#line 39 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 201 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 200 "eqvclass.m"
      *mercury__eqvclass__STATE_VARIABLE_EqvClass_8 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7;
#line 201 "eqvclass.m"
    else
#line 202 "eqvclass.m"
      {
#line 202 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_25_25;

#line 202 "eqvclass.m"
        {
#line 202 "eqvclass.m"
          mercury__eqvclass__add_element_4_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__Element_4, &mercury__eqvclass__V_25_25, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_7, mercury__eqvclass__STATE_VARIABLE_EqvClass_8);
        }
#line 202 "eqvclass.m"
      }
#line 197 "eqvclass.m"
  }
#line 68 "eqvclass.m"
}

#line 67 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__ensure_element_2_f_0(
#line 67 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_9,
#line 67 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6,
#line 67 "eqvclass.m"
  MR_Box mercury__eqvclass__X_5)
#line 67 "eqvclass.m"
{
#line 197 "eqvclass.m"
  {
#line 197 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 197 "eqvclass.m"
    MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_7;
#line 197 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 2)));
#line 198 "eqvclass.m"
    MR_Word mercury__eqvclass__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 0)));
#line 198 "eqvclass.m"
    MR_Word mercury__eqvclass__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, (MR_Integer) 1)));
#line 199 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_16_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 39 "map.opt"
    MR_Integer mercury__eqvclass__OldId_22;
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv0_OldId_22;

#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__TypeCtorInfo_16_26, mercury__eqvclass__ElementMap_21, mercury__eqvclass__X_5, &mercury__eqvclass__conv0_OldId_22);
    }
#line 39 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__eqvclass__OldId_22 = ((MR_Integer) mercury__eqvclass__conv0_OldId_22);
#line 39 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 201 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 200 "eqvclass.m"
      mercury__eqvclass__STATE_VARIABLE_EqvClass_7 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6;
#line 201 "eqvclass.m"
    else
#line 202 "eqvclass.m"
      {
#line 202 "eqvclass.m"
        MR_Integer mercury__eqvclass__V_30_30;

#line 202 "eqvclass.m"
        {
#line 202 "eqvclass.m"
          mercury__eqvclass__add_element_4_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__X_5, &mercury__eqvclass__V_30_30, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_6, &mercury__eqvclass__STATE_VARIABLE_EqvClass_7);
        }
#line 202 "eqvclass.m"
      }
#line 197 "eqvclass.m"
    return mercury__eqvclass__STATE_VARIABLE_EqvClass_7;
#line 197 "eqvclass.m"
  }
#line 67 "eqvclass.m"
}

#line 60 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__ensure_element_partition_id_4_p_0(
#line 60 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_15,
#line 60 "eqvclass.m"
  MR_Box mercury__eqvclass__Element_5,
#line 60 "eqvclass.m"
  MR_Integer * mercury__eqvclass__Id_6,
#line 60 "eqvclass.m"
  MR_Word mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10,
#line 60 "eqvclass.m"
  MR_Word * mercury__eqvclass__STATE_VARIABLE_EqvClass_11)
#line 60 "eqvclass.m"
{
#line 197 "eqvclass.m"
  {
#line 197 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 197 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10, (MR_Integer) 2)));
#line 198 "eqvclass.m"
    MR_Word mercury__eqvclass__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10, (MR_Integer) 0)));
#line 198 "eqvclass.m"
    MR_Word mercury__eqvclass__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10, (MR_Integer) 1)));
#line 201 "eqvclass.m"
    MR_Integer mercury__eqvclass__OldId_9;
#line 199 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv0_OldId_9;

#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_15, mercury__eqvclass__TypeCtorInfo_16_16, mercury__eqvclass__ElementMap_8, mercury__eqvclass__Element_5, &mercury__eqvclass__conv0_OldId_9);
    }
#line 39 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__eqvclass__OldId_9 = ((MR_Integer) mercury__eqvclass__conv0_OldId_9);
#line 39 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 201 "eqvclass.m"
    if (mercury__eqvclass__succeeded)
#line 200 "eqvclass.m"
      {
#line 200 "eqvclass.m"
        *mercury__eqvclass__Id_6 = mercury__eqvclass__OldId_9;
#line 200 "eqvclass.m"
        *mercury__eqvclass__STATE_VARIABLE_EqvClass_11 = mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10;
#line 200 "eqvclass.m"
      }
#line 201 "eqvclass.m"
    else
#line 202 "eqvclass.m"
      {
#line 202 "eqvclass.m"
        mercury__eqvclass__add_element_4_p_0(mercury__eqvclass__TypeInfo_for_T_15, mercury__eqvclass__Element_5, mercury__eqvclass__Id_6, mercury__eqvclass__STATE_VARIABLE_EqvClass_0_10, mercury__eqvclass__STATE_VARIABLE_EqvClass_11);
#line 202 "eqvclass.m"
        return;
      }
#line 197 "eqvclass.m"
  }
#line 60 "eqvclass.m"
}

#line 53 "eqvclass.m"
MR_bool MR_CALL 
mercury__eqvclass__partition_id_3_p_0(
#line 53 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_10,
#line 53 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass_4,
#line 53 "eqvclass.m"
  MR_Box mercury__eqvclass__Element_5,
#line 53 "eqvclass.m"
  MR_Integer * mercury__eqvclass__PartitionId_6)
#line 53 "eqvclass.m"
{
#line 187 "eqvclass.m"
  {
#line 187 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 187 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 187 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_4, (MR_Integer) 2)));
#line 188 "eqvclass.m"
    MR_Word mercury__eqvclass__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_4, (MR_Integer) 0)));
#line 188 "eqvclass.m"
    MR_Word mercury__eqvclass__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_4, (MR_Integer) 1)));
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv0_PartitionId_6;

#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_10, mercury__eqvclass__TypeCtorInfo_11_11, mercury__eqvclass__ElementMap_7, mercury__eqvclass__Element_5, &mercury__eqvclass__conv0_PartitionId_6);
    }
#line 39 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        *mercury__eqvclass__PartitionId_6 = ((MR_Integer) mercury__eqvclass__conv0_PartitionId_6);
#line 39 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 187 "eqvclass.m"
    return mercury__eqvclass__succeeded;
#line 187 "eqvclass.m"
  }
#line 53 "eqvclass.m"
}

#line 36 "eqvclass.m"
MR_bool MR_CALL 
mercury__eqvclass__is_member_2_p_0(
#line 36 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_9,
#line 36 "eqvclass.m"
  MR_Word mercury__eqvclass__EqvClass_3,
#line 36 "eqvclass.m"
  MR_Box mercury__eqvclass__Element_4)
#line 36 "eqvclass.m"
{
#line 183 "eqvclass.m"
  {
#line 183 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 183 "eqvclass.m"
    MR_Word mercury__eqvclass__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 183 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 2)));
#line 184 "eqvclass.m"
    MR_Word mercury__eqvclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 0)));
#line 184 "eqvclass.m"
    MR_Word mercury__eqvclass__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__eqvclass__EqvClass_3, (MR_Integer) 1)));
#line 39 "map.opt"
    MR_Integer mercury__eqvclass__V_6_6;
#line 39 "map.opt"
    MR_Box mercury__eqvclass__conv0_V_6_6;

#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__eqvclass__succeeded = mercury__tree234__search_3_p_0(mercury__eqvclass__TypeInfo_for_T_9, mercury__eqvclass__TypeCtorInfo_10_10, mercury__eqvclass__ElementMap_5, mercury__eqvclass__Element_4, &mercury__eqvclass__conv0_V_6_6);
    }
#line 39 "map.opt"
    if (mercury__eqvclass__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__eqvclass__V_6_6 = ((MR_Integer) mercury__eqvclass__conv0_V_6_6);
#line 39 "map.opt"
        mercury__eqvclass__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 183 "eqvclass.m"
    return mercury__eqvclass__succeeded;
#line 183 "eqvclass.m"
  }
#line 36 "eqvclass.m"
}

#line 32 "eqvclass.m"
void MR_CALL 
mercury__eqvclass__init_1_p_0(
#line 32 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_7,
#line 32 "eqvclass.m"
  MR_Word * mercury__eqvclass__EqvClass_2)
#line 32 "eqvclass.m"
{
#line 178 "eqvclass.m"
  {
#line 178 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 178 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "eqvclass.m"
    MR_Word mercury__eqvclass__V_5_5 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

#line 181 "eqvclass.m"
    *mercury__eqvclass__EqvClass_2 = (MR_Word) &mercury__eqvclass_scalar_common_1[1];
#line 178 "eqvclass.m"
  }
#line 32 "eqvclass.m"
}

#line 31 "eqvclass.m"
MR_Word MR_CALL 
mercury__eqvclass__init_0_f_0(
#line 31 "eqvclass.m"
  MR_Word mercury__eqvclass__TypeInfo_for_T_3)
#line 31 "eqvclass.m"
{
#line 178 "eqvclass.m"
  {
#line 178 "eqvclass.m"
    MR_bool mercury__eqvclass__succeeded;
#line 178 "eqvclass.m"
    MR_Word mercury__eqvclass__EqvClass_2 = (MR_Word) &mercury__eqvclass_scalar_common_1[1];
#line 178 "eqvclass.m"
    MR_Word mercury__eqvclass__PartitionMap_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "eqvclass.m"
    MR_Word mercury__eqvclass__ElementMap_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "eqvclass.m"
    MR_Word mercury__eqvclass__V_7_7 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

#line 178 "eqvclass.m"
    return mercury__eqvclass__EqvClass_2;
#line 178 "eqvclass.m"
  }
#line 31 "eqvclass.m"
}

void mercury__eqvclass__init(void)
{
}

void mercury__eqvclass__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__eqvclass__eqvclass__type_ctor_info_eqvclass_1);
	MR_register_type_ctor_info(&mercury__eqvclass__eqvclass__type_ctor_info_partition_id_0);
}

void mercury__eqvclass__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module eqvclass. */
