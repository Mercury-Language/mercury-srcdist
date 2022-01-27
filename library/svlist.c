/*
** Automatically generated from `svlist.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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


/* :- module svlist. */
/* :- implementation. */

/*
INIT mercury__svlist__init
ENDINIT
*/

#include "svlist.mih"


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
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"




#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__svlist__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__svlist_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__svlist_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__svlist_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__svlist_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__svlist_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__svlist_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__svlist_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__svlist_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__svlist_scalar_common_2[0])),
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



#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__svlist__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__svlist__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 73 "svlist.m"
void MR_CALL 
mercury__svlist__det_replace_nth_4_p_0(
#line 73 "svlist.m"
  MR_Word mercury__svlist__TypeInfo_for_T_11,
#line 73 "svlist.m"
  MR_Integer mercury__svlist__N_5,
#line 73 "svlist.m"
  MR_Box mercury__svlist__R_6,
#line 73 "svlist.m"
  MR_Word mercury__svlist__STATE_VARIABLE_List_0_8,
#line 73 "svlist.m"
  MR_Word * mercury__svlist__STATE_VARIABLE_List_9)
#line 73 "svlist.m"
{
#line 100 "svlist.m"
  {
#line 100 "svlist.m"
    MR_bool mercury__svlist__succeeded;

#line 100 "svlist.m"
    {
#line 100 "svlist.m"
      mercury__list__det_replace_nth_4_p_0(mercury__svlist__TypeInfo_for_T_11, mercury__svlist__STATE_VARIABLE_List_0_8, mercury__svlist__N_5, mercury__svlist__R_6, mercury__svlist__STATE_VARIABLE_List_9);
#line 100 "svlist.m"
      return;
    }
#line 100 "svlist.m"
  }
#line 73 "svlist.m"
}

#line 66 "svlist.m"
void MR_CALL 
mercury__svlist__replace_all_4_p_0(
#line 66 "svlist.m"
  MR_Word mercury__svlist__TypeInfo_for_T_11,
#line 66 "svlist.m"
  MR_Box mercury__svlist__D_5,
#line 66 "svlist.m"
  MR_Box mercury__svlist__R_6,
#line 66 "svlist.m"
  MR_Word mercury__svlist__STATE_VARIABLE_List_0_8,
#line 66 "svlist.m"
  MR_Word * mercury__svlist__STATE_VARIABLE_List_9)
#line 66 "svlist.m"
{
#line 97 "svlist.m"
  {
#line 97 "svlist.m"
    MR_bool mercury__svlist__succeeded;

#line 97 "svlist.m"
    {
#line 97 "svlist.m"
      mercury__list__replace_all_4_p_0(mercury__svlist__TypeInfo_for_T_11, mercury__svlist__STATE_VARIABLE_List_0_8, mercury__svlist__D_5, mercury__svlist__R_6, mercury__svlist__STATE_VARIABLE_List_9);
#line 97 "svlist.m"
      return;
    }
#line 97 "svlist.m"
  }
#line 66 "svlist.m"
}

#line 60 "svlist.m"
MR_bool MR_CALL 
mercury__svlist__replace_first_4_p_0(
#line 60 "svlist.m"
  MR_Word mercury__svlist__TypeInfo_for_T_11,
#line 60 "svlist.m"
  MR_Box mercury__svlist__D_5,
#line 60 "svlist.m"
  MR_Box mercury__svlist__R_6,
#line 60 "svlist.m"
  MR_Word mercury__svlist__STATE_VARIABLE_List_0_8,
#line 60 "svlist.m"
  MR_Word * mercury__svlist__STATE_VARIABLE_List_9)
#line 60 "svlist.m"
{
#line 94 "svlist.m"
  {
#line 94 "svlist.m"
    MR_bool mercury__svlist__succeeded;

#line 94 "svlist.m"
    {
#line 94 "svlist.m"
      return mercury__svlist__succeeded = mercury__list__replace_first_4_p_0(mercury__svlist__TypeInfo_for_T_11, mercury__svlist__STATE_VARIABLE_List_0_8, mercury__svlist__D_5, mercury__svlist__R_6, mercury__svlist__STATE_VARIABLE_List_9);
    }
#line 94 "svlist.m"
    return mercury__svlist__succeeded;
#line 94 "svlist.m"
  }
#line 60 "svlist.m"
}

#line 55 "svlist.m"
void MR_CALL 
mercury__svlist__replace_4_p_1(
#line 55 "svlist.m"
  MR_Word mercury__svlist__TypeInfo_for_T_11,
#line 55 "svlist.m"
  MR_Box mercury__svlist__D_5,
#line 55 "svlist.m"
  MR_Box mercury__svlist__R_6,
#line 55 "svlist.m"
  MR_Word mercury__svlist__STATE_VARIABLE_List_0_8,
#line 55 "svlist.m"
  MR_Word * mercury__svlist__STATE_VARIABLE_List_9,
#line 55 "svlist.m"
  MR_Cont mercury__svlist__cont,
#line 55 "svlist.m"
  void * mercury__svlist__cont_env_ptr)
