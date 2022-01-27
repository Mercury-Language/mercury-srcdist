/*
** Automatically generated from `varset.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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




#line 85 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_supply_1__pseudo_1;

#line 88 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_1__pseudo_1;

#line 91 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0;

#line 94 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_term_1__pseudo_1;

#line 97 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1;

#line 100 "varset.c"
static const MR_PseudoTypeInfo mercury__varset__varset__field_types_varset_1_0[3];

#line 103 "varset.c"
static const MR_ConstString mercury__varset__varset__field_names_varset_1_0[3];

#line 106 "varset.c"
static const MR_DuFunctorDesc mercury__varset__varset__du_functor_desc_varset_1_0;

#line 109 "varset.c"
static const MR_DuFunctorDescPtr mercury__varset__varset__du_stag_ordered_varset_1_0[1];

#line 112 "varset.c"
static const MR_DuPtagLayout mercury__varset__varset__du_ptag_ordered_varset_1[1];

#line 115 "varset.c"
static const MR_DuFunctorDescPtr mercury__varset__varset__du_name_ordered_varset_1[1];

#line 118 "varset.c"
static const MR_Integer mercury__varset__varset__functor_number_map_varset_1[1];

#line 121 "varset.c"
static const MR_FA_TypeInfo_Struct1 mercury__varset__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 124 "varset.c"
static MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0_10001(
#line 127 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 129 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2,
#line 131 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3);

#line 134 "varset.c"
static void MR_CALL 
mercury__varset____Compare____varset_1_0_10001(
#line 137 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 139 "varset.c"
  MR_Box * mercury__varset__wrapper_arg_2,
#line 141 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3,
#line 143 "varset.c"
  MR_Box mercury__varset__wrapper_arg_4);

#line 146 "varset.c"
static MR_bool MR_CALL 
mercury__varset____Unify____varset_0_0_10001(
#line 149 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 151 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2);

#line 154 "varset.c"
static void MR_CALL 
mercury__varset____Compare____varset_0_0_10001(
#line 157 "varset.c"
  MR_Box * mercury__varset__wrapper_arg_1,
#line 159 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2,
#line 161 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__varset__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 656 "varset.m"
static void MR_CALL 
mercury__varset__append_suffix_until_unique_4_p_0(
#line 656 "varset.m"
  MR_String mercury__varset__Trial0_5,
#line 656 "varset.m"
  MR_String mercury__varset__Suffix_6,
#line 656 "varset.m"
  MR_Word mercury__varset__UsedNames_7,
#line 656 "varset.m"
  MR_String * mercury__varset__Final_8);


static /* final */ const MR_Box mercury__varset_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__varset_scalar_common_2[2][3];

static /* final */ const MR_Box mercury__varset_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__varset_scalar_common_4[2][5];




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
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
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



#line 565 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_supply_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_supply_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 573 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 581 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__varset__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 590 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__varset__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 598 "varset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__varset__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__varset__term__pti_term_1__pseudo_1
  }
};

#line 607 "varset.c"
static const MR_PseudoTypeInfo mercury__varset__varset__field_types_varset_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__varset__term__pti_var_supply_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__plain_builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__varset__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1
};

#line 614 "varset.c"
static const MR_ConstString mercury__varset__varset__field_names_varset_1_0[3] = {
  (MR_String) "var_supply",
  (MR_String) "var_names",
  (MR_String) "var_values"
};

#line 621 "varset.c"
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

#line 636 "varset.c"
static const MR_DuFunctorDescPtr mercury__varset__varset__du_stag_ordered_varset_1_0[1] = {
  &mercury__varset__varset__du_functor_desc_varset_1_0
};

#line 641 "varset.c"
static const MR_DuPtagLayout mercury__varset__varset__du_ptag_ordered_varset_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__varset__varset__du_stag_ordered_varset_1_0
  }
};

#line 650 "varset.c"
static const MR_DuFunctorDescPtr mercury__varset__varset__du_name_ordered_varset_1[1] = {
  &mercury__varset__varset__du_functor_desc_varset_1_0
};

#line 655 "varset.c"
static const MR_Integer mercury__varset__varset__functor_number_map_varset_1[1] = {
  (MR_Integer) 0
};

#line 660 "varset.c"
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

#line 681 "varset.c"
static const MR_FA_TypeInfo_Struct1 mercury__varset__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 689 "varset.c"
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

#line 710 "varset.c"
static MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0_10001(
#line 713 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 715 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2,
#line 717 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3)
#line 719 "varset.c"
{
#line 721 "varset.c"
  {
#line 723 "varset.c"
    MR_bool mercury__varset__succeeded;

#line 726 "varset.c"
    {
#line 728 "varset.c"
      mercury__varset__succeeded = mercury__varset____Unify____varset_1_0(((MR_Word) mercury__varset__wrapper_arg_1), ((MR_Word) mercury__varset__wrapper_arg_2), ((MR_Word) mercury__varset__wrapper_arg_3));
    }
#line 731 "varset.c"
    return mercury__varset__succeeded;
#line 733 "varset.c"
  }
#line 735 "varset.c"
}

#line 738 "varset.c"
static void MR_CALL 
mercury__varset____Compare____varset_1_0_10001(
#line 741 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 743 "varset.c"
  MR_Box * mercury__varset__wrapper_arg_2,
#line 745 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3,
#line 747 "varset.c"
  MR_Box mercury__varset__wrapper_arg_4)
#line 749 "varset.c"
{
#line 751 "varset.c"
  {
#line 753 "varset.c"
    MR_Word mercury__varset__conv0_HeadVar__1_1;

#line 756 "varset.c"
    {
#line 758 "varset.c"
      mercury__varset____Compare____varset_1_0(((MR_Word) mercury__varset__wrapper_arg_1), &mercury__varset__conv0_HeadVar__1_1, ((MR_Word) mercury__varset__wrapper_arg_3), ((MR_Word) mercury__varset__wrapper_arg_4));
    }
#line 761 "varset.c"
    *mercury__varset__wrapper_arg_2 = ((MR_Box) (mercury__varset__conv0_HeadVar__1_1));
#line 763 "varset.c"
  }
#line 765 "varset.c"
}

#line 768 "varset.c"
static MR_bool MR_CALL 
mercury__varset____Unify____varset_0_0_10001(
#line 771 "varset.c"
  MR_Box mercury__varset__wrapper_arg_1,
#line 773 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2)
#line 775 "varset.c"
{
#line 777 "varset.c"
  {
#line 779 "varset.c"
    MR_bool mercury__varset__succeeded;

#line 782 "varset.c"
    {
#line 784 "varset.c"
      mercury__varset__succeeded = mercury__varset____Unify____varset_0_0(((MR_Word) mercury__varset__wrapper_arg_1), ((MR_Word) mercury__varset__wrapper_arg_2));
    }
#line 787 "varset.c"
    return mercury__varset__succeeded;
#line 789 "varset.c"
  }
#line 791 "varset.c"
}

#line 794 "varset.c"
static void MR_CALL 
mercury__varset____Compare____varset_0_0_10001(
#line 797 "varset.c"
  MR_Box * mercury__varset__wrapper_arg_1,
#line 799 "varset.c"
  MR_Box mercury__varset__wrapper_arg_2,
#line 801 "varset.c"
  MR_Box mercury__varset__wrapper_arg_3)
#line 803 "varset.c"
{
#line 805 "varset.c"
  {
#line 807 "varset.c"
    MR_Word mercury__varset__conv0_HeadVar__1_1;

#line 810 "varset.c"
    {
#line 812 "varset.c"
      mercury__varset____Compare____varset_0_0(&mercury__varset__conv0_HeadVar__1_1, ((MR_Word) mercury__varset__wrapper_arg_2), ((MR_Word) mercury__varset__wrapper_arg_3));
    }
#line 815 "varset.c"
    *mercury__varset__wrapper_arg_1 = ((MR_Box) (mercury__varset__conv0_HeadVar__1_1));
#line 817 "varset.c"
  }
#line 819 "varset.c"
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

#line 290 "varset.m"
void MR_CALL 
mercury__varset____Compare____varset_1_0(
#line 290 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_14,
#line 290 "varset.m"
  MR_Word * mercury__varset__HeadVar__1_1,
#line 290 "varset.m"
  MR_Word mercury__varset__HeadVar__2_2,
#line 290 "varset.m"
  MR_Word mercury__varset__HeadVar__3_3)
#line 290 "varset.m"
{
#line 290 "varset.m"
  {
#line 290 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 290 "varset.m"
    MR_Integer mercury__varset__CastX_12 = (MR_Integer) mercury__varset__HeadVar__2_2;
#line 290 "varset.m"
    MR_Integer mercury__varset__CastY_13 = (MR_Integer) mercury__varset__HeadVar__3_3;

#line 290 "varset.m"
    mercury__varset__succeeded = (mercury__varset__CastX_12 == mercury__varset__CastY_13);
#line 290 "varset.m"
    if (mercury__varset__succeeded)
#line 865 "varset.c"
      *mercury__varset__HeadVar__1_1 = (MR_Integer) 0;
#line 290 "varset.m"
    else
#line 290 "varset.m"
      {
#line 290 "varset.m"
        MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 0)));
#line 290 "varset.m"
        MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "varset.m"
        MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 2)));
#line 290 "varset.m"
        MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 0)));
#line 290 "varset.m"
        MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "varset.m"
        MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 2)));
#line 290 "varset.m"
        MR_Word mercury__varset__V_10_10;
#line 290 "varset.m"
        MR_Integer mercury__varset__V_28_28 = (MR_Integer) mercury__varset__V_4_4;
#line 290 "varset.m"
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
#line 912 "varset.c"
        mercury__varset__succeeded = (mercury__varset__V_10_10 == (MR_Integer) 0);
#line 290 "varset.m"
        mercury__varset__succeeded = !(mercury__varset__succeeded);
#line 290 "varset.m"
        if (mercury__varset__succeeded)
#line 290 "varset.m"
          *mercury__varset__HeadVar__1_1 = mercury__varset__V_10_10;
#line 290 "varset.m"
        else
#line 290 "varset.m"
          {
#line 290 "varset.m"
            MR_Word mercury__varset__V_11_11;
#line 290 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 290 "varset.m"
            MR_Word mercury__varset__TypeInfo_18_18;
#line 290 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 933 "varset.c"
            {
#line 935 "varset.c"
              mercury__varset__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 937 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_17_17));
#line 939 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 941 "varset.c"
            }
#line 290 "varset.m"
            {
#line 290 "varset.m"
              mercury__tree234____Compare____tree234_2_0(mercury__varset__TypeInfo_18_18, mercury__varset__TypeCtorInfo_19_19, &mercury__varset__V_11_11, (MR_Word) mercury__varset__V_5_5, (MR_Word) mercury__varset__V_8_8);
            }
#line 948 "varset.c"
            mercury__varset__succeeded = (mercury__varset__V_11_11 == (MR_Integer) 0);
#line 290 "varset.m"
            mercury__varset__succeeded = !(mercury__varset__succeeded);
#line 290 "varset.m"
            if (mercury__varset__succeeded)
#line 290 "varset.m"
              *mercury__varset__HeadVar__1_1 = mercury__varset__V_11_11;
#line 290 "varset.m"
            else
#line 290 "varset.m"
              {
#line 290 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 290 "varset.m"
                MR_Word mercury__varset__TypeInfo_23_23;
#line 290 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_24_24;
#line 290 "varset.m"
                MR_Word mercury__varset__TypeInfo_25_25;

#line 969 "varset.c"
                {
#line 971 "varset.c"
                  mercury__varset__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 973 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_23_23, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_22_22));
#line 975 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_23_23, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 977 "varset.c"
                }
#line 979 "varset.c"
                mercury__varset__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 981 "varset.c"
                {
#line 983 "varset.c"
                  mercury__varset__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 985 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_25_25, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_24_24));
#line 987 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_25_25, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 989 "varset.c"
                }
#line 290 "varset.m"
                {
#line 290 "varset.m"
                  mercury__tree234____Compare____tree234_2_0(mercury__varset__TypeInfo_23_23, mercury__varset__TypeInfo_25_25, mercury__varset__HeadVar__1_1, (MR_Word) mercury__varset__V_6_6, (MR_Word) mercury__varset__V_9_9);
#line 290 "varset.m"
                  return;
                }
#line 290 "varset.m"
              }
#line 290 "varset.m"
          }
#line 290 "varset.m"
      }
#line 290 "varset.m"
  }
#line 290 "varset.m"
}

#line 290 "varset.m"
MR_bool MR_CALL 
mercury__varset____Unify____varset_1_0(
#line 290 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_11,
#line 290 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 290 "varset.m"
  MR_Word mercury__varset__HeadVar__2_2)
#line 290 "varset.m"
{
#line 290 "varset.m"
  {
#line 290 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 290 "varset.m"
    MR_Integer mercury__varset__CastX_9 = (MR_Integer) mercury__varset__HeadVar__1_1;
#line 290 "varset.m"
    MR_Integer mercury__varset__CastY_10 = (MR_Integer) mercury__varset__HeadVar__2_2;

#line 290 "varset.m"
    mercury__varset__succeeded = (mercury__varset__CastX_9 == mercury__varset__CastY_10);
#line 290 "varset.m"
    if (mercury__varset__succeeded)
#line 290 "varset.m"
      mercury__varset__succeeded = MR_TRUE;
#line 290 "varset.m"
    else
#line 290 "varset.m"
      {
#line 290 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_14_14;
#line 290 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_16_16;
#line 290 "varset.m"
        MR_Word mercury__varset__TypeInfo_20_20;
#line 290 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_21_21;
#line 290 "varset.m"
        MR_Word mercury__varset__TypeInfo_22_22;
#line 290 "varset.m"
        MR_Word mercury__varset__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 290 "varset.m"
        MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "varset.m"
        MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));
#line 290 "varset.m"
        MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 0)));
#line 290 "varset.m"
        MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "varset.m"
        MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__2_2, (MR_Integer) 2)));
#line 290 "varset.m"
        MR_Integer mercury__varset__V_25_25 = (MR_Integer) mercury__varset__V_3_3;
#line 290 "varset.m"
        MR_Integer mercury__varset__V_26_26 = (MR_Integer) mercury__varset__V_6_6;

#line 1066 "varset.c"
        mercury__varset__succeeded = (mercury__varset__V_25_25 == mercury__varset__V_26_26);
#line 290 "varset.m"
        if (mercury__varset__succeeded)
#line 290 "varset.m"
          {
#line 1072 "varset.c"
            mercury__varset__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1074 "varset.c"
            mercury__varset__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1076 "varset.c"
            {
#line 1078 "varset.c"
              mercury__varset__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_14_14));
#line 1082 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
#line 1084 "varset.c"
            }
#line 1086 "varset.c"
            {
#line 1088 "varset.c"
              mercury__varset__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__varset__TypeInfo_20_20, mercury__varset__TypeCtorInfo_16_16, (MR_Word) mercury__varset__V_4_4, (MR_Word) mercury__varset__V_7_7);
            }
#line 290 "varset.m"
            if (mercury__varset__succeeded)
#line 290 "varset.m"
              {
#line 1095 "varset.c"
                mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1097 "varset.c"
                {
#line 1099 "varset.c"
                  mercury__varset__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1101 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_21_21));
#line 1103 "varset.c"
                  MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
#line 1105 "varset.c"
                }
#line 1107 "varset.c"
                {
#line 1109 "varset.c"
                  return mercury__varset__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__varset__TypeInfo_20_20, mercury__varset__TypeInfo_22_22, (MR_Word) mercury__varset__V_5_5, (MR_Word) mercury__varset__V_8_8);
                }
#line 290 "varset.m"
              }
#line 290 "varset.m"
          }
#line 290 "varset.m"
      }
#line 290 "varset.m"
    return mercury__varset__succeeded;
#line 290 "varset.m"
  }
#line 290 "varset.m"
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

#line 693 "varset.m"
void MR_CALL 
mercury__varset__copy_var_names_4_p_0(
#line 693 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_20,
#line 693 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 693 "varset.m"
  MR_Word mercury__varset__HeadVar__2_2,
#line 693 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_NewVarSet_0_3,
#line 693 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_NewVarSet_4)
#line 693 "varset.m"
{
#line 696 "varset.m"
  while (MR_TRUE)
#line 696 "varset.m"
    {
#line 696 "varset.m"
      /* tailcall optimized into a loop */
#line 696 "varset.m"
      {
#line 696 "varset.m"
        MR_bool mercury__varset__succeeded;

#line 696 "varset.m"
        if ((mercury__varset__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "varset.m"
          *mercury__varset__STATE_VARIABLE_NewVarSet_4 = mercury__varset__STATE_VARIABLE_NewVarSet_0_3;
#line 696 "varset.m"
        else
#line 697 "varset.m"
          {
#line 697 "varset.m"
            MR_Word mercury__varset__OldVar_9;
#line 697 "varset.m"
            MR_String mercury__varset__Name_10;
#line 697 "varset.m"
            MR_Word mercury__varset__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 697 "varset.m"
            MR_Word mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 697 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_NewVarSet_18_18;
#line 700 "varset.m"
            MR_Word mercury__varset__NewVar_14;
#line 698 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_21_21;
#line 698 "varset.m"
            MR_Word mercury__varset__TypeInfo_22_22;
#line 39 "map.opt"
            MR_Box mercury__varset__conv0_NewVar_14;

#line 697 "varset.m"
            mercury__varset__OldVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__V_17_17, (MR_Integer) 0)));
#line 697 "varset.m"
            mercury__varset__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__varset__V_17_17, (MR_Integer) 1)));
#line 1248 "varset.c"
            mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1250 "varset.c"
            {
#line 1252 "varset.c"
              mercury__varset__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1254 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_21_21));
