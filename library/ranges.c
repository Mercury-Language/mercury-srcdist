/*
** Automatically generated from `ranges.m'
** by the Mercury compiler,
** version DEV
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


/* :- module ranges. */
/* :- implementation. */

/*
INIT mercury__ranges__init
ENDINIT
*/

#include "ranges.mih"
#include "ranges.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
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
#include "term_conversion.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"



struct mercury__ranges__nondet_member_2_p_0_env_0_s {
  MR_Integer * mercury__ranges__nondet_member_2_p_0_env_0__N_3;
  MR_Cont mercury__ranges__nondet_member_2_p_0_env_0__cont;
  void * mercury__ranges__nondet_member_2_p_0_env_0__cont_env_ptr;
  MR_Integer mercury__ranges__nondet_member_2_p_0_env_0__L_5;
  MR_Integer mercury__ranges__nondet_member_2_p_0_env_0__U_6;
};


static const MR_DuFunctorDesc mercury__ranges__ranges__du_functor_desc_ranges_0_0;

static const MR_PseudoTypeInfo mercury__ranges__ranges__field_types_ranges_0_1[3];

static const MR_DuFunctorDesc mercury__ranges__ranges__du_functor_desc_ranges_0_1;

static const MR_DuFunctorDescPtr mercury__ranges__ranges__du_stag_ordered_ranges_0_0[1];

static const MR_DuFunctorDescPtr mercury__ranges__ranges__du_stag_ordered_ranges_0_1[1];

static const MR_DuPtagLayout mercury__ranges__ranges__du_ptag_ordered_ranges_0[2];

static const MR_DuFunctorDescPtr mercury__ranges__ranges__du_name_ordered_ranges_0[2];

static const MR_Integer mercury__ranges__ranges__functor_number_map_ranges_0[2];

static MR_bool MR_CALL 
mercury__ranges____Unify____ranges_0_0_10001(
  MR_Box mercury__ranges__wrapper_arg_1,
  MR_Box mercury__ranges__wrapper_arg_2);

static void MR_CALL 
mercury__ranges____Compare____ranges_0_0_10001(
  MR_Box * mercury__ranges__wrapper_arg_1,
  MR_Box mercury__ranges__wrapper_arg_2,
  MR_Box mercury__ranges__wrapper_arg_3);

static MR_Word MR_CALL 
mercury__ranges__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Integer mercury__ranges__Var_12,
  MR_Word mercury__ranges__HeadVar__2_2);

static MR_Integer MR_CALL 
mercury__ranges__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__ranges__foldl__ho8_4_p_in__list_0(
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Word mercury__ranges__HeadVar__3_3,
  MR_Word * mercury__ranges__HeadVar__4_4);

static void MR_CALL 
mercury__ranges__compare_lex_2_7_p_0(
  MR_Word * mercury__ranges__Result_8,
  MR_Integer mercury__ranges__STATE_VARIABLE_LBA_0_17,
  MR_Integer mercury__ranges__STATE_VARIABLE_UBA_0_18,
  MR_Integer mercury__ranges__STATE_VARIABLE_LBB_0_19,
  MR_Integer mercury__ranges__STATE_VARIABLE_UBB_0_20,
  MR_Word mercury__ranges__STATE_VARIABLE_NextA_0_21,
  MR_Word mercury__ranges__STATE_VARIABLE_NextB_0_22);

static MR_Word MR_CALL 
mercury__ranges__contraction_0_4_f_0(
  MR_Integer mercury__ranges__L0_1,
  MR_Integer mercury__ranges__H0_2,
  MR_Word mercury__ranges__HeadVar__3_3,
  MR_Integer mercury__ranges__C_4);

static MR_Word MR_CALL 
mercury__ranges__diff_na_nb_4_f_0(
  MR_Integer mercury__ranges__UA_6,
  MR_Word mercury__ranges__As0_7,
  MR_Integer mercury__ranges__UB_8,
  MR_Word mercury__ranges__Bs0_9);

static MR_Word MR_CALL 
mercury__ranges__diff_a_nb_3_f_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Integer mercury__ranges__UB_2,
  MR_Word mercury__ranges__Bs0_3);

static MR_Word MR_CALL 
mercury__ranges__n_diff_na_b_4_f_0(
  MR_Integer mercury__ranges__L_1,
  MR_Integer mercury__ranges__HeadVar__2_2,
  MR_Word mercury__ranges__HeadVar__3_3,
  MR_Word mercury__ranges__HeadVar__4_4);

static MR_Word MR_CALL 
mercury__ranges__int_a_nb_3_f_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Integer mercury__ranges__UB_2,
  MR_Word mercury__ranges__Bs0_3);

static MR_Word MR_CALL 
mercury__ranges__int_na_b_3_f_0(
  MR_Integer mercury__ranges__UA_1,
  MR_Word mercury__ranges__As0_2,
  MR_Word mercury__ranges__HeadVar__3_3);

static MR_Word MR_CALL 
mercury__ranges__n_union_na_b_4_f_0(
  MR_Integer mercury__ranges__L_1,
  MR_Integer mercury__ranges__HeadVar__2_2,
  MR_Word mercury__ranges__HeadVar__3_3,
  MR_Word mercury__ranges__HeadVar__4_4);

static MR_Word MR_CALL 
mercury__ranges__n_union_a_nb_4_f_0(
  MR_Integer mercury__ranges__L_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Integer mercury__ranges__HeadVar__3_3,
  MR_Word mercury__ranges__HeadVar__4_4);

static MR_Integer MR_CALL 
mercury__ranges__element_index_2_f_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Integer mercury__ranges__I_2);

static void MR_CALL 
mercury__ranges__nondet_member_2_p_0_1(
  void * mercury__ranges__env_ptr_arg);


static /* final */ const MR_Box mercury__ranges_scalar_common_1[2][3];

static /* final */ const MR_Box mercury__ranges_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__ranges_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__ranges_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__ranges_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ranges_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__ranges_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ranges_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ranges_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "ranges.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "version_array.mh"

#line 362 "ranges.m"
MR_Word 
ML_ranges_empty(void)
#line 362 "ranges.m"
{
#line 362 "ranges.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__ranges__empty_0_f_0();
	return ret_value;
}

#line 366 "ranges.m"
MR_bool 
ML_ranges_is_empty(
  MR_Word mercury__ranges__HeadVar__1_1)
#line 366 "ranges.m"
{
#line 366 "ranges.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__ranges__is_empty_1_p_0((MR_Word) mercury__ranges__HeadVar__1_1);
	return ret_value;
}

#line 372 "ranges.m"
MR_Word 
ML_ranges_universe(void)
#line 372 "ranges.m"
{
#line 372 "ranges.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__ranges__universe_0_f_0();
	return ret_value;
}

#line 385 "ranges.m"
MR_bool 
ML_ranges_split(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Integer * mercury__ranges__HeadVar__2_2,
  MR_Integer * mercury__ranges__Max_6,
  MR_Word * mercury__ranges__Rest_7)
#line 385 "ranges.m"
{
#line 385 "ranges.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__ranges__split_4_p_0((MR_Word) mercury__ranges__HeadVar__1_1, (MR_Integer *) mercury__ranges__HeadVar__2_2, (MR_Integer *) mercury__ranges__Max_6, (MR_Word *) mercury__ranges__Rest_7);
	return ret_value;
}

#line 393 "ranges.m"
MR_Word 
ML_ranges_insert(
  MR_Integer mercury__ranges__N_4,
  MR_Word mercury__ranges__As_5)
#line 393 "ranges.m"
{
#line 393 "ranges.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__ranges__insert_2_f_0((MR_Integer) mercury__ranges__N_4, (MR_Word) mercury__ranges__As_5);
	return ret_value;
}

#line 402 "ranges.m"
MR_Integer 
ML_ranges_size(
  MR_Word mercury__ranges__HeadVar__1_1)
#line 402 "ranges.m"
{
#line 402 "ranges.m"
	MR_Integer ret_value;
	ret_value = (MR_Integer)mercury__ranges__size_1_f_0((MR_Word) mercury__ranges__HeadVar__1_1);
	return ret_value;
}


static const MR_DuFunctorDesc mercury__ranges__ranges__du_functor_desc_ranges_0_0 = {
  (MR_String) "nil",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__ranges__ranges__field_types_ranges_0_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__ranges__ranges__type_ctor_info_ranges_0
};

static const MR_DuFunctorDesc mercury__ranges__ranges__du_functor_desc_ranges_0_1 = {
  (MR_String) "range",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__ranges__ranges__field_types_ranges_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__ranges__ranges__du_stag_ordered_ranges_0_0[1] = {
  &mercury__ranges__ranges__du_functor_desc_ranges_0_0
};

static const MR_DuFunctorDescPtr mercury__ranges__ranges__du_stag_ordered_ranges_0_1[1] = {
  &mercury__ranges__ranges__du_functor_desc_ranges_0_1
};

static const MR_DuPtagLayout mercury__ranges__ranges__du_ptag_ordered_ranges_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__ranges__ranges__du_stag_ordered_ranges_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__ranges__ranges__du_stag_ordered_ranges_0_1
  }
};

static const MR_DuFunctorDescPtr mercury__ranges__ranges__du_name_ordered_ranges_0[2] = {
  &mercury__ranges__ranges__du_functor_desc_ranges_0_0,
  &mercury__ranges__ranges__du_functor_desc_ranges_0_1
};

static const MR_Integer mercury__ranges__ranges__functor_number_map_ranges_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__ranges__ranges__type_ctor_info_ranges_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ranges____Unify____ranges_0_0_10001)),
  ((MR_Box) (mercury__ranges____Compare____ranges_0_0_10001)),
  (MR_String) "ranges",
  (MR_String) "ranges",
  {     mercury__ranges__ranges__du_name_ordered_ranges_0 },
  {     mercury__ranges__ranges__du_ptag_ordered_ranges_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__ranges__ranges__functor_number_map_ranges_0
};

static MR_bool MR_CALL 
mercury__ranges____Unify____ranges_0_0_10001(
  MR_Box mercury__ranges__wrapper_arg_1,
  MR_Box mercury__ranges__wrapper_arg_2)
{
  {
    MR_bool mercury__ranges__succeeded;

    {
      mercury__ranges__succeeded = mercury__ranges____Unify____ranges_0_0(((MR_Word) mercury__ranges__wrapper_arg_1), ((MR_Word) mercury__ranges__wrapper_arg_2));
    }
    return mercury__ranges__succeeded;
  }
}

static void MR_CALL 
mercury__ranges____Compare____ranges_0_0_10001(
  MR_Box * mercury__ranges__wrapper_arg_1,
  MR_Box mercury__ranges__wrapper_arg_2,
  MR_Box mercury__ranges__wrapper_arg_3)
{
  {
    MR_Word mercury__ranges__conv0_HeadVar__1_1;

    {
      mercury__ranges____Compare____ranges_0_0(&mercury__ranges__conv0_HeadVar__1_1, ((MR_Word) mercury__ranges__wrapper_arg_2), ((MR_Word) mercury__ranges__wrapper_arg_3));
    }
    *mercury__ranges__wrapper_arg_1 = ((MR_Box) (mercury__ranges__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
mercury__ranges__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Integer mercury__ranges__Var_12,
  MR_Word mercury__ranges__HeadVar__2_2)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__3_3;

    if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer mercury__ranges__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__ranges__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__ranges__V_8_8 = (mercury__ranges__Var_12 * mercury__ranges__V_6_6);
        MR_Word mercury__ranges__V_9_9;

        {
          mercury__ranges__V_9_9 = mercury__ranges__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(mercury__ranges__Var_12, mercury__ranges__V_7_7);
        }
        {
          mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 0) = ((MR_Box) (mercury__ranges__V_8_8));
          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 1) = ((MR_Box) (mercury__ranges__V_9_9));
        }
      }
    return mercury__ranges__HeadVar__3_3;
  }
}

