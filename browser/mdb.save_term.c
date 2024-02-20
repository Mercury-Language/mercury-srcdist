/*
** Automatically generated from `save_term.m'
** by the Mercury compiler,
** version rotd-2024-02-20
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


// :- module mdb.save_term.
// :- implementation.

/*
INIT mercury__mdb__save_term__init
ENDINIT
*/

#include "mdb.save_term.mih"
#include "mdb.save_term.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_to_xml.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "io.stream_db.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.parse.mih"
#include "mdb.term_rep.mih"
#include "mdb.term_to_html.mih"
#include "mdbcomp.program_representation.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 mdb__save_term__list__ti_list_1univ__type_ctor_info_univ_0;

static const MR_PseudoTypeInfo mdb__save_term__mdb__save_term__field_types_xml_function_wrapper_0_0[3];

static const MR_ConstString mdb__save_term__mdb__save_term__field_names_xml_function_wrapper_0_0[3];

static const MR_DuFunctorDesc mdb__save_term__mdb__save_term__du_functor_desc_xml_function_wrapper_0_0;

static const MR_DuFunctorDescPtr mdb__save_term__mdb__save_term__du_stag_ordered_xml_function_wrapper_0_0[1];

static const MR_DuPtagLayout mdb__save_term__mdb__save_term__du_ptag_ordered_xml_function_wrapper_0[1];

static const MR_DuFunctorDescPtr mdb__save_term__mdb__save_term__du_name_ordered_xml_function_wrapper_0[1];

static const MR_Integer mdb__save_term__mdb__save_term__functor_number_map_xml_function_wrapper_0[1];

static const MR_PseudoTypeInfo mdb__save_term__mdb__save_term__field_types_xml_predicate_wrapper_0_0[2];

static const MR_ConstString mdb__save_term__mdb__save_term__field_names_xml_predicate_wrapper_0_0[2];

static const MR_DuFunctorDesc mdb__save_term__mdb__save_term__du_functor_desc_xml_predicate_wrapper_0_0;

static const MR_DuFunctorDescPtr mdb__save_term__mdb__save_term__du_stag_ordered_xml_predicate_wrapper_0_0[1];

static const MR_DuPtagLayout mdb__save_term__mdb__save_term__du_ptag_ordered_xml_predicate_wrapper_0[1];

static const MR_DuFunctorDescPtr mdb__save_term__mdb__save_term__du_name_ordered_xml_predicate_wrapper_0[1];

static const MR_Integer mdb__save_term__mdb__save_term__functor_number_map_xml_predicate_wrapper_0[1];

static void MR_CALL 
mdb__save_term____Compare____xml_predicate_wrapper_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__save_term____Unify____xml_predicate_wrapper_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__save_term____Compare____xml_function_wrapper_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__save_term____Unify____xml_function_wrapper_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__save_term__launch_web_browser_5_p_0(
  MR_Word OutputStream_6,
  MR_Word ErrorStream_7,
  MR_String CommandStr_8);

static MR_Box MR_CALL 
mdb__save_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mdb__save_term__save_univ_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__save_term__save_univ_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Indent_7,
  MR_Word Univ_8);

static MR_Box MR_CALL 
mdb__save_term__save_arg_univs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__save_term__save_arg_univs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mdb__save_term__write_indent_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer Indent_6);

static MR_bool MR_CALL 
mdb__save_term__dynamic_cast_to_list_2_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * TypeInfo_for_T_13,
  MR_Box X_3,
  MR_Word * L_4);

static MR_bool MR_CALL 
mdb__save_term____Unify____xml_function_wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__save_term____Compare____xml_function_wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__save_term____Unify____xml_predicate_wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__save_term____Compare____xml_predicate_wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__save_term_scalar_common_1[1][3];

static /* final */ const MR_Box mdb__save_term_scalar_common_2[1][4];

static /* final */ const MR_Box mdb__save_term_scalar_common_3[1][5];

static /* final */ const MR_Box mdb__save_term_scalar_common_4[2][2];

static /* final */ const MR_Integer mdb__save_term_scalar_common_5[1][2];

static /* final */ const MR_Box mdb__save_term_scalar_common_6[1][6];




static /* final */ const MR_Box mdb__save_term_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__save_term_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__save_term_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__save_term_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mdb__save_term_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__save_term_scalar_common_4[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0))
  },
};