#line 55 "svlist.m"
{
#line 91 "svlist.m"
  {
#line 91 "svlist.m"
    MR_bool mercury__svlist__succeeded;

#line 91 "svlist.m"
    {
#line 91 "svlist.m"
      mercury__list__replace_4_p_1(mercury__svlist__TypeInfo_for_T_11, mercury__svlist__STATE_VARIABLE_List_0_8, mercury__svlist__D_5, mercury__svlist__R_6, mercury__svlist__STATE_VARIABLE_List_9, mercury__svlist__cont, mercury__svlist__cont_env_ptr);
#line 91 "svlist.m"
      return;
    }
#line 91 "svlist.m"
  }
#line 55 "svlist.m"
}

#line 54 "svlist.m"
MR_bool MR_CALL 
mercury__svlist__replace_4_p_0(
#line 54 "svlist.m"
  MR_Word mercury__svlist__TypeInfo_for_T_11,
#line 54 "svlist.m"
  MR_Box mercury__svlist__D_5,
#line 54 "svlist.m"
  MR_Box mercury__svlist__R_6,
#line 54 "svlist.m"
  MR_Word mercury__svlist__STATE_VARIABLE_List_0_8,
#line 54 "svlist.m"
  MR_Word mercury__svlist__STATE_VARIABLE_List_9)
#line 54 "svlist.m"
{
#line 91 "svlist.m"
  {
#line 91 "svlist.m"
    MR_bool mercury__svlist__succeeded;

#line 91 "svlist.m"
    {
#line 91 "svlist.m"
      return mercury__svlist__succeeded = mercury__list__replace_4_p_0(mercury__svlist__TypeInfo_for_T_11, mercury__svlist__STATE_VARIABLE_List_0_8, mercury__svlist__D_5, mercury__svlist__R_6, mercury__svlist__STATE_VARIABLE_List_9);
    }
#line 91 "svlist.m"
    return mercury__svlist__succeeded;
#line 91 "svlist.m"
  }
#line 54 "svlist.m"
}

#line 48 "svlist.m"
void MR_CALL 
mercury__svlist__delete_elems_3_p_0(
#line 48 "svlist.m"
  MR_Word mercury__svlist__TypeInfo_for_T_9,
#line 48 "svlist.m"
  MR_Word mercury__svlist__Elems_4,
#line 48 "svlist.m"
  MR_Word mercury__svlist__STATE_VARIABLE_List_0_6,
#line 48 "svlist.m"
  MR_Word * mercury__svlist__STATE_VARIABLE_List_7)
#line 48 "svlist.m"
{
#line 88 "svlist.m"
  {
#line 88 "svlist.m"
    MR_bool mercury__svlist__succeeded;

#line 88 "svlist.m"
    {
#line 88 "svlist.m"
      mercury__list__delete_elems_3_p_0(mercury__svlist__TypeInfo_for_T_9, mercury__svlist__STATE_VARIABLE_List_0_6, mercury__svlist__Elems_4, mercury__svlist__STATE_VARIABLE_List_7);
#line 88 "svlist.m"
      return;
    }
#line 88 "svlist.m"
  }
#line 48 "svlist.m"
}

#line 43 "svlist.m"
MR_bool MR_CALL 
mercury__svlist__delete_first_3_p_0(
#line 43 "svlist.m"
  MR_Word mercury__svlist__TypeInfo_for_T_9,
#line 43 "svlist.m"
  MR_Box mercury__svlist__E_4,
#line 43 "svlist.m"
  MR_Word mercury__svlist__STATE_VARIABLE_List_0_6,
#line 43 "svlist.m"
  MR_Word * mercury__svlist__STATE_VARIABLE_List_7)
#line 43 "svlist.m"
{
#line 85 "svlist.m"
  {
#line 85 "svlist.m"
    MR_bool mercury__svlist__succeeded;

#line 85 "svlist.m"
    {
#line 85 "svlist.m"
      return mercury__svlist__succeeded = mercury__list__delete_first_3_p_0(mercury__svlist__TypeInfo_for_T_9, mercury__svlist__STATE_VARIABLE_List_0_6, mercury__svlist__E_4, mercury__svlist__STATE_VARIABLE_List_7);
    }
#line 85 "svlist.m"
    return mercury__svlist__succeeded;
#line 85 "svlist.m"
  }
#line 43 "svlist.m"
}

#line 38 "svlist.m"
void MR_CALL 
mercury__svlist__delete_3_p_3(
#line 38 "svlist.m"
  MR_Word mercury__svlist__TypeInfo_for_T_9,
#line 38 "svlist.m"
  MR_Box mercury__svlist__E_4,
#line 38 "svlist.m"
  MR_Word * mercury__svlist__STATE_VARIABLE_List_0_6,
#line 38 "svlist.m"
  MR_Word mercury__svlist__STATE_VARIABLE_List_7,
#line 38 "svlist.m"
  MR_Cont mercury__svlist__cont,
#line 38 "svlist.m"
  void * mercury__svlist__cont_env_ptr)