static MR_Integer MR_CALL 
mercury__ranges__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__ranges__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__ranges__foldl__ho8_4_p_in__list_0(
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Word mercury__ranges__HeadVar__3_3,
  MR_Word * mercury__ranges__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__ranges__HeadVar__4_4 = mercury__ranges__HeadVar__3_3;
        else
          {
            MR_Integer mercury__ranges__V_10_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__ranges__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__V_15_13;
            MR_Word mercury__ranges__Var_46;

            {
              mercury__ranges__Var_46 = mercury__ranges__range_2_f_0(mercury__ranges__V_10_9, mercury__ranges__V_10_9);
            }
            {
              mercury__ranges__V_15_13 = mercury__ranges__union_2_f_0(mercury__ranges__HeadVar__3_3, mercury__ranges__Var_46);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__V_11_10;
              MR_Word mercury__ranges__next_value_of_HeadVar__3_3 = mercury__ranges__V_15_13;

              mercury__ranges__HeadVar__3_3 = mercury__ranges__next_value_of_HeadVar__3_3;
              mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__ranges____Compare____ranges_0_0(
  MR_Word * mercury__ranges__HeadVar__1_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Word mercury__ranges__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;
        MR_Integer mercury__ranges__CastX_18 = (MR_Integer) mercury__ranges__HeadVar__2_2;
        MR_Integer mercury__ranges__CastY_19 = (MR_Integer) mercury__ranges__HeadVar__3_3;

        mercury__ranges__succeeded = (mercury__ranges__CastX_18 == mercury__ranges__CastY_19);
        if (mercury__ranges__succeeded)
          *mercury__ranges__HeadVar__1_1 = (MR_Integer) 0;
        else
        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__ranges__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__ranges__HeadVar__1_1 = (MR_Integer) 0;
          else
            *mercury__ranges__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word mercury__ranges__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__ranges__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));

            if ((mercury__ranges__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *mercury__ranges__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Integer mercury__ranges__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 0)));
                MR_Integer mercury__ranges__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 1)));
                MR_Word mercury__ranges__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 2)));
                MR_Word mercury__ranges__Var_16;

                mercury__ranges__succeeded = (mercury__ranges__Var_25 < mercury__ranges__Var_13);
                if (mercury__ranges__succeeded)
                  mercury__ranges__Var_16 = (MR_Integer) 1;
                else
                  {
                    mercury__ranges__succeeded = (mercury__ranges__Var_25 == mercury__ranges__Var_13);
                    if (mercury__ranges__succeeded)
                      mercury__ranges__Var_16 = (MR_Integer) 0;
                    else
                      mercury__ranges__Var_16 = (MR_Integer) 2;
                  }
                mercury__ranges__succeeded = (mercury__ranges__Var_16 == (MR_Integer) 0);
                mercury__ranges__succeeded = !(mercury__ranges__succeeded);
                if (mercury__ranges__succeeded)
                  *mercury__ranges__HeadVar__1_1 = mercury__ranges__Var_16;
                else
                  {
                    MR_Word mercury__ranges__Var_17;

                    mercury__ranges__succeeded = (mercury__ranges__Var_24 < mercury__ranges__Var_14);
                    if (mercury__ranges__succeeded)
                      mercury__ranges__Var_17 = (MR_Integer) 1;
                    else
                      {
                        mercury__ranges__succeeded = (mercury__ranges__Var_24 == mercury__ranges__Var_14);
                        if (mercury__ranges__succeeded)
                          mercury__ranges__Var_17 = (MR_Integer) 0;
                        else
                          mercury__ranges__Var_17 = (MR_Integer) 2;
                      }
                    mercury__ranges__succeeded = (mercury__ranges__Var_17 == (MR_Integer) 0);
                    mercury__ranges__succeeded = !(mercury__ranges__succeeded);
                    if (mercury__ranges__succeeded)
                      *mercury__ranges__HeadVar__1_1 = mercury__ranges__Var_17;
                    else
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Var_23;
                          MR_Word mercury__ranges__next_value_of_HeadVar__3_3 = mercury__ranges__Var_15;

                          mercury__ranges__HeadVar__3_3 = mercury__ranges__next_value_of_HeadVar__3_3;
                          mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                        }
                        continue;
                      }
                  }
              }
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges____Unify____ranges_0_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Word mercury__ranges__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;
        MR_Integer mercury__ranges__CastX_11 = (MR_Integer) mercury__ranges__HeadVar__1_1;
        MR_Integer mercury__ranges__CastY_12 = (MR_Integer) mercury__ranges__HeadVar__2_2;

        mercury__ranges__succeeded = (mercury__ranges__CastX_11 == mercury__ranges__CastY_12);
        if (mercury__ranges__succeeded)
          mercury__ranges__succeeded = MR_TRUE;
        else
        if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer mercury__ranges__CastX_3 = (MR_Integer) mercury__ranges__HeadVar__1_1;
            MR_Integer mercury__ranges__CastY_4 = (MR_Integer) mercury__ranges__HeadVar__2_2;

            mercury__ranges__succeeded = (mercury__ranges__CastY_4 == mercury__ranges__CastX_3);
          }
        else
          {
            MR_Integer mercury__ranges__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__ranges__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__ranges__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_8;
            MR_Integer mercury__ranges__Var_9;
            MR_Word mercury__ranges__Var_10;

            mercury__ranges__succeeded = ((MR_tag((MR_Word) mercury__ranges__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__ranges__succeeded)
              {
                mercury__ranges__Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
                mercury__ranges__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
                mercury__ranges__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
                mercury__ranges__succeeded = (mercury__ranges__Var_5 == mercury__ranges__Var_8);
                if (mercury__ranges__succeeded)
                  {
                    mercury__ranges__succeeded = (mercury__ranges__Var_6 == mercury__ranges__Var_9);
                    if (mercury__ranges__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__ranges__next_value_of_HeadVar__1_1 = mercury__ranges__Var_7;
                          MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Var_10;

                          mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                          mercury__ranges__HeadVar__1_1 = mercury__ranges__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

static void MR_CALL 
mercury__ranges__compare_lex_2_7_p_0(
  MR_Word * mercury__ranges__Result_8,
  MR_Integer mercury__ranges__STATE_VARIABLE_LBA_0_17,
  MR_Integer mercury__ranges__STATE_VARIABLE_UBA_0_18,
  MR_Integer mercury__ranges__STATE_VARIABLE_LBB_0_19,
  MR_Integer mercury__ranges__STATE_VARIABLE_UBB_0_20,
  MR_Word mercury__ranges__STATE_VARIABLE_NextA_0_21,
  MR_Word mercury__ranges__STATE_VARIABLE_NextB_0_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded = (mercury__ranges__STATE_VARIABLE_LBA_0_17 < mercury__ranges__STATE_VARIABLE_LBB_0_19);
        MR_Word mercury__ranges__LBResult_15;

        if (mercury__ranges__succeeded)
          mercury__ranges__LBResult_15 = (MR_Integer) 1;
        else
          {
            mercury__ranges__succeeded = (mercury__ranges__STATE_VARIABLE_LBA_0_17 == mercury__ranges__STATE_VARIABLE_LBB_0_19);
            if (mercury__ranges__succeeded)
              mercury__ranges__LBResult_15 = (MR_Integer) 0;
            else
              mercury__ranges__LBResult_15 = (MR_Integer) 2;
          }
        switch (mercury__ranges__LBResult_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *mercury__ranges__Result_8 = mercury__ranges__LBResult_15;
            break;
          case (MR_Integer) 0:
            {
              MR_Word mercury__ranges__UBResult_16;

              mercury__ranges__succeeded = (mercury__ranges__STATE_VARIABLE_UBA_0_18 < mercury__ranges__STATE_VARIABLE_UBB_0_20);
              if (mercury__ranges__succeeded)
                mercury__ranges__UBResult_16 = (MR_Integer) 1;
              else
                {
                  mercury__ranges__succeeded = (mercury__ranges__STATE_VARIABLE_UBA_0_18 == mercury__ranges__STATE_VARIABLE_UBB_0_20);
                  if (mercury__ranges__succeeded)
                    mercury__ranges__UBResult_16 = (MR_Integer) 0;
                  else
                    mercury__ranges__UBResult_16 = (MR_Integer) 2;
                }
              switch (mercury__ranges__UBResult_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    mercury__ranges__succeeded = (mercury__ranges__STATE_VARIABLE_LBA_0_17 == mercury__ranges__STATE_VARIABLE_UBA_0_18);
                    if (mercury__ranges__succeeded)
                      mercury__ranges__succeeded = (mercury__ranges__STATE_VARIABLE_LBB_0_19 == mercury__ranges__STATE_VARIABLE_UBB_0_20);
                    if (mercury__ranges__succeeded)
                      {
                        mercury__ranges__compare_lex_3_p_0(mercury__ranges__Result_8, mercury__ranges__STATE_VARIABLE_NextA_0_21, mercury__ranges__STATE_VARIABLE_NextB_0_22);
                      }
                    else
                      {
                        mercury__ranges__succeeded = (mercury__ranges__STATE_VARIABLE_LBA_0_17 < mercury__ranges__STATE_VARIABLE_UBA_0_18);
                        if (mercury__ranges__succeeded)
                          mercury__ranges__succeeded = (mercury__ranges__STATE_VARIABLE_LBB_0_19 == mercury__ranges__STATE_VARIABLE_UBB_0_20);
                        if (mercury__ranges__succeeded)
                          {
                            MR_Integer mercury__ranges__STATE_VARIABLE_LBA_23_79 = (mercury__ranges__STATE_VARIABLE_LBA_0_17 + (MR_Integer) 1);

                            if ((mercury__ranges__STATE_VARIABLE_NextB_0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                              *mercury__ranges__Result_8 = (MR_Integer) 2;
                            else
                              {
                                MR_Integer mercury__ranges__Var_28;
                                MR_Integer mercury__ranges__STATE_VARIABLE_LBB_25_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__STATE_VARIABLE_NextB_0_22, (MR_Integer) 0)));
                                MR_Integer mercury__ranges__STATE_VARIABLE_UBB_26_72 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__STATE_VARIABLE_NextB_0_22, (MR_Integer) 1)));
                                MR_Word mercury__ranges__STATE_VARIABLE_NextB_27_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__STATE_VARIABLE_NextB_0_22, (MR_Integer) 2)));

                                mercury__ranges__Var_28 = (mercury__ranges__STATE_VARIABLE_LBB_25_71 + (MR_Integer) 1);
                                /* direct tailcall eliminated */
                                {
                                  MR_Integer mercury__ranges__next_value_of_STATE_VARIABLE_LBA_0_17 = mercury__ranges__STATE_VARIABLE_LBA_23_79;
                                  MR_Integer mercury__ranges__next_value_of_STATE_VARIABLE_LBB_0_19 = mercury__ranges__Var_28;
                                  MR_Integer mercury__ranges__next_value_of_STATE_VARIABLE_UBB_0_20 = mercury__ranges__STATE_VARIABLE_UBB_26_72;
                                  MR_Word mercury__ranges__next_value_of_STATE_VARIABLE_NextB_0_22 = mercury__ranges__STATE_VARIABLE_NextB_27_73;

                                  mercury__ranges__STATE_VARIABLE_NextB_0_22 = mercury__ranges__next_value_of_STATE_VARIABLE_NextB_0_22;
                                  mercury__ranges__STATE_VARIABLE_UBB_0_20 = mercury__ranges__next_value_of_STATE_VARIABLE_UBB_0_20;
                                  mercury__ranges__STATE_VARIABLE_LBB_0_19 = mercury__ranges__next_value_of_STATE_VARIABLE_LBB_0_19;
                                  mercury__ranges__STATE_VARIABLE_LBA_0_17 = mercury__ranges__next_value_of_STATE_VARIABLE_LBA_0_17;
                                }
                                continue;
                              }
                          }
                        else
                          {
                            mercury__ranges__succeeded = (mercury__ranges__STATE_VARIABLE_LBA_0_17 == mercury__ranges__STATE_VARIABLE_UBA_0_18);
                            if (mercury__ranges__succeeded)
                              mercury__ranges__succeeded = (mercury__ranges__STATE_VARIABLE_LBB_0_19 < mercury__ranges__STATE_VARIABLE_UBB_0_20);
                            if (mercury__ranges__succeeded)
                              {
                                MR_Integer mercury__ranges__STATE_VARIABLE_LBB_25_98 = (mercury__ranges__STATE_VARIABLE_LBB_0_19 + (MR_Integer) 1);

                                if ((mercury__ranges__STATE_VARIABLE_NextA_0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                  *mercury__ranges__Result_8 = (MR_Integer) 1;
                                else
                                  {
                                    MR_Integer mercury__ranges__Var_35;
                                    MR_Integer mercury__ranges__STATE_VARIABLE_LBA_23_91 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__STATE_VARIABLE_NextA_0_21, (MR_Integer) 0)));
                                    MR_Integer mercury__ranges__STATE_VARIABLE_UBA_33_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__STATE_VARIABLE_NextA_0_21, (MR_Integer) 1)));
                                    MR_Word mercury__ranges__STATE_VARIABLE_NextA_34_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__STATE_VARIABLE_NextA_0_21, (MR_Integer) 2)));

                                    mercury__ranges__Var_35 = (mercury__ranges__STATE_VARIABLE_LBA_23_91 + (MR_Integer) 1);
                                    /* direct tailcall eliminated */
                                    {
                                      MR_Integer mercury__ranges__next_value_of_STATE_VARIABLE_LBA_0_17 = mercury__ranges__Var_35;
                                      MR_Integer mercury__ranges__next_value_of_STATE_VARIABLE_UBA_0_18 = mercury__ranges__STATE_VARIABLE_UBA_33_92;
                                      MR_Integer mercury__ranges__next_value_of_STATE_VARIABLE_LBB_0_19 = mercury__ranges__STATE_VARIABLE_LBB_25_98;
                                      MR_Word mercury__ranges__next_value_of_STATE_VARIABLE_NextA_0_21 = mercury__ranges__STATE_VARIABLE_NextA_34_93;

                                      mercury__ranges__STATE_VARIABLE_NextA_0_21 = mercury__ranges__next_value_of_STATE_VARIABLE_NextA_0_21;
                                      mercury__ranges__STATE_VARIABLE_LBB_0_19 = mercury__ranges__next_value_of_STATE_VARIABLE_LBB_0_19;
                                      mercury__ranges__STATE_VARIABLE_UBA_0_18 = mercury__ranges__next_value_of_STATE_VARIABLE_UBA_0_18;
                                      mercury__ranges__STATE_VARIABLE_LBA_0_17 = mercury__ranges__next_value_of_STATE_VARIABLE_LBA_0_17;
                                    }
                                    continue;
                                  }
                              }
                            else
                              {
                                MR_Integer mercury__ranges__STATE_VARIABLE_LBA_23_103 = (mercury__ranges__STATE_VARIABLE_LBA_0_17 + (MR_Integer) 1);
                                MR_Integer mercury__ranges__STATE_VARIABLE_LBB_25_104 = (mercury__ranges__STATE_VARIABLE_LBB_0_19 + (MR_Integer) 1);

                                /* direct tailcall eliminated */
                                {
                                  MR_Integer mercury__ranges__next_value_of_STATE_VARIABLE_LBA_0_17 = mercury__ranges__STATE_VARIABLE_LBA_23_103;
                                  MR_Integer mercury__ranges__next_value_of_STATE_VARIABLE_LBB_0_19 = mercury__ranges__STATE_VARIABLE_LBB_25_104;

                                  mercury__ranges__STATE_VARIABLE_LBB_0_19 = mercury__ranges__next_value_of_STATE_VARIABLE_LBB_0_19;
                                  mercury__ranges__STATE_VARIABLE_LBA_0_17 = mercury__ranges__next_value_of_STATE_VARIABLE_LBA_0_17;
                                }
                                continue;
                              }
                          }
                      }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__ranges__compare_lex_3_p_0(mercury__ranges__Result_8, mercury__ranges__STATE_VARIABLE_NextA_0_21, mercury__ranges__STATE_VARIABLE_NextB_0_22);
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__ranges__to_sorted_list_2_3_f_0(
  MR_Integer mercury__ranges__L_5,
  MR_Integer mercury__ranges__H_6,
  MR_Word mercury__ranges__Ints_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded = (mercury__ranges__H_6 == mercury__ranges__L_5);
        MR_Word mercury__ranges__HeadVar__4_4;

        if (mercury__ranges__succeeded)
          mercury__ranges__HeadVar__4_4 = mercury__ranges__Ints_7;
        else
          {
            MR_Integer mercury__ranges__Var_8 = (mercury__ranges__H_6 - (MR_Integer) 1);
            MR_Word mercury__ranges__Var_10;

            {
              mercury__ranges__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__ranges__Var_10, 0) = ((MR_Box) (mercury__ranges__H_6));
              MR_hl_field(MR_mktag(1), mercury__ranges__Var_10, 1) = ((MR_Box) (mercury__ranges__Ints_7));
            }
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__ranges__next_value_of_H_6 = mercury__ranges__Var_8;
              MR_Word mercury__ranges__next_value_of_Ints_7 = mercury__ranges__Var_10;

              mercury__ranges__Ints_7 = mercury__ranges__next_value_of_Ints_7;
              mercury__ranges__H_6 = mercury__ranges__next_value_of_H_6;
            }
            continue;
          }
        return mercury__ranges__HeadVar__4_4;
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__ranges__contraction_0_4_f_0(
  MR_Integer mercury__ranges__L0_1,
  MR_Integer mercury__ranges__H0_2,
  MR_Word mercury__ranges__HeadVar__3_3,
  MR_Integer mercury__ranges__C_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;
        MR_Word mercury__ranges__HeadVar__5_5;

        if ((mercury__ranges__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mercury__ranges__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__ranges__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 0) = ((MR_Box) (mercury__ranges__L0_1));
              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 1) = ((MR_Box) (mercury__ranges__H0_2));
              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 2) = ((MR_Box) (mercury__ranges__Var_9));
            }
          }
        else
          {
            MR_Integer mercury__ranges__L1_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer mercury__ranges__H1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__ranges__As_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 2)));
            MR_Integer mercury__ranges__L1N_17;
            MR_Integer mercury__ranges__H1N_18;
            MR_Integer mercury__ranges__Var_19;
            MR_Integer mercury__ranges__Var_20 = (mercury__ranges__L1_12 + (MR_Integer) 1);

            mercury__ranges__succeeded = (mercury__ranges__Var_20 > (MR_Integer) 0);
            if (mercury__ranges__succeeded)
              {
                MR_Integer mercury__ranges__Var_29;
                MR_Integer mercury__ranges__Var_30 = (mercury__ranges__Var_20 + mercury__ranges__C_4);

                mercury__ranges__Var_29 = (mercury__ranges__Var_30 - (MR_Integer) 1);
                mercury__ranges__Var_19 = (mercury__ranges__Var_29 / mercury__ranges__C_4);
              }
            else
              mercury__ranges__Var_19 = (mercury__ranges__Var_20 / mercury__ranges__C_4);
            mercury__ranges__L1N_17 = (mercury__ranges__Var_19 - (MR_Integer) 1);
            mercury__ranges__succeeded = (mercury__ranges__H1_13 > (MR_Integer) 0);
            if (mercury__ranges__succeeded)
              mercury__ranges__H1N_18 = (mercury__ranges__H1_13 / mercury__ranges__C_4);
            else
              {
                MR_Integer mercury__ranges__Var_41;
                MR_Integer mercury__ranges__Var_42 = (mercury__ranges__H1_13 - mercury__ranges__C_4);

                mercury__ranges__Var_41 = (mercury__ranges__Var_42 + (MR_Integer) 1);
                mercury__ranges__H1N_18 = (mercury__ranges__Var_41 / mercury__ranges__C_4);
              }
            mercury__ranges__succeeded = (mercury__ranges__H0_2 >= mercury__ranges__L1N_17);
            if (mercury__ranges__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__ranges__next_value_of_H0_2 = mercury__ranges__H1N_18;
                  MR_Word mercury__ranges__next_value_of_HeadVar__3_3 = mercury__ranges__As_14;

                  mercury__ranges__HeadVar__3_3 = mercury__ranges__next_value_of_HeadVar__3_3;
                  mercury__ranges__H0_2 = mercury__ranges__next_value_of_H0_2;
                }
                continue;
              }
            else
              {
                MR_Word mercury__ranges__Var_23;

                {
                  mercury__ranges__Var_23 = mercury__ranges__contraction_0_4_f_0(mercury__ranges__L1N_17, mercury__ranges__H1N_18, mercury__ranges__As_14, mercury__ranges__C_4);
                }
                {
                  mercury__ranges__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 0) = ((MR_Box) (mercury__ranges__L0_1));
                  MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 1) = ((MR_Box) (mercury__ranges__H0_2));
                  MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 2) = ((MR_Box) (mercury__ranges__Var_23));
                }
              }
          }
        return mercury__ranges__HeadVar__5_5;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__ranges__negate_aux_2_f_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Word mercury__ranges__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;
        MR_Word mercury__ranges__HeadVar__3_3;

        if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__ranges__HeadVar__3_3 = mercury__ranges__HeadVar__2_2;
        else
          {
            MR_Integer mercury__ranges__L_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__ranges__As_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__ranges__Var_9;
            MR_Integer mercury__ranges__Var_10;
            MR_Integer mercury__ranges__Var_11 = ((MR_Integer) 0 - mercury__ranges__U_6);
            MR_Integer mercury__ranges__Var_13;
            MR_Integer mercury__ranges__Var_14;

            mercury__ranges__Var_10 = (mercury__ranges__Var_11 - (MR_Integer) 1);
            mercury__ranges__Var_14 = ((MR_Integer) 0 - mercury__ranges__L_5);
            mercury__ranges__Var_13 = (mercury__ranges__Var_14 - (MR_Integer) 1);
            {
              mercury__ranges__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__ranges__Var_9, 0) = ((MR_Box) (mercury__ranges__Var_10));
              MR_hl_field(MR_mktag(1), mercury__ranges__Var_9, 1) = ((MR_Box) (mercury__ranges__Var_13));
              MR_hl_field(MR_mktag(1), mercury__ranges__Var_9, 2) = ((MR_Box) (mercury__ranges__HeadVar__2_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_HeadVar__1_1 = mercury__ranges__As_7;
              MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Var_9;

              mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
              mercury__ranges__HeadVar__1_1 = mercury__ranges__next_value_of_HeadVar__1_1;
            }
            continue;
          }
        return mercury__ranges__HeadVar__3_3;
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__ranges__diff_na_nb_4_f_0(
  MR_Integer mercury__ranges__UA_6,
  MR_Word mercury__ranges__As0_7,
  MR_Integer mercury__ranges__UB_8,
  MR_Word mercury__ranges__Bs0_9)
{
  {
    MR_bool mercury__ranges__succeeded = (mercury__ranges__UA_6 < mercury__ranges__UB_8);
    MR_Word mercury__ranges__Result_10;
    MR_Word mercury__ranges__R_11;

    if (mercury__ranges__succeeded)
      mercury__ranges__R_11 = (MR_Integer) 1;
    else
      {
        mercury__ranges__succeeded = (mercury__ranges__UA_6 == mercury__ranges__UB_8);
        if (mercury__ranges__succeeded)
          mercury__ranges__R_11 = (MR_Integer) 0;
        else
          mercury__ranges__R_11 = (MR_Integer) 2;
      }
    switch (mercury__ranges__R_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        if ((mercury__ranges__As0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__ranges__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__ranges__Result_10, 0) = ((MR_Box) (mercury__ranges__UA_6));
            MR_hl_field(MR_mktag(1), mercury__ranges__Result_10, 1) = ((MR_Box) (mercury__ranges__UB_8));
            MR_hl_field(MR_mktag(1), mercury__ranges__Result_10, 2) = ((MR_Box) (mercury__ranges__Bs0_9));
          }
        else
          {
            MR_Integer mercury__ranges__LA_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__As0_7, (MR_Integer) 0)));
            MR_Integer mercury__ranges__UA_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__As0_7, (MR_Integer) 1)));
            MR_Word mercury__ranges__As0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__As0_7, (MR_Integer) 2)));
            MR_Word mercury__ranges__R_27;

            mercury__ranges__succeeded = (mercury__ranges__LA_21 < mercury__ranges__UB_8);
            if (mercury__ranges__succeeded)
              mercury__ranges__R_27 = (MR_Integer) 1;
            else
              {
                mercury__ranges__succeeded = (mercury__ranges__LA_21 == mercury__ranges__UB_8);
                if (mercury__ranges__succeeded)
                  mercury__ranges__R_27 = (MR_Integer) 0;
                else
                  mercury__ranges__R_27 = (MR_Integer) 2;
              }
            switch (mercury__ranges__R_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word mercury__ranges__Var_30;
                  MR_Word mercury__ranges__R_40;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_40, mercury__ranges__UA_22, mercury__ranges__UB_8);
                  }
                  switch (mercury__ranges__R_40) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        mercury__ranges__Var_30 = mercury__ranges__n_union_a_nb_4_f_0(mercury__ranges__UA_22, mercury__ranges__As0_23, mercury__ranges__UB_8, mercury__ranges__Bs0_9);
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        mercury__ranges__Var_30 = mercury__ranges__difference_2_f_0(mercury__ranges__Bs0_9, mercury__ranges__As0_23);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__ranges__Var_30 = mercury__ranges__int_na_b_3_f_0(mercury__ranges__UA_22, mercury__ranges__As0_23, mercury__ranges__Bs0_9);
                      }
                      break;
                  }
                  {
                    mercury__ranges__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__ranges__Result_10, 0) = ((MR_Box) (mercury__ranges__UA_6));
                    MR_hl_field(MR_mktag(1), mercury__ranges__Result_10, 1) = ((MR_Box) (mercury__ranges__LA_21));
                    MR_hl_field(MR_mktag(1), mercury__ranges__Result_10, 2) = ((MR_Box) (mercury__ranges__Var_30));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word mercury__ranges__Var_29;

                  if ((mercury__ranges__Bs0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    mercury__ranges__Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  else
                    {
                      MR_Integer mercury__ranges__LB_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Bs0_9, (MR_Integer) 0)));
                      MR_Integer mercury__ranges__UB_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Bs0_9, (MR_Integer) 1)));
                      MR_Word mercury__ranges__Bs0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Bs0_9, (MR_Integer) 2)));
                      MR_Word mercury__ranges__R_51;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_51, mercury__ranges__UA_22, mercury__ranges__LB_47);
                      }
                      switch (mercury__ranges__R_51) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            mercury__ranges__Var_29 = mercury__ranges__difference_2_f_0(mercury__ranges__Bs0_9, mercury__ranges__As0_23);
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            mercury__ranges__Var_29 = mercury__ranges__n_union_a_nb_4_f_0(mercury__ranges__UA_22, mercury__ranges__As0_23, mercury__ranges__UB_48, mercury__ranges__Bs0_49);
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            mercury__ranges__Var_29 = mercury__ranges__diff_na_nb_4_f_0(mercury__ranges__UA_22, mercury__ranges__As0_23, mercury__ranges__UB_48, mercury__ranges__Bs0_49);
                          }
                          break;
                      }
                    }
                  {
                    mercury__ranges__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__ranges__Result_10, 0) = ((MR_Box) (mercury__ranges__UA_6));
                    MR_hl_field(MR_mktag(1), mercury__ranges__Result_10, 1) = ((MR_Box) (mercury__ranges__LA_21));
                    MR_hl_field(MR_mktag(1), mercury__ranges__Result_10, 2) = ((MR_Box) (mercury__ranges__Var_29));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__ranges__Var_28;

                  {
                    mercury__ranges__Var_28 = mercury__ranges__difference_2_f_0(mercury__ranges__Bs0_9, mercury__ranges__As0_7);
                  }
                  {
                    mercury__ranges__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__ranges__Result_10, 0) = ((MR_Box) (mercury__ranges__UA_6));
                    MR_hl_field(MR_mktag(1), mercury__ranges__Result_10, 1) = ((MR_Box) (mercury__ranges__UB_8));
                    MR_hl_field(MR_mktag(1), mercury__ranges__Result_10, 2) = ((MR_Box) (mercury__ranges__Var_28));
                  }
                }
                break;
            }
          }
        break;
      case (MR_Integer) 0:
        {
          mercury__ranges__Result_10 = mercury__ranges__difference_2_f_0(mercury__ranges__Bs0_9, mercury__ranges__As0_7);
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__ranges__Result_10 = mercury__ranges__int_na_b_3_f_0(mercury__ranges__UA_6, mercury__ranges__As0_7, mercury__ranges__Bs0_9);
        }
        break;
    }
    return mercury__ranges__Result_10;
  }
}