static /* final */ const MR_Integer mdb__save_term_scalar_common_5[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mdb__save_term_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__save_term_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "mdb.save_term.mh"

#line 87 "save_term.m"
void 
ML_BROWSE_save_term_to_file(
  MR_Word OutputStream_7,
  MR_String FileName_8,
  MR_String _Format_9,
  MR_Word BrowserTerm_10)
#line 87 "save_term.m"
{
#line 87 "save_term.m"
	mdb__save_term__save_term_to_file_6_p_0((MR_Word) OutputStream_7, (MR_String) FileName_8, (MR_String) _Format_9, (MR_Word) BrowserTerm_10);
}

#line 90 "save_term.m"
void 
ML_BROWSE_save_term_to_file_xml(
  MR_Word OutputStream_6,
  MR_String FileName_7,
  MR_Word BrowserTerm_8)
#line 90 "save_term.m"
{
#line 90 "save_term.m"
	mdb__save_term__save_term_to_file_xml_5_p_0((MR_Word) OutputStream_6, (MR_String) FileName_7, (MR_Word) BrowserTerm_8);
}

#line 93 "save_term.m"
void 
ML_BROWSE_save_term_to_file_doc(
  MR_Word OutputStream_6,
  MR_String FileName_7,
  MR_Word BrowserTerm_8)
#line 93 "save_term.m"
{
#line 93 "save_term.m"
	mdb__save_term__save_term_to_file_doc_5_p_0((MR_Word) OutputStream_6, (MR_String) FileName_7, (MR_Word) BrowserTerm_8);
}

#line 96 "save_term.m"
void 
ML_BROWSE_save_and_browse_browser_term_web(
  MR_Word OutputStream_7,
  MR_Word ErrorStream_8,
  MR_Word Term_9,
  MR_Word State_10)
#line 96 "save_term.m"
{
#line 96 "save_term.m"
	mdb__save_term__save_and_browse_browser_term_web_6_p_0((MR_Word) OutputStream_7, (MR_Word) ErrorStream_8, (MR_Word) Term_9, (MR_Word) State_10);
}


static const MR_FA_TypeInfo_Struct1 mdb__save_term__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0) }
};

static const MR_PseudoTypeInfo mdb__save_term__mdb__save_term__field_types_xml_function_wrapper_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__save_term__list__ti_list_1univ__type_ctor_info_univ_0),
  (MR_PseudoTypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0)
};

static const MR_ConstString mdb__save_term__mdb__save_term__field_names_xml_function_wrapper_0_0[3] = {
  (MR_String) "function_name",
  (MR_String) "function_arguments",
  (MR_String) "return_value"
};

static const MR_DuFunctorDesc mdb__save_term__mdb__save_term__du_functor_desc_xml_function_wrapper_0_0 = {
  (MR_String) "function",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__save_term__mdb__save_term__field_types_xml_function_wrapper_0_0,
  mdb__save_term__mdb__save_term__field_names_xml_function_wrapper_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__save_term__mdb__save_term__du_stag_ordered_xml_function_wrapper_0_0[1] = { &mdb__save_term__mdb__save_term__du_functor_desc_xml_function_wrapper_0_0 };

static const MR_DuPtagLayout mdb__save_term__mdb__save_term__du_ptag_ordered_xml_function_wrapper_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__save_term__mdb__save_term__du_stag_ordered_xml_function_wrapper_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__save_term__mdb__save_term__du_name_ordered_xml_function_wrapper_0[1] = { &mdb__save_term__mdb__save_term__du_functor_desc_xml_function_wrapper_0_0 };

static const MR_Integer mdb__save_term__mdb__save_term__functor_number_map_xml_function_wrapper_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdb__save_term__mdb__save_term__type_ctor_info_xml_function_wrapper_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__save_term____Unify____xml_function_wrapper_0_0_10001)),
  ((MR_Box) (mdb__save_term____Compare____xml_function_wrapper_0_0_10001)),
  (MR_String) "mdb.save_term",
  (MR_String) "xml_function_wrapper",
  { mdb__save_term__mdb__save_term__du_name_ordered_xml_function_wrapper_0 },
  { mdb__save_term__mdb__save_term__du_ptag_ordered_xml_function_wrapper_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__save_term__mdb__save_term__functor_number_map_xml_function_wrapper_0,

};

static const MR_PseudoTypeInfo mdb__save_term__mdb__save_term__field_types_xml_predicate_wrapper_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__save_term__list__ti_list_1univ__type_ctor_info_univ_0)
};

static const MR_ConstString mdb__save_term__mdb__save_term__field_names_xml_predicate_wrapper_0_0[2] = {
  (MR_String) "predicate_name",
  (MR_String) "predicate_arguments"
};

