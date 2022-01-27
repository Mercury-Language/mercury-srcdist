/*
** Automatically generated from `interactive_query.m'
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


/* :- module mdb.interactive_query. */
/* :- implementation. */

/*
INIT mercury__mdb__interactive_query__init
ENDINIT
*/

#include "mdb.interactive_query.mih"
#include "mdb.interactive_query.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.dl.mih"
#include "mdb.name_mangle.mih"
#include "mdb.util.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__term__pti_var_1__plain_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0;

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_1[1];

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1;

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2;

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3;

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_4[1];

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4;

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_0[3];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_1[1];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_2[1];

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_interactive_query_response_0[3];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_interactive_query_response_0[5];

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_interactive_query_response_0[5];

static const MR_VA_TypeInfo_Struct2 mdb__interactive_query____vti_pred_2io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__varset__ti_varset_1term__type_ctor_info_generic_0;

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_prog_0_0[4];

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0;

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0[1];

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_prog_0[1];

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_prog_0[1];

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_prog_0[1];

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0;

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1;

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2;

static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_value_ordered_query_type_0[3];

static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_name_ordered_query_type_0[3];

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_query_type_0[3];

static MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____imports_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____io_pred_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____io_pred_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____options_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____options_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2);

static void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0(void);

static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____io_pred_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____io_pred_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2);

static MR_bool MR_CALL 
mdb__interactive_query__system_is_darwin_0_p_0(void);

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_1_f_0(
  MR_Word mdb__interactive_query__X_1);

static void MR_CALL 
mdb__interactive_query__dynamically_load_and_run_2_p_0(void);

static MR_String MR_CALL 
mdb__interactive_query__grade_option_0_f_0(void);

static void MR_CALL 
mdb__interactive_query__compile_file_4_p_0(
  MR_String mdb__interactive_query__Options_5,
  MR_Word * mdb__interactive_query__Succeeded_6);

static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0(
  MR_Word mdb__interactive_query__Out_5,
  MR_Word mdb__interactive_query__Imports_6);

static void MR_CALL 
mdb__interactive_query__write_one_var_4_p_0(
  MR_Word mdb__interactive_query__VarSet_5,
  MR_Word mdb__interactive_query__Var_6);

static void MR_CALL 
mdb__interactive_query__write_args_4_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_args_4_p_0(
  MR_Word mdb__interactive_query__Vars_5,
  MR_Word mdb__interactive_query__VarSet_6);

static void MR_CALL 
mdb__interactive_query__write_code_to_print_one_var_4_p_0(
  MR_Word mdb__interactive_query__VarSet_5,
  MR_Word mdb__interactive_query__Var_6);

static void MR_CALL 
mdb__interactive_query__write_line_directive_2_p_0(void);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_2(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0(
  MR_Word mdb__interactive_query__HeadVar__1_1);

static void MR_CALL 
mdb__interactive_query__run_query_4_p_0(
  MR_String mdb__interactive_query__Options_5,
  MR_Word mdb__interactive_query__Program_6);

static MR_bool MR_CALL 
mdb__interactive_query__term_to_list_2_p_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word * mdb__interactive_query__HeadVar__2_2);

static void MR_CALL 
mdb__interactive_query__send_term_to_socket_4_p_0(
  MR_Word mdb__interactive_query__Term_5,
  MR_Word mdb__interactive_query__SocketStream_6);

static void MR_CALL 
mdb__interactive_query__query_2_8_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3);

static void MR_CALL 
mdb__interactive_query__query_2_8_p_0(
  MR_Word mdb__interactive_query__QueryType_9,
  MR_Word mdb__interactive_query__Imports_10,
  MR_String mdb__interactive_query__Options_11,
  MR_Word mdb__interactive_query__MDB_Stdin_12,
  MR_Word mdb__interactive_query__MDB_Stdout_13,
  MR_Word mdb__interactive_query__ReadTerm_14);


static /* final */ const MR_Box mdb__interactive_query_scalar_common_1[7][2];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_2[1][4];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_3[2][1];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_4[1][6];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_5[2][3];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_6[1][7];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_7[1][5];




static /* final */ const MR_Box mdb__interactive_query_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "mdb_query")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) " --pic-reg --compile-to-shared-lib ")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[5])))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "mdb_query"))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_5[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_4[0])),
    ((MR_Box) (mdb__interactive_query__query_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_4[0])),
    ((MR_Box) (mdb__interactive_query__write_import_list_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdb__interactive_query__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mdb__interactive_query__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_7[1][5] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_3[1]))),
    ((MR_Box) ((MR_String) "run")),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.interactive_query.mh"

#line 68 "interactive_query.m"
void 
ML_query(
  MR_Word mdb__interactive_query__QueryType_8,
  MR_Word mdb__interactive_query__Imports_9,
  MR_String mdb__interactive_query__Options_10,
  MR_Word mdb__interactive_query__MDB_Stdin_11,
  MR_Word mdb__interactive_query__MDB_Stdout_12)
#line 68 "interactive_query.m"
{
#line 68 "interactive_query.m"
	mdb__interactive_query__query_7_p_0((MR_Word) mdb__interactive_query__QueryType_8, (MR_Word) mdb__interactive_query__Imports_9, (MR_String) mdb__interactive_query__Options_10, (MR_Word) mdb__interactive_query__MDB_Stdin_11, (MR_Word) mdb__interactive_query__MDB_Stdout_12);
}

#line 150 "interactive_query.m"
void 
ML_query_external(
  MR_Word mdb__interactive_query__QueryType_8,
  MR_Word mdb__interactive_query__Imports_9,
  MR_String mdb__interactive_query__Options_10,
  MR_Word mdb__interactive_query__SocketIn_11,
  MR_Word mdb__interactive_query__SocketOut_12)
#line 150 "interactive_query.m"
{
#line 150 "interactive_query.m"
	mdb__interactive_query__query_external_7_p_0((MR_Word) mdb__interactive_query__QueryType_8, (MR_Word) mdb__interactive_query__Imports_9, (MR_String) mdb__interactive_query__Options_10, (MR_Word) mdb__interactive_query__SocketIn_11, (MR_Word) mdb__interactive_query__SocketOut_12);
}


static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_imports_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____imports_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____imports_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "imports",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0 = {
  (MR_String) "iq_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1 = {
  (MR_String) "iq_imported",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2 = {
  (MR_String) "iq_quit",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3 = {
  (MR_String) "iq_eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4 = {
  (MR_String) "iq_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_4,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_0[3] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_1[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_2[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4
};

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_interactive_query_response_0[3] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_2
  }
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_interactive_query_response_0[5] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2
};

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_interactive_query_response_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__interactive_query____Unify____interactive_query_response_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____interactive_query_response_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "interactive_query_response",
  {     mdb__interactive_query__mdb__interactive_query__du_name_ordered_interactive_query_response_0 },
  {     mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_interactive_query_response_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__functor_number_map_interactive_query_response_0
};

static const MR_VA_TypeInfo_Struct2 mdb__interactive_query____vti_pred_2io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_io_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____io_pred_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____io_pred_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "io_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__interactive_query____vti_pred_2io__type_ctor_info_state_0io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____options_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____options_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "options",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_prog_0_0[4] = {
  (MR_PseudoTypeInfo) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_type_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__term__ti_term_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__varset__ti_varset_1term__type_ctor_info_generic_0
};

static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0 = {
  (MR_String) "prog",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__interactive_query__mdb__interactive_query__field_types_prog_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0
};

static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_prog_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0
  }
};

