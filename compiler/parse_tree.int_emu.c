/*
** Automatically generated from `int_emu.m'
** by the Mercury compiler,
** version rotd-2025-01-08
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


// :- module parse_tree.int_emu.
// :- implementation.

/*
INIT mercury__parse_tree__int_emu__init
ENDINIT
*/

#include "parse_tree.int_emu.mih"


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
#include "getopt.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"




static const MR_PseudoTypeInfo parse_tree__int_emu__parse_tree__int_emu__field_types_op_num_bits_0_0[1];

static const MR_DuFunctorDesc parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_0;

static const MR_DuFunctorDesc parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_1;

static const MR_DuFunctorDesc parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_2;

static const MR_DuFunctorDesc parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_3;

static const MR_DuFunctorDesc parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_4;

static const MR_DuFunctorDescPtr parse_tree__int_emu__parse_tree__int_emu__du_stag_ordered_op_num_bits_0_0[4];

static const MR_DuFunctorDescPtr parse_tree__int_emu__parse_tree__int_emu__du_stag_ordered_op_num_bits_0_1[1];

static const MR_DuPtagLayout parse_tree__int_emu__parse_tree__int_emu__du_ptag_ordered_op_num_bits_0[2];

static const MR_DuFunctorDescPtr parse_tree__int_emu__parse_tree__int_emu__du_name_ordered_op_num_bits_0[5];

static const MR_Integer parse_tree__int_emu__parse_tree__int_emu__functor_number_map_op_num_bits_0[5];

static const MR_PseudoTypeInfo parse_tree__int_emu__parse_tree__int_emu__field_types_op_type_0_0[1];

static const MR_DuFunctorDesc parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_type_0_0;

static const MR_PseudoTypeInfo parse_tree__int_emu__parse_tree__int_emu__field_types_op_type_0_1[1];

static const MR_DuFunctorDesc parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_type_0_1;

static const MR_DuFunctorDescPtr parse_tree__int_emu__parse_tree__int_emu__du_stag_ordered_op_type_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__int_emu__parse_tree__int_emu__du_stag_ordered_op_type_0_1[1];

static const MR_DuPtagLayout parse_tree__int_emu__parse_tree__int_emu__du_ptag_ordered_op_type_0[2];

static const MR_DuFunctorDescPtr parse_tree__int_emu__parse_tree__int_emu__du_name_ordered_op_type_0[2];

static const MR_Integer parse_tree__int_emu__parse_tree__int_emu__functor_number_map_op_type_0[2];

static MR_bool MR_CALL 
parse_tree__int_emu__to_some_int_const_if_in_in_range_3_p_0(
  MR_Word OpType_4,
  MR_Word Integer_5,
  MR_Word * Const_6);

