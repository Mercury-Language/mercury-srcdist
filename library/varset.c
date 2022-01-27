/*
** Automatically generated from `varset.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


/* :- module varset. */
/* :- implementation. */

/*
INIT mercury__varset__init
ENDINIT
*/

#include "varset.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
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
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 90 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_supply_1__pseudo_1;

#line 93 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_1__pseudo_1;

#line 96 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0;

#line 99 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_term_1__pseudo_1;

#line 102 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1;

#line 105 "varset.c"
static const MR_PseudoTypeInfo mercury__varset__varset__field_types_varset_1_0[3];

#line 108 "varset.c"
static const MR_ConstString mercury__varset__varset__field_names_varset_1_0[3];

#line 111 "varset.c"
static const MR_DuFunctorDesc mercury__varset__varset__du_functor_desc_varset_1_0;

#line 114 "varset.c"
static const MR_DuFunctorDescPtr mercury__varset__varset__du_stag_ordered_varset_1_0[1];

#line 117 "varset.c"
static const MR_DuPtagLayout mercury__varset__varset__du_ptag_ordered_varset_1[1];

#line 120 "varset.c"
static const MR_DuFunctorDescPtr mercury__varset__varset__du_name_ordered_varset_1[1];

#line 123 "varset.c"
static const MR_Integer mercury__varset__varset__functor_number_map_varset_1[1];

#line 126 "varset.c"
static const MR_FA_TypeInfo_Struct1 mercury__varset__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 129 "varset.c"
static MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0_10001(
#line 132 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 134 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2,
#line 136 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3);

#line 139 "varset.c"
static void MR_CALL 
mercury__varset____Compare____varset_1_0_10001(
#line 142 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 144 "varset.c"
  MR_Box * mercury__varset__wrapper_arg_2,
#line 146 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3,
#line 148 "varset.c"
  MR_Box mercury__varset__wrapper_arg_4);

#line 151 "varset.c"
static MR_bool MR_CALL 
mercury__varset____Unify____varset_0_0_10001(
#line 154 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 156 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2);

#line 159 "varset.c"
static void MR_CALL 
mercury__varset____Compare____varset_0_0_10001(
#line 162 "varset.c"
  MR_Box * mercury__varset__wrapper_arg_1,
#line 164 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2,
#line 166 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 659 "varset.m"
static void MR_CALL 
mercury__varset__append_suffix_until_unique_4_p_0(
#line 659 "varset.m"
  MR_String mercury__varset__Trial0_5,
#line 659 "varset.m"
  MR_String mercury__varset__Suffix_6,
#line 659 "varset.m"
  MR_Word mercury__varset__UsedNames_7,
#line 659 "varset.m"
  MR_String * mercury__varset__Final_8);


static /* final */ const MR_Box mercury__varset_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__varset_scalar_common_2[2][3];

static /* final */ const MR_Box mercury__varset_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__varset_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__varset_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__varset_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_2[2][3] = {
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

static /* final */ const MR_Box mercury__varset_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__varset_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__varset_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__varset_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__varset_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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
#include "type_desc.mh"
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "builtin.mh"
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
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "string.mh"
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



#line 580 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_supply_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_supply_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 588 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 596 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__varset__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 605 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 613 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__varset__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__varset__term__pti_term_1__pseudo_1
  }
};

#line 622 "varset.c"
static const MR_PseudoTypeInfo mercury__varset__varset__field_types_varset_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__varset__term__pti_var_supply_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1
};

#line 629 "varset.c"
static const MR_ConstString mercury__varset__varset__field_names_varset_1_0[3] = {
  (MR_String) "var_supply",
  (MR_String) "var_names",
  (MR_String) "var_values"
};

#line 636 "varset.c"
static const MR_DuFunctorDesc mercury__varset__varset__du_functor_desc_varset_1_0 = {
  (MR_String) "varset",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__varset__varset__field_types_varset_1_0,
  mercury__varset__varset__field_names_varset_1_0,
  NULL,
  NULL
};

#line 651 "varset.c"
static const MR_DuFunctorDescPtr mercury__varset__varset__du_stag_ordered_varset_1_0[1] = {
  &mercury__varset__varset__du_functor_desc_varset_1_0
};

#line 656 "varset.c"
static const MR_DuPtagLayout mercury__varset__varset__du_ptag_ordered_varset_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__varset__varset__du_stag_ordered_varset_1_0
  }
};

#line 665 "varset.c"
static const MR_DuFunctorDescPtr mercury__varset__varset__du_name_ordered_varset_1[1] = {
  &mercury__varset__varset__du_functor_desc_varset_1_0
};

#line 670 "varset.c"
static const MR_Integer mercury__varset__varset__functor_number_map_varset_1[1] = {
  (MR_Integer) 0
};

#line 675 "varset.c"
const MR_TypeCtorInfo_Struct mercury__varset__varset__type_ctor_info_varset_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__varset____Unify____varset_1_0_10001)),
  ((MR_Box) (mercury__varset____Compare____varset_1_0_10001)),
  (MR_String) "varset",
  (MR_String) "varset",
  {
    mercury__varset__varset__du_name_ordered_varset_1
  },
  {
    mercury__varset__varset__du_ptag_ordered_varset_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__varset__varset__functor_number_map_varset_1
};

#line 696 "varset.c"
static const MR_FA_TypeInfo_Struct1 mercury__varset__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 704 "varset.c"
const MR_TypeCtorInfo_Struct mercury__varset__varset__type_ctor_info_varset_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__varset____Unify____varset_0_0_10001)),
  ((MR_Box) (mercury__varset____Compare____varset_0_0_10001)),
  (MR_String) "varset",
  (MR_String) "varset",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__varset__varset__ti_varset_1term__type_ctor_info_generic_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 725 "varset.c"
static MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0_10001(
#line 728 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 730 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2,
#line 732 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3)
#line 734 "varset.c"
{
#line 736 "varset.c"
  {
#line 738 "varset.c"
    MR_bool mercury__varset__succeeded;

#line 741 "varset.c"
    {
#line 743 "varset.c"
      mercury__varset__succeeded = mercury__varset____Unify____varset_1_0(((MR_Word) mercury__varset__wrapper_arg_1), ((MR_Word) mercury__varset__wrapper_arg_2), ((MR_Word) mercury__varset__wrapper_arg_3));
    }
#line 746 "varset.c"
    return mercury__varset__succeeded;
#line 748 "varset.c"
  }
#line 750 "varset.c"
}

#line 753 "varset.c"
static void MR_CALL 
mercury__varset____Compare____varset_1_0_10001(
#line 756 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 758 "varset.c"
  MR_Box * mercury__varset__wrapper_arg_2,
#line 760 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3,
#line 762 "varset.c"
  MR_Box mercury__varset__wrapper_arg_4)
#line 764 "varset.c"
{
#line 766 "varset.c"
  {
#line 768 "varset.c"
    MR_Word mercury__varset__conv0_HeadVar__1_1;

#line 771 "varset.c"
    {
#line 773 "varset.c"
      mercury__varset____Compare____varset_1_0(((MR_Word) mercury__varset__wrapper_arg_1), &mercury__varset__conv0_HeadVar__1_1, ((MR_Word) mercury__varset__wrapper_arg_3), ((MR_Word) mercury__varset__wrapper_arg_4));
    }
#line 776 "varset.c"
    *mercury__varset__wrapper_arg_2 = ((MR_Box) (mercury__varset__conv0_HeadVar__1_1));
#line 778 "varset.c"
  }
#line 780 "varset.c"
}

#line 783 "varset.c"
static MR_bool MR_CALL 
mercury__varset____Unify____varset_0_0_10001(
#line 786 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 788 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2)
#line 790 "varset.c"
{
#line 792 "varset.c"
  {
#line 794 "varset.c"
    MR_bool mercury__varset__succeeded;

#line 797 "varset.c"
    {
#line 799 "varset.c"
      mercury__varset__succeeded = mercury__varset____Unify____varset_0_0(((MR_Word) mercury__varset__wrapper_arg_1), ((MR_Word) mercury__varset__wrapper_arg_2));
    }
#line 802 "varset.c"
    return mercury__varset__succeeded;
#line 804 "varset.c"
  }
#line 806 "varset.c"
}

#line 809 "varset.c"
static void MR_CALL 
mercury__varset____Compare____varset_0_0_10001(
#line 812 "varset.c"
  MR_Box * mercury__varset__wrapper_arg_1,
#line 814 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2,
#line 816 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3)
#line 818 "varset.c"
{
#line 820 "varset.c"
  {
#line 822 "varset.c"
    MR_Word mercury__varset__conv0_HeadVar__1_1;

#line 825 "varset.c"
    {
#line 827 "varset.c"
      mercury__varset____Compare____varset_0_0(&mercury__varset__conv0_HeadVar__1_1, ((MR_Word) mercury__varset__wrapper_arg_2), ((MR_Word) mercury__varset__wrapper_arg_3));
    }
#line 830 "varset.c"
    *mercury__varset__wrapper_arg_1 = ((MR_Box) (mercury__varset__conv0_HeadVar__1_1));
#line 832 "varset.c"
  }
#line 834 "varset.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__varset__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 292 "varset.m"
void MR_CALL 
mercury__varset____Compare____varset_1_0(
#line 292 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_14,
#line 292 "varset.m"
  MR_Word * mercury__varset__HeadVar__1_1,
#line 292 "varset.m"
  MR_Word mercury__varset__HeadVar__2_2,
#line 292 "varset.m"
  MR_Word mercury__varset__HeadVar__3_3)
#line 292 "varset.m"
{
#line 292 "varset.m"
  {
#line 292 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 292 "varset.m"
    MR_Integer mercury__varset__CastX_12 = (MR_Integer) mercury__varset__HeadVar__2_2;
#line 292 "varset.m"
    MR_Integer mercury__varset__CastY_13 = (MR_Integer) mercury__varset__HeadVar__3_3;

#line 292 "varset.m"
    mercury__varset__succeeded = (mercury__varset__CastX_12 == mercury__varset__CastY_13);
#line 292 "varset.m"
    if (mercury__varset__succeeded)
#line 880 "varset.c"
      *mercury__varset__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "varset.m"
    else
#line 292 "varset.m"
      {
#line 292 "varset.m"
        MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 0)));
#line 292 "varset.m"
        MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 1)));
#line 292 "varset.m"
        MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 2)));
#line 292 "varset.m"
        MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 0)));
#line 292 "varset.m"
        MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 1)));
#line 292 "varset.m"
        MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 2)));
#line 292 "varset.m"
        MR_Word mercury__varset__V_10_10;
#line 292 "varset.m"
        MR_Integer mercury__varset__V_28_28 = (MR_Integer) mercury__varset__V_4_4;
#line 292 "varset.m"
        MR_Integer mercury__varset__V_29_29 = (MR_Integer) mercury__varset__V_7_7;

#line 66 "private_builtin.opt"
        mercury__varset__succeeded = (mercury__varset__V_28_28 < mercury__varset__V_29_29);
#line 69 "private_builtin.opt"
        if (mercury__varset__succeeded)
#line 68 "private_builtin.opt"
          mercury__varset__V_10_10 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__varset__succeeded = (mercury__varset__V_28_28 == mercury__varset__V_29_29);
#line 74 "private_builtin.opt"
            if (mercury__varset__succeeded)
#line 73 "private_builtin.opt"
              mercury__varset__V_10_10 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__varset__V_10_10 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 927 "varset.c"
        mercury__varset__succeeded = (mercury__varset__V_10_10 == (MR_Integer) 0);
#line 292 "varset.m"
        mercury__varset__succeeded = !(mercury__varset__succeeded);
#line 292 "varset.m"
        if (mercury__varset__succeeded)
#line 292 "varset.m"
          *mercury__varset__HeadVar__1_1 = mercury__varset__V_10_10;
#line 292 "varset.m"
        else
#line 292 "varset.m"
          {
#line 292 "varset.m"
            MR_Word mercury__varset__V_11_11;
#line 292 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 292 "varset.m"
            MR_Word mercury__varset__TypeInfo_18_18;
#line 292 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 948 "varset.c"
            {
#line 950 "varset.c"
              mercury__varset__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 952 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_17_17));
#line 954 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 956 "varset.c"
            }
#line 292 "varset.m"
            {
#line 292 "varset.m"
              mercury__tree234____Compare____tree234_2_0(mercury__varset__TypeInfo_18_18, mercury__varset__TypeCtorInfo_19_19, &mercury__varset__V_11_11, (MR_Word) mercury__varset__V_5_5, (MR_Word) mercury__varset__V_8_8);
            }
#line 963 "varset.c"
            mercury__varset__succeeded = (mercury__varset__V_11_11 == (MR_Integer) 0);
#line 292 "varset.m"
            mercury__varset__succeeded = !(mercury__varset__succeeded);
#line 292 "varset.m"
            if (mercury__varset__succeeded)
#line 292 "varset.m"
              *mercury__varset__HeadVar__1_1 = mercury__varset__V_11_11;
#line 292 "varset.m"
            else
#line 292 "varset.m"
              {
#line 292 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 292 "varset.m"
                MR_Word mercury__varset__TypeInfo_23_23;
#line 292 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_24_24;
#line 292 "varset.m"
                MR_Word mercury__varset__TypeInfo_25_25;

#line 984 "varset.c"
                {
#line 986 "varset.c"
                  mercury__varset__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 988 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_23_23, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_22_22));
#line 990 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_23_23, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 992 "varset.c"
                }
#line 994 "varset.c"
                mercury__varset__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 996 "varset.c"
                {
#line 998 "varset.c"
                  mercury__varset__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_25_25, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_24_24));
#line 1002 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_25_25, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 1004 "varset.c"
                }
#line 292 "varset.m"
                {
#line 292 "varset.m"
                  mercury__tree234____Compare____tree234_2_0(mercury__varset__TypeInfo_23_23, mercury__varset__TypeInfo_25_25, mercury__varset__HeadVar__1_1, (MR_Word) mercury__varset__V_6_6, (MR_Word) mercury__varset__V_9_9);
#line 292 "varset.m"
                  return;
                }
#line 292 "varset.m"
              }
#line 292 "varset.m"
          }
#line 292 "varset.m"
      }
#line 292 "varset.m"
  }
#line 292 "varset.m"
}

#line 292 "varset.m"
MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0(
#line 292 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_11,
#line 292 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 292 "varset.m"
  MR_Word mercury__varset__HeadVar__2_2)
#line 292 "varset.m"
{
#line 292 "varset.m"
  {
#line 292 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 292 "varset.m"
    MR_Integer mercury__varset__CastX_9 = (MR_Integer) mercury__varset__HeadVar__1_1;
#line 292 "varset.m"
    MR_Integer mercury__varset__CastY_10 = (MR_Integer) mercury__varset__HeadVar__2_2;

#line 292 "varset.m"
    mercury__varset__succeeded = (mercury__varset__CastX_9 == mercury__varset__CastY_10);
#line 292 "varset.m"
    if (mercury__varset__succeeded)
#line 292 "varset.m"
      mercury__varset__succeeded = MR_TRUE;
#line 292 "varset.m"
    else
#line 292 "varset.m"
      {
#line 292 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_14_14;
#line 292 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_16_16;
#line 292 "varset.m"
        MR_Word mercury__varset__TypeInfo_20_20;
#line 292 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_21_21;
#line 292 "varset.m"
        MR_Word mercury__varset__TypeInfo_22_22;
#line 292 "varset.m"
        MR_Word mercury__varset__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 292 "varset.m"
        MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 292 "varset.m"
        MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));
#line 292 "varset.m"
        MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 0)));
#line 292 "varset.m"
        MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 1)));
#line 292 "varset.m"
        MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 2)));
#line 292 "varset.m"
        MR_Integer mercury__varset__V_25_25 = (MR_Integer) mercury__varset__V_3_3;
#line 292 "varset.m"
        MR_Integer mercury__varset__V_26_26 = (MR_Integer) mercury__varset__V_6_6;

#line 1081 "varset.c"
        mercury__varset__succeeded = (mercury__varset__V_25_25 == mercury__varset__V_26_26);
#line 292 "varset.m"
        if (mercury__varset__succeeded)
#line 292 "varset.m"
          {
#line 1087 "varset.c"
            mercury__varset__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1089 "varset.c"
            mercury__varset__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1091 "varset.c"
            {
#line 1093 "varset.c"
              mercury__varset__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1095 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_14_14));
#line 1097 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
#line 1099 "varset.c"
            }
#line 1101 "varset.c"
            {
#line 1103 "varset.c"
              mercury__varset__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__varset__TypeInfo_20_20, mercury__varset__TypeCtorInfo_16_16, (MR_Word) mercury__varset__V_4_4, (MR_Word) mercury__varset__V_7_7);
            }
#line 292 "varset.m"
            if (mercury__varset__succeeded)
#line 292 "varset.m"
              {
#line 1110 "varset.c"
                mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1112 "varset.c"
                {
#line 1114 "varset.c"
                  mercury__varset__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_21_21));
#line 1118 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
#line 1120 "varset.c"
                }
#line 1122 "varset.c"
                {
#line 1124 "varset.c"
                  return mercury__varset__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__varset__TypeInfo_20_20, mercury__varset__TypeInfo_22_22, (MR_Word) mercury__varset__V_5_5, (MR_Word) mercury__varset__V_8_8);
                }
#line 292 "varset.m"
              }
#line 292 "varset.m"
          }
#line 292 "varset.m"
      }
#line 292 "varset.m"
    return mercury__varset__succeeded;
#line 292 "varset.m"
  }
#line 292 "varset.m"
}

#line 45 "varset.m"
void MR_CALL 
mercury__varset____Compare____varset_0_0(
#line 45 "varset.m"
  MR_Word * mercury__varset__HeadVar__1_1,
#line 45 "varset.m"
  MR_Word mercury__varset__HeadVar__2_2,
#line 45 "varset.m"
  MR_Word mercury__varset__HeadVar__3_3)
#line 45 "varset.m"
{
#line 45 "varset.m"
  {
#line 45 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 45 "varset.m"
    MR_Word mercury__varset__TypeInfo_6_6 = (MR_Word) &mercury__varset_scalar_common_1[0];
#line 45 "varset.m"
    MR_Word mercury__varset__Cast_HeadVar1_4 = mercury__varset__HeadVar__2_2;
#line 45 "varset.m"
    MR_Word mercury__varset__Cast_HeadVar2_5 = mercury__varset__HeadVar__3_3;

#line 45 "varset.m"
    {
#line 45 "varset.m"
      mercury__builtin__compare_3_p_0(mercury__varset__TypeInfo_6_6, mercury__varset__HeadVar__1_1, ((MR_Box) (mercury__varset__Cast_HeadVar1_4)), ((MR_Box) (mercury__varset__Cast_HeadVar2_5)));
#line 45 "varset.m"
      return;
    }
#line 45 "varset.m"
  }
#line 45 "varset.m"
}

#line 45 "varset.m"
MR_bool MR_CALL 
mercury__varset____Unify____varset_0_0(
#line 45 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 45 "varset.m"
  MR_Word mercury__varset__HeadVar__2_2)
#line 45 "varset.m"
{
#line 45 "varset.m"
  {
#line 45 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 45 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_5_5 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 45 "varset.m"
    MR_Word mercury__varset__Cast_HeadVar1_3 = mercury__varset__HeadVar__1_1;
#line 45 "varset.m"
    MR_Word mercury__varset__Cast_HeadVar2_4 = mercury__varset__HeadVar__2_2;

#line 45 "varset.m"
    {
#line 45 "varset.m"
      return mercury__varset__succeeded = mercury__varset____Unify____varset_1_0(mercury__varset__TypeCtorInfo_5_5, mercury__varset__Cast_HeadVar1_3, mercury__varset__Cast_HeadVar2_4);
    }
#line 45 "varset.m"
    return mercury__varset__succeeded;
#line 45 "varset.m"
  }
#line 45 "varset.m"
}