static const MR_DuFunctorDesc mdb__save_term__mdb__save_term__du_functor_desc_xml_predicate_wrapper_0_0 = {
  (MR_String) "predicate",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__save_term__mdb__save_term__field_types_xml_predicate_wrapper_0_0,
  mdb__save_term__mdb__save_term__field_names_xml_predicate_wrapper_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__save_term__mdb__save_term__du_stag_ordered_xml_predicate_wrapper_0_0[1] = { &mdb__save_term__mdb__save_term__du_functor_desc_xml_predicate_wrapper_0_0 };

static const MR_DuPtagLayout mdb__save_term__mdb__save_term__du_ptag_ordered_xml_predicate_wrapper_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__save_term__mdb__save_term__du_stag_ordered_xml_predicate_wrapper_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__save_term__mdb__save_term__du_name_ordered_xml_predicate_wrapper_0[1] = { &mdb__save_term__mdb__save_term__du_functor_desc_xml_predicate_wrapper_0_0 };

static const MR_Integer mdb__save_term__mdb__save_term__functor_number_map_xml_predicate_wrapper_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdb__save_term__mdb__save_term__type_ctor_info_xml_predicate_wrapper_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__save_term____Unify____xml_predicate_wrapper_0_0_10001)),
  ((MR_Box) (mdb__save_term____Compare____xml_predicate_wrapper_0_0_10001)),
  (MR_String) "mdb.save_term",
  (MR_String) "xml_predicate_wrapper",
  { mdb__save_term__mdb__save_term__du_name_ordered_xml_predicate_wrapper_0 },
  { mdb__save_term__mdb__save_term__du_ptag_ordered_xml_predicate_wrapper_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__save_term__mdb__save_term__functor_number_map_xml_predicate_wrapper_0,

};

static void MR_CALL 
mdb__save_term____Compare____xml_predicate_wrapper_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__save_term_scalar_common_4[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
mdb__save_term____Unify____xml_predicate_wrapper_0_0(
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
  {
    MR_Word TypeInfo_9_9;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&mdb__save_term_scalar_common_4[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
mdb__save_term____Compare____xml_function_wrapper_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__save_term_scalar_common_4[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__univ____Compare____univ_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
mdb__save_term____Unify____xml_function_wrapper_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_11_11;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&mdb__save_term_scalar_common_4[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = mercury__univ____Unify____univ_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
mdb__save_term__save_and_browse_browser_term_web_6_p_0(
  MR_Word OutputStream_7,
  MR_Word ErrorStream_8,
  MR_Word Term_9,
  MR_Word State_10)
{
  MR_bool succeeded;
  MR_Word MaybeValue_73;
  MR_String MdbDir_75;
  MR_String Path_74;
  MR_String Var_77;
  MR_String Var_78;

  mercury__io__environment__get_environment_var_4_p_0((MR_String) "MERCURY_DEBUGGER_INIT", &MaybeValue_73);
  succeeded = (MaybeValue_73 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Path_74 = ((MR_String) ((MR_hl_field(1, MaybeValue_73, (MR_Integer) 0))));
    succeeded = mercury__dir__path_name_is_absolute_1_p_0(Path_74);
    if (succeeded)
    {
      Var_77 = (MR_String) "mdbrc";
      succeeded = mercury__dir__split_name_3_p_0(Path_74, &MdbDir_75, &Var_78);
      if (succeeded)
        succeeded = (strcmp(Var_77, Var_78) == 0);
    }
  }
  if (succeeded)
  {
    MR_Word MaybeBrowserCmd_14;

    MaybeBrowserCmd_14 = mdb__browser_info__web_browser_cmd_1_f_0(State_10);
    if ((MaybeBrowserCmd_14 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(ErrorStream_8, (MR_String) "mdb: You need to specify the shell command that launches your preferred web browser, by issuing an mdb command \"web_browser_cmd <command>\".\n");
    else
    {
      MR_String BrowserCmd_15 = ((MR_String) ((MR_hl_field(1, MaybeBrowserCmd_14, (MR_Integer) 0))));
      MR_String TmpDir_16;
      MR_Word TmpResult_17;

      mercury__io__file__get_temp_directory_3_p_0(&TmpDir_16);
      mercury__io__file__make_temp_file_6_p_0(TmpDir_16, (MR_String) "mdb", (MR_String) ".html", &TmpResult_17);
      if (((MR_tag((MR_Word) TmpResult_17)) == (MR_Integer) 1))
      {
        MR_Word Error_60 = ((MR_Word) ((MR_hl_field(1, TmpResult_17, (MR_Integer) 0))));
        MR_String Msg_61;

        mercury__io__error_message_2_p_0(Error_60, &Msg_61);
        mercury__io__write_string_4_p_0(ErrorStream_8, (MR_String) "Error opening temporary file: ");
        mercury__io__write_string_4_p_0(ErrorStream_8, Msg_61);
        mercury__io__write_string_4_p_0(ErrorStream_8, (MR_String) "\n");
      }
      else
      {
        MR_String TmpFileName0_18 = ((MR_String) ((MR_hl_field(0, TmpResult_17, (MR_Integer) 0))));
        MR_String TmpFileName_19;
        MR_Word SaveResult_21;

        succeeded = mercury__string__suffix_2_p_0(TmpFileName0_18, (MR_String) ".html");
        if (succeeded)
          TmpFileName_19 = TmpFileName0_18;
        else
        {
          MR_Word Var_20;

          mercury__io__file__remove_file_4_p_0(TmpFileName0_18, &Var_20);
          TmpFileName_19 = mercury__string__f_43_43_2_f_0(TmpFileName0_18, (MR_String) ".html");
        }
        mercury__io__open_output_4_p_0(TmpFileName_19, &SaveResult_21);
        if (((MR_tag((MR_Word) SaveResult_21)) == (MR_Integer) 1))
        {
          MR_Word Error_24 = ((MR_Word) ((MR_hl_field(1, SaveResult_21, (MR_Integer) 0))));
          MR_String Msg_25;

          mercury__io__error_message_2_p_0(Error_24, &Msg_25);
          mercury__io__write_string_4_p_0(ErrorStream_8, (MR_String) "Error opening file \140");
          mercury__io__write_string_4_p_0(ErrorStream_8, TmpFileName_19);
          mercury__io__write_string_4_p_0(ErrorStream_8, (MR_String) "\': ");
          mercury__io__write_string_4_p_0(ErrorStream_8, Msg_25);
          mercury__io__write_string_4_p_0(ErrorStream_8, (MR_String) "\n");
        }
        else
        {
          MR_String CommandStr_23;
          MR_String Var_37;
          MR_Word OutputStream_79 = ((MR_Word) ((MR_hl_field(0, SaveResult_21, (MR_Integer) 0))));
          MR_Word Var_80;

          mdb__term_to_html__write_html_doc_6_p_0(OutputStream_79, Term_9, MdbDir_75, &Var_80);
          mercury__io__close_output_3_p_0(OutputStream_79);
          Var_37 = mercury__string__f_43_43_2_f_0((MR_String) " ", TmpFileName_19);
          CommandStr_23 = mercury__string__f_43_43_2_f_0(BrowserCmd_15, Var_37);
          mdb__save_term__launch_web_browser_5_p_0(OutputStream_7, ErrorStream_8, CommandStr_23);
        }
      }
    }
  }
  else
    mercury__io__write_string_4_p_0(ErrorStream_8, (MR_String) "Could not determine directory containing mdb files.\n");
}

static void MR_CALL 
mdb__save_term__launch_web_browser_5_p_0(
  MR_Word OutputStream_6,
  MR_Word ErrorStream_7,
  MR_String CommandStr_8)
{
  MR_bool succeeded;
  MR_Word Result_10;

  mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "Launching web browser...\n");
  mercury__io__flush_output_3_p_0(OutputStream_6);
  mercury__io__call_system__call_system_return_signal_4_p_0(CommandStr_8, &Result_10);
  if (((MR_tag((MR_Word) Result_10)) == (MR_Integer) 1))
  {
    MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, Result_10, (MR_Integer) 0))));
    MR_String Var_34;

    Var_34 = mercury__string__string_1_f_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Error_14)));
    mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) "mdb: Error launching browser: ");
    mercury__io__write_string_4_p_0(ErrorStream_7, Var_34);
    mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) ".\n");
  }
  else
  {
    MR_Word ExitStatus_11 = ((MR_Word) ((MR_hl_field(0, Result_10, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) ExitStatus_11)) == (MR_Integer) 0))
    {
      MR_Integer ExitCode_12 = ((MR_Integer) ((MR_hl_field(0, ExitStatus_11, (MR_Integer) 0))));

      succeeded = (ExitCode_12 == (MR_Integer) 0);
      if (!(succeeded))
      {
        mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) "mdb: The command \140");
        mercury__io__write_string_4_p_0(ErrorStream_7, CommandStr_8);
        mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) "\' terminated with a non-zero exit code.\n");
      }
    }
    else
      mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) "mdb: The browser was killed.\n");
  }
}