#line 1256 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_20));
#line 1258 "varset.c"
            }
#line 39 "map.opt"
            {
#line 39 "map.opt"
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_20, mercury__varset__TypeInfo_22_22, mercury__varset__TypeInfo_22_22, (MR_Word) mercury__varset__HeadVar__2_2, mercury__varset__OldVar_9, &mercury__varset__conv0_NewVar_14);
            }
#line 39 "map.opt"
            if (mercury__varset__succeeded)
#line 39 "map.opt"
              {
#line 39 "map.opt"
                mercury__varset__NewVar_14 = ((MR_Word) mercury__varset__conv0_NewVar_14);
#line 39 "map.opt"
                mercury__varset__succeeded = MR_TRUE;
#line 39 "map.opt"
              }
#line 700 "varset.m"
            if (mercury__varset__succeeded)
#line 699 "varset.m"
              {
#line 699 "varset.m"
                mercury__varset__name_var_4_p_0(mercury__varset__TypeInfo_for_T_20, mercury__varset__NewVar_14, mercury__varset__Name_10, mercury__varset__STATE_VARIABLE_NewVarSet_0_3, &mercury__varset__STATE_VARIABLE_NewVarSet_18_18);
              }
#line 700 "varset.m"
            else
#line 699 "varset.m"
              mercury__varset__STATE_VARIABLE_NewVarSet_18_18 = mercury__varset__STATE_VARIABLE_NewVarSet_0_3;
#line 703 "varset.m"
            /* direct tailcall eliminated */
#line 703 "varset.m"
            {
#line 703 "varset.m"
              MR_Word mercury__varset__HeadVar__1__tmp_copy_1 = mercury__varset__Rest_11;
#line 703 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_NewVarSet_0__tmp_copy_3 = mercury__varset__STATE_VARIABLE_NewVarSet_18_18;

#line 703 "varset.m"
              mercury__varset__STATE_VARIABLE_NewVarSet_0_3 = mercury__varset__STATE_VARIABLE_NewVarSet_0__tmp_copy_3;
#line 703 "varset.m"
              mercury__varset__HeadVar__1_1 = mercury__varset__HeadVar__1__tmp_copy_1;
#line 703 "varset.m"
            }
#line 703 "varset.m"
            continue;
#line 697 "varset.m"
          }
#line 696 "varset.m"
      }
#line 696 "varset.m"
      break;
#line 696 "varset.m"
    }
#line 693 "varset.m"
}

#line 656 "varset.m"
static void MR_CALL 
mercury__varset__append_suffix_until_unique_4_p_0(
#line 656 "varset.m"
  MR_String mercury__varset__Trial0_5,
#line 656 "varset.m"
  MR_String mercury__varset__Suffix_6,
#line 656 "varset.m"
  MR_Word mercury__varset__UsedNames_7,
#line 656 "varset.m"
  MR_String * mercury__varset__Final_8)
#line 656 "varset.m"
{
#line 663 "varset.m"
  while (MR_TRUE)
#line 663 "varset.m"
    {
#line 663 "varset.m"
      /* tailcall optimized into a loop */
#line 663 "varset.m"
      {
#line 663 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 660 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 660 "varset.m"
        {
#line 660 "varset.m"
          mercury__varset__succeeded = mercury__set__member_2_p_0(mercury__varset__TypeCtorInfo_10_10, ((MR_Box) (mercury__varset__Trial0_5)), mercury__varset__UsedNames_7);
        }
#line 663 "varset.m"
        if (mercury__varset__succeeded)
#line 661 "varset.m"
          {
#line 661 "varset.m"
            MR_String mercury__varset__Trial1_9;

#line 661 "varset.m"
            {
#line 661 "varset.m"
              mercury__string__append_3_p_2(mercury__varset__Trial0_5, mercury__varset__Suffix_6, &mercury__varset__Trial1_9);
            }
#line 662 "varset.m"
            /* direct tailcall eliminated */
#line 662 "varset.m"
            {
#line 662 "varset.m"
              MR_String mercury__varset__Trial0__tmp_copy_5 = mercury__varset__Trial1_9;

#line 662 "varset.m"
              mercury__varset__Trial0_5 = mercury__varset__Trial0__tmp_copy_5;
#line 662 "varset.m"
            }
#line 662 "varset.m"
            continue;
#line 661 "varset.m"
          }
#line 663 "varset.m"
        else
#line 664 "varset.m"
          *mercury__varset__Final_8 = mercury__varset__Trial0_5;
#line 663 "varset.m"
      }
#line 663 "varset.m"
      break;
#line 663 "varset.m"
    }
#line 656 "varset.m"
}

#line 629 "varset.m"
void MR_CALL 
mercury__varset__ensure_unique_names_2_6_p_0(
#line 629 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_35,
#line 629 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 629 "varset.m"
  MR_String mercury__varset__Suffix_2,
#line 629 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_UsedNames_0_3,
#line 629 "varset.m"
  MR_Word mercury__varset__OldVarNames_4,
#line 629 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarNames_0_5,
#line 629 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarNames_6)
#line 629 "varset.m"
{
#line 633 "varset.m"
  while (MR_TRUE)
#line 633 "varset.m"
    {
#line 633 "varset.m"
      /* tailcall optimized into a loop */
#line 633 "varset.m"
      {
#line 633 "varset.m"
        MR_bool mercury__varset__succeeded;

#line 633 "varset.m"
        if ((mercury__varset__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 633 "varset.m"
          *mercury__varset__STATE_VARIABLE_VarNames_6 = mercury__varset__STATE_VARIABLE_VarNames_0_5;
#line 633 "varset.m"
        else
#line 635 "varset.m"
          {
#line 635 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_40_40;
#line 635 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_41_41;
#line 635 "varset.m"
            MR_Word mercury__varset__TypeInfo_42_42;
#line 635 "varset.m"
            MR_Word mercury__varset__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 635 "varset.m"
            MR_Word mercury__varset__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 635 "varset.m"
            MR_String mercury__varset__TrialName_23;
#line 635 "varset.m"
            MR_String mercury__varset__FinalName_24;
#line 635 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_UsedNames_30_30;
#line 635 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_VarNames_31_31;
#line 635 "varset.m"
            MR_Word mercury__varset__List0_5_59;
#line 635 "varset.m"
            MR_Word mercury__varset__List_6_60;
#line 645 "varset.m"
            MR_String mercury__varset__OldName_19;
#line 636 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 636 "varset.m"
            MR_Word mercury__varset__TypeInfo_37_37;
#line 636 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 39 "map.opt"
            MR_Box mercury__varset__conv0_OldName_19;

#line 1456 "varset.c"
            {
#line 1458 "varset.c"
              mercury__varset__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1460 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_37_37, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_36_36));
#line 1462 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_37_37, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_35));
#line 1464 "varset.c"
            }
#line 39 "map.opt"
            {
#line 39 "map.opt"
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_35, mercury__varset__TypeInfo_37_37, mercury__varset__TypeCtorInfo_38_38, mercury__varset__OldVarNames_4, mercury__varset__Var_13, &mercury__varset__conv0_OldName_19);
            }
#line 39 "map.opt"
            if (mercury__varset__succeeded)
#line 39 "map.opt"
              {
#line 39 "map.opt"
                mercury__varset__OldName_19 = ((MR_String) mercury__varset__conv0_OldName_19);
#line 39 "map.opt"
                mercury__varset__succeeded = MR_TRUE;
#line 39 "map.opt"
              }
#line 645 "varset.m"
            if (mercury__varset__succeeded)
#line 642 "varset.m"
              {
#line 637 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 637 "varset.m"
                {
#line 637 "varset.m"
                  mercury__varset__succeeded = mercury__set__member_2_p_0(mercury__varset__TypeCtorInfo_39_39, ((MR_Box) (mercury__varset__OldName_19)), mercury__varset__STATE_VARIABLE_UsedNames_0_3);
                }
#line 642 "varset.m"
                if (mercury__varset__succeeded)
#line 638 "varset.m"
                  {
#line 638 "varset.m"
                    MR_Integer mercury__varset__VarNum_20 = (MR_Integer) mercury__varset__Var_13;
#line 638 "varset.m"
                    MR_String mercury__varset__NumStr_21;
#line 638 "varset.m"
                    MR_String mercury__varset__NumSuffix_22;

#line 292 "string.opt"
                    {
#line 292 "string.opt"
                      mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_20, (MR_Integer) 10, &mercury__varset__NumStr_21);
                    }
#line 640 "varset.m"
                    {
#line 640 "varset.m"
                      mercury__string__append_3_p_2((MR_String) "_", mercury__varset__NumStr_21, &mercury__varset__NumSuffix_22);
                    }
#line 641 "varset.m"
                    {
#line 641 "varset.m"
                      mercury__string__append_3_p_2(mercury__varset__OldName_19, mercury__varset__NumSuffix_22, &mercury__varset__TrialName_23);
                    }
#line 638 "varset.m"
                  }
#line 642 "varset.m"
                else
#line 643 "varset.m"
                  mercury__varset__TrialName_23 = mercury__varset__OldName_19;
#line 642 "varset.m"
              }
#line 645 "varset.m"
            else
#line 646 "varset.m"
              {
#line 646 "varset.m"
                MR_Integer mercury__varset__VarNum_33 = (MR_Integer) mercury__varset__Var_13;
#line 646 "varset.m"
                MR_String mercury__varset__NumStr_34;

#line 292 "string.opt"
                {
#line 292 "string.opt"
                  mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_33, (MR_Integer) 10, &mercury__varset__NumStr_34);
                }
#line 648 "varset.m"
                {
#line 648 "varset.m"
                  mercury__string__append_3_p_2((MR_String) "Var_", mercury__varset__NumStr_34, &mercury__varset__TrialName_23);
                }
#line 646 "varset.m"
              }
#line 650 "varset.m"
            {
#line 650 "varset.m"
              mercury__varset__append_suffix_until_unique_4_p_0(mercury__varset__TrialName_23, mercury__varset__Suffix_2, mercury__varset__STATE_VARIABLE_UsedNames_0_3, &mercury__varset__FinalName_24);
            }
#line 1553 "varset.c"
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
#line 1564 "varset.c"
            mercury__varset__TypeCtorInfo_41_41 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1566 "varset.c"
            {
#line 1568 "varset.c"
              mercury__varset__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1570 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_41_41));
#line 1572 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_35));
#line 1574 "varset.c"
            }
#line 652 "varset.m"
            {
#line 652 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_35, mercury__varset__TypeInfo_42_42, mercury__varset__TypeCtorInfo_40_40, mercury__varset__Var_13, ((MR_Box) (mercury__varset__FinalName_24)), mercury__varset__STATE_VARIABLE_VarNames_0_5, &mercury__varset__STATE_VARIABLE_VarNames_31_31);
            }
#line 653 "varset.m"
            /* direct tailcall eliminated */
#line 653 "varset.m"
            {
#line 653 "varset.m"
              MR_Word mercury__varset__HeadVar__1__tmp_copy_1 = mercury__varset__Vars_14;
#line 653 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_UsedNames_0__tmp_copy_3 = mercury__varset__STATE_VARIABLE_UsedNames_30_30;
#line 653 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_VarNames_0__tmp_copy_5 = mercury__varset__STATE_VARIABLE_VarNames_31_31;

#line 653 "varset.m"
              mercury__varset__STATE_VARIABLE_VarNames_0_5 = mercury__varset__STATE_VARIABLE_VarNames_0__tmp_copy_5;
#line 653 "varset.m"
              mercury__varset__STATE_VARIABLE_UsedNames_0_3 = mercury__varset__STATE_VARIABLE_UsedNames_0__tmp_copy_3;
#line 653 "varset.m"
              mercury__varset__HeadVar__1_1 = mercury__varset__HeadVar__1__tmp_copy_1;
#line 653 "varset.m"
            }
#line 653 "varset.m"
            continue;
#line 635 "varset.m"
          }
#line 633 "varset.m"
      }
#line 633 "varset.m"
      break;
#line 633 "varset.m"
    }
#line 629 "varset.m"
}

#line 591 "varset.m"
void MR_CALL 
mercury__varset__merge_subst_without_names_2_6_p_0(
#line 591 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_26,
#line 591 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_14,
#line 591 "varset.m"
  MR_Word mercury__varset__MaxSupplyB_8,
#line 591 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_15,
#line 591 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_16,
#line 591 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Subst_0_17,
#line 591 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Subst_18)
#line 591 "varset.m"
{
#line 598 "varset.m"
  while (MR_TRUE)
#line 598 "varset.m"
    {
#line 598 "varset.m"
      /* tailcall optimized into a loop */
#line 598 "varset.m"
      {
#line 598 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 596 "varset.m"
        MR_Integer mercury__varset__V_33_33 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_14;
#line 596 "varset.m"
        MR_Integer mercury__varset__V_34_34 = (MR_Integer) mercury__varset__MaxSupplyB_8;

#line 596 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_33_33 == mercury__varset__V_34_34);
#line 598 "varset.m"
        if (mercury__varset__succeeded)
#line 597 "varset.m"
          {
#line 597 "varset.m"
            *mercury__varset__STATE_VARIABLE_Subst_18 = mercury__varset__STATE_VARIABLE_Subst_0_17;
#line 597 "varset.m"
            *mercury__varset__STATE_VARIABLE_Supply_16 = mercury__varset__STATE_VARIABLE_Supply_0_15;
#line 597 "varset.m"
          }
#line 598 "varset.m"
        else
#line 599 "varset.m"
          {
#line 599 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_27_27;
#line 599 "varset.m"
            MR_Word mercury__varset__TypeInfo_28_28;
#line 599 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_29_29;
#line 599 "varset.m"
            MR_Word mercury__varset__TypeInfo_30_30;
#line 599 "varset.m"
            MR_Word mercury__varset__Var_11;
#line 599 "varset.m"
            MR_Word mercury__varset__VarB_12;
#line 599 "varset.m"
            MR_Word mercury__varset__Replacement_13;
#line 599 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Supply_19_19;
#line 599 "varset.m"
            MR_Word mercury__varset__V_21_21;
#line 599 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Subst_22_22;
#line 599 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_20_25;
#line 599 "varset.m"
            MR_Integer mercury__varset__V_4_35;
#line 599 "varset.m"
            MR_Integer mercury__varset__V0_5_36 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_15;
#line 599 "varset.m"
            MR_Integer mercury__varset__V_4_38;
#line 599 "varset.m"
            MR_Integer mercury__varset__V0_5_39;
#line 602 "varset.m"
            MR_Word mercury__varset__conv0_STATE_VARIABLE_Subst_22_22;

#line 102 "term.opt"
            mercury__varset__V_4_35 = (mercury__varset__V0_5_36 + (MR_Integer) 1);
#line 101 "term.opt"
            mercury__varset__Var_11 = (MR_Word) mercury__varset__V_4_35;
#line 101 "term.opt"
            mercury__varset__STATE_VARIABLE_Supply_19_19 = (MR_Word) mercury__varset__V_4_35;
#line 101 "term.opt"
            mercury__varset__V0_5_39 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_14;
#line 102 "term.opt"
            mercury__varset__V_4_38 = (mercury__varset__V0_5_39 + (MR_Integer) 1);
#line 101 "term.opt"
            mercury__varset__VarB_12 = (MR_Word) mercury__varset__V_4_38;
#line 101 "term.opt"
            mercury__varset__STATE_VARIABLE_SupplyB_20_25 = (MR_Word) mercury__varset__V_4_38;
#line 116 "term.opt"
            mercury__varset__V_21_21 = (MR_Word) &mercury__varset_scalar_common_1[1];
#line 601 "varset.m"
            {
#line 601 "varset.m"
              mercury__varset__Replacement_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 601 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_13, 0) = ((MR_Box) (mercury__varset__Var_11));
#line 601 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_13, 1) = ((MR_Box) (mercury__varset__V_21_21));
#line 601 "varset.m"
            }
#line 1722 "varset.c"
            mercury__varset__TypeCtorInfo_27_27 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1724 "varset.c"
            {
#line 1726 "varset.c"
              mercury__varset__TypeInfo_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1728 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_28_28, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_27_27));
#line 1730 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_28_28, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_26));
#line 1732 "varset.c"
            }
#line 1734 "varset.c"
            mercury__varset__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1736 "varset.c"
            {
#line 1738 "varset.c"
              mercury__varset__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1740 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_30_30, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_29_29));
#line 1742 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_30_30, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_26));
#line 1744 "varset.c"
            }
#line 602 "varset.m"
            {
#line 602 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_26, mercury__varset__TypeInfo_28_28, mercury__varset__TypeInfo_30_30, mercury__varset__VarB_12, ((MR_Box) (mercury__varset__Replacement_13)), (MR_Word) mercury__varset__STATE_VARIABLE_Subst_0_17, &mercury__varset__conv0_STATE_VARIABLE_Subst_22_22);
            }
#line 602 "varset.m"
            mercury__varset__STATE_VARIABLE_Subst_22_22 = (MR_Word) mercury__varset__conv0_STATE_VARIABLE_Subst_22_22;
#line 603 "varset.m"
            /* direct tailcall eliminated */
#line 603 "varset.m"
            {
#line 603 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_14 = mercury__varset__STATE_VARIABLE_SupplyB_20_25;
#line 603 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_15 = mercury__varset__STATE_VARIABLE_Supply_19_19;
#line 603 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_17 = mercury__varset__STATE_VARIABLE_Subst_22_22;

#line 603 "varset.m"
              mercury__varset__STATE_VARIABLE_Subst_0_17 = mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_17;
#line 603 "varset.m"
              mercury__varset__STATE_VARIABLE_Supply_0_15 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_15;
#line 603 "varset.m"
              mercury__varset__STATE_VARIABLE_SupplyB_0_14 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_14;
#line 603 "varset.m"
            }
