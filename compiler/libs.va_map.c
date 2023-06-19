/*
** Automatically generated from `va_map.m'
** by the Mercury compiler,
** version rotd-2023-06-19
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


// :- module libs.va_map.
// :- implementation.

/*
INIT mercury__libs__va_map__init
ENDINIT
*/

#include "libs.va_map.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "builtin.mih"
#include "enum.mih"
#include "int.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "univ.mih"
#include "version_array.mih"




static const MR_Integer libs__va_map__libs__va_map__functor_number_map_va_map_2[1];

static const MR_FA_PseudoTypeInfo_Struct1 libs__va_map__version_array__pti_version_array_1__pseudo_2;

static const MR_NotagFunctorDesc libs__va_map__libs__va_map__notag_functor_desc_va_map_2;

static const MR_ConstString libs__va_map__libs__va_map__type_class_id_var_names_va_map_value_1[1];

static const MR_TypeClassMethod libs__va_map__libs__va_map__type_class_id_method_ids_va_map_value_1[1];

static const MR_TypeClassId libs__va_map__libs__va_map__type_class_id_va_map_value_1;

static const MR_ConstString libs__va_map__libs__va_map__type_class_id_var_names_va_map_key_1[1];

static const MR_TypeClassMethod libs__va_map__libs__va_map__type_class_id_method_ids_va_map_key_1[2];

static const MR_TypeClassId libs__va_map__libs__va_map__type_class_id_va_map_key_1;

static void MR_CALL 
libs__va_map__slot_to_key_2_p_0(
  MR_Word TypeClassInfo_for_va_map_key_6,
  MR_Integer Slot_3,
  MR_Box * K_4);

static MR_bool MR_CALL 
libs__va_map____Unify____va_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
libs__va_map____Compare____va_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);







#include "array.mh"
#include "version_array.mh"


static const MR_Integer libs__va_map__libs__va_map__functor_number_map_va_map_2[1] = { (MR_Integer) 0 };

static const MR_FA_PseudoTypeInfo_Struct1 libs__va_map__version_array__pti_version_array_1__pseudo_2 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_NotagFunctorDesc libs__va_map__libs__va_map__notag_functor_desc_va_map_2 = {
  (MR_String) "va_map",
  (MR_PseudoTypeInfo) (&libs__va_map__version_array__pti_version_array_1__pseudo_2),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct libs__va_map__libs__va_map__type_ctor_info_va_map_2 = {
  (MR_Integer) 2,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (libs__va_map____Unify____va_map_2_0_10001)),
  ((MR_Box) (libs__va_map____Compare____va_map_2_0_10001)),
  (MR_String) "libs.va_map",
  (MR_String) "va_map",
  { &libs__va_map__libs__va_map__notag_functor_desc_va_map_2 },
  { &libs__va_map__libs__va_map__notag_functor_desc_va_map_2 },
  (MR_Integer) 1,
  UINT16_C(4),
  libs__va_map__libs__va_map__functor_number_map_va_map_2,

};

static const MR_ConstString libs__va_map__libs__va_map__type_class_id_var_names_va_map_value_1[1] = { (MR_String) "V" };

static const MR_TypeClassMethod libs__va_map__libs__va_map__type_class_id_method_ids_va_map_value_1[1] = {
  {
    (MR_String) "default_value",
    (MR_Integer) 1,
    MR_FUNCTION
  }
};

static const MR_TypeClassId libs__va_map__libs__va_map__type_class_id_va_map_value_1 = {
  (MR_String) "libs.va_map",
  (MR_String) "va_map_value",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  libs__va_map__libs__va_map__type_class_id_var_names_va_map_value_1,
  libs__va_map__libs__va_map__type_class_id_method_ids_va_map_value_1
};