static MR_Word MR_CALL 
mercury__ranges__diff_a_nb_3_f_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Integer mercury__ranges__UB_2,
  MR_Word mercury__ranges__Bs0_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;
        MR_Word mercury__ranges__HeadVar__4_4;

        if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__ranges__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer mercury__ranges__LA_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__ranges__UA_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__ranges__As0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__ranges__R_14;

            mercury__ranges__succeeded = (mercury__ranges__LA_8 < mercury__ranges__UB_2);
            if (mercury__ranges__succeeded)
              mercury__ranges__R_14 = (MR_Integer) 1;
            else
              {
                mercury__ranges__succeeded = (mercury__ranges__LA_8 == mercury__ranges__UB_2);
                if (mercury__ranges__succeeded)
                  mercury__ranges__R_14 = (MR_Integer) 0;
                else
                  mercury__ranges__R_14 = (MR_Integer) 2;
              }
            switch (mercury__ranges__R_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word mercury__ranges__R_25;

                  mercury__ranges__succeeded = (mercury__ranges__UA_9 < mercury__ranges__UB_2);
                  if (mercury__ranges__succeeded)
                    mercury__ranges__R_25 = (MR_Integer) 1;
                  else
                    {
                      mercury__ranges__succeeded = (mercury__ranges__UA_9 == mercury__ranges__UB_2);
                      if (mercury__ranges__succeeded)
                        mercury__ranges__R_25 = (MR_Integer) 0;
                      else
                        mercury__ranges__R_25 = (MR_Integer) 2;
                    }
                  switch (mercury__ranges__R_25) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word mercury__ranges__Var_28;

                        {
                          mercury__ranges__Var_28 = mercury__ranges__diff_a_nb_3_f_0(mercury__ranges__As0_10, mercury__ranges__UB_2, mercury__ranges__Bs0_3);
                        }
                        {
                          mercury__ranges__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 0) = ((MR_Box) (mercury__ranges__LA_8));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 1) = ((MR_Box) (mercury__ranges__UA_9));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 2) = ((MR_Box) (mercury__ranges__Var_28));
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word mercury__ranges__Var_27;

                        {
                          mercury__ranges__Var_27 = mercury__ranges__intersection_2_f_0(mercury__ranges__As0_10, mercury__ranges__Bs0_3);
                        }
                        {
                          mercury__ranges__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 0) = ((MR_Box) (mercury__ranges__LA_8));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 1) = ((MR_Box) (mercury__ranges__UA_9));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 2) = ((MR_Box) (mercury__ranges__Var_27));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word mercury__ranges__Var_26;

                        {
                          mercury__ranges__Var_26 = mercury__ranges__diff_a_nb_3_f_0(mercury__ranges__Bs0_3, mercury__ranges__UA_9, mercury__ranges__As0_10);
                        }
                        {
                          mercury__ranges__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 0) = ((MR_Box) (mercury__ranges__LA_8));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 1) = ((MR_Box) (mercury__ranges__UB_2));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 2) = ((MR_Box) (mercury__ranges__Var_26));
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__ranges__next_value_of_HeadVar__1_1 = mercury__ranges__Bs0_3;
                    MR_Integer mercury__ranges__next_value_of_UB_2 = mercury__ranges__UA_9;
                    MR_Word mercury__ranges__next_value_of_Bs0_3 = mercury__ranges__As0_10;

                    mercury__ranges__Bs0_3 = mercury__ranges__next_value_of_Bs0_3;
                    mercury__ranges__UB_2 = mercury__ranges__next_value_of_UB_2;
                    mercury__ranges__HeadVar__1_1 = mercury__ranges__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__ranges__HeadVar__4_4 = mercury__ranges__intersection_2_f_0(mercury__ranges__HeadVar__1_1, mercury__ranges__Bs0_3);
                }
                break;
            }
          }
        return mercury__ranges__HeadVar__4_4;
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__ranges__n_diff_na_b_4_f_0(
  MR_Integer mercury__ranges__L_1,
  MR_Integer mercury__ranges__HeadVar__2_2,
  MR_Word mercury__ranges__HeadVar__3_3,
  MR_Word mercury__ranges__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;
        MR_Word mercury__ranges__HeadVar__5_5;

        if ((mercury__ranges__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__ranges__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 0) = ((MR_Box) (mercury__ranges__L_1));
            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 1) = ((MR_Box) (mercury__ranges__HeadVar__2_2));
            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 2) = ((MR_Box) (mercury__ranges__HeadVar__3_3));
          }
        else
          {
            MR_Integer mercury__ranges__LB_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, (MR_Integer) 0)));
            MR_Integer mercury__ranges__UB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word mercury__ranges__Bs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, (MR_Integer) 2)));
            MR_Word mercury__ranges__R_17;

            mercury__ranges__succeeded = (mercury__ranges__HeadVar__2_2 < mercury__ranges__LB_13);
            if (mercury__ranges__succeeded)
              mercury__ranges__R_17 = (MR_Integer) 1;
            else
              {
                mercury__ranges__succeeded = (mercury__ranges__HeadVar__2_2 == mercury__ranges__LB_13);
                if (mercury__ranges__succeeded)
                  mercury__ranges__R_17 = (MR_Integer) 0;
                else
                  mercury__ranges__R_17 = (MR_Integer) 2;
              }
            switch (mercury__ranges__R_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word mercury__ranges__Var_18;

                  {
                    mercury__ranges__Var_18 = mercury__ranges__union_2_f_0(mercury__ranges__HeadVar__3_3, mercury__ranges__HeadVar__4_4);
                  }
                  {
                    mercury__ranges__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 0) = ((MR_Box) (mercury__ranges__L_1));
                    MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 1) = ((MR_Box) (mercury__ranges__HeadVar__2_2));
                    MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 2) = ((MR_Box) (mercury__ranges__Var_18));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Integer mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__UB_14;
                    MR_Word mercury__ranges__next_value_of_HeadVar__3_3 = mercury__ranges__Bs0_15;
                    MR_Word mercury__ranges__next_value_of_HeadVar__4_4 = mercury__ranges__HeadVar__3_3;

                    mercury__ranges__HeadVar__4_4 = mercury__ranges__next_value_of_HeadVar__4_4;
                    mercury__ranges__HeadVar__3_3 = mercury__ranges__next_value_of_HeadVar__3_3;
                    mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__ranges__R_29;

                  mercury__ranges__succeeded = (mercury__ranges__HeadVar__2_2 < mercury__ranges__UB_14);
                  if (mercury__ranges__succeeded)
                    mercury__ranges__R_29 = (MR_Integer) 1;
                  else
                    {
                      mercury__ranges__succeeded = (mercury__ranges__HeadVar__2_2 == mercury__ranges__UB_14);
                      if (mercury__ranges__succeeded)
                        mercury__ranges__R_29 = (MR_Integer) 0;
                      else
                        mercury__ranges__R_29 = (MR_Integer) 2;
                    }
                  switch (mercury__ranges__R_29) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Integer mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__UB_14;
                          MR_Word mercury__ranges__next_value_of_HeadVar__3_3 = mercury__ranges__Bs0_15;
                          MR_Word mercury__ranges__next_value_of_HeadVar__4_4 = mercury__ranges__HeadVar__3_3;

                          mercury__ranges__HeadVar__4_4 = mercury__ranges__next_value_of_HeadVar__4_4;
                          mercury__ranges__HeadVar__3_3 = mercury__ranges__next_value_of_HeadVar__3_3;
                          mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word mercury__ranges__Var_30;

                        {
                          mercury__ranges__Var_30 = mercury__ranges__union_2_f_0(mercury__ranges__HeadVar__3_3, mercury__ranges__Bs0_15);
                        }
                        {
                          mercury__ranges__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 0) = ((MR_Box) (mercury__ranges__L_1));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 1) = ((MR_Box) (mercury__ranges__HeadVar__2_2));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 2) = ((MR_Box) (mercury__ranges__Var_30));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__ranges__next_value_of_HeadVar__4_4 = mercury__ranges__Bs0_15;

                          mercury__ranges__HeadVar__4_4 = mercury__ranges__next_value_of_HeadVar__4_4;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
          }
        return mercury__ranges__HeadVar__5_5;
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__ranges__int_a_nb_3_f_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Integer mercury__ranges__UB_2,
  MR_Word mercury__ranges__Bs0_3)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__4_4;

    if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__ranges__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer mercury__ranges__LA_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__ranges__UA_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__ranges__As0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__ranges__R_14;

        mercury__ranges__succeeded = (mercury__ranges__LA_8 < mercury__ranges__UB_2);
        if (mercury__ranges__succeeded)
          mercury__ranges__R_14 = (MR_Integer) 1;
        else
          {
            mercury__ranges__succeeded = (mercury__ranges__LA_8 == mercury__ranges__UB_2);
            if (mercury__ranges__succeeded)
              mercury__ranges__R_14 = (MR_Integer) 0;
            else
              mercury__ranges__R_14 = (MR_Integer) 2;
          }
        switch (mercury__ranges__R_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mercury__ranges__R_24;

              {
                mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_24, mercury__ranges__UB_2, mercury__ranges__UA_9);
              }
              switch (mercury__ranges__R_24) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__ranges__HeadVar__4_4 = mercury__ranges__n_union_a_nb_4_f_0(mercury__ranges__UB_2, mercury__ranges__Bs0_3, mercury__ranges__UA_9, mercury__ranges__As0_10);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__ranges__HeadVar__4_4 = mercury__ranges__difference_2_f_0(mercury__ranges__As0_10, mercury__ranges__Bs0_3);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__ranges__HeadVar__4_4 = mercury__ranges__int_na_b_3_f_0(mercury__ranges__UB_2, mercury__ranges__Bs0_3, mercury__ranges__As0_10);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 0:
            if ((mercury__ranges__Bs0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__ranges__HeadVar__4_4 = mercury__ranges__HeadVar__1_1;
            else
              {
                MR_Integer mercury__ranges__LB_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Bs0_3, (MR_Integer) 0)));
                MR_Integer mercury__ranges__UB_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Bs0_3, (MR_Integer) 1)));
                MR_Word mercury__ranges__Bs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Bs0_3, (MR_Integer) 2)));
                MR_Word mercury__ranges__R_37;

                mercury__ranges__succeeded = (mercury__ranges__UA_9 < mercury__ranges__LB_33);
                if (mercury__ranges__succeeded)
                  mercury__ranges__R_37 = (MR_Integer) 1;
                else
                  {
                    mercury__ranges__succeeded = (mercury__ranges__UA_9 == mercury__ranges__LB_33);
                    if (mercury__ranges__succeeded)
                      mercury__ranges__R_37 = (MR_Integer) 0;
                    else
                      mercury__ranges__R_37 = (MR_Integer) 2;
                  }
                switch (mercury__ranges__R_37) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word mercury__ranges__Var_40;

                      {
                        mercury__ranges__Var_40 = mercury__ranges__difference_2_f_0(mercury__ranges__As0_10, mercury__ranges__Bs0_3);
                      }
                      {
                        mercury__ranges__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 0) = ((MR_Box) (mercury__ranges__LA_8));
                        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 1) = ((MR_Box) (mercury__ranges__UA_9));
                        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 2) = ((MR_Box) (mercury__ranges__Var_40));
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__ranges__Var_39;

                      if ((mercury__ranges__As0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        mercury__ranges__Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      else
                        {
                          MR_Integer mercury__ranges__LA_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__As0_10, (MR_Integer) 0)));
                          MR_Integer mercury__ranges__UA_49 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__As0_10, (MR_Integer) 1)));
                          MR_Word mercury__ranges__As0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__As0_10, (MR_Integer) 2)));
                          MR_Word mercury__ranges__R_54;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_54, mercury__ranges__LA_48, mercury__ranges__UB_34);
                          }
                          switch (mercury__ranges__R_54) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              {
                                mercury__ranges__Var_39 = mercury__ranges__diff_na_nb_4_f_0(mercury__ranges__UB_34, mercury__ranges__Bs0_35, mercury__ranges__UA_49, mercury__ranges__As0_50);
                              }
                              break;
                            case (MR_Integer) 0:
                              {
                                mercury__ranges__Var_39 = mercury__ranges__n_union_na_b_4_f_0(mercury__ranges__LA_48, mercury__ranges__UA_49, mercury__ranges__As0_50, mercury__ranges__Bs0_35);
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                mercury__ranges__Var_39 = mercury__ranges__difference_2_f_0(mercury__ranges__As0_10, mercury__ranges__Bs0_35);
                              }
                              break;
                          }
                        }
                      {
                        mercury__ranges__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 0) = ((MR_Box) (mercury__ranges__LA_8));
                        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 1) = ((MR_Box) (mercury__ranges__UA_9));
                        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 2) = ((MR_Box) (mercury__ranges__Var_39));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word mercury__ranges__Var_38;
                      MR_Word mercury__ranges__R_61;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_61, mercury__ranges__UB_34, mercury__ranges__UA_9);
                      }
                      switch (mercury__ranges__R_61) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            mercury__ranges__Var_38 = mercury__ranges__n_union_a_nb_4_f_0(mercury__ranges__UB_34, mercury__ranges__Bs0_35, mercury__ranges__UA_9, mercury__ranges__As0_10);
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            mercury__ranges__Var_38 = mercury__ranges__difference_2_f_0(mercury__ranges__As0_10, mercury__ranges__Bs0_35);
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            mercury__ranges__Var_38 = mercury__ranges__int_na_b_3_f_0(mercury__ranges__UB_34, mercury__ranges__Bs0_35, mercury__ranges__As0_10);
                          }
                          break;
                      }
                      {
                        mercury__ranges__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 0) = ((MR_Box) (mercury__ranges__LA_8));
                        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 1) = ((MR_Box) (mercury__ranges__LB_33));
                        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 2) = ((MR_Box) (mercury__ranges__Var_38));
                      }
                    }
                    break;
                }
              }
            break;
          case (MR_Integer) 2:
            {
              mercury__ranges__HeadVar__4_4 = mercury__ranges__difference_2_f_0(mercury__ranges__HeadVar__1_1, mercury__ranges__Bs0_3);
            }
            break;
        }
      }
    return mercury__ranges__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mercury__ranges__int_na_b_3_f_0(
  MR_Integer mercury__ranges__UA_1,
  MR_Word mercury__ranges__As0_2,
  MR_Word mercury__ranges__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;
        MR_Word mercury__ranges__HeadVar__4_4;

        if ((mercury__ranges__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__ranges__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer mercury__ranges__LB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer mercury__ranges__UB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__ranges__Bs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word mercury__ranges__R_14;

            mercury__ranges__succeeded = (mercury__ranges__UA_1 < mercury__ranges__LB_10);
            if (mercury__ranges__succeeded)
              mercury__ranges__R_14 = (MR_Integer) 1;
            else
              {
                mercury__ranges__succeeded = (mercury__ranges__UA_1 == mercury__ranges__LB_10);
                if (mercury__ranges__succeeded)
                  mercury__ranges__R_14 = (MR_Integer) 0;
                else
                  mercury__ranges__R_14 = (MR_Integer) 2;
              }
            switch (mercury__ranges__R_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__ranges__HeadVar__4_4 = mercury__ranges__difference_2_f_0(mercury__ranges__HeadVar__3_3, mercury__ranges__As0_2);
                }
                break;
              case (MR_Integer) 0:
                if ((mercury__ranges__As0_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    mercury__ranges__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 0) = ((MR_Box) (mercury__ranges__UA_1));
                    MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 1) = ((MR_Box) (mercury__ranges__UB_11));
                    MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 2) = ((MR_Box) (mercury__ranges__Bs0_12));
                  }
                else
                  {
                    MR_Integer mercury__ranges__LA_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__As0_2, (MR_Integer) 0)));
                    MR_Integer mercury__ranges__UA_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__As0_2, (MR_Integer) 1)));
                    MR_Word mercury__ranges__As0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__As0_2, (MR_Integer) 2)));
                    MR_Word mercury__ranges__R_30;

                    mercury__ranges__succeeded = (mercury__ranges__LA_24 < mercury__ranges__UB_11);
                    if (mercury__ranges__succeeded)
                      mercury__ranges__R_30 = (MR_Integer) 1;
                    else
                      {
                        mercury__ranges__succeeded = (mercury__ranges__LA_24 == mercury__ranges__UB_11);
                        if (mercury__ranges__succeeded)
                          mercury__ranges__R_30 = (MR_Integer) 0;
                        else
                          mercury__ranges__R_30 = (MR_Integer) 2;
                      }
                    switch (mercury__ranges__R_30) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        {
                          MR_Word mercury__ranges__Var_33;
                          MR_Word mercury__ranges__R_43;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_43, mercury__ranges__UA_25, mercury__ranges__UB_11);
                          }
                          switch (mercury__ranges__R_43) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              {
                                mercury__ranges__Var_33 = mercury__ranges__n_union_a_nb_4_f_0(mercury__ranges__UA_25, mercury__ranges__As0_26, mercury__ranges__UB_11, mercury__ranges__Bs0_12);
                              }
                              break;
                            case (MR_Integer) 0:
                              {
                                mercury__ranges__Var_33 = mercury__ranges__difference_2_f_0(mercury__ranges__Bs0_12, mercury__ranges__As0_26);
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                mercury__ranges__Var_33 = mercury__ranges__int_na_b_3_f_0(mercury__ranges__UA_25, mercury__ranges__As0_26, mercury__ranges__Bs0_12);
                              }
                              break;
                          }
                          {
                            mercury__ranges__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 0) = ((MR_Box) (mercury__ranges__UA_1));
                            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 1) = ((MR_Box) (mercury__ranges__LA_24));
                            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 2) = ((MR_Box) (mercury__ranges__Var_33));
                          }
                        }
                        break;
                      case (MR_Integer) 0:
                        {
                          MR_Word mercury__ranges__Var_32;

                          if ((mercury__ranges__Bs0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            mercury__ranges__Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          else
                            {
                              MR_Integer mercury__ranges__LB_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Bs0_12, (MR_Integer) 0)));
                              MR_Integer mercury__ranges__UB_51 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Bs0_12, (MR_Integer) 1)));
                              MR_Word mercury__ranges__Bs0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Bs0_12, (MR_Integer) 2)));
                              MR_Word mercury__ranges__R_54;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_54, mercury__ranges__UA_25, mercury__ranges__LB_50);
                              }
                              switch (mercury__ranges__R_54) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  {
                                    mercury__ranges__Var_32 = mercury__ranges__difference_2_f_0(mercury__ranges__Bs0_12, mercury__ranges__As0_26);
                                  }
                                  break;
                                case (MR_Integer) 0:
                                  {
                                    mercury__ranges__Var_32 = mercury__ranges__n_union_a_nb_4_f_0(mercury__ranges__UA_25, mercury__ranges__As0_26, mercury__ranges__UB_51, mercury__ranges__Bs0_52);
                                  }
                                  break;
                                case (MR_Integer) 2:
                                  {
                                    mercury__ranges__Var_32 = mercury__ranges__diff_na_nb_4_f_0(mercury__ranges__UA_25, mercury__ranges__As0_26, mercury__ranges__UB_51, mercury__ranges__Bs0_52);
                                  }
                                  break;
                              }
                            }
                          {
                            mercury__ranges__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 0) = ((MR_Box) (mercury__ranges__UA_1));
                            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 1) = ((MR_Box) (mercury__ranges__LA_24));
                            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 2) = ((MR_Box) (mercury__ranges__Var_32));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word mercury__ranges__Var_31;

                          {
                            mercury__ranges__Var_31 = mercury__ranges__difference_2_f_0(mercury__ranges__Bs0_12, mercury__ranges__As0_2);
                          }
                          {
                            mercury__ranges__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 0) = ((MR_Box) (mercury__ranges__UA_1));
                            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 1) = ((MR_Box) (mercury__ranges__UB_11));
                            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, 2) = ((MR_Box) (mercury__ranges__Var_31));
                          }
                        }
                        break;
                    }
                  }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__ranges__R_61;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_61, mercury__ranges__UA_1, mercury__ranges__UB_11);
                  }
                  switch (mercury__ranges__R_61) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        mercury__ranges__HeadVar__4_4 = mercury__ranges__n_union_a_nb_4_f_0(mercury__ranges__UA_1, mercury__ranges__As0_2, mercury__ranges__UB_11, mercury__ranges__Bs0_12);
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        mercury__ranges__HeadVar__4_4 = mercury__ranges__difference_2_f_0(mercury__ranges__Bs0_12, mercury__ranges__As0_2);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__ranges__next_value_of_HeadVar__3_3 = mercury__ranges__Bs0_12;

                          mercury__ranges__HeadVar__3_3 = mercury__ranges__next_value_of_HeadVar__3_3;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
          }
        return mercury__ranges__HeadVar__4_4;
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__ranges__n_union_na_b_4_f_0(
  MR_Integer mercury__ranges__L_1,
  MR_Integer mercury__ranges__HeadVar__2_2,
  MR_Word mercury__ranges__HeadVar__3_3,
  MR_Word mercury__ranges__HeadVar__4_4)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__5_5;

    if ((mercury__ranges__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__ranges__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 0) = ((MR_Box) (mercury__ranges__L_1));
        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 1) = ((MR_Box) (mercury__ranges__HeadVar__2_2));
        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 2) = ((MR_Box) (mercury__ranges__HeadVar__3_3));
      }
    else
      {
        MR_Integer mercury__ranges__LB_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, (MR_Integer) 0)));
        MR_Integer mercury__ranges__UB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word mercury__ranges__Bs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, (MR_Integer) 2)));
        MR_Word mercury__ranges__R_17;

        mercury__ranges__succeeded = (mercury__ranges__HeadVar__2_2 < mercury__ranges__LB_13);
        if (mercury__ranges__succeeded)
          mercury__ranges__R_17 = (MR_Integer) 1;
        else
          {
            mercury__ranges__succeeded = (mercury__ranges__HeadVar__2_2 == mercury__ranges__LB_13);
            if (mercury__ranges__succeeded)
              mercury__ranges__R_17 = (MR_Integer) 0;
            else
              mercury__ranges__R_17 = (MR_Integer) 2;
          }
        switch (mercury__ranges__R_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mercury__ranges__Var_20;

              {
                mercury__ranges__Var_20 = mercury__ranges__difference_2_f_0(mercury__ranges__HeadVar__3_3, mercury__ranges__HeadVar__4_4);
              }
              {
                mercury__ranges__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 0) = ((MR_Box) (mercury__ranges__L_1));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 1) = ((MR_Box) (mercury__ranges__HeadVar__2_2));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 2) = ((MR_Box) (mercury__ranges__Var_20));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word mercury__ranges__Var_19;

              if ((mercury__ranges__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                mercury__ranges__Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Integer mercury__ranges__LA_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__ranges__UA_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__ranges__As0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mercury__ranges__R_34;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_34, mercury__ranges__LA_28, mercury__ranges__UB_14);
                  }
                  switch (mercury__ranges__R_34) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        mercury__ranges__Var_19 = mercury__ranges__diff_na_nb_4_f_0(mercury__ranges__UB_14, mercury__ranges__Bs0_15, mercury__ranges__UA_29, mercury__ranges__As0_30);
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        mercury__ranges__Var_19 = mercury__ranges__n_union_na_b_4_f_0(mercury__ranges__LA_28, mercury__ranges__UA_29, mercury__ranges__As0_30, mercury__ranges__Bs0_15);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__ranges__Var_19 = mercury__ranges__difference_2_f_0(mercury__ranges__HeadVar__3_3, mercury__ranges__Bs0_15);
                      }
                      break;
                  }
                }
              {
                mercury__ranges__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 0) = ((MR_Box) (mercury__ranges__L_1));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 1) = ((MR_Box) (mercury__ranges__HeadVar__2_2));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 2) = ((MR_Box) (mercury__ranges__Var_19));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__ranges__Var_18;
              MR_Word mercury__ranges__R_41;

              {
                mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_41, mercury__ranges__UB_14, mercury__ranges__HeadVar__2_2);
              }
              switch (mercury__ranges__R_41) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__ranges__Var_18 = mercury__ranges__n_union_a_nb_4_f_0(mercury__ranges__UB_14, mercury__ranges__Bs0_15, mercury__ranges__HeadVar__2_2, mercury__ranges__HeadVar__3_3);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__ranges__Var_18 = mercury__ranges__difference_2_f_0(mercury__ranges__HeadVar__3_3, mercury__ranges__Bs0_15);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__ranges__Var_18 = mercury__ranges__int_na_b_3_f_0(mercury__ranges__UB_14, mercury__ranges__Bs0_15, mercury__ranges__HeadVar__3_3);
                  }
                  break;
              }
              {
                mercury__ranges__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 0) = ((MR_Box) (mercury__ranges__L_1));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 1) = ((MR_Box) (mercury__ranges__LB_13));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 2) = ((MR_Box) (mercury__ranges__Var_18));
              }
            }
            break;
        }
      }
    return mercury__ranges__HeadVar__5_5;
  }
}