#line 696 "varset.m"
void MR_CALL 
mercury__varset__copy_var_names_4_p_0(
#line 696 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_20,
#line 696 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 696 "varset.m"
  MR_Word mercury__varset__HeadVar__2_2,
#line 696 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_NewVarSet_0_3,
#line 696 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_NewVarSet_4)
#line 696 "varset.m"
{
#line 699 "varset.m"
  while (MR_TRUE)
#line 699 "varset.m"
    {
#line 699 "varset.m"
      /* tailcall optimized into a loop */
#line 699 "varset.m"
      {
#line 699 "varset.m"
        MR_bool mercury__varset__succeeded;

#line 699 "varset.m"
        if ((mercury__varset__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "varset.m"
          *mercury__varset__STATE_VARIABLE_NewVarSet_4 = mercury__varset__STATE_VARIABLE_NewVarSet_0_3;
#line 699 "varset.m"
        else
#line 700 "varset.m"
          {
#line 700 "varset.m"
            MR_Word mercury__varset__OldVar_9;
#line 700 "varset.m"
            MR_String mercury__varset__Name_10;
#line 700 "varset.m"
            MR_Word mercury__varset__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 700 "varset.m"
            MR_Word mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 700 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_NewVarSet_18_18;
#line 703 "varset.m"
            MR_Word mercury__varset__NewVar_14;
#line 701 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_21_21;
#line 701 "varset.m"
            MR_Word mercury__varset__TypeInfo_22_22;
#line 41 "map.opt"
            MR_Box mercury__varset__conv0_NewVar_14;

#line 700 "varset.m"
            mercury__varset__OldVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__V_17_17, (MR_Integer) 0)));
#line 700 "varset.m"
            mercury__varset__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__varset__V_17_17, (MR_Integer) 1)));
#line 1263 "varset.c"
            mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1265 "varset.c"
            {
#line 1267 "varset.c"
              mercury__varset__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1269 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_21_21));
#line 1271 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_20));
#line 1273 "varset.c"
            }
#line 41 "map.opt"
            {
#line 41 "map.opt"
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_20, mercury__varset__TypeInfo_22_22, mercury__varset__TypeInfo_22_22, (MR_Word) mercury__varset__HeadVar__2_2, mercury__varset__OldVar_9, &mercury__varset__conv0_NewVar_14);
            }
#line 41 "map.opt"
            if (mercury__varset__succeeded)
#line 41 "map.opt"
              {
#line 41 "map.opt"
                mercury__varset__NewVar_14 = ((MR_Word) mercury__varset__conv0_NewVar_14);
#line 41 "map.opt"
                mercury__varset__succeeded = MR_TRUE;
#line 41 "map.opt"
              }
#line 703 "varset.m"
            if (mercury__varset__succeeded)
#line 702 "varset.m"
              {
#line 702 "varset.m"
                mercury__varset__name_var_4_p_0(mercury__varset__TypeInfo_for_T_20, mercury__varset__NewVar_14, mercury__varset__Name_10, mercury__varset__STATE_VARIABLE_NewVarSet_0_3, &mercury__varset__STATE_VARIABLE_NewVarSet_18_18);
              }
#line 703 "varset.m"
            else
#line 702 "varset.m"
              mercury__varset__STATE_VARIABLE_NewVarSet_18_18 = mercury__varset__STATE_VARIABLE_NewVarSet_0_3;
#line 706 "varset.m"
            /* direct tailcall eliminated */
#line 706 "varset.m"
            {
#line 706 "varset.m"
              MR_Word mercury__varset__HeadVar__1__tmp_copy_1 = mercury__varset__Rest_11;
#line 706 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_NewVarSet_0__tmp_copy_3 = mercury__varset__STATE_VARIABLE_NewVarSet_18_18;

#line 706 "varset.m"
              mercury__varset__STATE_VARIABLE_NewVarSet_0_3 = mercury__varset__STATE_VARIABLE_NewVarSet_0__tmp_copy_3;
#line 706 "varset.m"
              mercury__varset__HeadVar__1_1 = mercury__varset__HeadVar__1__tmp_copy_1;
#line 706 "varset.m"
            }
#line 706 "varset.m"
            continue;
#line 700 "varset.m"
          }
#line 699 "varset.m"
      }
#line 699 "varset.m"
      break;
#line 699 "varset.m"
    }
#line 696 "varset.m"
}

#line 659 "varset.m"
static void MR_CALL 
mercury__varset__append_suffix_until_unique_4_p_0(
#line 659 "varset.m"
  MR_String mercury__varset__Trial0_5,
#line 659 "varset.m"
  MR_String mercury__varset__Suffix_6,
#line 659 "varset.m"
  MR_Word mercury__varset__UsedNames_7,
#line 659 "varset.m"
  MR_String * mercury__varset__Final_8)
#line 659 "varset.m"
{
#line 666 "varset.m"
  while (MR_TRUE)
#line 666 "varset.m"
    {
#line 666 "varset.m"
      /* tailcall optimized into a loop */
#line 666 "varset.m"
      {
#line 666 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 663 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 663 "varset.m"
        {
#line 663 "varset.m"
          mercury__varset__succeeded = mercury__set__member_2_p_0(mercury__varset__TypeCtorInfo_10_10, ((MR_Box) (mercury__varset__Trial0_5)), mercury__varset__UsedNames_7);
        }
#line 666 "varset.m"
        if (mercury__varset__succeeded)
#line 664 "varset.m"
          {
#line 664 "varset.m"
            MR_String mercury__varset__Trial1_9;

#line 664 "varset.m"
            {
#line 664 "varset.m"
              mercury__string__append_3_p_2(mercury__varset__Trial0_5, mercury__varset__Suffix_6, &mercury__varset__Trial1_9);
            }
#line 665 "varset.m"
            /* direct tailcall eliminated */
#line 665 "varset.m"
            {
#line 665 "varset.m"
              MR_String mercury__varset__Trial0__tmp_copy_5 = mercury__varset__Trial1_9;

#line 665 "varset.m"
              mercury__varset__Trial0_5 = mercury__varset__Trial0__tmp_copy_5;
#line 665 "varset.m"
            }
#line 665 "varset.m"
            continue;
#line 664 "varset.m"
          }
#line 666 "varset.m"
        else
#line 667 "varset.m"
          *mercury__varset__Final_8 = mercury__varset__Trial0_5;
#line 666 "varset.m"
      }
#line 666 "varset.m"
      break;
#line 666 "varset.m"
    }
#line 659 "varset.m"
}

#line 632 "varset.m"
void MR_CALL 
mercury__varset__ensure_unique_names_2_6_p_0(
#line 632 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_35,
#line 632 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 632 "varset.m"
  MR_String mercury__varset__Suffix_2,
#line 632 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_UsedNames_0_3,
#line 632 "varset.m"
  MR_Word mercury__varset__OldVarNames_4,
#line 632 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarNames_0_5,
#line 632 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarNames_6)
#line 632 "varset.m"
{
#line 636 "varset.m"
  while (MR_TRUE)
#line 636 "varset.m"
    {
#line 636 "varset.m"
      /* tailcall optimized into a loop */
#line 636 "varset.m"
      {
#line 636 "varset.m"
        MR_bool mercury__varset__succeeded;

#line 636 "varset.m"
        if ((mercury__varset__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 636 "varset.m"
          *mercury__varset__STATE_VARIABLE_VarNames_6 = mercury__varset__STATE_VARIABLE_VarNames_0_5;
#line 636 "varset.m"
        else
#line 638 "varset.m"
          {
#line 638 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_40_40;
#line 638 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_41_41;
#line 638 "varset.m"
            MR_Word mercury__varset__TypeInfo_42_42;
#line 638 "varset.m"
            MR_Word mercury__varset__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 638 "varset.m"
            MR_Word mercury__varset__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 638 "varset.m"
            MR_String mercury__varset__TrialName_23;
#line 638 "varset.m"
            MR_String mercury__varset__FinalName_24;
#line 638 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_UsedNames_30_30;
#line 638 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_VarNames_31_31;
#line 638 "varset.m"
            MR_Word mercury__varset__List0_5_59;
#line 638 "varset.m"
            MR_Word mercury__varset__List_6_60;
#line 648 "varset.m"
            MR_String mercury__varset__OldName_19;
#line 639 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 639 "varset.m"
            MR_Word mercury__varset__TypeInfo_37_37;
#line 639 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 41 "map.opt"
            MR_Box mercury__varset__conv0_OldName_19;

#line 1471 "varset.c"
            {
#line 1473 "varset.c"
              mercury__varset__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1475 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_37_37, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_36_36));
#line 1477 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_37_37, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_35));
#line 1479 "varset.c"
            }
#line 41 "map.opt"
            {
#line 41 "map.opt"
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_35, mercury__varset__TypeInfo_37_37, mercury__varset__TypeCtorInfo_38_38, mercury__varset__OldVarNames_4, mercury__varset__Var_13, &mercury__varset__conv0_OldName_19);
            }
#line 41 "map.opt"
            if (mercury__varset__succeeded)
#line 41 "map.opt"
              {
#line 41 "map.opt"
                mercury__varset__OldName_19 = ((MR_String) mercury__varset__conv0_OldName_19);
#line 41 "map.opt"
                mercury__varset__succeeded = MR_TRUE;
#line 41 "map.opt"
              }
#line 648 "varset.m"
            if (mercury__varset__succeeded)
#line 645 "varset.m"
              {
#line 640 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 640 "varset.m"
                {
#line 640 "varset.m"
                  mercury__varset__succeeded = mercury__set__member_2_p_0(mercury__varset__TypeCtorInfo_39_39, ((MR_Box) (mercury__varset__OldName_19)), mercury__varset__STATE_VARIABLE_UsedNames_0_3);
                }
#line 645 "varset.m"
                if (mercury__varset__succeeded)
#line 641 "varset.m"
                  {
#line 641 "varset.m"
                    MR_Integer mercury__varset__VarNum_20 = (MR_Integer) mercury__varset__Var_13;
#line 641 "varset.m"
                    MR_String mercury__varset__NumStr_21;
#line 641 "varset.m"
                    MR_String mercury__varset__NumSuffix_22;

#line 705 "string.opt"
                    {
#line 705 "string.opt"
                      mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_20, (MR_Integer) 10, &mercury__varset__NumStr_21);
                    }
#line 643 "varset.m"
                    {
#line 643 "varset.m"
                      mercury__string__append_3_p_2((MR_String) "_", mercury__varset__NumStr_21, &mercury__varset__NumSuffix_22);
                    }
#line 644 "varset.m"
                    {
#line 644 "varset.m"
                      mercury__string__append_3_p_2(mercury__varset__OldName_19, mercury__varset__NumSuffix_22, &mercury__varset__TrialName_23);
                    }
#line 641 "varset.m"
                  }
#line 645 "varset.m"
                else
#line 646 "varset.m"
                  mercury__varset__TrialName_23 = mercury__varset__OldName_19;
#line 645 "varset.m"
              }
#line 648 "varset.m"
            else
#line 649 "varset.m"
              {
#line 649 "varset.m"
                MR_Integer mercury__varset__VarNum_33 = (MR_Integer) mercury__varset__Var_13;
#line 649 "varset.m"
                MR_String mercury__varset__NumStr_34;

#line 705 "string.opt"
                {
#line 705 "string.opt"
                  mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_33, (MR_Integer) 10, &mercury__varset__NumStr_34);
                }
#line 651 "varset.m"
                {
#line 651 "varset.m"
                  mercury__string__append_3_p_2((MR_String) "Var_", mercury__varset__NumStr_34, &mercury__varset__TrialName_23);
                }
#line 649 "varset.m"
              }
#line 653 "varset.m"
            {
#line 653 "varset.m"
              mercury__varset__append_suffix_until_unique_4_p_0(mercury__varset__TrialName_23, mercury__varset__Suffix_2, mercury__varset__STATE_VARIABLE_UsedNames_0_3, &mercury__varset__FinalName_24);
            }
#line 1568 "varset.c"
            mercury__varset__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 67 "set_ordlist.opt"
            mercury__varset__List0_5_59 = (MR_Word) mercury__varset__STATE_VARIABLE_UsedNames_0_3;
#line 68 "set_ordlist.opt"
            {
#line 68 "set_ordlist.opt"
              mercury__set_ordlist__insert_2_3_p_0(mercury__varset__TypeCtorInfo_40_40, mercury__varset__List0_5_59, ((MR_Box) (mercury__varset__FinalName_24)), &mercury__varset__List_6_60);
            }
#line 67 "set_ordlist.opt"
            mercury__varset__STATE_VARIABLE_UsedNames_30_30 = (MR_Word) mercury__varset__List_6_60;
#line 1579 "varset.c"
            mercury__varset__TypeCtorInfo_41_41 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1581 "varset.c"
            {
#line 1583 "varset.c"
              mercury__varset__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1585 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_41_41));
#line 1587 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_35));
#line 1589 "varset.c"
            }
#line 655 "varset.m"
            {
#line 655 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_35, mercury__varset__TypeInfo_42_42, mercury__varset__TypeCtorInfo_40_40, mercury__varset__Var_13, ((MR_Box) (mercury__varset__FinalName_24)), mercury__varset__STATE_VARIABLE_VarNames_0_5, &mercury__varset__STATE_VARIABLE_VarNames_31_31);
            }
#line 656 "varset.m"
            /* direct tailcall eliminated */
#line 656 "varset.m"
            {
#line 656 "varset.m"
              MR_Word mercury__varset__HeadVar__1__tmp_copy_1 = mercury__varset__Vars_14;
#line 656 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_UsedNames_0__tmp_copy_3 = mercury__varset__STATE_VARIABLE_UsedNames_30_30;
#line 656 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_VarNames_0__tmp_copy_5 = mercury__varset__STATE_VARIABLE_VarNames_31_31;

#line 656 "varset.m"
              mercury__varset__STATE_VARIABLE_VarNames_0_5 = mercury__varset__STATE_VARIABLE_VarNames_0__tmp_copy_5;
#line 656 "varset.m"
              mercury__varset__STATE_VARIABLE_UsedNames_0_3 = mercury__varset__STATE_VARIABLE_UsedNames_0__tmp_copy_3;
#line 656 "varset.m"
              mercury__varset__HeadVar__1_1 = mercury__varset__HeadVar__1__tmp_copy_1;
#line 656 "varset.m"
            }
#line 656 "varset.m"
            continue;
#line 638 "varset.m"
          }
#line 636 "varset.m"
      }
#line 636 "varset.m"
      break;
#line 636 "varset.m"
    }
#line 632 "varset.m"
}

#line 594 "varset.m"
void MR_CALL 
mercury__varset__merge_subst_without_names_2_6_p_0(
#line 594 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_26,
#line 594 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_14,
#line 594 "varset.m"
  MR_Word mercury__varset__MaxSupplyB_8,
#line 594 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_15,
#line 594 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_16,
#line 594 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Subst_0_17,
#line 594 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Subst_18)
#line 594 "varset.m"
{
#line 601 "varset.m"
  while (MR_TRUE)
#line 601 "varset.m"
    {
#line 601 "varset.m"
      /* tailcall optimized into a loop */
#line 601 "varset.m"
      {
#line 601 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 599 "varset.m"
        MR_Integer mercury__varset__V_33_33 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_14;
#line 599 "varset.m"
        MR_Integer mercury__varset__V_34_34 = (MR_Integer) mercury__varset__MaxSupplyB_8;

#line 599 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_33_33 == mercury__varset__V_34_34);
#line 601 "varset.m"
        if (mercury__varset__succeeded)
#line 600 "varset.m"
          {
#line 600 "varset.m"
            *mercury__varset__STATE_VARIABLE_Subst_18 = mercury__varset__STATE_VARIABLE_Subst_0_17;
#line 600 "varset.m"
            *mercury__varset__STATE_VARIABLE_Supply_16 = mercury__varset__STATE_VARIABLE_Supply_0_15;
#line 600 "varset.m"
          }
#line 601 "varset.m"
        else
#line 602 "varset.m"
          {
#line 602 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_27_27;
#line 602 "varset.m"
            MR_Word mercury__varset__TypeInfo_28_28;
#line 602 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_29_29;
#line 602 "varset.m"
            MR_Word mercury__varset__TypeInfo_30_30;
#line 602 "varset.m"
            MR_Word mercury__varset__Var_11;
#line 602 "varset.m"
            MR_Word mercury__varset__VarB_12;
#line 602 "varset.m"
            MR_Word mercury__varset__Replacement_13;
#line 602 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Supply_19_19;
#line 602 "varset.m"
            MR_Word mercury__varset__V_21_21;
#line 602 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Subst_22_22;
#line 602 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_20_25;
#line 602 "varset.m"
            MR_Integer mercury__varset__V_4_35;
#line 602 "varset.m"
            MR_Integer mercury__varset__V0_5_36 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_15;
#line 602 "varset.m"
            MR_Integer mercury__varset__V_4_38;
#line 602 "varset.m"
            MR_Integer mercury__varset__V0_5_39;
#line 605 "varset.m"
            MR_Word mercury__varset__conv0_STATE_VARIABLE_Subst_22_22;

#line 106 "term.opt"
            mercury__varset__V_4_35 = (mercury__varset__V0_5_36 + (MR_Integer) 1);
#line 105 "term.opt"
            mercury__varset__Var_11 = (MR_Word) mercury__varset__V_4_35;
#line 105 "term.opt"
            mercury__varset__STATE_VARIABLE_Supply_19_19 = (MR_Word) mercury__varset__V_4_35;
#line 105 "term.opt"
            mercury__varset__V0_5_39 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_14;
#line 106 "term.opt"
            mercury__varset__V_4_38 = (mercury__varset__V0_5_39 + (MR_Integer) 1);
#line 105 "term.opt"
            mercury__varset__VarB_12 = (MR_Word) mercury__varset__V_4_38;
#line 105 "term.opt"
            mercury__varset__STATE_VARIABLE_SupplyB_20_25 = (MR_Word) mercury__varset__V_4_38;
#line 120 "term.opt"
            mercury__varset__V_21_21 = (MR_Word) &mercury__varset_scalar_common_1[1];
#line 604 "varset.m"
            {
#line 604 "varset.m"
              mercury__varset__Replacement_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_13, 0) = ((MR_Box) (mercury__varset__Var_11));
#line 604 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_13, 1) = ((MR_Box) (mercury__varset__V_21_21));
#line 604 "varset.m"
            }
#line 1737 "varset.c"
            mercury__varset__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1739 "varset.c"
            {
#line 1741 "varset.c"
              mercury__varset__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1743 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_28_28, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_27_27));
#line 1745 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_28_28, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_26));
#line 1747 "varset.c"
            }
#line 1749 "varset.c"
            mercury__varset__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1751 "varset.c"
            {
#line 1753 "varset.c"
              mercury__varset__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1755 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_30_30, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_29_29));
#line 1757 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_30_30, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_26));
#line 1759 "varset.c"
            }
#line 605 "varset.m"
            {
#line 605 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_26, mercury__varset__TypeInfo_28_28, mercury__varset__TypeInfo_30_30, mercury__varset__VarB_12, ((MR_Box) (mercury__varset__Replacement_13)), (MR_Word) mercury__varset__STATE_VARIABLE_Subst_0_17, &mercury__varset__conv0_STATE_VARIABLE_Subst_22_22);
            }
#line 605 "varset.m"
            mercury__varset__STATE_VARIABLE_Subst_22_22 = (MR_Word) mercury__varset__conv0_STATE_VARIABLE_Subst_22_22;
#line 606 "varset.m"
            /* direct tailcall eliminated */
