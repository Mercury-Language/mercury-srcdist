/*
** Automatically generated from `construct.m'
** by the Mercury compiler,
** version rotd-2025-11-21
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


// :- module construct.
// :- implementation.

/*
INIT mercury__construct__init
ENDINIT
*/

#include "construct.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static MR_Word MR_CALL 
mercury__construct__map__ho2_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__construct__LCMC__func__map__ho2__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16);

static MR_Word MR_CALL 
mercury__construct__map__ho1_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__construct__LCMC__func__map__ho1__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13);

static MR_Word MR_CALL 
mercury__construct__map__ho3_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__construct__LCMC__func__map__ho3__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13);

static MR_bool MR_CALL 
mercury__construct____Unify____functor_number_lex_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__construct____Compare____functor_number_lex_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__construct____Unify____functor_number_ordinal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__construct____Compare____functor_number_ordinal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__construct_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__construct_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__construct_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__construct_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__construct_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__construct_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__construct_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__construct_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"
#line 489 "construct.m"

void
ML_copy_memory_cell_args(MR_Word *arg_list_ptr, MR_Word *new_data_ptr,
    const MR_Word ptag, const MR_DuFunctorDesc *functor_desc,
    const MR_bool has_sectag, const MR_AllocSiteInfoPtr alloc_id)
{
    MR_Word             arg_list = *arg_list_ptr;
    MR_Word             new_data;
    const MR_Word       arity = functor_desc->MR_du_functor_orig_arity;
    const MR_DuArgLocn  *arg_locns = functor_desc->MR_du_functor_arg_locns;
    const int           sectag01 = (has_sectag ? 1 : 0);
    int                 args_size = MR_cell_size_for_args(arity, arg_locns);
    int                 alloc_size = MR_SIZE_SLOT_SIZE + sectag01 + args_size;
    int                 size;
    MR_Unsigned         i;

    MR_tag_offset_incr_hp_msg(new_data, ptag, MR_SIZE_SLOT_SIZE, alloc_size,
        alloc_id, "<created by construct.construct/3>");
    *new_data_ptr = new_data;

    // Ensure words holding packed arguments are zeroed before filling them in.
  #ifndef MR_BOEHM_GC
    if (arg_locns != NULL) {
        MR_memset((void *) new_data, 0, alloc_size * sizeof(MR_Word));
    }
  #endif

    size = MR_cell_size(args_size);
    if (has_sectag) {
        MR_field(ptag, new_data, 0) = functor_desc->MR_du_functor_secondary;
    }

    for (i = 0; i < arity; i++) {
        MR_Word         arg_data;
        MR_TypeInfo     arg_type_info;
        MR_Unsigned     bits_to_or;

        arg_data = MR_field(MR_UNIV_TAG, MR_list_head(arg_list),
            MR_UNIV_OFFSET_FOR_DATA);
        arg_type_info = (MR_TypeInfo) MR_field(MR_UNIV_TAG,
            MR_list_head(arg_list), MR_UNIV_OFFSET_FOR_TYPEINFO);
        // XXX ARG_PACK This test is loop-invariant; lift it out of the loop.
        if (arg_locns == NULL) {
            MR_field(ptag, new_data, sectag01 + i) = arg_data;
        } else {
            const MR_DuArgLocn *locn = &arg_locns[i];

            // The meanings of the various special values of MR_arg_bits
            // and MR_arg_offset are documented next to the definition of
            // the MR_DuArgLocn type in mercury_type_info.h.

            switch (locn->MR_arg_bits) {

            case 0:
                if (locn->MR_arg_offset < 0) {
                    MR_fatal_error("construct(): full word arg in tagword");
                }
                MR_field(ptag, new_data, sectag01 + locn->MR_arg_offset)
                    = arg_data;
                break;

            case -1:
                // This is a double-precision floating point argument
                // that takes two words.
                if (locn->MR_arg_offset < 0) {
                    MR_fatal_error(
                        "construct(): double word arg in tagword");
                }
  #ifdef MR_BOXED_FLOAT
                MR_memcpy(
                    &MR_field(ptag, new_data, sectag01 + locn->MR_arg_offset),
                    (MR_Word *) arg_data, sizeof(MR_Float));
  #else
                MR_fatal_error("construct(): double word float");
  #endif
                break;

            case -2:
                // This is an int64 argument that takes two words.
                if (locn->MR_arg_offset < 0) {
                    MR_fatal_error(
                        "construct(): double word arg in tagword");
                }
  #ifdef MR_BOXED_INT64S
                MR_memcpy(
                    &MR_field(ptag, new_data, sectag01 + locn->MR_arg_offset),
                    (MR_Word *) arg_data, sizeof(int64_t));
  #else
                MR_fatal_error("construct(): double word int64");
  #endif
                break;

            case -3:
                // This is a uint64 argument that takes two words.
                if (locn->MR_arg_offset < 0) {
                    MR_fatal_error(
                        "construct(): double word arg in tagword");
                }
  #ifdef MR_BOXED_INT64S
                MR_memcpy(
                    &MR_field(ptag, new_data, sectag01 + locn->MR_arg_offset),
                    (MR_Word *) arg_data, sizeof(uint64_t));
  #else
                MR_fatal_error("construct(): double word uint64");
  #endif
                break;

            case -4:    // fall-through
            case -5:
                // This is an int8 (-4) or uint8 (-5) argument.
                bits_to_or = (((MR_Unsigned) arg_data) & 0xff);
                if (locn->MR_arg_offset == -1) {
                    MR_field(ptag, new_data, 0)
                        |= (bits_to_or << locn->MR_arg_shift);
                } else if (locn->MR_arg_offset < 0) {
                    MR_fatal_error("construct(): unknown negative offset");
                } else {
                    MR_field(ptag, new_data, sectag01 + locn->MR_arg_offset)
                        |= (bits_to_or << locn->MR_arg_shift);
                }
                break;

            case -6:    // fall-through
            case -7:
                // This is an int16 (-6) or uint16 (-7) argument.
                bits_to_or = (((MR_Unsigned) arg_data) & 0xffff);
                if (locn->MR_arg_offset == -1) {
                    MR_field(ptag, new_data, 0)
                        |= (bits_to_or << locn->MR_arg_shift);
                } else if (locn->MR_arg_offset < 0) {
                    MR_fatal_error("construct(): unknown negative offset");
                } else {
                    MR_field(ptag, new_data, sectag01 + locn->MR_arg_offset)
                        |= (bits_to_or << locn->MR_arg_shift);
                }
                break;

            case -8:    // fall-through
            case -9:
                // This is an int32 (-8) or uint32 (-9) argument.
                bits_to_or = (((MR_Unsigned) arg_data) & 0xffffffff);
                if (locn->MR_arg_offset == -1) {
                    MR_field(ptag, new_data, 0)
                        |= (bits_to_or << locn->MR_arg_shift);
                } else if (locn->MR_arg_offset < 0) {
                    MR_fatal_error("construct(): unknown negative offset");
                } else {
                    MR_field(ptag, new_data, sectag01 + locn->MR_arg_offset)
                        |= (bits_to_or << locn->MR_arg_shift);
                }
                break;

            case -10:
                // This is a dummy argument, which does not need setting.
                break;

            default:
                if (locn->MR_arg_bits > 0) {
                    bits_to_or = arg_data;
                    if (locn->MR_arg_offset == -1) {
                        MR_field(ptag, new_data, 0)
                            |= (bits_to_or << locn->MR_arg_shift);
                    } else if (locn->MR_arg_offset < 0) {
                        MR_fatal_error(
                            "construct(): unknown negative offset");
                    } else {
                        MR_field(ptag, new_data,
                                sectag01 + locn->MR_arg_offset)
                            |= (bits_to_or << locn->MR_arg_shift);
                    }
                } else {
                    MR_fatal_error("unknown MR_arg_bits value");
                }
                break;
            }
        }

        size += MR_term_size(arg_type_info, arg_data);
        arg_list = MR_list_tail(arg_list);
    }

    *arg_list_ptr = arg_list;
    MR_define_size_slot(ptag, new_data, size);
}