#line 603 "varset.m"
            continue;
#line 599 "varset.m"
          }
#line 598 "varset.m"
      }
#line 598 "varset.m"
      break;
#line 598 "varset.m"
    }
#line 591 "varset.m"
}

#line 558 "varset.m"
void MR_CALL 
mercury__varset__merge_subst_2_9_p_0(
#line 558 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_36,
#line 558 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_20,
#line 558 "varset.m"
  MR_Word mercury__varset__MaxSupplyB_11,
#line 558 "varset.m"
  MR_Word mercury__varset__NamesB_12,
#line 558 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_21,
#line 558 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_22,
#line 558 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Names_0_23,
#line 558 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Names_24,
#line 558 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Subst_0_25,
#line 558 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Subst_26)
#line 558 "varset.m"
{
#line 568 "varset.m"
  while (MR_TRUE)
#line 568 "varset.m"
    {
#line 568 "varset.m"
      /* tailcall optimized into a loop */
#line 568 "varset.m"
      {
#line 568 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 566 "varset.m"
        MR_Integer mercury__varset__V_49_49 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_20;
#line 566 "varset.m"
        MR_Integer mercury__varset__V_50_50 = (MR_Integer) mercury__varset__MaxSupplyB_11;

#line 566 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_49_49 == mercury__varset__V_50_50);
#line 568 "varset.m"
        if (mercury__varset__succeeded)
#line 567 "varset.m"
          {
#line 567 "varset.m"
            *mercury__varset__STATE_VARIABLE_Subst_26 = mercury__varset__STATE_VARIABLE_Subst_0_25;
#line 567 "varset.m"
            *mercury__varset__STATE_VARIABLE_Names_24 = mercury__varset__STATE_VARIABLE_Names_0_23;
#line 567 "varset.m"
            *mercury__varset__STATE_VARIABLE_Supply_22 = mercury__varset__STATE_VARIABLE_Supply_0_21;
#line 567 "varset.m"
          }
#line 568 "varset.m"
        else
#line 569 "varset.m"
          {
#line 569 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_43_43;
#line 569 "varset.m"
            MR_Word mercury__varset__TypeInfo_44_44;
#line 569 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_45_45;
#line 569 "varset.m"
            MR_Word mercury__varset__TypeInfo_46_46;
#line 569 "varset.m"
            MR_Word mercury__varset__Var_16;
#line 569 "varset.m"
            MR_Word mercury__varset__VarB_17;
#line 569 "varset.m"
            MR_Word mercury__varset__Replacement_19;
#line 569 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Supply_27_27;
#line 569 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Names_29_29;
#line 569 "varset.m"
            MR_Word mercury__varset__V_30_30;
#line 569 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Subst_31_31;
#line 569 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_28_35;
#line 569 "varset.m"
            MR_Integer mercury__varset__V_4_51;
#line 569 "varset.m"
            MR_Integer mercury__varset__V0_5_52 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_21;
#line 569 "varset.m"
            MR_Integer mercury__varset__V_4_54;
#line 569 "varset.m"
            MR_Integer mercury__varset__V0_5_55;
#line 573 "varset.m"
            MR_Word mercury__varset__TypeInfo_38_38;
#line 573 "varset.m"
            MR_String mercury__varset__NameB_18;
#line 571 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_37_37;
#line 571 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_39_39;
#line 39 "map.opt"
            MR_Box mercury__varset__conv0_NameB_18;
#line 577 "varset.m"
            MR_Word mercury__varset__conv1_STATE_VARIABLE_Subst_31_31;

#line 102 "term.opt"
            mercury__varset__V_4_51 = (mercury__varset__V0_5_52 + (MR_Integer) 1);
#line 101 "term.opt"
            mercury__varset__Var_16 = (MR_Word) mercury__varset__V_4_51;
#line 101 "term.opt"
            mercury__varset__STATE_VARIABLE_Supply_27_27 = (MR_Word) mercury__varset__V_4_51;
#line 101 "term.opt"
            mercury__varset__V0_5_55 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_20;
#line 102 "term.opt"
            mercury__varset__V_4_54 = (mercury__varset__V0_5_55 + (MR_Integer) 1);
#line 101 "term.opt"
            mercury__varset__VarB_17 = (MR_Word) mercury__varset__V_4_54;
#line 101 "term.opt"
            mercury__varset__STATE_VARIABLE_SupplyB_28_35 = (MR_Word) mercury__varset__V_4_54;
#line 1902 "varset.c"
            mercury__varset__TypeCtorInfo_37_37 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1904 "varset.c"
            mercury__varset__TypeCtorInfo_39_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1906 "varset.c"
            {
#line 1908 "varset.c"
              mercury__varset__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1910 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_38_38, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_37_37));
#line 1912 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_38_38, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_36));
#line 1914 "varset.c"
            }
#line 39 "map.opt"
            {
#line 39 "map.opt"
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_36, mercury__varset__TypeInfo_38_38, mercury__varset__TypeCtorInfo_39_39, mercury__varset__NamesB_12, mercury__varset__VarB_17, &mercury__varset__conv0_NameB_18);
            }
#line 39 "map.opt"
            if (mercury__varset__succeeded)
#line 39 "map.opt"
              {
#line 39 "map.opt"
                mercury__varset__NameB_18 = ((MR_String) mercury__varset__conv0_NameB_18);
#line 39 "map.opt"
                mercury__varset__succeeded = MR_TRUE;
#line 39 "map.opt"
              }
#line 573 "varset.m"
            if (mercury__varset__succeeded)
#line 572 "varset.m"
              {
#line 572 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 572 "varset.m"
                {
#line 572 "varset.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_36, mercury__varset__TypeInfo_38_38, mercury__varset__TypeCtorInfo_42_42, mercury__varset__Var_16, ((MR_Box) (mercury__varset__NameB_18)), mercury__varset__STATE_VARIABLE_Names_0_23, &mercury__varset__STATE_VARIABLE_Names_29_29);
                }
#line 572 "varset.m"
              }
#line 573 "varset.m"
            else
#line 572 "varset.m"
              mercury__varset__STATE_VARIABLE_Names_29_29 = mercury__varset__STATE_VARIABLE_Names_0_23;
#line 116 "term.opt"
            mercury__varset__V_30_30 = (MR_Word) &mercury__varset_scalar_common_1[1];
#line 576 "varset.m"
            {
#line 576 "varset.m"
              mercury__varset__Replacement_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_19, 0) = ((MR_Box) (mercury__varset__Var_16));
#line 576 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__Replacement_19, 1) = ((MR_Box) (mercury__varset__V_30_30));
#line 576 "varset.m"
            }
#line 1961 "varset.c"
            mercury__varset__TypeCtorInfo_43_43 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 1963 "varset.c"
            {
#line 1965 "varset.c"
              mercury__varset__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1967 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_44_44, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_43_43));
#line 1969 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_44_44, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_36));
#line 1971 "varset.c"
            }
#line 1973 "varset.c"
            mercury__varset__TypeCtorInfo_45_45 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 1975 "varset.c"
            {
#line 1977 "varset.c"
              mercury__varset__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1979 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_46_46, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_45_45));
#line 1981 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_46_46, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_36));
#line 1983 "varset.c"
            }
#line 577 "varset.m"
            {
#line 577 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_36, mercury__varset__TypeInfo_44_44, mercury__varset__TypeInfo_46_46, mercury__varset__VarB_17, ((MR_Box) (mercury__varset__Replacement_19)), (MR_Word) mercury__varset__STATE_VARIABLE_Subst_0_25, &mercury__varset__conv1_STATE_VARIABLE_Subst_31_31);
            }
#line 577 "varset.m"
            mercury__varset__STATE_VARIABLE_Subst_31_31 = (MR_Word) mercury__varset__conv1_STATE_VARIABLE_Subst_31_31;
#line 578 "varset.m"
            /* direct tailcall eliminated */
#line 578 "varset.m"
            {
#line 578 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_20 = mercury__varset__STATE_VARIABLE_SupplyB_28_35;
#line 578 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_21 = mercury__varset__STATE_VARIABLE_Supply_27_27;
#line 578 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_23 = mercury__varset__STATE_VARIABLE_Names_29_29;
#line 578 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_25 = mercury__varset__STATE_VARIABLE_Subst_31_31;

#line 578 "varset.m"
              mercury__varset__STATE_VARIABLE_Subst_0_25 = mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_25;
#line 578 "varset.m"
              mercury__varset__STATE_VARIABLE_Names_0_23 = mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_23;
#line 578 "varset.m"
              mercury__varset__STATE_VARIABLE_Supply_0_21 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_21;
#line 578 "varset.m"
              mercury__varset__STATE_VARIABLE_SupplyB_0_20 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_20;
#line 578 "varset.m"
            }
#line 578 "varset.m"
            continue;
#line 569 "varset.m"
          }
#line 568 "varset.m"
      }
#line 568 "varset.m"
      break;
#line 568 "varset.m"
    }
#line 558 "varset.m"
}

#line 529 "varset.m"
void MR_CALL 
mercury__varset__merge_renaming_without_names_2_6_p_0(
#line 529 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_24,
#line 529 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_13,
#line 529 "varset.m"
  MR_Word mercury__varset__MaxSupplyB_8,
#line 529 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_14,
#line 529 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_15,
#line 529 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Subst_0_16,
#line 529 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Subst_17)
#line 529 "varset.m"
{
#line 536 "varset.m"
  while (MR_TRUE)
#line 536 "varset.m"
    {
#line 536 "varset.m"
      /* tailcall optimized into a loop */
#line 536 "varset.m"
      {
#line 536 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 534 "varset.m"
        MR_Integer mercury__varset__V_29_29 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_13;
#line 534 "varset.m"
        MR_Integer mercury__varset__V_30_30 = (MR_Integer) mercury__varset__MaxSupplyB_8;

#line 534 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_29_29 == mercury__varset__V_30_30);
#line 536 "varset.m"
        if (mercury__varset__succeeded)
#line 535 "varset.m"
          {
#line 535 "varset.m"
            *mercury__varset__STATE_VARIABLE_Subst_17 = mercury__varset__STATE_VARIABLE_Subst_0_16;
#line 535 "varset.m"
            *mercury__varset__STATE_VARIABLE_Supply_15 = mercury__varset__STATE_VARIABLE_Supply_0_14;
#line 535 "varset.m"
          }
#line 536 "varset.m"
        else
#line 537 "varset.m"
          {
#line 537 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_25_25;
#line 537 "varset.m"
            MR_Word mercury__varset__TypeInfo_26_26;
#line 537 "varset.m"
            MR_Word mercury__varset__Var_11;
#line 537 "varset.m"
            MR_Word mercury__varset__VarB_12;
#line 537 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Supply_18_18;
#line 537 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Subst_20_20;
#line 537 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_19_23;
#line 537 "varset.m"
            MR_Integer mercury__varset__V_4_31;
#line 537 "varset.m"
            MR_Integer mercury__varset__V0_5_32 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_14;
#line 537 "varset.m"
            MR_Integer mercury__varset__V_4_34;
#line 537 "varset.m"
            MR_Integer mercury__varset__V0_5_35;
#line 539 "varset.m"
            MR_Word mercury__varset__conv0_STATE_VARIABLE_Subst_20_20;

#line 102 "term.opt"
            mercury__varset__V_4_31 = (mercury__varset__V0_5_32 + (MR_Integer) 1);
#line 101 "term.opt"
            mercury__varset__Var_11 = (MR_Word) mercury__varset__V_4_31;
#line 101 "term.opt"
            mercury__varset__STATE_VARIABLE_Supply_18_18 = (MR_Word) mercury__varset__V_4_31;
#line 101 "term.opt"
            mercury__varset__V0_5_35 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_13;
#line 102 "term.opt"
            mercury__varset__V_4_34 = (mercury__varset__V0_5_35 + (MR_Integer) 1);
#line 101 "term.opt"
            mercury__varset__VarB_12 = (MR_Word) mercury__varset__V_4_34;
#line 101 "term.opt"
            mercury__varset__STATE_VARIABLE_SupplyB_19_23 = (MR_Word) mercury__varset__V_4_34;
#line 2117 "varset.c"
            mercury__varset__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2119 "varset.c"
            {
#line 2121 "varset.c"
              mercury__varset__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2123 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_25_25));
#line 2125 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_24));
#line 2127 "varset.c"
            }
#line 539 "varset.m"
            {
#line 539 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_24, mercury__varset__TypeInfo_26_26, mercury__varset__TypeInfo_26_26, mercury__varset__VarB_12, ((MR_Box) (mercury__varset__Var_11)), (MR_Word) mercury__varset__STATE_VARIABLE_Subst_0_16, &mercury__varset__conv0_STATE_VARIABLE_Subst_20_20);
            }
#line 539 "varset.m"
            mercury__varset__STATE_VARIABLE_Subst_20_20 = (MR_Word) mercury__varset__conv0_STATE_VARIABLE_Subst_20_20;
#line 540 "varset.m"
            /* direct tailcall eliminated */
#line 540 "varset.m"
            {
#line 540 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_13 = mercury__varset__STATE_VARIABLE_SupplyB_19_23;
#line 540 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_14 = mercury__varset__STATE_VARIABLE_Supply_18_18;
#line 540 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_16 = mercury__varset__STATE_VARIABLE_Subst_20_20;

#line 540 "varset.m"
              mercury__varset__STATE_VARIABLE_Subst_0_16 = mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_16;
#line 540 "varset.m"
              mercury__varset__STATE_VARIABLE_Supply_0_14 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_14;
#line 540 "varset.m"
              mercury__varset__STATE_VARIABLE_SupplyB_0_13 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_13;
#line 540 "varset.m"
            }
#line 540 "varset.m"
            continue;
#line 537 "varset.m"
          }
#line 536 "varset.m"
      }
#line 536 "varset.m"
      break;
#line 536 "varset.m"
    }
#line 529 "varset.m"
}

#line 497 "varset.m"
void MR_CALL 
mercury__varset__merge_renaming_2_9_p_0(
#line 497 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_34,
#line 497 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0_19,
#line 497 "varset.m"
  MR_Word mercury__varset__MaxSupplyB_11,
#line 497 "varset.m"
  MR_Word mercury__varset__NamesB_12,
#line 497 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Supply_0_20,
#line 497 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Supply_21,
#line 497 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Names_0_22,
#line 497 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Names_23,
#line 497 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_Subst_0_24,
#line 497 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_Subst_25)
#line 497 "varset.m"
{
#line 507 "varset.m"
  while (MR_TRUE)
#line 507 "varset.m"
    {
#line 507 "varset.m"
      /* tailcall optimized into a loop */
#line 507 "varset.m"
      {
#line 507 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 505 "varset.m"
        MR_Integer mercury__varset__V_45_45 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_19;
#line 505 "varset.m"
        MR_Integer mercury__varset__V_46_46 = (MR_Integer) mercury__varset__MaxSupplyB_11;

#line 505 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_45_45 == mercury__varset__V_46_46);
#line 507 "varset.m"
        if (mercury__varset__succeeded)
#line 506 "varset.m"
          {
#line 506 "varset.m"
            *mercury__varset__STATE_VARIABLE_Subst_25 = mercury__varset__STATE_VARIABLE_Subst_0_24;
#line 506 "varset.m"
            *mercury__varset__STATE_VARIABLE_Names_23 = mercury__varset__STATE_VARIABLE_Names_0_22;
#line 506 "varset.m"
            *mercury__varset__STATE_VARIABLE_Supply_21 = mercury__varset__STATE_VARIABLE_Supply_0_20;
#line 506 "varset.m"
          }
#line 507 "varset.m"
        else
#line 508 "varset.m"
          {
#line 508 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_41_41;
#line 508 "varset.m"
            MR_Word mercury__varset__TypeInfo_42_42;
#line 508 "varset.m"
            MR_Word mercury__varset__Var_16;
#line 508 "varset.m"
            MR_Word mercury__varset__VarB_17;
#line 508 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Supply_26_26;
#line 508 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Names_28_28;
#line 508 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_Subst_29_29;
#line 508 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_SupplyB_27_33;
#line 508 "varset.m"
            MR_Integer mercury__varset__V_4_47;
#line 508 "varset.m"
            MR_Integer mercury__varset__V0_5_48 = (MR_Integer) mercury__varset__STATE_VARIABLE_Supply_0_20;
#line 508 "varset.m"
            MR_Integer mercury__varset__V_4_50;
#line 508 "varset.m"
            MR_Integer mercury__varset__V0_5_51;
#line 512 "varset.m"
            MR_Word mercury__varset__TypeInfo_36_36;
#line 512 "varset.m"
            MR_String mercury__varset__NameB_18;
#line 510 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_35_35;
#line 510 "varset.m"
            MR_Word mercury__varset__TypeCtorInfo_37_37;
#line 39 "map.opt"
            MR_Box mercury__varset__conv0_NameB_18;
#line 515 "varset.m"
            MR_Word mercury__varset__conv1_STATE_VARIABLE_Subst_29_29;

#line 102 "term.opt"
            mercury__varset__V_4_47 = (mercury__varset__V0_5_48 + (MR_Integer) 1);
#line 101 "term.opt"
            mercury__varset__Var_16 = (MR_Word) mercury__varset__V_4_47;
#line 101 "term.opt"
            mercury__varset__STATE_VARIABLE_Supply_26_26 = (MR_Word) mercury__varset__V_4_47;
#line 101 "term.opt"
            mercury__varset__V0_5_51 = (MR_Integer) mercury__varset__STATE_VARIABLE_SupplyB_0_19;
#line 102 "term.opt"
            mercury__varset__V_4_50 = (mercury__varset__V0_5_51 + (MR_Integer) 1);
#line 101 "term.opt"
            mercury__varset__VarB_17 = (MR_Word) mercury__varset__V_4_50;
#line 101 "term.opt"
            mercury__varset__STATE_VARIABLE_SupplyB_27_33 = (MR_Word) mercury__varset__V_4_50;
#line 2277 "varset.c"
            mercury__varset__TypeCtorInfo_35_35 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2279 "varset.c"
            mercury__varset__TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2281 "varset.c"
            {
#line 2283 "varset.c"
              mercury__varset__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2285 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_36_36, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_35_35));
#line 2287 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_36_36, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_34));
#line 2289 "varset.c"
            }
#line 39 "map.opt"
            {
#line 39 "map.opt"
              mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_34, mercury__varset__TypeInfo_36_36, mercury__varset__TypeCtorInfo_37_37, mercury__varset__NamesB_12, mercury__varset__VarB_17, &mercury__varset__conv0_NameB_18);
            }
#line 39 "map.opt"
            if (mercury__varset__succeeded)
#line 39 "map.opt"
              {
#line 39 "map.opt"
                mercury__varset__NameB_18 = ((MR_String) mercury__varset__conv0_NameB_18);
#line 39 "map.opt"
                mercury__varset__succeeded = MR_TRUE;
#line 39 "map.opt"
              }
#line 512 "varset.m"
            if (mercury__varset__succeeded)
#line 511 "varset.m"
              {
#line 511 "varset.m"
                MR_Word mercury__varset__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 511 "varset.m"
                {
#line 511 "varset.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_34, mercury__varset__TypeInfo_36_36, mercury__varset__TypeCtorInfo_40_40, mercury__varset__Var_16, ((MR_Box) (mercury__varset__NameB_18)), mercury__varset__STATE_VARIABLE_Names_0_22, &mercury__varset__STATE_VARIABLE_Names_28_28);
                }
#line 511 "varset.m"
              }
#line 512 "varset.m"
            else
#line 511 "varset.m"
              mercury__varset__STATE_VARIABLE_Names_28_28 = mercury__varset__STATE_VARIABLE_Names_0_22;
#line 2324 "varset.c"
            mercury__varset__TypeCtorInfo_41_41 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 2326 "varset.c"
            {
#line 2328 "varset.c"
              mercury__varset__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2330 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_41_41));
#line 2332 "varset.c"
              MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_42_42, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_34));