#line 606 "varset.m"
            {
#line 606 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_14 = mercury__varset__STATE_VARIABLE_SupplyB_20_25;
#line 606 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_15 = mercury__varset__STATE_VARIABLE_Supply_19_19;
#line 606 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_17 = mercury__varset__STATE_VARIABLE_Subst_22_22;

#line 606 "varset.m"
              mercury__varset__STATE_VARIABLE_Subst_0_17 = mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_17;
#line 606 "varset.m"
              mercury__varset__STATE_VARIABLE_Supply_0_15 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_15;
#line 606 "varset.m"
              mercury__varset__STATE_VARIABLE_SupplyB_0_14 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_14;
#line 606 "varset.m"
            }
#line 606 "varset.m"
            continue;
#line 602 "varset.m"
          }
#line 601 "varset.m"
      }
#line 601 "varset.m"
      break;
#line 601 "varset.m"
    }
#line 594 "varset.m"
}

#line 561 "varset.m"
void MR_CALL 
mercury__varset__merge_subst_2_9_p_0(
#line 561 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_36,
#line 561 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_20,
#line 561 "varset.m"
  MR_Word mercury__varset__MaxSupplyB_11,
#line 561 "varset.m"
  MR_Word mercury__varset__NamesB_12,
#line 561 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_21,
#line 561 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_22,
#line 561 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Names_0_23,
#line 561 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Names_24,
#line 561 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Subst_0_25,
#line 561 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Subst_26)
#line 561 "varset.m"
{
#line 571 "varset.m"
  while (MR_TRUE)
#line 571 "varset.m"
    {
#line 571 "varset.m"
      /* tailcall optimized into a loop */
#line 571 "varset.m"
      {
#line 571 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 569 "varset.m"
        MR_Integer mercury__varset__V_49_49 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_20;
#line 569 "varset.m"
        MR_Integer mercury__varset__V_50_50 = (MR_Integer) mercury__varset__MaxSupplyB_11;

#line 569 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_49_49 == mercury__varset__V_50_50);
#line 571 "varset.m"
        if (mercury__varset__succeeded)
#line 570 "varset.m"
          {
#line 570 "varset.m"
            *mercury__varset__STATE_VARIABLE_Subst_26 = mercury__varset__STATE_VARIABLE_Subst_0_25;
#line 570 "varset.m"
            *mercury__varset__STATE_VARIABLE_Names_24 = mercury__varset__STATE_VARIABLE_Names_0_23;
#line 570 "varset.m"
            *mercury__varset__STATE_VARIABLE_Supply_22 = mercury__varset__STATE_VARIABLE_Supply_0_21;
#line 570 "varset.m"
          }
#line 571 "varset.m"
        else
#line 572 "varset.m"
          {
#line 572 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_43_43;
#line 572 "varset.m"
            MR_Word mercury__varset__TypeInfo_44_44;
#line 572 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_45_45;
#line 572 "varset.m"
            MR_Word mercury__varset__TypeInfo_46_46;
#line 572 "varset.m"
            MR_Word mercury__varset__Var_16;
#line 572 "varset.m"
            MR_Word mercury__varset__VarB_17;
#line 572 "varset.m"
            MR_Word mercury__varset__Replacement_19;
#line 572 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Supply_27_27;
#line 572 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Names_29_29;
#line 572 "varset.m"
            MR_Word mercury__varset__V_30_30;
#line 572 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Subst_31_31;
#line 572 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_28_35;
#line 572 "varset.m"
            MR_Integer mercury__varset__V_4_51;
#line 572 "varset.m"
            MR_Integer mercury__varset__V0_5_52 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_21;
#line 572 "varset.m"
            MR_Integer mercury__varset__V_4_54;
#line 572 "varset.m"
            MR_Integer mercury__varset__V0_5_55;
#line 576 "varset.m"
            MR_Word mercury__varset__TypeInfo_38_38;
#line 576 "varset.m"
            MR_String mercury__varset__NameB_18;
#line 574 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_37_37;
#line 574 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_39_39;
#line 41 "map.opt"
            MR_Box mercury__varset__conv0_NameB_18;
#line 580 "varset.m"
            MR_Word mercury__varset__conv1_STATE_VARIABLE_Subst_31_31;

#line 106 "term.opt"
            mercury__varset__V_4_51 = (mercury__varset__V0_5_52 + (MR_Integer) 1);
#line 105 "term.opt"
            mercury__varset__Var_16 = (MR_Word) mercury__varset__V_4_51;
#line 105 "term.opt"
            mercury__varset__STATE_VARIABLE_Supply_27_27 = (MR_Word) mercury__varset__V_4_51;
#line 105 "term.opt"
            mercury__varset__V0_5_55 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_20;
#line 106 "term.opt"
            mercury__varset__V_4_54 = (mercury__varset__V0_5_55 + (MR_Integer) 1);
#line 105 "term.opt"
            mercury__varset__VarB_17 = (MR_Word) mercury__varset__V_4_54;
#line 105 "term.opt"
            mercury__varset__STATE_VARIABLE_SupplyB_28_35 = (MR_Word) mercury__varset__V_4_54;
#line 1917 "varset.c"
            mercury__varset__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1919 "varset.c"
            mercury__varset__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1921 "varset.c"
            {
#line 1923 "varset.c"
              mercury__varset__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1925 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_38_38, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_37_37));
#line 1927 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_38_38, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_36));
#line 1929 "varset.c"
            }
#line 41 "map.opt"
            {
#line 41 "map.opt"
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_36, mercury__varset__TypeInfo_38_38, mercury__varset__TypeCtorInfo_39_39, mercury__varset__NamesB_12, mercury__varset__VarB_17, &mercury__varset__conv0_NameB_18);
            }
#line 41 "map.opt"
            if (mercury__varset__succeeded)
#line 41 "map.opt"
              {
#line 41 "map.opt"
                mercury__varset__NameB_18 = ((MR_String) mercury__varset__conv0_NameB_18);
#line 41 "map.opt"
                mercury__varset__succeeded = MR_TRUE;
#line 41 "map.opt"
              }
#line 576 "varset.m"
            if (mercury__varset__succeeded)
#line 575 "varset.m"
              {
#line 575 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 575 "varset.m"
                {
#line 575 "varset.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_36, mercury__varset__TypeInfo_38_38, mercury__varset__TypeCtorInfo_42_42, mercury__varset__Var_16, ((MR_Box) (mercury__varset__NameB_18)), mercury__varset__STATE_VARIABLE_Names_0_23, &mercury__varset__STATE_VARIABLE_Names_29_29);
                }
#line 575 "varset.m"
              }
#line 576 "varset.m"
            else
#line 575 "varset.m"
              mercury__varset__STATE_VARIABLE_Names_29_29 = mercury__varset__STATE_VARIABLE_Names_0_23;
#line 120 "term.opt"
            mercury__varset__V_30_30 = (MR_Word) &mercury__varset_scalar_common_1[1];
#line 579 "varset.m"
            {
#line 579 "varset.m"
              mercury__varset__Replacement_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_19, 0) = ((MR_Box) (mercury__varset__Var_16));
#line 579 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_19, 1) = ((MR_Box) (mercury__varset__V_30_30));
#line 579 "varset.m"
            }
#line 1976 "varset.c"
            mercury__varset__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1978 "varset.c"
            {
#line 1980 "varset.c"
              mercury__varset__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1982 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_44_44, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_43_43));
#line 1984 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_44_44, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_36));
#line 1986 "varset.c"
            }
#line 1988 "varset.c"
            mercury__varset__TypeCtorInfo_45_45 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1990 "varset.c"
            {
#line 1992 "varset.c"
              mercury__varset__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1994 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_46_46, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_45_45));
#line 1996 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_46_46, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_36));
#line 1998 "varset.c"
            }
#line 580 "varset.m"
            {
#line 580 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_36, mercury__varset__TypeInfo_44_44, mercury__varset__TypeInfo_46_46, mercury__varset__VarB_17, ((MR_Box) (mercury__varset__Replacement_19)), (MR_Word) mercury__varset__STATE_VARIABLE_Subst_0_25, &mercury__varset__conv1_STATE_VARIABLE_Subst_31_31);
            }
#line 580 "varset.m"
            mercury__varset__STATE_VARIABLE_Subst_31_31 = (MR_Word) mercury__varset__conv1_STATE_VARIABLE_Subst_31_31;
#line 581 "varset.m"
            /* direct tailcall eliminated */
#line 581 "varset.m"
            {
#line 581 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_20 = mercury__varset__STATE_VARIABLE_SupplyB_28_35;
#line 581 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_21 = mercury__varset__STATE_VARIABLE_Supply_27_27;
#line 581 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_23 = mercury__varset__STATE_VARIABLE_Names_29_29;
#line 581 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_25 = mercury__varset__STATE_VARIABLE_Subst_31_31;

#line 581 "varset.m"
              mercury__varset__STATE_VARIABLE_Subst_0_25 = mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_25;
#line 581 "varset.m"
              mercury__varset__STATE_VARIABLE_Names_0_23 = mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_23;
#line 581 "varset.m"
              mercury__varset__STATE_VARIABLE_Supply_0_21 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_21;
#line 581 "varset.m"
              mercury__varset__STATE_VARIABLE_SupplyB_0_20 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_20;
#line 581 "varset.m"
            }
#line 581 "varset.m"
            continue;
#line 572 "varset.m"
          }
#line 571 "varset.m"
      }
#line 571 "varset.m"
      break;
#line 571 "varset.m"
    }
#line 561 "varset.m"
}

#line 531 "varset.m"
void MR_CALL 
mercury__varset__merge_renaming_without_names_2_6_p_0(
#line 531 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_24,
#line 531 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_13,
#line 531 "varset.m"
  MR_Word mercury__varset__MaxSupplyB_8,
#line 531 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_14,
#line 531 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_15,
#line 531 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Renaming_0_16,
#line 531 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Renaming_17)
#line 531 "varset.m"
{
#line 539 "varset.m"
  while (MR_TRUE)
#line 539 "varset.m"
    {
#line 539 "varset.m"
      /* tailcall optimized into a loop */
#line 539 "varset.m"
      {
#line 539 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 537 "varset.m"
        MR_Integer mercury__varset__V_29_29 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_13;
#line 537 "varset.m"
        MR_Integer mercury__varset__V_30_30 = (MR_Integer) mercury__varset__MaxSupplyB_8;

#line 537 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_29_29 == mercury__varset__V_30_30);
#line 539 "varset.m"
        if (mercury__varset__succeeded)
#line 538 "varset.m"
          {
#line 538 "varset.m"
            *mercury__varset__STATE_VARIABLE_Renaming_17 = mercury__varset__STATE_VARIABLE_Renaming_0_16;
#line 538 "varset.m"
            *mercury__varset__STATE_VARIABLE_Supply_15 = mercury__varset__STATE_VARIABLE_Supply_0_14;
#line 538 "varset.m"
          }
#line 539 "varset.m"
        else
#line 540 "varset.m"
          {
#line 540 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_25_25;
#line 540 "varset.m"
            MR_Word mercury__varset__TypeInfo_26_26;
#line 540 "varset.m"
            MR_Word mercury__varset__Var_11;
#line 540 "varset.m"
            MR_Word mercury__varset__VarB_12;
#line 540 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Supply_18_18;
#line 540 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Renaming_20_20;
#line 540 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_19_23;
#line 540 "varset.m"
            MR_Integer mercury__varset__V_4_31;
#line 540 "varset.m"
            MR_Integer mercury__varset__V0_5_32 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_14;
#line 540 "varset.m"
            MR_Integer mercury__varset__V_4_34;
#line 540 "varset.m"
            MR_Integer mercury__varset__V0_5_35;
#line 542 "varset.m"
            MR_Word mercury__varset__conv0_STATE_VARIABLE_Renaming_20_20;

#line 106 "term.opt"
            mercury__varset__V_4_31 = (mercury__varset__V0_5_32 + (MR_Integer) 1);
#line 105 "term.opt"
            mercury__varset__Var_11 = (MR_Word) mercury__varset__V_4_31;
#line 105 "term.opt"
            mercury__varset__STATE_VARIABLE_Supply_18_18 = (MR_Word) mercury__varset__V_4_31;
#line 105 "term.opt"
            mercury__varset__V0_5_35 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_13;
#line 106 "term.opt"
            mercury__varset__V_4_34 = (mercury__varset__V0_5_35 + (MR_Integer) 1);
#line 105 "term.opt"
            mercury__varset__VarB_12 = (MR_Word) mercury__varset__V_4_34;
#line 105 "term.opt"
            mercury__varset__STATE_VARIABLE_SupplyB_19_23 = (MR_Word) mercury__varset__V_4_34;
#line 2132 "varset.c"
            mercury__varset__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2134 "varset.c"
            {
#line 2136 "varset.c"
              mercury__varset__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2138 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_25_25));
#line 2140 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_24));
#line 2142 "varset.c"
            }
#line 542 "varset.m"
            {
#line 542 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_24, mercury__varset__TypeInfo_26_26, mercury__varset__TypeInfo_26_26, mercury__varset__VarB_12, ((MR_Box) (mercury__varset__Var_11)), (MR_Word) mercury__varset__STATE_VARIABLE_Renaming_0_16, &mercury__varset__conv0_STATE_VARIABLE_Renaming_20_20);
            }
#line 542 "varset.m"
            mercury__varset__STATE_VARIABLE_Renaming_20_20 = (MR_Word) mercury__varset__conv0_STATE_VARIABLE_Renaming_20_20;
#line 543 "varset.m"
            /* direct tailcall eliminated */
#line 543 "varset.m"
            {
#line 543 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_13 = mercury__varset__STATE_VARIABLE_SupplyB_19_23;
#line 543 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_14 = mercury__varset__STATE_VARIABLE_Supply_18_18;
#line 543 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Renaming_0__tmp_copy_16 = mercury__varset__STATE_VARIABLE_Renaming_20_20;

#line 543 "varset.m"
              mercury__varset__STATE_VARIABLE_Renaming_0_16 = mercury__varset__STATE_VARIABLE_Renaming_0__tmp_copy_16;
#line 543 "varset.m"
              mercury__varset__STATE_VARIABLE_Supply_0_14 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_14;
#line 543 "varset.m"
              mercury__varset__STATE_VARIABLE_SupplyB_0_13 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_13;
#line 543 "varset.m"
            }
#line 543 "varset.m"
            continue;
#line 540 "varset.m"
          }
#line 539 "varset.m"
      }
#line 539 "varset.m"
      break;
#line 539 "varset.m"
    }
#line 531 "varset.m"
}

#line 499 "varset.m"
void MR_CALL 
mercury__varset__merge_renaming_2_9_p_0(
#line 499 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_34,
#line 499 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_19,
#line 499 "varset.m"
  MR_Word mercury__varset__MaxSupplyB_11,
#line 499 "varset.m"
  MR_Word mercury__varset__NamesB_12,
#line 499 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_20,
#line 499 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_21,
#line 499 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Names_0_22,
#line 499 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Names_23,
#line 499 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Renaming_0_24,
#line 499 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Renaming_25)
#line 499 "varset.m"
{
#line 509 "varset.m"
  while (MR_TRUE)
#line 509 "varset.m"
    {
#line 509 "varset.m"
      /* tailcall optimized into a loop */
#line 509 "varset.m"
      {
#line 509 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 507 "varset.m"
        MR_Integer mercury__varset__V_45_45 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_19;
#line 507 "varset.m"
        MR_Integer mercury__varset__V_46_46 = (MR_Integer) mercury__varset__MaxSupplyB_11;

#line 507 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_45_45 == mercury__varset__V_46_46);
#line 509 "varset.m"
        if (mercury__varset__succeeded)
#line 508 "varset.m"
          {
#line 508 "varset.m"
            *mercury__varset__STATE_VARIABLE_Renaming_25 = mercury__varset__STATE_VARIABLE_Renaming_0_24;
#line 508 "varset.m"
            *mercury__varset__STATE_VARIABLE_Names_23 = mercury__varset__STATE_VARIABLE_Names_0_22;
#line 508 "varset.m"
            *mercury__varset__STATE_VARIABLE_Supply_21 = mercury__varset__STATE_VARIABLE_Supply_0_20;
#line 508 "varset.m"
          }
#line 509 "varset.m"
        else
#line 510 "varset.m"
          {
#line 510 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_41_41;
#line 510 "varset.m"
            MR_Word mercury__varset__TypeInfo_42_42;
#line 510 "varset.m"
            MR_Word mercury__varset__Var_16;
#line 510 "varset.m"
            MR_Word mercury__varset__VarB_17;
#line 510 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Supply_26_26;
#line 510 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Names_28_28;
#line 510 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Renaming_29_29;
#line 510 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_27_33;
#line 510 "varset.m"
            MR_Integer mercury__varset__V_4_47;
#line 510 "varset.m"
            MR_Integer mercury__varset__V0_5_48 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_20;
#line 510 "varset.m"
            MR_Integer mercury__varset__V_4_50;
#line 510 "varset.m"
            MR_Integer mercury__varset__V0_5_51;
#line 514 "varset.m"
            MR_Word mercury__varset__TypeInfo_36_36;
#line 514 "varset.m"
            MR_String mercury__varset__NameB_18;
#line 512 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_35_35;
#line 512 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_37_37;
#line 41 "map.opt"
            MR_Box mercury__varset__conv0_NameB_18;
#line 517 "varset.m"
            MR_Word mercury__varset__conv1_STATE_VARIABLE_Renaming_29_29;

#line 106 "term.opt"
            mercury__varset__V_4_47 = (mercury__varset__V0_5_48 + (MR_Integer) 1);
#line 105 "term.opt"
            mercury__varset__Var_16 = (MR_Word) mercury__varset__V_4_47;
#line 105 "term.opt"
            mercury__varset__STATE_VARIABLE_Supply_26_26 = (MR_Word) mercury__varset__V_4_47;
#line 105 "term.opt"
            mercury__varset__V0_5_51 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_19;
#line 106 "term.opt"
            mercury__varset__V_4_50 = (mercury__varset__V0_5_51 + (MR_Integer) 1);
#line 105 "term.opt"
            mercury__varset__VarB_17 = (MR_Word) mercury__varset__V_4_50;
#line 105 "term.opt"
            mercury__varset__STATE_VARIABLE_SupplyB_27_33 = (MR_Word) mercury__varset__V_4_50;
#line 2292 "varset.c"
            mercury__varset__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2294 "varset.c"
            mercury__varset__TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2296 "varset.c"
            {
#line 2298 "varset.c"
              mercury__varset__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2300 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_36_36, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_35_35));
#line 2302 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_36_36, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_34));
#line 2304 "varset.c"
            }
#line 41 "map.opt"
            {
#line 41 "map.opt"
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_34, mercury__varset__TypeInfo_36_36, mercury__varset__TypeCtorInfo_37_37, mercury__varset__NamesB_12, mercury__varset__VarB_17, &mercury__varset__conv0_NameB_18);
            }
#line 41 "map.opt"
            if (mercury__varset__succeeded)
#line 41 "map.opt"
              {
#line 41 "map.opt"
                mercury__varset__NameB_18 = ((MR_String) mercury__varset__conv0_NameB_18);
#line 41 "map.opt"
                mercury__varset__succeeded = MR_TRUE;
#line 41 "map.opt"
              }
#line 514 "varset.m"
            if (mercury__varset__succeeded)
#line 513 "varset.m"
              {
#line 513 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 513 "varset.m"
                {
#line 513 "varset.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_34, mercury__varset__TypeInfo_36_36, mercury__varset__TypeCtorInfo_40_40, mercury__varset__Var_16, ((MR_Box) (mercury__varset__NameB_18)), mercury__varset__STATE_VARIABLE_Names_0_22, &mercury__varset__STATE_VARIABLE_Names_28_28);
                }
#line 513 "varset.m"
              }
#line 514 "varset.m"
            else
#line 513 "varset.m"
              mercury__varset__STATE_VARIABLE_Names_28_28 = mercury__varset__STATE_VARIABLE_Names_0_22;
#line 2339 "varset.c"
            mercury__varset__TypeCtorInfo_41_41 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2341 "varset.c"
            {
#line 2343 "varset.c"
              mercury__varset__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2345 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_41_41));
#line 2347 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_34));
#line 2349 "varset.c"
            }