void MR_CALL 
mdb__save_term__save_term_to_file_doc_5_p_0(
  MR_Word OutputStream_6,
  MR_String FileName_7,
  MR_Word BrowserTerm_8)
{
  MR_Word FileStreamResult_10;

  mercury__io__open_output_4_p_0(FileName_7, &FileStreamResult_10);
  if (((MR_tag((MR_Word) FileStreamResult_10)) == (MR_Integer) 1))
  {
    MR_Word Error_24 = ((MR_Word) ((MR_hl_field(1, FileStreamResult_10, (MR_Integer) 0))));
    MR_String Msg_25;

    mercury__io__error_message_2_p_0(Error_24, &Msg_25);
    mercury__io__write_string_4_p_0(OutputStream_6, Msg_25);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
  }
  else
  {
    MR_Word FileStream_11 = ((MR_Word) ((MR_hl_field(0, FileStreamResult_10, (MR_Integer) 0))));
    MR_Word Doc_14;
    MR_Word FMap_22;
    MR_Word Params_23;
    MR_Integer Var_31;
    MR_Word Var_32;
    MR_Integer Var_33;

    if (((MR_tag((MR_Word) BrowserTerm_8)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_41_41;
      MR_Word Univ_12 = ((MR_Word) ((MR_hl_field(0, BrowserTerm_8, (MR_Integer) 0))));
      MR_Box Term_13;

      Term_13 = mercury__univ__univ_value_1_f_0(&TypeInfo_41_41, Univ_12);
      Doc_14 = mercury__pretty_printer__format_1_f_0(TypeInfo_41_41, Term_13);
    }
    else
    {
      MR_String Functor_15 = ((MR_String) ((MR_hl_field(1, BrowserTerm_8, (MR_Integer) 0))));
      MR_Word ArgUnivs_16 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_8, (MR_Integer) 1))));
      MR_Word MaybeResultUniv_17 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_8, (MR_Integer) 2))));

      if ((MaybeResultUniv_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredicateTerm_18;

        {
          PredicateTerm_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredicateTerm_18, 0) = ((MR_Box) (Functor_15));
          MR_hl_field(0, PredicateTerm_18, 1) = ((MR_Box) (ArgUnivs_16));
        }
        Doc_14 = mercury__pretty_printer__format_1_f_0((MR_Word) (&mdb__save_term__mdb__save_term__type_ctor_info_xml_predicate_wrapper_0), ((MR_Box) (PredicateTerm_18)));
      }
      else
      {
        MR_Word ResultUniv_19 = ((MR_Word) ((MR_hl_field(1, MaybeResultUniv_17, (MR_Integer) 0))));
        MR_Word FunctionTerm_20;

        {
          FunctionTerm_20 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FunctionTerm_20, 0) = ((MR_Box) (Functor_15));
          MR_hl_field(0, FunctionTerm_20, 1) = ((MR_Box) (ArgUnivs_16));
          MR_hl_field(0, FunctionTerm_20, 2) = ((MR_Box) (ResultUniv_19));
        }
        Doc_14 = mercury__pretty_printer__format_1_f_0((MR_Word) (&mdb__save_term__mdb__save_term__type_ctor_info_xml_function_wrapper_0), ((MR_Box) (FunctionTerm_20)));
      }
    }
    mercury__pretty_printer__get_default_formatter_map_3_p_0(&FMap_22);
    Var_31 = mercury__int__max_int_0_f_0();
    Var_33 = mercury__int__max_int_0_f_0();
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    }
    {
      Params_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Params_23, 0) = ((MR_Box) ((MR_Integer) 78));
      MR_hl_field(0, Params_23, 1) = ((MR_Box) (Var_31));
      MR_hl_field(0, Params_23, 2) = ((MR_Box) (Var_32));
    }
    mercury__pretty_printer__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_112_117_116_95_100_111_99_95_95_91_83_116_114_101_97_109_32_61_32_105_111_46_116_101_120_116_95_111_117_116_112_117_116_95_115_116_114_101_97_109_44_32_83_116_97_116_101_32_61_32_105_111_46_115_116_97_116_101_93_95_49_95_49_7_p_1((MR_Word) (&mdb__save_term_scalar_common_3[0]), FileStream_11, (MR_Integer) 2, FMap_22, Params_23, Doc_14);
    mercury__io__close_output_3_p_0(FileStream_11);
  }
}