#line 2334 "varset.c"
            }
#line 515 "varset.m"
            {
#line 515 "varset.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_34, mercury__varset__TypeInfo_42_42, mercury__varset__TypeInfo_42_42, mercury__varset__VarB_17, ((MR_Box) (mercury__varset__Var_16)), (MR_Word) mercury__varset__STATE_VARIABLE_Subst_0_24, &mercury__varset__conv1_STATE_VARIABLE_Subst_29_29);
            }
#line 515 "varset.m"
            mercury__varset__STATE_VARIABLE_Subst_29_29 = (MR_Word) mercury__varset__conv1_STATE_VARIABLE_Subst_29_29;
#line 516 "varset.m"
            /* direct tailcall eliminated */
#line 516 "varset.m"
            {
#line 516 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_19 = mercury__varset__STATE_VARIABLE_SupplyB_27_33;
#line 516 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_20 = mercury__varset__STATE_VARIABLE_Supply_26_26;
#line 516 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_22 = mercury__varset__STATE_VARIABLE_Names_28_28;
#line 516 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_24 = mercury__varset__STATE_VARIABLE_Subst_29_29;

#line 516 "varset.m"
              mercury__varset__STATE_VARIABLE_Subst_0_24 = mercury__varset__STATE_VARIABLE_Subst_0__tmp_copy_24;
#line 516 "varset.m"
              mercury__varset__STATE_VARIABLE_Names_0_22 = mercury__varset__STATE_VARIABLE_Names_0__tmp_copy_22;
#line 516 "varset.m"
              mercury__varset__STATE_VARIABLE_Supply_0_20 = mercury__varset__STATE_VARIABLE_Supply_0__tmp_copy_20;
#line 516 "varset.m"
              mercury__varset__STATE_VARIABLE_SupplyB_0_19 = mercury__varset__STATE_VARIABLE_SupplyB_0__tmp_copy_19;
#line 516 "varset.m"
            }
#line 516 "varset.m"
            continue;
#line 508 "varset.m"
          }
#line 507 "varset.m"
      }
#line 507 "varset.m"
      break;
#line 507 "varset.m"
    }
#line 497 "varset.m"
}

#line 443 "varset.m"
void MR_CALL 
mercury__varset__bind_vars_2_3_p_0(
#line 443 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_16,
#line 443 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1,
#line 443 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_2,
#line 443 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_3)
#line 443 "varset.m"
{
#line 446 "varset.m"
  while (MR_TRUE)
#line 446 "varset.m"
    {
#line 446 "varset.m"
      /* tailcall optimized into a loop */
#line 446 "varset.m"
      {
#line 446 "varset.m"
        MR_bool mercury__varset__succeeded;

#line 446 "varset.m"
        if ((mercury__varset__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "varset.m"
          *mercury__varset__STATE_VARIABLE_VarSet_3 = mercury__varset__STATE_VARIABLE_VarSet_0_2;
#line 446 "varset.m"
        else
#line 447 "varset.m"
          {
#line 447 "varset.m"
            MR_Word mercury__varset__V_7;
#line 447 "varset.m"
            MR_Word mercury__varset__T_8;
#line 447 "varset.m"
            MR_Word mercury__varset__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 447 "varset.m"
            MR_Word mercury__varset__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 447 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_VarSet_14_14;

#line 447 "varset.m"
            mercury__varset__V_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__V_13_13, (MR_Integer) 0)));
#line 447 "varset.m"
            mercury__varset__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__V_13_13, (MR_Integer) 1)));
#line 448 "varset.m"
            {
#line 448 "varset.m"
              mercury__varset__bind_var_4_p_0(mercury__varset__TypeInfo_for_T_16, mercury__varset__V_7, mercury__varset__T_8, mercury__varset__STATE_VARIABLE_VarSet_0_2, &mercury__varset__STATE_VARIABLE_VarSet_14_14);
            }
#line 449 "varset.m"
            /* direct tailcall eliminated */
#line 449 "varset.m"
            {
#line 449 "varset.m"
              MR_Word mercury__varset__HeadVar__1__tmp_copy_1 = mercury__varset__Rest_9;
#line 449 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_2 = mercury__varset__STATE_VARIABLE_VarSet_14_14;

#line 449 "varset.m"
              mercury__varset__STATE_VARIABLE_VarSet_0_2 = mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_2;
#line 449 "varset.m"
              mercury__varset__HeadVar__1_1 = mercury__varset__HeadVar__1__tmp_copy_1;
#line 449 "varset.m"
            }
#line 449 "varset.m"
            continue;
#line 447 "varset.m"
          }
#line 446 "varset.m"
      }
#line 446 "varset.m"
      break;
#line 446 "varset.m"
    }
#line 443 "varset.m"
}

#line 389 "varset.m"
MR_Word MR_CALL 
mercury__varset__vars_2_3_f_0(
#line 389 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_12,
#line 389 "varset.m"
  MR_Word mercury__varset__N_5,
#line 389 "varset.m"
  MR_Word mercury__varset__Max_6,
#line 389 "varset.m"
  MR_Word mercury__varset__RevVars0_7)
#line 389 "varset.m"
{
#line 395 "varset.m"
  while (MR_TRUE)
#line 395 "varset.m"
    {
#line 395 "varset.m"
      /* tailcall optimized into a loop */
#line 395 "varset.m"
      {
#line 395 "varset.m"
        MR_bool mercury__varset__succeeded;
#line 395 "varset.m"
        MR_Word mercury__varset__RevVars_8;
#line 393 "varset.m"
        MR_Integer mercury__varset__V_15_15 = (MR_Integer) mercury__varset__N_5;
#line 393 "varset.m"
        MR_Integer mercury__varset__V_16_16 = (MR_Integer) mercury__varset__Max_6;

#line 393 "varset.m"
        mercury__varset__succeeded = (mercury__varset__V_15_15 == mercury__varset__V_16_16);
#line 395 "varset.m"
        if (mercury__varset__succeeded)
#line 394 "varset.m"
          mercury__varset__RevVars_8 = mercury__varset__RevVars0_7;
#line 395 "varset.m"
        else
#line 396 "varset.m"
          {
#line 396 "varset.m"
            MR_Word mercury__varset__Var_9;
#line 396 "varset.m"
            MR_Word mercury__varset__NPrime_10;
#line 396 "varset.m"
            MR_Word mercury__varset__V_11_11;
#line 396 "varset.m"
            MR_Integer mercury__varset__V_4_17;
#line 396 "varset.m"
            MR_Integer mercury__varset__V0_5_18 = (MR_Integer) mercury__varset__N_5;

#line 102 "term.opt"
            mercury__varset__V_4_17 = (mercury__varset__V0_5_18 + (MR_Integer) 1);
#line 101 "term.opt"
            mercury__varset__Var_9 = (MR_Word) mercury__varset__V_4_17;
#line 101 "term.opt"
            mercury__varset__NPrime_10 = (MR_Word) mercury__varset__V_4_17;
#line 397 "varset.m"
            {
#line 397 "varset.m"
              mercury__varset__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__V_11_11, 0) = ((MR_Box) (mercury__varset__Var_9));
#line 397 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__V_11_11, 1) = ((MR_Box) (mercury__varset__RevVars0_7));
#line 397 "varset.m"
            }
#line 397 "varset.m"
            /* direct tailcall eliminated */
#line 397 "varset.m"
            {
#line 397 "varset.m"
              MR_Word mercury__varset__N__tmp_copy_5 = mercury__varset__NPrime_10;
#line 397 "varset.m"
              MR_Word mercury__varset__RevVars0__tmp_copy_7 = mercury__varset__V_11_11;

#line 397 "varset.m"
              mercury__varset__RevVars0_7 = mercury__varset__RevVars0__tmp_copy_7;
#line 397 "varset.m"
              mercury__varset__N_5 = mercury__varset__N__tmp_copy_5;
#line 397 "varset.m"
            }
#line 397 "varset.m"
            continue;
#line 396 "varset.m"
          }
#line 395 "varset.m"
        return mercury__varset__RevVars_8;
#line 395 "varset.m"
      }
#line 395 "varset.m"
      break;
#line 395 "varset.m"
    }
#line 389 "varset.m"
}

#line 345 "varset.m"
void MR_CALL 
mercury__varset__new_vars_2_5_p_0(
#line 345 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_22,
#line 345 "varset.m"
  MR_Integer mercury__varset__NumVars_6,
#line 345 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_RevNewVars_0_10,
#line 345 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_RevNewVars_11,
#line 345 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_12,
#line 345 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_13)
#line 345 "varset.m"
{
#line 353 "varset.m"
  while (MR_TRUE)
#line 353 "varset.m"
    {
#line 353 "varset.m"
      /* tailcall optimized into a loop */
#line 353 "varset.m"
      {
#line 353 "varset.m"
        MR_bool mercury__varset__succeeded = (mercury__varset__NumVars_6 > (MR_Integer) 0);

#line 353 "varset.m"
        if (mercury__varset__succeeded)
#line 350 "varset.m"
          {
#line 350 "varset.m"
            MR_Word mercury__varset__Var_9;
#line 350 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_VarSet_15_15;
#line 350 "varset.m"
            MR_Word mercury__varset__STATE_VARIABLE_RevNewVars_16_16;
#line 350 "varset.m"
            MR_Integer mercury__varset__V_17_17;
#line 350 "varset.m"
            MR_Word mercury__varset__MaxId0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_12, (MR_Integer) 0)));
#line 350 "varset.m"
            MR_Word mercury__varset__MaxId_28;
#line 350 "varset.m"
            MR_Word mercury__varset__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_12, (MR_Integer) 1)));
#line 350 "varset.m"
            MR_Word mercury__varset__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_12, (MR_Integer) 2)));
#line 350 "varset.m"
            MR_Integer mercury__varset__V_4_35;
#line 350 "varset.m"
            MR_Integer mercury__varset__V0_5_36 = (MR_Integer) mercury__varset__MaxId0_27;

#line 102 "term.opt"
            mercury__varset__V_4_35 = (mercury__varset__V0_5_36 + (MR_Integer) 1);
#line 101 "term.opt"
            mercury__varset__Var_9 = (MR_Word) mercury__varset__V_4_35;
#line 101 "term.opt"
            mercury__varset__MaxId_28 = (MR_Word) mercury__varset__V_4_35;
#line 317 "varset.m"
            {
#line 317 "varset.m"
              mercury__varset__STATE_VARIABLE_VarSet_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 317 "varset.m"
              MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_15_15, 0) = ((MR_Box) (mercury__varset__MaxId_28));
#line 317 "varset.m"
              MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_15_15, 1) = ((MR_Box) (mercury__varset__V_30_30));
#line 317 "varset.m"
              MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_15_15, 2) = ((MR_Box) (mercury__varset__V_31_31));
#line 317 "varset.m"
            }
#line 351 "varset.m"
            {
#line 351 "varset.m"
              mercury__varset__STATE_VARIABLE_RevNewVars_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__STATE_VARIABLE_RevNewVars_16_16, 0) = ((MR_Box) (mercury__varset__Var_9));
#line 351 "varset.m"
              MR_hl_field(MR_mktag(1), mercury__varset__STATE_VARIABLE_RevNewVars_16_16, 1) = ((MR_Box) (mercury__varset__STATE_VARIABLE_RevNewVars_0_10));
#line 351 "varset.m"
            }
#line 352 "varset.m"
            mercury__varset__V_17_17 = (mercury__varset__NumVars_6 - (MR_Integer) 1);
#line 352 "varset.m"
            /* direct tailcall eliminated */
#line 352 "varset.m"
            {
#line 352 "varset.m"
              MR_Integer mercury__varset__NumVars__tmp_copy_6 = mercury__varset__V_17_17;
#line 352 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_RevNewVars_0__tmp_copy_10 = mercury__varset__STATE_VARIABLE_RevNewVars_16_16;
#line 352 "varset.m"
              MR_Word mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_12 = mercury__varset__STATE_VARIABLE_VarSet_15_15;

#line 352 "varset.m"
              mercury__varset__STATE_VARIABLE_VarSet_0_12 = mercury__varset__STATE_VARIABLE_VarSet_0__tmp_copy_12;
#line 352 "varset.m"
              mercury__varset__STATE_VARIABLE_RevNewVars_0_10 = mercury__varset__STATE_VARIABLE_RevNewVars_0__tmp_copy_10;
#line 352 "varset.m"
              mercury__varset__NumVars_6 = mercury__varset__NumVars__tmp_copy_6;
#line 352 "varset.m"
            }
#line 352 "varset.m"
            continue;
#line 350 "varset.m"
          }
#line 353 "varset.m"
        else
#line 355 "varset.m"
          {
#line 353 "varset.m"
            mercury__varset__succeeded = (mercury__varset__NumVars_6 == (MR_Integer) 0);
#line 355 "varset.m"
            if (mercury__varset__succeeded)
#line 354 "varset.m"
              {
#line 354 "varset.m"
              }
#line 355 "varset.m"
            else
#line 356 "varset.m"
              {
#line 356 "varset.m"
                {
#line 356 "varset.m"
                  mercury__require__error_1_p_0((MR_String) "varset.new_vars - invalid call");
#line 356 "varset.m"
                  return;
                }
#line 356 "varset.m"
              }
#line 356 "varset.m"
            *mercury__varset__STATE_VARIABLE_VarSet_13 = mercury__varset__STATE_VARIABLE_VarSet_0_12;
#line 356 "varset.m"
            *mercury__varset__STATE_VARIABLE_RevNewVars_11 = mercury__varset__STATE_VARIABLE_RevNewVars_0_10;
#line 355 "varset.m"
          }
#line 353 "varset.m"
      }
#line 353 "varset.m"
      break;
#line 353 "varset.m"
    }
#line 345 "varset.m"
}

#line 279 "varset.m"
MR_Integer MR_CALL 
mercury__varset__num_allocated_1_f_0(
#line 279 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_6,
#line 279 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1)
#line 279 "varset.m"
{
#line 717 "varset.m"
  {
#line 717 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 717 "varset.m"
    MR_Integer mercury__varset__HeadVar__2_2;
#line 717 "varset.m"
    MR_Word mercury__varset__VarSupply_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 717 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 717 "varset.m"
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));

#line 134 "term.opt"
    mercury__varset__HeadVar__2_2 = (MR_Integer) mercury__varset__VarSupply_3;
#line 717 "varset.m"
    return mercury__varset__HeadVar__2_2;
#line 717 "varset.m"
  }
#line 279 "varset.m"
}

#line 277 "varset.m"
MR_Word MR_CALL 
mercury__varset__max_var_1_f_0(
#line 277 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_6,
#line 277 "varset.m"
  MR_Word mercury__varset__HeadVar__1_1)
#line 277 "varset.m"
{
#line 715 "varset.m"
  {
#line 715 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 715 "varset.m"
    MR_Word mercury__varset__HeadVar__2_2;
#line 715 "varset.m"
    MR_Word mercury__varset__VarSupply_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 715 "varset.m"
    MR_Integer mercury__varset__V_3_7 = (MR_Integer) mercury__varset__VarSupply_3;
#line 715 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 715 "varset.m"
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));