#line 517 "varset.m"
            {
#line 517 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_34, mercury__varset__TypeInfo_42_42, mercury__varset__TypeInfo_42_42, mercury__varset__VarB_17, ((MR_Box) (mercury__varset__Var_16)), (MR_Word) mercury__varset__STATE_VARIABLE_Renaming_0_24, &mercury__varset__conv1_STATE_VARIABLE_Renaming_29_29);
            }
#line 517 "varset.m"
            mercury__varset__STATE_VARIABLE_Renaming_29_29 = (MR_Word) mercury__varset__conv1_STATE_VARIABLE_Renaming_29_29;
#line 518 "varset.m"
            /* direct tailcall eliminated */
#line 518 "varset.m"
            {
#line 518 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_19 = mercury__varset__STATE_VARIABLE_SupplyB_27_33;
#line 518 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_20 = mercury__varset__STATE_VARIABLE_Supply_26_26;
#line 518 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_22 = mercury__varset__STATE_VARIABLE_Names_28_28;
#line 518 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Renaming_0__tmp_copy_24 = mercury__varset__STATE_VARIABLE_Renaming_29_29;

#line 518 "varset.m"
              mercury__varset__STATE_VARIABLE_Renaming_0_24 = mercury__varset__STATE_VARIABLE_Renaming_0__tmp_copy_24;
#line 518 "varset.m"
              mercury__varset__STATE_VARIABLE_Names_0_22 = mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_22;
#line 518 "varset.m"
              mercury__varset__STATE_VARIABLE_Supply_0_20 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_20;
#line 518 "varset.m"
              mercury__varset__STATE_VARIABLE_SupplyB_0_19 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_19;
#line 518 "varset.m"
            }
#line 518 "varset.m"
            continue;
#line 510 "varset.m"
          }
#line 509 "varset.m"
      }
#line 509 "varset.m"
      break;
#line 509 "varset.m"
    }
#line 499 "varset.m"
}

#line 445 "varset.m"
void MR_CALL 
mercury__varset__bind_vars_2_3_p_0(
#line 445 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_16,
#line 445 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 445 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_2,
#line 445 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_3)
#line 445 "varset.m"
{
#line 448 "varset.m"
  while (MR_TRUE)
#line 448 "varset.m"
    {
#line 448 "varset.m"
      /* tailcall optimized into a loop */
#line 448 "varset.m"
      {
#line 448 "varset.m"
        MR_bool mercury__varset__succeeded;

#line 448 "varset.m"
        if ((mercury__varset__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "varset.m"
          *mercury__varset__STATE_VARIABLE_VarSet_3 = mercury__varset__STATE_VARIABLE_VarSet_0_2;
#line 448 "varset.m"
        else
#line 449 "varset.m"
          {
#line 449 "varset.m"
            MR_Word mercury__varset__V_7;
#line 449 "varset.m"
            MR_Word mercury__varset__T_8;
#line 449 "varset.m"
            MR_Word mercury__varset__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 449 "varset.m"
            MR_Word mercury__varset__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 449 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_VarSet_14_14;

#line 449 "varset.m"
            mercury__varset__V_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__V_13_13, (MR_Integer) 0)));
#line 449 "varset.m"
            mercury__varset__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__V_13_13, (MR_Integer) 1)));
#line 450 "varset.m"
            {
#line 450 "varset.m"
              mercury__varset__bind_var_4_p_0(mercury__varset__TypeInfo_for_T_16, mercury__varset__V_7, mercury__varset__T_8, mercury__varset__STATE_VARIABLE_VarSet_0_2, &mercury__varset__STATE_VARIABLE_VarSet_14_14);
            }
#line 451 "varset.m"
            /* direct tailcall eliminated */
#line 451 "varset.m"
            {
#line 451 "varset.m"
              MR_Word mercury__varset__HeadVar__1__tmp_copy_1 = mercury__varset__Rest_9;
#line 451 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_2 = mercury__varset__STATE_VARIABLE_VarSet_14_14;

#line 451 "varset.m"
              mercury__varset__STATE_VARIABLE_VarSet_0_2 = mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_2;
#line 451 "varset.m"
              mercury__varset__HeadVar__1_1 = mercury__varset__HeadVar__1__tmp_copy_1;
#line 451 "varset.m"
            }
#line 451 "varset.m"
            continue;
#line 449 "varset.m"
          }
#line 448 "varset.m"
      }
#line 448 "varset.m"
      break;
#line 448 "varset.m"
    }
#line 445 "varset.m"
}

#line 391 "varset.m"
MR_Word MR_CALL 
mercury__varset__vars_2_3_f_0(
#line 391 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_12,
#line 391 "varset.m"
  MR_Word mercury__varset__N_5,
#line 391 "varset.m"
  MR_Word mercury__varset__Max_6,
#line 391 "varset.m"
  MR_Word mercury__varset__RevVars0_7)
#line 391 "varset.m"
{
#line 397 "varset.m"
  while (MR_TRUE)
#line 397 "varset.m"
    {
#line 397 "varset.m"
      /* tailcall optimized into a loop */
#line 397 "varset.m"
      {
#line 397 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 397 "varset.m"
        MR_Word mercury__varset__RevVars_8;
#line 395 "varset.m"
        MR_Integer mercury__varset__V_15_15 = (MR_Integer) mercury__varset__N_5;
#line 395 "varset.m"
        MR_Integer mercury__varset__V_16_16 = (MR_Integer) mercury__varset__Max_6;

#line 395 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_15_15 == mercury__varset__V_16_16);
#line 397 "varset.m"
        if (mercury__varset__succeeded)
#line 396 "varset.m"
          mercury__varset__RevVars_8 = mercury__varset__RevVars0_7;
#line 397 "varset.m"
        else
#line 398 "varset.m"
          {
#line 398 "varset.m"
            MR_Word mercury__varset__Var_9;
#line 398 "varset.m"
            MR_Word mercury__varset__NPrime_10;
#line 398 "varset.m"
            MR_Word mercury__varset__V_11_11;
#line 398 "varset.m"
            MR_Integer mercury__varset__V_4_17;
#line 398 "varset.m"
            MR_Integer mercury__varset__V0_5_18 = (MR_Integer) mercury__varset__N_5;

#line 106 "term.opt"
            mercury__varset__V_4_17 = (mercury__varset__V0_5_18 + (MR_Integer) 1);
#line 105 "term.opt"
            mercury__varset__Var_9 = (MR_Word) mercury__varset__V_4_17;
#line 105 "term.opt"
            mercury__varset__NPrime_10 = (MR_Word) mercury__varset__V_4_17;
#line 399 "varset.m"
            {
#line 399 "varset.m"
              mercury__varset__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__V_11_11, 0) = ((MR_Box) (mercury__varset__Var_9));
#line 399 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__V_11_11, 1) = ((MR_Box) (mercury__varset__RevVars0_7));
#line 399 "varset.m"
            }
#line 399 "varset.m"
            /* direct tailcall eliminated */
#line 399 "varset.m"
            {
#line 399 "varset.m"
              MR_Word mercury__varset__N__tmp_copy_5 = mercury__varset__NPrime_10;
#line 399 "varset.m"
              MR_Word mercury__varset__RevVars0__tmp_copy_7 = mercury__varset__V_11_11;

#line 399 "varset.m"
              mercury__varset__RevVars0_7 = mercury__varset__RevVars0__tmp_copy_7;
#line 399 "varset.m"
              mercury__varset__N_5 = mercury__varset__N__tmp_copy_5;
#line 399 "varset.m"
            }
#line 399 "varset.m"
            continue;
#line 398 "varset.m"
          }
#line 397 "varset.m"
        return mercury__varset__RevVars_8;
#line 397 "varset.m"
      }
#line 397 "varset.m"
      break;
#line 397 "varset.m"
    }
#line 391 "varset.m"
}

#line 347 "varset.m"
void MR_CALL 
mercury__varset__new_vars_2_5_p_0(
#line 347 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_22,
#line 347 "varset.m"
  MR_Integer mercury__varset__NumVars_6,
#line 347 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_RevNewVars_0_10,
#line 347 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_RevNewVars_11,
#line 347 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_12,
#line 347 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_13)
#line 347 "varset.m"
{
#line 355 "varset.m"
  while (MR_TRUE)
#line 355 "varset.m"
    {
#line 355 "varset.m"
      /* tailcall optimized into a loop */
#line 355 "varset.m"
      {
#line 355 "varset.m"
        MR_bool mercury__varset__succeeded = (mercury__varset__NumVars_6 > (MR_Integer) 0);

#line 355 "varset.m"
        if (mercury__varset__succeeded)
#line 352 "varset.m"
          {
#line 352 "varset.m"
            MR_Word mercury__varset__Var_9;
#line 352 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_VarSet_15_15;
#line 352 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_RevNewVars_16_16;
#line 352 "varset.m"
            MR_Integer mercury__varset__V_17_17;
#line 352 "varset.m"
            MR_Word mercury__varset__MaxId0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_12, (MR_Integer) 0)));
#line 352 "varset.m"
            MR_Word mercury__varset__MaxId_28;
#line 352 "varset.m"
            MR_Word mercury__varset__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_12, (MR_Integer) 1)));
#line 352 "varset.m"
            MR_Word mercury__varset__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_12, (MR_Integer) 2)));
#line 352 "varset.m"
            MR_Integer mercury__varset__V_4_35;
#line 352 "varset.m"
            MR_Integer mercury__varset__V0_5_36 = (MR_Integer) mercury__varset__MaxId0_27;

#line 106 "term.opt"
            mercury__varset__V_4_35 = (mercury__varset__V0_5_36 + (MR_Integer) 1);
#line 105 "term.opt"
            mercury__varset__Var_9 = (MR_Word) mercury__varset__V_4_35;
#line 105 "term.opt"
            mercury__varset__MaxId_28 = (MR_Word) mercury__varset__V_4_35;
#line 319 "varset.m"
            {
#line 319 "varset.m"
              mercury__varset__STATE_VARIABLE_VarSet_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 319 "varset.m"
              MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_15_15, 0) = ((MR_Box) (mercury__varset__MaxId_28));
#line 319 "varset.m"
              MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_15_15, 1) = ((MR_Box) (mercury__varset__V_30_30));
#line 319 "varset.m"
              MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_15_15, 2) = ((MR_Box) (mercury__varset__V_31_31));
#line 319 "varset.m"
            }
#line 353 "varset.m"
            {
#line 353 "varset.m"
              mercury__varset__STATE_VARIABLE_RevNewVars_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__STATE_VARIABLE_RevNewVars_16_16, 0) = ((MR_Box) (mercury__varset__Var_9));
#line 353 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__STATE_VARIABLE_RevNewVars_16_16, 1) = ((MR_Box) (mercury__varset__STATE_VARIABLE_RevNewVars_0_10));
#line 353 "varset.m"
            }
#line 354 "varset.m"
            mercury__varset__V_17_17 = (mercury__varset__NumVars_6 - (MR_Integer) 1);
#line 354 "varset.m"
            /* direct tailcall eliminated */
#line 354 "varset.m"
            {
#line 354 "varset.m"
              MR_Integer mercury__varset__NumVars__tmp_copy_6 = mercury__varset__V_17_17;
#line 354 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_RevNewVars_0__tmp_copy_10 = mercury__varset__STATE_VARIABLE_RevNewVars_16_16;
#line 354 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_12 = mercury__varset__STATE_VARIABLE_VarSet_15_15;

#line 354 "varset.m"
              mercury__varset__STATE_VARIABLE_VarSet_0_12 = mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_12;
#line 354 "varset.m"
              mercury__varset__STATE_VARIABLE_RevNewVars_0_10 = mercury__varset__STATE_VARIABLE_RevNewVars_0__tmp_copy_10;
#line 354 "varset.m"
              mercury__varset__NumVars_6 = mercury__varset__NumVars__tmp_copy_6;
#line 354 "varset.m"
            }
#line 354 "varset.m"
            continue;
#line 352 "varset.m"
          }
#line 355 "varset.m"
        else
#line 357 "varset.m"
          {
#line 355 "varset.m"
            mercury__varset__succeeded = (mercury__varset__NumVars_6 == (MR_Integer) 0);
#line 357 "varset.m"
            if (mercury__varset__succeeded)
#line 356 "varset.m"
              {
#line 356 "varset.m"
              }
#line 357 "varset.m"
            else
#line 358 "varset.m"
              {
#line 358 "varset.m"
                {
#line 358 "varset.m"
                  mercury__require__error_1_p_0((MR_String) "varset.new_vars - invalid call");
#line 358 "varset.m"
                  return;
                }
#line 358 "varset.m"
              }
#line 358 "varset.m"
            *mercury__varset__STATE_VARIABLE_VarSet_13 = mercury__varset__STATE_VARIABLE_VarSet_0_12;
#line 358 "varset.m"
            *mercury__varset__STATE_VARIABLE_RevNewVars_11 = mercury__varset__STATE_VARIABLE_RevNewVars_0_10;
#line 357 "varset.m"
          }
#line 355 "varset.m"
      }
#line 355 "varset.m"
      break;
#line 355 "varset.m"
    }
#line 347 "varset.m"
}

#line 281 "varset.m"
MR_Integer MR_CALL 
mercury__varset__num_allocated_1_f_0(
#line 281 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_6,
#line 281 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1)
#line 281 "varset.m"
{
#line 720 "varset.m"
  {
#line 720 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 720 "varset.m"
    MR_Integer mercury__varset__HeadVar__2_2;
#line 720 "varset.m"
    MR_Word mercury__varset__VarSupply_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 720 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 720 "varset.m"
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));

#line 138 "term.opt"
    mercury__varset__HeadVar__2_2 = (MR_Integer) mercury__varset__VarSupply_3;
#line 720 "varset.m"
    return mercury__varset__HeadVar__2_2;
#line 720 "varset.m"
  }
#line 281 "varset.m"
}

#line 279 "varset.m"
MR_Word MR_CALL 
mercury__varset__max_var_1_f_0(
#line 279 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_6,
#line 279 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1)
#line 279 "varset.m"
{
#line 718 "varset.m"
  {
#line 718 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 718 "varset.m"
    MR_Word mercury__varset__HeadVar__2_2;
#line 718 "varset.m"
    MR_Word mercury__varset__VarSupply_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 718 "varset.m"
    MR_Integer mercury__varset__V_3_7 = (MR_Integer) mercury__varset__VarSupply_3;
#line 718 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 718 "varset.m"
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));

#line 137 "term.opt"
    mercury__varset__HeadVar__2_2 = (MR_Word) mercury__varset__V_3_7;
#line 718 "varset.m"
    return mercury__varset__HeadVar__2_2;
#line 718 "varset.m"
  }
#line 279 "varset.m"
}

#line 264 "varset.m"
void MR_CALL 
mercury__varset__coerce_2_p_0(
#line 264 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 264 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_U_6,
#line 264 "varset.m"
  MR_Word mercury__varset__A_3,
#line 264 "varset.m"
  MR_Word * mercury__varset__B_4)
#line 264 "varset.m"
{
#line 714 "varset.m"
  {
#line 714 "varset.m"
    MR_bool mercury__varset__succeeded;

#line 714 "varset.m"
    *mercury__varset__B_4 = mercury__varset__A_3;
#line 714 "varset.m"
  }
#line 264 "varset.m"
}

#line 263 "varset.m"
MR_Word MR_CALL 
mercury__varset__coerce_1_f_0(
#line 263 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_7,
#line 263 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_U_8,
#line 263 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VS_0_4)
#line 263 "varset.m"
{
#line 714 "varset.m"
  {
#line 714 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 714 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_5 = mercury__varset__STATE_VARIABLE_VS_0_4;

#line 714 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_5;
#line 714 "varset.m"
  }
#line 263 "varset.m"
}

#line 258 "varset.m"
void MR_CALL 
mercury__varset__squash_4_p_0(
#line 258 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_15,
#line 258 "varset.m"
  MR_Word mercury__varset__OldVarSet_5,
#line 258 "varset.m"
  MR_Word mercury__varset__KeptVars_6,
#line 258 "varset.m"
  MR_Word * mercury__varset__NewVarSet_7,
#line 258 "varset.m"
  MR_Word * mercury__varset__Subst_8)
#line 258 "varset.m"
{
#line 680 "varset.m"
  {
#line 680 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 680 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 680 "varset.m"
    MR_Word mercury__varset__TypeInfo_10_60;
#line 680 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_61;
#line 680 "varset.m"
    MR_Integer mercury__varset__NumVars_9;
#line 680 "varset.m"
    MR_Word mercury__varset__NewVarSet0_10;
#line 680 "varset.m"
    MR_Word mercury__varset__NewVars0_11;
#line 680 "varset.m"
    MR_Word mercury__varset__NewVarSet1_12;
#line 680 "varset.m"
    MR_Word mercury__varset__NewVars_13;
#line 680 "varset.m"
    MR_Word mercury__varset__VarNames_14;
#line 680 "varset.m"
    MR_Word mercury__varset__VarSupply_21;
#line 680 "varset.m"
    MR_Word mercury__varset__Names_22;
#line 680 "varset.m"
    MR_Word mercury__varset__Values_23;
#line 680 "varset.m"
    MR_Word mercury__varset__RevNewVars_37;
#line 680 "varset.m"
    MR_Word mercury__varset__V_38_38;
#line 680 "varset.m"
    MR_Integer mercury__varset__V_5_47;
#line 680 "varset.m"
    MR_Word mercury__varset__VarNames_56;
#line 680 "varset.m"
    MR_Word mercury__varset__V_5_66;
#line 680 "varset.m"
    MR_Word mercury__varset__AssocList_7_72;
#line 680 "varset.m"
    MR_Word mercury__varset__V_5_75;
#line 345 "varset.m"
    MR_Word mercury__varset__conv0_NewVars0_11;
#line 621 "varset.m"
    MR_Word mercury__varset__V_57_57;
#line 621 "varset.m"
    MR_Word mercury__varset__V_58_58;
#line 86 "tree234.opt"
    MR_Word mercury__varset__conv1_VarNames_14;
#line 171 "map.opt"
    MR_Word mercury__varset__conv2_AssocList_7_72;
#line 91 "tree234.opt"
    MR_Word mercury__varset__conv3_Subst_8;

#line 2901 "varset.c"
    {
#line 2903 "varset.c"
      mercury__varset__TypeInfo_10_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2905 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_60, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_16_16));
#line 2907 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_60, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_15));
#line 2909 "varset.c"
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__varset__TypeInfo_10_60, (MR_Word) mercury__varset__KeptVars_6, (MR_Integer) 0, &mercury__varset__NumVars_9);
    }
#line 103 "term.opt"
    mercury__varset__VarSupply_21 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__varset__Names_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__varset__Values_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 304 "varset.m"
    mercury__varset__NewVarSet0_10 = (MR_Word) &mercury__varset_scalar_common_2[1];
#line 343 "varset.m"
    mercury__varset__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 343 "varset.m"
    {
#line 343 "varset.m"
      mercury__varset__new_vars_2_5_p_0(mercury__varset__TypeInfo_for_T_15, mercury__varset__NumVars_9, mercury__varset__V_38_38, &mercury__varset__RevNewVars_37, mercury__varset__NewVarSet0_10, &mercury__varset__NewVarSet1_12);
    }
#line 345 "varset.m"
    {
#line 345 "varset.m"
      mercury__list__reverse_2_p_0(mercury__varset__TypeInfo_10_60, (MR_Word) mercury__varset__RevNewVars_37, &mercury__varset__conv0_NewVars0_11);
    }