static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_prog_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0
};

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_prog_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_prog_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__interactive_query____Unify____prog_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____prog_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "prog",
  {     mdb__interactive_query__mdb__interactive_query__du_name_ordered_prog_0 },
  {     mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_prog_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__functor_number_map_prog_0
};

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0 = {
  (MR_String) "normal_query",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1 = {
  (MR_String) "cc_query",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2 = {
  (MR_String) "io_query",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_value_ordered_query_type_0[3] = {
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2
};

static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_name_ordered_query_type_0[3] = {
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0
};

static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_query_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__interactive_query____Unify____query_type_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____query_type_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "query_type",
  {     mdb__interactive_query__mdb__interactive_query__enum_name_ordered_query_type_0 },
  {     mdb__interactive_query__mdb__interactive_query__enum_value_ordered_query_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__functor_number_map_query_type_0
};

static MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____imports_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____imports_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____imports_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____interactive_query_response_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____interactive_query_response_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____io_pred_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____io_pred_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____io_pred_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____io_pred_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____options_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____options_0_0(((MR_String) mdb__interactive_query__wrapper_arg_1), ((MR_String) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____options_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____options_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_String) mdb__interactive_query__wrapper_arg_2), ((MR_String) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____prog_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____prog_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0_10001(
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____query_type_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0_10001(
  MR_Box * mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

    {
      mdb__interactive_query____Compare____query_type_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0(void)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__V_61_61;
    MR_String mdb__interactive_query__V_63_63;
    MR_String mdb__interactive_query__V_65_65;
    MR_Word mdb__interactive_query__V_5_5;
    MR_Word mdb__interactive_query__V_6_6;
    MR_Word mdb__interactive_query__V_7_7;
    MR_Word mdb__interactive_query__V_8_8;
    MR_Word mdb__interactive_query__V_9_9;
    MR_Word mdb__interactive_query__V_10_10;
    MR_Word mdb__interactive_query__V_11_11;
    MR_Word mdb__interactive_query__V_12_12;
    MR_Word mdb__interactive_query__V_13_13;
    MR_Word mdb__interactive_query__V_14_14;

    {
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.m", &mdb__interactive_query__V_5_5);
    }
    {
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.d", &mdb__interactive_query__V_6_6);
    }
    {
      mercury__io__remove_file_4_p_0((MR_String) "Mercury/ds/mdb_query.d", &mdb__interactive_query__V_7_7);
    }
    {
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.c", &mdb__interactive_query__V_8_8);
    }
    {
      mercury__io__remove_file_4_p_0((MR_String) "Mercury/cs/mdb_query.c", &mdb__interactive_query__V_9_9);
    }
    {
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.c_date", &mdb__interactive_query__V_10_10);
    }
    {
      mercury__io__remove_file_4_p_0((MR_String) "Mercury/c_dates/mdb_query.c_date", &mdb__interactive_query__V_11_11);
    }
    {
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.o", &mdb__interactive_query__V_12_12);
    }
    {
      mercury__io__remove_file_4_p_0((MR_String) "Mercury/os/mdb_query.o", &mdb__interactive_query__V_13_13);
    }
{
#define MR_PROC_LABEL mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mdb__interactive_query__succeeded  = SUCCESS_INDICATOR;
}
    if (mdb__interactive_query__succeeded)
      mdb__interactive_query__V_65_65 = (MR_String) ".dylib";
    else
      mdb__interactive_query__V_65_65 = (MR_String) ".so";
    {
      mdb__interactive_query__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", mdb__interactive_query__V_65_65);
    }
    {
      mdb__interactive_query__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "lib", mdb__interactive_query__V_63_63);
    }
    {
      mercury__io__remove_file_4_p_0(mdb__interactive_query__V_61_61, &mdb__interactive_query__V_14_14);
    }
  }
}

void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__Cast_HeadVar1_4 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;
    MR_Integer mdb__interactive_query__Cast_HeadVar2_5 = (MR_Integer) mdb__interactive_query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__interactive_query__HeadVar__1_1, mdb__interactive_query__Cast_HeadVar1_4, mdb__interactive_query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0(
  MR_Word mdb__interactive_query__HeadVar__2_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded = (mdb__interactive_query__HeadVar__2_1 == mdb__interactive_query__HeadVar__2_2);

    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__CastX_15 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;
    MR_Integer mdb__interactive_query__CastY_16 = (MR_Integer) mdb__interactive_query__HeadVar__3_3;

    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_15 == mdb__interactive_query__CastY_16);
    if (mdb__interactive_query__succeeded)
      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__interactive_query__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__interactive_query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mdb__interactive_query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__interactive_query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mdb__interactive_query__V_12_12;
        MR_Integer mdb__interactive_query__V_21_21 = (MR_Integer) mdb__interactive_query__V_4_4;
        MR_Integer mdb__interactive_query__V_22_22 = (MR_Integer) mdb__interactive_query__V_8_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__interactive_query__V_12_12, mdb__interactive_query__V_21_21, mdb__interactive_query__V_22_22);
        }
        mdb__interactive_query__succeeded = (mdb__interactive_query__V_12_12 == (MR_Integer) 0);
        mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
        if (mdb__interactive_query__succeeded)
          *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_12_12;
        else
          {
            MR_Word mdb__interactive_query__V_13_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], &mdb__interactive_query__V_13_13, ((MR_Box) (mdb__interactive_query__V_5_5)), ((MR_Box) (mdb__interactive_query__V_9_9)));
            }
            mdb__interactive_query__succeeded = (mdb__interactive_query__V_13_13 == (MR_Integer) 0);
            mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
            if (mdb__interactive_query__succeeded)
              *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_13_13;
            else
              {
                MR_Word mdb__interactive_query__V_14_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[2], &mdb__interactive_query__V_14_14, ((MR_Box) (mdb__interactive_query__V_6_6)), ((MR_Box) (mdb__interactive_query__V_10_10)));
                }
                mdb__interactive_query__succeeded = (mdb__interactive_query__V_14_14 == (MR_Integer) 0);
                mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
                if (mdb__interactive_query__succeeded)
                  *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_14_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[3], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__V_7_7)), ((MR_Box) (mdb__interactive_query__V_11_11)));
                    }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__CastX_11 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
    MR_Integer mdb__interactive_query__CastY_12 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_11 == mdb__interactive_query__CastY_12);
    if (mdb__interactive_query__succeeded)
      mdb__interactive_query__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__interactive_query__TypeInfo_13_13;
        MR_Word mdb__interactive_query__TypeInfo_14_14;
        MR_Word mdb__interactive_query__TypeInfo_15_15;
        MR_Word mdb__interactive_query__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__interactive_query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mdb__interactive_query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__interactive_query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__interactive_query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 3)));

        mdb__interactive_query__succeeded = (mdb__interactive_query__V_3_3 == mdb__interactive_query__V_7_7);
        if (mdb__interactive_query__succeeded)
          {
            mdb__interactive_query__TypeInfo_13_13 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
            {
              mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_13_13, ((MR_Box) (mdb__interactive_query__V_4_4)), ((MR_Box) (mdb__interactive_query__V_8_8)));
            }
            if (mdb__interactive_query__succeeded)
              {
                mdb__interactive_query__TypeInfo_14_14 = (MR_Word) &mdb__interactive_query_scalar_common_1[2];
                {
                  mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_14_14, ((MR_Box) (mdb__interactive_query__V_5_5)), ((MR_Box) (mdb__interactive_query__V_9_9)));
                }
                if (mdb__interactive_query__succeeded)
                  {
                    mdb__interactive_query__TypeInfo_15_15 = (MR_Word) &mdb__interactive_query_scalar_common_1[3];
                    {
                      mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_15_15, ((MR_Box) (mdb__interactive_query__V_6_6)), ((MR_Box) (mdb__interactive_query__V_10_10)));
                    }
                  }
              }
          }
      }
    return mdb__interactive_query__succeeded;
  }
}