#line 133 "term.opt"
    mercury__varset__HeadVar__2_2 = (MR_Word) mercury__varset__V_3_7;
#line 715 "varset.m"
    return mercury__varset__HeadVar__2_2;
#line 715 "varset.m"
  }
#line 277 "varset.m"
}

#line 262 "varset.m"
void MR_CALL 
mercury__varset__coerce_2_p_0(
#line 262 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 262 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_U_6,
#line 262 "varset.m"
  MR_Word mercury__varset__A_3,
#line 262 "varset.m"
  MR_Word * mercury__varset__B_4)
#line 262 "varset.m"
{
#line 711 "varset.m"
  {
#line 711 "varset.m"
    MR_bool mercury__varset__succeeded;

#line 711 "varset.m"
    *mercury__varset__B_4 = mercury__varset__A_3;
#line 711 "varset.m"
  }
#line 262 "varset.m"
}

#line 261 "varset.m"
MR_Word MR_CALL 
mercury__varset__coerce_1_f_0(
#line 261 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_7,
#line 261 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_U_8,
#line 261 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VS_0_4)
#line 261 "varset.m"
{
#line 711 "varset.m"
  {
#line 711 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 711 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_5 = mercury__varset__STATE_VARIABLE_VS_0_4;

#line 711 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_5;
#line 711 "varset.m"
  }
#line 261 "varset.m"
}

#line 256 "varset.m"
void MR_CALL 
mercury__varset__squash_4_p_0(
#line 256 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_15,
#line 256 "varset.m"
  MR_Word mercury__varset__OldVarSet_5,
#line 256 "varset.m"
  MR_Word mercury__varset__KeptVars_6,
#line 256 "varset.m"
  MR_Word * mercury__varset__NewVarSet_7,
#line 256 "varset.m"
  MR_Word * mercury__varset__Subst_8)
#line 256 "varset.m"
{
#line 677 "varset.m"
  {
#line 677 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 677 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 677 "varset.m"
    MR_Word mercury__varset__TypeInfo_10_60;
#line 677 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_61;
#line 677 "varset.m"
    MR_Integer mercury__varset__NumVars_9;
#line 677 "varset.m"
    MR_Word mercury__varset__NewVarSet0_10;
#line 677 "varset.m"
    MR_Word mercury__varset__NewVars0_11;
#line 677 "varset.m"
    MR_Word mercury__varset__NewVarSet1_12;
#line 677 "varset.m"
    MR_Word mercury__varset__NewVars_13;
#line 677 "varset.m"
    MR_Word mercury__varset__VarNames_14;
#line 677 "varset.m"
    MR_Word mercury__varset__VarSupply_21;
#line 677 "varset.m"
    MR_Word mercury__varset__Names_22;
#line 677 "varset.m"
    MR_Word mercury__varset__Values_23;
#line 677 "varset.m"
    MR_Word mercury__varset__RevNewVars_37;
#line 677 "varset.m"
    MR_Word mercury__varset__V_38_38;
#line 677 "varset.m"
    MR_Integer mercury__varset__V_5_47;
#line 677 "varset.m"
    MR_Word mercury__varset__VarNames_56;
#line 677 "varset.m"
    MR_Word mercury__varset__V_5_66;
#line 677 "varset.m"
    MR_Word mercury__varset__AssocList_7_72;
#line 677 "varset.m"
    MR_Word mercury__varset__V_5_75;
#line 343 "varset.m"
    MR_Word mercury__varset__conv0_NewVars0_11;
#line 618 "varset.m"
    MR_Word mercury__varset__V_57_57;
#line 618 "varset.m"
    MR_Word mercury__varset__V_58_58;
#line 86 "tree234.opt"
    MR_Word mercury__varset__conv1_VarNames_14;
#line 169 "map.opt"
    MR_Word mercury__varset__conv2_AssocList_7_72;
#line 91 "tree234.opt"
    MR_Word mercury__varset__conv3_Subst_8;

#line 2886 "varset.c"
    {
#line 2888 "varset.c"
      mercury__varset__TypeInfo_10_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2890 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_60, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_16_16));
#line 2892 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_60, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_15));
#line 2894 "varset.c"
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__varset__TypeInfo_10_60, (MR_Word) mercury__varset__KeptVars_6, (MR_Integer) 0, &mercury__varset__NumVars_9);
    }
#line 99 "term.opt"
    mercury__varset__VarSupply_21 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__varset__Names_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 48 "tree234.opt"
    mercury__varset__Values_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 302 "varset.m"
    mercury__varset__NewVarSet0_10 = (MR_Word) &mercury__varset_scalar_common_2[1];
#line 341 "varset.m"
    mercury__varset__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 341 "varset.m"
    {
#line 341 "varset.m"
      mercury__varset__new_vars_2_5_p_0(mercury__varset__TypeInfo_for_T_15, mercury__varset__NumVars_9, mercury__varset__V_38_38, &mercury__varset__RevNewVars_37, mercury__varset__NewVarSet0_10, &mercury__varset__NewVarSet1_12);
    }
#line 343 "varset.m"
    {
#line 343 "varset.m"
      mercury__list__reverse_2_p_0(mercury__varset__TypeInfo_10_60, (MR_Word) mercury__varset__RevNewVars_37, &mercury__varset__conv0_NewVars0_11);
    }
#line 343 "varset.m"
    mercury__varset__NewVars0_11 = (MR_Word) mercury__varset__conv0_NewVars0_11;
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__varset__TypeInfo_10_60, (MR_Word) mercury__varset__NewVars0_11, (MR_Integer) 0, &mercury__varset__V_5_47);
    }
#line 832 "list.opt"
    {
#line 832 "list.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_15, mercury__varset__TypeInfo_10_60, mercury__varset__V_5_47, mercury__varset__NewVars0_11, &mercury__varset__NewVars_13);
    }
#line 618 "varset.m"
    mercury__varset__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__OldVarSet_5, (MR_Integer) 0)));
#line 618 "varset.m"
    mercury__varset__VarNames_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__OldVarSet_5, (MR_Integer) 1)));
#line 618 "varset.m"
    mercury__varset__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__OldVarSet_5, (MR_Integer) 2)));
#line 2939 "varset.c"
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
#line 169 "map.opt"
    {
#line 169 "map.opt"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__varset__TypeInfo_10_60, mercury__varset__TypeInfo_10_60, (MR_Word) mercury__varset__KeptVars_6, mercury__varset__NewVars_13, &mercury__varset__conv2_AssocList_7_72);
    }
#line 169 "map.opt"
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
#line 691 "varset.m"
    {
#line 691 "varset.m"
      mercury__varset__copy_var_names_4_p_0(mercury__varset__TypeInfo_for_T_15, mercury__varset__VarNames_14, *mercury__varset__Subst_8, mercury__varset__NewVarSet1_12, mercury__varset__NewVarSet_7);
#line 691 "varset.m"
      return;
    }
#line 677 "varset.m"
  }
#line 256 "varset.m"
}

#line 248 "varset.m"
void MR_CALL 
mercury__varset__select_3_p_0(
#line 248 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_12,
#line 248 "varset.m"
  MR_Word mercury__varset__Vars_4,
#line 248 "varset.m"
  MR_Word mercury__varset__VarSet0_5,
#line 248 "varset.m"
  MR_Word * mercury__varset__VarSet_6)
#line 248 "varset.m"
{
#line 669 "varset.m"
  {
#line 669 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 669 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 669 "varset.m"
    MR_Word mercury__varset__TypeInfo_14_14;
#line 669 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_15_15;
#line 669 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_16_16;
#line 669 "varset.m"
    MR_Word mercury__varset__TypeInfo_17_17;
#line 669 "varset.m"
    MR_Word mercury__varset__Supply_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet0_5, (MR_Integer) 0)));
#line 669 "varset.m"
    MR_Word mercury__varset__VarNameMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet0_5, (MR_Integer) 1)));
#line 669 "varset.m"
    MR_Word mercury__varset__Values0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet0_5, (MR_Integer) 2)));
#line 669 "varset.m"
    MR_Word mercury__varset__VarNameMap_10;
#line 669 "varset.m"
    MR_Word mercury__varset__Values_11;
#line 669 "varset.m"
    MR_Word mercury__varset__Keys_7_21;
#line 669 "varset.m"
    MR_Word mercury__varset__NewMap0_8_22;
#line 669 "varset.m"
    MR_Word mercury__varset__Keys_7_31;
#line 669 "varset.m"
    MR_Word mercury__varset__NewMap0_8_32;
#line 191 "map.opt"
    MR_Word mercury__varset__conv0_Values_11;

#line 3026 "varset.c"
    {
#line 3028 "varset.c"
      mercury__varset__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3030 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_13_13));
#line 3032 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_12));
#line 3034 "varset.c"
    }
#line 3036 "varset.c"
    mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 38 "set_ordlist.opt"
    mercury__varset__Keys_7_21 = (MR_Word) mercury__varset__Vars_4;
#line 48 "tree234.opt"
    mercury__varset__NewMap0_8_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 191 "map.opt"
    {
#line 191 "map.opt"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__TypeInfo_14_14, mercury__varset__TypeCtorInfo_15_15, mercury__varset__Keys_7_21, mercury__varset__VarNameMap0_8, mercury__varset__NewMap0_8_22, &mercury__varset__VarNameMap_10);
    }
#line 3047 "varset.c"
    mercury__varset__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 3049 "varset.c"
    {
#line 3051 "varset.c"
      mercury__varset__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3053 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_17_17, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_16_16));
#line 3055 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_17_17, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_12));
#line 3057 "varset.c"
    }
#line 38 "set_ordlist.opt"
    mercury__varset__Keys_7_31 = (MR_Word) mercury__varset__Vars_4;
#line 48 "tree234.opt"
    mercury__varset__NewMap0_8_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 191 "map.opt"
    {
#line 191 "map.opt"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_108_101_99_116_95_108_111_111_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__TypeInfo_14_14, mercury__varset__TypeInfo_17_17, mercury__varset__Keys_7_31, (MR_Word) mercury__varset__Values0_9, (MR_Word) mercury__varset__NewMap0_8_32, &mercury__varset__conv0_Values_11);
    }
#line 191 "map.opt"
    mercury__varset__Values_11 = (MR_Word) mercury__varset__conv0_Values_11;
#line 673 "varset.m"
    {
#line 673 "varset.m"
      MR_Word base;
#line 673 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 673 "varset.m"
      *mercury__varset__VarSet_6 = base;
#line 673 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_7));
#line 673 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__VarNameMap_10));
#line 673 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_11));
#line 673 "varset.m"
    }
#line 669 "varset.m"
  }
#line 248 "varset.m"
}

#line 247 "varset.m"
MR_Word MR_CALL 
mercury__varset__select_2_f_0(
#line 247 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 247 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VS_0_6,
#line 247 "varset.m"
  MR_Word mercury__varset__S_5)
#line 247 "varset.m"
{
#line 770 "varset.m"
  {
#line 770 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 770 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_7;

#line 770 "varset.m"
    {
#line 770 "varset.m"
      mercury__varset__select_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__S_5, mercury__varset__STATE_VARIABLE_VS_0_6, &mercury__varset__STATE_VARIABLE_VS_7);
    }
#line 770 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_7;
#line 770 "varset.m"
  }
#line 247 "varset.m"
}

#line 241 "varset.m"
void MR_CALL 
mercury__varset__ensure_unique_names_4_p_0(
#line 241 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_20,
#line 241 "varset.m"
  MR_Word mercury__varset__AllVars_5,
#line 241 "varset.m"
  MR_String mercury__varset__Suffix_6,
#line 241 "varset.m"
  MR_Word mercury__varset__STATE_VARIABLE_VarSet_0_10,
#line 241 "varset.m"
  MR_Word * mercury__varset__STATE_VARIABLE_VarSet_11)
#line 241 "varset.m"
{
#line 623 "varset.m"
  {
#line 623 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 623 "varset.m"
    MR_Word mercury__varset__VarNames0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 623 "varset.m"
    MR_Word mercury__varset__VarNames_9;
#line 623 "varset.m"
    MR_Word mercury__varset__V_12_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 623 "varset.m"
    MR_Word mercury__varset__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 623 "varset.m"
    MR_Word mercury__varset__V_2_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 624 "varset.m"
    MR_Word mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 624 "varset.m"
    MR_Word mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 627 "varset.m"
    MR_Word mercury__varset__V_17_17;
#line 627 "varset.m"
    MR_Word mercury__varset__V_19_19;
#line 627 "varset.m"
    MR_Word mercury__varset__V_18_18;

#line 625 "varset.m"
    {
#line 625 "varset.m"
      mercury__varset__ensure_unique_names_2_6_p_0(mercury__varset__TypeInfo_for_T_20, mercury__varset__AllVars_5, mercury__varset__Suffix_6, mercury__varset__V_12_12, mercury__varset__VarNames0_8, mercury__varset__V_13_13, &mercury__varset__VarNames_9);
    }
#line 627 "varset.m"
    mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 627 "varset.m"
    mercury__varset__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 627 "varset.m"
    mercury__varset__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 627 "varset.m"
    {
#line 627 "varset.m"
      MR_Word base;
#line 627 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 627 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_11 = base;
#line 627 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_17_17));
#line 627 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__VarNames_9));
#line 627 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__V_19_19));
#line 627 "varset.m"
    }
#line 623 "varset.m"
  }
#line 241 "varset.m"
}

#line 239 "varset.m"
MR_Word MR_CALL 
mercury__varset__ensure_unique_names_3_f_0(
#line 239 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 239 "varset.m"
  MR_Word mercury__varset__Vs_5,
#line 239 "varset.m"
  MR_String mercury__varset__S1_6,
#line 239 "varset.m"
  MR_Word mercury__varset__VS1_7)
#line 239 "varset.m"
{
#line 767 "varset.m"
  {
#line 767 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 767 "varset.m"
    MR_Word mercury__varset__VS2_8;

#line 767 "varset.m"
    {
#line 767 "varset.m"
      mercury__varset__ensure_unique_names_4_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__Vs_5, mercury__varset__S1_6, mercury__varset__VS1_7, &mercury__varset__VS2_8);
    }
#line 767 "varset.m"
    return mercury__varset__VS2_8;
#line 767 "varset.m"
  }
#line 239 "varset.m"
}

#line 230 "varset.m"
void MR_CALL 
mercury__varset__var_name_list_2_p_0(
#line 230 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_8,
#line 230 "varset.m"
  MR_Word mercury__varset__VarSet_3,
#line 230 "varset.m"
  MR_Word * mercury__varset__VarNameList_4)
#line 230 "varset.m"
{
#line 617 "varset.m"
  {
#line 617 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 617 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 617 "varset.m"
    MR_Word mercury__varset__TypeInfo_10_10;
#line 617 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_11;
#line 617 "varset.m"
    MR_Word mercury__varset__VarNames_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));
#line 617 "varset.m"
    MR_Word mercury__varset__V_5_16;
#line 618 "varset.m"
    MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 618 "varset.m"
    MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 86 "tree234.opt"
    MR_Word mercury__varset__conv0_VarNameList_4;

#line 3257 "varset.c"
    {
#line 3259 "varset.c"
      mercury__varset__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3261 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_10, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_9_9));
#line 3263 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_10, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_8));
#line 3265 "varset.c"
    }
#line 3267 "varset.c"
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
#line 617 "varset.m"
  }
#line 230 "varset.m"
}

#line 229 "varset.m"
MR_Word MR_CALL 
mercury__varset__var_name_list_1_f_0(
#line 229 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 229 "varset.m"
  MR_Word mercury__varset__VS_3)
#line 229 "varset.m"
{
#line 617 "varset.m"
  {
#line 617 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 617 "varset.m"
    MR_Word mercury__varset__AL_4;
#line 617 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_9_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 617 "varset.m"
    MR_Word mercury__varset__TypeInfo_10_12;
#line 617 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_13;
#line 617 "varset.m"
    MR_Word mercury__varset__VarNames_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 1)));
#line 617 "varset.m"
    MR_Word mercury__varset__V_5_18;
#line 618 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 0)));
#line 618 "varset.m"
    MR_Word mercury__varset__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 2)));
#line 86 "tree234.opt"
    MR_Word mercury__varset__conv0_AL_4;

#line 3315 "varset.c"
    {
#line 3317 "varset.c"
      mercury__varset__TypeInfo_10_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3319 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_9_11));
#line 3321 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_10_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_5));
#line 3323 "varset.c"
    }
#line 3325 "varset.c"
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
#line 617 "varset.m"
    return mercury__varset__AL_4;
#line 617 "varset.m"
  }
#line 229 "varset.m"
}

#line 222 "varset.m"
void MR_CALL 
mercury__varset__create_name_var_map_2_p_0(
#line 222 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_10,
#line 222 "varset.m"
  MR_Word mercury__varset__VarSet_3,
#line 222 "varset.m"
  MR_Word * mercury__varset__NameVars_4)
#line 222 "varset.m"
{
#line 609 "varset.m"
  {
#line 609 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 609 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 609 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_12;
#line 609 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_13;
#line 609 "varset.m"
    MR_Word mercury__varset__VarNames_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));
#line 609 "varset.m"
    MR_Word mercury__varset__Vars_6;
#line 609 "varset.m"
    MR_Word mercury__varset__Names_7;
#line 609 "varset.m"
    MR_Word mercury__varset__V_5_18;
#line 609 "varset.m"
    MR_Word mercury__varset__V_5_24;
#line 609 "varset.m"
    MR_Word mercury__varset__AssocList_7_29;
#line 609 "varset.m"
    MR_Word mercury__varset__V_5_32;