#line 345 "varset.m"
    mercury__varset__NewVars0_11 = (MR_Word) mercury__varset__conv0_NewVars0_11;
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__varset__TypeInfo_10_60, (MR_Word) mercury__varset__NewVars0_11, (MR_Integer) 0, &mercury__varset__V_5_47);
    }
#line 880 "list.opt"
    {
#line 880 "list.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_15, mercury__varset__TypeInfo_10_60, mercury__varset__V_5_47, mercury__varset__NewVars0_11, &mercury__varset__NewVars_13);
    }
#line 621 "varset.m"
    mercury__varset__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__OldVarSet_5, (MR_Integer) 0)));
#line 621 "varset.m"
    mercury__varset__VarNames_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__OldVarSet_5, (MR_Integer) 1)));
#line 621 "varset.m"
    mercury__varset__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__OldVarSet_5, (MR_Integer) 2)));
#line 2954 "varset.c"
    mercury__varset__TypeCtorInfo_11_61 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 85 "tree234.opt"
    mercury__varset__V_5_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_10_60, mercury__varset__TypeCtorInfo_11_61, (MR_Word) mercury__varset__VarNames_56, (MR_Word) mercury__varset__V_5_66, &mercury__varset__conv1_VarNames_14);
    }
#line 86 "tree234.opt"
    mercury__varset__VarNames_14 = (MR_Word) mercury__varset__conv1_VarNames_14;
#line 171 "map.opt"
    {
#line 171 "map.opt"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__varset__TypeInfo_10_60, mercury__varset__TypeInfo_10_60, (MR_Word) mercury__varset__KeptVars_6, mercury__varset__NewVars_13, &mercury__varset__conv2_AssocList_7_72);
    }
#line 171 "map.opt"
    mercury__varset__AssocList_7_72 = (MR_Word) mercury__varset__conv2_AssocList_7_72;
#line 90 "tree234.opt"
    mercury__varset__V_5_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__varset__TypeInfo_10_60, mercury__varset__TypeInfo_10_60, (MR_Word) mercury__varset__AssocList_7_72, (MR_Word) mercury__varset__V_5_75, &mercury__varset__conv3_Subst_8);
    }
#line 91 "tree234.opt"
    *mercury__varset__Subst_8 = (MR_Word) mercury__varset__conv3_Subst_8;
#line 694 "varset.m"
    {
#line 694 "varset.m"
      mercury__varset__copy_var_names_4_p_0(mercury__varset__TypeInfo_for_T_15, mercury__varset__VarNames_14, *mercury__varset__Subst_8, mercury__varset__NewVarSet1_12, mercury__varset__NewVarSet_7);
#line 694 "varset.m"
      return;
    }
#line 680 "varset.m"
  }
#line 258 "varset.m"
}

#line 250 "varset.m"
void MR_CALL 
mercury__varset__select_3_p_0(
#line 250 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_12,
#line 250 "varset.m"
  MR_Word mercury__varset__Vars_4,
#line 250 "varset.m"
  MR_Word mercury__varset__VarSet0_5,
#line 250 "varset.m"
  MR_Word * mercury__varset__VarSet_6)
#line 250 "varset.m"
{
#line 672 "varset.m"
  {
#line 672 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 672 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 672 "varset.m"
    MR_Word mercury__varset__TypeInfo_14_14;
#line 672 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_15_15;
#line 672 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_16_16;
#line 672 "varset.m"
    MR_Word mercury__varset__TypeInfo_17_17;
#line 672 "varset.m"
    MR_Word mercury__varset__Supply_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet0_5, (MR_Integer) 0)));
#line 672 "varset.m"
    MR_Word mercury__varset__VarNameMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet0_5, (MR_Integer) 1)));
#line 672 "varset.m"
    MR_Word mercury__varset__Values0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet0_5, (MR_Integer) 2)));
#line 672 "varset.m"
    MR_Word mercury__varset__VarNameMap_10;
#line 672 "varset.m"
    MR_Word mercury__varset__Values_11;
#line 672 "varset.m"
    MR_Word mercury__varset__Keys_7_21;
#line 672 "varset.m"
    MR_Word mercury__varset__NewMap0_8_22;
#line 672 "varset.m"
    MR_Word mercury__varset__Keys_7_31;
#line 672 "varset.m"
    MR_Word mercury__varset__NewMap0_8_32;
#line 193 "map.opt"
    MR_Word mercury__varset__conv0_Values_11;

#line 3041 "varset.c"
    {
#line 3043 "varset.c"
      mercury__varset__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3045 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_13_13));
#line 3047 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_12));
#line 3049 "varset.c"
    }
#line 3051 "varset.c"
    mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 38 "set_ordlist.opt"
    mercury__varset__Keys_7_21 = (MR_Word) mercury__varset__Vars_4;
#line 48 "tree234.opt"
    mercury__varset__NewMap0_8_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "map.opt"
    {
#line 193 "map.opt"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__TypeInfo_14_14, mercury__varset__TypeCtorInfo_15_15, mercury__varset__Keys_7_21, mercury__varset__VarNameMap0_8, mercury__varset__NewMap0_8_22, &mercury__varset__VarNameMap_10);
    }
#line 3062 "varset.c"
    mercury__varset__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 3064 "varset.c"
    {
#line 3066 "varset.c"
      mercury__varset__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3068 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_17_17, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_16_16));
#line 3070 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_17_17, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_12));
#line 3072 "varset.c"
    }
#line 38 "set_ordlist.opt"
    mercury__varset__Keys_7_31 = (MR_Word) mercury__varset__Vars_4;
#line 48 "tree234.opt"
    mercury__varset__NewMap0_8_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "map.opt"
    {
#line 193 "map.opt"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__TypeInfo_14_14, mercury__varset__TypeInfo_17_17, mercury__varset__Keys_7_31, (MR_Word) mercury__varset__Values0_9, (MR_Word) mercury__varset__NewMap0_8_32, &mercury__varset__conv0_Values_11);
    }
#line 193 "map.opt"
    mercury__varset__Values_11 = (MR_Word) mercury__varset__conv0_Values_11;
#line 676 "varset.m"
    {
#line 676 "varset.m"
      MR_Word base;
#line 676 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 676 "varset.m"
      *mercury__varset__VarSet_6 = base;
#line 676 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_7));
#line 676 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__VarNameMap_10));
#line 676 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_11));
#line 676 "varset.m"
    }
#line 672 "varset.m"
  }
#line 250 "varset.m"
}

#line 249 "varset.m"
MR_Word MR_CALL 
mercury__varset__select_2_f_0(
#line 249 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 249 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VS_0_6,
#line 249 "varset.m"
  MR_Word mercury__varset__S_5)
#line 249 "varset.m"
{
#line 773 "varset.m"
  {
#line 773 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 773 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_7;

#line 773 "varset.m"
    {
#line 773 "varset.m"
      mercury__varset__select_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__S_5, mercury__varset__STATE_VARIABLE_VS_0_6, &mercury__varset__STATE_VARIABLE_VS_7);
    }
#line 773 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_7;
#line 773 "varset.m"
  }
#line 249 "varset.m"
}

#line 243 "varset.m"
void MR_CALL 
mercury__varset__ensure_unique_names_4_p_0(
#line 243 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_20,
#line 243 "varset.m"
  MR_Word mercury__varset__AllVars_5,
#line 243 "varset.m"
  MR_String mercury__varset__Suffix_6,
#line 243 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_10,
#line 243 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_11)
#line 243 "varset.m"
{
#line 626 "varset.m"
  {
#line 626 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 626 "varset.m"
    MR_Word mercury__varset__VarNames0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 626 "varset.m"
    MR_Word mercury__varset__VarNames_9;
#line 626 "varset.m"
    MR_Word mercury__varset__V_12_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 626 "varset.m"
    MR_Word mercury__varset__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 626 "varset.m"
    MR_Word mercury__varset__V_2_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 627 "varset.m"
    MR_Word mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 627 "varset.m"
    MR_Word mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 630 "varset.m"
    MR_Word mercury__varset__V_17_17;
#line 630 "varset.m"
    MR_Word mercury__varset__V_19_19;
#line 630 "varset.m"
    MR_Word mercury__varset__V_18_18;

#line 628 "varset.m"
    {
#line 628 "varset.m"
      mercury__varset__ensure_unique_names_2_6_p_0(mercury__varset__TypeInfo_for_T_20, mercury__varset__AllVars_5, mercury__varset__Suffix_6, mercury__varset__V_12_12, mercury__varset__VarNames0_8, mercury__varset__V_13_13, &mercury__varset__VarNames_9);
    }
#line 630 "varset.m"
    mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 630 "varset.m"
    mercury__varset__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 630 "varset.m"
    mercury__varset__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 630 "varset.m"
    {
#line 630 "varset.m"
      MR_Word base;
#line 630 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 630 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_11 = base;
#line 630 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_17_17));
#line 630 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__VarNames_9));
#line 630 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__V_19_19));
#line 630 "varset.m"
    }
#line 626 "varset.m"
  }
#line 243 "varset.m"
}

#line 241 "varset.m"
MR_Word MR_CALL 
mercury__varset__ensure_unique_names_3_f_0(
#line 241 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 241 "varset.m"
  MR_Word mercury__varset__Vs_5,
#line 241 "varset.m"
  MR_String mercury__varset__S1_6,
#line 241 "varset.m"
  MR_Word mercury__varset__VS1_7)
#line 241 "varset.m"
{
#line 770 "varset.m"
  {
#line 770 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 770 "varset.m"
    MR_Word mercury__varset__VS2_8;

#line 770 "varset.m"
    {
#line 770 "varset.m"
      mercury__varset__ensure_unique_names_4_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__Vs_5, mercury__varset__S1_6, mercury__varset__VS1_7, &mercury__varset__VS2_8);
    }
#line 770 "varset.m"
    return mercury__varset__VS2_8;
#line 770 "varset.m"
  }
#line 241 "varset.m"
}

#line 232 "varset.m"
void MR_CALL 
mercury__varset__var_name_list_2_p_0(
#line 232 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_8,
#line 232 "varset.m"
  MR_Word mercury__varset__VarSet_3,
#line 232 "varset.m"
  MR_Word * mercury__varset__VarNameList_4)
#line 232 "varset.m"
{
#line 620 "varset.m"
  {
#line 620 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 620 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 620 "varset.m"
    MR_Word mercury__varset__TypeInfo_10_10;
#line 620 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_11;
#line 620 "varset.m"
    MR_Word mercury__varset__VarNames_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));
#line 620 "varset.m"
    MR_Word mercury__varset__V_5_16;
#line 621 "varset.m"
    MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 621 "varset.m"
    MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 86 "tree234.opt"
    MR_Word mercury__varset__conv0_VarNameList_4;

#line 3272 "varset.c"
    {
#line 3274 "varset.c"
      mercury__varset__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3276 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_10, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_9_9));
#line 3278 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_10, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_8));
#line 3280 "varset.c"
    }
#line 3282 "varset.c"
    mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 85 "tree234.opt"
    mercury__varset__V_5_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_10_10, mercury__varset__TypeCtorInfo_11_11, (MR_Word) mercury__varset__VarNames_5, (MR_Word) mercury__varset__V_5_16, &mercury__varset__conv0_VarNameList_4);
    }
#line 86 "tree234.opt"
    *mercury__varset__VarNameList_4 = (MR_Word) mercury__varset__conv0_VarNameList_4;
#line 620 "varset.m"
  }
#line 232 "varset.m"
}

#line 231 "varset.m"
MR_Word MR_CALL 
mercury__varset__var_name_list_1_f_0(
#line 231 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 231 "varset.m"
  MR_Word mercury__varset__VS_3)
#line 231 "varset.m"
{
#line 620 "varset.m"
  {
#line 620 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 620 "varset.m"
    MR_Word mercury__varset__AL_4;
#line 620 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_9_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 620 "varset.m"
    MR_Word mercury__varset__TypeInfo_10_12;
#line 620 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_13;
#line 620 "varset.m"
    MR_Word mercury__varset__VarNames_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 1)));
#line 620 "varset.m"
    MR_Word mercury__varset__V_5_18;
#line 621 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 0)));
#line 621 "varset.m"
    MR_Word mercury__varset__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 2)));
#line 86 "tree234.opt"
    MR_Word mercury__varset__conv0_AL_4;

#line 3330 "varset.c"
    {
#line 3332 "varset.c"
      mercury__varset__TypeInfo_10_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3334 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_9_11));
#line 3336 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_5));
#line 3338 "varset.c"
    }
#line 3340 "varset.c"
    mercury__varset__TypeCtorInfo_11_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 85 "tree234.opt"
    mercury__varset__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_10_12, mercury__varset__TypeCtorInfo_11_13, (MR_Word) mercury__varset__VarNames_8, (MR_Word) mercury__varset__V_5_18, &mercury__varset__conv0_AL_4);
    }
#line 86 "tree234.opt"
    mercury__varset__AL_4 = (MR_Word) mercury__varset__conv0_AL_4;
#line 620 "varset.m"
    return mercury__varset__AL_4;
#line 620 "varset.m"
  }
#line 231 "varset.m"
}

#line 224 "varset.m"
void MR_CALL 
mercury__varset__create_name_var_map_2_p_0(
#line 224 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_10,
#line 224 "varset.m"
  MR_Word mercury__varset__VarSet_3,
#line 224 "varset.m"
  MR_Word * mercury__varset__NameVars_4)
#line 224 "varset.m"
{
#line 612 "varset.m"
  {
#line 612 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 612 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 612 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_12;
#line 612 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_13;
#line 612 "varset.m"
    MR_Word mercury__varset__VarNames_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));
#line 612 "varset.m"
    MR_Word mercury__varset__Vars_6;
#line 612 "varset.m"
    MR_Word mercury__varset__Names_7;
#line 612 "varset.m"
    MR_Word mercury__varset__V_5_18;
#line 612 "varset.m"
    MR_Word mercury__varset__V_5_24;
#line 612 "varset.m"
    MR_Word mercury__varset__AssocList_7_29;
#line 612 "varset.m"
    MR_Word mercury__varset__V_5_32;
#line 613 "varset.m"
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 613 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 70 "tree234.opt"
    MR_Word mercury__varset__conv0_Vars_6;

#line 3400 "varset.c"
    {
#line 3402 "varset.c"
      mercury__varset__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3404 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_11));
#line 3406 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 3408 "varset.c"
    }
#line 3410 "varset.c"
    mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 69 "tree234.opt"
    mercury__varset__V_5_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__varset__TypeInfo_12_12, mercury__varset__TypeCtorInfo_13_13, (MR_Word) mercury__varset__VarNames_5, (MR_Word) mercury__varset__V_5_18, &mercury__varset__conv0_Vars_6);
    }
#line 70 "tree234.opt"
    mercury__varset__Vars_6 = (MR_Word) mercury__varset__conv0_Vars_6;
#line 74 "tree234.opt"
    mercury__varset__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 75 "tree234.opt"
    {
#line 75 "tree234.opt"
      mercury__tree234__values_acc_3_p_0(mercury__varset__TypeInfo_12_12, mercury__varset__TypeCtorInfo_13_13, (MR_Word) mercury__varset__VarNames_5, mercury__varset__V_5_24, &mercury__varset__Names_7);
    }
#line 171 "map.opt"
    {
#line 171 "map.opt"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__varset__TypeCtorInfo_13_13, mercury__varset__TypeInfo_12_12, mercury__varset__Names_7, mercury__varset__Vars_6, &mercury__varset__AssocList_7_29);
    }
#line 90 "tree234.opt"
    mercury__varset__V_5_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "tree234.opt"
    {
#line 91 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__varset__TypeCtorInfo_13_13, mercury__varset__TypeInfo_12_12, mercury__varset__AssocList_7_29, mercury__varset__V_5_32, mercury__varset__NameVars_4);
#line 91 "tree234.opt"
      return;
    }
#line 612 "varset.m"
  }
#line 224 "varset.m"
}

#line 223 "varset.m"
MR_Word MR_CALL 
mercury__varset__create_name_var_map_1_f_0(
#line 223 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 223 "varset.m"
  MR_Word mercury__varset__VS_3)
#line 223 "varset.m"
{
#line 764 "varset.m"
  {
#line 764 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 764 "varset.m"
    MR_Word mercury__varset__M_4;

#line 764 "varset.m"
    {
#line 764 "varset.m"
      mercury__varset__create_name_var_map_2_p_0(mercury__varset__TypeInfo_for_T_5, mercury__varset__VS_3, &mercury__varset__M_4);
    }
#line 764 "varset.m"
    return mercury__varset__M_4;
#line 764 "varset.m"
  }
#line 223 "varset.m"
}

#line 214 "varset.m"
void MR_CALL 
mercury__varset__set_bindings_3_p_0(
#line 214 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 214 "varset.m"
  MR_Word mercury__varset__VarSet_4,
#line 214 "varset.m"
  MR_Word mercury__varset__Values_5,
#line 214 "varset.m"
  MR_Word * mercury__varset__HeadVar__3_3)
#line 214 "varset.m"
{
#line 467 "varset.m"
  {
#line 467 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 467 "varset.m"
    MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 0)));
#line 467 "varset.m"
    MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 1)));
#line 467 "varset.m"
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 2)));

#line 467 "varset.m"
    {
#line 467 "varset.m"
      MR_Word base;
#line 467 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 467 "varset.m"
      *mercury__varset__HeadVar__3_3 = base;
#line 467 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_6_6));
#line 467 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__V_7_7));
#line 467 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_5));
#line 467 "varset.m"
    }
#line 467 "varset.m"
  }
#line 214 "varset.m"
}

#line 213 "varset.m"
MR_Word MR_CALL 
mercury__varset__set_bindings_2_f_0(
#line 213 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_7,
#line 213 "varset.m"
  MR_Word mercury__varset__VS1_4,
#line 213 "varset.m"
  MR_Word mercury__varset__S_5)
#line 213 "varset.m"
{
#line 467 "varset.m"
  {
#line 467 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 467 "varset.m"
    MR_Word mercury__varset__VS2_6;
#line 467 "varset.m"
    MR_Word mercury__varset__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS1_4, (MR_Integer) 0)));
#line 467 "varset.m"
    MR_Word mercury__varset__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS1_4, (MR_Integer) 1)));
#line 467 "varset.m"
    MR_Word mercury__varset__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS1_4, (MR_Integer) 2)));

#line 467 "varset.m"
    {
#line 467 "varset.m"
      mercury__varset__VS2_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 467 "varset.m"
      MR_hl_field(MR_mktag(0), mercury__varset__VS2_6, 0) = ((MR_Box) (mercury__varset__V_10_10));
#line 467 "varset.m"
      MR_hl_field(MR_mktag(0), mercury__varset__VS2_6, 1) = ((MR_Box) (mercury__varset__V_11_11));
#line 467 "varset.m"
      MR_hl_field(MR_mktag(0), mercury__varset__VS2_6, 2) = ((MR_Box) (mercury__varset__S_5));
#line 467 "varset.m"
    }
#line 467 "varset.m"
    return mercury__varset__VS2_6;
#line 467 "varset.m"
  }
#line 213 "varset.m"
}

#line 209 "varset.m"
void MR_CALL 
mercury__varset__get_bindings_2_p_0(
#line 209 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_6,
#line 209 "varset.m"
  MR_Word mercury__varset__VarSet_3,
#line 209 "varset.m"
  MR_Word * mercury__varset__HeadVar__2_2)
#line 209 "varset.m"
{
#line 465 "varset.m"
  {
#line 465 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 465 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 465 "varset.m"
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));

#line 465 "varset.m"
    *mercury__varset__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 465 "varset.m"
  }
#line 209 "varset.m"
}

#line 208 "varset.m"
MR_Word MR_CALL 
mercury__varset__get_bindings_1_f_0(
#line 208 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 208 "varset.m"
  MR_Word mercury__varset__VS_3)