void MR_CALL 
mdb__interactive_query____Compare____options_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_String mdb__interactive_query__HeadVar__2_2,
  MR_String mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__Cast_HeadVar1_4 = mdb__interactive_query__HeadVar__2_2;
    MR_String mdb__interactive_query__Cast_HeadVar2_5 = mdb__interactive_query__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__interactive_query__HeadVar__1_1, mdb__interactive_query__Cast_HeadVar1_4, mdb__interactive_query__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdb__interactive_query____Unify____options_0_0(
  MR_String mdb__interactive_query__HeadVar__1_1,
  MR_String mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__Cast_HeadVar1_3 = mdb__interactive_query__HeadVar__1_1;
    MR_String mdb__interactive_query__Cast_HeadVar2_4 = mdb__interactive_query__HeadVar__2_2;

    mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__Cast_HeadVar1_3, mdb__interactive_query__Cast_HeadVar2_4) == 0);
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____io_pred_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Cast_HeadVar1_4 = mdb__interactive_query__HeadVar__2_2;
    MR_Word mdb__interactive_query__Cast_HeadVar2_5 = mdb__interactive_query__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__Cast_HeadVar1_4)), ((MR_Box) (mdb__interactive_query__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____io_pred_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Cast_HeadVar1_3 = mdb__interactive_query__HeadVar__1_1;
    MR_Word mdb__interactive_query__Cast_HeadVar2_4 = mdb__interactive_query__HeadVar__2_2;

    {
      mdb__interactive_query__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mdb__interactive_query__Cast_HeadVar1_3, (MR_Word) mdb__interactive_query__Cast_HeadVar2_4);
    }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__CastX_24 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;
    MR_Integer mdb__interactive_query__CastY_25 = (MR_Integer) mdb__interactive_query__HeadVar__3_3;

    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_24 == mdb__interactive_query__CastY_25);
    if (mdb__interactive_query__succeeded)
      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__interactive_query__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__interactive_query__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__interactive_query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__V_29_29)), ((MR_Box) (mdb__interactive_query__V_8_8)));
                  }
                }
                break;
              case (MR_Integer) 2:
                *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mdb__interactive_query__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String mdb__interactive_query__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__interactive_query__HeadVar__1_1, mdb__interactive_query__V_28_28, mdb__interactive_query__V_23_23);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__CastX_13 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
    MR_Integer mdb__interactive_query__CastY_14 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_13 == mdb__interactive_query__CastY_14);
    if (mdb__interactive_query__succeeded)
      mdb__interactive_query__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__interactive_query__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__interactive_query__CastX_3 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
                MR_Integer mdb__interactive_query__CastY_4 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

                mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_4 == mdb__interactive_query__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__interactive_query__CastX_7 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
                MR_Integer mdb__interactive_query__CastY_8 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

                mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_8 == mdb__interactive_query__CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mdb__interactive_query__CastX_9 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
                MR_Integer mdb__interactive_query__CastY_10 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

                mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_10 == mdb__interactive_query__CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__interactive_query__TypeInfo_15_15;
            MR_Word mdb__interactive_query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__interactive_query__V_6_6;

            mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__interactive_query__succeeded)
              {
                mdb__interactive_query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
                mdb__interactive_query__TypeInfo_15_15 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
                {
                  mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_15_15, ((MR_Box) (mdb__interactive_query__V_5_5)), ((MR_Box) (mdb__interactive_query__V_6_6)));
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mdb__interactive_query__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mdb__interactive_query__V_12_12;

            mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__interactive_query__succeeded)
              {
                mdb__interactive_query__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
                mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_11_11, mdb__interactive_query__V_12_12) == 0);
              }
          }
          break;
      }
    return mdb__interactive_query__succeeded;
  }
}

void MR_CALL 
mdb__interactive_query____Compare____imports_0_0(
  MR_Word * mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2,
  MR_Word mdb__interactive_query__HeadVar__3_3)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Cast_HeadVar1_4 = mdb__interactive_query__HeadVar__2_2;
    MR_Word mdb__interactive_query__Cast_HeadVar2_5 = mdb__interactive_query__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__Cast_HeadVar1_4)), ((MR_Box) (mdb__interactive_query__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Cast_HeadVar1_3 = mdb__interactive_query__HeadVar__1_1;
    MR_Word mdb__interactive_query__Cast_HeadVar2_4 = mdb__interactive_query__HeadVar__2_2;

    {
      mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], ((MR_Box) (mdb__interactive_query__Cast_HeadVar1_3)), ((MR_Box) (mdb__interactive_query__Cast_HeadVar2_4)));
    }
    return mdb__interactive_query__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__system_is_darwin_0_p_0(void)
{
  {
    MR_bool mdb__interactive_query__succeeded;

{
#define MR_PROC_LABEL mdb__interactive_query__system_is_darwin_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mdb__interactive_query__succeeded  = SUCCESS_INDICATOR;
}
    return mdb__interactive_query__succeeded;
  }
}

static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_1_f_0(
  MR_Word mdb__interactive_query__X_1)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__Y_2;

{
#define MR_PROC_LABEL mdb__interactive_query__inst_cast_1_f_0

	MR_Word X;
	MR_Word Y;

	X =  mdb__interactive_query__X_1 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__Y_2  = Y;
}
    return mdb__interactive_query__Y_2;
  }
}

static void MR_CALL 
mdb__interactive_query__dynamically_load_and_run_2_p_0(void)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__MaybeHandle_4;
    MR_String mdb__interactive_query__V_15_15;
    MR_String mdb__interactive_query__V_20_20;
    MR_String mdb__interactive_query__V_22_22;

{
#define MR_PROC_LABEL mdb__interactive_query__dynamically_load_and_run_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mdb__interactive_query__succeeded  = SUCCESS_INDICATOR;
}
    if (mdb__interactive_query__succeeded)
      mdb__interactive_query__V_22_22 = (MR_String) ".dylib";
    else
      mdb__interactive_query__V_22_22 = (MR_String) ".so";
    {
      mdb__interactive_query__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", mdb__interactive_query__V_22_22);
    }
    {
      mdb__interactive_query__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "./lib", mdb__interactive_query__V_20_20);
    }
    {
      mdb__dl__open_6_p_0(mdb__interactive_query__V_15_15, (MR_Integer) 0, (MR_Integer) 0, &mdb__interactive_query__MaybeHandle_4);
    }
    if (((MR_tag((MR_Word) mdb__interactive_query__MaybeHandle_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdb__interactive_query__Msg_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__MaybeHandle_4, (MR_Integer) 0)));
        MR_String mdb__interactive_query__V_76_76;

        {
          mercury__io__write_string_3_p_0((MR_String) "dlopen failed: ");
        }
        {
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], mdb__interactive_query__Msg_5, &mdb__interactive_query__V_76_76);
        }
        {
          mercury__io__write_string_3_p_0(mdb__interactive_query__V_76_76);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    else
      {
        MR_Word mdb__interactive_query__Handle_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__MaybeHandle_4, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__MaybeQuery_8;
        MR_Word mdb__interactive_query__Result_11;

        {
          mdb__dl__mercury_sym_5_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], mdb__interactive_query__Handle_6, (MR_Word) &mdb__interactive_query_scalar_common_7[0], &mdb__interactive_query__MaybeQuery_8);
        }
        if (((MR_tag((MR_Word) mdb__interactive_query__MaybeQuery_8)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String mdb__interactive_query__Msg_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__MaybeQuery_8, (MR_Integer) 0)));
            MR_String mdb__interactive_query__V_54_54;

            {
              mercury__io__write_string_3_p_0((MR_String) "dlsym failed: ");
            }
            {
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], mdb__interactive_query__Msg_47, &mdb__interactive_query__V_54_54);
            }
            {
              mercury__io__write_string_3_p_0(mdb__interactive_query__V_54_54);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
            MR_Word mdb__interactive_query__QueryPred0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__MaybeQuery_8, (MR_Integer) 0)));
            MR_Word mdb__interactive_query__QueryPred_10;
            void MR_CALL (* mdb__interactive_query__func_0)(MR_Box, MR_Box, MR_Box *);
            MR_Box mdb__interactive_query__conv1_STATE_VARIABLE_IO_33_33;

{
#define MR_PROC_LABEL mdb__interactive_query__dynamically_load_and_run_2_p_0

	MR_Word X;
	MR_Word Y;

	X =  mdb__interactive_query__QueryPred0_9 ;
		{

    Y = X


		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__QueryPred_10  = Y;
}
            mdb__interactive_query__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdb__interactive_query__QueryPred_10, (MR_Integer) 1)));
            {
              mdb__interactive_query__func_0(((MR_Box) mdb__interactive_query__QueryPred_10), ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv1_STATE_VARIABLE_IO_33_33);
            }
          }
        {
          mdb__dl__close_4_p_0(mdb__interactive_query__Handle_6, &mdb__interactive_query__Result_11);
        }
        if ((mdb__interactive_query__Result_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String mdb__interactive_query__CloseMsg_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_11, (MR_Integer) 0)));
            MR_String mdb__interactive_query__V_65_65;

            {
              mercury__io__write_string_3_p_0((MR_String) "dlclose failed: ");
            }
            {
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], mdb__interactive_query__CloseMsg_12, &mdb__interactive_query__V_65_65);
            }
            {
              mercury__io__write_string_3_p_0(mdb__interactive_query__V_65_65);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
      }
  }
}

static MR_String MR_CALL 
mdb__interactive_query__grade_option_0_f_0(void)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__GradeOpt_1;