void MR_CALL 
mdb__save_term__save_term_to_file_xml_5_p_0(
  MR_Word OutputStream_6,
  MR_String FileName_7,
  MR_Word BrowserTerm_8)
{
  MR_Word FileStreamResult_10;

  mercury__io__open_output_4_p_0(FileName_7, &FileStreamResult_10);
  if (((MR_tag((MR_Word) FileStreamResult_10)) == (MR_Integer) 1))
  {
    MR_Word Error_23 = ((MR_Word) ((MR_hl_field(1, FileStreamResult_10, (MR_Integer) 0))));
    MR_String Msg_24;

    mercury__io__error_message_2_p_0(Error_23, &Msg_24);
    mercury__io__write_string_4_p_0(OutputStream_6, Msg_24);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
  }
  else
  {
    MR_Word FileStream_11 = ((MR_Word) ((MR_hl_field(0, FileStreamResult_10, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) BrowserTerm_8)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_46_46;
      MR_Word Univ_12 = ((MR_Word) ((MR_hl_field(0, BrowserTerm_8, (MR_Integer) 0))));
      MR_Box Term_13;
      MR_Word Var_14;
      MR_Box conv0_STATE_VARIABLE_IO_31_31;

      Term_13 = mercury__univ__univ_value_1_f_0(&TypeInfo_46_46, Univ_12);
      mercury__term_to_xml__write_xml_doc_general_cc_8_p_0(TypeInfo_46_46, (MR_Word) (&mdb__save_term_scalar_common_3[0]), ((MR_Box) (FileStream_11)), Term_13, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 4U), &Var_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_31_31);
    }
    else
    {
      MR_String Functor_15 = ((MR_String) ((MR_hl_field(1, BrowserTerm_8, (MR_Integer) 0))));
      MR_Word ArgUnivs_16 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_8, (MR_Integer) 1))));
      MR_Word MaybeResultUniv_17 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_8, (MR_Integer) 2))));

      if ((MaybeResultUniv_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word PredicateTerm_18;
        MR_Word Var_19;
        MR_Box conv1_STATE_VARIABLE_IO_31_31;

        {
          PredicateTerm_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredicateTerm_18, 0) = ((MR_Box) (Functor_15));
          MR_hl_field(0, PredicateTerm_18, 1) = ((MR_Box) (ArgUnivs_16));
        }
        mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) (&mdb__save_term__mdb__save_term__type_ctor_info_xml_predicate_wrapper_0), (MR_Word) (&mdb__save_term_scalar_common_3[0]), ((MR_Box) (FileStream_11)), ((MR_Box) (PredicateTerm_18)), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 4U), &Var_19, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_31_31);
      }
      else
      {
        MR_Word ResultUniv_20 = ((MR_Word) ((MR_hl_field(1, MaybeResultUniv_17, (MR_Integer) 0))));
        MR_Word FunctionTerm_21;
        MR_Word Var_22;
        MR_Box conv2_STATE_VARIABLE_IO_31_31;

        {
          FunctionTerm_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, FunctionTerm_21, 0) = ((MR_Box) (Functor_15));
          MR_hl_field(0, FunctionTerm_21, 1) = ((MR_Box) (ArgUnivs_16));
          MR_hl_field(0, FunctionTerm_21, 2) = ((MR_Box) (ResultUniv_20));
        }
        mercury__term_to_xml__write_xml_doc_general_cc_8_p_0((MR_Word) (&mdb__save_term__mdb__save_term__type_ctor_info_xml_function_wrapper_0), (MR_Word) (&mdb__save_term_scalar_common_3[0]), ((MR_Box) (FileStream_11)), ((MR_Box) (FunctionTerm_21)), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 4U), &Var_22, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_31_31);
      }
    }
    mercury__io__close_output_3_p_0(FileStream_11);
  }
}