#line 208 "varset.m"
{
#line 465 "varset.m"
  {
#line 465 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 465 "varset.m"
    MR_Word mercury__varset__S_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 2)));
#line 465 "varset.m"
    MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 0)));
#line 465 "varset.m"
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 1)));

#line 465 "varset.m"
    return mercury__varset__S_4;
#line 465 "varset.m"
  }
#line 208 "varset.m"
}

#line 203 "varset.m"
void MR_CALL 
mercury__varset__merge_without_names_5_p_0(
#line 203 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_12,
#line 203 "varset.m"
  MR_Word mercury__varset__VarSetA_6,
#line 203 "varset.m"
  MR_Word mercury__varset__VarSetB_7,
#line 203 "varset.m"
  MR_Word mercury__varset__TermList0_8,
#line 203 "varset.m"
  MR_Word * mercury__varset__VarSet_9,
#line 203 "varset.m"
  MR_Word * mercury__varset__TermList_10)
#line 203 "varset.m"
{
#line 481 "varset.m"
  {
#line 481 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 481 "varset.m"
    MR_Word mercury__varset__Renaming_11;

#line 482 "varset.m"
    {
#line 482 "varset.m"
      mercury__varset__merge_renaming_without_names_4_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__VarSetA_6, mercury__varset__VarSetB_7, mercury__varset__VarSet_9, &mercury__varset__Renaming_11);
    }
#line 483 "varset.m"
    {
#line 483 "varset.m"
      mercury__term__apply_renaming_to_list_3_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__TermList0_8, mercury__varset__Renaming_11, mercury__varset__TermList_10);
#line 483 "varset.m"
      return;
    }
#line 481 "varset.m"
  }
#line 203 "varset.m"
}

#line 194 "varset.m"
void MR_CALL 
mercury__varset__merge_subst_without_names_4_p_0(
#line 194 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_18,
#line 194 "varset.m"
  MR_Word mercury__varset__VarSetA_5,
#line 194 "varset.m"
  MR_Word mercury__varset__VarSetB_6,
#line 194 "varset.m"
  MR_Word * mercury__varset__VarSet_7,
#line 194 "varset.m"
  MR_Word * mercury__varset__Subst_8)
#line 194 "varset.m"
{
#line 585 "varset.m"
  {
#line 585 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 585 "varset.m"
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
#line 585 "varset.m"
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 585 "varset.m"
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
#line 585 "varset.m"
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
#line 585 "varset.m"
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
#line 585 "varset.m"
    MR_Word mercury__varset__Subst0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 585 "varset.m"
    MR_Word mercury__varset__Supply_17;
#line 586 "varset.m"
    MR_Word mercury__varset___NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
#line 586 "varset.m"
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

#line 590 "varset.m"
    {
#line 590 "varset.m"
      mercury__varset__merge_subst_without_names_2_6_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__Subst0_16, mercury__varset__Subst_8);
    }
#line 592 "varset.m"
    {
#line 592 "varset.m"
      MR_Word base;
#line 592 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 592 "varset.m"
      *mercury__varset__VarSet_7 = base;
#line 592 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
#line 592 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__NamesA_14));
#line 592 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
#line 592 "varset.m"
    }
#line 585 "varset.m"
  }
#line 194 "varset.m"
}

#line 184 "varset.m"
void MR_CALL 
mercury__varset__merge_renaming_without_names_4_p_0(
#line 184 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_18,
#line 184 "varset.m"
  MR_Word mercury__varset__VarSetA_5,
#line 184 "varset.m"
  MR_Word mercury__varset__VarSetB_6,
#line 184 "varset.m"
  MR_Word * mercury__varset__VarSet_7,
#line 184 "varset.m"
  MR_Word * mercury__varset__Renaming_8)
#line 184 "varset.m"
{
#line 522 "varset.m"
  {
#line 522 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 522 "varset.m"
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
#line 522 "varset.m"
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 522 "varset.m"
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
#line 522 "varset.m"
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
#line 522 "varset.m"
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
#line 522 "varset.m"
    MR_Word mercury__varset__Renaming0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 522 "varset.m"
    MR_Word mercury__varset__Supply_17;
#line 523 "varset.m"
    MR_Word mercury__varset___NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
#line 523 "varset.m"
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

#line 527 "varset.m"
    {
#line 527 "varset.m"
      mercury__varset__merge_renaming_without_names_2_6_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__Renaming0_16, mercury__varset__Renaming_8);
    }
#line 529 "varset.m"
    {
#line 529 "varset.m"
      MR_Word base;
#line 529 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 529 "varset.m"
      *mercury__varset__VarSet_7 = base;
#line 529 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
#line 529 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__NamesA_14));
#line 529 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
#line 529 "varset.m"
    }
#line 522 "varset.m"
  }
#line 184 "varset.m"
}

#line 176 "varset.m"
void MR_CALL 
mercury__varset__merge_5_p_0(
#line 176 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_12,
#line 176 "varset.m"
  MR_Word mercury__varset__VarSetA_6,
#line 176 "varset.m"
  MR_Word mercury__varset__VarSetB_7,
#line 176 "varset.m"
  MR_Word mercury__varset__TermList0_8,
#line 176 "varset.m"
  MR_Word * mercury__varset__VarSet_9,
#line 176 "varset.m"
  MR_Word * mercury__varset__TermList_10)
#line 176 "varset.m"
{
#line 477 "varset.m"
  {
#line 477 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 477 "varset.m"
    MR_Word mercury__varset__Renaming_11;

#line 478 "varset.m"
    {
#line 478 "varset.m"
      mercury__varset__merge_renaming_4_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__VarSetA_6, mercury__varset__VarSetB_7, mercury__varset__VarSet_9, &mercury__varset__Renaming_11);
    }
#line 479 "varset.m"
    {
#line 479 "varset.m"
      mercury__term__apply_renaming_to_list_3_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__TermList0_8, mercury__varset__Renaming_11, mercury__varset__TermList_10);
#line 479 "varset.m"
      return;
    }
#line 477 "varset.m"
  }
#line 176 "varset.m"
}

#line 167 "varset.m"
void MR_CALL 
mercury__varset__merge_subst_4_p_0(
#line 167 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_19,
#line 167 "varset.m"
  MR_Word mercury__varset__VarSetA_5,
#line 167 "varset.m"
  MR_Word mercury__varset__VarSetB_6,
#line 167 "varset.m"
  MR_Word * mercury__varset__VarSet_7,
#line 167 "varset.m"
  MR_Word * mercury__varset__Subst_8)
#line 167 "varset.m"
{
#line 552 "varset.m"
  {
#line 552 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 552 "varset.m"
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
#line 552 "varset.m"
    MR_Word mercury__varset__NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
#line 552 "varset.m"
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 552 "varset.m"
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
#line 552 "varset.m"
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
#line 552 "varset.m"
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
#line 552 "varset.m"
    MR_Word mercury__varset__Subst0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "varset.m"
    MR_Word mercury__varset__Supply_17;
#line 552 "varset.m"
    MR_Word mercury__varset__Names_18;
#line 553 "varset.m"
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

#line 557 "varset.m"
    {
#line 557 "varset.m"
      mercury__varset__merge_subst_2_9_p_0(mercury__varset__TypeInfo_for_T_19, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__NamesB_10, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__NamesA_14, &mercury__varset__Names_18, mercury__varset__Subst0_16, mercury__varset__Subst_8);
    }
#line 559 "varset.m"
    {
#line 559 "varset.m"
      MR_Word base;
#line 559 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 559 "varset.m"
      *mercury__varset__VarSet_7 = base;
#line 559 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
#line 559 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_18));
#line 559 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
#line 559 "varset.m"
    }
#line 552 "varset.m"
  }
#line 167 "varset.m"
}

#line 158 "varset.m"
void MR_CALL 
mercury__varset__merge_renaming_4_p_0(
#line 158 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_19,
#line 158 "varset.m"
  MR_Word mercury__varset__VarSetA_5,
#line 158 "varset.m"
  MR_Word mercury__varset__VarSetB_6,
#line 158 "varset.m"
  MR_Word * mercury__varset__VarSet_7,
#line 158 "varset.m"
  MR_Word * mercury__varset__Renaming_8)
#line 158 "varset.m"
{
#line 490 "varset.m"
  {
#line 490 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 490 "varset.m"
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
#line 490 "varset.m"
    MR_Word mercury__varset__NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
#line 490 "varset.m"
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 490 "varset.m"
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
#line 490 "varset.m"
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
#line 490 "varset.m"
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
#line 490 "varset.m"
    MR_Word mercury__varset__Renaming0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 490 "varset.m"
    MR_Word mercury__varset__Supply_17;
#line 490 "varset.m"
    MR_Word mercury__varset__Names_18;
#line 491 "varset.m"
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

#line 495 "varset.m"
    {
#line 495 "varset.m"
      mercury__varset__merge_renaming_2_9_p_0(mercury__varset__TypeInfo_for_T_19, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__NamesB_10, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__NamesA_14, &mercury__varset__Names_18, mercury__varset__Renaming0_16, mercury__varset__Renaming_8);
    }
#line 497 "varset.m"
    {
#line 497 "varset.m"
      MR_Word base;
#line 497 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 497 "varset.m"
      *mercury__varset__VarSet_7 = base;
#line 497 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
#line 497 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_18));
#line 497 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
#line 497 "varset.m"
    }
#line 490 "varset.m"
  }
#line 158 "varset.m"
}

#line 149 "varset.m"
void MR_CALL 
mercury__varset__lookup_vars_2_p_0(
#line 149 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_6,
#line 149 "varset.m"
  MR_Word mercury__varset__VarSet_3,
#line 149 "varset.m"
  MR_Word * mercury__varset__HeadVar__2_2)
#line 149 "varset.m"
{
#line 461 "varset.m"
  {
#line 461 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 461 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 461 "varset.m"
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));

#line 461 "varset.m"
    *mercury__varset__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 461 "varset.m"
  }
#line 149 "varset.m"
}

#line 148 "varset.m"
MR_Word MR_CALL 
mercury__varset__lookup_vars_1_f_0(
#line 148 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 148 "varset.m"
  MR_Word mercury__varset__VS_3)
#line 148 "varset.m"
{
#line 461 "varset.m"
  {
#line 461 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 461 "varset.m"
    MR_Word mercury__varset__S_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 2)));
#line 461 "varset.m"
    MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 0)));
#line 461 "varset.m"
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 1)));

#line 461 "varset.m"
    return mercury__varset__S_4;
#line 461 "varset.m"
  }
#line 148 "varset.m"
}

#line 144 "varset.m"
MR_bool MR_CALL 
mercury__varset__search_var_3_p_0(
#line 144 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_10,
#line 144 "varset.m"
  MR_Word mercury__varset__VarSet_4,
#line 144 "varset.m"
  MR_Word mercury__varset__Id_5,
#line 144 "varset.m"
  MR_Word * mercury__varset__Val_6)
#line 144 "varset.m"
{
#line 455 "varset.m"
  {
#line 455 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 455 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 455 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_12;
#line 455 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 455 "varset.m"
    MR_Word mercury__varset__TypeInfo_14_14;
#line 455 "varset.m"
    MR_Word mercury__varset__Values_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 2)));
#line 456 "varset.m"
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 0)));
#line 456 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 1)));
#line 41 "map.opt"
    MR_Box mercury__varset__conv0_Val_6;

#line 4047 "varset.c"
    {
#line 4049 "varset.c"
      mercury__varset__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4051 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_11));
#line 4053 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 4055 "varset.c"
    }
#line 4057 "varset.c"
    {
#line 4059 "varset.c"
      mercury__varset__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4061 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_13_13));
#line 4063 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 4065 "varset.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_10, mercury__varset__TypeInfo_12_12, mercury__varset__TypeInfo_14_14, (MR_Word) mercury__varset__Values_7, mercury__varset__Id_5, &mercury__varset__conv0_Val_6);
    }
#line 41 "map.opt"
    if (mercury__varset__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        *mercury__varset__Val_6 = ((MR_Word) mercury__varset__conv0_Val_6);
#line 41 "map.opt"
        mercury__varset__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 455 "varset.m"
    return mercury__varset__succeeded;
#line 455 "varset.m"
  }
#line 144 "varset.m"
}

#line 139 "varset.m"
void MR_CALL 
mercury__varset__bind_vars_3_p_0(
#line 139 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_10,
#line 139 "varset.m"
  MR_Word mercury__varset__Subst_4,
#line 139 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_7,
#line 139 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_8)
#line 139 "varset.m"
{
#line 441 "varset.m"
  {
#line 441 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 441 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 441 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_12;
#line 441 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_13;
#line 441 "varset.m"
    MR_Word mercury__varset__TypeInfo_14_14;
#line 441 "varset.m"
    MR_Word mercury__varset__VarTermList_6;
#line 441 "varset.m"
    MR_Word mercury__varset__V_5_19;
#line 86 "tree234.opt"
    MR_Word mercury__varset__conv0_VarTermList_6;

#line 4121 "varset.c"
    {
#line 4123 "varset.c"
      mercury__varset__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4125 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_11));
#line 4127 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 4129 "varset.c"
    }
#line 4131 "varset.c"
    mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4133 "varset.c"
    {
#line 4135 "varset.c"
      mercury__varset__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4137 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_13_13));
#line 4139 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 4141 "varset.c"
    }
#line 85 "tree234.opt"
    mercury__varset__V_5_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_12_12, mercury__varset__TypeInfo_14_14, (MR_Word) mercury__varset__Subst_4, (MR_Word) mercury__varset__V_5_19, &mercury__varset__conv0_VarTermList_6);
    }
#line 86 "tree234.opt"
    mercury__varset__VarTermList_6 = (MR_Word) mercury__varset__conv0_VarTermList_6;
#line 443 "varset.m"
    {
#line 443 "varset.m"
      mercury__varset__bind_vars_2_3_p_0(mercury__varset__TypeInfo_for_T_10, mercury__varset__VarTermList_6, mercury__varset__STATE_VARIABLE_VarSet_0_7, mercury__varset__STATE_VARIABLE_VarSet_8);
#line 443 "varset.m"
      return;
    }
#line 441 "varset.m"
  }
#line 139 "varset.m"
}

#line 138 "varset.m"
MR_Word MR_CALL 
mercury__varset__bind_vars_2_f_0(
#line 138 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 138 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VS_0_6,
#line 138 "varset.m"
  MR_Word mercury__varset__S_5)
#line 138 "varset.m"
{
#line 441 "varset.m"
  {
#line 441 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 441 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_7;
#line 441 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 441 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_17;
#line 441 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_18;
#line 441 "varset.m"
    MR_Word mercury__varset__TypeInfo_14_19;
#line 441 "varset.m"
    MR_Word mercury__varset__VarTermList_14;
#line 441 "varset.m"
    MR_Word mercury__varset__V_5_24;
#line 86 "tree234.opt"
    MR_Word mercury__varset__conv0_VarTermList_14;

#line 4196 "varset.c"
    {
#line 4198 "varset.c"
      mercury__varset__TypeInfo_12_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4200 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_17, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_16));
#line 4202 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_17, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_9));
#line 4204 "varset.c"
    }
#line 4206 "varset.c"
    mercury__varset__TypeCtorInfo_13_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4208 "varset.c"
    {
#line 4210 "varset.c"
      mercury__varset__TypeInfo_14_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4212 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_13_18));
#line 4214 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_9));
#line 4216 "varset.c"
    }
#line 85 "tree234.opt"
    mercury__varset__V_5_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "tree234.opt"
    {
#line 86 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__varset__TypeInfo_12_17, mercury__varset__TypeInfo_14_19, (MR_Word) mercury__varset__S_5, (MR_Word) mercury__varset__V_5_24, &mercury__varset__conv0_VarTermList_14);
    }
#line 86 "tree234.opt"
    mercury__varset__VarTermList_14 = (MR_Word) mercury__varset__conv0_VarTermList_14;
#line 443 "varset.m"
    {
#line 443 "varset.m"
      mercury__varset__bind_vars_2_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__VarTermList_14, mercury__varset__STATE_VARIABLE_VS_0_6, &mercury__varset__STATE_VARIABLE_VS_7);
    }
#line 441 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_7;
#line 441 "varset.m"
  }
#line 138 "varset.m"
}

#line 133 "varset.m"
void MR_CALL 
mercury__varset__bind_var_4_p_0(
#line 133 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_18,
#line 133 "varset.m"
  MR_Word mercury__varset__Id_5,
#line 133 "varset.m"
  MR_Word mercury__varset__Val_6,
#line 133 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_10,
#line 133 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_11)
#line 133 "varset.m"
{
#line 434 "varset.m"
  {
#line 434 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 434 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 434 "varset.m"
    MR_Word mercury__varset__TypeInfo_20_20;
#line 434 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_21_21;
#line 434 "varset.m"
    MR_Word mercury__varset__TypeInfo_22_22;
#line 434 "varset.m"
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 434 "varset.m"
    MR_Word mercury__varset__Values_9;
#line 435 "varset.m"
    MR_Word mercury__varset__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 435 "varset.m"
    MR_Word mercury__varset__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 119 "map.opt"
    MR_Word mercury__varset__conv0_Values_9;
#line 437 "varset.m"
    MR_Word mercury__varset__V_15_15;
#line 437 "varset.m"
    MR_Word mercury__varset__V_16_16;
#line 437 "varset.m"
    MR_Word mercury__varset__V_17_17;

#line 4283 "varset.c"
    {
#line 4285 "varset.c"
      mercury__varset__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4287 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_19_19));
#line 4289 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_18));
#line 4291 "varset.c"
    }
#line 4293 "varset.c"
    mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4295 "varset.c"
    {
#line 4297 "varset.c"
      mercury__varset__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4299 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_21_21));
#line 4301 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_18));
#line 4303 "varset.c"
    }
#line 119 "map.opt"
    {
#line 119 "map.opt"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__TypeInfo_20_20, mercury__varset__TypeInfo_22_22, mercury__varset__Id_5, ((MR_Box) (mercury__varset__Val_6)), (MR_Word) mercury__varset__Values0_8, &mercury__varset__conv0_Values_9);
    }
#line 119 "map.opt"
    mercury__varset__Values_9 = (MR_Word) mercury__varset__conv0_Values_9;
#line 437 "varset.m"
    mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 437 "varset.m"
    mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 437 "varset.m"
    mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 437 "varset.m"
    {
#line 437 "varset.m"
      MR_Word base;
#line 437 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 437 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_11 = base;
#line 437 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_15_15));
#line 437 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__V_16_16));
#line 437 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_9));
#line 437 "varset.m"
    }
#line 434 "varset.m"
  }
#line 133 "varset.m"
}

#line 132 "varset.m"
MR_Word MR_CALL 
mercury__varset__bind_var_3_f_0(
#line 132 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_11,
#line 132 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VS_0_8,
#line 132 "varset.m"
  MR_Word mercury__varset__V_6,
#line 132 "varset.m"
  MR_Word mercury__varset__T_7)
#line 132 "varset.m"
{
#line 749 "varset.m"
  {
#line 749 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 749 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_9;

#line 749 "varset.m"
    {
#line 749 "varset.m"
      mercury__varset__bind_var_4_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__V_6, mercury__varset__T_7, mercury__varset__STATE_VARIABLE_VS_0_8, &mercury__varset__STATE_VARIABLE_VS_9);
    }
#line 749 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_9;
#line 749 "varset.m"
  }
#line 132 "varset.m"
}

#line 127 "varset.m"
MR_bool MR_CALL 
mercury__varset__search_name_3_p_0(
#line 127 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 127 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 127 "varset.m"
  MR_Word mercury__varset__Id_7,
#line 127 "varset.m"
  MR_String * mercury__varset__Name_8)