MR_Unsigned
ML_copy_tagword_args(MR_Word *arg_list_ptr, const MR_Word ptag,
    const MR_DuFunctorDesc *functor_desc)
{
    MR_Word             arg_list = *arg_list_ptr;
    MR_Unsigned         new_data;
    const MR_Word       arity = functor_desc->MR_du_functor_orig_arity;
    const MR_DuArgLocn  *arg_locns = functor_desc->MR_du_functor_arg_locns;
    MR_Unsigned         i;

    new_data = ptag | (functor_desc->MR_du_functor_secondary << MR_TAGBITS);

    for (i = 0; i < arity; i++) {
        MR_Word         arg_data;
        MR_TypeInfo     arg_type_info;

        arg_data = MR_field(MR_UNIV_TAG, MR_list_head(arg_list),
            MR_UNIV_OFFSET_FOR_DATA);
        arg_type_info = (MR_TypeInfo) MR_field(MR_UNIV_TAG,
            MR_list_head(arg_list), MR_UNIV_OFFSET_FOR_TYPEINFO);
        if (arg_locns == NULL) {
            MR_fatal_error("construct(): arg_locns == NULL");
        }

        const MR_DuArgLocn *locn = &arg_locns[i];

        // The meanings of the various special values of MR_arg_bits
        // are documented next to the definition of the MR_DuArgLocn type
        // in mercury_type_info.h.

        switch (locn->MR_arg_bits) {

        case 0:
            MR_fatal_error("construct(): full word argument in tagword");
            break;

        case -1:    // fall-through
        case -2:    // fall-through
        case -3:
            // This is an argument that takes two words, the type being
            // float, int64, or uint64.
            MR_fatal_error("construct(): double word argument in tagword");
            break;

        case -4:    // fall-through
        case -5:
            // This is an int8 (-4) or uint8 (-5) argument.
            new_data = new_data |
                ((((MR_Unsigned) arg_data) & 0xff) << locn->MR_arg_shift);
            break;

        case -6:    // fall-through
        case -7:
            // This is an int16 (-6) or uint16 (-7) argument.
            new_data = new_data |
                ((((MR_Unsigned) arg_data) & 0xffff) << locn->MR_arg_shift);
            break;

        case -8:    // fall-through
        case -9:
            // This is an int32 (-8) or uint32 (-9) argument.
            new_data = new_data |
                ((((MR_Unsigned) arg_data) & 0xffffffff)
                    << locn->MR_arg_shift);
            break;

        case -10:
            // This is a dummy argument, which does not need setting.
            break;

        default:
            if (locn->MR_arg_bits > 0) {
                MR_Unsigned arg_value = ((MR_Unsigned) arg_data) &
                    ((1 << locn->MR_arg_bits) - 1);
                new_data = new_data | (arg_value << locn->MR_arg_shift);
            } else {
                MR_fatal_error("unknown MR_arg_bits value");
            }
            break;
        }

        arg_list = MR_list_tail(arg_list);
    }

    *arg_list_ptr = arg_list;
    return new_data;
}