{
#define MR_PROC_LABEL mdb__interactive_query__grade_option_0_f_0

	MR_String GradeOpt;

		{

    MR_make_aligned_string(GradeOpt, (MR_String) MR_GRADE_OPT);


		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__GradeOpt_1  = GradeOpt;
}
    return mdb__interactive_query__GradeOpt_1;
  }
}

static void MR_CALL 
mdb__interactive_query__compile_file_4_p_0(
  MR_String mdb__interactive_query__Options_5,
  MR_Word * mdb__interactive_query__Succeeded_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_String mdb__interactive_query__Command_8;
    MR_Word mdb__interactive_query__V_11_11;
    MR_Word mdb__interactive_query__V_13_13;
    MR_Word mdb__interactive_query__V_15_15;
    MR_Word mdb__interactive_query__V_17_17;
    MR_Word mdb__interactive_query__V_19_19;
    MR_Word mdb__interactive_query__V_20_20;
    MR_Word mdb__interactive_query__V_22_22;
    MR_String mdb__interactive_query__V_23_23;
    MR_Word mdb__interactive_query__Result_37;

{
#define MR_PROC_LABEL mdb__interactive_query__compile_file_4_p_0

	MR_String GradeOpt;

		{

    MR_make_aligned_string(GradeOpt, (MR_String) MR_GRADE_OPT);


		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__V_23_23  = GradeOpt;
}
    {
      mdb__interactive_query__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_22_22, 0) = ((MR_Box) (mdb__interactive_query__V_23_23));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[6])));
    }
    {
      mdb__interactive_query__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_20_20, 0) = ((MR_Box) ((MR_String) " --grade "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_20_20, 1) = ((MR_Box) (mdb__interactive_query__V_22_22));
    }
    {
      mdb__interactive_query__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_19_19, 0) = ((MR_Box) (mdb__interactive_query__Options_5));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_19_19, 1) = ((MR_Box) (mdb__interactive_query__V_20_20));
    }
    {
      mdb__interactive_query__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_17_17, 0) = ((MR_Box) ((MR_String) "--allow-undefined "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_17_17, 1) = ((MR_Box) (mdb__interactive_query__V_19_19));
    }
    {
      mdb__interactive_query__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_15_15, 0) = ((MR_Box) ((MR_String) "--output-compile-error-lines 10000 "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_15_15, 1) = ((MR_Box) (mdb__interactive_query__V_17_17));
    }
    {
      mdb__interactive_query__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_13_13, 0) = ((MR_Box) ((MR_String) "--no-warn-simple-code --no-warn-det-decls-too-lax "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_13_13, 1) = ((MR_Box) (mdb__interactive_query__V_15_15));
    }
    {
      mdb__interactive_query__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_11_11, 0) = ((MR_Box) ((MR_String) "mmc --infer-all --no-verbose-make -O0 --no-c-optimize "));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_11_11, 1) = ((MR_Box) (mdb__interactive_query__V_13_13));
    }
    {
      mercury__string__append_list_2_p_0(mdb__interactive_query__V_11_11, &mdb__interactive_query__Command_8);
    }
    {
      mercury__io__call_system_4_p_0(mdb__interactive_query__Command_8, &mdb__interactive_query__Result_37);
    }
    if (((MR_tag((MR_Word) mdb__interactive_query__Result_37)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "Error: unable to invoke the compiler.\n");
        }
        *mdb__interactive_query__Succeeded_6 = (MR_Integer) 0;
      }
    else
      {
        MR_Integer mdb__interactive_query__Status_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Result_37, (MR_Integer) 0)));

        mdb__interactive_query__succeeded = (mdb__interactive_query__Status_38 == (MR_Integer) 0);
        if (mdb__interactive_query__succeeded)
          *mdb__interactive_query__Succeeded_6 = (MR_Integer) 1;
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "Compilation error(s) occurred.\n");
            }
            *mdb__interactive_query__Succeeded_6 = (MR_Integer) 0;
          }
      }
  }
}