#line 38 "svlist.m"
{
#line 82 "svlist.m"
  {
#line 82 "svlist.m"
    MR_bool mercury__svlist__succeeded;

#line 82 "svlist.m"
    {
#line 82 "svlist.m"
      mercury__list__delete_3_p_3(mercury__svlist__TypeInfo_for_T_9, mercury__svlist__STATE_VARIABLE_List_0_6, mercury__svlist__E_4, mercury__svlist__STATE_VARIABLE_List_7, mercury__svlist__cont, mercury__svlist__cont_env_ptr);
#line 82 "svlist.m"
      return;
    }
#line 82 "svlist.m"
  }
#line 38 "svlist.m"
}

#line 37 "svlist.m"
void MR_CALL 
mercury__svlist__delete_3_p_2(
#line 37 "svlist.m"
  MR_Word mercury__svlist__TypeInfo_for_T_9,
#line 37 "svlist.m"
  MR_Box * mercury__svlist__E_4,
#line 37 "svlist.m"
  MR_Word mercury__svlist__STATE_VARIABLE_List_0_6,
#line 37 "svlist.m"
  MR_Word * mercury__svlist__STATE_VARIABLE_List_7,
#line 37 "svlist.m"
  MR_Cont mercury__svlist__cont,
#line 37 "svlist.m"
  void * mercury__svlist__cont_env_ptr)
#line 37 "svlist.m"
{
#line 82 "svlist.m"
  {
#line 82 "svlist.m"
    MR_bool mercury__svlist__succeeded;

#line 82 "svlist.m"
    {
#line 82 "svlist.m"
      mercury__list__delete_3_p_2(mercury__svlist__TypeInfo_for_T_9, mercury__svlist__STATE_VARIABLE_List_0_6, mercury__svlist__E_4, mercury__svlist__STATE_VARIABLE_List_7, mercury__svlist__cont, mercury__svlist__cont_env_ptr);
#line 82 "svlist.m"
      return;
    }
#line 82 "svlist.m"
  }
#line 37 "svlist.m"
}

#line 36 "svlist.m"
void MR_CALL 
mercury__svlist__delete_3_p_1(
#line 36 "svlist.m"
  MR_Word mercury__svlist__TypeInfo_for_T_9,
#line 36 "svlist.m"
  MR_Box mercury__svlist__E_4,
#line 36 "svlist.m"
  MR_Word mercury__svlist__STATE_VARIABLE_List_0_6,
#line 36 "svlist.m"
  MR_Word * mercury__svlist__STATE_VARIABLE_List_7,
#line 36 "svlist.m"
  MR_Cont mercury__svlist__cont,
#line 36 "svlist.m"
  void * mercury__svlist__cont_env_ptr)
#line 36 "svlist.m"
{
#line 82 "svlist.m"
  {
#line 82 "svlist.m"
    MR_bool mercury__svlist__succeeded;

#line 82 "svlist.m"
    {
#line 82 "svlist.m"
      mercury__list__delete_3_p_1(mercury__svlist__TypeInfo_for_T_9, mercury__svlist__STATE_VARIABLE_List_0_6, mercury__svlist__E_4, mercury__svlist__STATE_VARIABLE_List_7, mercury__svlist__cont, mercury__svlist__cont_env_ptr);
#line 82 "svlist.m"
      return;
    }
#line 82 "svlist.m"
  }
#line 36 "svlist.m"
}

#line 35 "svlist.m"
MR_bool MR_CALL 
mercury__svlist__delete_3_p_0(
#line 35 "svlist.m"
  MR_Word mercury__svlist__TypeInfo_for_T_9,
#line 35 "svlist.m"
  MR_Box mercury__svlist__E_4,
#line 35 "svlist.m"
  MR_Word mercury__svlist__STATE_VARIABLE_List_0_6,
#line 35 "svlist.m"
  MR_Word mercury__svlist__STATE_VARIABLE_List_7)
#line 35 "svlist.m"
{
#line 82 "svlist.m"
  {
#line 82 "svlist.m"
    MR_bool mercury__svlist__succeeded;

#line 82 "svlist.m"
    {
#line 82 "svlist.m"
      return mercury__svlist__succeeded = mercury__list__delete_3_p_0(mercury__svlist__TypeInfo_for_T_9, mercury__svlist__STATE_VARIABLE_List_0_6, mercury__svlist__E_4, mercury__svlist__STATE_VARIABLE_List_7);
    }
#line 82 "svlist.m"
    return mercury__svlist__succeeded;
#line 82 "svlist.m"
  }
#line 35 "svlist.m"
}

void mercury__svlist__init(void)
{
}

void mercury__svlist__init_type_tables(void)
{
}

void mercury__svlist__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module svlist. */