const MR_TypeCtorInfo_Struct mercury__construct__construct__type_ctor_info_functor_number_lex_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__construct____Unify____functor_number_lex_0_0_10001)),
  ((MR_Box) (mercury__construct____Compare____functor_number_lex_0_0_10001)),
  (MR_String) "construct",
  (MR_String) "functor_number_lex",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mercury__construct__construct__type_ctor_info_functor_number_ordinal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__construct____Unify____functor_number_ordinal_0_0_10001)),
  ((MR_Box) (mercury__construct____Compare____functor_number_ordinal_0_0_10001)),
  (MR_String) "construct",
  (MR_String) "functor_number_ordinal",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__construct____Compare____functor_number_ordinal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__construct____Unify____functor_number_ordinal_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__construct____Compare____functor_number_lex_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__construct____Unify____functor_number_lex_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__construct__null_1_p_0(
  MR_String S_1)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__construct__null_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = S_1 ;
		{

    SUCCESS_INDICATOR = (S == NULL);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_Word MR_CALL 
mercury__construct__null_to_no_1_f_0(
  MR_String S_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__construct__null_to_no_1_f_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = S_3 ;
		{

    SUCCESS_INDICATOR = (S == NULL);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (S_3));
    }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__construct__construct_tuple_1_f_0(
  MR_Word Args_3)
{
  MR_Word Univ_4;
  MR_Word Var_5;
  MR_Integer Var_6;

  Var_5 = mercury__construct__map__ho2_2_f_in__list_0(Args_3);
  mercury__list__length_acc_3_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args_3, (MR_Integer) 0, &Var_6);
  mercury__construct__construct_tuple_2_4_p_0(Args_3, Var_5, Var_6, &Univ_4);
  return Univ_4;
}

static MR_Word MR_CALL 
mercury__construct__map__ho2_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeInfo_6_13;
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_15;

    TypeInfo_6_13 = ((MR_Word) ((MR_hl_field(0, Var_6, 0))));
{
#define MR_PROC_LABEL mercury__construct__map__ho2_2_f_in__list_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_6_13 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_8  = TypeInfo;
}
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
    mercury__construct__LCMC__func__map__ho2__1_3_p_0(Var_7, AddrSCCcallarg_9_15);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__construct__LCMC__func__map__ho2__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeInfo_6_13;
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_15;
      MR_Word HeadVar__3_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_16;

      TypeInfo_6_13 = ((MR_Word) ((MR_hl_field(0, Var_6, 0))));
{
#define MR_PROC_LABEL mercury__construct__LCMC__func__map__ho2__1_3_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_6_13 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_8  = TypeInfo;
}
      {
        HeadVar__3_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_17, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_17, 1) = NULL;
      }
      AddrSCCcallarg_9_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_17, 1)));
      *AddrOfHeadVar__3_16 = HeadVar__3_17;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_16 = AddrSCCcallarg_9_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_16 = next_value_of_AddrOfHeadVar__3_16;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__construct__construct_tuple_2_4_p_0(
  MR_Word Args_1,
  MR_Word ArgTypes_2,
  MR_Integer Arity_3,
  MR_Word * Univ_4)
{
{
#define MR_PROC_LABEL mercury__construct__construct_tuple_2_4_p_0

	MR_Word Args;
	MR_Word ArgTypes;
	MR_Integer Arity;
	MR_Word Univ;

	Args = Args_1 ;
	ArgTypes = ArgTypes_2 ;
	Arity = Arity_3 ;
		{
{
    MR_TypeInfo type_info;
    MR_Word     new_data;
    int         i;
    MR_Word     arg_data;
    MR_TypeInfo arg_type_info;
    int         size;

    // Construct a type_info for the tuple.
    MR_save_transient_registers();
    type_info = MR_make_type(Arity, MR_TYPECTOR_DESC_MAKE_TUPLE(Arity),
        ArgTypes);
    MR_restore_transient_registers();

    // Create the tuple.
    if (Arity == 0) {
        new_data = (MR_Word) NULL;
    } else {
        MR_offset_incr_hp_msg(new_data, MR_SIZE_SLOT_SIZE,
            MR_SIZE_SLOT_SIZE + Arity, MR_ALLOC_ID,
            "<created by construct.construct_tuple/1>");

        size = MR_cell_size(Arity);
        for (i = 0; i < Arity; i++) {
            arg_data = MR_field(MR_UNIV_TAG, MR_list_head(Args),
                MR_UNIV_OFFSET_FOR_DATA);
            arg_type_info = (MR_TypeInfo) MR_field(MR_UNIV_TAG,
                MR_list_head(Args), MR_UNIV_OFFSET_FOR_TYPEINFO);
            MR_field(MR_mktag(0), new_data, i) = arg_data;
            size += MR_term_size(arg_type_info, arg_data);
            Args = MR_list_tail(Args);
        }

        MR_define_size_slot(MR_mktag(0), new_data, size);
    }

    // Create a univ.
    MR_new_univ_on_hp(Univ, type_info, new_data);
}

		;}
#undef MR_PROC_LABEL
	*Univ_4  = Univ;
}
}

MR_bool MR_CALL 
mercury__construct__construct_3_f_0(
  MR_Word TypeDesc_5,
  MR_Integer Index_6,
  MR_Word Args_7,
  MR_Word * Term_8)
{
  MR_bool succeeded;

  succeeded = mercury__construct__construct_4_p_0(TypeDesc_5, Index_6, Args_7, Term_8);
  return succeeded;
}