static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mercury__term_io__quote_atom_3_p_0(((MR_String) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0(
  MR_Word mdb__interactive_query__Out_5,
  MR_Word mdb__interactive_query__Imports_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mercury__io__write_string_4_p_0(mdb__interactive_query__Out_5, (MR_String) ":- import_module ");
    }
    {
      mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__Out_5, mdb__interactive_query__Imports_6, (MR_String) ", ", (MR_Word) &mdb__interactive_query_scalar_common_5[1]);
    }
    {
      mercury__io__write_string_4_p_0(mdb__interactive_query__Out_5, (MR_String) ".\n");
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_one_var_4_p_0(
  MR_Word mdb__interactive_query__VarSet_5,
  MR_Word mdb__interactive_query__Var_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mercury__term_io__write_variable_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, mdb__interactive_query__Var_6, mdb__interactive_query__VarSet_5);
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_args_4_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mdb__interactive_query__write_one_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_Word) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_args_4_p_0(
  MR_Word mdb__interactive_query__Vars_5,
  MR_Word mdb__interactive_query__VarSet_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    if ((mdb__interactive_query__Vars_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word mdb__interactive_query__V_15_15;

        {
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
        {
          mdb__interactive_query__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 1) = ((MR_Box) (mdb__interactive_query__write_args_4_p_0_1));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 3) = ((MR_Box) (mdb__interactive_query__VarSet_6));
        }
        {
          mercury__io__write_list_5_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[0], mdb__interactive_query__Vars_5, (MR_String) ", ", mdb__interactive_query__V_15_15);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
  }
}

static void MR_CALL 
mdb__interactive_query__write_code_to_print_one_var_4_p_0(
  MR_Word mdb__interactive_query__VarSet_5,
  MR_Word mdb__interactive_query__Var_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__TypeCtorInfo_18_18;

    {
      mercury__io__write_string_3_p_0((MR_String) "io.write_string(\"");
    }
    mdb__interactive_query__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    {
      mercury__term_io__write_variable_4_p_0(mdb__interactive_query__TypeCtorInfo_18_18, mdb__interactive_query__Var_6, mdb__interactive_query__VarSet_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " = \"), io.write_cc(");
    }
    {
      mercury__term_io__write_variable_4_p_0(mdb__interactive_query__TypeCtorInfo_18_18, mdb__interactive_query__Var_6, mdb__interactive_query__VarSet_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "), io.write_string(\", \"), ");
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_line_directive_2_p_0(void)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Integer mdb__interactive_query__LineNum_4;

    {
      mercury__io__write_string_3_p_0((MR_String) "\n#");
    }
    {
      mercury__io__get_line_number_3_p_0(&mdb__interactive_query__LineNum_4);
    }
    {
      mercury__io__write_int_3_p_0(mdb__interactive_query__LineNum_4);
    }
    {
      mercury__io__nl_2_p_0();
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_2(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mdb__interactive_query__write_code_to_print_one_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_Word) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mdb__interactive_query__write_code_to_print_one_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_Word) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0(
  MR_Word mdb__interactive_query__HeadVar__1_1)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__QueryType_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mdb__interactive_query__Imports_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mdb__interactive_query__Term_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 2)));
    MR_Word mdb__interactive_query__VarSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 3)));
    MR_Word mdb__interactive_query__Out_9;
    MR_Word mdb__interactive_query__V_17_17;

    {
      mercury__io__write_string_3_p_0((MR_String) "\n        :- module mdb_query.\n        :- interface.\n        :- import_module io.\n        :- pred run(io.state::di, io.state::uo) is cc_multi.\n        :- impleme" "ntation.\n        ");
    }
    {
      mercury__io__output_stream_3_p_0(&mdb__interactive_query__Out_9);
    }
    {
      mdb__interactive_query__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_17_17, 0) = ((MR_Box) ((MR_String) "solutions"));
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_17_17, 1) = ((MR_Box) (mdb__interactive_query__Imports_5));
    }
    {
      mdb__interactive_query__write_import_list_4_p_0(mdb__interactive_query__Out_9, mdb__interactive_query__V_17_17);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n            :- pragma source_file(\"<stdin>\").\n            run -->\n    ");
    }
    switch (mdb__interactive_query__QueryType_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word mdb__interactive_query__TypeCtorInfo_84_84 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
          MR_Word mdb__interactive_query__TypeInfo_85_85;
          MR_Word mdb__interactive_query__V_31_31;
          MR_Word mdb__interactive_query__Vars0_76;
          MR_Word mdb__interactive_query__Vars_77;
          MR_Box mdb__interactive_query__conv0_STATE_VARIABLE_IO_32_32;

          {
            mercury__term__vars_2_p_0(mdb__interactive_query__TypeCtorInfo_84_84, mdb__interactive_query__Term_6, &mdb__interactive_query__Vars0_76);
          }
          mdb__interactive_query__TypeInfo_85_85 = (MR_Word) &mdb__interactive_query_scalar_common_1[0];
          {
            mercury__list__remove_dups_2_p_0(mdb__interactive_query__TypeInfo_85_85, mdb__interactive_query__Vars0_76, &mdb__interactive_query__Vars_77);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(if { query");
          }
          {
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_77, mdb__interactive_query__VarSet_7);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " } then\n");
          }
          {
            mdb__interactive_query__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_31_31, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_31_31, 1) = ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_1));
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_31_31, 3) = ((MR_Box) (mdb__interactive_query__VarSet_7));
          }
          {
            mercury__list__foldl_4_p_2(mdb__interactive_query__TypeInfo_85_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mdb__interactive_query__V_31_31, mdb__interactive_query__Vars_77, ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv0_STATE_VARIABLE_IO_32_32);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n                    io.write_string(\"true.\\n\")\n                else\n                    io.write_string(\"No solution.\\n\")\n                ).\n        ");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "query");
          }
          {
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_77, mdb__interactive_query__VarSet_7);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " :-\n");
          }
          {
            mdb__interactive_query__write_line_directive_2_p_0();
          }
          {
            mercury__term_io__write_term_4_p_0(mdb__interactive_query__TypeCtorInfo_84_84, mdb__interactive_query__VarSet_7, mdb__interactive_query__Term_6);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " .\n");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mdb__interactive_query__write_line_directive_2_p_0();
          }
          {
            mercury__term_io__write_term_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, mdb__interactive_query__VarSet_7, mdb__interactive_query__Term_6);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " .\n");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word mdb__interactive_query__TypeCtorInfo_78_78 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
          MR_Word mdb__interactive_query__TypeInfo_79_79;
          MR_Word mdb__interactive_query__Vars0_10;
          MR_Word mdb__interactive_query__Vars_11;
          MR_Word mdb__interactive_query__V_57_57;
          MR_Box mdb__interactive_query__conv1_STATE_VARIABLE_IO_58_58;

          {
            mercury__term__vars_2_p_0(mdb__interactive_query__TypeCtorInfo_78_78, mdb__interactive_query__Term_6, &mdb__interactive_query__Vars0_10);
          }
          mdb__interactive_query__TypeInfo_79_79 = (MR_Word) &mdb__interactive_query_scalar_common_1[0];
          {
            mercury__list__remove_dups_2_p_0(mdb__interactive_query__TypeInfo_79_79, mdb__interactive_query__Vars0_10, &mdb__interactive_query__Vars_11);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n            unsorted_aggregate(\n                (pred(res");
          }
          {
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "::out) is nondet :-\n            query");
          }
          {
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "),");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "(pred(res");
          }
          {
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "::in, di, uo) is cc_multi -->\n            ");
          }
          {
            mdb__interactive_query__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 1) = ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_2));
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 3) = ((MR_Box) (mdb__interactive_query__VarSet_7));
          }
          {
            mercury__list__foldl_4_p_2(mdb__interactive_query__TypeInfo_79_79, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mdb__interactive_query__V_57_57, mdb__interactive_query__Vars_11, ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv1_STATE_VARIABLE_IO_58_58);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n                    io.write_string(\"true ;\n\"))\n                ),\n                io.write_string(\"fail.\n\"),\n                io.write_string(\"No (more) soluti" "ons.\n\").\n\n            :- type res");
          }
          {
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " ---> res");
          }
          {
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n            query");
          }
          {
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " :- ");
          }
          {
            mdb__interactive_query__write_line_directive_2_p_0();
          }
          {
            mercury__term_io__write_term_4_p_0(mdb__interactive_query__TypeCtorInfo_78_78, mdb__interactive_query__VarSet_7, mdb__interactive_query__Term_6);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) " .\n");
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__interactive_query__run_query_4_p_0(
  MR_String mdb__interactive_query__Options_5,
  MR_Word mdb__interactive_query__Program_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;
    MR_Word mdb__interactive_query__MaybeMercuryOptions_9;

    {
      mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", &mdb__interactive_query__MaybeMercuryOptions_9);
    }
    if ((mdb__interactive_query__MaybeMercuryOptions_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "Unable to unset MERCURY_OPTIONS environment variable");
        }
      }
    else
      {
        MR_String mdb__interactive_query__MercuryOptions_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__MaybeMercuryOptions_9, (MR_Integer) 0)));
        MR_Word mdb__interactive_query__Succeeded_11;
        MR_Word mdb__interactive_query__Stream_34;
        MR_Word mdb__interactive_query__OldStream_35;
        MR_Word mdb__interactive_query__Result_47;
        MR_Word mdb__interactive_query__V_36_36;

        {
          mercury__io__set_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", (MR_String) "");
        }
        {
          mercury__io__open_output_4_p_0((MR_String) "mdb_query.m", &mdb__interactive_query__Result_47);
        }
        if (((MR_tag((MR_Word) mdb__interactive_query__Result_47)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word mdb__interactive_query__Error_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_47, (MR_Integer) 0)));
            MR_String mdb__interactive_query__Progname_50;
            MR_String mdb__interactive_query__ErrorMessage_51;
            MR_String mdb__interactive_query__Message_52;
            MR_Word mdb__interactive_query__V_56_56;
            MR_Word mdb__interactive_query__V_57_57;
            MR_Word mdb__interactive_query__V_59_59;
            MR_Word mdb__interactive_query__V_61_61;
            MR_Word mdb__interactive_query__V_62_62;
            MR_Word mdb__interactive_query__V_64_64;

            {
              mercury__io__progname_4_p_0((MR_String) "interactive", &mdb__interactive_query__Progname_50);
            }
            {
              mercury__io__error_message_2_p_0(mdb__interactive_query__Error_49, &mdb__interactive_query__ErrorMessage_51);
            }
            {
              mdb__interactive_query__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_64_64, 0) = ((MR_Box) (mdb__interactive_query__ErrorMessage_51));
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[4])));
            }
            {
              mdb__interactive_query__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_62_62, 0) = ((MR_Box) ((MR_String) "\' for output:\n\t"));
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_62_62, 1) = ((MR_Box) (mdb__interactive_query__V_64_64));
            }
            {
              mdb__interactive_query__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_61_61, 0) = ((MR_Box) ((MR_String) "mdb_query.m"));
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_61_61, 1) = ((MR_Box) (mdb__interactive_query__V_62_62));
            }
            {
              mdb__interactive_query__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_59_59, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_59_59, 1) = ((MR_Box) (mdb__interactive_query__V_61_61));
            }
            {
              mdb__interactive_query__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_57_57, 0) = ((MR_Box) ((MR_String) ": "));
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_57_57, 1) = ((MR_Box) (mdb__interactive_query__V_59_59));
            }
            {
              mdb__interactive_query__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_56_56, 0) = ((MR_Box) (mdb__interactive_query__Progname_50));
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_56_56, 1) = ((MR_Box) (mdb__interactive_query__V_57_57));
            }
            {
              mercury__string__append_list_2_p_0(mdb__interactive_query__V_56_56, &mdb__interactive_query__Message_52);
            }
            {
              mercury__io__write_string_3_p_0(mdb__interactive_query__Message_52);
            }
            {
              mercury__io__stdout_stream_3_p_0(&mdb__interactive_query__Stream_34);
            }
          }
        else
          mdb__interactive_query__Stream_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Result_47, (MR_Integer) 0)));
        {
          mercury__io__set_output_stream_4_p_0(mdb__interactive_query__Stream_34, &mdb__interactive_query__OldStream_35);
        }
        {
          mdb__interactive_query__write_prog_to_stream_3_p_0(mdb__interactive_query__Program_6);
        }
        {
          mercury__io__set_output_stream_4_p_0(mdb__interactive_query__OldStream_35, &mdb__interactive_query__V_36_36);
        }
        {
          mercury__io__close_output_3_p_0(mdb__interactive_query__Stream_34);
        }
        {
          mdb__interactive_query__compile_file_4_p_0(mdb__interactive_query__Options_5, &mdb__interactive_query__Succeeded_11);
        }
        switch (mdb__interactive_query__Succeeded_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mdb__interactive_query__dynamically_load_and_run_2_p_0();
            }
            break;
        }
        {
          mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0();
        }
        {
          mercury__io__set_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", mdb__interactive_query__MercuryOptions_10);
        }
      }
  }
}