#line 127 "varset.m"
{
#line 429 "varset.m"
  {
#line 429 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 429 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_10_10 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 429 "varset.m"
    MR_Word mercury__varset__TypeInfo_11_11;
#line 429 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 429 "varset.m"
    MR_Word mercury__varset__Names_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 429 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 429 "varset.m"
    MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));
#line 41 "map.opt"
    MR_Box mercury__varset__conv0_Name_8;

#line 4403 "varset.c"
    {
#line 4405 "varset.c"
      mercury__varset__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4407 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_11_11, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_10_10));
#line 4409 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_11_11, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_9));
#line 4411 "varset.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__TypeInfo_11_11, mercury__varset__TypeCtorInfo_12_12, mercury__varset__Names_5, mercury__varset__Id_7, &mercury__varset__conv0_Name_8);
    }
#line 41 "map.opt"
    if (mercury__varset__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        *mercury__varset__Name_8 = ((MR_String) mercury__varset__conv0_Name_8);
#line 41 "map.opt"
        mercury__varset__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 429 "varset.m"
    return mercury__varset__succeeded;
#line 429 "varset.m"
  }
#line 127 "varset.m"
}

#line 121 "varset.m"
void MR_CALL 
mercury__varset__lookup_name_4_p_0(
#line 121 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_12,
#line 121 "varset.m"
  MR_Word mercury__varset__VarSet_5,
#line 121 "varset.m"
  MR_Word mercury__varset__Id_6,
#line 121 "varset.m"
  MR_String mercury__varset__Prefix_7,
#line 121 "varset.m"
  MR_String * mercury__varset__Name_8)
#line 121 "varset.m"
{
#line 423 "varset.m"
  {
#line 423 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 423 "varset.m"
    MR_String mercury__varset__Name0_9;
#line 429 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_10_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 429 "varset.m"
    MR_Word mercury__varset__TypeInfo_11_19;
#line 429 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_12_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 429 "varset.m"
    MR_Word mercury__varset__Names_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_5, (MR_Integer) 1)));
#line 429 "varset.m"
    MR_Word mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_5, (MR_Integer) 0)));
#line 429 "varset.m"
    MR_Word mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_5, (MR_Integer) 2)));
#line 41 "map.opt"
    MR_Box mercury__varset__conv0_Name0_9;

#line 4471 "varset.c"
    {
#line 4473 "varset.c"
      mercury__varset__TypeInfo_11_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4475 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_11_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_10_18));
#line 4477 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_11_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_12));
#line 4479 "varset.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__TypeInfo_11_19, mercury__varset__TypeCtorInfo_12_20, mercury__varset__Names_16, mercury__varset__Id_6, &mercury__varset__conv0_Name0_9);
    }
#line 41 "map.opt"
    if (mercury__varset__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__varset__Name0_9 = ((MR_String) mercury__varset__conv0_Name0_9);
#line 41 "map.opt"
        mercury__varset__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 423 "varset.m"
    if (mercury__varset__succeeded)
#line 422 "varset.m"
      *mercury__varset__Name_8 = mercury__varset__Name0_9;
#line 423 "varset.m"
    else
#line 424 "varset.m"
      {
#line 424 "varset.m"
        MR_Integer mercury__varset__VarNum_10 = (MR_Integer) mercury__varset__Id_6;
#line 424 "varset.m"
        MR_String mercury__varset__NumStr_11;

#line 705 "string.opt"
        {
#line 705 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_10, (MR_Integer) 10, &mercury__varset__NumStr_11);
        }
#line 426 "varset.m"
        {
#line 426 "varset.m"
          mercury__string__append_3_p_2(mercury__varset__Prefix_7, mercury__varset__NumStr_11, mercury__varset__Name_8);
#line 426 "varset.m"
          return;
        }
#line 424 "varset.m"
      }
#line 423 "varset.m"
  }
#line 121 "varset.m"
}

#line 120 "varset.m"
MR_String MR_CALL 
mercury__varset__lookup_name_3_f_0(
#line 120 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 120 "varset.m"
  MR_Word mercury__varset__VS1_5,
#line 120 "varset.m"
  MR_Word mercury__varset__V_6,
#line 120 "varset.m"
  MR_String mercury__varset__S_7)
#line 120 "varset.m"
{
#line 746 "varset.m"
  {
#line 746 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 746 "varset.m"
    MR_String mercury__varset__S2_8;

#line 746 "varset.m"
    {
#line 746 "varset.m"
      mercury__varset__lookup_name_4_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__VS1_5, mercury__varset__V_6, mercury__varset__S_7, &mercury__varset__S2_8);
    }
#line 746 "varset.m"
    return mercury__varset__S2_8;
#line 746 "varset.m"
  }
#line 120 "varset.m"
}

#line 115 "varset.m"
void MR_CALL 
mercury__varset__lookup_name_3_p_0(
#line 115 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_11,
#line 115 "varset.m"
  MR_Word mercury__varset__VarSet_4,
#line 115 "varset.m"
  MR_Word mercury__varset__Id_5,
#line 115 "varset.m"
  MR_String * mercury__varset__Name_6)
#line 115 "varset.m"
{
#line 414 "varset.m"
  {
#line 414 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 414 "varset.m"
    MR_String mercury__varset__Name0_7;
#line 429 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_10_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 429 "varset.m"
    MR_Word mercury__varset__TypeInfo_11_18;
#line 429 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_12_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 429 "varset.m"
    MR_Word mercury__varset__Names_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 1)));
#line 429 "varset.m"
    MR_Word mercury__varset__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 0)));
#line 429 "varset.m"
    MR_Word mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 2)));
#line 41 "map.opt"
    MR_Box mercury__varset__conv0_Name0_7;

#line 4594 "varset.c"
    {
#line 4596 "varset.c"
      mercury__varset__TypeInfo_11_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4598 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_11_18, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_10_17));
#line 4600 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_11_18, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
#line 4602 "varset.c"
    }
#line 41 "map.opt"
    {
#line 41 "map.opt"
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__TypeInfo_11_18, mercury__varset__TypeCtorInfo_12_19, mercury__varset__Names_15, mercury__varset__Id_5, &mercury__varset__conv0_Name0_7);
    }
#line 41 "map.opt"
    if (mercury__varset__succeeded)
#line 41 "map.opt"
      {
#line 41 "map.opt"
        mercury__varset__Name0_7 = ((MR_String) mercury__varset__conv0_Name0_7);
#line 41 "map.opt"
        mercury__varset__succeeded = MR_TRUE;
#line 41 "map.opt"
      }
#line 414 "varset.m"
    if (mercury__varset__succeeded)
#line 413 "varset.m"
      *mercury__varset__Name_6 = mercury__varset__Name0_7;
#line 414 "varset.m"
    else
#line 415 "varset.m"
      {
#line 415 "varset.m"
        MR_Integer mercury__varset__VarNum_8 = (MR_Integer) mercury__varset__Id_5;
#line 415 "varset.m"
        MR_String mercury__varset__NumStr_9;

#line 705 "string.opt"
        {
#line 705 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_8, (MR_Integer) 10, &mercury__varset__NumStr_9);
        }
#line 417 "varset.m"
        {
#line 417 "varset.m"
          mercury__string__append_3_p_2((MR_String) "V_", mercury__varset__NumStr_9, mercury__varset__Name_6);
#line 417 "varset.m"
          return;
        }
#line 415 "varset.m"
      }
#line 414 "varset.m"
  }
#line 115 "varset.m"
}

#line 114 "varset.m"
MR_String MR_CALL 
mercury__varset__lookup_name_2_f_0(
#line 114 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_7,
#line 114 "varset.m"
  MR_Word mercury__varset__VS_4,
#line 114 "varset.m"
  MR_Word mercury__varset__V_5)
#line 114 "varset.m"
{
#line 743 "varset.m"
  {
#line 743 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 743 "varset.m"
    MR_String mercury__varset__S_6;

#line 743 "varset.m"
    {
#line 743 "varset.m"
      mercury__varset__lookup_name_3_p_0(mercury__varset__TypeInfo_for_T_7, mercury__varset__VS_4, mercury__varset__V_5, &mercury__varset__S_6);
    }
#line 743 "varset.m"
    return mercury__varset__S_6;
#line 743 "varset.m"
  }
#line 114 "varset.m"
}

#line 108 "varset.m"
void MR_CALL 
mercury__varset__name_var_4_p_0(
#line 108 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_18,
#line 108 "varset.m"
  MR_Word mercury__varset__Id_5,
#line 108 "varset.m"
  MR_String mercury__varset__Name_6,
#line 108 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_10,
#line 108 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_11)
#line 108 "varset.m"
{
#line 404 "varset.m"
  {
#line 404 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 404 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 404 "varset.m"
    MR_Word mercury__varset__TypeInfo_20_20;
#line 404 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_21_21;
#line 404 "varset.m"
    MR_Word mercury__varset__Names0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 404 "varset.m"
    MR_Word mercury__varset__Names_9;
#line 405 "varset.m"
    MR_Word mercury__varset__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 405 "varset.m"
    MR_Word mercury__varset__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 407 "varset.m"
    MR_Word mercury__varset__V_15_15;
#line 407 "varset.m"
    MR_Word mercury__varset__V_17_17;
#line 407 "varset.m"
    MR_Word mercury__varset__V_16_16;

#line 4721 "varset.c"
    {
#line 4723 "varset.c"
      mercury__varset__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4725 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_19_19));
#line 4727 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_18));
#line 4729 "varset.c"
    }
#line 4731 "varset.c"
    mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 119 "map.opt"
    {
#line 119 "map.opt"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__TypeInfo_20_20, mercury__varset__TypeCtorInfo_21_21, mercury__varset__Id_5, ((MR_Box) (mercury__varset__Name_6)), mercury__varset__Names0_8, &mercury__varset__Names_9);
    }
#line 407 "varset.m"
    mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 407 "varset.m"
    mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 407 "varset.m"
    mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 407 "varset.m"
    {
#line 407 "varset.m"
      MR_Word base;
#line 407 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 407 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_11 = base;
#line 407 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_15_15));
#line 407 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
#line 407 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__V_17_17));
#line 407 "varset.m"
    }
#line 404 "varset.m"
  }
#line 108 "varset.m"
}

#line 107 "varset.m"
MR_Word MR_CALL 
mercury__varset__name_var_3_f_0(
#line 107 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_11,
#line 107 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VS_0_8,
#line 107 "varset.m"
  MR_Word mercury__varset__V_6,
#line 107 "varset.m"
  MR_String mercury__varset__S_7)
#line 107 "varset.m"
{
#line 740 "varset.m"
  {
#line 740 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 740 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_9;

#line 740 "varset.m"
    {
#line 740 "varset.m"
      mercury__varset__name_var_4_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__V_6, mercury__varset__S_7, mercury__varset__STATE_VARIABLE_VS_0_8, &mercury__varset__STATE_VARIABLE_VS_9);
    }
#line 740 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_9;
#line 740 "varset.m"
  }
#line 107 "varset.m"
}

#line 103 "varset.m"
void MR_CALL 
mercury__varset__vars_2_p_0(
#line 103 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_11,
#line 103 "varset.m"
  MR_Word mercury__varset__VarSet0_3,
#line 103 "varset.m"
  MR_Word * mercury__varset__Vars_4)
#line 103 "varset.m"
{
#line 385 "varset.m"
  {
#line 385 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 385 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_12_12;
#line 385 "varset.m"
    MR_Word mercury__varset__TypeInfo_13_13;
#line 385 "varset.m"
    MR_Word mercury__varset__MaxId0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet0_3, (MR_Integer) 0)));
#line 385 "varset.m"
    MR_Word mercury__varset__N0_6 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 385 "varset.m"
    MR_Word mercury__varset__RevVars_7;
#line 385 "varset.m"
    MR_Word mercury__varset__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet0_3, (MR_Integer) 1)));
#line 386 "varset.m"
    MR_Word mercury__varset__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet0_3, (MR_Integer) 2)));
#line 389 "varset.m"
    MR_Word mercury__varset__conv0_Vars_4;

#line 388 "varset.m"
    {
#line 388 "varset.m"
      mercury__varset__RevVars_7 = mercury__varset__vars_2_3_f_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__N0_6, mercury__varset__MaxId0_5, mercury__varset__V_8_8);
    }
#line 4836 "varset.c"
    mercury__varset__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 4838 "varset.c"
    {
#line 4840 "varset.c"
      mercury__varset__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4842 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_13_13, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_12_12));
#line 4844 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_13_13, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
#line 4846 "varset.c"
    }
#line 389 "varset.m"
    {
#line 389 "varset.m"
      mercury__list__reverse_2_p_0(mercury__varset__TypeInfo_13_13, (MR_Word) mercury__varset__RevVars_7, &mercury__varset__conv0_Vars_4);
    }
#line 389 "varset.m"
    *mercury__varset__Vars_4 = (MR_Word) mercury__varset__conv0_Vars_4;
#line 385 "varset.m"
  }
#line 103 "varset.m"
}

#line 102 "varset.m"
MR_Word MR_CALL 
mercury__varset__vars_1_f_0(
#line 102 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 102 "varset.m"
  MR_Word mercury__varset__VS_3)
#line 102 "varset.m"
{
#line 737 "varset.m"
  {
#line 737 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 737 "varset.m"
    MR_Word mercury__varset__Vs_4;

#line 737 "varset.m"
    {
#line 737 "varset.m"
      mercury__varset__vars_2_p_0(mercury__varset__TypeInfo_for_T_5, mercury__varset__VS_3, &mercury__varset__Vs_4);
    }
#line 737 "varset.m"
    return mercury__varset__Vs_4;
#line 737 "varset.m"
  }
#line 102 "varset.m"
}

#line 97 "varset.m"
void MR_CALL 
mercury__varset__delete_sorted_vars_3_p_0(
#line 97 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_14,
#line 97 "varset.m"
  MR_Word mercury__varset__DeleteVars_4,
#line 97 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_11,
#line 97 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_12)
#line 97 "varset.m"
{
#line 377 "varset.m"
  {
#line 377 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 377 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 377 "varset.m"
    MR_Word mercury__varset__TypeInfo_16_16;
#line 377 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_17_17;
#line 377 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_18_18;
#line 377 "varset.m"
    MR_Word mercury__varset__TypeInfo_19_19;
#line 377 "varset.m"
    MR_Word mercury__varset__MaxId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0)));
#line 377 "varset.m"
    MR_Word mercury__varset__Names0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1)));
#line 377 "varset.m"
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2)));
#line 377 "varset.m"
    MR_Word mercury__varset__Names_9;
#line 377 "varset.m"
    MR_Word mercury__varset__Values_10;
#line 379 "varset.m"
    MR_Word mercury__varset__conv0_Names_9;
#line 380 "varset.m"
    MR_Word mercury__varset__conv1_Values_10;

#line 4930 "varset.c"
    {
#line 4932 "varset.c"
      mercury__varset__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4934 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_15_15));
#line 4936 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 4938 "varset.c"
    }
#line 4940 "varset.c"
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 379 "varset.m"
    {
#line 379 "varset.m"
      mercury__map__delete_sorted_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeCtorInfo_17_17, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Names0_7, &mercury__varset__conv0_Names_9);
    }
#line 379 "varset.m"
    mercury__varset__Names_9 = (MR_Word) mercury__varset__conv0_Names_9;
#line 4949 "varset.c"
    mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4951 "varset.c"
    {
#line 4953 "varset.c"
      mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4955 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
#line 4957 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 4959 "varset.c"
    }
#line 380 "varset.m"
    {
#line 380 "varset.m"
      mercury__map__delete_sorted_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeInfo_19_19, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Values0_8, &mercury__varset__conv1_Values_10);
    }
#line 380 "varset.m"
    mercury__varset__Values_10 = (MR_Word) mercury__varset__conv1_Values_10;
#line 381 "varset.m"
    {
#line 381 "varset.m"
      MR_Word base;
#line 381 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 381 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_12 = base;
#line 381 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_6));
#line 381 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
#line 381 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
#line 381 "varset.m"
    }
#line 377 "varset.m"
  }
#line 97 "varset.m"
}

#line 96 "varset.m"
MR_Word MR_CALL 
mercury__varset__delete_sorted_vars_2_f_0(
#line 96 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 96 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VS_0_6,
#line 96 "varset.m"
  MR_Word mercury__varset__Vs_5)
#line 96 "varset.m"
{
#line 734 "varset.m"
  {
#line 734 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 734 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_7;

#line 734 "varset.m"
    {
#line 734 "varset.m"
      mercury__varset__delete_sorted_vars_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__Vs_5, mercury__varset__STATE_VARIABLE_VS_0_6, &mercury__varset__STATE_VARIABLE_VS_7);
    }
#line 734 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_7;
#line 734 "varset.m"
  }
#line 96 "varset.m"
}

#line 89 "varset.m"
void MR_CALL 
mercury__varset__delete_vars_3_p_0(
#line 89 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_14,
#line 89 "varset.m"
  MR_Word mercury__varset__DeleteVars_4,
#line 89 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_11,
#line 89 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_12)
#line 89 "varset.m"
{
#line 371 "varset.m"
  {
#line 371 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 371 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 371 "varset.m"
    MR_Word mercury__varset__TypeInfo_16_16;
#line 371 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_17_17;
#line 371 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_18_18;
#line 371 "varset.m"
    MR_Word mercury__varset__TypeInfo_19_19;
#line 371 "varset.m"
    MR_Word mercury__varset__MaxId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0)));
#line 371 "varset.m"
    MR_Word mercury__varset__Names0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1)));
#line 371 "varset.m"
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2)));
#line 371 "varset.m"
    MR_Word mercury__varset__Names_9;
#line 371 "varset.m"
    MR_Word mercury__varset__Values_10;
#line 373 "varset.m"
    MR_Word mercury__varset__conv0_Names_9;
#line 374 "varset.m"
    MR_Word mercury__varset__conv1_Values_10;

#line 5061 "varset.c"
    {
#line 5063 "varset.c"
      mercury__varset__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5065 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_15_15));
#line 5067 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 5069 "varset.c"
    }
#line 5071 "varset.c"
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 373 "varset.m"
    {
#line 373 "varset.m"
      mercury__map__delete_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeCtorInfo_17_17, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Names0_7, &mercury__varset__conv0_Names_9);
    }
#line 373 "varset.m"
    mercury__varset__Names_9 = (MR_Word) mercury__varset__conv0_Names_9;
#line 5080 "varset.c"
    mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 5082 "varset.c"
    {
#line 5084 "varset.c"
      mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5086 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
#line 5088 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 5090 "varset.c"
    }
#line 374 "varset.m"
    {
#line 374 "varset.m"
      mercury__map__delete_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeInfo_19_19, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Values0_8, &mercury__varset__conv1_Values_10);
    }
#line 374 "varset.m"
    mercury__varset__Values_10 = (MR_Word) mercury__varset__conv1_Values_10;
#line 375 "varset.m"
    {
#line 375 "varset.m"
      MR_Word base;
#line 375 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 375 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_12 = base;
#line 375 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_6));
#line 375 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
#line 375 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
#line 375 "varset.m"
    }
#line 371 "varset.m"
  }
#line 89 "varset.m"
}

#line 88 "varset.m"
MR_Word MR_CALL 
mercury__varset__delete_vars_2_f_0(
#line 88 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 88 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VS_0_6,
#line 88 "varset.m"
  MR_Word mercury__varset__Vs_5)
#line 88 "varset.m"
{
#line 731 "varset.m"
  {
#line 731 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 731 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_7;

#line 731 "varset.m"
    {
#line 731 "varset.m"
      mercury__varset__delete_vars_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__Vs_5, mercury__varset__STATE_VARIABLE_VS_0_6, &mercury__varset__STATE_VARIABLE_VS_7);
    }
#line 731 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_7;
#line 731 "varset.m"
  }
#line 88 "varset.m"
}