static MR_Word MR_CALL 
mercury__ranges__n_union_a_nb_4_f_0(
  MR_Integer mercury__ranges__L_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Integer mercury__ranges__HeadVar__3_3,
  MR_Word mercury__ranges__HeadVar__4_4)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__5_5;

    if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__ranges__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 0) = ((MR_Box) (mercury__ranges__L_1));
        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 1) = ((MR_Box) (mercury__ranges__HeadVar__3_3));
        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 2) = ((MR_Box) (mercury__ranges__HeadVar__4_4));
      }
    else
      {
        MR_Integer mercury__ranges__LA_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__ranges__UA_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__ranges__As0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__ranges__R_17;

        mercury__ranges__succeeded = (mercury__ranges__LA_11 < mercury__ranges__HeadVar__3_3);
        if (mercury__ranges__succeeded)
          mercury__ranges__R_17 = (MR_Integer) 1;
        else
          {
            mercury__ranges__succeeded = (mercury__ranges__LA_11 == mercury__ranges__HeadVar__3_3);
            if (mercury__ranges__succeeded)
              mercury__ranges__R_17 = (MR_Integer) 0;
            else
              mercury__ranges__R_17 = (MR_Integer) 2;
          }
        switch (mercury__ranges__R_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mercury__ranges__Var_20;
              MR_Word mercury__ranges__R_30;

              {
                mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_30, mercury__ranges__UA_12, mercury__ranges__HeadVar__3_3);
              }
              switch (mercury__ranges__R_30) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    mercury__ranges__Var_20 = mercury__ranges__n_union_a_nb_4_f_0(mercury__ranges__UA_12, mercury__ranges__As0_13, mercury__ranges__HeadVar__3_3, mercury__ranges__HeadVar__4_4);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__ranges__Var_20 = mercury__ranges__difference_2_f_0(mercury__ranges__HeadVar__4_4, mercury__ranges__As0_13);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    mercury__ranges__Var_20 = mercury__ranges__int_na_b_3_f_0(mercury__ranges__UA_12, mercury__ranges__As0_13, mercury__ranges__HeadVar__4_4);
                  }
                  break;
              }
              {
                mercury__ranges__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 0) = ((MR_Box) (mercury__ranges__L_1));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 1) = ((MR_Box) (mercury__ranges__LA_11));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 2) = ((MR_Box) (mercury__ranges__Var_20));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word mercury__ranges__Var_19;

              if ((mercury__ranges__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                mercury__ranges__Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                {
                  MR_Integer mercury__ranges__LB_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, (MR_Integer) 0)));
                  MR_Integer mercury__ranges__UB_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, (MR_Integer) 1)));
                  MR_Word mercury__ranges__Bs0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__4_4, (MR_Integer) 2)));
                  MR_Word mercury__ranges__R_41;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_41, mercury__ranges__UA_12, mercury__ranges__LB_37);
                  }
                  switch (mercury__ranges__R_41) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        mercury__ranges__Var_19 = mercury__ranges__difference_2_f_0(mercury__ranges__HeadVar__4_4, mercury__ranges__As0_13);
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        mercury__ranges__Var_19 = mercury__ranges__n_union_a_nb_4_f_0(mercury__ranges__UA_12, mercury__ranges__As0_13, mercury__ranges__UB_38, mercury__ranges__Bs0_39);
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__ranges__Var_19 = mercury__ranges__diff_na_nb_4_f_0(mercury__ranges__UA_12, mercury__ranges__As0_13, mercury__ranges__UB_38, mercury__ranges__Bs0_39);
                      }
                      break;
                  }
                }
              {
                mercury__ranges__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 0) = ((MR_Box) (mercury__ranges__L_1));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 1) = ((MR_Box) (mercury__ranges__LA_11));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 2) = ((MR_Box) (mercury__ranges__Var_19));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__ranges__Var_18;

              {
                mercury__ranges__Var_18 = mercury__ranges__difference_2_f_0(mercury__ranges__HeadVar__4_4, mercury__ranges__HeadVar__2_2);
              }
              {
                mercury__ranges__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 0) = ((MR_Box) (mercury__ranges__L_1));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 1) = ((MR_Box) (mercury__ranges__HeadVar__3_3));
                MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__5_5, 2) = ((MR_Box) (mercury__ranges__Var_18));
              }
            }
            break;
        }
      }
    return mercury__ranges__HeadVar__5_5;
  }
}

void MR_CALL 
mercury__ranges__greatest_2_3_p_0(
  MR_Integer mercury__ranges__U_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Integer * mercury__ranges__U_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__ranges__U_3 = mercury__ranges__U_1;
        else
          {
            MR_Integer mercury__ranges__U0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__As_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));

            /* direct tailcall eliminated */
            {
              MR_Integer mercury__ranges__next_value_of_U_1 = mercury__ranges__U0_7;
              MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__As_8;

              mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
              mercury__ranges__U_1 = mercury__ranges__next_value_of_U_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Integer MR_CALL 
mercury__ranges__element_index_2_f_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Integer mercury__ranges__I_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;
        MR_Integer mercury__ranges__HeadVar__3_3;

        if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mercury__ranges__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            MR_Word mercury__ranges__TypeCtorInfo_14_14 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Box mercury__ranges__conv0_HeadVar__3_3;

            {
              mercury__ranges__conv0_HeadVar__3_3 = mercury__exception__throw_1_f_0(mercury__ranges__TypeCtorInfo_13_13, mercury__ranges__TypeCtorInfo_14_14, ((MR_Box) ((MR_String) "ranges.element_index: index out of range")));
            }
            mercury__ranges__HeadVar__3_3 = ((MR_Integer) mercury__ranges__conv0_HeadVar__3_3);
          }
        else
          {
            MR_Integer mercury__ranges__L_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer mercury__ranges__N0_11 = (mercury__ranges__L_6 + mercury__ranges__I_2);

            mercury__ranges__succeeded = (mercury__ranges__N0_11 <= mercury__ranges__U_7);
            if (mercury__ranges__succeeded)
              mercury__ranges__HeadVar__3_3 = mercury__ranges__N0_11;
            else
              {
                MR_Integer mercury__ranges__Var_12 = (mercury__ranges__N0_11 - mercury__ranges__U_7);

                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_HeadVar__1_1 = mercury__ranges__Rest_8;
                  MR_Integer mercury__ranges__next_value_of_I_2 = mercury__ranges__Var_12;

                  mercury__ranges__I_2 = mercury__ranges__next_value_of_I_2;
                  mercury__ranges__HeadVar__1_1 = mercury__ranges__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return mercury__ranges__HeadVar__3_3;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__range_foldr_4_p_5(
  MR_Word mercury__ranges__TypeInfo_for_A_20,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__ranges__succeeded;

    if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__ranges__STATE_VARIABLE_Acc_4 = mercury__ranges__STATE_VARIABLE_Acc_0_3;
        mercury__ranges__succeeded = MR_TRUE;
      }
    else
      {
        MR_Integer mercury__ranges__L_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__ranges__U_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__ranges__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
        MR_Box mercury__ranges__STATE_VARIABLE_Acc_16_16;
        MR_Integer mercury__ranges__Var_17;
        MR_Integer mercury__ranges__Var_19;
        MR_bool MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__ranges__succeeded = mercury__ranges__range_foldr_4_p_5(mercury__ranges__TypeInfo_for_A_20, mercury__ranges__P_1, mercury__ranges__Rest_12, mercury__ranges__STATE_VARIABLE_Acc_0_3, &mercury__ranges__STATE_VARIABLE_Acc_16_16);
        }
        if (mercury__ranges__succeeded)
          {
            mercury__ranges__Var_19 = (MR_Integer) 1;
            mercury__ranges__Var_17 = (mercury__ranges__L_10 + mercury__ranges__Var_19);
            mercury__ranges__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));
            {
              mercury__ranges__succeeded = mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_17)), ((MR_Box) (mercury__ranges__U_11)), mercury__ranges__STATE_VARIABLE_Acc_16_16, mercury__ranges__STATE_VARIABLE_Acc_4);
            }
          }
      }
    return mercury__ranges__succeeded;
  }
}

MR_bool MR_CALL 
mercury__ranges__range_foldr_4_p_4(
  MR_Word mercury__ranges__TypeInfo_for_A_20,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__ranges__succeeded;

    if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__ranges__STATE_VARIABLE_Acc_4 = mercury__ranges__STATE_VARIABLE_Acc_0_3;
        mercury__ranges__succeeded = MR_TRUE;
      }
    else
      {
        MR_Integer mercury__ranges__L_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__ranges__U_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__ranges__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
        MR_Box mercury__ranges__STATE_VARIABLE_Acc_16_16;
        MR_Integer mercury__ranges__Var_17;
        MR_Integer mercury__ranges__Var_19;
        MR_bool MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__ranges__succeeded = mercury__ranges__range_foldr_4_p_4(mercury__ranges__TypeInfo_for_A_20, mercury__ranges__P_1, mercury__ranges__Rest_12, mercury__ranges__STATE_VARIABLE_Acc_0_3, &mercury__ranges__STATE_VARIABLE_Acc_16_16);
        }
        if (mercury__ranges__succeeded)
          {
            mercury__ranges__Var_19 = (MR_Integer) 1;
            mercury__ranges__Var_17 = (mercury__ranges__L_10 + mercury__ranges__Var_19);
            mercury__ranges__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));
            {
              mercury__ranges__succeeded = mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_17)), ((MR_Box) (mercury__ranges__U_11)), mercury__ranges__STATE_VARIABLE_Acc_16_16, mercury__ranges__STATE_VARIABLE_Acc_4);
            }
          }
      }
    return mercury__ranges__succeeded;
  }
}

MR_bool MR_CALL 
mercury__ranges__range_foldr_4_p_3(
  MR_Word mercury__ranges__TypeInfo_for_A_20,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__ranges__succeeded;

    if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__ranges__STATE_VARIABLE_Acc_4 = mercury__ranges__STATE_VARIABLE_Acc_0_3;
        mercury__ranges__succeeded = MR_TRUE;
      }
    else
      {
        MR_Integer mercury__ranges__L_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__ranges__U_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__ranges__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
        MR_Box mercury__ranges__STATE_VARIABLE_Acc_16_16;
        MR_Integer mercury__ranges__Var_17;
        MR_Integer mercury__ranges__Var_19;
        MR_bool MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__ranges__succeeded = mercury__ranges__range_foldr_4_p_3(mercury__ranges__TypeInfo_for_A_20, mercury__ranges__P_1, mercury__ranges__Rest_12, mercury__ranges__STATE_VARIABLE_Acc_0_3, &mercury__ranges__STATE_VARIABLE_Acc_16_16);
        }
        if (mercury__ranges__succeeded)
          {
            mercury__ranges__Var_19 = (MR_Integer) 1;
            mercury__ranges__Var_17 = (mercury__ranges__L_10 + mercury__ranges__Var_19);
            mercury__ranges__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));
            {
              mercury__ranges__succeeded = mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_17)), ((MR_Box) (mercury__ranges__U_11)), mercury__ranges__STATE_VARIABLE_Acc_16_16, mercury__ranges__STATE_VARIABLE_Acc_4);
            }
          }
      }
    return mercury__ranges__succeeded;
  }
}

void MR_CALL 
mercury__ranges__range_foldr_4_p_2(
  MR_Word mercury__ranges__TypeInfo_for_A_20,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__ranges__succeeded;

    if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__ranges__STATE_VARIABLE_Acc_4 = mercury__ranges__STATE_VARIABLE_Acc_0_3;
    else
      {
        MR_Integer mercury__ranges__L_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__ranges__U_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__ranges__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
        MR_Box mercury__ranges__STATE_VARIABLE_Acc_16_16;
        MR_Integer mercury__ranges__Var_17;
        void MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__ranges__range_foldr_4_p_2(mercury__ranges__TypeInfo_for_A_20, mercury__ranges__P_1, mercury__ranges__Rest_12, mercury__ranges__STATE_VARIABLE_Acc_0_3, &mercury__ranges__STATE_VARIABLE_Acc_16_16);
        }
        mercury__ranges__Var_17 = (mercury__ranges__L_10 + (MR_Integer) 1);
        mercury__ranges__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));
        {
          mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_17)), ((MR_Box) (mercury__ranges__U_11)), mercury__ranges__STATE_VARIABLE_Acc_16_16, mercury__ranges__STATE_VARIABLE_Acc_4);
        }
      }
  }
}

void MR_CALL 
mercury__ranges__range_foldr_4_p_1(
  MR_Word mercury__ranges__TypeInfo_for_A_20,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__ranges__succeeded;

    if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__ranges__STATE_VARIABLE_Acc_4 = mercury__ranges__STATE_VARIABLE_Acc_0_3;
    else
      {
        MR_Integer mercury__ranges__L_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__ranges__U_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__ranges__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
        MR_Box mercury__ranges__STATE_VARIABLE_Acc_16_16;
        MR_Integer mercury__ranges__Var_17;
        void MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__ranges__range_foldr_4_p_1(mercury__ranges__TypeInfo_for_A_20, mercury__ranges__P_1, mercury__ranges__Rest_12, mercury__ranges__STATE_VARIABLE_Acc_0_3, &mercury__ranges__STATE_VARIABLE_Acc_16_16);
        }
        mercury__ranges__Var_17 = (mercury__ranges__L_10 + (MR_Integer) 1);
        mercury__ranges__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));
        {
          mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_17)), ((MR_Box) (mercury__ranges__U_11)), mercury__ranges__STATE_VARIABLE_Acc_16_16, mercury__ranges__STATE_VARIABLE_Acc_4);
        }
      }
  }
}

void MR_CALL 
mercury__ranges__range_foldr_4_p_0(
  MR_Word mercury__ranges__TypeInfo_for_A_20,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__ranges__succeeded;

    if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__ranges__STATE_VARIABLE_Acc_4 = mercury__ranges__STATE_VARIABLE_Acc_0_3;
    else
      {
        MR_Integer mercury__ranges__L_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__ranges__U_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__ranges__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
        MR_Box mercury__ranges__STATE_VARIABLE_Acc_16_16;
        MR_Integer mercury__ranges__Var_17;
        void MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

        {
          mercury__ranges__range_foldr_4_p_0(mercury__ranges__TypeInfo_for_A_20, mercury__ranges__P_1, mercury__ranges__Rest_12, mercury__ranges__STATE_VARIABLE_Acc_0_3, &mercury__ranges__STATE_VARIABLE_Acc_16_16);
        }
        mercury__ranges__Var_17 = (mercury__ranges__L_10 + (MR_Integer) 1);
        mercury__ranges__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));
        {
          mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_17)), ((MR_Box) (mercury__ranges__U_11)), mercury__ranges__STATE_VARIABLE_Acc_16_16, mercury__ranges__STATE_VARIABLE_Acc_4);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__ranges__range_foldl2_6_p_5(
  MR_Word mercury__ranges__TypeInfo_for_A_30,
  MR_Word mercury__ranges__TypeInfo_for_B_31,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc2_6 = mercury__ranges__STATE_VARIABLE_Acc2_0_5;
            *mercury__ranges__STATE_VARIABLE_Acc1_4 = mercury__ranges__STATE_VARIABLE_Acc1_0_3;
            mercury__ranges__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__ranges__L_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_24 = (mercury__ranges__L_15 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_26_26;
            MR_bool MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));

            {
              mercury__ranges__succeeded = mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_24)), ((MR_Box) (mercury__ranges__U_16)), mercury__ranges__STATE_VARIABLE_Acc1_0_3, &mercury__ranges__STATE_VARIABLE_Acc1_25_25, mercury__ranges__STATE_VARIABLE_Acc2_0_5, &mercury__ranges__STATE_VARIABLE_Acc2_26_26);
            }
            if (mercury__ranges__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Rest_17;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_3 = mercury__ranges__STATE_VARIABLE_Acc1_25_25;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_5 = mercury__ranges__STATE_VARIABLE_Acc2_26_26;

                  mercury__ranges__STATE_VARIABLE_Acc2_0_5 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_5;
                  mercury__ranges__STATE_VARIABLE_Acc1_0_3 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_3;
                  mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__range_foldl2_6_p_4(
  MR_Word mercury__ranges__TypeInfo_for_A_30,
  MR_Word mercury__ranges__TypeInfo_for_B_31,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc2_6 = mercury__ranges__STATE_VARIABLE_Acc2_0_5;
            *mercury__ranges__STATE_VARIABLE_Acc1_4 = mercury__ranges__STATE_VARIABLE_Acc1_0_3;
            mercury__ranges__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__ranges__L_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_24 = (mercury__ranges__L_15 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_26_26;
            MR_bool MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));

            {
              mercury__ranges__succeeded = mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_24)), ((MR_Box) (mercury__ranges__U_16)), mercury__ranges__STATE_VARIABLE_Acc1_0_3, &mercury__ranges__STATE_VARIABLE_Acc1_25_25, mercury__ranges__STATE_VARIABLE_Acc2_0_5, &mercury__ranges__STATE_VARIABLE_Acc2_26_26);
            }
            if (mercury__ranges__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Rest_17;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_3 = mercury__ranges__STATE_VARIABLE_Acc1_25_25;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_5 = mercury__ranges__STATE_VARIABLE_Acc2_26_26;

                  mercury__ranges__STATE_VARIABLE_Acc2_0_5 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_5;
                  mercury__ranges__STATE_VARIABLE_Acc1_0_3 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_3;
                  mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__range_foldl2_6_p_3(
  MR_Word mercury__ranges__TypeInfo_for_A_30,
  MR_Word mercury__ranges__TypeInfo_for_B_31,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc2_6 = mercury__ranges__STATE_VARIABLE_Acc2_0_5;
            *mercury__ranges__STATE_VARIABLE_Acc1_4 = mercury__ranges__STATE_VARIABLE_Acc1_0_3;
            mercury__ranges__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__ranges__L_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_24 = (mercury__ranges__L_15 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_26_26;
            MR_bool MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));

            {
              mercury__ranges__succeeded = mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_24)), ((MR_Box) (mercury__ranges__U_16)), mercury__ranges__STATE_VARIABLE_Acc1_0_3, &mercury__ranges__STATE_VARIABLE_Acc1_25_25, mercury__ranges__STATE_VARIABLE_Acc2_0_5, &mercury__ranges__STATE_VARIABLE_Acc2_26_26);
            }
            if (mercury__ranges__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Rest_17;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_3 = mercury__ranges__STATE_VARIABLE_Acc1_25_25;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_5 = mercury__ranges__STATE_VARIABLE_Acc2_26_26;

                  mercury__ranges__STATE_VARIABLE_Acc2_0_5 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_5;
                  mercury__ranges__STATE_VARIABLE_Acc1_0_3 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_3;
                  mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__range_foldl2_6_p_2(
  MR_Word mercury__ranges__TypeInfo_for_A_30,
  MR_Word mercury__ranges__TypeInfo_for_B_31,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc2_6 = mercury__ranges__STATE_VARIABLE_Acc2_0_5;
            *mercury__ranges__STATE_VARIABLE_Acc1_4 = mercury__ranges__STATE_VARIABLE_Acc1_0_3;
          }
        else
          {
            MR_Integer mercury__ranges__L_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_24 = (mercury__ranges__L_15 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_26_26;
            void MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));

            {
              mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_24)), ((MR_Box) (mercury__ranges__U_16)), mercury__ranges__STATE_VARIABLE_Acc1_0_3, &mercury__ranges__STATE_VARIABLE_Acc1_25_25, mercury__ranges__STATE_VARIABLE_Acc2_0_5, &mercury__ranges__STATE_VARIABLE_Acc2_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Rest_17;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_3 = mercury__ranges__STATE_VARIABLE_Acc1_25_25;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_5 = mercury__ranges__STATE_VARIABLE_Acc2_26_26;

              mercury__ranges__STATE_VARIABLE_Acc2_0_5 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_5;
              mercury__ranges__STATE_VARIABLE_Acc1_0_3 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_3;
              mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__range_foldl2_6_p_1(
  MR_Word mercury__ranges__TypeInfo_for_A_30,
  MR_Word mercury__ranges__TypeInfo_for_B_31,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc2_6 = mercury__ranges__STATE_VARIABLE_Acc2_0_5;
            *mercury__ranges__STATE_VARIABLE_Acc1_4 = mercury__ranges__STATE_VARIABLE_Acc1_0_3;
          }
        else
          {
            MR_Integer mercury__ranges__L_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_24 = (mercury__ranges__L_15 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_26_26;
            void MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));

            {
              mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_24)), ((MR_Box) (mercury__ranges__U_16)), mercury__ranges__STATE_VARIABLE_Acc1_0_3, &mercury__ranges__STATE_VARIABLE_Acc1_25_25, mercury__ranges__STATE_VARIABLE_Acc2_0_5, &mercury__ranges__STATE_VARIABLE_Acc2_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Rest_17;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_3 = mercury__ranges__STATE_VARIABLE_Acc1_25_25;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_5 = mercury__ranges__STATE_VARIABLE_Acc2_26_26;

              mercury__ranges__STATE_VARIABLE_Acc2_0_5 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_5;
              mercury__ranges__STATE_VARIABLE_Acc1_0_3 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_3;
              mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__range_foldl2_6_p_0(
  MR_Word mercury__ranges__TypeInfo_for_A_30,
  MR_Word mercury__ranges__TypeInfo_for_B_31,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc2_6 = mercury__ranges__STATE_VARIABLE_Acc2_0_5;
            *mercury__ranges__STATE_VARIABLE_Acc1_4 = mercury__ranges__STATE_VARIABLE_Acc1_0_3;
          }
        else
          {
            MR_Integer mercury__ranges__L_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_24 = (mercury__ranges__L_15 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_25_25;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_26_26;
            void MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));

            {
              mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_24)), ((MR_Box) (mercury__ranges__U_16)), mercury__ranges__STATE_VARIABLE_Acc1_0_3, &mercury__ranges__STATE_VARIABLE_Acc1_25_25, mercury__ranges__STATE_VARIABLE_Acc2_0_5, &mercury__ranges__STATE_VARIABLE_Acc2_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Rest_17;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_3 = mercury__ranges__STATE_VARIABLE_Acc1_25_25;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_5 = mercury__ranges__STATE_VARIABLE_Acc2_26_26;

              mercury__ranges__STATE_VARIABLE_Acc2_0_5 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_5;
              mercury__ranges__STATE_VARIABLE_Acc1_0_3 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_3;
              mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__range_foldl_4_p_5(
  MR_Word mercury__ranges__TypeInfo_for_A_20,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc_4 = mercury__ranges__STATE_VARIABLE_Acc_0_3;
            mercury__ranges__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__ranges__L_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_16 = (mercury__ranges__L_10 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc_17_17;
            MR_bool MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));

            {
              mercury__ranges__succeeded = mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_16)), ((MR_Box) (mercury__ranges__U_11)), mercury__ranges__STATE_VARIABLE_Acc_0_3, &mercury__ranges__STATE_VARIABLE_Acc_17_17);
            }
            if (mercury__ranges__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Rest_12;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_3 = mercury__ranges__STATE_VARIABLE_Acc_17_17;

                  mercury__ranges__STATE_VARIABLE_Acc_0_3 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_3;
                  mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__range_foldl_4_p_4(
  MR_Word mercury__ranges__TypeInfo_for_A_20,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc_4 = mercury__ranges__STATE_VARIABLE_Acc_0_3;
            mercury__ranges__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__ranges__L_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_16 = (mercury__ranges__L_10 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc_17_17;
            MR_bool MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));

            {
              mercury__ranges__succeeded = mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_16)), ((MR_Box) (mercury__ranges__U_11)), mercury__ranges__STATE_VARIABLE_Acc_0_3, &mercury__ranges__STATE_VARIABLE_Acc_17_17);
            }
            if (mercury__ranges__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Rest_12;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_3 = mercury__ranges__STATE_VARIABLE_Acc_17_17;

                  mercury__ranges__STATE_VARIABLE_Acc_0_3 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_3;
                  mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__range_foldl_4_p_3(
  MR_Word mercury__ranges__TypeInfo_for_A_20,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc_4 = mercury__ranges__STATE_VARIABLE_Acc_0_3;
            mercury__ranges__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__ranges__L_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_16 = (mercury__ranges__L_10 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc_17_17;
            MR_bool MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));

            {
              mercury__ranges__succeeded = mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_16)), ((MR_Box) (mercury__ranges__U_11)), mercury__ranges__STATE_VARIABLE_Acc_0_3, &mercury__ranges__STATE_VARIABLE_Acc_17_17);
            }
            if (mercury__ranges__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Rest_12;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_3 = mercury__ranges__STATE_VARIABLE_Acc_17_17;

                  mercury__ranges__STATE_VARIABLE_Acc_0_3 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_3;
                  mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__range_foldl_4_p_2(
  MR_Word mercury__ranges__TypeInfo_for_A_20,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__ranges__STATE_VARIABLE_Acc_4 = mercury__ranges__STATE_VARIABLE_Acc_0_3;
        else
          {
            MR_Integer mercury__ranges__L_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_16 = (mercury__ranges__L_10 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc_17_17;
            void MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));

            {
              mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_16)), ((MR_Box) (mercury__ranges__U_11)), mercury__ranges__STATE_VARIABLE_Acc_0_3, &mercury__ranges__STATE_VARIABLE_Acc_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Rest_12;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_3 = mercury__ranges__STATE_VARIABLE_Acc_17_17;

              mercury__ranges__STATE_VARIABLE_Acc_0_3 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_3;
              mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__range_foldl_4_p_1(
  MR_Word mercury__ranges__TypeInfo_for_A_20,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__ranges__STATE_VARIABLE_Acc_4 = mercury__ranges__STATE_VARIABLE_Acc_0_3;
        else
          {
            MR_Integer mercury__ranges__L_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_16 = (mercury__ranges__L_10 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc_17_17;
            void MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));

            {
              mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_16)), ((MR_Box) (mercury__ranges__U_11)), mercury__ranges__STATE_VARIABLE_Acc_0_3, &mercury__ranges__STATE_VARIABLE_Acc_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Rest_12;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_3 = mercury__ranges__STATE_VARIABLE_Acc_17_17;

              mercury__ranges__STATE_VARIABLE_Acc_0_3 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_3;
              mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__range_foldl_4_p_0(
  MR_Word mercury__ranges__TypeInfo_for_A_20,
  MR_Word mercury__ranges__P_1,
  MR_Word mercury__ranges__HeadVar__2_2,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__ranges__STATE_VARIABLE_Acc_4 = mercury__ranges__STATE_VARIABLE_Acc_0_3;
        else
          {
            MR_Integer mercury__ranges__L_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_16 = (mercury__ranges__L_10 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc_17_17;
            void MR_CALL (* mercury__ranges__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__ranges__P_1, (MR_Integer) 1)));

            {
              mercury__ranges__func_0(((MR_Box) mercury__ranges__P_1), ((MR_Box) (mercury__ranges__Var_16)), ((MR_Box) (mercury__ranges__U_11)), mercury__ranges__STATE_VARIABLE_Acc_0_3, &mercury__ranges__STATE_VARIABLE_Acc_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Rest_12;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_3 = mercury__ranges__STATE_VARIABLE_Acc_17_17;

              mercury__ranges__STATE_VARIABLE_Acc_0_3 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_3;
              mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__foldr_4_p_5(
  MR_Word mercury__ranges__TypeInfo_for_A_17,
  MR_Word mercury__ranges__P_5,
  MR_Word mercury__ranges__Ranges_6,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_11,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_12)
{
  {
    MR_bool mercury__ranges__succeeded;

    if ((mercury__ranges__Ranges_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__ranges__STATE_VARIABLE_Acc_12 = mercury__ranges__STATE_VARIABLE_Acc_0_11;
        mercury__ranges__succeeded = MR_TRUE;
      }
    else
      {
        MR_Integer mercury__ranges__L_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 0)));
        MR_Integer mercury__ranges__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 1)));
        MR_Word mercury__ranges__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 2)));
        MR_Box mercury__ranges__STATE_VARIABLE_Acc_13_13;
        MR_Integer mercury__ranges__Var_14;
        MR_Integer mercury__ranges__Var_16;

        {
          mercury__ranges__succeeded = mercury__ranges__foldr_4_p_5(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Rest_10, mercury__ranges__STATE_VARIABLE_Acc_0_11, &mercury__ranges__STATE_VARIABLE_Acc_13_13);
        }
        if (mercury__ranges__succeeded)
          {
            mercury__ranges__Var_16 = (MR_Integer) 1;
            mercury__ranges__Var_14 = (mercury__ranges__L_8 + mercury__ranges__Var_16);
            {
              mercury__ranges__succeeded = mercury__int__fold_down_5_p_6(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Var_14, mercury__ranges__H_9, mercury__ranges__STATE_VARIABLE_Acc_13_13, mercury__ranges__STATE_VARIABLE_Acc_12);
            }
          }
      }
    return mercury__ranges__succeeded;
  }
}