const MR_TypeClassDeclStruct libs__va_map__libs__va_map__type_class_decl_va_map_value_1 = {
  &libs__va_map__libs__va_map__type_class_id_va_map_value_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static const MR_ConstString libs__va_map__libs__va_map__type_class_id_var_names_va_map_key_1[1] = { (MR_String) "K" };

static const MR_TypeClassMethod libs__va_map__libs__va_map__type_class_id_method_ids_va_map_key_1[2] = {
  {
    (MR_String) "from_key",
    (MR_Integer) 2,
    MR_FUNCTION
  },
  {
    (MR_String) "to_key",
    (MR_Integer) 2,
    MR_FUNCTION
  }
};

static const MR_TypeClassId libs__va_map__libs__va_map__type_class_id_va_map_key_1 = {
  (MR_String) "libs.va_map",
  (MR_String) "va_map_key",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 2,
  libs__va_map__libs__va_map__type_class_id_var_names_va_map_key_1,
  libs__va_map__libs__va_map__type_class_id_method_ids_va_map_key_1
};

const MR_TypeClassDeclStruct libs__va_map__libs__va_map__type_class_decl_va_map_key_1 = {
  &libs__va_map__libs__va_map__type_class_id_va_map_key_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

void MR_CALL 
libs__va_map____Compare____va_map_2_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
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
  {
    MR_Box ArgX1_4 = (MR_Box) (HeadVar__2_2);
    MR_Box ArgY1_5 = (MR_Box) (HeadVar__3_3);

    mercury__version_array____Compare____version_array_1_0(TypeInfo_for_V_9, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
libs__va_map____Unify____va_map_2_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Box ArgX1_3 = (MR_Box) (HeadVar__1_1);
    MR_Box ArgY1_4 = (MR_Box) (HeadVar__2_2);

    succeeded = mercury__version_array____Unify____version_array_1_0(TypeInfo_for_V_8, ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

MR_Box MR_CALL 
libs__va_map__default_value_0_f_0(
  MR_Word TypeClassInfo_for_va_map_value_2)
{
  MR_Box HeadVar__1_1;
  MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_va_map_value_2, (MR_Integer) 0)), (MR_Integer) 5))));

  HeadVar__1_1 = func_0(((MR_Box) (TypeClassInfo_for_va_map_value_2)));
  return HeadVar__1_1;
}

MR_Box MR_CALL 
libs__va_map__to_key_1_f_0(
  MR_Word TypeClassInfo_for_va_map_key_3,
  MR_Unsigned HeadVar__1_1)
{
  MR_Box HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_va_map_key_3, (MR_Integer) 0)), (MR_Integer) 6))));

  HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_va_map_key_3)), ((MR_Box) (HeadVar__1_1)));
  return HeadVar__2_2;
}

MR_Unsigned MR_CALL 
libs__va_map__from_key_1_f_0(
  MR_Word TypeClassInfo_for_va_map_key_3,
  MR_Box HeadVar__1_1)
{
  MR_Unsigned HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_va_map_key_3, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_va_map_key_3)), HeadVar__1_1);
  HeadVar__2_2 = ((MR_Unsigned) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

static void MR_CALL 
libs__va_map__slot_to_key_2_p_0(
  MR_Word TypeClassInfo_for_va_map_key_6,
  MR_Integer Slot_3,
  MR_Box * K_4)
{
  MR_Unsigned U_5;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);

  U_5 = mercury__uint__cast_from_int_1_f_0(Slot_3);
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_va_map_key_6, (MR_Integer) 0)), (MR_Integer) 6))));
  *K_4 = func_0(((MR_Box) (TypeClassInfo_for_va_map_key_6)), ((MR_Box) (U_5)));
}