#line 610 "varset.m"
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 610 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 70 "tree234.opt"
    MR_Word mercury__varset__conv0_Vars_6;

#line 3385 "varset.c"
    {
#line 3387 "varset.c"
      mercury__varset__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3389 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_11));
#line 3391 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 3393 "varset.c"
    }
#line 3395 "varset.c"
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
#line 169 "map.opt"
    {
#line 169 "map.opt"
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
#line 609 "varset.m"
  }
#line 222 "varset.m"
}

#line 221 "varset.m"
MR_Word MR_CALL 
mercury__varset__create_name_var_map_1_f_0(
#line 221 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 221 "varset.m"
  MR_Word mercury__varset__VS_3)
#line 221 "varset.m"
{
#line 761 "varset.m"
  {
#line 761 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 761 "varset.m"
    MR_Word mercury__varset__M_4;

#line 761 "varset.m"
    {
#line 761 "varset.m"
      mercury__varset__create_name_var_map_2_p_0(mercury__varset__TypeInfo_for_T_5, mercury__varset__VS_3, &mercury__varset__M_4);
    }
#line 761 "varset.m"
    return mercury__varset__M_4;
#line 761 "varset.m"
  }
#line 221 "varset.m"
}

#line 212 "varset.m"
void MR_CALL 
mercury__varset__set_bindings_3_p_0(
#line 212 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_9,
#line 212 "varset.m"
  MR_Word mercury__varset__VarSet_4,
#line 212 "varset.m"
  MR_Word mercury__varset__Values_5,
#line 212 "varset.m"
  MR_Word * mercury__varset__HeadVar__3_3)
#line 212 "varset.m"
{
#line 465 "varset.m"
  {
#line 465 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 465 "varset.m"
    MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 0)));
#line 465 "varset.m"
    MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 1)));
#line 465 "varset.m"
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 2)));

#line 465 "varset.m"
    {
#line 465 "varset.m"
      MR_Word base;
#line 465 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 465 "varset.m"
      *mercury__varset__HeadVar__3_3 = base;
#line 465 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_6_6));
#line 465 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__V_7_7));
#line 465 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_5));
#line 465 "varset.m"
    }
#line 465 "varset.m"
  }
#line 212 "varset.m"
}

#line 211 "varset.m"
MR_Word MR_CALL 
mercury__varset__set_bindings_2_f_0(
#line 211 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_7,
#line 211 "varset.m"
  MR_Word mercury__varset__VS1_4,
#line 211 "varset.m"
  MR_Word mercury__varset__S_5)
#line 211 "varset.m"
{
#line 465 "varset.m"
  {
#line 465 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 465 "varset.m"
    MR_Word mercury__varset__VS2_6;
#line 465 "varset.m"
    MR_Word mercury__varset__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS1_4, (MR_Integer) 0)));
#line 465 "varset.m"
    MR_Word mercury__varset__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS1_4, (MR_Integer) 1)));
#line 465 "varset.m"
    MR_Word mercury__varset__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS1_4, (MR_Integer) 2)));

#line 465 "varset.m"
    {
#line 465 "varset.m"
      mercury__varset__VS2_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 465 "varset.m"
      MR_hl_field(MR_mktag(0), mercury__varset__VS2_6, 0) = ((MR_Box) (mercury__varset__V_10_10));
#line 465 "varset.m"
      MR_hl_field(MR_mktag(0), mercury__varset__VS2_6, 1) = ((MR_Box) (mercury__varset__V_11_11));
#line 465 "varset.m"
      MR_hl_field(MR_mktag(0), mercury__varset__VS2_6, 2) = ((MR_Box) (mercury__varset__S_5));
#line 465 "varset.m"
    }
#line 465 "varset.m"
    return mercury__varset__VS2_6;
#line 465 "varset.m"
  }
#line 211 "varset.m"
}

#line 207 "varset.m"
void MR_CALL 
mercury__varset__get_bindings_2_p_0(
#line 207 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_6,
#line 207 "varset.m"
  MR_Word mercury__varset__VarSet_3,
#line 207 "varset.m"
  MR_Word * mercury__varset__HeadVar__2_2)
#line 207 "varset.m"
{
#line 463 "varset.m"
  {
#line 463 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 463 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 463 "varset.m"
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));

#line 463 "varset.m"
    *mercury__varset__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 463 "varset.m"
  }
#line 207 "varset.m"
}

#line 206 "varset.m"
MR_Word MR_CALL 
mercury__varset__get_bindings_1_f_0(
#line 206 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_5,
#line 206 "varset.m"
  MR_Word mercury__varset__VS_3)
#line 206 "varset.m"
{
#line 463 "varset.m"
  {
#line 463 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 463 "varset.m"
    MR_Word mercury__varset__S_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 2)));
#line 463 "varset.m"
    MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 0)));
#line 463 "varset.m"
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 1)));

#line 463 "varset.m"
    return mercury__varset__S_4;
#line 463 "varset.m"
  }
#line 206 "varset.m"
}

#line 201 "varset.m"
void MR_CALL 
mercury__varset__merge_without_names_5_p_0(
#line 201 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_12,
#line 201 "varset.m"
  MR_Word mercury__varset__VarSetA_6,
#line 201 "varset.m"
  MR_Word mercury__varset__VarSetB_7,
#line 201 "varset.m"
  MR_Word mercury__varset__TermList0_8,
#line 201 "varset.m"
  MR_Word * mercury__varset__VarSet_9,
#line 201 "varset.m"
  MR_Word * mercury__varset__TermList_10)
#line 201 "varset.m"
{
#line 479 "varset.m"
  {
#line 479 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 479 "varset.m"
    MR_Word mercury__varset__Subst_11;

#line 480 "varset.m"
    {
#line 480 "varset.m"
      mercury__varset__merge_subst_without_names_4_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__VarSetA_6, mercury__varset__VarSetB_7, mercury__varset__VarSet_9, &mercury__varset__Subst_11);
    }
#line 481 "varset.m"
    {
#line 481 "varset.m"
      mercury__term__apply_substitution_to_list_3_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__TermList0_8, mercury__varset__Subst_11, mercury__varset__TermList_10);
#line 481 "varset.m"
      return;
    }
#line 479 "varset.m"
  }
#line 201 "varset.m"
}

#line 193 "varset.m"
void MR_CALL 
mercury__varset__merge_subst_without_names_4_p_0(
#line 193 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_18,
#line 193 "varset.m"
  MR_Word mercury__varset__VarSetA_5,
#line 193 "varset.m"
  MR_Word mercury__varset__VarSetB_6,
#line 193 "varset.m"
  MR_Word * mercury__varset__VarSet_7,
#line 193 "varset.m"
  MR_Word * mercury__varset__Subst_8)
#line 193 "varset.m"
{
#line 582 "varset.m"
  {
#line 582 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 582 "varset.m"
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
#line 582 "varset.m"
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 582 "varset.m"
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
#line 582 "varset.m"
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
#line 582 "varset.m"
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
#line 582 "varset.m"
    MR_Word mercury__varset__Subst0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 582 "varset.m"
    MR_Word mercury__varset__Supply_17;
#line 583 "varset.m"
    MR_Word mercury__varset___NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
#line 583 "varset.m"
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

#line 587 "varset.m"
    {
#line 587 "varset.m"
      mercury__varset__merge_subst_without_names_2_6_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__Subst0_16, mercury__varset__Subst_8);
    }
#line 589 "varset.m"
    {
#line 589 "varset.m"
      MR_Word base;
#line 589 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 589 "varset.m"
      *mercury__varset__VarSet_7 = base;
#line 589 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
#line 589 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__NamesA_14));
#line 589 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
#line 589 "varset.m"
    }
#line 582 "varset.m"
  }
#line 193 "varset.m"
}

#line 183 "varset.m"
void MR_CALL 
mercury__varset__merge_renaming_without_names_4_p_0(
#line 183 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_18,
#line 183 "varset.m"
  MR_Word mercury__varset__VarSetA_5,
#line 183 "varset.m"
  MR_Word mercury__varset__VarSetB_6,
#line 183 "varset.m"
  MR_Word * mercury__varset__VarSet_7,
#line 183 "varset.m"
  MR_Word * mercury__varset__Subst_8)
#line 183 "varset.m"
{
#line 520 "varset.m"
  {
#line 520 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 520 "varset.m"
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
#line 520 "varset.m"
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 520 "varset.m"
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
#line 520 "varset.m"
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
#line 520 "varset.m"
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
#line 520 "varset.m"
    MR_Word mercury__varset__Subst0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 520 "varset.m"
    MR_Word mercury__varset__Supply_17;
#line 521 "varset.m"
    MR_Word mercury__varset___NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
#line 521 "varset.m"
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

#line 525 "varset.m"
    {
#line 525 "varset.m"
      mercury__varset__merge_renaming_without_names_2_6_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__Subst0_16, mercury__varset__Subst_8);
    }
#line 527 "varset.m"
    {
#line 527 "varset.m"
      MR_Word base;
#line 527 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 527 "varset.m"
      *mercury__varset__VarSet_7 = base;
#line 527 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
#line 527 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__NamesA_14));
#line 527 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
#line 527 "varset.m"
    }
#line 520 "varset.m"
  }
#line 183 "varset.m"
}

#line 175 "varset.m"
void MR_CALL 
mercury__varset__merge_5_p_0(
#line 175 "varset.m"
  MR_Word mercury__varset__TypeInfo_for_T_12,
#line 175 "varset.m"
  MR_Word mercury__varset__VarSetA_6,
#line 175 "varset.m"
  MR_Word mercury__varset__VarSetB_7,
#line 175 "varset.m"
  MR_Word mercury__varset__TermList0_8,
#line 175 "varset.m"
  MR_Word * mercury__varset__VarSet_9,
#line 175 "varset.m"
  MR_Word * mercury__varset__TermList_10)
#line 175 "varset.m"
{
#line 475 "varset.m"
  {
#line 475 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 475 "varset.m"
    MR_Word mercury__varset__Subst_11;

#line 476 "varset.m"
    {
#line 476 "varset.m"
      mercury__varset__merge_subst_4_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__VarSetA_6, mercury__varset__VarSetB_7, mercury__varset__VarSet_9, &mercury__varset__Subst_11);
    }
#line 477 "varset.m"
    {
#line 477 "varset.m"
      mercury__term__apply_substitution_to_list_3_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__TermList0_8, mercury__varset__Subst_11, mercury__varset__TermList_10);
#line 477 "varset.m"
      return;
    }
#line 475 "varset.m"
  }
#line 175 "varset.m"
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
#line 549 "varset.m"
  {
#line 549 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 549 "varset.m"
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
#line 549 "varset.m"
    MR_Word mercury__varset__NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
#line 549 "varset.m"
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 549 "varset.m"
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
#line 549 "varset.m"
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
#line 549 "varset.m"
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
#line 549 "varset.m"
    MR_Word mercury__varset__Subst0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 549 "varset.m"
    MR_Word mercury__varset__Supply_17;
#line 549 "varset.m"
    MR_Word mercury__varset__Names_18;
#line 550 "varset.m"
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

#line 554 "varset.m"
    {
#line 554 "varset.m"
      mercury__varset__merge_subst_2_9_p_0(mercury__varset__TypeInfo_for_T_19, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__NamesB_10, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__NamesA_14, &mercury__varset__Names_18, mercury__varset__Subst0_16, mercury__varset__Subst_8);
    }
#line 556 "varset.m"
    {
#line 556 "varset.m"
      MR_Word base;
#line 556 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 556 "varset.m"
      *mercury__varset__VarSet_7 = base;
#line 556 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
#line 556 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_18));
#line 556 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
#line 556 "varset.m"
    }
#line 549 "varset.m"
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
  MR_Word * mercury__varset__Subst_8)
#line 158 "varset.m"
{
#line 488 "varset.m"
  {
#line 488 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 488 "varset.m"
    MR_Word mercury__varset__SupplyB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 0)));
#line 488 "varset.m"
    MR_Word mercury__varset__NamesB_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 1)));
#line 488 "varset.m"
    MR_Word mercury__varset__SupplyB0_12 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 488 "varset.m"
    MR_Word mercury__varset__SupplyA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 0)));
#line 488 "varset.m"
    MR_Word mercury__varset__NamesA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 1)));
#line 488 "varset.m"
    MR_Word mercury__varset__ValuesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetA_5, (MR_Integer) 2)));
#line 488 "varset.m"
    MR_Word mercury__varset__Subst0_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 488 "varset.m"
    MR_Word mercury__varset__Supply_17;
#line 488 "varset.m"
    MR_Word mercury__varset__Names_18;
#line 489 "varset.m"
    MR_Word mercury__varset___ValuesB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSetB_6, (MR_Integer) 2)));

#line 493 "varset.m"
    {
#line 493 "varset.m"
      mercury__varset__merge_renaming_2_9_p_0(mercury__varset__TypeInfo_for_T_19, mercury__varset__SupplyB0_12, mercury__varset__SupplyB_9, mercury__varset__NamesB_10, mercury__varset__SupplyA_13, &mercury__varset__Supply_17, mercury__varset__NamesA_14, &mercury__varset__Names_18, mercury__varset__Subst0_16, mercury__varset__Subst_8);
    }
#line 495 "varset.m"
    {
#line 495 "varset.m"
      MR_Word base;
#line 495 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 495 "varset.m"
      *mercury__varset__VarSet_7 = base;
#line 495 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__Supply_17));
#line 495 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_18));
#line 495 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__ValuesA_15));
#line 495 "varset.m"
    }
#line 488 "varset.m"
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
#line 459 "varset.m"
  {
#line 459 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 459 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 0)));
#line 459 "varset.m"
    MR_Word mercury__varset__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 1)));

#line 459 "varset.m"
    *mercury__varset__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_3, (MR_Integer) 2)));
#line 459 "varset.m"
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
#line 459 "varset.m"
  {
#line 459 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 459 "varset.m"
    MR_Word mercury__varset__S_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 2)));
#line 459 "varset.m"
    MR_Word mercury__varset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 0)));
#line 459 "varset.m"
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VS_3, (MR_Integer) 1)));

#line 459 "varset.m"
    return mercury__varset__S_4;
#line 459 "varset.m"
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
#line 453 "varset.m"
  {
#line 453 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 453 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 453 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_12;
#line 453 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 453 "varset.m"
    MR_Word mercury__varset__TypeInfo_14_14;
#line 453 "varset.m"
    MR_Word mercury__varset__Values_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 2)));
#line 454 "varset.m"
    MR_Word mercury__varset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 0)));
#line 454 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 1)));
#line 39 "map.opt"
    MR_Box mercury__varset__conv0_Val_6;

#line 4032 "varset.c"
    {
#line 4034 "varset.c"
      mercury__varset__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4036 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_11));
#line 4038 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 4040 "varset.c"
    }
#line 4042 "varset.c"
    {
#line 4044 "varset.c"
      mercury__varset__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4046 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_13_13));
#line 4048 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 4050 "varset.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_10, mercury__varset__TypeInfo_12_12, mercury__varset__TypeInfo_14_14, (MR_Word) mercury__varset__Values_7, mercury__varset__Id_5, &mercury__varset__conv0_Val_6);
    }
#line 39 "map.opt"
    if (mercury__varset__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        *mercury__varset__Val_6 = ((MR_Word) mercury__varset__conv0_Val_6);
#line 39 "map.opt"
        mercury__varset__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 453 "varset.m"
    return mercury__varset__succeeded;
#line 453 "varset.m"
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
#line 439 "varset.m"
  {
#line 439 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 439 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_11 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 439 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_12;
#line 439 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_13;
#line 439 "varset.m"
    MR_Word mercury__varset__TypeInfo_14_14;
#line 439 "varset.m"
    MR_Word mercury__varset__VarTermList_6;
#line 439 "varset.m"
    MR_Word mercury__varset__V_5_19;
#line 86 "tree234.opt"
    MR_Word mercury__varset__conv0_VarTermList_6;

#line 4106 "varset.c"
    {
#line 4108 "varset.c"
      mercury__varset__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4110 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_11));
#line 4112 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_12, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 4114 "varset.c"
    }
#line 4116 "varset.c"
    mercury__varset__TypeCtorInfo_13_13 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4118 "varset.c"
    {
#line 4120 "varset.c"
      mercury__varset__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4122 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_13_13));
#line 4124 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_14, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_10));
#line 4126 "varset.c"
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
#line 441 "varset.m"
    {
#line 441 "varset.m"
      mercury__varset__bind_vars_2_3_p_0(mercury__varset__TypeInfo_for_T_10, mercury__varset__VarTermList_6, mercury__varset__STATE_VARIABLE_VarSet_0_7, mercury__varset__STATE_VARIABLE_VarSet_8);
#line 441 "varset.m"
      return;
    }
#line 439 "varset.m"
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
#line 439 "varset.m"
  {
#line 439 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 439 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_7;
#line 439 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_11_16 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 439 "varset.m"
    MR_Word mercury__varset__TypeInfo_12_17;
#line 439 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_13_18;
#line 439 "varset.m"
    MR_Word mercury__varset__TypeInfo_14_19;
#line 439 "varset.m"
    MR_Word mercury__varset__VarTermList_14;
#line 439 "varset.m"
    MR_Word mercury__varset__V_5_24;
#line 86 "tree234.opt"
    MR_Word mercury__varset__conv0_VarTermList_14;

#line 4181 "varset.c"
    {
#line 4183 "varset.c"
      mercury__varset__TypeInfo_12_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4185 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_17, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_11_16));
#line 4187 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_12_17, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_9));
#line 4189 "varset.c"
    }