MR_bool MR_CALL 
mercury__ranges__foldr_4_p_4(
  MR_Word mercury__ranges__TypeInfo_for_A_17,
  MR_Word mercury__ranges__P_5,
  MR_Word mercury__ranges__Ranges_6,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_11,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_12)
{
  {
    MR_bool mercury__ranges__succeeded;

    if ((mercury__ranges__Ranges_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__ranges__STATE_VARIABLE_Acc_12 = mercury__ranges__STATE_VARIABLE_Acc_0_11;
        mercury__ranges__succeeded = MR_TRUE;
      }
    else
      {
        MR_Integer mercury__ranges__L_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 0)));
        MR_Integer mercury__ranges__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 1)));
        MR_Word mercury__ranges__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 2)));
        MR_Box mercury__ranges__STATE_VARIABLE_Acc_13_13;
        MR_Integer mercury__ranges__Var_14;
        MR_Integer mercury__ranges__Var_16;

        {
          mercury__ranges__succeeded = mercury__ranges__foldr_4_p_4(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Rest_10, mercury__ranges__STATE_VARIABLE_Acc_0_11, &mercury__ranges__STATE_VARIABLE_Acc_13_13);
        }
        if (mercury__ranges__succeeded)
          {
            mercury__ranges__Var_16 = (MR_Integer) 1;
            mercury__ranges__Var_14 = (mercury__ranges__L_8 + mercury__ranges__Var_16);
            {
              mercury__ranges__succeeded = mercury__int__fold_down_5_p_5(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Var_14, mercury__ranges__H_9, mercury__ranges__STATE_VARIABLE_Acc_13_13, mercury__ranges__STATE_VARIABLE_Acc_12);
            }
          }
      }
    return mercury__ranges__succeeded;
  }
}

MR_bool MR_CALL 
mercury__ranges__foldr_4_p_3(
  MR_Word mercury__ranges__TypeInfo_for_A_17,
  MR_Word mercury__ranges__P_5,
  MR_Word mercury__ranges__Ranges_6,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_11,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_12)
{
  {
    MR_bool mercury__ranges__succeeded;

    if ((mercury__ranges__Ranges_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__ranges__STATE_VARIABLE_Acc_12 = mercury__ranges__STATE_VARIABLE_Acc_0_11;
        mercury__ranges__succeeded = MR_TRUE;
      }
    else
      {
        MR_Integer mercury__ranges__L_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 0)));
        MR_Integer mercury__ranges__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 1)));
        MR_Word mercury__ranges__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 2)));
        MR_Box mercury__ranges__STATE_VARIABLE_Acc_13_13;
        MR_Integer mercury__ranges__Var_14;
        MR_Integer mercury__ranges__Var_16;

        {
          mercury__ranges__succeeded = mercury__ranges__foldr_4_p_3(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Rest_10, mercury__ranges__STATE_VARIABLE_Acc_0_11, &mercury__ranges__STATE_VARIABLE_Acc_13_13);
        }
        if (mercury__ranges__succeeded)
          {
            mercury__ranges__Var_16 = (MR_Integer) 1;
            mercury__ranges__Var_14 = (mercury__ranges__L_8 + mercury__ranges__Var_16);
            {
              mercury__ranges__succeeded = mercury__int__fold_down_5_p_4(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Var_14, mercury__ranges__H_9, mercury__ranges__STATE_VARIABLE_Acc_13_13, mercury__ranges__STATE_VARIABLE_Acc_12);
            }
          }
      }
    return mercury__ranges__succeeded;
  }
}

void MR_CALL 
mercury__ranges__foldr_4_p_2(
  MR_Word mercury__ranges__TypeInfo_for_A_17,
  MR_Word mercury__ranges__P_5,
  MR_Word mercury__ranges__Ranges_6,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_11,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_12)
{
  {
    MR_bool mercury__ranges__succeeded;

    if ((mercury__ranges__Ranges_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__ranges__STATE_VARIABLE_Acc_12 = mercury__ranges__STATE_VARIABLE_Acc_0_11;
    else
      {
        MR_Integer mercury__ranges__L_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 0)));
        MR_Integer mercury__ranges__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 1)));
        MR_Word mercury__ranges__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 2)));
        MR_Box mercury__ranges__STATE_VARIABLE_Acc_13_13;
        MR_Integer mercury__ranges__Var_14;

        {
          mercury__ranges__foldr_4_p_2(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Rest_10, mercury__ranges__STATE_VARIABLE_Acc_0_11, &mercury__ranges__STATE_VARIABLE_Acc_13_13);
        }
        mercury__ranges__Var_14 = (mercury__ranges__L_8 + (MR_Integer) 1);
        {
          mercury__int__fold_down_5_p_2(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Var_14, mercury__ranges__H_9, mercury__ranges__STATE_VARIABLE_Acc_13_13, mercury__ranges__STATE_VARIABLE_Acc_12);
        }
      }
  }
}

void MR_CALL 
mercury__ranges__foldr_4_p_1(
  MR_Word mercury__ranges__TypeInfo_for_A_17,
  MR_Word mercury__ranges__P_5,
  MR_Word mercury__ranges__Ranges_6,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_11,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_12)
{
  {
    MR_bool mercury__ranges__succeeded;

    if ((mercury__ranges__Ranges_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__ranges__STATE_VARIABLE_Acc_12 = mercury__ranges__STATE_VARIABLE_Acc_0_11;
    else
      {
        MR_Integer mercury__ranges__L_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 0)));
        MR_Integer mercury__ranges__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 1)));
        MR_Word mercury__ranges__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 2)));
        MR_Box mercury__ranges__STATE_VARIABLE_Acc_13_13;
        MR_Integer mercury__ranges__Var_14;

        {
          mercury__ranges__foldr_4_p_1(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Rest_10, mercury__ranges__STATE_VARIABLE_Acc_0_11, &mercury__ranges__STATE_VARIABLE_Acc_13_13);
        }
        mercury__ranges__Var_14 = (mercury__ranges__L_8 + (MR_Integer) 1);
        {
          mercury__int__fold_down_5_p_1(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Var_14, mercury__ranges__H_9, mercury__ranges__STATE_VARIABLE_Acc_13_13, mercury__ranges__STATE_VARIABLE_Acc_12);
        }
      }
  }
}