void MR_CALL 
libs__va_map__set_4_p_0(
  MR_Word TypeClassInfo_for_va_map_key_13,
  MR_Word TypeClassInfo_for_va_map_value_14,
  MR_Box Key_5,
  MR_Box Value_6,
  MR_Word VAMap0_7,
  MR_Word * VAMap_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_16_16;
  MR_Word TypeInfo_15_24;
  MR_Box Array0_9 = (MR_Box) (VAMap0_7);
  MR_Integer Slot_10;
  MR_Box Array1_11;
  MR_Box Array_12;
  MR_Unsigned Var_17;
  MR_Integer Size_18;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_va_map_key_13, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_Var_17;

  conv1_Var_17 = func_0(((MR_Box) (TypeClassInfo_for_va_map_key_13)), Key_5);
  Var_17 = ((MR_Unsigned) (conv1_Var_17));
  Slot_10 = mercury__uint__cast_to_int_1_f_0(Var_17);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_va_map_value_14, (MR_Integer) 1, &TypeInfo_15_24);
  Size_18 = mercury__version_array__size_1_f_0(TypeInfo_15_24, Array0_9);
  succeeded = (Slot_10 >= Size_18);
  if (succeeded)
  {
    MR_Word TypeInfo_16_25;
    MR_Integer NewSize_19;
    MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) Slot_10 + (MR_Unsigned) 1);
    MR_Box Var_22;
    MR_Integer Var_26;
    MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) Var_20 + (MR_Unsigned) 511);
    MR_Box MR_CALL (* func_2)(MR_Box);

    Var_26 = mercury__int__f_47_47_2_f_0(Var_27, (MR_Integer) 512);
    NewSize_19 = (MR_Integer) ((MR_Unsigned) Var_26 * (MR_Unsigned) 512);
    func_2 = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_va_map_value_14, (MR_Integer) 0)), (MR_Integer) 5))));
    Var_22 = func_2(((MR_Box) (TypeClassInfo_for_va_map_value_14)));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_va_map_value_14, (MR_Integer) 1, &TypeInfo_16_25);
    mercury__version_array__resize_4_p_0(TypeInfo_16_25, NewSize_19, Var_22, Array0_9, &Array1_11);
  }
  else
    Array1_11 = Array0_9;
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_va_map_value_14, (MR_Integer) 1, &TypeInfo_16_16);
  mercury__version_array__set_4_p_0(TypeInfo_16_16, Slot_10, Value_6, Array1_11, &Array_12);
  *VAMap_8 = (MR_Word) (Array_12);
}

void MR_CALL 
libs__va_map__lookup_3_p_0(
  MR_Word TypeClassInfo_for_va_map_key_10,
  MR_Word TypeClassInfo_for_va_map_value_11,
  MR_Word VAMap_4,
  MR_Box Key_5,
  MR_Box * Value_6)
{
  MR_bool succeeded;
  MR_Box Array_7 = (MR_Box) (VAMap_4);
  MR_Integer Slot_8;
  MR_Unsigned Var_16;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_va_map_key_10, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv1_Var_16;
  MR_Word TypeInfo_13_13;
  MR_Integer Var_9;

  conv1_Var_16 = func_0(((MR_Box) (TypeClassInfo_for_va_map_key_10)), Key_5);
  Var_16 = ((MR_Unsigned) (conv1_Var_16));
  Slot_8 = mercury__uint__cast_to_int_1_f_0(Var_16);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_va_map_value_11, (MR_Integer) 1, &TypeInfo_13_13);
  Var_9 = mercury__version_array__size_1_f_0(TypeInfo_13_13, Array_7);
  succeeded = (Slot_8 < Var_9);
  if (succeeded)
  {
    MR_Word TypeInfo_15_15;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_va_map_value_11, (MR_Integer) 1, &TypeInfo_15_15);
    *Value_6 = mercury__version_array__lookup_2_f_0(TypeInfo_15_15, Array_7, Slot_8);
  }
  else
  {
    MR_Box MR_CALL (* func_2)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_va_map_value_11, (MR_Integer) 0)), (MR_Integer) 5))));

    *Value_6 = func_2(((MR_Box) (TypeClassInfo_for_va_map_value_11)));
  }
}

MR_Word MR_CALL 
libs__va_map__init_0_f_0(
  MR_Word TypeInfo_for_K_3,
  MR_Word TypeInfo_for_V_4)
{
  MR_Word HeadVar__1_1;
  MR_Box Array_2;

  Array_2 = mercury__version_array__unsafe_empty_0_f_0(TypeInfo_for_V_4);
  HeadVar__1_1 = (MR_Word) (Array_2);
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
libs__va_map____Unify____va_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = libs__va_map____Unify____va_map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
libs__va_map____Compare____va_map_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  libs__va_map____Compare____va_map_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__va_map__init(void)
{
}

void mercury__libs__va_map__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__va_map__libs__va_map__type_ctor_info_va_map_2);
}

void mercury__libs__va_map__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__va_map__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.va_map.