#line 4191 "varset.c"
    mercury__varset__TypeCtorInfo_13_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4193 "varset.c"
    {
#line 4195 "varset.c"
      mercury__varset__TypeInfo_14_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4197 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_13_18));
#line 4199 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_14_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_9));
#line 4201 "varset.c"
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
#line 441 "varset.m"
    {
#line 441 "varset.m"
      mercury__varset__bind_vars_2_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__VarTermList_14, mercury__varset__STATE_VARIABLE_VS_0_6, &mercury__varset__STATE_VARIABLE_VS_7);
    }
#line 439 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_7;
#line 439 "varset.m"
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
#line 432 "varset.m"
  {
#line 432 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 432 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 432 "varset.m"
    MR_Word mercury__varset__TypeInfo_20_20;
#line 432 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_21_21;
#line 432 "varset.m"
    MR_Word mercury__varset__TypeInfo_22_22;
#line 432 "varset.m"
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 432 "varset.m"
    MR_Word mercury__varset__Values_9;
#line 433 "varset.m"
    MR_Word mercury__varset__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 433 "varset.m"
    MR_Word mercury__varset__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 117 "map.opt"
    MR_Word mercury__varset__conv0_Values_9;
#line 435 "varset.m"
    MR_Word mercury__varset__V_15_15;
#line 435 "varset.m"
    MR_Word mercury__varset__V_16_16;
#line 435 "varset.m"
    MR_Word mercury__varset__V_17_17;

#line 4268 "varset.c"
    {
#line 4270 "varset.c"
      mercury__varset__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4272 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_19_19));
#line 4274 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_18));
#line 4276 "varset.c"
    }
#line 4278 "varset.c"
    mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4280 "varset.c"
    {
#line 4282 "varset.c"
      mercury__varset__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4284 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_21_21));
#line 4286 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_22_22, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_18));
#line 4288 "varset.c"
    }
#line 117 "map.opt"
    {
#line 117 "map.opt"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__TypeInfo_20_20, mercury__varset__TypeInfo_22_22, mercury__varset__Id_5, ((MR_Box) (mercury__varset__Val_6)), (MR_Word) mercury__varset__Values0_8, &mercury__varset__conv0_Values_9);
    }
#line 117 "map.opt"
    mercury__varset__Values_9 = (MR_Word) mercury__varset__conv0_Values_9;
#line 435 "varset.m"
    mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 435 "varset.m"
    mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 435 "varset.m"
    mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 435 "varset.m"
    {
#line 435 "varset.m"
      MR_Word base;
#line 435 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 435 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_11 = base;
#line 435 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_15_15));
#line 435 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__V_16_16));
#line 435 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_9));
#line 435 "varset.m"
    }
#line 432 "varset.m"
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
#line 746 "varset.m"
  {
#line 746 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 746 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_9;

#line 746 "varset.m"
    {
#line 746 "varset.m"
      mercury__varset__bind_var_4_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__V_6, mercury__varset__T_7, mercury__varset__STATE_VARIABLE_VS_0_8, &mercury__varset__STATE_VARIABLE_VS_9);
    }
#line 746 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_9;
#line 746 "varset.m"
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
#line 427 "varset.m"
  {
#line 427 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 427 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_10_10 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 427 "varset.m"
    MR_Word mercury__varset__TypeInfo_11_11;
#line 427 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 427 "varset.m"
    MR_Word mercury__varset__Names_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 427 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 427 "varset.m"
    MR_Word mercury__varset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));
#line 39 "map.opt"
    MR_Box mercury__varset__conv0_Name_8;

#line 4388 "varset.c"
    {
#line 4390 "varset.c"
      mercury__varset__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4392 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_11_11, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_10_10));
#line 4394 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_11_11, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_9));
#line 4396 "varset.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__TypeInfo_11_11, mercury__varset__TypeCtorInfo_12_12, mercury__varset__Names_5, mercury__varset__Id_7, &mercury__varset__conv0_Name_8);
    }
#line 39 "map.opt"
    if (mercury__varset__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        *mercury__varset__Name_8 = ((MR_String) mercury__varset__conv0_Name_8);
#line 39 "map.opt"
        mercury__varset__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 427 "varset.m"
    return mercury__varset__succeeded;
#line 427 "varset.m"
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
#line 421 "varset.m"
  {
#line 421 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 421 "varset.m"
    MR_String mercury__varset__Name0_9;
#line 427 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_10_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 427 "varset.m"
    MR_Word mercury__varset__TypeInfo_11_19;
#line 427 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_12_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 427 "varset.m"
    MR_Word mercury__varset__Names_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_5, (MR_Integer) 1)));
#line 427 "varset.m"
    MR_Word mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_5, (MR_Integer) 0)));
#line 427 "varset.m"
    MR_Word mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_5, (MR_Integer) 2)));
#line 39 "map.opt"
    MR_Box mercury__varset__conv0_Name0_9;

#line 4456 "varset.c"
    {
#line 4458 "varset.c"
      mercury__varset__TypeInfo_11_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4460 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_11_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_10_18));
#line 4462 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_11_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_12));
#line 4464 "varset.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_12, mercury__varset__TypeInfo_11_19, mercury__varset__TypeCtorInfo_12_20, mercury__varset__Names_16, mercury__varset__Id_6, &mercury__varset__conv0_Name0_9);
    }
#line 39 "map.opt"
    if (mercury__varset__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__varset__Name0_9 = ((MR_String) mercury__varset__conv0_Name0_9);
#line 39 "map.opt"
        mercury__varset__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 421 "varset.m"
    if (mercury__varset__succeeded)
#line 420 "varset.m"
      *mercury__varset__Name_8 = mercury__varset__Name0_9;
#line 421 "varset.m"
    else
#line 422 "varset.m"
      {
#line 422 "varset.m"
        MR_Integer mercury__varset__VarNum_10 = (MR_Integer) mercury__varset__Id_6;
#line 422 "varset.m"
        MR_String mercury__varset__NumStr_11;

#line 292 "string.opt"
        {
#line 292 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_10, (MR_Integer) 10, &mercury__varset__NumStr_11);
        }
#line 424 "varset.m"
        {
#line 424 "varset.m"
          mercury__string__append_3_p_2(mercury__varset__Prefix_7, mercury__varset__NumStr_11, mercury__varset__Name_8);
#line 424 "varset.m"
          return;
        }
#line 422 "varset.m"
      }
#line 421 "varset.m"
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
#line 743 "varset.m"
  {
#line 743 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 743 "varset.m"
    MR_String mercury__varset__S2_8;

#line 743 "varset.m"
    {
#line 743 "varset.m"
      mercury__varset__lookup_name_4_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__VS1_5, mercury__varset__V_6, mercury__varset__S_7, &mercury__varset__S2_8);
    }
#line 743 "varset.m"
    return mercury__varset__S2_8;
#line 743 "varset.m"
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
#line 412 "varset.m"
  {
#line 412 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 412 "varset.m"
    MR_String mercury__varset__Name0_7;
#line 427 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_10_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 427 "varset.m"
    MR_Word mercury__varset__TypeInfo_11_18;
#line 427 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_12_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 427 "varset.m"
    MR_Word mercury__varset__Names_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 1)));
#line 427 "varset.m"
    MR_Word mercury__varset__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 0)));
#line 427 "varset.m"
    MR_Word mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet_4, (MR_Integer) 2)));
#line 39 "map.opt"
    MR_Box mercury__varset__conv0_Name0_7;

#line 4579 "varset.c"
    {
#line 4581 "varset.c"
      mercury__varset__TypeInfo_11_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4583 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_11_18, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_10_17));
#line 4585 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_11_18, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
#line 4587 "varset.c"
    }
#line 39 "map.opt"
    {
#line 39 "map.opt"
      mercury__varset__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__TypeInfo_11_18, mercury__varset__TypeCtorInfo_12_19, mercury__varset__Names_15, mercury__varset__Id_5, &mercury__varset__conv0_Name0_7);
    }
#line 39 "map.opt"
    if (mercury__varset__succeeded)
#line 39 "map.opt"
      {
#line 39 "map.opt"
        mercury__varset__Name0_7 = ((MR_String) mercury__varset__conv0_Name0_7);
#line 39 "map.opt"
        mercury__varset__succeeded = MR_TRUE;
#line 39 "map.opt"
      }
#line 412 "varset.m"
    if (mercury__varset__succeeded)
#line 411 "varset.m"
      *mercury__varset__Name_6 = mercury__varset__Name0_7;
#line 412 "varset.m"
    else
#line 413 "varset.m"
      {
#line 413 "varset.m"
        MR_Integer mercury__varset__VarNum_8 = (MR_Integer) mercury__varset__Id_5;
#line 413 "varset.m"
        MR_String mercury__varset__NumStr_9;

#line 292 "string.opt"
        {
#line 292 "string.opt"
          mercury__string__int_to_base_string_3_p_0(mercury__varset__VarNum_8, (MR_Integer) 10, &mercury__varset__NumStr_9);
        }
#line 415 "varset.m"
        {
#line 415 "varset.m"
          mercury__string__append_3_p_2((MR_String) "V_", mercury__varset__NumStr_9, mercury__varset__Name_6);
#line 415 "varset.m"
          return;
        }
#line 413 "varset.m"
      }
#line 412 "varset.m"
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
#line 740 "varset.m"
  {
#line 740 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 740 "varset.m"
    MR_String mercury__varset__S_6;

#line 740 "varset.m"
    {
#line 740 "varset.m"
      mercury__varset__lookup_name_3_p_0(mercury__varset__TypeInfo_for_T_7, mercury__varset__VS_4, mercury__varset__V_5, &mercury__varset__S_6);
    }
#line 740 "varset.m"
    return mercury__varset__S_6;
#line 740 "varset.m"
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
#line 402 "varset.m"
  {
#line 402 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 402 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 402 "varset.m"
    MR_Word mercury__varset__TypeInfo_20_20;
#line 402 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_21_21;
#line 402 "varset.m"
    MR_Word mercury__varset__Names0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 402 "varset.m"
    MR_Word mercury__varset__Names_9;
#line 403 "varset.m"
    MR_Word mercury__varset__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 403 "varset.m"
    MR_Word mercury__varset__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 405 "varset.m"
    MR_Word mercury__varset__V_15_15;
#line 405 "varset.m"
    MR_Word mercury__varset__V_17_17;
#line 405 "varset.m"
    MR_Word mercury__varset__V_16_16;

#line 4706 "varset.c"
    {
#line 4708 "varset.c"
      mercury__varset__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4710 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_19_19));
#line 4712 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_20_20, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_18));
#line 4714 "varset.c"
    }
#line 4716 "varset.c"
    mercury__varset__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 117 "map.opt"
    {
#line 117 "map.opt"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_18, mercury__varset__TypeInfo_20_20, mercury__varset__TypeCtorInfo_21_21, mercury__varset__Id_5, ((MR_Box) (mercury__varset__Name_6)), mercury__varset__Names0_8, &mercury__varset__Names_9);
    }
#line 405 "varset.m"
    mercury__varset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 0)));
#line 405 "varset.m"
    mercury__varset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 1)));
#line 405 "varset.m"
    mercury__varset__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_10, (MR_Integer) 2)));
#line 405 "varset.m"
    {
#line 405 "varset.m"
      MR_Word base;
#line 405 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 405 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_11 = base;
#line 405 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__V_15_15));
#line 405 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
#line 405 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__V_17_17));
#line 405 "varset.m"
    }
#line 402 "varset.m"
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
#line 737 "varset.m"
  {
#line 737 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 737 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_9;

#line 737 "varset.m"
    {
#line 737 "varset.m"
      mercury__varset__name_var_4_p_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__V_6, mercury__varset__S_7, mercury__varset__STATE_VARIABLE_VS_0_8, &mercury__varset__STATE_VARIABLE_VS_9);
    }
#line 737 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_9;
#line 737 "varset.m"
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
#line 383 "varset.m"
  {
#line 383 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 383 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_12_12;
#line 383 "varset.m"
    MR_Word mercury__varset__TypeInfo_13_13;
#line 383 "varset.m"
    MR_Word mercury__varset__MaxId0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet0_3, (MR_Integer) 0)));
#line 383 "varset.m"
    MR_Word mercury__varset__N0_6 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 383 "varset.m"
    MR_Word mercury__varset__RevVars_7;
#line 383 "varset.m"
    MR_Word mercury__varset__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 384 "varset.m"
    MR_Word mercury__varset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet0_3, (MR_Integer) 1)));
#line 384 "varset.m"
    MR_Word mercury__varset__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__VarSet0_3, (MR_Integer) 2)));
#line 387 "varset.m"
    MR_Word mercury__varset__conv0_Vars_4;

#line 386 "varset.m"
    {
#line 386 "varset.m"
      mercury__varset__RevVars_7 = mercury__varset__vars_2_3_f_0(mercury__varset__TypeInfo_for_T_11, mercury__varset__N0_6, mercury__varset__MaxId0_5, mercury__varset__V_8_8);
    }
#line 4821 "varset.c"
    mercury__varset__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 4823 "varset.c"
    {
#line 4825 "varset.c"
      mercury__varset__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4827 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_13_13, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_12_12));
#line 4829 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_13_13, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_11));
#line 4831 "varset.c"
    }
#line 387 "varset.m"
    {
#line 387 "varset.m"
      mercury__list__reverse_2_p_0(mercury__varset__TypeInfo_13_13, (MR_Word) mercury__varset__RevVars_7, &mercury__varset__conv0_Vars_4);
    }
#line 387 "varset.m"
    *mercury__varset__Vars_4 = (MR_Word) mercury__varset__conv0_Vars_4;
#line 383 "varset.m"
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
#line 734 "varset.m"
  {
#line 734 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 734 "varset.m"
    MR_Word mercury__varset__Vs_4;

#line 734 "varset.m"
    {
#line 734 "varset.m"
      mercury__varset__vars_2_p_0(mercury__varset__TypeInfo_for_T_5, mercury__varset__VS_3, &mercury__varset__Vs_4);
    }
#line 734 "varset.m"
    return mercury__varset__Vs_4;
#line 734 "varset.m"
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
#line 375 "varset.m"
  {
#line 375 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 375 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 375 "varset.m"
    MR_Word mercury__varset__TypeInfo_16_16;
#line 375 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_17_17;
#line 375 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_18_18;
#line 375 "varset.m"
    MR_Word mercury__varset__TypeInfo_19_19;
#line 375 "varset.m"
    MR_Word mercury__varset__MaxId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0)));
#line 375 "varset.m"
    MR_Word mercury__varset__Names0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1)));
#line 375 "varset.m"
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2)));
#line 375 "varset.m"
    MR_Word mercury__varset__Names_9;
#line 375 "varset.m"
    MR_Word mercury__varset__Values_10;
#line 377 "varset.m"
    MR_Word mercury__varset__conv0_Names_9;
#line 378 "varset.m"
    MR_Word mercury__varset__conv1_Values_10;

#line 4915 "varset.c"
    {
#line 4917 "varset.c"
      mercury__varset__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4919 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_15_15));
#line 4921 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 4923 "varset.c"
    }
#line 4925 "varset.c"
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 377 "varset.m"
    {
#line 377 "varset.m"
      mercury__map__delete_sorted_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeCtorInfo_17_17, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Names0_7, &mercury__varset__conv0_Names_9);
    }
#line 377 "varset.m"
    mercury__varset__Names_9 = (MR_Word) mercury__varset__conv0_Names_9;
#line 4934 "varset.c"
    mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 4936 "varset.c"
    {
#line 4938 "varset.c"
      mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4940 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
#line 4942 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 4944 "varset.c"
    }
#line 378 "varset.m"
    {
#line 378 "varset.m"
      mercury__map__delete_sorted_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeInfo_19_19, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Values0_8, &mercury__varset__conv1_Values_10);
    }
#line 378 "varset.m"
    mercury__varset__Values_10 = (MR_Word) mercury__varset__conv1_Values_10;
#line 379 "varset.m"
    {
#line 379 "varset.m"
      MR_Word base;
#line 379 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 379 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_12 = base;
#line 379 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_6));
#line 379 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
#line 379 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
#line 379 "varset.m"
    }
#line 375 "varset.m"
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
#line 731 "varset.m"
  {
#line 731 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 731 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_7;

#line 731 "varset.m"
    {
#line 731 "varset.m"
      mercury__varset__delete_sorted_vars_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__Vs_5, mercury__varset__STATE_VARIABLE_VS_0_6, &mercury__varset__STATE_VARIABLE_VS_7);
    }
#line 731 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_7;
#line 731 "varset.m"
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
#line 369 "varset.m"
  {
#line 369 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 369 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 369 "varset.m"
    MR_Word mercury__varset__TypeInfo_16_16;
#line 369 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_17_17;
#line 369 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_18_18;
#line 369 "varset.m"
    MR_Word mercury__varset__TypeInfo_19_19;
#line 369 "varset.m"
    MR_Word mercury__varset__MaxId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0)));
#line 369 "varset.m"
    MR_Word mercury__varset__Names0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1)));
#line 369 "varset.m"
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2)));
#line 369 "varset.m"
    MR_Word mercury__varset__Names_9;
#line 369 "varset.m"
    MR_Word mercury__varset__Values_10;
#line 371 "varset.m"
    MR_Word mercury__varset__conv0_Names_9;
#line 372 "varset.m"
    MR_Word mercury__varset__conv1_Values_10;

#line 5046 "varset.c"
    {
#line 5048 "varset.c"
      mercury__varset__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5050 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_15_15));
#line 5052 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 5054 "varset.c"
    }
#line 5056 "varset.c"
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 371 "varset.m"
    {
#line 371 "varset.m"
      mercury__map__delete_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeCtorInfo_17_17, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Names0_7, &mercury__varset__conv0_Names_9);
    }