static MR_bool MR_CALL 
parse_tree__int_emu____Unify____op_num_bits_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__int_emu____Compare____op_num_bits_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__int_emu____Unify____op_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__int_emu____Compare____op_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo parse_tree__int_emu__parse_tree__int_emu__field_types_op_num_bits_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_0 = {
  (MR_String) "word_bits",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__int_emu__parse_tree__int_emu__field_types_op_num_bits_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_1 = {
  (MR_String) "bits_8",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_2 = {
  (MR_String) "bits_16",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_3 = {
  (MR_String) "bits_32",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_4 = {
  (MR_String) "bits_64",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__int_emu__parse_tree__int_emu__du_stag_ordered_op_num_bits_0_0[4] = {
  &parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_1,
  &parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_2,
  &parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_3,
  &parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_4
};

static const MR_DuFunctorDescPtr parse_tree__int_emu__parse_tree__int_emu__du_stag_ordered_op_num_bits_0_1[1] = { &parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_0 };

static const MR_DuPtagLayout parse_tree__int_emu__parse_tree__int_emu__du_ptag_ordered_op_num_bits_0[2] = {
  {
    UINT32_C(4),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__int_emu__parse_tree__int_emu__du_stag_ordered_op_num_bits_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__int_emu__parse_tree__int_emu__du_stag_ordered_op_num_bits_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__int_emu__parse_tree__int_emu__du_name_ordered_op_num_bits_0[5] = {
  &parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_2,
  &parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_3,
  &parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_4,
  &parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_1,
  &parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_num_bits_0_0
};

static const MR_Integer parse_tree__int_emu__parse_tree__int_emu__functor_number_map_op_num_bits_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct parse_tree__int_emu__parse_tree__int_emu__type_ctor_info_op_num_bits_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__int_emu____Unify____op_num_bits_0_0_10001)),
  ((MR_Box) (parse_tree__int_emu____Compare____op_num_bits_0_0_10001)),
  (MR_String) "parse_tree.int_emu",
  (MR_String) "op_num_bits",
  { parse_tree__int_emu__parse_tree__int_emu__du_name_ordered_op_num_bits_0 },
  { parse_tree__int_emu__parse_tree__int_emu__du_ptag_ordered_op_num_bits_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  parse_tree__int_emu__parse_tree__int_emu__functor_number_map_op_num_bits_0,

};

static const MR_PseudoTypeInfo parse_tree__int_emu__parse_tree__int_emu__field_types_op_type_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__int_emu__parse_tree__int_emu__type_ctor_info_op_num_bits_0) };

static const MR_DuFunctorDesc parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_type_0_0 = {
  (MR_String) "op_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__int_emu__parse_tree__int_emu__field_types_op_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__int_emu__parse_tree__int_emu__field_types_op_type_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__int_emu__parse_tree__int_emu__type_ctor_info_op_num_bits_0) };

static const MR_DuFunctorDesc parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_type_0_1 = {
  (MR_String) "op_uint",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__int_emu__parse_tree__int_emu__field_types_op_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__int_emu__parse_tree__int_emu__du_stag_ordered_op_type_0_0[1] = { &parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_type_0_0 };

static const MR_DuFunctorDescPtr parse_tree__int_emu__parse_tree__int_emu__du_stag_ordered_op_type_0_1[1] = { &parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_type_0_1 };

static const MR_DuPtagLayout parse_tree__int_emu__parse_tree__int_emu__du_ptag_ordered_op_type_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__int_emu__parse_tree__int_emu__du_stag_ordered_op_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__int_emu__parse_tree__int_emu__du_stag_ordered_op_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__int_emu__parse_tree__int_emu__du_name_ordered_op_type_0[2] = {
  &parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_type_0_0,
  &parse_tree__int_emu__parse_tree__int_emu__du_functor_desc_op_type_0_1
};

static const MR_Integer parse_tree__int_emu__parse_tree__int_emu__functor_number_map_op_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__int_emu__parse_tree__int_emu__type_ctor_info_op_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__int_emu____Unify____op_type_0_0_10001)),
  ((MR_Box) (parse_tree__int_emu____Compare____op_type_0_0_10001)),
  (MR_String) "parse_tree.int_emu",
  (MR_String) "op_type",
  { parse_tree__int_emu__parse_tree__int_emu__du_name_ordered_op_type_0 },
  { parse_tree__int_emu__parse_tree__int_emu__du_ptag_ordered_op_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__int_emu__parse_tree__int_emu__functor_number_map_op_type_0,

};

void MR_CALL 
parse_tree__int_emu____Compare____op_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__int_emu____Compare____op_num_bits_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    parse_tree__int_emu____Compare____op_num_bits_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
  }
}

MR_bool MR_CALL 
parse_tree__int_emu____Unify____op_type_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__int_emu____Unify____op_num_bits_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__int_emu____Unify____op_num_bits_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__int_emu____Compare____op_num_bits_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              succeeded = (ArgX1_4 < ArgY1_5);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX1_4 > ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
parse_tree__int_emu____Unify____op_num_bits_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_xor_4_p_0(
  MR_Word OpType_5,
  MR_Word FunctorX_6,
  MR_Word FunctorY_7,
  MR_Word * ConstZ_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) FunctorX_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FunctorX_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
  MR_Word ConstX_9;
  MR_Word ConstY_10;

  if (succeeded)
  {
    ConstX_9 = ((MR_Word) ((MR_hl_field(3, FunctorX_6, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) FunctorY_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FunctorY_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      ConstY_10 = ((MR_Word) ((MR_hl_field(3, FunctorY_7, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) OpType_5)) == (MR_Integer) 0))
      {
        MR_Word OpNumBits_11 = ((MR_Word) ((MR_hl_field(0, OpType_5, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) OpNumBits_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OpNumBits_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  int8_t Int8X_15;
                  int8_t Int8Y_16;
                  int8_t Var_35;

                  succeeded = ((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Int8X_15 = ((int8_t) (MR_Word) (MR_hl_field(2, ConstX_9, (MR_Integer) 0)));
                    succeeded = ((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Int8Y_16 = ((int8_t) (MR_Word) (MR_hl_field(2, ConstY_10, (MR_Integer) 0)));
                      Var_35 = (Int8X_15 ^ Int8Y_16);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(2, base, 0) = ((MR_Box) (MR_Word) (Var_35));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  int16_t Int16X_17;
                  int16_t Int16Y_18;
                  int16_t Var_36;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Int16X_17 = ((int16_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Int16Y_18 = ((int16_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_36 = (Int16X_17 ^ Int16Y_18);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_36));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  int32_t Int32X_19;
                  int32_t Int32Y_20;
                  int32_t Var_37;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    Int32X_19 = ((int32_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      Int32Y_20 = ((int32_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_37 = (Int32X_19 ^ Int32Y_20);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_37));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  int64_t Int64X_21;
                  int64_t Int64Y_22;
                  int64_t Var_38;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    Int64X_21 = MR_unbox_int64((MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (succeeded)
                    {
                      Int64Y_22 = MR_unbox_int64((MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_38 = (Int64X_21 ^ Int64Y_22);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, base, 1) = MR_box_int64(Var_38);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer IntX_13;
              MR_Integer IntY_14;
              MR_Integer Var_34;

              succeeded = ((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 0);
              if (succeeded)
              {
                IntX_13 = ((MR_Integer) ((MR_hl_field(0, ConstX_9, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 0);
                if (succeeded)
                {
                  IntY_14 = ((MR_Integer) ((MR_hl_field(0, ConstY_10, (MR_Integer) 0))));
                  Var_34 = (IntX_13 ^ IntY_14);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *ConstZ_8 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_34));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
        }
      }
      else
      {
        MR_Word OpNumBits_44 = ((MR_Word) ((MR_hl_field(1, OpType_5, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) OpNumBits_44)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OpNumBits_44)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  uint8_t UInt8X_26;
                  uint8_t UInt8Y_27;
                  uint8_t Var_40;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    UInt8X_26 = ((uint8_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      UInt8Y_27 = ((uint8_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_40 = (UInt8X_26 ^ UInt8Y_27);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_40));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  uint16_t UInt16X_28;
                  uint16_t UInt16Y_29;
                  uint16_t Var_41;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    UInt16X_28 = ((uint16_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      UInt16Y_29 = ((uint16_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_41 = (UInt16X_28 ^ UInt16Y_29);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_41));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  uint32_t UInt32X_30;
                  uint32_t UInt32Y_31;
                  uint32_t Var_42;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    UInt32X_30 = ((uint32_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      UInt32Y_31 = ((uint32_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_42 = (UInt32X_30 ^ UInt32Y_31);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_42));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  uint64_t UInt64X_32;
                  uint64_t UInt64Y_33;
                  uint64_t Var_43;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    UInt64X_32 = MR_unbox_uint64((MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      UInt64Y_33 = MR_unbox_uint64((MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_43 = (UInt64X_32 ^ UInt64Y_33);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(3, base, 1) = MR_box_uint64(Var_43);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Unsigned UIntX_24;
              MR_Unsigned UIntY_25;
              MR_Unsigned Var_39;

              succeeded = ((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 1);
              if (succeeded)
              {
                UIntX_24 = ((MR_Unsigned) ((MR_hl_field(1, ConstX_9, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 1);
                if (succeeded)
                {
                  UIntY_25 = ((MR_Unsigned) ((MR_hl_field(1, ConstY_10, (MR_Integer) 0))));
                  Var_39 = (UIntX_24 ^ UIntY_25);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *ConstZ_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_39));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_or_4_p_0(
  MR_Word OpType_5,
  MR_Word FunctorX_6,
  MR_Word FunctorY_7,
  MR_Word * ConstZ_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) FunctorX_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FunctorX_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
  MR_Word ConstX_9;
  MR_Word ConstY_10;

  if (succeeded)
  {
    ConstX_9 = ((MR_Word) ((MR_hl_field(3, FunctorX_6, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) FunctorY_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FunctorY_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      ConstY_10 = ((MR_Word) ((MR_hl_field(3, FunctorY_7, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) OpType_5)) == (MR_Integer) 0))
      {
        MR_Word OpNumBits_11 = ((MR_Word) ((MR_hl_field(0, OpType_5, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) OpNumBits_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OpNumBits_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  int8_t Int8X_15;
                  int8_t Int8Y_16;
                  int8_t Var_35;

                  succeeded = ((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Int8X_15 = ((int8_t) (MR_Word) (MR_hl_field(2, ConstX_9, (MR_Integer) 0)));
                    succeeded = ((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Int8Y_16 = ((int8_t) (MR_Word) (MR_hl_field(2, ConstY_10, (MR_Integer) 0)));
                      Var_35 = (Int8X_15 | Int8Y_16);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(2, base, 0) = ((MR_Box) (MR_Word) (Var_35));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  int16_t Int16X_17;
                  int16_t Int16Y_18;
                  int16_t Var_36;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Int16X_17 = ((int16_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Int16Y_18 = ((int16_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_36 = (Int16X_17 | Int16Y_18);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_36));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  int32_t Int32X_19;
                  int32_t Int32Y_20;
                  int32_t Var_37;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    Int32X_19 = ((int32_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      Int32Y_20 = ((int32_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_37 = (Int32X_19 | Int32Y_20);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_37));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  int64_t Int64X_21;
                  int64_t Int64Y_22;
                  int64_t Var_38;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    Int64X_21 = MR_unbox_int64((MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (succeeded)
                    {
                      Int64Y_22 = MR_unbox_int64((MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_38 = (Int64X_21 | Int64Y_22);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, base, 1) = MR_box_int64(Var_38);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer IntX_13;
              MR_Integer IntY_14;
              MR_Integer Var_34;

              succeeded = ((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 0);
              if (succeeded)
              {
                IntX_13 = ((MR_Integer) ((MR_hl_field(0, ConstX_9, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 0);
                if (succeeded)
                {
                  IntY_14 = ((MR_Integer) ((MR_hl_field(0, ConstY_10, (MR_Integer) 0))));
                  Var_34 = (IntX_13 | IntY_14);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *ConstZ_8 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_34));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
        }
      }
      else
      {
        MR_Word OpNumBits_44 = ((MR_Word) ((MR_hl_field(1, OpType_5, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) OpNumBits_44)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OpNumBits_44)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  uint8_t UInt8X_26;
                  uint8_t UInt8Y_27;
                  uint8_t Var_40;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    UInt8X_26 = ((uint8_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      UInt8Y_27 = ((uint8_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_40 = (UInt8X_26 | UInt8Y_27);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_40));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  uint16_t UInt16X_28;
                  uint16_t UInt16Y_29;
                  uint16_t Var_41;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    UInt16X_28 = ((uint16_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      UInt16Y_29 = ((uint16_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_41 = (UInt16X_28 | UInt16Y_29);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_41));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  uint32_t UInt32X_30;
                  uint32_t UInt32Y_31;
                  uint32_t Var_42;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    UInt32X_30 = ((uint32_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      UInt32Y_31 = ((uint32_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_42 = (UInt32X_30 | UInt32Y_31);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_42));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  uint64_t UInt64X_32;
                  uint64_t UInt64Y_33;
                  uint64_t Var_43;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    UInt64X_32 = MR_unbox_uint64((MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      UInt64Y_33 = MR_unbox_uint64((MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_43 = (UInt64X_32 | UInt64Y_33);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(3, base, 1) = MR_box_uint64(Var_43);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Unsigned UIntX_24;
              MR_Unsigned UIntY_25;
              MR_Unsigned Var_39;

              succeeded = ((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 1);
              if (succeeded)
              {
                UIntX_24 = ((MR_Unsigned) ((MR_hl_field(1, ConstX_9, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 1);
                if (succeeded)
                {
                  UIntY_25 = ((MR_Unsigned) ((MR_hl_field(1, ConstY_10, (MR_Integer) 0))));
                  Var_39 = (UIntX_24 | UIntY_25);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *ConstZ_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_39));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_and_4_p_0(
  MR_Word OpType_5,
  MR_Word FunctorX_6,
  MR_Word FunctorY_7,
  MR_Word * ConstZ_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) FunctorX_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FunctorX_6, (MR_Integer) 0)))) == (MR_Integer) 5)));
  MR_Word ConstX_9;
  MR_Word ConstY_10;

  if (succeeded)
  {
    ConstX_9 = ((MR_Word) ((MR_hl_field(3, FunctorX_6, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) FunctorY_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FunctorY_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      ConstY_10 = ((MR_Word) ((MR_hl_field(3, FunctorY_7, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) OpType_5)) == (MR_Integer) 0))
      {
        MR_Word OpNumBits_11 = ((MR_Word) ((MR_hl_field(0, OpType_5, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) OpNumBits_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OpNumBits_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  int8_t Int8X_15;
                  int8_t Int8Y_16;
                  int8_t Var_35;

                  succeeded = ((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 2);
                  if (succeeded)
                  {
                    Int8X_15 = ((int8_t) (MR_Word) (MR_hl_field(2, ConstX_9, (MR_Integer) 0)));
                    succeeded = ((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Int8Y_16 = ((int8_t) (MR_Word) (MR_hl_field(2, ConstY_10, (MR_Integer) 0)));
                      Var_35 = (Int8X_15 & Int8Y_16);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(2, base, 0) = ((MR_Box) (MR_Word) (Var_35));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  int16_t Int16X_17;
                  int16_t Int16Y_18;
                  int16_t Var_36;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Int16X_17 = ((int16_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Int16Y_18 = ((int16_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_36 = (Int16X_17 & Int16Y_18);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_36));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  int32_t Int32X_19;
                  int32_t Int32Y_20;
                  int32_t Var_37;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    Int32X_19 = ((int32_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      Int32Y_20 = ((int32_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_37 = (Int32X_19 & Int32Y_20);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_37));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  int64_t Int64X_21;
                  int64_t Int64Y_22;
                  int64_t Var_38;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (succeeded)
                  {
                    Int64X_21 = MR_unbox_int64((MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (succeeded)
                    {
                      Int64Y_22 = MR_unbox_int64((MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_38 = (Int64X_21 & Int64Y_22);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                        MR_hl_field(3, base, 1) = MR_box_int64(Var_38);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer IntX_13;
              MR_Integer IntY_14;
              MR_Integer Var_34;

              succeeded = ((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 0);
              if (succeeded)
              {
                IntX_13 = ((MR_Integer) ((MR_hl_field(0, ConstX_9, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 0);
                if (succeeded)
                {
                  IntY_14 = ((MR_Integer) ((MR_hl_field(0, ConstY_10, (MR_Integer) 0))));
                  Var_34 = (IntX_13 & IntY_14);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *ConstZ_8 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_34));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
        }
      }
      else
      {
        MR_Word OpNumBits_44 = ((MR_Word) ((MR_hl_field(1, OpType_5, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) OpNumBits_44)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OpNumBits_44)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  uint8_t UInt8X_26;
                  uint8_t UInt8Y_27;
                  uint8_t Var_40;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
                  if (succeeded)
                  {
                    UInt8X_26 = ((uint8_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      UInt8Y_27 = ((uint8_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_40 = (UInt8X_26 & UInt8Y_27);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_40));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  uint16_t UInt16X_28;
                  uint16_t UInt16Y_29;
                  uint16_t Var_41;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    UInt16X_28 = ((uint16_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      UInt16Y_29 = ((uint16_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_41 = (UInt16X_28 & UInt16Y_29);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_41));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  uint32_t UInt32X_30;
                  uint32_t UInt32Y_31;
                  uint32_t Var_42;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    UInt32X_30 = ((uint32_t) (MR_Word) (MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      UInt32Y_31 = ((uint32_t) (MR_Word) (MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_42 = (UInt32X_30 & UInt32Y_31);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_42));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  uint64_t UInt64X_32;
                  uint64_t UInt64Y_33;
                  uint64_t Var_43;

                  succeeded = ((((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_9, (MR_Integer) 0)))) == (MR_Integer) 6)));
                  if (succeeded)
                  {
                    UInt64X_32 = MR_unbox_uint64((MR_hl_field(3, ConstX_9, (MR_Integer) 1)));
                    succeeded = ((((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstY_10, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      UInt64Y_33 = MR_unbox_uint64((MR_hl_field(3, ConstY_10, (MR_Integer) 1)));
                      Var_43 = (UInt64X_32 & UInt64Y_33);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        *ConstZ_8 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(3, base, 1) = MR_box_uint64(Var_43);
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Unsigned UIntX_24;
              MR_Unsigned UIntY_25;
              MR_Unsigned Var_39;

              succeeded = ((MR_tag((MR_Word) ConstX_9)) == (MR_Integer) 1);
              if (succeeded)
              {
                UIntX_24 = ((MR_Unsigned) ((MR_hl_field(1, ConstX_9, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) ConstY_10)) == (MR_Integer) 1);
                if (succeeded)
                {
                  UIntY_25 = ((MR_Unsigned) ((MR_hl_field(1, ConstY_10, (MR_Integer) 0))));
                  Var_39 = (UIntX_24 & UIntY_25);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *ConstZ_8 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Var_39));
                  }
                  succeeded = MR_TRUE;
                }
              }
            }
            break;
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_not_3_p_0(
  MR_Word OpType_4,
  MR_Word FunctorX_5,
  MR_Word * ConstY_6)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) FunctorX_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FunctorX_5, (MR_Integer) 0)))) == (MR_Integer) 5)));
  MR_Word ConstX_7;

  if (succeeded)
  {
    ConstX_7 = ((MR_Word) ((MR_hl_field(3, FunctorX_5, (MR_Integer) 1))));
    if (((MR_tag((MR_Word) OpType_4)) == (MR_Integer) 0))
    {
      MR_Word OpNumBits_8 = ((MR_Word) ((MR_hl_field(0, OpType_4, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) OpNumBits_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OpNumBits_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                int8_t Int8X_11;
                int8_t Var_21;

                succeeded = ((MR_tag((MR_Word) ConstX_7)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Int8X_11 = ((int8_t) (MR_Word) (MR_hl_field(2, ConstX_7, (MR_Integer) 0)));
                  Var_21 = ~(Int8X_11);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *ConstY_6 = base;
                    MR_hl_field(2, base, 0) = ((MR_Box) (MR_Word) (Var_21));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                int16_t Int16X_12;
                int16_t Var_22;

                succeeded = ((((MR_tag((MR_Word) ConstX_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Int16X_12 = ((int16_t) (MR_Word) (MR_hl_field(3, ConstX_7, (MR_Integer) 1)));
                  Var_22 = ~(Int16X_12);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *ConstY_6 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_22));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                int32_t Int32X_13;
                int32_t Var_23;

                succeeded = ((((MR_tag((MR_Word) ConstX_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  Int32X_13 = ((int32_t) (MR_Word) (MR_hl_field(3, ConstX_7, (MR_Integer) 1)));
                  Var_23 = ~(Int32X_13);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *ConstY_6 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_23));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                int64_t Int64X_14;
                int64_t Var_24;

                succeeded = ((((MR_tag((MR_Word) ConstX_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  Int64X_14 = MR_unbox_int64((MR_hl_field(3, ConstX_7, (MR_Integer) 1)));
                  Var_24 = ~(Int64X_14);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *ConstY_6 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(3, base, 1) = MR_box_int64(Var_24);
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer TargetNumBits_9 = ((MR_Integer) ((MR_hl_field(1, OpNumBits_8, (MR_Integer) 0))));
            MR_Integer IntX_10;
            MR_Integer Var_20;
            MR_Integer Var_34;

            succeeded = ((MR_tag((MR_Word) ConstX_7)) == (MR_Integer) 0);
            if (succeeded)
            {
              IntX_10 = ((MR_Integer) ((MR_hl_field(0, ConstX_7, (MR_Integer) 0))));
              Var_34 = mercury__int__bits_per_int_0_f_0();
              succeeded = (TargetNumBits_9 == Var_34);
              if (succeeded)
              {
                Var_20 = ~(IntX_10);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *ConstY_6 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Var_20));
                }
                succeeded = MR_TRUE;
              }
            }
          }
          break;
      }
    }
    else
    {
      MR_Word OpNumBits_33 = ((MR_Word) ((MR_hl_field(1, OpType_4, (MR_Integer) 0))));

      switch (MR_tag((MR_Word) OpNumBits_33)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OpNumBits_33)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                uint8_t UInt8X_16;
                uint8_t Var_26;

                succeeded = ((((MR_tag((MR_Word) ConstX_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  UInt8X_16 = ((uint8_t) (MR_Word) (MR_hl_field(3, ConstX_7, (MR_Integer) 1)));
                  Var_26 = ~(UInt8X_16);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *ConstY_6 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_26));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                uint16_t UInt16X_17;
                uint16_t Var_27;

                succeeded = ((((MR_tag((MR_Word) ConstX_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  UInt16X_17 = ((uint16_t) (MR_Word) (MR_hl_field(3, ConstX_7, (MR_Integer) 1)));
                  Var_27 = ~(UInt16X_17);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *ConstY_6 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_27));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                uint32_t UInt32X_18;
                uint32_t Var_28;

                succeeded = ((((MR_tag((MR_Word) ConstX_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  UInt32X_18 = ((uint32_t) (MR_Word) (MR_hl_field(3, ConstX_7, (MR_Integer) 1)));
                  Var_28 = ~(UInt32X_18);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *ConstY_6 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Var_28));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                uint64_t UInt64X_19;
                uint64_t Var_29;

                succeeded = ((((MR_tag((MR_Word) ConstX_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, ConstX_7, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  UInt64X_19 = MR_unbox_uint64((MR_hl_field(3, ConstX_7, (MR_Integer) 1)));
                  Var_29 = ~(UInt64X_19);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *ConstY_6 = base;
                    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(3, base, 1) = MR_box_uint64(Var_29);
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Unsigned UIntX_15;
            MR_Unsigned Var_25;
            MR_Integer TargetNumBits_30 = ((MR_Integer) ((MR_hl_field(1, OpNumBits_33, (MR_Integer) 0))));
            MR_Integer Var_35;

            succeeded = ((MR_tag((MR_Word) ConstX_7)) == (MR_Integer) 1);
            if (succeeded)
            {
              UIntX_15 = ((MR_Unsigned) ((MR_hl_field(1, ConstX_7, (MR_Integer) 0))));
              Var_35 = mercury__uint__bits_per_uint_0_f_0();
              succeeded = (TargetNumBits_30 == Var_35);
              if (succeeded)
              {
                Var_25 = ~(UIntX_15);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *ConstY_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
                }
                succeeded = MR_TRUE;
              }
            }
          }
          break;
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_int_rem_bits_per_int_3_p_0(
  MR_Word OpType_4,
  MR_Word ConstX_5,
  MR_Word * ConstZ_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) OpType_4)) == (MR_Integer) 0);
  MR_Integer BitsPerInt_7;
  MR_Integer IntX_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;

  if (succeeded)
  {
    Var_9 = ((MR_Word) ((MR_hl_field(0, OpType_4, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 1);
    if (succeeded)
    {
      BitsPerInt_7 = ((MR_Integer) ((MR_hl_field(1, Var_9, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) ConstX_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        IntX_8 = ((MR_Integer) ((MR_hl_field(0, ConstX_5, (MR_Integer) 0))));
        Var_10 = mercury__integer__integer_1_f_0(IntX_8);
        Var_11 = mercury__integer__integer_1_f_0(BitsPerInt_7);
        succeeded = mercury__integer__is_zero_1_p_0(Var_11);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_12 = mercury__integer__rem_2_f_0(Var_10, Var_11);
          succeeded = parse_tree__int_emu__to_some_int_const_if_in_in_range_3_p_0(OpType_4, Var_12, ConstZ_6);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_int_times_bits_per_int_3_p_0(
  MR_Word OpType_4,
  MR_Word ConstX_5,
  MR_Word * ConstZ_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) OpType_4)) == (MR_Integer) 0);
  MR_Integer BitsPerInt_7;
  MR_Integer IntX_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;

  if (succeeded)
  {
    Var_9 = ((MR_Word) ((MR_hl_field(0, OpType_4, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 1);
    if (succeeded)
    {
      BitsPerInt_7 = ((MR_Integer) ((MR_hl_field(1, Var_9, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) ConstX_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        IntX_8 = ((MR_Integer) ((MR_hl_field(0, ConstX_5, (MR_Integer) 0))));
        Var_10 = mercury__integer__integer_1_f_0(IntX_8);
        Var_11 = mercury__integer__integer_1_f_0(BitsPerInt_7);
        Var_12 = mercury__integer__f_times_2_f_0(Var_10, Var_11);
        succeeded = parse_tree__int_emu__to_some_int_const_if_in_in_range_3_p_0(OpType_4, Var_12, ConstZ_6);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_int_quot_bits_per_int_3_p_0(
  MR_Word OpType_4,
  MR_Word ConstX_5,
  MR_Word * ConstZ_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) OpType_4)) == (MR_Integer) 0);
  MR_Integer BitsPerInt_7;
  MR_Integer IntX_8;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;

  if (succeeded)
  {
    Var_9 = ((MR_Word) ((MR_hl_field(0, OpType_4, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_9)) == (MR_Integer) 1);
    if (succeeded)
    {
      BitsPerInt_7 = ((MR_Integer) ((MR_hl_field(1, Var_9, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) ConstX_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        IntX_8 = ((MR_Integer) ((MR_hl_field(0, ConstX_5, (MR_Integer) 0))));
        Var_10 = mercury__integer__integer_1_f_0(IntX_8);
        Var_11 = mercury__integer__integer_1_f_0(BitsPerInt_7);
        succeeded = mercury__integer__is_zero_1_p_0(Var_11);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_12 = mercury__integer__f_47_47_2_f_0(Var_10, Var_11);
          succeeded = parse_tree__int_emu__to_some_int_const_if_in_in_range_3_p_0(OpType_4, Var_12, ConstZ_6);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_int_floor_to_multiple_of_bits_per_int_3_p_0(
  MR_Word OpType_4,
  MR_Word ConstX_5,
  MR_Word * FloorConst_6)
{
  MR_bool succeeded = ((MR_tag((MR_Word) OpType_4)) == (MR_Integer) 0);
  MR_Integer BitsPerInt_7;
  MR_Integer IntX_8;
  MR_Word Trunc_9;
  MR_Word Floor0_10;
  MR_Word Floor_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;

  if (succeeded)
  {
    Var_12 = ((MR_Word) ((MR_hl_field(0, OpType_4, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 1);
    if (succeeded)
    {
      BitsPerInt_7 = ((MR_Integer) ((MR_hl_field(1, Var_12, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) ConstX_5)) == (MR_Integer) 0);
      if (succeeded)
      {
        IntX_8 = ((MR_Integer) ((MR_hl_field(0, ConstX_5, (MR_Integer) 0))));
        Var_13 = mercury__integer__integer_1_f_0(IntX_8);
        Var_14 = mercury__integer__integer_1_f_0(BitsPerInt_7);
        Trunc_9 = mercury__integer__f_47_47_2_f_0(Var_13, Var_14);
        Var_15 = mercury__integer__integer_1_f_0(BitsPerInt_7);
        Floor0_10 = mercury__integer__f_times_2_f_0(Trunc_9, Var_15);
        Var_16 = mercury__integer__integer_1_f_0(IntX_8);
        succeeded = mercury__integer__f_greater_than_2_p_0(Floor0_10, Var_16);
        if (succeeded)
        {
          MR_Word Var_17;

          Var_17 = mercury__integer__integer_1_f_0(BitsPerInt_7);
          Floor_11 = mercury__integer__f_minus_2_f_0(Floor0_10, Var_17);
        }
        else
          Floor_11 = Floor0_10;
        succeeded = parse_tree__int_emu__to_some_int_const_if_in_in_range_3_p_0(OpType_4, Floor_11, FloorConst_6);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_right_shift_4_p_0(
  MR_Word OpType_5,
  MR_Word X_6,
  MR_Integer Y_7,
  MR_Word * Z_8)
{
  MR_bool succeeded = (Y_7 >= (MR_Integer) 0);
  MR_Integer Var_10;
  MR_Word Var_11;
  MR_Word OpNumBits_12;

  if (succeeded)
  {
    if (((MR_tag((MR_Word) OpType_5)) == (MR_Integer) 0))
      OpNumBits_12 = ((MR_Word) ((MR_hl_field(0, OpType_5, (MR_Integer) 0))));
    else
      OpNumBits_12 = ((MR_Word) ((MR_hl_field(1, OpType_5, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) OpNumBits_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpNumBits_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_10 = (MR_Integer) 8;
            break;
          case (MR_Integer) 1:
            Var_10 = (MR_Integer) 16;
            break;
          case (MR_Integer) 2:
            Var_10 = (MR_Integer) 32;
            break;
          case (MR_Integer) 3:
            Var_10 = (MR_Integer) 64;
            break;
        }
        break;
      case (MR_Integer) 1:
        Var_10 = ((MR_Integer) ((MR_hl_field(1, OpNumBits_12, (MR_Integer) 0))));
        break;
    }
    succeeded = (Y_7 < Var_10);
    if (succeeded)
    {
      Var_11 = mercury__integer__f_62_62_2_f_0(X_6, Y_7);
      succeeded = parse_tree__int_emu__to_some_int_const_if_in_in_range_3_p_0(OpType_5, Var_11, Z_8);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_left_shift_4_p_0(
  MR_Word OpType_5,
  MR_Word X_6,
  MR_Integer Y_7,
  MR_Word * Z_8)
{
  MR_bool succeeded = (Y_7 >= (MR_Integer) 0);
  MR_Integer Var_10;
  MR_Word Var_11;
  MR_Word OpNumBits_12;

  if (succeeded)
  {
    if (((MR_tag((MR_Word) OpType_5)) == (MR_Integer) 0))
      OpNumBits_12 = ((MR_Word) ((MR_hl_field(0, OpType_5, (MR_Integer) 0))));
    else
      OpNumBits_12 = ((MR_Word) ((MR_hl_field(1, OpType_5, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) OpNumBits_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpNumBits_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Var_10 = (MR_Integer) 8;
            break;
          case (MR_Integer) 1:
            Var_10 = (MR_Integer) 16;
            break;
          case (MR_Integer) 2:
            Var_10 = (MR_Integer) 32;
            break;
          case (MR_Integer) 3:
            Var_10 = (MR_Integer) 64;
            break;
        }
        break;
      case (MR_Integer) 1:
        Var_10 = ((MR_Integer) ((MR_hl_field(1, OpNumBits_12, (MR_Integer) 0))));
        break;
    }
    succeeded = (Y_7 < Var_10);
    if (succeeded)
    {
      Var_11 = mercury__integer__f_60_60_2_f_0(X_6, Y_7);
      succeeded = parse_tree__int_emu__to_some_int_const_if_in_in_range_3_p_0(OpType_5, Var_11, Z_8);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_rem_4_p_0(
  MR_Word WordBits_5,
  MR_Word X_6,
  MR_Word Y_7,
  MR_Word * Z_8)
{
  MR_bool succeeded;
  MR_Word Var_9;

  succeeded = mercury__integer__is_zero_1_p_0(Y_7);
  succeeded = !(succeeded);
  if (succeeded)
  {
    Var_9 = mercury__integer__rem_2_f_0(X_6, Y_7);
    succeeded = parse_tree__int_emu__to_some_int_const_if_in_in_range_3_p_0(WordBits_5, Var_9, Z_8);
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_mod_4_p_0(
  MR_Word WordBits_5,
  MR_Word X_6,
  MR_Word Y_7,
  MR_Word * Z_8)
{
  MR_bool succeeded;
  MR_Word Var_9;

  succeeded = mercury__integer__is_zero_1_p_0(Y_7);
  succeeded = !(succeeded);
  if (succeeded)
  {
    Var_9 = mercury__integer__mod_2_f_0(X_6, Y_7);
    succeeded = parse_tree__int_emu__to_some_int_const_if_in_in_range_3_p_0(WordBits_5, Var_9, Z_8);
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_quotient_4_p_0(
  MR_Word WordBits_5,
  MR_Word X_6,
  MR_Word Y_7,
  MR_Word * Z_8)
{
  MR_bool succeeded;
  MR_Word Var_9;

  succeeded = mercury__integer__is_zero_1_p_0(Y_7);
  succeeded = !(succeeded);
  if (succeeded)
  {
    Var_9 = mercury__integer__f_47_47_2_f_0(X_6, Y_7);
    succeeded = parse_tree__int_emu__to_some_int_const_if_in_in_range_3_p_0(WordBits_5, Var_9, Z_8);
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_times_4_p_0(
  MR_Word WordBits_5,
  MR_Word X_6,
  MR_Word Y_7,
  MR_Word * Z_8)
{
  MR_bool succeeded;
  MR_Word Var_9;

  Var_9 = mercury__integer__f_times_2_f_0(X_6, Y_7);
  succeeded = parse_tree__int_emu__to_some_int_const_if_in_in_range_3_p_0(WordBits_5, Var_9, Z_8);
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_minus_4_p_0(
  MR_Word WordBits_5,
  MR_Word X_6,
  MR_Word Y_7,
  MR_Word * Z_8)
{
  MR_bool succeeded;
  MR_Word Var_9;

  Var_9 = mercury__integer__f_minus_2_f_0(X_6, Y_7);
  succeeded = parse_tree__int_emu__to_some_int_const_if_in_in_range_3_p_0(WordBits_5, Var_9, Z_8);
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__int_emu__emu_plus_4_p_0(
  MR_Word WordBits_5,
  MR_Word X_6,
  MR_Word Y_7,
  MR_Word * Z_8)
{
  MR_bool succeeded;
  MR_Word Var_9;

  Var_9 = mercury__integer__f_plus_2_f_0(X_6, Y_7);
  succeeded = parse_tree__int_emu__to_some_int_const_if_in_in_range_3_p_0(WordBits_5, Var_9, Z_8);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__int_emu__to_some_int_const_if_in_in_range_3_p_0(
  MR_Word OpType_4,
  MR_Word Integer_5,
  MR_Word * Const_6)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) OpType_4)) == (MR_Integer) 0))
  {
    MR_Word OpNumBits_7 = ((MR_Word) ((MR_hl_field(0, OpType_4, (MR_Integer) 0))));
    MR_Integer NumBits_8;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Integer Var_25;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Integer Var_30;
    MR_Integer Var_31;

    switch (MR_tag((MR_Word) OpNumBits_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpNumBits_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            NumBits_8 = (MR_Integer) 8;
            break;
          case (MR_Integer) 1:
            NumBits_8 = (MR_Integer) 16;
            break;
          case (MR_Integer) 2:
            NumBits_8 = (MR_Integer) 32;
            break;
          case (MR_Integer) 3:
            NumBits_8 = (MR_Integer) 64;
            break;
        }
        break;
      case (MR_Integer) 1:
        NumBits_8 = ((MR_Integer) ((MR_hl_field(1, OpNumBits_7, (MR_Integer) 0))));
        break;
    }
    Var_23 = mercury__integer__two_0_f_0();
    Var_25 = (MR_Integer) ((MR_Unsigned) NumBits_8 - (MR_Unsigned) 1);
    Var_24 = mercury__integer__integer_1_f_0(Var_25);
    Var_22 = mercury__integer__pow_2_f_0(Var_23, Var_24);
    Var_21 = mercury__integer__f_minus_1_f_0(Var_22);
    succeeded = mercury__integer__f_greater_or_equal_2_p_0(Integer_5, Var_21);
    if (succeeded)
    {
      Var_28 = mercury__integer__two_0_f_0();
      Var_31 = (MR_Integer) 1;
      Var_30 = (MR_Integer) ((MR_Unsigned) NumBits_8 - (MR_Unsigned) Var_31);
      Var_29 = mercury__integer__integer_1_f_0(Var_30);
      Var_27 = mercury__integer__pow_2_f_0(Var_28, Var_29);
      succeeded = mercury__integer__f_less_than_2_p_0(Integer_5, Var_27);
      if (succeeded)
        switch (MR_tag((MR_Word) OpNumBits_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(OpNumBits_7)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  int8_t Int8_11;

                  succeeded = mercury__integer__to_int8_2_p_0(Integer_5, &Int8_11);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Const_6 = base;
                      MR_hl_field(2, base, 0) = ((MR_Box) (MR_Word) (Int8_11));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  int16_t Int16_12;

                  succeeded = mercury__integer__to_int16_2_p_0(Integer_5, &Int16_12);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Const_6 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Int16_12));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  int32_t Int32_13;

                  succeeded = mercury__integer__to_int32_2_p_0(Integer_5, &Int32_13);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Const_6 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (Int32_13));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  int64_t Int64_14;

                  succeeded = mercury__integer__to_int64_2_p_0(Integer_5, &Int64_14);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Const_6 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                      MR_hl_field(3, base, 1) = MR_box_int64(Int64_14);
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Int_10;

              succeeded = mercury__integer__to_int_2_p_0(Integer_5, &Int_10);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *Const_6 = base;
                  MR_hl_field(0, base, 0) = ((MR_Box) (Int_10));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
        }
    }
  }
  else
  {
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word OpNumBits_36 = ((MR_Word) ((MR_hl_field(1, OpType_4, (MR_Integer) 0))));

    Var_32 = mercury__integer__zero_0_f_0();
    succeeded = mercury__integer__f_greater_or_equal_2_p_0(Integer_5, Var_32);
    if (succeeded)
    {
      Var_34 = mercury__integer__two_0_f_0();
      switch (MR_tag((MR_Word) OpNumBits_36)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OpNumBits_36)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                uint8_t UInt8_17;
                MR_Word Var_80;
                MR_Word Var_81;

                Var_81 = mercury__integer__integer_1_f_0((MR_Integer) 8);
                Var_80 = mercury__integer__pow_2_f_0(Var_34, Var_81);
                succeeded = mercury__integer__f_less_than_2_p_0(Integer_5, Var_80);
                if (succeeded)
                {
                  succeeded = mercury__integer__to_uint8_2_p_0(Integer_5, &UInt8_17);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Const_6 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (UInt8_17));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 1:
              {
                uint16_t UInt16_18;
                MR_Word Var_33;
                MR_Word Var_35;

                Var_35 = mercury__integer__integer_1_f_0((MR_Integer) 16);
                Var_33 = mercury__integer__pow_2_f_0(Var_34, Var_35);
                succeeded = mercury__integer__f_less_than_2_p_0(Integer_5, Var_33);
                if (succeeded)
                {
                  succeeded = mercury__integer__to_uint16_2_p_0(Integer_5, &UInt16_18);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Const_6 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (UInt16_18));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                uint32_t UInt32_19;
                MR_Word Var_74;
                MR_Word Var_75;

                Var_75 = mercury__integer__integer_1_f_0((MR_Integer) 32);
                Var_74 = mercury__integer__pow_2_f_0(Var_34, Var_75);
                succeeded = mercury__integer__f_less_than_2_p_0(Integer_5, Var_74);
                if (succeeded)
                {
                  succeeded = mercury__integer__to_uint32_2_p_0(Integer_5, &UInt32_19);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Const_6 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(3, base, 1) = ((MR_Box) (MR_Word) (UInt32_19));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                uint64_t UInt64_20;
                MR_Word Var_77;
                MR_Word Var_78;

                Var_78 = mercury__integer__integer_1_f_0((MR_Integer) 64);
                Var_77 = mercury__integer__pow_2_f_0(Var_34, Var_78);
                succeeded = mercury__integer__f_less_than_2_p_0(Integer_5, Var_77);
                if (succeeded)
                {
                  succeeded = mercury__integer__to_uint64_2_p_0(Integer_5, &UInt64_20);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *Const_6 = base;
                      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(3, base, 1) = MR_box_uint64(UInt64_20);
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Unsigned UInt_16;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Integer NumBits_85 = ((MR_Integer) ((MR_hl_field(1, OpNumBits_36, (MR_Integer) 0))));

            Var_84 = mercury__integer__integer_1_f_0(NumBits_85);
            Var_83 = mercury__integer__pow_2_f_0(Var_34, Var_84);
            succeeded = mercury__integer__f_less_than_2_p_0(Integer_5, Var_83);
            if (succeeded)
            {
              succeeded = mercury__integer__to_uint_2_p_0(Integer_5, &UInt_16);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Const_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (UInt_16));
                }
                succeeded = MR_TRUE;
              }
            }
          }
          break;
      }
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
parse_tree__int_emu__target_op_type_1_f_0(
  MR_Word Globals_3)
{
  MR_Word HeadVar__2_2;
  MR_Integer WordBits_4;
  MR_Word Target_5;

  libs__globals__get_target_2_p_0(Globals_3, &Target_5);
  switch (Target_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 308, &WordBits_4);
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      WordBits_4 = (MR_Integer) 32;
      break;
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (WordBits_4));
  }
  return HeadVar__2_2;
}

MR_Integer MR_CALL 
parse_tree__int_emu__target_word_bits_1_f_0(
  MR_Word Globals_3)
{
  MR_Integer WordBits_4;
  MR_Word Target_5;

  libs__globals__get_target_2_p_0(Globals_3, &Target_5);
  switch (Target_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 308, &WordBits_4);
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      WordBits_4 = (MR_Integer) 32;
      break;
  }
  return WordBits_4;
}

static MR_bool MR_CALL 
parse_tree__int_emu____Unify____op_num_bits_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__int_emu____Unify____op_num_bits_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__int_emu____Compare____op_num_bits_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__int_emu____Compare____op_num_bits_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__int_emu____Unify____op_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__int_emu____Unify____op_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__int_emu____Compare____op_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__int_emu____Compare____op_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__int_emu__init(void)
{
}

void mercury__parse_tree__int_emu__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__int_emu__parse_tree__int_emu__type_ctor_info_op_num_bits_0);
	MR_register_type_ctor_info(&parse_tree__int_emu__parse_tree__int_emu__type_ctor_info_op_type_0);
}

void mercury__parse_tree__int_emu__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__int_emu__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.int_emu.