static MR_bool MR_CALL 
mdb__interactive_query__term_to_list_2_p_0(
  MR_Word mdb__interactive_query__HeadVar__1_1,
  MR_Word * mdb__interactive_query__HeadVar__2_2)
{
  {
    MR_bool mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
    MR_Word mdb__interactive_query__V_21_21;
    MR_Word mdb__interactive_query__V_22_22;
    MR_String mdb__interactive_query__V_23_23;
    MR_Word mdb__interactive_query__V_20_20;

    if (mdb__interactive_query__succeeded)
      {
        mdb__interactive_query__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
        mdb__interactive_query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 1)));
        mdb__interactive_query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 2)));
        mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_22_22)) == (MR_mktag((MR_Integer) 0)));
        if (mdb__interactive_query__succeeded)
          {
            mdb__interactive_query__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_22_22, (MR_Integer) 0)));
            if ((mdb__interactive_query__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_23_23, (MR_String) "[]") == 0);
                if (mdb__interactive_query__succeeded)
                  {
                    *mdb__interactive_query__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mdb__interactive_query__succeeded = MR_TRUE;
                  }
              }
            else
              {
                MR_String mdb__interactive_query__Module_7;
                MR_Word mdb__interactive_query__Rest_9;
                MR_Word mdb__interactive_query__Modules_11;
                MR_Word mdb__interactive_query__V_15_15;
                MR_Word mdb__interactive_query__V_16_16;
                MR_Word mdb__interactive_query__V_17_17;
                MR_Word mdb__interactive_query__V_18_18;
                MR_Word mdb__interactive_query__V_19_19;
                MR_Word mdb__interactive_query___C1_8;

                mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_23_23, (MR_String) "[|]") == 0);
                if (mdb__interactive_query__succeeded)
                  {
                    mdb__interactive_query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_21_21, (MR_Integer) 0)));
                    mdb__interactive_query__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_21_21, (MR_Integer) 1)));
                    mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_15_15)) == (MR_mktag((MR_Integer) 0)));
                    if (mdb__interactive_query__succeeded)
                      {
                        mdb__interactive_query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, (MR_Integer) 0)));
                        mdb__interactive_query__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, (MR_Integer) 1)));
                        mdb__interactive_query___C1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, (MR_Integer) 2)));
                        mdb__interactive_query__succeeded = (mdb__interactive_query__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (mdb__interactive_query__succeeded)
                          {
                            mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_16_16)) == (MR_mktag((MR_Integer) 0)));
                            if (mdb__interactive_query__succeeded)
                              {
                                mdb__interactive_query__Module_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_16_16, (MR_Integer) 0)));
                                mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                                if (mdb__interactive_query__succeeded)
                                  {
                                    mdb__interactive_query__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_18_18, (MR_Integer) 0)));
                                    mdb__interactive_query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_18_18, (MR_Integer) 1)));
                                    mdb__interactive_query__succeeded = (mdb__interactive_query__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                    if (mdb__interactive_query__succeeded)
                                      {
                                        {
                                          mdb__interactive_query__succeeded = mdb__interactive_query__term_to_list_2_p_0(mdb__interactive_query__Rest_9, &mdb__interactive_query__Modules_11);
                                        }
                                        if (mdb__interactive_query__succeeded)
                                          {
                                            {
                                              MR_Word base;
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                              *mdb__interactive_query__HeadVar__2_2 = base;
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__interactive_query__Module_7));
                                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__interactive_query__Modules_11));
                                            }
                                            mdb__interactive_query__succeeded = MR_TRUE;
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return mdb__interactive_query__succeeded;
  }
}

static void MR_CALL 
mdb__interactive_query__send_term_to_socket_4_p_0(
  MR_Word mdb__interactive_query__Term_5,
  MR_Word mdb__interactive_query__SocketStream_6)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    {
      mercury__io__write_4_p_0((MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0, mdb__interactive_query__SocketStream_6, ((MR_Box) (mdb__interactive_query__Term_5)));
    }
    {
      mercury__io__write_string_4_p_0(mdb__interactive_query__SocketStream_6, (MR_String) ".\n");
    }
    {
      mercury__io__flush_output_3_p_0(mdb__interactive_query__SocketStream_6);
    }
  }
}