#line 84 "varset.m"
void MR_CALL 
mercury__varset__delete_var_3_p_0(
#line 84 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_14,
#line 84 "varset.m"
  MR_Word mercury__varset__DeleteVar_4,
#line 84 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_11,
#line 84 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_12)
#line 84 "varset.m"
{
#line 363 "varset.m"
  {
#line 363 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 363 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 363 "varset.m"
    MR_Word mercury__varset__TypeInfo_16_16;
#line 363 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_17_17;
#line 363 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_18_18;
#line 363 "varset.m"
    MR_Word mercury__varset__TypeInfo_19_19;
#line 363 "varset.m"
    MR_Word mercury__varset__MaxId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0)));
#line 363 "varset.m"
    MR_Word mercury__varset__Names0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1)));
#line 363 "varset.m"
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2)));
#line 363 "varset.m"
    MR_Word mercury__varset__Names_9;
#line 363 "varset.m"
    MR_Word mercury__varset__Values_10;
#line 61 "tree234.opt"
    MR_Word mercury__varset__V_7_26;
#line 61 "tree234.opt"
    MR_Word mercury__varset__conv0_Names_9;
#line 61 "tree234.opt"
    MR_Word mercury__varset__V_7_33;
#line 61 "tree234.opt"
    MR_Word mercury__varset__conv1_Values_10;

#line 5196 "varset.c"
    {
#line 5198 "varset.c"
      mercury__varset__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5200 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_15_15));
#line 5202 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 5204 "varset.c"
    }
#line 5206 "varset.c"
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 61 "tree234.opt"
    {
#line 61 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeCtorInfo_17_17, (MR_Word) mercury__varset__Names0_7, ((MR_Box) (mercury__varset__DeleteVar_4)), &mercury__varset__conv0_Names_9, &mercury__varset__V_7_26);
    }
#line 61 "tree234.opt"
    mercury__varset__Names_9 = (MR_Word) mercury__varset__conv0_Names_9;
#line 5215 "varset.c"
    mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 5217 "varset.c"
    {
#line 5219 "varset.c"
      mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5221 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
#line 5223 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 5225 "varset.c"
    }
#line 61 "tree234.opt"
    {
#line 61 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeInfo_19_19, (MR_Word) mercury__varset__Values0_8, ((MR_Box) (mercury__varset__DeleteVar_4)), &mercury__varset__conv1_Values_10, &mercury__varset__V_7_33);
    }
#line 61 "tree234.opt"
    mercury__varset__Values_10 = (MR_Word) mercury__varset__conv1_Values_10;
#line 367 "varset.m"
    {
#line 367 "varset.m"
      MR_Word base;
#line 367 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 367 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_12 = base;
#line 367 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_6));
#line 367 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
#line 367 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
#line 367 "varset.m"
    }
#line 363 "varset.m"
  }
#line 84 "varset.m"
}

#line 83 "varset.m"
MR_Word MR_CALL 
mercury__varset__delete_var_2_f_0(
#line 83 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 83 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VS_0_6,
#line 83 "varset.m"
  MR_Word mercury__varset__V_5)
#line 83 "varset.m"
{
#line 728 "varset.m"
  {
#line 728 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 728 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_7;

#line 728 "varset.m"
    {
#line 728 "varset.m"
      mercury__varset__delete_var_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__V_5, mercury__varset__STATE_VARIABLE_VS_0_6, &mercury__varset__STATE_VARIABLE_VS_7);
    }
#line 728 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_7;
#line 728 "varset.m"
  }
#line 83 "varset.m"
}

#line 78 "varset.m"
void MR_CALL 
mercury__varset__new_vars_4_p_0(
#line 78 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_13,
#line 78 "varset.m"
  MR_Integer mercury__varset__NumVars_5,
#line 78 "varset.m"
  MR_Word * mercury__varset__NewVars_6,
#line 78 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_9,
#line 78 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_10)
#line 78 "varset.m"
{
#line 342 "varset.m"
  {
#line 342 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 342 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_14_14;
#line 342 "varset.m"
    MR_Word mercury__varset__TypeInfo_15_15;
#line 342 "varset.m"
    MR_Word mercury__varset__RevNewVars_8;
#line 342 "varset.m"
    MR_Word mercury__varset__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 345 "varset.m"
    MR_Word mercury__varset__conv0_NewVars_6;

#line 343 "varset.m"
    {
#line 343 "varset.m"
      mercury__varset__new_vars_2_5_p_0(mercury__varset__TypeInfo_for_T_13, mercury__varset__NumVars_5, mercury__varset__V_11_11, &mercury__varset__RevNewVars_8, mercury__varset__STATE_VARIABLE_VarSet_0_9, mercury__varset__STATE_VARIABLE_VarSet_10);
    }
#line 5320 "varset.c"
    mercury__varset__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5322 "varset.c"
    {
#line 5324 "varset.c"
      mercury__varset__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5326 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_15_15, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_14_14));
#line 5328 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_15_15, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_13));
#line 5330 "varset.c"
    }
#line 345 "varset.m"
    {
#line 345 "varset.m"
      mercury__list__reverse_2_p_0(mercury__varset__TypeInfo_15_15, (MR_Word) mercury__varset__RevNewVars_8, &mercury__varset__conv0_NewVars_6);
    }
#line 345 "varset.m"
    *mercury__varset__NewVars_6 = (MR_Word) mercury__varset__conv0_NewVars_6;
#line 342 "varset.m"
  }
#line 78 "varset.m"
}

#line 73 "varset.m"
void MR_CALL 
mercury__varset__new_maybe_named_var_4_p_0(
#line 73 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_17,
#line 73 "varset.m"
  MR_Word mercury__varset__MaybeName_5,
#line 73 "varset.m"
  MR_Word * mercury__varset__Var_6,
#line 73 "varset.m"
  MR_Word mercury__varset__HeadVar__3_3,
#line 73 "varset.m"
  MR_Word * mercury__varset__HeadVar__4_4)
#line 73 "varset.m"
{
#line 333 "varset.m"
  {
#line 333 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 333 "varset.m"
    MR_Word mercury__varset__Values_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 2)));
#line 333 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_MaxId_0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 0)));
#line 333 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_Names_0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 1)));
#line 333 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_MaxId_13;
#line 333 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_Names_14;
#line 333 "varset.m"
    MR_Integer mercury__varset__V_4_21;
#line 333 "varset.m"
    MR_Integer mercury__varset__V0_5_22 = (MR_Integer) mercury__varset__STATE_VARIABLE_MaxId_0_11;

#line 106 "term.opt"
    mercury__varset__V_4_21 = (mercury__varset__V0_5_22 + (MR_Integer) 1);
#line 105 "term.opt"
    *mercury__varset__Var_6 = (MR_Word) mercury__varset__V_4_21;
#line 105 "term.opt"
    mercury__varset__STATE_VARIABLE_MaxId_13 = (MR_Word) mercury__varset__V_4_21;
#line 337 "varset.m"
    if ((mercury__varset__MaybeName_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "varset.m"
      mercury__varset__STATE_VARIABLE_Names_14 = mercury__varset__STATE_VARIABLE_Names_0_12;
#line 337 "varset.m"
    else
#line 338 "varset.m"
      {
#line 338 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 338 "varset.m"
        MR_Word mercury__varset__TypeInfo_19_19;
#line 338 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_20_20;
#line 338 "varset.m"
        MR_String mercury__varset__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__varset__MaybeName_5, (MR_Integer) 0)));

#line 5401 "varset.c"
        {
#line 5403 "varset.c"
          mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5405 "varset.c"
          MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
#line 5407 "varset.c"
          MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_17));
#line 5409 "varset.c"
        }
#line 5411 "varset.c"
        mercury__varset__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 119 "map.opt"
        {
#line 119 "map.opt"
          mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_17, mercury__varset__TypeInfo_19_19, mercury__varset__TypeCtorInfo_20_20, *mercury__varset__Var_6, ((MR_Box) (mercury__varset__Name_10)), mercury__varset__STATE_VARIABLE_Names_0_12, &mercury__varset__STATE_VARIABLE_Names_14);
        }
#line 338 "varset.m"
      }
#line 333 "varset.m"
    {
#line 333 "varset.m"
      MR_Word base;
#line 333 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 333 "varset.m"
      *mercury__varset__HeadVar__4_4 = base;
#line 333 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__STATE_VARIABLE_MaxId_13));
#line 333 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__STATE_VARIABLE_Names_14));
#line 333 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_9));
#line 333 "varset.m"
    }
#line 333 "varset.m"
  }
#line 73 "varset.m"
}

#line 68 "varset.m"
void MR_CALL 
mercury__varset__new_uniquely_named_var_4_p_0(
#line 68 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_24,
#line 68 "varset.m"
  MR_String mercury__varset__Name_5,
#line 68 "varset.m"
  MR_Word * mercury__varset__Var_6,
#line 68 "varset.m"
  MR_Word mercury__varset__HeadVar__3_3,
#line 68 "varset.m"
  MR_Word * mercury__varset__HeadVar__4_4)
#line 68 "varset.m"
{
#line 327 "varset.m"
  {
#line 327 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 327 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_25_25;
#line 327 "varset.m"
    MR_Word mercury__varset__TypeInfo_26_26;
#line 327 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_27_27;
#line 327 "varset.m"
    MR_Word mercury__varset__Values_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 2)));
#line 327 "varset.m"
    MR_Integer mercury__varset__N_10;
#line 327 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_MaxId_0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 0)));
#line 327 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_Names_0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 1)));
#line 327 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_MaxId_13;
#line 327 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_Names_14;
#line 327 "varset.m"
    MR_String mercury__varset__V_16_16;
#line 327 "varset.m"
    MR_String mercury__varset__V_28_28;
#line 327 "varset.m"
    MR_Word mercury__varset__V_34_34;
#line 327 "varset.m"
    MR_String mercury__varset__V_36_36;
#line 327 "varset.m"
    MR_String mercury__varset__V_37_37;
#line 327 "varset.m"
    MR_Integer mercury__varset__V0_5_45 = (MR_Integer) mercury__varset__STATE_VARIABLE_MaxId_0_11;
#line 327 "varset.m"
    MR_Word mercury__varset__MaybeWidth_7_51;
#line 327 "varset.m"
    MR_Word mercury__varset__MaybePrec_8_52;
#line 327 "varset.m"
    MR_Word mercury__varset__MaybeWidth_7_62;
#line 327 "varset.m"
    MR_Word mercury__varset__MaybePrec_8_63;

#line 106 "term.opt"
    mercury__varset__N_10 = (mercury__varset__V0_5_45 + (MR_Integer) 1);
#line 105 "term.opt"
    *mercury__varset__Var_6 = (MR_Word) mercury__varset__N_10;
#line 105 "term.opt"
    mercury__varset__STATE_VARIABLE_MaxId_13 = (MR_Word) mercury__varset__N_10;
#line 5505 "varset.c"
    mercury__varset__V_34_34 = (MR_Word) &mercury__varset_scalar_common_5[0];
#line 36 "string.format.opt"
    mercury__varset__MaybeWidth_7_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 37 "string.format.opt"
    mercury__varset__MaybePrec_8_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 38 "string.format.opt"
    {
#line 38 "string.format.opt"
      mercury__string__format__format_signed_int_component_5_p_0(mercury__varset__V_34_34, mercury__varset__MaybeWidth_7_51, mercury__varset__MaybePrec_8_52, mercury__varset__N_10, &mercury__varset__V_28_28);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2((MR_String) "_", mercury__varset__V_28_28, &mercury__varset__V_36_36);
    }
#line 20 "string.format.opt"
    mercury__varset__MaybeWidth_7_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 21 "string.format.opt"
    mercury__varset__MaybePrec_8_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "string.format.opt"
    {
#line 22 "string.format.opt"
      mercury__string__format__format_string_component_5_p_0(mercury__varset__V_34_34, mercury__varset__MaybeWidth_7_62, mercury__varset__MaybePrec_8_63, mercury__varset__Name_5, &mercury__varset__V_37_37);
    }
#line 406 "string.opt"
    {
#line 406 "string.opt"
      mercury__string__append_3_p_2(mercury__varset__V_37_37, mercury__varset__V_36_36, &mercury__varset__V_16_16);
    }
#line 5535 "varset.c"
    mercury__varset__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5537 "varset.c"
    {
#line 5539 "varset.c"
      mercury__varset__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5541 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_25_25));
#line 5543 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_24));
#line 5545 "varset.c"
    }
#line 5547 "varset.c"
    mercury__varset__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 119 "map.opt"
    {
#line 119 "map.opt"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_24, mercury__varset__TypeInfo_26_26, mercury__varset__TypeCtorInfo_27_27, *mercury__varset__Var_6, ((MR_Box) (mercury__varset__V_16_16)), mercury__varset__STATE_VARIABLE_Names_0_12, &mercury__varset__STATE_VARIABLE_Names_14);
    }
#line 327 "varset.m"
    {
#line 327 "varset.m"
      MR_Word base;
#line 327 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 327 "varset.m"
      *mercury__varset__HeadVar__4_4 = base;
#line 327 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__STATE_VARIABLE_MaxId_13));
#line 327 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__STATE_VARIABLE_Names_14));
#line 327 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_9));
#line 327 "varset.m"
    }
#line 327 "varset.m"
  }
#line 68 "varset.m"
}

#line 62 "varset.m"
void MR_CALL 
mercury__varset__new_named_var_4_p_0(
#line 62 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_16,
#line 62 "varset.m"
  MR_String mercury__varset__Name_5,
#line 62 "varset.m"
  MR_Word * mercury__varset__Var_6,
#line 62 "varset.m"
  MR_Word mercury__varset__HeadVar__3_3,
#line 62 "varset.m"
  MR_Word * mercury__varset__HeadVar__4_4)
#line 62 "varset.m"
{
#line 322 "varset.m"
  {
#line 322 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 322 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_17_17;
#line 322 "varset.m"
    MR_Word mercury__varset__TypeInfo_18_18;
#line 322 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_19_19;
#line 322 "varset.m"
    MR_Word mercury__varset__Values_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 2)));
#line 322 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_MaxId_0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 0)));
#line 322 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_Names_0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 1)));
#line 322 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_MaxId_12;
#line 322 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_Names_13;
#line 322 "varset.m"
    MR_Integer mercury__varset__V_4_20;
#line 322 "varset.m"
    MR_Integer mercury__varset__V0_5_21 = (MR_Integer) mercury__varset__STATE_VARIABLE_MaxId_0_10;

#line 106 "term.opt"
    mercury__varset__V_4_20 = (mercury__varset__V0_5_21 + (MR_Integer) 1);
#line 105 "term.opt"
    *mercury__varset__Var_6 = (MR_Word) mercury__varset__V_4_20;
#line 105 "term.opt"
    mercury__varset__STATE_VARIABLE_MaxId_12 = (MR_Word) mercury__varset__V_4_20;
#line 5621 "varset.c"
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5623 "varset.c"
    {
#line 5625 "varset.c"
      mercury__varset__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5627 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_17_17));
#line 5629 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_16));
#line 5631 "varset.c"
    }
#line 5633 "varset.c"
    mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 119 "map.opt"
    {
#line 119 "map.opt"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_16, mercury__varset__TypeInfo_18_18, mercury__varset__TypeCtorInfo_19_19, *mercury__varset__Var_6, ((MR_Box) (mercury__varset__Name_5)), mercury__varset__STATE_VARIABLE_Names_0_11, &mercury__varset__STATE_VARIABLE_Names_13);
    }
#line 322 "varset.m"
    {
#line 322 "varset.m"
      MR_Word base;
#line 322 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 322 "varset.m"
      *mercury__varset__HeadVar__4_4 = base;
#line 322 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__STATE_VARIABLE_MaxId_12));
#line 322 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__STATE_VARIABLE_Names_13));
#line 322 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_9));
#line 322 "varset.m"
    }
#line 322 "varset.m"
  }
#line 62 "varset.m"
}

#line 58 "varset.m"
void MR_CALL 
mercury__varset__new_var_3_p_0(
#line 58 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_16,
#line 58 "varset.m"
  MR_Word * mercury__varset__Var_4,
#line 58 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_8,
#line 58 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_9)
#line 58 "varset.m"
{
#line 316 "varset.m"
  {
#line 316 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 316 "varset.m"
    MR_Word mercury__varset__MaxId0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_8, (MR_Integer) 0)));
#line 316 "varset.m"
    MR_Word mercury__varset__MaxId_7;
#line 316 "varset.m"
    MR_Word mercury__varset__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_8, (MR_Integer) 1)));
#line 316 "varset.m"
    MR_Word mercury__varset__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_8, (MR_Integer) 2)));
#line 316 "varset.m"
    MR_Integer mercury__varset__V_4_17;
#line 316 "varset.m"
    MR_Integer mercury__varset__V0_5_18 = (MR_Integer) mercury__varset__MaxId0_6;

#line 106 "term.opt"
    mercury__varset__V_4_17 = (mercury__varset__V0_5_18 + (MR_Integer) 1);
#line 105 "term.opt"
    *mercury__varset__Var_4 = (MR_Word) mercury__varset__V_4_17;
#line 105 "term.opt"
    mercury__varset__MaxId_7 = (MR_Word) mercury__varset__V_4_17;
#line 319 "varset.m"
    {
#line 319 "varset.m"
      MR_Word base;
#line 319 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 319 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_9 = base;
#line 319 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_7));
#line 319 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__V_11_11));
#line 319 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__V_12_12));
#line 319 "varset.m"
    }
#line 316 "varset.m"
  }
#line 58 "varset.m"
}

#line 54 "varset.m"
MR_bool MR_CALL 
mercury__varset__is_empty_1_p_0(
#line 54 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 54 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1)
#line 54 "varset.m"
{
#line 311 "varset.m"
  {
#line 311 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 311 "varset.m"
    MR_Word mercury__varset__VarSupply_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 311 "varset.m"
    MR_Integer mercury__varset__V_2_6 = (MR_Integer) mercury__varset__VarSupply_2;
#line 311 "varset.m"
    MR_Word mercury__varset__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 311 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));

#line 104 "term.opt"
    mercury__varset__succeeded = (mercury__varset__V_2_6 == (MR_Integer) 0);
#line 311 "varset.m"
    return mercury__varset__succeeded;
#line 311 "varset.m"
  }
#line 54 "varset.m"
}

#line 50 "varset.m"
void MR_CALL 
mercury__varset__init_1_p_0(
#line 50 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 50 "varset.m"
  MR_Word * mercury__varset__HeadVar__1_1)
#line 50 "varset.m"
{
#line 304 "varset.m"
  {
#line 304 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 304 "varset.m"
    MR_Word mercury__varset__VarSupply_2 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 304 "varset.m"
    MR_Word mercury__varset__Names_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 304 "varset.m"
    MR_Word mercury__varset__Values_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 304 "varset.m"
    *mercury__varset__HeadVar__1_1 = (MR_Word) &mercury__varset_scalar_common_2[1];
#line 304 "varset.m"
  }
#line 50 "varset.m"
}

#line 49 "varset.m"
MR_Word MR_CALL 
mercury__varset__init_0_f_0(
#line 49 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_3)
#line 49 "varset.m"
{
#line 304 "varset.m"
  {
#line 304 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 304 "varset.m"
    MR_Word mercury__varset__VS_2 = (MR_Word) &mercury__varset_scalar_common_2[1];
#line 304 "varset.m"
    MR_Word mercury__varset__VarSupply_4 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 304 "varset.m"
    MR_Word mercury__varset__Names_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 304 "varset.m"
    MR_Word mercury__varset__Values_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 304 "varset.m"
    return mercury__varset__VS_2;
#line 304 "varset.m"
  }
#line 49 "varset.m"
}

void mercury__varset__init(void)
{
}

void mercury__varset__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__varset__varset__type_ctor_info_varset_1);
	MR_register_type_ctor_info(&mercury__varset__varset__type_ctor_info_varset_0);
}

void mercury__varset__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module varset. */