void MR_CALL 
mdb__save_term__save_term_to_file_6_p_0(
  MR_Word OutputStream_7,
  MR_String FileName_8,
  MR_String _Format_9,
  MR_Word BrowserTerm_10)
{
  mdb__save_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_51_93_95_48_6_p_0(OutputStream_7, FileName_8, BrowserTerm_10);
}

static MR_Box MR_CALL 
mdb__save_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_51_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__univ__univ_1_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1);
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
mdb__save_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_51_93_95_48_6_p_0(
  MR_Word OutputStream_7,
  MR_String FileName_8,
  MR_Word BrowserTerm_10)
{
  MR_bool succeeded;
  MR_Word FileStreamResult_13;

  mercury__io__open_output_4_p_0(FileName_8, &FileStreamResult_13);
  if (((MR_tag((MR_Word) FileStreamResult_13)) == (MR_Integer) 1))
  {
    MR_Word Error_20 = ((MR_Word) ((MR_hl_field(1, FileStreamResult_13, (MR_Integer) 0))));
    MR_String Msg_21;

    mercury__io__error_message_2_p_0(Error_20, &Msg_21);
    mercury__io__write_string_4_p_0(OutputStream_7, Msg_21);
  }
  else
  {
    MR_Word FileStream_14 = ((MR_Word) ((MR_hl_field(0, FileStreamResult_13, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) BrowserTerm_10)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_13_51;
      MR_Word Term_15 = ((MR_Word) ((MR_hl_field(0, BrowserTerm_10, (MR_Integer) 0))));
      MR_Box Var_50;
      MR_Word TypeInfo_55_82;
      MR_Word List_52;

      Var_50 = mercury__univ__univ_value_1_f_0(&TypeInfo_13_51, Term_15);
      succeeded = mdb__save_term__dynamic_cast_to_list_2_p_0(TypeInfo_13_51, &TypeInfo_55_82, Var_50, &List_52);
      if (succeeded)
        if ((List_52 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mdb__save_term__write_indent_4_p_0(FileStream_14, (MR_Integer) 0);
          mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "[]");
        }
        else
        {
          MR_Word MakeUniv_53;
          MR_Word Univs_54;

          {
            MakeUniv_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MakeUniv_53, 0) = ((MR_Box) (&mdb__save_term_scalar_common_6[0]));
            MR_hl_field(0, MakeUniv_53, 1) = ((MR_Box) (mdb__save_term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_118_101_95_116_101_114_109_95_116_111_95_102_105_108_101_95_95_91_51_93_95_48_6_p_0_1));
            MR_hl_field(0, MakeUniv_53, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, MakeUniv_53, 3) = ((MR_Box) (TypeInfo_55_82));
          }
          Univs_54 = mercury__list__map_2_f_0(TypeInfo_55_82, (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), MakeUniv_53, List_52);
          mdb__save_term__write_indent_4_p_0(FileStream_14, (MR_Integer) 0);
          mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "[\n");
          mdb__save_term__save_arg_univs_5_p_0(FileStream_14, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), Univs_54);
          mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "\n");
          mdb__save_term__write_indent_4_p_0(FileStream_14, (MR_Integer) 0);
          mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "]");
        }
      else
      {
        MR_String Functor_55;
        MR_Word Args_57;
        MR_Integer _Arity_56;

        mercury__deconstruct__deconstruct_5_p_2(TypeInfo_13_51, Var_50, (MR_Integer) 2, &Functor_55, &_Arity_56, &Args_57);
        mdb__save_term__write_indent_4_p_0(FileStream_14, (MR_Integer) 0);
        mercury__io__write_string_4_p_0(FileStream_14, Functor_55);
        if (!((Args_57 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "(\n");
          mdb__save_term__save_arg_univs_5_p_0(FileStream_14, (MR_Integer) ((MR_Unsigned) 0 + (MR_Unsigned) 1), Args_57);
          mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "\n");
          mdb__save_term__write_indent_4_p_0(FileStream_14, (MR_Integer) 0);
          mercury__io__write_string_4_p_0(FileStream_14, (MR_String) ")");
        }
      }
      mercury__io__nl_3_p_0(FileStream_14);
    }
    else
    {
      MR_String Functor_16 = ((MR_String) ((MR_hl_field(1, BrowserTerm_10, (MR_Integer) 0))));
      MR_Word ArgUnivs_17 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_10, (MR_Integer) 1))));
      MR_Word MaybeResultUniv_18 = ((MR_Word) ((MR_hl_field(1, BrowserTerm_10, (MR_Integer) 2))));

      mercury__io__write_string_4_p_0(FileStream_14, Functor_16);
      mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "(\n");
      mdb__save_term__save_arg_univs_5_p_0(FileStream_14, (MR_Integer) 1, ArgUnivs_17);
      mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "\n)\n");
      if (!((MaybeResultUniv_18 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word ResultUniv_19 = ((MR_Word) ((MR_hl_field(1, MaybeResultUniv_18, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "=\n");
        mdb__save_term__save_univ_5_p_0(FileStream_14, (MR_Integer) 1, ResultUniv_19);
        mercury__io__write_string_4_p_0(FileStream_14, (MR_String) "\n");
      }
    }
    mercury__io__close_output_3_p_0(FileStream_14);
  }
}

static MR_Box MR_CALL 
mdb__save_term__save_univ_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__univ__univ_1_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1);
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
mdb__save_term__save_univ_5_p_0(
  MR_Word OutputStream_6,
  MR_Integer Indent_7,
  MR_Word Univ_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_13_13;
  MR_Box Var_12;
  MR_Word TypeInfo_55_44;
  MR_Word List_14;

  Var_12 = mercury__univ__univ_value_1_f_0(&TypeInfo_13_13, Univ_8);
  succeeded = mdb__save_term__dynamic_cast_to_list_2_p_0(TypeInfo_13_13, &TypeInfo_55_44, Var_12, &List_14);
  if (succeeded)
    if ((List_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mdb__save_term__write_indent_4_p_0(OutputStream_6, Indent_7);
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "[]");
    }
    else
    {
      MR_Word MakeUniv_15;
      MR_Word Univs_16;
      MR_Integer Var_25;

      {
        MakeUniv_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MakeUniv_15, 0) = ((MR_Box) (&mdb__save_term_scalar_common_6[0]));
        MR_hl_field(0, MakeUniv_15, 1) = ((MR_Box) (mdb__save_term__save_univ_5_p_0_1));
        MR_hl_field(0, MakeUniv_15, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, MakeUniv_15, 3) = ((MR_Box) (TypeInfo_55_44));
      }
      Univs_16 = mercury__list__map_2_f_0(TypeInfo_55_44, (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), MakeUniv_15, List_14);
      mdb__save_term__write_indent_4_p_0(OutputStream_6, Indent_7);
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "[\n");
      Var_25 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
      mdb__save_term__save_arg_univs_5_p_0(OutputStream_6, Var_25, Univs_16);
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
      mdb__save_term__write_indent_4_p_0(OutputStream_6, Indent_7);
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "]");
    }
  else
  {
    MR_String Functor_17;
    MR_Word Args_19;
    MR_Integer _Arity_18;

    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_13_13, Var_12, (MR_Integer) 2, &Functor_17, &_Arity_18, &Args_19);
    mdb__save_term__write_indent_4_p_0(OutputStream_6, Indent_7);
    mercury__io__write_string_4_p_0(OutputStream_6, Functor_17);
    if (!((Args_19 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer Var_37;

      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "(\n");
      Var_37 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) 1);
      mdb__save_term__save_arg_univs_5_p_0(OutputStream_6, Var_37, Args_19);
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
      mdb__save_term__write_indent_4_p_0(OutputStream_6, Indent_7);
      mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ")");
    }
  }
}