void MR_CALL 
mercury__ranges__foldr_4_p_0(
  MR_Word mercury__ranges__TypeInfo_for_A_17,
  MR_Word mercury__ranges__P_5,
  MR_Word mercury__ranges__Ranges_6,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_11,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_12)
{
  {
    MR_bool mercury__ranges__succeeded;

    if ((mercury__ranges__Ranges_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__ranges__STATE_VARIABLE_Acc_12 = mercury__ranges__STATE_VARIABLE_Acc_0_11;
    else
      {
        MR_Integer mercury__ranges__L_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 0)));
        MR_Integer mercury__ranges__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 1)));
        MR_Word mercury__ranges__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 2)));
        MR_Box mercury__ranges__STATE_VARIABLE_Acc_13_13;
        MR_Integer mercury__ranges__Var_14;

        {
          mercury__ranges__foldr_4_p_0(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Rest_10, mercury__ranges__STATE_VARIABLE_Acc_0_11, &mercury__ranges__STATE_VARIABLE_Acc_13_13);
        }
        mercury__ranges__Var_14 = (mercury__ranges__L_8 + (MR_Integer) 1);
        {
          mercury__int__fold_down_5_p_0(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Var_14, mercury__ranges__H_9, mercury__ranges__STATE_VARIABLE_Acc_13_13, mercury__ranges__STATE_VARIABLE_Acc_12);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__ranges__foldl3_8_p_3(
  MR_Word mercury__ranges__TypeInfo_for_A_31,
  MR_Word mercury__ranges__TypeInfo_for_B_32,
  MR_Word mercury__ranges__TypeInfo_for_C_33,
  MR_Word mercury__ranges__P_9,
  MR_Word mercury__ranges__Ranges_10,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc3_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc1_18 = mercury__ranges__STATE_VARIABLE_Acc1_0_17;
            *mercury__ranges__STATE_VARIABLE_Acc2_20 = mercury__ranges__STATE_VARIABLE_Acc2_0_19;
            *mercury__ranges__STATE_VARIABLE_Acc3_22 = mercury__ranges__STATE_VARIABLE_Acc3_0_21;
            mercury__ranges__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__ranges__L_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_10, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_10, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_10, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_23 = (mercury__ranges__L_14 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_24_24;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_25_25;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc3_26_26;

            {
              mercury__ranges__succeeded = mercury__int__fold_up3_9_p_7(mercury__ranges__TypeInfo_for_A_31, mercury__ranges__TypeInfo_for_B_32, mercury__ranges__TypeInfo_for_C_33, mercury__ranges__P_9, mercury__ranges__Var_23, mercury__ranges__U_15, mercury__ranges__STATE_VARIABLE_Acc1_0_17, &mercury__ranges__STATE_VARIABLE_Acc1_24_24, mercury__ranges__STATE_VARIABLE_Acc2_0_19, &mercury__ranges__STATE_VARIABLE_Acc2_25_25, mercury__ranges__STATE_VARIABLE_Acc3_0_21, &mercury__ranges__STATE_VARIABLE_Acc3_26_26);
            }
            if (mercury__ranges__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_Ranges_10 = mercury__ranges__Rest_16;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_17 = mercury__ranges__STATE_VARIABLE_Acc1_24_24;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_19 = mercury__ranges__STATE_VARIABLE_Acc2_25_25;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc3_0_21 = mercury__ranges__STATE_VARIABLE_Acc3_26_26;

                  mercury__ranges__STATE_VARIABLE_Acc3_0_21 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc3_0_21;
                  mercury__ranges__STATE_VARIABLE_Acc2_0_19 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_19;
                  mercury__ranges__STATE_VARIABLE_Acc1_0_17 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_17;
                  mercury__ranges__Ranges_10 = mercury__ranges__next_value_of_Ranges_10;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__foldl3_8_p_2(
  MR_Word mercury__ranges__TypeInfo_for_A_31,
  MR_Word mercury__ranges__TypeInfo_for_B_32,
  MR_Word mercury__ranges__TypeInfo_for_C_33,
  MR_Word mercury__ranges__P_9,
  MR_Word mercury__ranges__Ranges_10,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc3_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc1_18 = mercury__ranges__STATE_VARIABLE_Acc1_0_17;
            *mercury__ranges__STATE_VARIABLE_Acc2_20 = mercury__ranges__STATE_VARIABLE_Acc2_0_19;
            *mercury__ranges__STATE_VARIABLE_Acc3_22 = mercury__ranges__STATE_VARIABLE_Acc3_0_21;
          }
        else
          {
            MR_Integer mercury__ranges__L_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_10, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_10, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_10, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_23 = (mercury__ranges__L_14 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_24_24;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_25_25;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc3_26_26;

            {
              mercury__int__fold_up3_9_p_2(mercury__ranges__TypeInfo_for_A_31, mercury__ranges__TypeInfo_for_B_32, mercury__ranges__TypeInfo_for_C_33, mercury__ranges__P_9, mercury__ranges__Var_23, mercury__ranges__U_15, mercury__ranges__STATE_VARIABLE_Acc1_0_17, &mercury__ranges__STATE_VARIABLE_Acc1_24_24, mercury__ranges__STATE_VARIABLE_Acc2_0_19, &mercury__ranges__STATE_VARIABLE_Acc2_25_25, mercury__ranges__STATE_VARIABLE_Acc3_0_21, &mercury__ranges__STATE_VARIABLE_Acc3_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_Ranges_10 = mercury__ranges__Rest_16;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_17 = mercury__ranges__STATE_VARIABLE_Acc1_24_24;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_19 = mercury__ranges__STATE_VARIABLE_Acc2_25_25;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc3_0_21 = mercury__ranges__STATE_VARIABLE_Acc3_26_26;

              mercury__ranges__STATE_VARIABLE_Acc3_0_21 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc3_0_21;
              mercury__ranges__STATE_VARIABLE_Acc2_0_19 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_19;
              mercury__ranges__STATE_VARIABLE_Acc1_0_17 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_17;
              mercury__ranges__Ranges_10 = mercury__ranges__next_value_of_Ranges_10;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__foldl3_8_p_1(
  MR_Word mercury__ranges__TypeInfo_for_A_31,
  MR_Word mercury__ranges__TypeInfo_for_B_32,
  MR_Word mercury__ranges__TypeInfo_for_C_33,
  MR_Word mercury__ranges__P_9,
  MR_Word mercury__ranges__Ranges_10,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc3_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc1_18 = mercury__ranges__STATE_VARIABLE_Acc1_0_17;
            *mercury__ranges__STATE_VARIABLE_Acc2_20 = mercury__ranges__STATE_VARIABLE_Acc2_0_19;
            *mercury__ranges__STATE_VARIABLE_Acc3_22 = mercury__ranges__STATE_VARIABLE_Acc3_0_21;
          }
        else
          {
            MR_Integer mercury__ranges__L_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_10, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_10, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_10, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_23 = (mercury__ranges__L_14 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_24_24;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_25_25;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc3_26_26;

            {
              mercury__int__fold_up3_9_p_1(mercury__ranges__TypeInfo_for_A_31, mercury__ranges__TypeInfo_for_B_32, mercury__ranges__TypeInfo_for_C_33, mercury__ranges__P_9, mercury__ranges__Var_23, mercury__ranges__U_15, mercury__ranges__STATE_VARIABLE_Acc1_0_17, &mercury__ranges__STATE_VARIABLE_Acc1_24_24, mercury__ranges__STATE_VARIABLE_Acc2_0_19, &mercury__ranges__STATE_VARIABLE_Acc2_25_25, mercury__ranges__STATE_VARIABLE_Acc3_0_21, &mercury__ranges__STATE_VARIABLE_Acc3_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_Ranges_10 = mercury__ranges__Rest_16;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_17 = mercury__ranges__STATE_VARIABLE_Acc1_24_24;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_19 = mercury__ranges__STATE_VARIABLE_Acc2_25_25;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc3_0_21 = mercury__ranges__STATE_VARIABLE_Acc3_26_26;

              mercury__ranges__STATE_VARIABLE_Acc3_0_21 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc3_0_21;
              mercury__ranges__STATE_VARIABLE_Acc2_0_19 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_19;
              mercury__ranges__STATE_VARIABLE_Acc1_0_17 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_17;
              mercury__ranges__Ranges_10 = mercury__ranges__next_value_of_Ranges_10;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__foldl3_8_p_0(
  MR_Word mercury__ranges__TypeInfo_for_A_31,
  MR_Word mercury__ranges__TypeInfo_for_B_32,
  MR_Word mercury__ranges__TypeInfo_for_C_33,
  MR_Word mercury__ranges__P_9,
  MR_Word mercury__ranges__Ranges_10,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_20,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc3_0_21,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc3_22)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc1_18 = mercury__ranges__STATE_VARIABLE_Acc1_0_17;
            *mercury__ranges__STATE_VARIABLE_Acc2_20 = mercury__ranges__STATE_VARIABLE_Acc2_0_19;
            *mercury__ranges__STATE_VARIABLE_Acc3_22 = mercury__ranges__STATE_VARIABLE_Acc3_0_21;
          }
        else
          {
            MR_Integer mercury__ranges__L_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_10, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_10, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_10, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_23 = (mercury__ranges__L_14 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_24_24;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_25_25;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc3_26_26;

            {
              mercury__int__fold_up3_9_p_0(mercury__ranges__TypeInfo_for_A_31, mercury__ranges__TypeInfo_for_B_32, mercury__ranges__TypeInfo_for_C_33, mercury__ranges__P_9, mercury__ranges__Var_23, mercury__ranges__U_15, mercury__ranges__STATE_VARIABLE_Acc1_0_17, &mercury__ranges__STATE_VARIABLE_Acc1_24_24, mercury__ranges__STATE_VARIABLE_Acc2_0_19, &mercury__ranges__STATE_VARIABLE_Acc2_25_25, mercury__ranges__STATE_VARIABLE_Acc3_0_21, &mercury__ranges__STATE_VARIABLE_Acc3_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_Ranges_10 = mercury__ranges__Rest_16;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_17 = mercury__ranges__STATE_VARIABLE_Acc1_24_24;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_19 = mercury__ranges__STATE_VARIABLE_Acc2_25_25;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc3_0_21 = mercury__ranges__STATE_VARIABLE_Acc3_26_26;

              mercury__ranges__STATE_VARIABLE_Acc3_0_21 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc3_0_21;
              mercury__ranges__STATE_VARIABLE_Acc2_0_19 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_19;
              mercury__ranges__STATE_VARIABLE_Acc1_0_17 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_17;
              mercury__ranges__Ranges_10 = mercury__ranges__next_value_of_Ranges_10;
            }
            continue;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__foldl2_6_p_5(
  MR_Word mercury__ranges__TypeInfo_for_A_24,
  MR_Word mercury__ranges__TypeInfo_for_B_25,
  MR_Word mercury__ranges__P_7,
  MR_Word mercury__ranges__Ranges_8,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc1_15 = mercury__ranges__STATE_VARIABLE_Acc1_0_14;
            *mercury__ranges__STATE_VARIABLE_Acc2_17 = mercury__ranges__STATE_VARIABLE_Acc2_0_16;
            mercury__ranges__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__ranges__L_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_18 = (mercury__ranges__L_11 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_20_20;

            {
              mercury__ranges__succeeded = mercury__int__fold_up2_7_p_7(mercury__ranges__TypeInfo_for_A_24, mercury__ranges__TypeInfo_for_B_25, mercury__ranges__P_7, mercury__ranges__Var_18, mercury__ranges__U_12, mercury__ranges__STATE_VARIABLE_Acc1_0_14, &mercury__ranges__STATE_VARIABLE_Acc1_19_19, mercury__ranges__STATE_VARIABLE_Acc2_0_16, &mercury__ranges__STATE_VARIABLE_Acc2_20_20);
            }
            if (mercury__ranges__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_Ranges_8 = mercury__ranges__Rest_13;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_14 = mercury__ranges__STATE_VARIABLE_Acc1_19_19;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_16 = mercury__ranges__STATE_VARIABLE_Acc2_20_20;

                  mercury__ranges__STATE_VARIABLE_Acc2_0_16 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_16;
                  mercury__ranges__STATE_VARIABLE_Acc1_0_14 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_14;
                  mercury__ranges__Ranges_8 = mercury__ranges__next_value_of_Ranges_8;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__foldl2_6_p_4(
  MR_Word mercury__ranges__TypeInfo_for_A_24,
  MR_Word mercury__ranges__TypeInfo_for_B_25,
  MR_Word mercury__ranges__P_7,
  MR_Word mercury__ranges__Ranges_8,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc1_15 = mercury__ranges__STATE_VARIABLE_Acc1_0_14;
            *mercury__ranges__STATE_VARIABLE_Acc2_17 = mercury__ranges__STATE_VARIABLE_Acc2_0_16;
            mercury__ranges__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__ranges__L_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_18 = (mercury__ranges__L_11 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_20_20;

            {
              mercury__ranges__succeeded = mercury__int__fold_up2_7_p_6(mercury__ranges__TypeInfo_for_A_24, mercury__ranges__TypeInfo_for_B_25, mercury__ranges__P_7, mercury__ranges__Var_18, mercury__ranges__U_12, mercury__ranges__STATE_VARIABLE_Acc1_0_14, &mercury__ranges__STATE_VARIABLE_Acc1_19_19, mercury__ranges__STATE_VARIABLE_Acc2_0_16, &mercury__ranges__STATE_VARIABLE_Acc2_20_20);
            }
            if (mercury__ranges__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_Ranges_8 = mercury__ranges__Rest_13;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_14 = mercury__ranges__STATE_VARIABLE_Acc1_19_19;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_16 = mercury__ranges__STATE_VARIABLE_Acc2_20_20;

                  mercury__ranges__STATE_VARIABLE_Acc2_0_16 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_16;
                  mercury__ranges__STATE_VARIABLE_Acc1_0_14 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_14;
                  mercury__ranges__Ranges_8 = mercury__ranges__next_value_of_Ranges_8;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__foldl2_6_p_3(
  MR_Word mercury__ranges__TypeInfo_for_A_24,
  MR_Word mercury__ranges__TypeInfo_for_B_25,
  MR_Word mercury__ranges__P_7,
  MR_Word mercury__ranges__Ranges_8,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc1_15 = mercury__ranges__STATE_VARIABLE_Acc1_0_14;
            *mercury__ranges__STATE_VARIABLE_Acc2_17 = mercury__ranges__STATE_VARIABLE_Acc2_0_16;
            mercury__ranges__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__ranges__L_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_18 = (mercury__ranges__L_11 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_20_20;

            {
              mercury__ranges__succeeded = mercury__int__fold_up2_7_p_5(mercury__ranges__TypeInfo_for_A_24, mercury__ranges__TypeInfo_for_B_25, mercury__ranges__P_7, mercury__ranges__Var_18, mercury__ranges__U_12, mercury__ranges__STATE_VARIABLE_Acc1_0_14, &mercury__ranges__STATE_VARIABLE_Acc1_19_19, mercury__ranges__STATE_VARIABLE_Acc2_0_16, &mercury__ranges__STATE_VARIABLE_Acc2_20_20);
            }
            if (mercury__ranges__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_Ranges_8 = mercury__ranges__Rest_13;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_14 = mercury__ranges__STATE_VARIABLE_Acc1_19_19;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_16 = mercury__ranges__STATE_VARIABLE_Acc2_20_20;

                  mercury__ranges__STATE_VARIABLE_Acc2_0_16 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_16;
                  mercury__ranges__STATE_VARIABLE_Acc1_0_14 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_14;
                  mercury__ranges__Ranges_8 = mercury__ranges__next_value_of_Ranges_8;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__foldl2_6_p_2(
  MR_Word mercury__ranges__TypeInfo_for_A_24,
  MR_Word mercury__ranges__TypeInfo_for_B_25,
  MR_Word mercury__ranges__P_7,
  MR_Word mercury__ranges__Ranges_8,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc1_15 = mercury__ranges__STATE_VARIABLE_Acc1_0_14;
            *mercury__ranges__STATE_VARIABLE_Acc2_17 = mercury__ranges__STATE_VARIABLE_Acc2_0_16;
          }
        else
          {
            MR_Integer mercury__ranges__L_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_18 = (mercury__ranges__L_11 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_20_20;

            {
              mercury__int__fold_up2_7_p_2(mercury__ranges__TypeInfo_for_A_24, mercury__ranges__TypeInfo_for_B_25, mercury__ranges__P_7, mercury__ranges__Var_18, mercury__ranges__U_12, mercury__ranges__STATE_VARIABLE_Acc1_0_14, &mercury__ranges__STATE_VARIABLE_Acc1_19_19, mercury__ranges__STATE_VARIABLE_Acc2_0_16, &mercury__ranges__STATE_VARIABLE_Acc2_20_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_Ranges_8 = mercury__ranges__Rest_13;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_14 = mercury__ranges__STATE_VARIABLE_Acc1_19_19;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_16 = mercury__ranges__STATE_VARIABLE_Acc2_20_20;

              mercury__ranges__STATE_VARIABLE_Acc2_0_16 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_16;
              mercury__ranges__STATE_VARIABLE_Acc1_0_14 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_14;
              mercury__ranges__Ranges_8 = mercury__ranges__next_value_of_Ranges_8;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__foldl2_6_p_1(
  MR_Word mercury__ranges__TypeInfo_for_A_24,
  MR_Word mercury__ranges__TypeInfo_for_B_25,
  MR_Word mercury__ranges__P_7,
  MR_Word mercury__ranges__Ranges_8,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc1_15 = mercury__ranges__STATE_VARIABLE_Acc1_0_14;
            *mercury__ranges__STATE_VARIABLE_Acc2_17 = mercury__ranges__STATE_VARIABLE_Acc2_0_16;
          }
        else
          {
            MR_Integer mercury__ranges__L_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_18 = (mercury__ranges__L_11 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_20_20;

            {
              mercury__int__fold_up2_7_p_1(mercury__ranges__TypeInfo_for_A_24, mercury__ranges__TypeInfo_for_B_25, mercury__ranges__P_7, mercury__ranges__Var_18, mercury__ranges__U_12, mercury__ranges__STATE_VARIABLE_Acc1_0_14, &mercury__ranges__STATE_VARIABLE_Acc1_19_19, mercury__ranges__STATE_VARIABLE_Acc2_0_16, &mercury__ranges__STATE_VARIABLE_Acc2_20_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_Ranges_8 = mercury__ranges__Rest_13;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_14 = mercury__ranges__STATE_VARIABLE_Acc1_19_19;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_16 = mercury__ranges__STATE_VARIABLE_Acc2_20_20;

              mercury__ranges__STATE_VARIABLE_Acc2_0_16 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_16;
              mercury__ranges__STATE_VARIABLE_Acc1_0_14 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_14;
              mercury__ranges__Ranges_8 = mercury__ranges__next_value_of_Ranges_8;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__foldl2_6_p_0(
  MR_Word mercury__ranges__TypeInfo_for_A_24,
  MR_Word mercury__ranges__TypeInfo_for_B_25,
  MR_Word mercury__ranges__P_7,
  MR_Word mercury__ranges__Ranges_8,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc1_0_14,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc1_15,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc2_0_16,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc2_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc1_15 = mercury__ranges__STATE_VARIABLE_Acc1_0_14;
            *mercury__ranges__STATE_VARIABLE_Acc2_17 = mercury__ranges__STATE_VARIABLE_Acc2_0_16;
          }
        else
          {
            MR_Integer mercury__ranges__L_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_8, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_18 = (mercury__ranges__L_11 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc1_19_19;
            MR_Box mercury__ranges__STATE_VARIABLE_Acc2_20_20;

            {
              mercury__int__fold_up2_7_p_0(mercury__ranges__TypeInfo_for_A_24, mercury__ranges__TypeInfo_for_B_25, mercury__ranges__P_7, mercury__ranges__Var_18, mercury__ranges__U_12, mercury__ranges__STATE_VARIABLE_Acc1_0_14, &mercury__ranges__STATE_VARIABLE_Acc1_19_19, mercury__ranges__STATE_VARIABLE_Acc2_0_16, &mercury__ranges__STATE_VARIABLE_Acc2_20_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_Ranges_8 = mercury__ranges__Rest_13;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_14 = mercury__ranges__STATE_VARIABLE_Acc1_19_19;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_16 = mercury__ranges__STATE_VARIABLE_Acc2_20_20;

              mercury__ranges__STATE_VARIABLE_Acc2_0_16 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc2_0_16;
              mercury__ranges__STATE_VARIABLE_Acc1_0_14 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc1_0_14;
              mercury__ranges__Ranges_8 = mercury__ranges__next_value_of_Ranges_8;
            }
            continue;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__foldl_4_p_5(
  MR_Word mercury__ranges__TypeInfo_for_A_17,
  MR_Word mercury__ranges__P_5,
  MR_Word mercury__ranges__Ranges_6,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_11,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc_12 = mercury__ranges__STATE_VARIABLE_Acc_0_11;
            mercury__ranges__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__ranges__L_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_13 = (mercury__ranges__L_8 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc_14_14;

            {
              mercury__ranges__succeeded = mercury__int__fold_up_5_p_6(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Var_13, mercury__ranges__U_9, mercury__ranges__STATE_VARIABLE_Acc_0_11, &mercury__ranges__STATE_VARIABLE_Acc_14_14);
            }
            if (mercury__ranges__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_Ranges_6 = mercury__ranges__Rest_10;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_11 = mercury__ranges__STATE_VARIABLE_Acc_14_14;

                  mercury__ranges__STATE_VARIABLE_Acc_0_11 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_11;
                  mercury__ranges__Ranges_6 = mercury__ranges__next_value_of_Ranges_6;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__foldl_4_p_4(
  MR_Word mercury__ranges__TypeInfo_for_A_17,
  MR_Word mercury__ranges__P_5,
  MR_Word mercury__ranges__Ranges_6,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_11,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc_12 = mercury__ranges__STATE_VARIABLE_Acc_0_11;
            mercury__ranges__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__ranges__L_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_13 = (mercury__ranges__L_8 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc_14_14;

            {
              mercury__ranges__succeeded = mercury__int__fold_up_5_p_5(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Var_13, mercury__ranges__U_9, mercury__ranges__STATE_VARIABLE_Acc_0_11, &mercury__ranges__STATE_VARIABLE_Acc_14_14);
            }
            if (mercury__ranges__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_Ranges_6 = mercury__ranges__Rest_10;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_11 = mercury__ranges__STATE_VARIABLE_Acc_14_14;

                  mercury__ranges__STATE_VARIABLE_Acc_0_11 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_11;
                  mercury__ranges__Ranges_6 = mercury__ranges__next_value_of_Ranges_6;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__foldl_4_p_3(
  MR_Word mercury__ranges__TypeInfo_for_A_17,
  MR_Word mercury__ranges__P_5,
  MR_Word mercury__ranges__Ranges_6,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_11,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__STATE_VARIABLE_Acc_12 = mercury__ranges__STATE_VARIABLE_Acc_0_11;
            mercury__ranges__succeeded = MR_TRUE;
          }
        else
          {
            MR_Integer mercury__ranges__L_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_13 = (mercury__ranges__L_8 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc_14_14;

            {
              mercury__ranges__succeeded = mercury__int__fold_up_5_p_4(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Var_13, mercury__ranges__U_9, mercury__ranges__STATE_VARIABLE_Acc_0_11, &mercury__ranges__STATE_VARIABLE_Acc_14_14);
            }
            if (mercury__ranges__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_Ranges_6 = mercury__ranges__Rest_10;
                  MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_11 = mercury__ranges__STATE_VARIABLE_Acc_14_14;

                  mercury__ranges__STATE_VARIABLE_Acc_0_11 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_11;
                  mercury__ranges__Ranges_6 = mercury__ranges__next_value_of_Ranges_6;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__foldl_4_p_2(
  MR_Word mercury__ranges__TypeInfo_for_A_17,
  MR_Word mercury__ranges__P_5,
  MR_Word mercury__ranges__Ranges_6,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_11,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__ranges__STATE_VARIABLE_Acc_12 = mercury__ranges__STATE_VARIABLE_Acc_0_11;
        else
          {
            MR_Integer mercury__ranges__L_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_13 = (mercury__ranges__L_8 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc_14_14;

            {
              mercury__int__fold_up_5_p_2(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Var_13, mercury__ranges__U_9, mercury__ranges__STATE_VARIABLE_Acc_0_11, &mercury__ranges__STATE_VARIABLE_Acc_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_Ranges_6 = mercury__ranges__Rest_10;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_11 = mercury__ranges__STATE_VARIABLE_Acc_14_14;

              mercury__ranges__STATE_VARIABLE_Acc_0_11 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_11;
              mercury__ranges__Ranges_6 = mercury__ranges__next_value_of_Ranges_6;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__foldl_4_p_1(
  MR_Word mercury__ranges__TypeInfo_for_A_17,
  MR_Word mercury__ranges__P_5,
  MR_Word mercury__ranges__Ranges_6,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_11,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__ranges__STATE_VARIABLE_Acc_12 = mercury__ranges__STATE_VARIABLE_Acc_0_11;
        else
          {
            MR_Integer mercury__ranges__L_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_13 = (mercury__ranges__L_8 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc_14_14;

            {
              mercury__int__fold_up_5_p_1(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Var_13, mercury__ranges__U_9, mercury__ranges__STATE_VARIABLE_Acc_0_11, &mercury__ranges__STATE_VARIABLE_Acc_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_Ranges_6 = mercury__ranges__Rest_10;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_11 = mercury__ranges__STATE_VARIABLE_Acc_14_14;

              mercury__ranges__STATE_VARIABLE_Acc_0_11 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_11;
              mercury__ranges__Ranges_6 = mercury__ranges__next_value_of_Ranges_6;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__foldl_4_p_0(
  MR_Word mercury__ranges__TypeInfo_for_A_17,
  MR_Word mercury__ranges__P_5,
  MR_Word mercury__ranges__Ranges_6,
  MR_Box mercury__ranges__STATE_VARIABLE_Acc_0_11,
  MR_Box * mercury__ranges__STATE_VARIABLE_Acc_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__Ranges_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__ranges__STATE_VARIABLE_Acc_12 = mercury__ranges__STATE_VARIABLE_Acc_0_11;
        else
          {
            MR_Integer mercury__ranges__L_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 1)));
            MR_Word mercury__ranges__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_13 = (mercury__ranges__L_8 + (MR_Integer) 1);
            MR_Box mercury__ranges__STATE_VARIABLE_Acc_14_14;

            {
              mercury__int__fold_up_5_p_0(mercury__ranges__TypeInfo_for_A_17, mercury__ranges__P_5, mercury__ranges__Var_13, mercury__ranges__U_9, mercury__ranges__STATE_VARIABLE_Acc_0_11, &mercury__ranges__STATE_VARIABLE_Acc_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__ranges__next_value_of_Ranges_6 = mercury__ranges__Rest_10;
              MR_Box mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_11 = mercury__ranges__STATE_VARIABLE_Acc_14_14;

              mercury__ranges__STATE_VARIABLE_Acc_0_11 = mercury__ranges__next_value_of_STATE_VARIABLE_Acc_0_11;
              mercury__ranges__Ranges_6 = mercury__ranges__next_value_of_Ranges_6;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__ranges__compare_lex_3_p_0(
  MR_Word * mercury__ranges__Result_4,
  MR_Word mercury__ranges__A_5,
  MR_Word mercury__ranges__B_6)
{
  {
    MR_bool mercury__ranges__succeeded;

    if ((mercury__ranges__A_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__ranges__B_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__ranges__Result_4 = (MR_Integer) 0;
      else
        *mercury__ranges__Result_4 = (MR_Integer) 1;
    else
      {
        MR_Word mercury__ranges__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__A_5, (MR_Integer) 2)));
        MR_Integer mercury__ranges__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__A_5, (MR_Integer) 1)));
        MR_Integer mercury__ranges__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__A_5, (MR_Integer) 0)));

        if ((mercury__ranges__B_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__ranges__Result_4 = (MR_Integer) 2;
        else
          {
            MR_Integer mercury__ranges__LBB_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__B_6, (MR_Integer) 0)));
            MR_Integer mercury__ranges__UBB_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__B_6, (MR_Integer) 1)));
            MR_Word mercury__ranges__BPrime_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__B_6, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_19 = (mercury__ranges__Var_25 + (MR_Integer) 1);
            MR_Integer mercury__ranges__Var_20 = (mercury__ranges__LBB_16 + (MR_Integer) 1);

            {
              mercury__ranges__compare_lex_2_7_p_0(mercury__ranges__Result_4, mercury__ranges__Var_19, mercury__ranges__Var_24, mercury__ranges__Var_20, mercury__ranges__UBB_17, mercury__ranges__Var_23, mercury__ranges__BPrime_18);
            }
          }
      }
  }
}

MR_Word MR_CALL 
mercury__ranges__from_set_1_f_0(
  MR_Word mercury__ranges__Set_3)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__2_2;
    MR_Word mercury__ranges__Var_4 = (MR_Word) mercury__ranges__Set_3;

    {
      mercury__ranges__HeadVar__2_2 = mercury__ranges__from_list_1_f_0(mercury__ranges__Var_4);
    }
    return mercury__ranges__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__ranges__from_list_1_f_0(
  MR_Word mercury__ranges__List_3)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__2_2;
    MR_Word mercury__ranges__Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__ranges__foldl__ho8_4_p_in__list_0(mercury__ranges__List_3, mercury__ranges__Var_5, &mercury__ranges__HeadVar__2_2);
    }
    return mercury__ranges__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__ranges__to_sorted_list_1_f_0(
  MR_Word mercury__ranges__HeadVar__1_1)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__2_2;

    if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__ranges__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer mercury__ranges__L_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__ranges__H_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__ranges__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__ranges__Var_6;

        {
          mercury__ranges__Var_6 = mercury__ranges__to_sorted_list_1_f_0(mercury__ranges__Rest_5);
        }
        {
          mercury__ranges__HeadVar__2_2 = mercury__ranges__to_sorted_list_2_3_f_0(mercury__ranges__L_3, mercury__ranges__H_4, mercury__ranges__Var_6);
        }
      }
    return mercury__ranges__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__ranges__contraction_2_f_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Integer mercury__ranges__C_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;
        MR_Word mercury__ranges__HeadVar__3_3;

        if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer mercury__ranges__L_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__ranges__H_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__ranges__As_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));

            mercury__ranges__succeeded = (mercury__ranges__C_2 < (MR_Integer) 0);
            if (mercury__ranges__succeeded)
              {
                MR_Word mercury__ranges__Var_14;
                MR_Integer mercury__ranges__Var_15;
                MR_Word mercury__ranges__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__ranges__Var_14 = mercury__ranges__negate_aux_2_f_0(mercury__ranges__HeadVar__1_1, mercury__ranges__Var_24);
                }
                mercury__ranges__Var_15 = ((MR_Integer) 0 - mercury__ranges__C_2);
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_HeadVar__1_1 = mercury__ranges__Var_14;
                  MR_Integer mercury__ranges__next_value_of_C_2 = mercury__ranges__Var_15;

                  mercury__ranges__C_2 = mercury__ranges__next_value_of_C_2;
                  mercury__ranges__HeadVar__1_1 = mercury__ranges__next_value_of_HeadVar__1_1;
                }
                continue;
              }
            else
              {
                mercury__ranges__succeeded = (mercury__ranges__C_2 == (MR_Integer) 0);
                if (mercury__ranges__succeeded)
                  {
                    MR_Word mercury__ranges__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                    mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ranges_scalar_common_1[1]);
                  }
                else
                  {
                    mercury__ranges__succeeded = (mercury__ranges__C_2 == (MR_Integer) 1);
                    if (mercury__ranges__succeeded)
                      mercury__ranges__HeadVar__3_3 = mercury__ranges__HeadVar__1_1;
                    else
                      {
                        MR_Integer mercury__ranges__L0_11;
                        MR_Integer mercury__ranges__H0_12;
                        MR_Integer mercury__ranges__Var_19;
                        MR_Integer mercury__ranges__Var_20 = (mercury__ranges__L_6 + (MR_Integer) 1);

                        mercury__ranges__succeeded = (mercury__ranges__Var_20 > (MR_Integer) 0);
                        if (mercury__ranges__succeeded)
                          {
                            MR_Integer mercury__ranges__Var_30;
                            MR_Integer mercury__ranges__Var_31 = (mercury__ranges__Var_20 + mercury__ranges__C_2);

                            mercury__ranges__Var_30 = (mercury__ranges__Var_31 - (MR_Integer) 1);
                            mercury__ranges__Var_19 = (mercury__ranges__Var_30 / mercury__ranges__C_2);
                          }
                        else
                          mercury__ranges__Var_19 = (mercury__ranges__Var_20 / mercury__ranges__C_2);
                        mercury__ranges__L0_11 = (mercury__ranges__Var_19 - (MR_Integer) 1);
                        mercury__ranges__succeeded = (mercury__ranges__H_7 > (MR_Integer) 0);
                        if (mercury__ranges__succeeded)
                          mercury__ranges__H0_12 = (mercury__ranges__H_7 / mercury__ranges__C_2);
                        else
                          {
                            MR_Integer mercury__ranges__Var_42;
                            MR_Integer mercury__ranges__Var_43 = (mercury__ranges__H_7 - mercury__ranges__C_2);

                            mercury__ranges__Var_42 = (mercury__ranges__Var_43 + (MR_Integer) 1);
                            mercury__ranges__H0_12 = (mercury__ranges__Var_42 / mercury__ranges__C_2);
                          }
                        {
                          mercury__ranges__HeadVar__3_3 = mercury__ranges__contraction_0_4_f_0(mercury__ranges__L0_11, mercury__ranges__H0_12, mercury__ranges__As_8, mercury__ranges__C_2);
                        }
                      }
                  }
              }
          }
        return mercury__ranges__HeadVar__3_3;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__ranges__dilation_2_f_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Integer mercury__ranges__C_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;
        MR_Word mercury__ranges__HeadVar__3_3;

        if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            mercury__ranges__succeeded = (mercury__ranges__C_2 < (MR_Integer) 0);
            if (mercury__ranges__succeeded)
              {
                MR_Word mercury__ranges__Var_14;
                MR_Integer mercury__ranges__Var_15;
                MR_Word mercury__ranges__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__ranges__Var_14 = mercury__ranges__negate_aux_2_f_0(mercury__ranges__HeadVar__1_1, mercury__ranges__Var_24);
                }
                mercury__ranges__Var_15 = ((MR_Integer) 0 - mercury__ranges__C_2);
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_HeadVar__1_1 = mercury__ranges__Var_14;
                  MR_Integer mercury__ranges__next_value_of_C_2 = mercury__ranges__Var_15;

                  mercury__ranges__C_2 = mercury__ranges__next_value_of_C_2;
                  mercury__ranges__HeadVar__1_1 = mercury__ranges__next_value_of_HeadVar__1_1;
                }
                continue;
              }
            else
              {
                mercury__ranges__succeeded = (mercury__ranges__C_2 == (MR_Integer) 0);
                if (mercury__ranges__succeeded)
                  {
                    MR_Word mercury__ranges__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                    mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ranges_scalar_common_1[1]);
                  }
                else
                  {
                    mercury__ranges__succeeded = (mercury__ranges__C_2 == (MR_Integer) 1);
                    if (mercury__ranges__succeeded)
                      mercury__ranges__HeadVar__3_3 = mercury__ranges__HeadVar__1_1;
                    else
                      {
                        MR_Word mercury__ranges__L_11;
                        MR_Word mercury__ranges__L0_12;

                        {
                          mercury__ranges__L_11 = mercury__ranges__to_sorted_list_1_f_0(mercury__ranges__HeadVar__1_1);
                        }
                        {
                          mercury__ranges__L0_12 = mercury__ranges__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_50_93_95_48_2_f_in__list_0(mercury__ranges__C_2, mercury__ranges__L_11);
                        }
                        {
                          mercury__ranges__HeadVar__3_3 = mercury__ranges__from_list_1_f_0(mercury__ranges__L0_12);
                        }
                      }
                  }
              }
          }
        return mercury__ranges__HeadVar__3_3;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__ranges__shift_2_f_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Integer mercury__ranges__C_2)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__3_3;

    if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer mercury__ranges__L_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__ranges__H_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__ranges__As0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));

        mercury__ranges__succeeded = (mercury__ranges__C_2 == (MR_Integer) 0);
        if (mercury__ranges__succeeded)
          mercury__ranges__HeadVar__3_3 = mercury__ranges__HeadVar__1_1;
        else
          {
            MR_Integer mercury__ranges__Var_11 = (mercury__ranges__L_6 + mercury__ranges__C_2);
            MR_Integer mercury__ranges__Var_12 = (mercury__ranges__H_7 + mercury__ranges__C_2);
            MR_Word mercury__ranges__Var_13;

            {
              mercury__ranges__Var_13 = mercury__ranges__shift_2_f_0(mercury__ranges__As0_8, mercury__ranges__C_2);
            }
            {
              mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 0) = ((MR_Box) (mercury__ranges__Var_11));
              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 1) = ((MR_Box) (mercury__ranges__Var_12));
              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 2) = ((MR_Box) (mercury__ranges__Var_13));
            }
          }
      }
    return mercury__ranges__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__ranges__plus_2_f_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Word mercury__ranges__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;
        MR_Word mercury__ranges__HeadVar__3_3;

        if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word mercury__ranges__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mercury__ranges__Var_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));

            if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word mercury__ranges__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
                MR_Integer mercury__ranges__Var_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
                MR_Integer mercury__ranges__Var_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));

                if ((mercury__ranges__Var_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  if ((mercury__ranges__Var_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Integer mercury__ranges__Var_16;
                      MR_Integer mercury__ranges__Var_17 = (mercury__ranges__Var_66 + mercury__ranges__Var_69);
                      MR_Integer mercury__ranges__Var_19;
                      MR_Word mercury__ranges__Var_20;

                      mercury__ranges__Var_16 = (mercury__ranges__Var_17 + (MR_Integer) 1);
                      mercury__ranges__Var_19 = (mercury__ranges__Var_65 + mercury__ranges__Var_68);
                      mercury__ranges__Var_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      {
                        mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 0) = ((MR_Box) (mercury__ranges__Var_16));
                        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 1) = ((MR_Box) (mercury__ranges__Var_19));
                        MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 2) = ((MR_Box) (mercury__ranges__Var_20));
                      }
                    }
                  else
                    {
                      MR_Integer mercury__ranges__Lx1_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Var_64, (MR_Integer) 0)));
                      MR_Integer mercury__ranges__Hx1_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Var_64, (MR_Integer) 1)));
                      MR_Word mercury__ranges__Xs1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Var_64, (MR_Integer) 2)));
                      MR_Integer mercury__ranges__Var_32 = (mercury__ranges__Lx1_24 - mercury__ranges__Var_65);
                      MR_Integer mercury__ranges__Var_33 = (mercury__ranges__Var_68 - mercury__ranges__Var_69);

                      mercury__ranges__succeeded = (mercury__ranges__Var_32 < mercury__ranges__Var_33);
                      if (mercury__ranges__succeeded)
                        {
                          MR_Word mercury__ranges__Var_34;
                          MR_Word mercury__ranges__Var_35;
                          MR_Word mercury__ranges__Var_36;

                          {
                            mercury__ranges__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__ranges__Var_34, 0) = ((MR_Box) (mercury__ranges__Var_66));
                            MR_hl_field(MR_mktag(1), mercury__ranges__Var_34, 1) = ((MR_Box) (mercury__ranges__Hx1_25));
                            MR_hl_field(MR_mktag(1), mercury__ranges__Var_34, 2) = ((MR_Box) (mercury__ranges__Xs1_26));
                          }
                          mercury__ranges__Var_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          {
                            mercury__ranges__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__ranges__Var_35, 0) = ((MR_Box) (mercury__ranges__Var_69));
                            MR_hl_field(MR_mktag(1), mercury__ranges__Var_35, 1) = ((MR_Box) (mercury__ranges__Var_68));
                            MR_hl_field(MR_mktag(1), mercury__ranges__Var_35, 2) = ((MR_Box) (mercury__ranges__Var_36));
                          }
                          /* direct tailcall eliminated */
                          {
                            MR_Word mercury__ranges__next_value_of_HeadVar__1_1 = mercury__ranges__Var_34;
                            MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Var_35;

                            mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                            mercury__ranges__HeadVar__1_1 = mercury__ranges__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                      else
                        {
                          MR_Integer mercury__ranges__Var_37;
                          MR_Integer mercury__ranges__Var_38 = (mercury__ranges__Var_66 + mercury__ranges__Var_69);
                          MR_Integer mercury__ranges__Var_40;
                          MR_Word mercury__ranges__Var_41;
                          MR_Word mercury__ranges__Var_42;
                          MR_Word mercury__ranges__Var_43;

                          mercury__ranges__Var_37 = (mercury__ranges__Var_38 + (MR_Integer) 1);
                          mercury__ranges__Var_40 = (mercury__ranges__Var_65 + mercury__ranges__Var_68);
                          mercury__ranges__Var_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          {
                            mercury__ranges__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__ranges__Var_42, 0) = ((MR_Box) (mercury__ranges__Var_69));
                            MR_hl_field(MR_mktag(1), mercury__ranges__Var_42, 1) = ((MR_Box) (mercury__ranges__Var_68));
                            MR_hl_field(MR_mktag(1), mercury__ranges__Var_42, 2) = ((MR_Box) (mercury__ranges__Var_43));
                          }
                          {
                            mercury__ranges__Var_41 = mercury__ranges__plus_2_f_0(mercury__ranges__Var_64, mercury__ranges__Var_42);
                          }
                          {
                            mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 0) = ((MR_Box) (mercury__ranges__Var_37));
                            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 1) = ((MR_Box) (mercury__ranges__Var_40));
                            MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 2) = ((MR_Box) (mercury__ranges__Var_41));
                          }
                        }
                    }
                else
                  {
                    MR_Word mercury__ranges__A_54;
                    MR_Word mercury__ranges__B_55;
                    MR_Word mercury__ranges__Var_58;
                    MR_Word mercury__ranges__Var_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                    {
                      mercury__ranges__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__ranges__Var_58, 0) = ((MR_Box) (mercury__ranges__Var_69));
                      MR_hl_field(MR_mktag(1), mercury__ranges__Var_58, 1) = ((MR_Box) (mercury__ranges__Var_68));
                      MR_hl_field(MR_mktag(1), mercury__ranges__Var_58, 2) = ((MR_Box) (mercury__ranges__Var_59));
                    }
                    {
                      mercury__ranges__A_54 = mercury__ranges__plus_2_f_0(mercury__ranges__HeadVar__1_1, mercury__ranges__Var_58);
                    }
                    {
                      mercury__ranges__B_55 = mercury__ranges__plus_2_f_0(mercury__ranges__HeadVar__1_1, mercury__ranges__Var_67);
                    }
                    {
                      mercury__ranges__HeadVar__3_3 = mercury__ranges__union_2_f_0(mercury__ranges__A_54, mercury__ranges__B_55);
                    }
                  }
              }
          }
        return mercury__ranges__HeadVar__3_3;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__ranges__negate_1_f_0(
  MR_Word mercury__ranges__As_3)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__2_2;
    MR_Word mercury__ranges__Var_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__ranges__HeadVar__2_2 = mercury__ranges__negate_aux_2_f_0(mercury__ranges__As_3, mercury__ranges__Var_4);
    }
    return mercury__ranges__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__ranges__prune_to_prev_non_member_4_p_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Word * mercury__ranges__HeadVar__2_2,
  MR_Integer mercury__ranges__STATE_VARIABLE_N_0_3,
  MR_Integer * mercury__ranges__STATE_VARIABLE_N_4)
{
  {
    MR_bool mercury__ranges__succeeded;

    if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__ranges__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__ranges__STATE_VARIABLE_N_4 = mercury__ranges__STATE_VARIABLE_N_0_3;
      }
    else
      {
        MR_Integer mercury__ranges__LA_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__ranges__UA_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__ranges__As0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));

        mercury__ranges__succeeded = (mercury__ranges__STATE_VARIABLE_N_0_3 <= mercury__ranges__LA_8);
        if (mercury__ranges__succeeded)
          {
            *mercury__ranges__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__ranges__STATE_VARIABLE_N_4 = mercury__ranges__STATE_VARIABLE_N_0_3;
          }
        else
          {
            mercury__ranges__succeeded = (mercury__ranges__STATE_VARIABLE_N_0_3 <= mercury__ranges__UA_9);
            if (mercury__ranges__succeeded)
              {
                *mercury__ranges__STATE_VARIABLE_N_4 = mercury__ranges__LA_8;
                *mercury__ranges__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            else
              {
                MR_Word mercury__ranges__Result0_13;

                {
                  mercury__ranges__prune_to_prev_non_member_4_p_0(mercury__ranges__As0_10, &mercury__ranges__Result0_13, mercury__ranges__STATE_VARIABLE_N_0_3, mercury__ranges__STATE_VARIABLE_N_4);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__ranges__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__ranges__LA_8));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__ranges__UA_9));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__ranges__Result0_13));
                }
              }
          }
      }
  }
}