MR_bool MR_CALL 
mercury__construct__construct_4_p_0(
  MR_Word TypeDesc_1,
  MR_Integer FunctorNumber_2,
  MR_Word ArgList_3,
  MR_Word * Term_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__construct__construct_4_p_0

	MR_Word TypeDesc;
	MR_Integer FunctorNumber;
	MR_Word ArgList;
	MR_Word Term;
	MR_bool SUCCESS_INDICATOR;

	TypeDesc = TypeDesc_1 ;
	FunctorNumber = FunctorNumber_2 ;
	ArgList = ArgList_3 ;
		{
{
    MR_TypeInfo         type_info;
    MR_TypeCtorInfo     type_ctor_info;
    MR_Word             new_data;
    MR_Construct_Info   construct_info;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

    // If type_info is an equivalence type, expand it.
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    MR_restore_transient_registers();

    // Check range of FunctorNum, get info for this functor.
    MR_save_transient_registers();
    success =
        MR_get_functors_check_range(FunctorNumber, type_info, MR_FALSE,
            &construct_info);
    if (success) {
        success =
            MR_typecheck_arguments(type_info, construct_info.arity, ArgList,
                construct_info.arg_pseudo_type_infos);
    }
    MR_restore_transient_registers();

    // Build the new term in `new_data'.
    if (success) {
        type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);

        if (MR_type_ctor_rep(type_ctor_info) != construct_info.type_ctor_rep) {
            MR_fatal_error("construct.construct: type_ctor_rep mismatch");
        }

        switch (MR_type_ctor_rep(type_ctor_info)) {

        case MR_TYPECTOR_REP_ENUM:
        case MR_TYPECTOR_REP_ENUM_USEREQ:
            new_data = construct_info.functor_info.enum_functor_desc->
                MR_enum_functor_value;
            break;

        case MR_TYPECTOR_REP_FOREIGN_ENUM:
        case MR_TYPECTOR_REP_FOREIGN_ENUM_USEREQ:
            new_data = construct_info.functor_info.foreign_enum_functor_desc->
                MR_foreign_enum_functor_value;
            break;

        case MR_TYPECTOR_REP_NOTAG:
        case MR_TYPECTOR_REP_NOTAG_USEREQ:
        case MR_TYPECTOR_REP_NOTAG_GROUND:
        case MR_TYPECTOR_REP_NOTAG_GROUND_USEREQ:
            if (MR_list_is_empty(ArgList)) {
                MR_fatal_error("notag arg list is empty");
            }

            if (! MR_list_is_empty(MR_list_tail(ArgList))) {
                MR_fatal_error("notag arg list is too long");
            }

            if (!MR_notag_subtype_none(type_ctor_info,
                construct_info.functor_info.notag_functor_desc))
            {
                MR_fatal_error("not yet implemented: construction "
                    "of terms containing subtype constraints");
            }

            new_data = MR_field(MR_UNIV_TAG, MR_list_head(ArgList),
                MR_UNIV_OFFSET_FOR_DATA);
            break;

        case MR_TYPECTOR_REP_DU:
        case MR_TYPECTOR_REP_DU_USEREQ:
            {
                const MR_DuFunctorDesc  *functor_desc;
                const MR_DuArgLocn      *arg_locns;
                MR_Word                 arg_list;
                MR_Word                 ptag;
                MR_Word                 arity;
                MR_Word                 arg_data;
                MR_TypeInfo             arg_type_info;
                int                     args_size;
                int                     alloc_size;
                int                     size;
                MR_Unsigned             i;

                functor_desc = construct_info.functor_info.du_functor_desc;
                arg_locns = functor_desc->MR_du_functor_arg_locns;
                if (functor_desc->MR_du_functor_exist_info != NULL) {
                    MR_fatal_error("not yet implemented: construction "
                        "of terms containing existential types");
                }

                if (!MR_du_subtype_none(type_ctor_info, functor_desc)) {
                    MR_fatal_error("not yet implemented: construction "
                        "of terms containing subtype constraints");
                }

                arg_list = ArgList;
                ptag = functor_desc->MR_du_functor_primary;
                switch (functor_desc->MR_du_functor_sectag_locn) {

                case MR_SECTAG_LOCAL_REST_OF_WORD:
                    new_data = (MR_Word) MR_mkword(ptag,
                        MR_mkbody((MR_Word)
                            functor_desc->MR_du_functor_secondary));
                    break;

                case MR_SECTAG_LOCAL_BITS:
                    new_data = ML_copy_tagword_args(&arg_list, ptag,
                        functor_desc);
                    break;

                case MR_SECTAG_REMOTE_FULL_WORD:        // fall-through
                case MR_SECTAG_REMOTE_BITS:
                    MR_save_transient_registers();
                    ML_copy_memory_cell_args(&arg_list, &new_data, ptag,
                        functor_desc, MR_TRUE, MR_ALLOC_ID);
                    MR_restore_transient_registers();
                    break;

                case MR_SECTAG_NONE:
                    MR_save_transient_registers();
                    ML_copy_memory_cell_args(&arg_list, &new_data, ptag,
                        functor_desc, MR_FALSE, MR_ALLOC_ID);
                    MR_restore_transient_registers();
                    break;

                case MR_SECTAG_NONE_DIRECT_ARG:
                    arity = functor_desc->MR_du_functor_orig_arity;
                    if (arity != 1) {
                        MR_fatal_error(
                            "construct(): direct_arg_tag arity != 1");
                    }

                    arg_data = MR_field(MR_UNIV_TAG, MR_list_head(arg_list),
                        MR_UNIV_OFFSET_FOR_DATA);
                    new_data = (MR_Word) MR_mkword(MR_mktag(ptag), arg_data);
                    arg_list = MR_list_tail(arg_list);
                    break;

                case MR_SECTAG_VARIABLE:
                    new_data = (MR_Word) 0;     // avoid a warning
                    MR_fatal_error("construct(): cannot construct variable");

#ifdef MR_INCLUDE_SWITCH_DEFAULTS
                default:
                    new_data = (MR_Word) 0;     // avoid a warning
                    MR_fatal_error("construct(): unrecognised sectag locn");
#endif

                }

                if (! MR_list_is_empty(arg_list)) {
                    MR_fatal_error(
                        "excess arguments in construct.construct");
                }
            }
            break;

        case MR_TYPECTOR_REP_TUPLE:
            {
                int         arity;
                int         i;
                int         size;
                MR_Word     arg_list;
                MR_Word     arg_data;
                MR_TypeInfo arg_type_info;

                arity = MR_TYPEINFO_GET_VAR_ARITY_ARITY(type_info);

                if (arity == 0) {
                    new_data = (MR_Word) NULL;
                } else {
                    MR_offset_incr_hp_msg(new_data, MR_SIZE_SLOT_SIZE,
                        MR_SIZE_SLOT_SIZE + arity, MR_ALLOC_ID,
                        "<created by construct.construct/3>");

                    size = MR_cell_size(arity);
                    arg_list = ArgList;
                    for (i = 0; i < arity; i++) {
                        arg_data = MR_field(MR_UNIV_TAG,
                            MR_list_head(arg_list),
                            MR_UNIV_OFFSET_FOR_DATA);
                        arg_type_info = (MR_TypeInfo) MR_field(MR_UNIV_TAG,
                            MR_list_head(arg_list),
                            MR_UNIV_OFFSET_FOR_TYPEINFO);
                        MR_field(MR_mktag(0), new_data, i) = arg_data;
                        size += MR_term_size(arg_type_info, arg_data);
                        arg_list = MR_list_tail(arg_list);
                    }

                    MR_define_size_slot(MR_mktag(0), new_data, size);
                    if (! MR_list_is_empty(arg_list)) {
                        MR_fatal_error(
                            "excess arguments in construct.construct");
                    }
                }
            }
            break;

        case MR_TYPECTOR_REP_DUMMY:
            // The value of the dummy type will never be looked at,
            // so it doesn't matter what new_data is set to.
            new_data = (MR_Word) 0;
            break;

        case MR_TYPECTOR_REP_INT:
            // ints don't have functor ordinals.
            MR_fatal_error(
                "cannot construct int with construct.construct");
            break;

        case MR_TYPECTOR_REP_UINT:
            // uints don't have functor ordinals.
            MR_fatal_error(
                "cannot construct uint with construct.construct");
            break;

        case MR_TYPECTOR_REP_INT8:
            // int8s don't have functor ordinals.
            MR_fatal_error(
                "cannot construct int8 with construct.construct");
            break;

        case MR_TYPECTOR_REP_UINT8:
            // uint8s don't have functor ordinals.
            MR_fatal_error(
                "cannot construct uint8 with construct.construct");
            break;

        case MR_TYPECTOR_REP_INT16:
            // int16s don't have functor ordinals.
            MR_fatal_error(
                "cannot construct int16 with construct.construct");
            break;

        case MR_TYPECTOR_REP_UINT16:
            // uint16s don't have functor ordinals.
            MR_fatal_error(
                "cannot construct uint16 with construct.construct");
            break;

        case MR_TYPECTOR_REP_INT32:
            // int32s don't have functor ordinals.
            MR_fatal_error(
                "cannot construct int32 with construct.construct");
            break;

        case MR_TYPECTOR_REP_UINT32:
            // uint32s don't have functor ordinals.
            MR_fatal_error(
                "cannot construct uint32 with construct.construct");
            break;

        case MR_TYPECTOR_REP_INT64:
            // int64s don't have functor ordinals.
            MR_fatal_error(
                "cannot construct int64 with construct.construct");
            break;

        case MR_TYPECTOR_REP_UINT64:
            // uint64s don't have functor ordinals.
            MR_fatal_error(
                "cannot construct uint64 with construct.construct");
            break;

        case MR_TYPECTOR_REP_FLOAT:
            // floats don't have functor ordinals.
            MR_fatal_error(
                "cannot construct floats with construct.construct");
            break;

        case MR_TYPECTOR_REP_CHAR:
            // chars don't have functor ordinals.
            MR_fatal_error(
                "cannot construct chars with construct.construct");
            break;

        case MR_TYPECTOR_REP_STRING:
            // strings don't have functor ordinals.
            MR_fatal_error(
                "cannot construct strings with construct.construct");
            break;

        case MR_TYPECTOR_REP_BITMAP:
            // bitmaps don't have functor ordinals.
            MR_fatal_error(
                "cannot construct bitmaps with construct.construct");
            break;

        case MR_TYPECTOR_REP_EQUIV:
        case MR_TYPECTOR_REP_EQUIV_GROUND:
            // These should be eliminated by MR_collapse_equivalences above.
            MR_fatal_error("equiv type in construct.construct");
            break;

        case MR_TYPECTOR_REP_VOID:
            MR_fatal_error(
                "cannot construct void values with construct.construct");
            break;

        case MR_TYPECTOR_REP_FUNC:
            MR_fatal_error(
                "cannot construct functions with construct.construct");
            break;

        case MR_TYPECTOR_REP_PRED:
            MR_fatal_error(
                "cannot construct predicates with construct.construct");
            break;

        case MR_TYPECTOR_REP_SUBGOAL:
            MR_fatal_error(
                "cannot construct subgoals with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPEDESC:
            MR_fatal_error(
                "cannot construct type_descs with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPECTORDESC:
            MR_fatal_error(
                "cannot construct type_descs with construct.construct");
            break;

        case MR_TYPECTOR_REP_PSEUDOTYPEDESC:
            MR_fatal_error(
                "cannot construct pseudotype_descs with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPEINFO:
            MR_fatal_error(
                "cannot construct type_infos with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPECTORINFO:
            MR_fatal_error(
                "cannot construct type_ctor_infos with construct.construct");
            break;

        case MR_TYPECTOR_REP_TYPECLASSINFO:
            MR_fatal_error(
                "cannot construct type_class_infos with construct.construct");
            break;

        case MR_TYPECTOR_REP_BASETYPECLASSINFO:
            MR_fatal_error(
                "cannot construct base_type_class_infos "
                "with construct.construct");
            break;

        case MR_TYPECTOR_REP_SUCCIP:
            MR_fatal_error(
                "cannot construct succips with construct.construct");
            break;

        case MR_TYPECTOR_REP_HP:
            MR_fatal_error(
                "cannot construct hps with construct.construct");
            break;

        case MR_TYPECTOR_REP_CURFR:
            MR_fatal_error(
                "cannot construct curfrs with construct.construct");
            break;

        case MR_TYPECTOR_REP_MAXFR:
            MR_fatal_error(
                "cannot construct maxfrs with construct.construct");
            break;

        case MR_TYPECTOR_REP_REDOFR:
            MR_fatal_error(
                "cannot construct redofrs with construct.construct");
            break;

        case MR_TYPECTOR_REP_REDOIP:
            MR_fatal_error(
                "cannot construct redoips with construct.construct");
            break;

        case MR_TYPECTOR_REP_TRAIL_PTR:
            MR_fatal_error(
                "cannot construct trail_ptrs with construct.construct");
            break;

        case MR_TYPECTOR_REP_TICKET:
            MR_fatal_error(
                "cannot construct tickets with construct.construct");
            break;

        case MR_TYPECTOR_REP_C_POINTER:
        case MR_TYPECTOR_REP_STABLE_C_POINTER:
            MR_fatal_error(
                "cannot construct c_pointers with construct.construct");
            break;

        case MR_TYPECTOR_REP_ARRAY:
            MR_fatal_error(
                "cannot construct arrays with construct.construct");
            break;

        case MR_TYPECTOR_REP_REFERENCE:
            MR_fatal_error(
                "cannot construct references with construct.construct");
            break;

        case MR_TYPECTOR_REP_FOREIGN:
        case MR_TYPECTOR_REP_STABLE_FOREIGN:
            MR_fatal_error(
                "cannot construct values of foreign types "
                "with construct.construct");
            break;

        case MR_TYPECTOR_REP_UNUSED1:
        case MR_TYPECTOR_REP_UNUSED2:
        case MR_TYPECTOR_REP_UNKNOWN:
            MR_fatal_error(
                "cannot construct values of unknown types "
                "with construct.construct");
            break;

#ifdef MR_INCLUDE_SWITCH_DEFAULTS

        default:
            new_data = (MR_Word) 0;     // avoid a warning
            MR_fatal_error("bad type_ctor_rep in construct.construct");

#endif
        }   // end of main switch

        // Create a univ.
        MR_new_univ_on_hp(Term, type_info, new_data);
    }

    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Term_4  = Term;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__construct__find_functor_5_p_0(
  MR_Word Type_6,
  MR_String Functor_7,
  MR_Integer Arity_8,
  MR_Integer * FunctorNumber_9,
  MR_Word * ArgTypes_10)
{
  MR_bool succeeded;
  MR_Integer N_11;

{
#define MR_PROC_LABEL mercury__construct__find_functor_5_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo = Type_6 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	N_11  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    succeeded = mercury__construct__find_functor_2_6_p_0(Type_6, Functor_7, Arity_8, N_11, FunctorNumber_9, ArgTypes_10);
  return succeeded;
}

MR_bool MR_CALL 
mercury__construct__find_functor_2_6_p_0(
  MR_Word TypeInfo_7,
  MR_String Functor_8,
  MR_Integer Arity_9,
  MR_Integer Num0_10,
  MR_Integer * FunctorNumber_11,
  MR_Word * ArgTypes_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Num0_10 >= (MR_Integer) 0);
    MR_Integer Num_13;
    MR_Integer Var_16;
    MR_Word ArgPseudoTypes_14;
    MR_String Var_22;
    MR_Integer Var_23;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_16 = (MR_Integer) 1;
      Num_13 = (MR_Integer) ((MR_Unsigned) Num0_10 - (MR_Unsigned) Var_16);
      succeeded = mercury__construct__get_functor_internal_5_p_0(TypeInfo_7, Num_13, &Var_22, &Var_23, &ArgPseudoTypes_14);
      if (succeeded)
      {
        succeeded = (strcmp(Functor_8, Var_22) == 0);
        if (succeeded)
          succeeded = (Arity_9 == Var_23);
      }
      if (succeeded)
      {
        *ArgTypes_12 = mercury__construct__map__ho1_2_f_in__list_0(ArgPseudoTypes_14);
        *FunctorNumber_11 = Num_13;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer next_value_of_Num0_10 = Num_13;

        // direct tailcall eliminated
        ;
        Num0_10 = next_value_of_Num0_10;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_Word MR_CALL 
mercury__construct__map__ho1_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_12;

    Var_8 = mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0(Var_6);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
    mercury__construct__LCMC__func__map__ho1__1_3_p_0(Var_7, AddrSCCcallarg_9_12);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__construct__LCMC__func__map__ho1__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_12;
      MR_Word HeadVar__3_14;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_13;

      Var_8 = mercury__type_desc__det_ground_pseudo_type_desc_to_type_desc_1_f_0(Var_6);
      {
        HeadVar__3_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_14, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_14, 1) = NULL;
      }
      AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_14, 1)));
      *AddrOfHeadVar__3_13 = HeadVar__3_14;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_13 = AddrSCCcallarg_9_12;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_13 = next_value_of_AddrOfHeadVar__3_13;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__construct__get_functor_lex_3_p_0(
  MR_Word TypeDesc_1,
  MR_Integer Ordinal_2,
  MR_Integer * FunctorNumber_3)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__construct__get_functor_lex_3_p_0

	MR_Word TypeDesc;
	MR_Integer Ordinal;
	MR_Integer FunctorNumber;
	MR_bool SUCCESS_INDICATOR;

	TypeDesc = TypeDesc_1 ;
	Ordinal = Ordinal_2 ;
		{
{
    MR_TypeInfo         type_info;
    MR_TypeCtorInfo     type_ctor_info;
    MR_Construct_Info   construct_info;
    int                 num_functors;

    type_info = (MR_TypeInfo) TypeDesc;

    // Get information for this functor number and store in construct_info.
    // If this is a discriminated union type and if the functor number is
    // in range, we succeed.
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    num_functors = MR_get_num_functors(type_info);
    MR_restore_transient_registers();
    type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);
    if (Ordinal < 0 || Ordinal >= num_functors
            || !type_ctor_info->MR_type_ctor_functor_number_map)
    {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        FunctorNumber =
            type_ctor_info->MR_type_ctor_functor_number_map[Ordinal];
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*FunctorNumber_3  = FunctorNumber;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__construct__get_functor_lex_2_f_0(
  MR_Word TypeDesc_4,
  MR_Integer Ordinal_5,
  MR_Integer * FunctorNumber_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__construct__get_functor_lex_2_f_0

	MR_Word TypeDesc;
	MR_Integer Ordinal;
	MR_Integer FunctorNumber;
	MR_bool SUCCESS_INDICATOR;

	TypeDesc = TypeDesc_4 ;
	Ordinal = Ordinal_5 ;
		{
{
    MR_TypeInfo         type_info;
    MR_TypeCtorInfo     type_ctor_info;
    MR_Construct_Info   construct_info;
    int                 num_functors;

    type_info = (MR_TypeInfo) TypeDesc;

    // Get information for this functor number and store in construct_info.
    // If this is a discriminated union type and if the functor number is
    // in range, we succeed.
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    num_functors = MR_get_num_functors(type_info);
    MR_restore_transient_registers();
    type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);
    if (Ordinal < 0 || Ordinal >= num_functors
            || !type_ctor_info->MR_type_ctor_functor_number_map)
    {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        FunctorNumber =
            type_ctor_info->MR_type_ctor_functor_number_map[Ordinal];
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*FunctorNumber_6  = FunctorNumber;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__construct__get_functor_ordinal_3_p_0(
  MR_Word TypeDesc_1,
  MR_Integer FunctorNumber_2,
  MR_Integer * Ordinal_3)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__construct__get_functor_ordinal_3_p_0

	MR_Word TypeDesc;
	MR_Integer FunctorNumber;
	MR_Integer Ordinal;
	MR_bool SUCCESS_INDICATOR;

	TypeDesc = TypeDesc_1 ;
	FunctorNumber = FunctorNumber_2 ;
		{
{
    MR_TypeInfo         type_info;
    MR_Construct_Info   construct_info;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

    // Get information for this functor number and store in construct_info.
    // If this is a discriminated union type and if the functor number is
    // in range, we succeed.
    MR_save_transient_registers();
    success = MR_get_functors_check_range(FunctorNumber, type_info, MR_TRUE,
        &construct_info);
    MR_restore_transient_registers();

    if (success) {
        Ordinal = construct_info.functor_ordinal;
    } else {
        Ordinal = 0;
    }
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Ordinal_3  = Ordinal;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__construct__get_functor_ordinal_2_f_0(
  MR_Word TypeDesc_4,
  MR_Integer FunctorNumber_5,
  MR_Integer * Ordinal_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__construct__get_functor_ordinal_2_f_0

	MR_Word TypeDesc;
	MR_Integer FunctorNumber;
	MR_Integer Ordinal;
	MR_bool SUCCESS_INDICATOR;

	TypeDesc = TypeDesc_4 ;
	FunctorNumber = FunctorNumber_5 ;
		{
{
    MR_TypeInfo         type_info;
    MR_Construct_Info   construct_info;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

    // Get information for this functor number and store in construct_info.
    // If this is a discriminated union type and if the functor number is
    // in range, we succeed.
    MR_save_transient_registers();
    success = MR_get_functors_check_range(FunctorNumber, type_info, MR_TRUE,
        &construct_info);
    MR_restore_transient_registers();

    if (success) {
        Ordinal = construct_info.functor_ordinal;
    } else {
        Ordinal = 0;
    }
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Ordinal_6  = Ordinal;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__construct__get_functor_with_names_6_p_0(
  MR_Word TypeDesc_7,
  MR_Integer I_8,
  MR_String * Functor_9,
  MR_Integer * Arity_10,
  MR_Word * PseudoTypeInfoList_11,
  MR_Word * ArgNameList_12)
{
  MR_bool succeeded;
  MR_Word ArgNameList0_13;

  succeeded = mercury__construct__get_functor_with_names_internal_6_p_0(TypeDesc_7, I_8, Functor_9, Arity_10, PseudoTypeInfoList_11, &ArgNameList0_13);
  if (succeeded)
  {
    *ArgNameList_12 = mercury__construct__map__ho3_2_f_in__list_0(ArgNameList0_13);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Word MR_CALL 
mercury__construct__map__ho3_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_12;

{
#define MR_PROC_LABEL mercury__construct__map__ho3_2_f_in__list_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = Var_6 ;
		{

    SUCCESS_INDICATOR = (S == NULL);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
      }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
    mercury__construct__LCMC__func__map__ho3__1_3_p_0(Var_7, AddrSCCcallarg_9_12);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__construct__LCMC__func__map__ho3__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_12;
      MR_Word HeadVar__3_14;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_13;

{
#define MR_PROC_LABEL mercury__construct__LCMC__func__map__ho3__1_3_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = Var_6 ;
		{

    SUCCESS_INDICATOR = (S == NULL);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_6));
        }
      {
        HeadVar__3_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_14, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_14, 1) = NULL;
      }
      AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_14, 1)));
      *AddrOfHeadVar__3_13 = HeadVar__3_14;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_13 = AddrSCCcallarg_9_12;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_13 = next_value_of_AddrOfHeadVar__3_13;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__construct__get_functor_with_names_internal_6_p_0(
  MR_Word TypeDesc_1,
  MR_Integer FunctorNumber_2,
  MR_String * FunctorName_3,
  MR_Integer * Arity_4,
  MR_Word * PseudoTypeInfoList_5,
  MR_Word * ArgNameList_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__construct__get_functor_with_names_internal_6_p_0

	MR_Word TypeDesc;
	MR_Integer FunctorNumber;
	MR_String FunctorName;
	MR_Integer Arity;
	MR_Word PseudoTypeInfoList;
	MR_Word ArgNameList;
	MR_bool SUCCESS_INDICATOR;

	TypeDesc = TypeDesc_1 ;
	FunctorNumber = FunctorNumber_2 ;
		{
{
    MR_TypeInfo         type_info;
    MR_Construct_Info   construct_info;
    int                 arity;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

    // If type_info is an equivalence type, expand it.
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    MR_restore_transient_registers();

    // Get information for this functor number and store in construct_info.
    // If this is a discriminated union type and if the functor number
    // is in range, we succeed.
    MR_save_transient_registers();
    success = MR_get_functors_check_range(FunctorNumber, type_info, MR_FALSE,
        &construct_info);
    MR_restore_transient_registers();

    // Get the functor name and arity, construct the list of type_infos
    // for arguments.

    if (success) {
        MR_make_aligned_string(FunctorName, construct_info.functor_name);
        arity = construct_info.arity;
        Arity = arity;

        if (MR_TYPE_CTOR_INFO_IS_TUPLE(
            MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info)))
        {
            int i;

            MR_save_transient_registers();
            PseudoTypeInfoList = MR_type_params_vector_to_list(Arity,
                MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info));
            ArgNameList = MR_list_empty();
            for (i = 0; i < Arity; i++) {
                ArgNameList = MR_string_list_cons_msg((MR_Word) NULL,
                    ArgNameList, MR_ALLOC_ID);
            }
            MR_restore_transient_registers();
        } else {
            MR_save_transient_registers();
            PseudoTypeInfoList =
                MR_pseudo_type_info_vector_to_pseudo_type_info_list(arity,
                    MR_TYPEINFO_GET_FIXED_ARITY_ARG_VECTOR(type_info),
                    construct_info.arg_pseudo_type_infos);
            ArgNameList = MR_arg_name_vector_to_list(arity,
                construct_info.arg_names);
            MR_restore_transient_registers();
        }
    }
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*FunctorName_3  = FunctorName;
	*Arity_4  = Arity;
	*PseudoTypeInfoList_5  = PseudoTypeInfoList;
	*ArgNameList_6  = ArgNameList;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__construct__get_functor_5_p_0(
  MR_Word TypeDesc_6,
  MR_Integer FunctorNumber_7,
  MR_String * FunctorName_8,
  MR_Integer * Arity_9,
  MR_Word * PseudoTypeInfoList_10)
{
  MR_bool succeeded;

  succeeded = mercury__construct__get_functor_internal_5_p_0(TypeDesc_6, FunctorNumber_7, FunctorName_8, Arity_9, PseudoTypeInfoList_10);
  return succeeded;
}

MR_bool MR_CALL 
mercury__construct__get_functor_internal_5_p_0(
  MR_Word TypeDesc_1,
  MR_Integer FunctorNumber_2,
  MR_String * FunctorName_3,
  MR_Integer * Arity_4,
  MR_Word * PseudoTypeInfoList_5)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__construct__get_functor_internal_5_p_0

	MR_Word TypeDesc;
	MR_Integer FunctorNumber;
	MR_String FunctorName;
	MR_Integer Arity;
	MR_Word PseudoTypeInfoList;
	MR_bool SUCCESS_INDICATOR;

	TypeDesc = TypeDesc_1 ;
	FunctorNumber = FunctorNumber_2 ;
		{
{
    MR_TypeInfo         type_info;
    MR_Construct_Info   construct_info;
    int                 arity;
    MR_bool             success;

    type_info = (MR_TypeInfo) TypeDesc;

    // If type_info is an equivalence type, expand it.
    MR_save_transient_registers();
    type_info = MR_collapse_equivalences(type_info);
    MR_restore_transient_registers();

    // Get information for this functor number and store in construct_info.
    // If this is a discriminated union type and if the functor number
    // is in range, we succeed.
    MR_save_transient_registers();
    success = MR_get_functors_check_range(FunctorNumber, type_info, MR_FALSE,
        &construct_info);
    MR_restore_transient_registers();

    // Get the functor name and arity, construct the list  of type_infos
    // for arguments.
    if (success) {
        MR_make_aligned_string(FunctorName, construct_info.functor_name);
        arity = construct_info.arity;
        Arity = arity;

        if (MR_TYPE_CTOR_INFO_IS_TUPLE(
            MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info)))
        {
            MR_save_transient_registers();
            PseudoTypeInfoList = MR_type_params_vector_to_list(Arity,
                MR_TYPEINFO_GET_VAR_ARITY_ARG_VECTOR(type_info));
            MR_restore_transient_registers();
        } else {
            MR_save_transient_registers();
            PseudoTypeInfoList =
                MR_pseudo_type_info_vector_to_pseudo_type_info_list(arity,
                    MR_TYPEINFO_GET_FIXED_ARITY_ARG_VECTOR(type_info),
                    construct_info.arg_pseudo_type_infos);
            MR_restore_transient_registers();
        }
    }
    SUCCESS_INDICATOR = success;
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*FunctorName_3  = FunctorName;
	*Arity_4  = Arity;
	*PseudoTypeInfoList_5  = PseudoTypeInfoList;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_Integer MR_CALL 
mercury__construct__det_num_functors_1_f_0(
  MR_Word TypeInfo_3)
{
  MR_bool succeeded;
  MR_Integer HeadVar__2_2;
  MR_Integer N_4;

{
#define MR_PROC_LABEL mercury__construct__det_num_functors_1_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo = TypeInfo_3 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	N_4  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    HeadVar__2_2 = N_4;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140construct.det_num_functors\'/1", (MR_String) "type does not have functors");
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__construct__num_functors_2_p_0(
  MR_Word TypeInfo_1,
  MR_Integer * Functors_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__construct__num_functors_2_p_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo = TypeInfo_1 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Functors_2  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__construct__num_functors_1_f_0(
  MR_Word TypeDesc_3,
  MR_Integer * NumFunctors_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__construct__num_functors_1_f_0

	MR_Word TypeInfo;
	MR_Integer Functors;
	MR_bool SUCCESS_INDICATOR;

	TypeInfo = TypeDesc_3 ;
		{
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*NumFunctors_4  = Functors;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

static MR_bool MR_CALL 
mercury__construct____Unify____functor_number_lex_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__construct____Unify____functor_number_lex_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__construct____Compare____functor_number_lex_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__construct____Compare____functor_number_lex_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__construct____Unify____functor_number_ordinal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__construct____Unify____functor_number_ordinal_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__construct____Compare____functor_number_ordinal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__construct____Compare____functor_number_ordinal_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__construct__init(void)
{
}

void mercury__construct__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__construct__construct__type_ctor_info_functor_number_lex_0);
  MR_register_type_ctor_info(&mercury__construct__construct__type_ctor_info_functor_number_ordinal_0);
}

void mercury__construct__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__construct__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module construct.