static void MR_CALL 
mdb__interactive_query__query_2_8_p_0_1(
  MR_Box mdb__interactive_query__closure_arg,
  MR_Box mdb__interactive_query__wrapper_arg_1,
  MR_Box mdb__interactive_query__wrapper_arg_2,
  MR_Box * mdb__interactive_query__wrapper_arg_3)
{
  {
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

    {
      mercury__term_io__quote_atom_3_p_0(((MR_String) mdb__interactive_query__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mdb__interactive_query__query_2_8_p_0(
  MR_Word mdb__interactive_query__QueryType_9,
  MR_Word mdb__interactive_query__Imports_10,
  MR_String mdb__interactive_query__Options_11,
  MR_Word mdb__interactive_query__MDB_Stdin_12,
  MR_Word mdb__interactive_query__MDB_Stdout_13,
  MR_Word mdb__interactive_query__ReadTerm_14)
{
  {
    MR_bool mdb__interactive_query__succeeded;

    switch (MR_tag((MR_Word) mdb__interactive_query__ReadTerm_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__nl_3_p_0(mdb__interactive_query__MDB_Stdout_13);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String mdb__interactive_query__Msg_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__ReadTerm_14, (MR_Integer) 0)));
          MR_Integer mdb__interactive_query___Line_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__interactive_query__ReadTerm_14, (MR_Integer) 1)));

          {
            mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_13, mdb__interactive_query__Msg_16);
          }
          {
            mercury__io__nl_3_p_0(mdb__interactive_query__MDB_Stdout_13);
          }
          {
            mdb__interactive_query__query_7_p_0(mdb__interactive_query__QueryType_9, mdb__interactive_query__Imports_10, mdb__interactive_query__Options_11, mdb__interactive_query__MDB_Stdin_12, mdb__interactive_query__MDB_Stdout_13);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__interactive_query__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__ReadTerm_14, (MR_Integer) 0)));
          MR_Word mdb__interactive_query__Term_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__ReadTerm_14, (MR_Integer) 1)));
          MR_Word mdb__interactive_query__V_28_28;
          MR_String mdb__interactive_query__V_29_29;
          MR_Word mdb__interactive_query__V_30_30;
          MR_Word mdb__interactive_query__V_20_20;

          mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__Term_19)) == (MR_mktag((MR_Integer) 0)));
          if (mdb__interactive_query__succeeded)
            {
              mdb__interactive_query__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_19, (MR_Integer) 0)));
              mdb__interactive_query__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_19, (MR_Integer) 1)));
              mdb__interactive_query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_19, (MR_Integer) 2)));
              mdb__interactive_query__succeeded = (mdb__interactive_query__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (mdb__interactive_query__succeeded)
                {
                  mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_28_28)) == (MR_mktag((MR_Integer) 0)));
                  if (mdb__interactive_query__succeeded)
                    {
                      mdb__interactive_query__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_28_28, (MR_Integer) 0)));
                      mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_29_29, (MR_String) "quit") == 0);
                    }
                }
            }
          if (mdb__interactive_query__succeeded)
            {
              mercury__io__nl_3_p_0(mdb__interactive_query__MDB_Stdout_13);
            }
          else
            {
              MR_String mdb__interactive_query__NewOptions_21;
              MR_Word mdb__interactive_query__V_32_32;
              MR_String mdb__interactive_query__V_33_33;
              MR_Word mdb__interactive_query__V_34_34;
              MR_Word mdb__interactive_query__V_35_35;
              MR_Word mdb__interactive_query__V_36_36;
              MR_Word mdb__interactive_query__V_37_37;
              MR_Word mdb__interactive_query__V_38_38;
              MR_Word mdb__interactive_query__V_23_23;
              MR_Word mdb__interactive_query__V_22_22;

              mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__Term_19)) == (MR_mktag((MR_Integer) 0)));
              if (mdb__interactive_query__succeeded)
                {
                  mdb__interactive_query__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_19, (MR_Integer) 0)));
                  mdb__interactive_query__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_19, (MR_Integer) 1)));
                  mdb__interactive_query__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_19, (MR_Integer) 2)));
                  mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_32_32)) == (MR_mktag((MR_Integer) 0)));
                  if (mdb__interactive_query__succeeded)
                    {
                      mdb__interactive_query__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_32_32, (MR_Integer) 0)));
                      mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_33_33, (MR_String) "options") == 0);
                      if (mdb__interactive_query__succeeded)
                        {
                          mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_34_34)) == (MR_mktag((MR_Integer) 1)));
                          if (mdb__interactive_query__succeeded)
                            {
                              mdb__interactive_query__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_34_34, (MR_Integer) 0)));
                              mdb__interactive_query__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_34_34, (MR_Integer) 1)));
                              mdb__interactive_query__succeeded = (mdb__interactive_query__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              if (mdb__interactive_query__succeeded)
                                {
                                  mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_35_35)) == (MR_mktag((MR_Integer) 0)));
                                  if (mdb__interactive_query__succeeded)
                                    {
                                      mdb__interactive_query__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_35_35, (MR_Integer) 0)));
                                      mdb__interactive_query__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_35_35, (MR_Integer) 1)));
                                      mdb__interactive_query__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_35_35, (MR_Integer) 2)));
                                      mdb__interactive_query__succeeded = (mdb__interactive_query__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      if (mdb__interactive_query__succeeded)
                                        {
                                          mdb__interactive_query__succeeded = ((((MR_tag((MR_Word) mdb__interactive_query__V_36_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__interactive_query__V_36_36, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                          if (mdb__interactive_query__succeeded)
                                            mdb__interactive_query__NewOptions_21 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__interactive_query__V_36_36, (MR_Integer) 1)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              if (mdb__interactive_query__succeeded)
                {
                  MR_String mdb__interactive_query__V_59_59;

                  {
                    mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_13, (MR_String) "Compilation options: ");
                  }
                  {
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], mdb__interactive_query__NewOptions_21, &mdb__interactive_query__V_59_59);
                  }
                  {
                    mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_13, mdb__interactive_query__V_59_59);
                  }
                  {
                    mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_13, (MR_String) "\n");
                  }
                  {
                    mdb__interactive_query__query_7_p_0(mdb__interactive_query__QueryType_9, mdb__interactive_query__Imports_10, mdb__interactive_query__NewOptions_21, mdb__interactive_query__MDB_Stdin_12, mdb__interactive_query__MDB_Stdout_13);
                  }
                }
              else
                {
                  MR_Word mdb__interactive_query__ModuleList_24;

                  {
                    mdb__interactive_query__succeeded = mdb__interactive_query__term_to_list_2_p_0(mdb__interactive_query__Term_19, &mdb__interactive_query__ModuleList_24);
                  }
                  if (mdb__interactive_query__succeeded)
                    {
                      MR_Word mdb__interactive_query__NewImports_25;

                      {
                        mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__Imports_10, mdb__interactive_query__ModuleList_24, &mdb__interactive_query__NewImports_25);
                      }
                      {
                        mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_13, (MR_String) ":- import_module ");
                      }
                      {
                        mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__MDB_Stdout_13, mdb__interactive_query__NewImports_25, (MR_String) ", ", (MR_Word) &mdb__interactive_query_scalar_common_5[0]);
                      }
                      {
                        mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_13, (MR_String) ".\n");
                      }
                      {
                        mdb__interactive_query__query_7_p_0(mdb__interactive_query__QueryType_9, mdb__interactive_query__NewImports_25, mdb__interactive_query__Options_11, mdb__interactive_query__MDB_Stdin_12, mdb__interactive_query__MDB_Stdout_13);
                      }
                    }
                  else
                    {
                      MR_Word mdb__interactive_query__V_48_48;

                      {
                        mercury__io__flush_output_3_p_0(mdb__interactive_query__MDB_Stdout_13);
                      }
                      {
                        mdb__interactive_query__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mdb__interactive_query__V_48_48, 0) = ((MR_Box) (mdb__interactive_query__QueryType_9));
                        MR_hl_field(MR_mktag(0), mdb__interactive_query__V_48_48, 1) = ((MR_Box) (mdb__interactive_query__Imports_10));
                        MR_hl_field(MR_mktag(0), mdb__interactive_query__V_48_48, 2) = ((MR_Box) (mdb__interactive_query__Term_19));
                        MR_hl_field(MR_mktag(0), mdb__interactive_query__V_48_48, 3) = ((MR_Box) (mdb__interactive_query__VarSet_18));
                      }
                      {
                        mdb__interactive_query__run_query_4_p_0(mdb__interactive_query__Options_11, mdb__interactive_query__V_48_48);
                      }
                      {
                        mdb__interactive_query__query_7_p_0(mdb__interactive_query__QueryType_9, mdb__interactive_query__Imports_10, mdb__interactive_query__Options_11, mdb__interactive_query__MDB_Stdin_12, mdb__interactive_query__MDB_Stdout_13);
                      }
                    }
                }
            }
        }
        break;
    }
  }
}

