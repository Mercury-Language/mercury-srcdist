/*
** Automatically generated from `enum.m'
** by the Mercury compiler,
** version 22.01.4-beta-2022-11-10
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


// :- module enum.
// :- implementation.

/*
INIT mercury__enum__init
ENDINIT
*/

#include "enum.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "exception.mih"
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
#include "math.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prolog.mih"
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
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_ConstString mercury__enum__enum__type_class_id_var_names_enum_1[1];

static const MR_TypeClassMethod mercury__enum__enum__type_class_id_method_ids_enum_1[2];

static const MR_TypeClassId mercury__enum__enum__type_class_id_enum_1;


static /* final */ const MR_Box mercury__enum_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__enum_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__enum_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__enum_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__enum_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__enum_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__enum_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__enum_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__enum_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
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
#include "math.mh"
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



static const MR_ConstString mercury__enum__enum__type_class_id_var_names_enum_1[1] = {
  (MR_String) "T"
};

static const MR_TypeClassMethod mercury__enum__enum__type_class_id_method_ids_enum_1[2] = {
  {
    (MR_String) "to_int",
    (MR_Integer) 2,
    MR_FUNCTION
  },
  {
    (MR_String) "from_int",
    (MR_Integer) 2,
    MR_FUNCTION
  }
};

static const MR_TypeClassId mercury__enum__enum__type_class_id_enum_1 = {
  (MR_String) "enum",
  (MR_String) "enum",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 2,
  mercury__enum__enum__type_class_id_var_names_enum_1,
  mercury__enum__enum__type_class_id_method_ids_enum_1
};

const MR_TypeClassDeclStruct mercury__enum__enum__type_class_decl_enum_1 = {
  &mercury__enum__enum__type_class_id_enum_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

MR_bool MR_CALL 
mercury__enum__from_int_1_f_0(
  MR_Word TypeClassInfo_for_enum_3,
  MR_Integer HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_3, (MR_Integer) 0)), (MR_Integer) 6))));

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_enum_3)), ((MR_Box) (HeadVar__1_1)), HeadVar__2_2);
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__enum__to_int_1_f_0(
  MR_Word TypeClassInfo_for_enum_3,
  MR_Box HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_3, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_enum_3)), HeadVar__1_1);
    HeadVar__2_2 = ((MR_Integer) (conv1_HeadVar__2_2));
    return HeadVar__2_2;
  }
}

MR_Box MR_CALL 
mercury__enum__det_from_int_1_f_0(
  MR_Word TypeClassInfo_for_enum_8,
  MR_Integer I_3)
{
  {
    MR_bool succeeded;
    MR_Box X_4;
    MR_Box X0_5;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_enum_8, (MR_Integer) 0)), (MR_Integer) 6))));

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_enum_8)), ((MR_Box) (I_3)), &X0_5);
    if (succeeded)
      X_4 = X0_5;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140enum.det_from_int\'/1", (MR_String) "from_int failed");
    return X_4;
  }
}

void mercury__enum__init(void)
{
}

void mercury__enum__init_type_tables(void)
{
}

void mercury__enum__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__enum__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module enum.