#line 371 "varset.m"
    mercury__varset__Names_9 = (MR_Word) mercury__varset__conv0_Names_9;
#line 5065 "varset.c"
    mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 5067 "varset.c"
    {
#line 5069 "varset.c"
      mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5071 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
#line 5073 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 5075 "varset.c"
    }
#line 372 "varset.m"
    {
#line 372 "varset.m"
      mercury__map__delete_list_3_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeInfo_19_19, (MR_Word) mercury__varset__DeleteVars_4, (MR_Word) mercury__varset__Values0_8, &mercury__varset__conv1_Values_10);
    }
#line 372 "varset.m"
    mercury__varset__Values_10 = (MR_Word) mercury__varset__conv1_Values_10;
#line 373 "varset.m"
    {
#line 373 "varset.m"
      MR_Word base;
#line 373 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 373 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_12 = base;
#line 373 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_6));
#line 373 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
#line 373 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
#line 373 "varset.m"
    }
#line 369 "varset.m"
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
#line 728 "varset.m"
  {
#line 728 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 728 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_7;

#line 728 "varset.m"
    {
#line 728 "varset.m"
      mercury__varset__delete_vars_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__Vs_5, mercury__varset__STATE_VARIABLE_VS_0_6, &mercury__varset__STATE_VARIABLE_VS_7);
    }
#line 728 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_7;
#line 728 "varset.m"
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
#line 361 "varset.m"
  {
#line 361 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 361 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 361 "varset.m"
    MR_Word mercury__varset__TypeInfo_16_16;
#line 361 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_17_17;
#line 361 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_18_18;
#line 361 "varset.m"
    MR_Word mercury__varset__TypeInfo_19_19;
#line 361 "varset.m"
    MR_Word mercury__varset__MaxId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 0)));
#line 361 "varset.m"
    MR_Word mercury__varset__Names0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 1)));
#line 361 "varset.m"
    MR_Word mercury__varset__Values0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_11, (MR_Integer) 2)));
#line 361 "varset.m"
    MR_Word mercury__varset__Names_9;
#line 361 "varset.m"
    MR_Word mercury__varset__Values_10;
#line 61 "tree234.opt"
    MR_Word mercury__varset__V_7_26;
#line 61 "tree234.opt"
    MR_Word mercury__varset__conv0_Names_9;
#line 61 "tree234.opt"
    MR_Word mercury__varset__V_7_33;
#line 61 "tree234.opt"
    MR_Word mercury__varset__conv1_Values_10;

#line 5181 "varset.c"
    {
#line 5183 "varset.c"
      mercury__varset__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5185 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_15_15));
#line 5187 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_16_16, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 5189 "varset.c"
    }
#line 5191 "varset.c"
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 61 "tree234.opt"
    {
#line 61 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeCtorInfo_17_17, (MR_Word) mercury__varset__Names0_7, ((MR_Box) (mercury__varset__DeleteVar_4)), &mercury__varset__conv0_Names_9, &mercury__varset__V_7_26);
    }
#line 61 "tree234.opt"
    mercury__varset__Names_9 = (MR_Word) mercury__varset__conv0_Names_9;
#line 5200 "varset.c"
    mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
#line 5202 "varset.c"
    {
#line 5204 "varset.c"
      mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5206 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
#line 5208 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_14));
#line 5210 "varset.c"
    }
#line 61 "tree234.opt"
    {
#line 61 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__varset__TypeInfo_16_16, mercury__varset__TypeInfo_19_19, (MR_Word) mercury__varset__Values0_8, ((MR_Box) (mercury__varset__DeleteVar_4)), &mercury__varset__conv1_Values_10, &mercury__varset__V_7_33);
    }
#line 61 "tree234.opt"
    mercury__varset__Values_10 = (MR_Word) mercury__varset__conv1_Values_10;
#line 365 "varset.m"
    {
#line 365 "varset.m"
      MR_Word base;
#line 365 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 365 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_12 = base;
#line 365 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_6));
#line 365 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__Names_9));
#line 365 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_10));
#line 365 "varset.m"
    }
#line 361 "varset.m"
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
#line 725 "varset.m"
  {
#line 725 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 725 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_VS_7;

#line 725 "varset.m"
    {
#line 725 "varset.m"
      mercury__varset__delete_var_3_p_0(mercury__varset__TypeInfo_for_T_9, mercury__varset__V_5, mercury__varset__STATE_VARIABLE_VS_0_6, &mercury__varset__STATE_VARIABLE_VS_7);
    }
#line 725 "varset.m"
    return mercury__varset__STATE_VARIABLE_VS_7;
#line 725 "varset.m"
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
#line 340 "varset.m"
  {
#line 340 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 340 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_14_14;
#line 340 "varset.m"
    MR_Word mercury__varset__TypeInfo_15_15;
#line 340 "varset.m"
    MR_Word mercury__varset__RevNewVars_8;
#line 340 "varset.m"
    MR_Word mercury__varset__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 343 "varset.m"
    MR_Word mercury__varset__conv0_NewVars_6;

#line 341 "varset.m"
    {
#line 341 "varset.m"
      mercury__varset__new_vars_2_5_p_0(mercury__varset__TypeInfo_for_T_13, mercury__varset__NumVars_5, mercury__varset__V_11_11, &mercury__varset__RevNewVars_8, mercury__varset__STATE_VARIABLE_VarSet_0_9, mercury__varset__STATE_VARIABLE_VarSet_10);
    }
#line 5305 "varset.c"
    mercury__varset__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5307 "varset.c"
    {
#line 5309 "varset.c"
      mercury__varset__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5311 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_15_15, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_14_14));
#line 5313 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_15_15, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_13));
#line 5315 "varset.c"
    }
#line 343 "varset.m"
    {
#line 343 "varset.m"
      mercury__list__reverse_2_p_0(mercury__varset__TypeInfo_15_15, (MR_Word) mercury__varset__RevNewVars_8, &mercury__varset__conv0_NewVars_6);
    }
#line 343 "varset.m"
    *mercury__varset__NewVars_6 = (MR_Word) mercury__varset__conv0_NewVars_6;
#line 340 "varset.m"
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
#line 331 "varset.m"
  {
#line 331 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 331 "varset.m"
    MR_Word mercury__varset__Values_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 2)));
#line 331 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_MaxId_0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 0)));
#line 331 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_Names_0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 1)));
#line 331 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_MaxId_13;
#line 331 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_Names_14;
#line 331 "varset.m"
    MR_Integer mercury__varset__V_4_21;
#line 331 "varset.m"
    MR_Integer mercury__varset__V0_5_22 = (MR_Integer) mercury__varset__STATE_VARIABLE_MaxId_0_11;

#line 102 "term.opt"
    mercury__varset__V_4_21 = (mercury__varset__V0_5_22 + (MR_Integer) 1);
#line 101 "term.opt"
    *mercury__varset__Var_6 = (MR_Word) mercury__varset__V_4_21;
#line 101 "term.opt"
    mercury__varset__STATE_VARIABLE_MaxId_13 = (MR_Word) mercury__varset__V_4_21;
#line 335 "varset.m"
    if ((mercury__varset__MaybeName_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "varset.m"
      mercury__varset__STATE_VARIABLE_Names_14 = mercury__varset__STATE_VARIABLE_Names_0_12;
#line 335 "varset.m"
    else
#line 336 "varset.m"
      {
#line 336 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 336 "varset.m"
        MR_Word mercury__varset__TypeInfo_19_19;
#line 336 "varset.m"
        MR_Word mercury__varset__TypeCtorInfo_20_20;
#line 336 "varset.m"
        MR_String mercury__varset__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__varset__MaybeName_5, (MR_Integer) 0)));

#line 5386 "varset.c"
        {
#line 5388 "varset.c"
          mercury__varset__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5390 "varset.c"
          MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_18_18));
#line 5392 "varset.c"
          MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_19_19, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_17));
#line 5394 "varset.c"
        }
#line 5396 "varset.c"
        mercury__varset__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 117 "map.opt"
        {
#line 117 "map.opt"
          mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_17, mercury__varset__TypeInfo_19_19, mercury__varset__TypeCtorInfo_20_20, *mercury__varset__Var_6, ((MR_Box) (mercury__varset__Name_10)), mercury__varset__STATE_VARIABLE_Names_0_12, &mercury__varset__STATE_VARIABLE_Names_14);
        }
#line 336 "varset.m"
      }
#line 331 "varset.m"
    {
#line 331 "varset.m"
      MR_Word base;
#line 331 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 331 "varset.m"
      *mercury__varset__HeadVar__4_4 = base;
#line 331 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__STATE_VARIABLE_MaxId_13));
#line 331 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__STATE_VARIABLE_Names_14));
#line 331 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_9));
#line 331 "varset.m"
    }
#line 331 "varset.m"
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
#line 325 "varset.m"
  {
#line 325 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 325 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_25_25;
#line 325 "varset.m"
    MR_Word mercury__varset__TypeInfo_26_26;
#line 325 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_27_27;
#line 325 "varset.m"
    MR_Word mercury__varset__Values_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 2)));
#line 325 "varset.m"
    MR_Integer mercury__varset__N_10;
#line 325 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_MaxId_0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 0)));
#line 325 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_Names_0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 1)));
#line 325 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_MaxId_13;
#line 325 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_Names_14;
#line 325 "varset.m"
    MR_String mercury__varset__V_16_16;
#line 325 "varset.m"
    MR_String mercury__varset__V_28_28;
#line 325 "varset.m"
    MR_String mercury__varset__V_30_30;
#line 325 "varset.m"
    MR_Integer mercury__varset__V0_5_32 = (MR_Integer) mercury__varset__STATE_VARIABLE_MaxId_0_11;

#line 102 "term.opt"
    mercury__varset__N_10 = (mercury__varset__V0_5_32 + (MR_Integer) 1);
#line 101 "term.opt"
    *mercury__varset__Var_6 = (MR_Word) mercury__varset__N_10;
#line 101 "term.opt"
    mercury__varset__STATE_VARIABLE_MaxId_13 = (MR_Word) mercury__varset__N_10;
#line 292 "string.opt"
    {
#line 292 "string.opt"
      mercury__string__int_to_base_string_3_p_0(mercury__varset__N_10, (MR_Integer) 10, &mercury__varset__V_28_28);
    }
#line 255 "string.opt"
    {
#line 255 "string.opt"
      mercury__string__append_3_p_2((MR_String) "_", mercury__varset__V_28_28, &mercury__varset__V_30_30);
    }
#line 255 "string.opt"
    {
#line 255 "string.opt"
      mercury__string__append_3_p_2(mercury__varset__Name_5, mercury__varset__V_30_30, &mercury__varset__V_16_16);
    }
#line 5493 "varset.c"
    mercury__varset__TypeCtorInfo_25_25 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5495 "varset.c"
    {
#line 5497 "varset.c"
      mercury__varset__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5499 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_25_25));
#line 5501 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_26_26, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_24));
#line 5503 "varset.c"
    }
#line 5505 "varset.c"
    mercury__varset__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 117 "map.opt"
    {
#line 117 "map.opt"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_24, mercury__varset__TypeInfo_26_26, mercury__varset__TypeCtorInfo_27_27, *mercury__varset__Var_6, ((MR_Box) (mercury__varset__V_16_16)), mercury__varset__STATE_VARIABLE_Names_0_12, &mercury__varset__STATE_VARIABLE_Names_14);
    }
#line 325 "varset.m"
    {
#line 325 "varset.m"
      MR_Word base;
#line 325 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 325 "varset.m"
      *mercury__varset__HeadVar__4_4 = base;
#line 325 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__STATE_VARIABLE_MaxId_13));
#line 325 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__STATE_VARIABLE_Names_14));
#line 325 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_9));
#line 325 "varset.m"
    }
#line 325 "varset.m"
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
#line 320 "varset.m"
  {
#line 320 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 320 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_17_17;
#line 320 "varset.m"
    MR_Word mercury__varset__TypeInfo_18_18;
#line 320 "varset.m"
    MR_Word mercury__varset__TypeCtorInfo_19_19;
#line 320 "varset.m"
    MR_Word mercury__varset__Values_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 2)));
#line 320 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_MaxId_0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 0)));
#line 320 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_Names_0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__3_3, (MR_Integer) 1)));
#line 320 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_MaxId_12;
#line 320 "varset.m"
    MR_Word mercury__varset__STATE_VARIABLE_Names_13;
#line 320 "varset.m"
    MR_Integer mercury__varset__V_4_20;
#line 320 "varset.m"
    MR_Integer mercury__varset__V0_5_21 = (MR_Integer) mercury__varset__STATE_VARIABLE_MaxId_0_10;

#line 102 "term.opt"
    mercury__varset__V_4_20 = (mercury__varset__V0_5_21 + (MR_Integer) 1);
#line 101 "term.opt"
    *mercury__varset__Var_6 = (MR_Word) mercury__varset__V_4_20;
#line 101 "term.opt"
    mercury__varset__STATE_VARIABLE_MaxId_12 = (MR_Word) mercury__varset__V_4_20;
#line 5579 "varset.c"
    mercury__varset__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
#line 5581 "varset.c"
    {
#line 5583 "varset.c"
      mercury__varset__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5585 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 0) = ((MR_Box) (mercury__varset__TypeCtorInfo_17_17));
#line 5587 "varset.c"
      MR_hl_field(MR_mktag(0), mercury__varset__TypeInfo_18_18, 1) = ((MR_Box) (mercury__varset__TypeInfo_for_T_16));
#line 5589 "varset.c"
    }
#line 5591 "varset.c"
    mercury__varset__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 117 "map.opt"
    {
#line 117 "map.opt"
      mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__varset__TypeInfo_for_T_16, mercury__varset__TypeInfo_18_18, mercury__varset__TypeCtorInfo_19_19, *mercury__varset__Var_6, ((MR_Box) (mercury__varset__Name_5)), mercury__varset__STATE_VARIABLE_Names_0_11, &mercury__varset__STATE_VARIABLE_Names_13);
    }
#line 320 "varset.m"
    {
#line 320 "varset.m"
      MR_Word base;
#line 320 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 320 "varset.m"
      *mercury__varset__HeadVar__4_4 = base;
#line 320 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__STATE_VARIABLE_MaxId_12));
#line 320 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__STATE_VARIABLE_Names_13));
#line 320 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__Values_9));
#line 320 "varset.m"
    }
#line 320 "varset.m"
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
#line 314 "varset.m"
  {
#line 314 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 314 "varset.m"
    MR_Word mercury__varset__MaxId0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_8, (MR_Integer) 0)));
#line 314 "varset.m"
    MR_Word mercury__varset__MaxId_7;
#line 314 "varset.m"
    MR_Word mercury__varset__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_8, (MR_Integer) 1)));
#line 314 "varset.m"
    MR_Word mercury__varset__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__STATE_VARIABLE_VarSet_0_8, (MR_Integer) 2)));
#line 314 "varset.m"
    MR_Integer mercury__varset__V_4_17;
#line 314 "varset.m"
    MR_Integer mercury__varset__V0_5_18 = (MR_Integer) mercury__varset__MaxId0_6;

#line 102 "term.opt"
    mercury__varset__V_4_17 = (mercury__varset__V0_5_18 + (MR_Integer) 1);
#line 101 "term.opt"
    *mercury__varset__Var_4 = (MR_Word) mercury__varset__V_4_17;
#line 101 "term.opt"
    mercury__varset__MaxId_7 = (MR_Word) mercury__varset__V_4_17;
#line 317 "varset.m"
    {
#line 317 "varset.m"
      MR_Word base;
#line 317 "varset.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 317 "varset.m"
      *mercury__varset__STATE_VARIABLE_VarSet_9 = base;
#line 317 "varset.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__varset__MaxId_7));
#line 317 "varset.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__varset__V_11_11));
#line 317 "varset.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__varset__V_12_12));
#line 317 "varset.m"
    }
#line 314 "varset.m"
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
#line 309 "varset.m"
  {
#line 309 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 309 "varset.m"
    MR_Word mercury__varset__VarSupply_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 0)));
#line 309 "varset.m"
    MR_Integer mercury__varset__V_2_6 = (MR_Integer) mercury__varset__VarSupply_2;
#line 309 "varset.m"
    MR_Word mercury__varset__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 1)));
#line 309 "varset.m"
    MR_Word mercury__varset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__varset__HeadVar__1_1, (MR_Integer) 2)));

#line 100 "term.opt"
    mercury__varset__succeeded = (mercury__varset__V_2_6 == (MR_Integer) 0);
#line 309 "varset.m"
    return mercury__varset__succeeded;
#line 309 "varset.m"
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
#line 302 "varset.m"
  {
#line 302 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 302 "varset.m"
    MR_Word mercury__varset__VarSupply_2 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 302 "varset.m"
    MR_Word mercury__varset__Names_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 302 "varset.m"
    MR_Word mercury__varset__Values_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 302 "varset.m"
    *mercury__varset__HeadVar__1_1 = (MR_Word) &mercury__varset_scalar_common_2[1];
#line 302 "varset.m"
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
#line 302 "varset.m"
  {
#line 302 "varset.m"
    MR_bool mercury__varset__succeeded;
#line 302 "varset.m"
    MR_Word mercury__varset__VS_2 = (MR_Word) &mercury__varset_scalar_common_2[1];
#line 302 "varset.m"
    MR_Word mercury__varset__VarSupply_4 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 302 "varset.m"
    MR_Word mercury__varset__Names_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 302 "varset.m"
    MR_Word mercury__varset__Values_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 302 "varset.m"
    return mercury__varset__VS_2;
#line 302 "varset.m"
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