static MR_Box MR_CALL 
mdb__save_term__save_arg_univs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__univ__univ_1_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), wrapper_arg_1);
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
mdb__save_term__save_arg_univs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TypeInfo_13_24;
      MR_Word Univ_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Univs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Box Var_23;
      MR_Word TypeInfo_55_55;
      MR_Word List_25;

      Var_23 = mercury__univ__univ_value_1_f_0(&TypeInfo_13_24, Univ_13);
      succeeded = mdb__save_term__dynamic_cast_to_list_2_p_0(TypeInfo_13_24, &TypeInfo_55_55, Var_23, &List_25);
      if (succeeded)
        if ((List_25 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mdb__save_term__write_indent_4_p_0(HeadVar__1_1, HeadVar__2_2);
          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "[]");
        }
        else
        {
          MR_Word MakeUniv_26;
          MR_Word Univs_27;
          MR_Integer Var_36;

          {
            MakeUniv_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MakeUniv_26, 0) = ((MR_Box) (&mdb__save_term_scalar_common_6[0]));
            MR_hl_field(0, MakeUniv_26, 1) = ((MR_Box) (mdb__save_term__save_arg_univs_5_p_0_1));
            MR_hl_field(0, MakeUniv_26, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, MakeUniv_26, 3) = ((MR_Box) (TypeInfo_55_55));
          }
          Univs_27 = mercury__list__map_2_f_0(TypeInfo_55_55, (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), MakeUniv_26, List_25);
          mdb__save_term__write_indent_4_p_0(HeadVar__1_1, HeadVar__2_2);
          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "[\n");
          Var_36 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
          mdb__save_term__save_arg_univs_5_p_0(HeadVar__1_1, Var_36, Univs_27);
          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
          mdb__save_term__write_indent_4_p_0(HeadVar__1_1, HeadVar__2_2);
          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "]");
        }
      else
      {
        MR_String Functor_28;
        MR_Word Args_30;
        MR_Integer _Arity_29;

        mercury__deconstruct__deconstruct_5_p_2(TypeInfo_13_24, Var_23, (MR_Integer) 2, &Functor_28, &_Arity_29, &Args_30);
        mdb__save_term__write_indent_4_p_0(HeadVar__1_1, HeadVar__2_2);
        mercury__io__write_string_4_p_0(HeadVar__1_1, Functor_28);
        if (!((Args_30 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Integer Var_48;

          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "(\n");
          Var_48 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
          mdb__save_term__save_arg_univs_5_p_0(HeadVar__1_1, Var_48, Args_30);
          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) "\n");
          mdb__save_term__write_indent_4_p_0(HeadVar__1_1, HeadVar__2_2);
          mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ")");
        }
      }
      if (!((Univs_14 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word next_value_of_HeadVar__3_3;

        mercury__io__write_string_4_p_0(HeadVar__1_1, (MR_String) ",\n");
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Univs_14;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mdb__save_term__write_indent_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer Indent_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Indent_6 <= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Integer Var_13;
      MR_Integer next_value_of_Indent_6;

      mercury__io__write_char_4_p_0(OutputStream_5, (MR_Char) 32);
      Var_13 = (MR_Integer) ((MR_Unsigned) Indent_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Indent_6 = Var_13;
      Indent_6 = next_value_of_Indent_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
mdb__save_term__dynamic_cast_to_list_2_p_0(
  MR_Word TypeInfo_for_T1_14,
  MR_Word * TypeInfo_for_T_13,
  MR_Box X_3,
  MR_Word * L_4)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_15_15;
  MR_Word TypeInfo_16_16;
  MR_Word TypeInfo_19_19;
  MR_Word ArgTypeDesc_5;
  MR_Word Var_8;
  MR_Word Var_10;
  MR_Word Var_18;
  MR_Box conv0_L_4;

  Var_10 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T1_14);
  Var_8 = mercury__type_desc__type_args_1_f_0(Var_10);
  succeeded = (Var_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ArgTypeDesc_5 = ((MR_Word) ((MR_hl_field(1, Var_8, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(1, Var_8, (MR_Integer) 1))));
    TypeInfo_19_19 = (MR_Word) (&mdb__save_term_scalar_common_4[1]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_18)));
    if (succeeded)
    {
      mercury__type_desc__has_type_2_p_0(TypeInfo_for_T_13, ArgTypeDesc_5);
      TypeCtorInfo_15_15 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
      {
        TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (TypeCtorInfo_15_15));
        MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (*TypeInfo_for_T_13));
      }
      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T1_14, TypeInfo_16_16, X_3, &conv0_L_4);
      if (succeeded)
      {
        *L_4 = ((MR_Word) (conv0_L_4));
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__save_term____Unify____xml_function_wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__save_term____Unify____xml_function_wrapper_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__save_term____Compare____xml_function_wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__save_term____Compare____xml_function_wrapper_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__save_term____Unify____xml_predicate_wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__save_term____Unify____xml_predicate_wrapper_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__save_term____Compare____xml_predicate_wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__save_term____Compare____xml_predicate_wrapper_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdb__save_term__init(void)
{
}

void mercury__mdb__save_term__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__save_term__mdb__save_term__type_ctor_info_xml_function_wrapper_0);
	MR_register_type_ctor_info(&mdb__save_term__mdb__save_term__type_ctor_info_xml_predicate_wrapper_0);
}

void mercury__mdb__save_term__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__save_term__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.save_term.