void MR_CALL 
mdb__interactive_query__query_external_7_p_0(
  MR_Word mdb__interactive_query__QueryType_8,
  MR_Word mdb__interactive_query__Imports_9,
  MR_String mdb__interactive_query__Options_10,
  MR_Word mdb__interactive_query__SocketIn_11,
  MR_Word mdb__interactive_query__SocketOut_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__interactive_query__succeeded;
        MR_Word mdb__interactive_query__OldStdin_14;
        MR_Word mdb__interactive_query__Result_15;
        MR_Word mdb__interactive_query__V_16_16;

        {
          mercury__io__set_input_stream_4_p_0(mdb__interactive_query__SocketIn_11, &mdb__interactive_query__OldStdin_14);
        }
        {
          mercury__term_io__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &mdb__interactive_query__Result_15);
        }
        {
          mercury__io__set_input_stream_4_p_0(mdb__interactive_query__OldStdin_14, &mdb__interactive_query__V_16_16);
        }
        switch (MR_tag((MR_Word) mdb__interactive_query__Result_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_4_p_0((MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0, mdb__interactive_query__SocketOut_12, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))));
              }
              {
                mercury__io__write_string_4_p_0(mdb__interactive_query__SocketOut_12, (MR_String) ".\n");
              }
              {
                mercury__io__flush_output_3_p_0(mdb__interactive_query__SocketOut_12);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mdb__interactive_query__ErrorMsg_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_15, (MR_Integer) 0)));
              MR_Word mdb__interactive_query__V_55_55;
              MR_Integer mdb__interactive_query___Line_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_15, (MR_Integer) 1)));

              {
                mdb__interactive_query__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), mdb__interactive_query__V_55_55, 0) = ((MR_Box) (mdb__interactive_query__ErrorMsg_17));
              }
              {
                mercury__io__write_4_p_0((MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0, mdb__interactive_query__SocketOut_12, ((MR_Box) (mdb__interactive_query__V_55_55)));
              }
              {
                mercury__io__write_string_4_p_0(mdb__interactive_query__SocketOut_12, (MR_String) ".\n");
              }
              {
                mercury__io__flush_output_3_p_0(mdb__interactive_query__SocketOut_12);
              }
              /* direct tailcall eliminated */
              {
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdb__interactive_query__VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__Result_15, (MR_Integer) 0)));
              MR_Word mdb__interactive_query__Term_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__Result_15, (MR_Integer) 1)));
              MR_Word mdb__interactive_query__V_32_32;
              MR_String mdb__interactive_query__V_33_33;
              MR_Word mdb__interactive_query__V_34_34;
              MR_Word mdb__interactive_query__V_21_21;

              mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__Term_20)) == (MR_mktag((MR_Integer) 0)));
              if (mdb__interactive_query__succeeded)
                {
                  mdb__interactive_query__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_20, (MR_Integer) 0)));
                  mdb__interactive_query__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_20, (MR_Integer) 1)));
                  mdb__interactive_query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_20, (MR_Integer) 2)));
                  mdb__interactive_query__succeeded = (mdb__interactive_query__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (mdb__interactive_query__succeeded)
                    {
                      mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_32_32)) == (MR_mktag((MR_Integer) 0)));
                      if (mdb__interactive_query__succeeded)
                        {
                          mdb__interactive_query__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_32_32, (MR_Integer) 0)));
                          mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_33_33, (MR_String) "quit") == 0);
                        }
                    }
                }
              if (mdb__interactive_query__succeeded)
                {
                  {
                    mercury__io__write_4_p_0((MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0, mdb__interactive_query__SocketOut_12, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))));
                  }
                  {
                    mercury__io__write_string_4_p_0(mdb__interactive_query__SocketOut_12, (MR_String) ".\n");
                  }
                  {
                    mercury__io__flush_output_3_p_0(mdb__interactive_query__SocketOut_12);
                  }
                }
              else
                {
                  MR_String mdb__interactive_query__NewOptions_22;
                  MR_Word mdb__interactive_query__V_37_37;
                  MR_String mdb__interactive_query__V_38_38;
                  MR_Word mdb__interactive_query__V_39_39;
                  MR_Word mdb__interactive_query__V_40_40;
                  MR_Word mdb__interactive_query__V_41_41;
                  MR_Word mdb__interactive_query__V_42_42;
                  MR_Word mdb__interactive_query__V_43_43;
                  MR_Word mdb__interactive_query__V_24_24;
                  MR_Word mdb__interactive_query__V_23_23;

                  mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__Term_20)) == (MR_mktag((MR_Integer) 0)));
                  if (mdb__interactive_query__succeeded)
                    {
                      mdb__interactive_query__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_20, (MR_Integer) 0)));
                      mdb__interactive_query__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_20, (MR_Integer) 1)));
                      mdb__interactive_query__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_20, (MR_Integer) 2)));
                      mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_37_37)) == (MR_mktag((MR_Integer) 0)));
                      if (mdb__interactive_query__succeeded)
                        {
                          mdb__interactive_query__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_37_37, (MR_Integer) 0)));
                          mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_38_38, (MR_String) "options") == 0);
                          if (mdb__interactive_query__succeeded)
                            {
                              mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_39_39)) == (MR_mktag((MR_Integer) 1)));
                              if (mdb__interactive_query__succeeded)
                                {
                                  mdb__interactive_query__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_39_39, (MR_Integer) 0)));
                                  mdb__interactive_query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_39_39, (MR_Integer) 1)));
                                  mdb__interactive_query__succeeded = (mdb__interactive_query__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                  if (mdb__interactive_query__succeeded)
                                    {
                                      mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_40_40)) == (MR_mktag((MR_Integer) 0)));
                                      if (mdb__interactive_query__succeeded)
                                        {
                                          mdb__interactive_query__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_40_40, (MR_Integer) 0)));
                                          mdb__interactive_query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_40_40, (MR_Integer) 1)));
                                          mdb__interactive_query__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_40_40, (MR_Integer) 2)));
                                          mdb__interactive_query__succeeded = (mdb__interactive_query__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                          if (mdb__interactive_query__succeeded)
                                            {
                                              mdb__interactive_query__succeeded = ((((MR_tag((MR_Word) mdb__interactive_query__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__interactive_query__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 0)));
                                              if (mdb__interactive_query__succeeded)
                                                mdb__interactive_query__NewOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__interactive_query__V_41_41, (MR_Integer) 1)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                  if (mdb__interactive_query__succeeded)
                    {
                      {
                        mdb__interactive_query__send_term_to_socket_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__interactive_query__SocketOut_12);
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_String mdb__interactive_query__Options__tmp_copy_10 = mdb__interactive_query__NewOptions_22;

                        mdb__interactive_query__Options_10 = mdb__interactive_query__Options__tmp_copy_10;
                      }
                      continue;
                    }
                  else
                    {
                      MR_Word mdb__interactive_query__ModuleList_25;

                      {
                        mdb__interactive_query__succeeded = mdb__interactive_query__term_to_list_2_p_0(mdb__interactive_query__Term_20, &mdb__interactive_query__ModuleList_25);
                      }
                      if (mdb__interactive_query__succeeded)
                        {
                          MR_Word mdb__interactive_query__NewImports_26;
                          MR_Word mdb__interactive_query__V_47_47;

                          {
                            mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__Imports_9, mdb__interactive_query__ModuleList_25, &mdb__interactive_query__NewImports_26);
                          }
                          {
                            mdb__interactive_query__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mdb__interactive_query__V_47_47, 0) = ((MR_Box) (mdb__interactive_query__NewImports_26));
                          }
                          {
                            mdb__interactive_query__send_term_to_socket_4_p_0(mdb__interactive_query__V_47_47, mdb__interactive_query__SocketOut_12);
                          }
                          /* direct tailcall eliminated */
                          {
                            MR_Word mdb__interactive_query__Imports__tmp_copy_9 = mdb__interactive_query__NewImports_26;

                            mdb__interactive_query__Imports_9 = mdb__interactive_query__Imports__tmp_copy_9;
                          }
                          continue;
                        }
                      else
                        {
                          MR_Word mdb__interactive_query__V_50_50;

                          {
                            mdb__interactive_query__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_50_50, 0) = ((MR_Box) (mdb__interactive_query__QueryType_8));
                            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_50_50, 1) = ((MR_Box) (mdb__interactive_query__Imports_9));
                            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_50_50, 2) = ((MR_Box) (mdb__interactive_query__Term_20));
                            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_50_50, 3) = ((MR_Box) (mdb__interactive_query__VarSet_19));
                          }
                          {
                            mdb__interactive_query__run_query_4_p_0(mdb__interactive_query__Options_10, mdb__interactive_query__V_50_50);
                          }
                          {
                            mdb__interactive_query__send_term_to_socket_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__interactive_query__SocketOut_12);
                          }
                          /* direct tailcall eliminated */
                          {
                          }
                          continue;
                        }
                    }
                }
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mdb__interactive_query__query_7_p_0(
  MR_Word mdb__interactive_query__QueryType_8,
  MR_Word mdb__interactive_query__Imports_9,
  MR_String mdb__interactive_query__Options_10,
  MR_Word mdb__interactive_query__MDB_Stdin_11,
  MR_Word mdb__interactive_query__MDB_Stdout_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__interactive_query__succeeded;
        MR_Word mdb__interactive_query__Result_14;
        MR_String mdb__interactive_query__V_22_22;

        switch (mdb__interactive_query__QueryType_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mdb__interactive_query__V_22_22 = (MR_String) "\?- ";
            break;
          case (MR_Integer) 2:
            mdb__interactive_query__V_22_22 = (MR_String) "run <-- ";
            break;
          case (MR_Integer) 0:
            mdb__interactive_query__V_22_22 = (MR_String) "\?- ";
            break;
        }
        {
          mdb__util__trace_getline_6_p_0(mdb__interactive_query__V_22_22, &mdb__interactive_query__Result_14, mdb__interactive_query__MDB_Stdin_11, mdb__interactive_query__MDB_Stdout_12);
        }
        switch (MR_tag((MR_Word) mdb__interactive_query__Result_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__nl_3_p_0(mdb__interactive_query__MDB_Stdout_12);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mdb__interactive_query__Line_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_14, (MR_Integer) 0)));
              MR_Word mdb__interactive_query__ReadTerm_19;
              MR_Word mdb__interactive_query__V_18_18;

              {
                mercury__parser__read_term_from_string_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_String) "", mdb__interactive_query__Line_17, &mdb__interactive_query__V_18_18, &mdb__interactive_query__ReadTerm_19);
              }
              {
                mdb__interactive_query__query_2_8_p_0(mdb__interactive_query__QueryType_8, mdb__interactive_query__Imports_9, mdb__interactive_query__Options_10, mdb__interactive_query__MDB_Stdin_11, mdb__interactive_query__MDB_Stdout_12, mdb__interactive_query__ReadTerm_19);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdb__interactive_query__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__Result_14, (MR_Integer) 0)));
              MR_String mdb__interactive_query__Msg_16;

              {
                mercury__io__error_message_2_p_0(mdb__interactive_query__Error_15, &mdb__interactive_query__Msg_16);
              }
              {
                mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_12, mdb__interactive_query__Msg_16);
              }
              {
                mercury__io__nl_3_p_0(mdb__interactive_query__MDB_Stdout_12);
              }
              /* direct tailcall eliminated */
              {
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void mercury__mdb__interactive_query__init(void)
{
}

void mercury__mdb__interactive_query__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_imports_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_io_pred_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_options_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_prog_0);
	MR_register_type_ctor_info(&mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_type_0);
}

void mercury__mdb__interactive_query__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.interactive_query. */