void MR_CALL 
mercury__ranges__prune_to_next_non_member_4_p_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Word * mercury__ranges__HeadVar__2_2,
  MR_Integer mercury__ranges__STATE_VARIABLE_N_0_3,
  MR_Integer * mercury__ranges__STATE_VARIABLE_N_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;

        if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__ranges__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__ranges__STATE_VARIABLE_N_4 = mercury__ranges__STATE_VARIABLE_N_0_3;
          }
        else
          {
            MR_Integer mercury__ranges__LA_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__ranges__UA_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__ranges__As0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));

            mercury__ranges__succeeded = (mercury__ranges__STATE_VARIABLE_N_0_3 <= mercury__ranges__LA_9);
            if (mercury__ranges__succeeded)
              {
                *mercury__ranges__HeadVar__2_2 = mercury__ranges__HeadVar__1_1;
                *mercury__ranges__STATE_VARIABLE_N_4 = mercury__ranges__STATE_VARIABLE_N_0_3;
              }
            else
              {
                mercury__ranges__succeeded = (mercury__ranges__STATE_VARIABLE_N_0_3 <= mercury__ranges__UA_10);
                if (mercury__ranges__succeeded)
                  {
                    *mercury__ranges__STATE_VARIABLE_N_4 = (mercury__ranges__UA_10 + (MR_Integer) 1);
                    *mercury__ranges__HeadVar__2_2 = mercury__ranges__As0_11;
                  }
                else
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__ranges__next_value_of_HeadVar__1_1 = mercury__ranges__As0_11;

                      mercury__ranges__HeadVar__1_1 = mercury__ranges__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__ranges__restrict_range_3_f_0(
  MR_Integer mercury__ranges__Min_5,
  MR_Integer mercury__ranges__Max_6,
  MR_Word mercury__ranges__As_7)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__4_4;
    MR_Word mercury__ranges__Var_8;
    MR_Integer mercury__ranges__Var_9 = (mercury__ranges__Min_5 - (MR_Integer) 1);
    MR_Word mercury__ranges__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__ranges__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__ranges__Var_8, 0) = ((MR_Box) (mercury__ranges__Var_9));
      MR_hl_field(MR_mktag(1), mercury__ranges__Var_8, 1) = ((MR_Box) (mercury__ranges__Max_6));
      MR_hl_field(MR_mktag(1), mercury__ranges__Var_8, 2) = ((MR_Box) (mercury__ranges__Var_11));
    }
    {
      mercury__ranges__HeadVar__4_4 = mercury__ranges__intersection_2_f_0(mercury__ranges__Var_8, mercury__ranges__As_7);
    }
    return mercury__ranges__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__ranges__restrict_max_2_f_0(
  MR_Integer mercury__ranges__Max_1,
  MR_Word mercury__ranges__HeadVar__2_2)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__3_3;

    if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Integer mercury__ranges__L_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__ranges__U_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__ranges__As0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));

        mercury__ranges__succeeded = (mercury__ranges__Max_1 <= mercury__ranges__L_6);
        if (mercury__ranges__succeeded)
          mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            mercury__ranges__succeeded = (mercury__ranges__Max_1 <= mercury__ranges__U_7);
            if (mercury__ranges__succeeded)
              {
                MR_Word mercury__ranges__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 0) = ((MR_Box) (mercury__ranges__L_6));
                  MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 1) = ((MR_Box) (mercury__ranges__Max_1));
                  MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 2) = ((MR_Box) (mercury__ranges__Var_10));
                }
              }
            else
              {
                MR_Word mercury__ranges__Var_11;

                {
                  mercury__ranges__Var_11 = mercury__ranges__restrict_max_2_f_0(mercury__ranges__Max_1, mercury__ranges__As0_8);
                }
                {
                  mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 0) = ((MR_Box) (mercury__ranges__L_6));
                  MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 1) = ((MR_Box) (mercury__ranges__U_7));
                  MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 2) = ((MR_Box) (mercury__ranges__Var_11));
                }
              }
          }
      }
    return mercury__ranges__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__ranges__restrict_min_2_f_0(
  MR_Integer mercury__ranges__Min_1,
  MR_Word mercury__ranges__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;
        MR_Word mercury__ranges__HeadVar__3_3;

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer mercury__ranges__L_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__U_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__As1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));

            mercury__ranges__succeeded = (mercury__ranges__Min_1 <= mercury__ranges__L_7);
            if (mercury__ranges__succeeded)
              mercury__ranges__HeadVar__3_3 = mercury__ranges__HeadVar__2_2;
            else
              {
                mercury__ranges__succeeded = (mercury__ranges__Min_1 <= mercury__ranges__U_8);
                if (mercury__ranges__succeeded)
                  {
                    MR_Integer mercury__ranges__Var_11 = (mercury__ranges__Min_1 - (MR_Integer) 1);

                    {
                      mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 0) = ((MR_Box) (mercury__ranges__Var_11));
                      MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 1) = ((MR_Box) (mercury__ranges__U_8));
                      MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 2) = ((MR_Box) (mercury__ranges__As1_9));
                    }
                  }
                else
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__As1_9;

                      mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                    }
                    continue;
                  }
              }
          }
        return mercury__ranges__HeadVar__3_3;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__ranges__difference_2_f_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Word mercury__ranges__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded;
        MR_Word mercury__ranges__HeadVar__3_3;

        if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word mercury__ranges__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer mercury__ranges__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mercury__ranges__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));

            if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__ranges__HeadVar__3_3 = mercury__ranges__HeadVar__1_1;
            else
              {
                MR_Integer mercury__ranges__LB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
                MR_Integer mercury__ranges__UB_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word mercury__ranges__Bs0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word mercury__ranges__R_18;

                mercury__ranges__succeeded = (mercury__ranges__Var_22 < mercury__ranges__LB_14);
                if (mercury__ranges__succeeded)
                  mercury__ranges__R_18 = (MR_Integer) 1;
                else
                  {
                    mercury__ranges__succeeded = (mercury__ranges__Var_22 == mercury__ranges__LB_14);
                    if (mercury__ranges__succeeded)
                      mercury__ranges__R_18 = (MR_Integer) 0;
                    else
                      mercury__ranges__R_18 = (MR_Integer) 2;
                  }
                switch (mercury__ranges__R_18) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Integer mercury__ranges__LB_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Integer mercury__ranges__UB_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
                      MR_Word mercury__ranges__Bs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
                      MR_Word mercury__ranges__R_37;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_37, mercury__ranges__Var_21, mercury__ranges__LB_33);
                      }
                      switch (mercury__ranges__R_37) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            MR_Word mercury__ranges__Var_40;

                            {
                              mercury__ranges__Var_40 = mercury__ranges__difference_2_f_0(mercury__ranges__Var_20, mercury__ranges__HeadVar__2_2);
                            }
                            {
                              mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 0) = ((MR_Box) (mercury__ranges__Var_22));
                              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 1) = ((MR_Box) (mercury__ranges__Var_21));
                              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 2) = ((MR_Box) (mercury__ranges__Var_40));
                            }
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            MR_Word mercury__ranges__Var_39;

                            {
                              mercury__ranges__Var_39 = mercury__ranges__int_a_nb_3_f_0(mercury__ranges__Var_20, mercury__ranges__UB_34, mercury__ranges__Bs0_35);
                            }
                            {
                              mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 0) = ((MR_Box) (mercury__ranges__Var_22));
                              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 1) = ((MR_Box) (mercury__ranges__Var_21));
                              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 2) = ((MR_Box) (mercury__ranges__Var_39));
                            }
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word mercury__ranges__Var_38;

                            {
                              mercury__ranges__Var_38 = mercury__ranges__diff_na_nb_4_f_0(mercury__ranges__UB_34, mercury__ranges__Bs0_35, mercury__ranges__Var_21, mercury__ranges__Var_20);
                            }
                            {
                              mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 0) = ((MR_Box) (mercury__ranges__Var_22));
                              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 1) = ((MR_Box) (mercury__ranges__LB_33));
                              MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 2) = ((MR_Box) (mercury__ranges__Var_38));
                            }
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word mercury__ranges__R_47;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_47, mercury__ranges__UB_15, mercury__ranges__Var_21);
                      }
                      switch (mercury__ranges__R_47) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            mercury__ranges__HeadVar__3_3 = mercury__ranges__n_union_a_nb_4_f_0(mercury__ranges__UB_15, mercury__ranges__Bs0_16, mercury__ranges__Var_21, mercury__ranges__Var_20);
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word mercury__ranges__next_value_of_HeadVar__1_1 = mercury__ranges__Var_20;
                              MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Bs0_16;

                              mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                              mercury__ranges__HeadVar__1_1 = mercury__ranges__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            mercury__ranges__HeadVar__3_3 = mercury__ranges__int_na_b_3_f_0(mercury__ranges__UB_15, mercury__ranges__Bs0_16, mercury__ranges__Var_20);
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer mercury__ranges__LA_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
                      MR_Integer mercury__ranges__UA_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
                      MR_Word mercury__ranges__As0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
                      MR_Word mercury__ranges__R_58;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_58, mercury__ranges__LA_52, mercury__ranges__UB_15);
                      }
                      switch (mercury__ranges__R_58) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          {
                            mercury__ranges__HeadVar__3_3 = mercury__ranges__diff_na_nb_4_f_0(mercury__ranges__UB_15, mercury__ranges__Bs0_16, mercury__ranges__UA_53, mercury__ranges__As0_54);
                          }
                          break;
                        case (MR_Integer) 0:
                          {
                            mercury__ranges__HeadVar__3_3 = mercury__ranges__n_union_na_b_4_f_0(mercury__ranges__LA_52, mercury__ranges__UA_53, mercury__ranges__As0_54, mercury__ranges__Bs0_16);
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__Bs0_16;

                              mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                            }
                            continue;
                          }
                          break;
                      }
                    }
                    break;
                }
              }
          }
        return mercury__ranges__HeadVar__3_3;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__ranges__intersection_2_f_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Word mercury__ranges__HeadVar__2_2)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__3_3;

    if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__ranges__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mercury__ranges__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__ranges__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer mercury__ranges__LB_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__UB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__Bs0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__ranges__R_17;

            mercury__ranges__succeeded = (mercury__ranges__Var_21 < mercury__ranges__LB_13);
            if (mercury__ranges__succeeded)
              mercury__ranges__R_17 = (MR_Integer) 1;
            else
              {
                mercury__ranges__succeeded = (mercury__ranges__Var_21 == mercury__ranges__LB_13);
                if (mercury__ranges__succeeded)
                  mercury__ranges__R_17 = (MR_Integer) 0;
                else
                  mercury__ranges__R_17 = (MR_Integer) 2;
              }
            switch (mercury__ranges__R_17) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__ranges__HeadVar__3_3 = mercury__ranges__diff_a_nb_3_f_0(mercury__ranges__HeadVar__2_2, mercury__ranges__Var_20, mercury__ranges__Var_19);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word mercury__ranges__R_31;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_31, mercury__ranges__Var_20, mercury__ranges__UB_14);
                  }
                  switch (mercury__ranges__R_31) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word mercury__ranges__Var_34;

                        {
                          mercury__ranges__Var_34 = mercury__ranges__diff_a_nb_3_f_0(mercury__ranges__Var_19, mercury__ranges__UB_14, mercury__ranges__Bs0_15);
                        }
                        {
                          mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 0) = ((MR_Box) (mercury__ranges__Var_21));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 1) = ((MR_Box) (mercury__ranges__Var_20));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 2) = ((MR_Box) (mercury__ranges__Var_34));
                        }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word mercury__ranges__Var_33;

                        {
                          mercury__ranges__Var_33 = mercury__ranges__intersection_2_f_0(mercury__ranges__Var_19, mercury__ranges__Bs0_15);
                        }
                        {
                          mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 0) = ((MR_Box) (mercury__ranges__Var_21));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 1) = ((MR_Box) (mercury__ranges__Var_20));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 2) = ((MR_Box) (mercury__ranges__Var_33));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word mercury__ranges__Var_32;

                        {
                          mercury__ranges__Var_32 = mercury__ranges__diff_a_nb_3_f_0(mercury__ranges__Bs0_15, mercury__ranges__Var_20, mercury__ranges__Var_19);
                        }
                        {
                          mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 0) = ((MR_Box) (mercury__ranges__Var_21));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 1) = ((MR_Box) (mercury__ranges__UB_14));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 2) = ((MR_Box) (mercury__ranges__Var_32));
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__ranges__HeadVar__3_3 = mercury__ranges__diff_a_nb_3_f_0(mercury__ranges__HeadVar__1_1, mercury__ranges__UB_14, mercury__ranges__Bs0_15);
                }
                break;
            }
          }
      }
    return mercury__ranges__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__ranges__union_2_f_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Word mercury__ranges__HeadVar__2_2)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__3_3;

    if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__ranges__HeadVar__3_3 = mercury__ranges__HeadVar__2_2;
    else
      {
        MR_Word mercury__ranges__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mercury__ranges__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__ranges__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));

        if ((mercury__ranges__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__ranges__HeadVar__3_3 = mercury__ranges__HeadVar__1_1;
        else
          {
            MR_Integer mercury__ranges__LB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            MR_Integer mercury__ranges__UB_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__ranges__Bs0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__ranges__R_18;

            mercury__ranges__succeeded = (mercury__ranges__Var_22 < mercury__ranges__LB_14);
            if (mercury__ranges__succeeded)
              mercury__ranges__R_18 = (MR_Integer) 1;
            else
              {
                mercury__ranges__succeeded = (mercury__ranges__Var_22 == mercury__ranges__LB_14);
                if (mercury__ranges__succeeded)
                  mercury__ranges__R_18 = (MR_Integer) 0;
                else
                  mercury__ranges__R_18 = (MR_Integer) 2;
              }
            switch (mercury__ranges__R_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__ranges__HeadVar__3_3 = mercury__ranges__n_diff_na_b_4_f_0(mercury__ranges__Var_22, mercury__ranges__Var_21, mercury__ranges__Var_20, mercury__ranges__HeadVar__2_2);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word mercury__ranges__R_32;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mercury__ranges__R_32, mercury__ranges__Var_21, mercury__ranges__UB_15);
                  }
                  switch (mercury__ranges__R_32) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        mercury__ranges__HeadVar__3_3 = mercury__ranges__n_diff_na_b_4_f_0(mercury__ranges__Var_22, mercury__ranges__UB_15, mercury__ranges__Bs0_16, mercury__ranges__Var_20);
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word mercury__ranges__Var_33;

                        {
                          mercury__ranges__Var_33 = mercury__ranges__union_2_f_0(mercury__ranges__Var_20, mercury__ranges__Bs0_16);
                        }
                        {
                          mercury__ranges__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 0) = ((MR_Box) (mercury__ranges__Var_22));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 1) = ((MR_Box) (mercury__ranges__Var_21));
                          MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, 2) = ((MR_Box) (mercury__ranges__Var_33));
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        mercury__ranges__HeadVar__3_3 = mercury__ranges__n_diff_na_b_4_f_0(mercury__ranges__Var_22, mercury__ranges__Var_21, mercury__ranges__Var_20, mercury__ranges__Bs0_16);
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__ranges__HeadVar__3_3 = mercury__ranges__n_diff_na_b_4_f_0(mercury__ranges__LB_14, mercury__ranges__UB_15, mercury__ranges__Bs0_16, mercury__ranges__HeadVar__1_1);
                }
                break;
            }
          }
      }
    return mercury__ranges__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__ranges__disjoint_2_p_0(
  MR_Word mercury__ranges__A_3,
  MR_Word mercury__ranges__B_4)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__Var_5;

    {
      mercury__ranges__Var_5 = mercury__ranges__intersection_2_f_0(mercury__ranges__A_3, mercury__ranges__B_4);
    }
    mercury__ranges__succeeded = (mercury__ranges__Var_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return mercury__ranges__succeeded;
  }
}

MR_bool MR_CALL 
mercury__ranges__subset_2_p_0(
  MR_Word mercury__ranges__A_3,
  MR_Word mercury__ranges__B_4)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__Var_5;

    {
      mercury__ranges__Var_5 = mercury__ranges__difference_2_f_0(mercury__ranges__A_3, mercury__ranges__B_4);
    }
    mercury__ranges__succeeded = (mercury__ranges__Var_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return mercury__ranges__succeeded;
  }
}

static void MR_CALL 
mercury__ranges__nondet_member_2_p_0_1(
  void * mercury__ranges__env_ptr_arg)
{
  {
    struct mercury__ranges__nondet_member_2_p_0_env_0_s * mercury__ranges__env_ptr = (struct mercury__ranges__nondet_member_2_p_0_env_0_s *) mercury__ranges__env_ptr_arg;

    {
      mercury__int__nondet_int_in_range_3_p_0((mercury__ranges__env_ptr)->mercury__ranges__nondet_member_2_p_0_env_0__L_5, (mercury__ranges__env_ptr)->mercury__ranges__nondet_member_2_p_0_env_0__U_6, (mercury__ranges__env_ptr)->mercury__ranges__nondet_member_2_p_0_env_0__N_3, (mercury__ranges__env_ptr)->mercury__ranges__nondet_member_2_p_0_env_0__cont, (mercury__ranges__env_ptr)->mercury__ranges__nondet_member_2_p_0_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__ranges__nondet_member_2_p_0(
  MR_Integer * mercury__ranges__N_3,
  MR_Word mercury__ranges__As_4,
  MR_Cont mercury__ranges__cont,
  void * mercury__ranges__cont_env_ptr)
{
  {
    struct mercury__ranges__nondet_member_2_p_0_env_0_s mercury__ranges__env;

    (mercury__ranges__env).mercury__ranges__nondet_member_2_p_0_env_0__N_3 = mercury__ranges__N_3;
    (mercury__ranges__env).mercury__ranges__nondet_member_2_p_0_env_0__cont = mercury__ranges__cont;
    (mercury__ranges__env).mercury__ranges__nondet_member_2_p_0_env_0__cont_env_ptr = mercury__ranges__cont_env_ptr;
    {
      MR_bool mercury__ranges__succeeded;

      {
        mercury__ranges__range_member_3_p_0(&(mercury__ranges__env).mercury__ranges__nondet_member_2_p_0_env_0__L_5, &(mercury__ranges__env).mercury__ranges__nondet_member_2_p_0_env_0__U_6, mercury__ranges__As_4, mercury__ranges__nondet_member_2_p_0_1, &mercury__ranges__env);
      }
    }
  }
}

void MR_CALL 
mercury__ranges__range_member_3_p_0(
  MR_Integer * mercury__ranges__L_4,
  MR_Integer * mercury__ranges__U_5,
  MR_Word mercury__ranges__HeadVar__3_3,
  MR_Cont mercury__ranges__cont,
  void * mercury__ranges__cont_env_ptr)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded = ((MR_tag((MR_Word) mercury__ranges__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
        MR_Integer mercury__ranges__A0_6;
        MR_Integer mercury__ranges__A1_7;
        MR_Word mercury__ranges__As_8;

        if (mercury__ranges__succeeded)
          {
            mercury__ranges__A0_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 0)));
            mercury__ranges__A1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 1)));
            mercury__ranges__As_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__3_3, (MR_Integer) 2)));
            {
              *mercury__ranges__L_4 = (mercury__ranges__A0_6 + (MR_Integer) 1);
              *mercury__ranges__U_5 = mercury__ranges__A1_7;
              {
                mercury__ranges__cont(mercury__ranges__cont_env_ptr);
              }
            }
            {
              /* direct tailcall eliminated */
              {
                MR_Word mercury__ranges__next_value_of_HeadVar__3_3 = mercury__ranges__As_8;

                mercury__ranges__HeadVar__3_3 = mercury__ranges__next_value_of_HeadVar__3_3;
              }
              continue;
            }
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__member_2_p_0(
  MR_Integer mercury__ranges__N_3,
  MR_Word mercury__ranges__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded = ((MR_tag((MR_Word) mercury__ranges__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        MR_Integer mercury__ranges__L_4;
        MR_Integer mercury__ranges__U_5;
        MR_Word mercury__ranges__As_6;

        if (mercury__ranges__succeeded)
          {
            mercury__ranges__L_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 0)));
            mercury__ranges__U_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 1)));
            mercury__ranges__As_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__2_2, (MR_Integer) 2)));
            mercury__ranges__succeeded = (mercury__ranges__N_3 > mercury__ranges__L_4);
            if (mercury__ranges__succeeded)
              mercury__ranges__succeeded = (mercury__ranges__N_3 <= mercury__ranges__U_5);
            if (!(mercury__ranges__succeeded))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_HeadVar__2_2 = mercury__ranges__As_6;

                  mercury__ranges__HeadVar__2_2 = mercury__ranges__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__next_3_p_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Integer mercury__ranges__N0_7,
  MR_Integer * mercury__ranges__N_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__ranges__succeeded = ((MR_tag((MR_Word) mercury__ranges__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Integer mercury__ranges__L_4;
        MR_Integer mercury__ranges__U_5;
        MR_Word mercury__ranges__As_6;

        if (mercury__ranges__succeeded)
          {
            mercury__ranges__L_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
            mercury__ranges__U_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
            mercury__ranges__As_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
            mercury__ranges__succeeded = (mercury__ranges__N0_7 < mercury__ranges__U_5);
            if (mercury__ranges__succeeded)
              {
                MR_Integer mercury__ranges__Var_9;

                mercury__ranges__succeeded = (mercury__ranges__L_4 > mercury__ranges__N0_7);
                if (mercury__ranges__succeeded)
                  mercury__ranges__Var_9 = mercury__ranges__L_4;
                else
                  mercury__ranges__Var_9 = mercury__ranges__N0_7;
                *mercury__ranges__N_8 = (mercury__ranges__Var_9 + (MR_Integer) 1);
                mercury__ranges__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__ranges__next_value_of_HeadVar__1_1 = mercury__ranges__As_6;

                  mercury__ranges__HeadVar__1_1 = mercury__ranges__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return mercury__ranges__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__ranges__greatest_2_p_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Integer * mercury__ranges__U_6)
{
  {
    MR_bool mercury__ranges__succeeded = ((MR_tag((MR_Word) mercury__ranges__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__ranges__U0_4;
    MR_Word mercury__ranges__As_5;
    MR_Integer mercury__ranges__Var_3;

    if (mercury__ranges__succeeded)
      {
        mercury__ranges__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
        mercury__ranges__U0_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
        mercury__ranges__As_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
        {
          mercury__ranges__greatest_2_3_p_0(mercury__ranges__U0_4, mercury__ranges__As_5, mercury__ranges__U_6);
        }
        mercury__ranges__succeeded = MR_TRUE;
      }
    return mercury__ranges__succeeded;
  }
}

MR_bool MR_CALL 
mercury__ranges__least_2_p_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Integer * mercury__ranges__HeadVar__2_2)
{
  {
    MR_bool mercury__ranges__succeeded = ((MR_tag((MR_Word) mercury__ranges__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__ranges__L_3;
    MR_Integer mercury__ranges__Var_6;
    MR_Integer mercury__ranges__Var_4;
    MR_Word mercury__ranges__Var_5;

    if (mercury__ranges__succeeded)
      {
        mercury__ranges__L_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
        mercury__ranges__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
        mercury__ranges__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
        mercury__ranges__Var_6 = (MR_Integer) 1;
        *mercury__ranges__HeadVar__2_2 = (mercury__ranges__L_3 + mercury__ranges__Var_6);
        mercury__ranges__succeeded = MR_TRUE;
      }
    return mercury__ranges__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__ranges__median_1_f_0(
  MR_Word mercury__ranges__As_3)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Integer mercury__ranges__N_4;
    MR_Integer mercury__ranges__Size_5;
    MR_Integer mercury__ranges__MiddleIndex_6;

    {
      mercury__ranges__Size_5 = mercury__ranges__size_1_f_0(mercury__ranges__As_3);
    }
    mercury__ranges__succeeded = (mercury__ranges__Size_5 > (MR_Integer) 0);
    if (mercury__ranges__succeeded)
      {
        MR_Integer mercury__ranges__Var_8 = (mercury__ranges__Size_5 + (MR_Integer) 1);

        mercury__ranges__MiddleIndex_6 = (mercury__ranges__Var_8 / (MR_Integer) 2);
      }
    else
      {
        MR_Word mercury__ranges__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

        {
          mercury__exception__throw_1_p_0(mercury__ranges__TypeCtorInfo_12_12, ((MR_Box) ((MR_String) "ranges.median: empty set")));
        }
      }
    {
      mercury__ranges__N_4 = mercury__ranges__element_index_2_f_0(mercury__ranges__As_3, mercury__ranges__MiddleIndex_6);
    }
    return mercury__ranges__N_4;
  }
}

MR_Integer MR_CALL 
mercury__ranges__size_1_f_0(
  MR_Word mercury__ranges__HeadVar__1_1)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Integer mercury__ranges__HeadVar__2_2;

    if ((mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__ranges__HeadVar__2_2 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__ranges__L_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__ranges__U_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__ranges__Rest_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mercury__ranges__Var_6 = (mercury__ranges__U_4 - mercury__ranges__L_3);
        MR_Integer mercury__ranges__Var_7;

        {
          mercury__ranges__Var_7 = mercury__ranges__size_1_f_0(mercury__ranges__Rest_5);
        }
        mercury__ranges__HeadVar__2_2 = (mercury__ranges__Var_6 + mercury__ranges__Var_7);
      }
    return mercury__ranges__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__ranges__delete_2_f_0(
  MR_Integer mercury__ranges__N_4,
  MR_Word mercury__ranges__As_5)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__3_3;
    MR_Word mercury__ranges__Var_6;

    {
      mercury__ranges__Var_6 = mercury__ranges__range_2_f_0(mercury__ranges__N_4, mercury__ranges__N_4);
    }
    {
      mercury__ranges__HeadVar__3_3 = mercury__ranges__difference_2_f_0(mercury__ranges__As_5, mercury__ranges__Var_6);
    }
    return mercury__ranges__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__ranges__insert_3_p_0(
  MR_Integer mercury__ranges__N_4,
  MR_Word mercury__ranges__As_5,
  MR_Word * mercury__ranges__Bs_6)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__Var_9;

    {
      mercury__ranges__Var_9 = mercury__ranges__range_2_f_0(mercury__ranges__N_4, mercury__ranges__N_4);
    }
    {
      *mercury__ranges__Bs_6 = mercury__ranges__union_2_f_0(mercury__ranges__As_5, mercury__ranges__Var_9);
    }
  }
}

MR_Word MR_CALL 
mercury__ranges__insert_2_f_0(
  MR_Integer mercury__ranges__N_4,
  MR_Word mercury__ranges__As_5)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__3_3;
    MR_Word mercury__ranges__Var_6;

    {
      mercury__ranges__Var_6 = mercury__ranges__range_2_f_0(mercury__ranges__N_4, mercury__ranges__N_4);
    }
    {
      mercury__ranges__HeadVar__3_3 = mercury__ranges__union_2_f_0(mercury__ranges__As_5, mercury__ranges__Var_6);
    }
    return mercury__ranges__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
mercury__ranges__is_contiguous_3_p_0(
  MR_Word mercury__ranges__Range_4,
  MR_Integer * mercury__ranges__HeadVar__2_2,
  MR_Integer * mercury__ranges__Max_6)
{
  {
    MR_bool mercury__ranges__succeeded = ((MR_tag((MR_Word) mercury__ranges__Range_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__ranges__Min_5;
    MR_Word mercury__ranges__Var_8;

    if (mercury__ranges__succeeded)
      {
        mercury__ranges__Min_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Range_4, (MR_Integer) 0)));
        *mercury__ranges__Max_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__Range_4, (MR_Integer) 1)));
        mercury__ranges__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__Range_4, (MR_Integer) 2)));
        *mercury__ranges__HeadVar__2_2 = (mercury__ranges__Min_5 + (MR_Integer) 1);
        mercury__ranges__succeeded = (mercury__ranges__Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    return mercury__ranges__succeeded;
  }
}

MR_bool MR_CALL 
mercury__ranges__split_4_p_0(
  MR_Word mercury__ranges__HeadVar__1_1,
  MR_Integer * mercury__ranges__HeadVar__2_2,
  MR_Integer * mercury__ranges__Max_6,
  MR_Word * mercury__ranges__Rest_7)
{
  {
    MR_bool mercury__ranges__succeeded = ((MR_tag((MR_Word) mercury__ranges__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__ranges__Min1_5;
    MR_Integer mercury__ranges__Var_8;

    if (mercury__ranges__succeeded)
      {
        mercury__ranges__Min1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
        *mercury__ranges__Max_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
        *mercury__ranges__Rest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
        mercury__ranges__Var_8 = (MR_Integer) 1;
        *mercury__ranges__HeadVar__2_2 = (mercury__ranges__Min1_5 + mercury__ranges__Var_8);
        mercury__ranges__succeeded = MR_TRUE;
      }
    return mercury__ranges__succeeded;
  }
}

MR_Word MR_CALL 
mercury__ranges__range_2_f_0(
  MR_Integer mercury__ranges__Min_4,
  MR_Integer mercury__ranges__Max_5)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__Ranges_6;
    MR_Integer mercury__ranges__Var_12;

{
#define MR_PROC_LABEL mercury__ranges__range_2_f_0

	MR_Integer Min;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = (MR_Integer) LONG_MIN;
    #if defined(LLONG_MIN)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Min = (MR_Integer) LLONG_MIN;
    #endif
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }


		;}
#undef MR_PROC_LABEL
	 mercury__ranges__Var_12  = Min;
}
    mercury__ranges__succeeded = (mercury__ranges__Min_4 == mercury__ranges__Var_12);
    if (mercury__ranges__succeeded)
      {
        MR_Word mercury__ranges__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

        {
          mercury__exception__throw_1_p_0(mercury__ranges__TypeCtorInfo_11_11, ((MR_Box) ((MR_String) "ranges.range: cannot represent min_int")));
        }
      }
    else
      {
        mercury__ranges__succeeded = (mercury__ranges__Min_4 > mercury__ranges__Max_5);
        if (mercury__ranges__succeeded)
          mercury__ranges__Ranges_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Integer mercury__ranges__Var_8 = (mercury__ranges__Min_4 - (MR_Integer) 1);
            MR_Word mercury__ranges__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__ranges__Ranges_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, 0) = ((MR_Box) (mercury__ranges__Var_8));
              MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, 1) = ((MR_Box) (mercury__ranges__Max_5));
              MR_hl_field(MR_mktag(1), mercury__ranges__Ranges_6, 2) = ((MR_Box) (mercury__ranges__Var_10));
            }
          }
      }
    return mercury__ranges__Ranges_6;
  }
}

MR_Word MR_CALL 
mercury__ranges__universe_0_f_0(void)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__1_1;
    MR_Integer mercury__ranges__Var_2;
    MR_Integer mercury__ranges__Var_3;
    MR_Word mercury__ranges__Var_4;

{
#define MR_PROC_LABEL mercury__ranges__universe_0_f_0

	MR_Integer Min;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = (MR_Integer) LONG_MIN;
    #if defined(LLONG_MIN)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Min = (MR_Integer) LLONG_MIN;
    #endif
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }


		;}
#undef MR_PROC_LABEL
	 mercury__ranges__Var_2  = Min;
}
{
#define MR_PROC_LABEL mercury__ranges__universe_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	 mercury__ranges__Var_3  = Max;
}
    mercury__ranges__Var_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__ranges__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, 0) = ((MR_Box) (mercury__ranges__Var_2));
      MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, 1) = ((MR_Box) (mercury__ranges__Var_3));
      MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, 2) = ((MR_Box) (mercury__ranges__Var_4));
    }
    return mercury__ranges__HeadVar__1_1;
  }
}

MR_bool MR_CALL 
mercury__ranges__is_non_empty_1_p_0(
  MR_Word mercury__ranges__HeadVar__1_1)
{
  {
    MR_bool mercury__ranges__succeeded = ((MR_tag((MR_Word) mercury__ranges__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__ranges__Var_2;
    MR_Integer mercury__ranges__Var_3;
    MR_Word mercury__ranges__Var_4;

    if (mercury__ranges__succeeded)
      {
        mercury__ranges__Var_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 0)));
        mercury__ranges__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 1)));
        mercury__ranges__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ranges__HeadVar__1_1, (MR_Integer) 2)));
      }
    return mercury__ranges__succeeded;
  }
}

MR_bool MR_CALL 
mercury__ranges__is_empty_1_p_0(
  MR_Word mercury__ranges__HeadVar__1_1)
{
  {
    MR_bool mercury__ranges__succeeded = (mercury__ranges__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return mercury__ranges__succeeded;
  }
}

MR_Word MR_CALL 
mercury__ranges__empty_0_f_0(void)
{
  {
    MR_bool mercury__ranges__succeeded;
    MR_Word mercury__ranges__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__ranges__HeadVar__1_1;
  }
}

void mercury__ranges__init(void)
{
}

void mercury__ranges__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__ranges__ranges__type_ctor_info_ranges_0);
}

void mercury__ranges__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ranges__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ranges. */
