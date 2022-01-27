/*
** Automatically generated from `interactive_query.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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


#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
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
#include "mdb.dl.mih"
#include "mdb.name_mangle.mih"
#include "mdb.util.mih"
#include "mdbcomp.prim_data.mih"




#line 72 "mdb.interactive_query.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 75 "mdb.interactive_query.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 78 "mdb.interactive_query.c"
static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0;

#line 81 "mdb.interactive_query.c"
static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0;

#line 84 "mdb.interactive_query.c"
static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_1[1];

#line 87 "mdb.interactive_query.c"
static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1;

#line 90 "mdb.interactive_query.c"
static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2;

#line 93 "mdb.interactive_query.c"
static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3;

#line 96 "mdb.interactive_query.c"
static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_4[1];

#line 99 "mdb.interactive_query.c"
static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4;

#line 102 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_0[3];

#line 105 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_1[1];

#line 108 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_2[1];

#line 111 "mdb.interactive_query.c"
static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_interactive_query_response_0[3];

#line 114 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_interactive_query_response_0[5];

#line 117 "mdb.interactive_query.c"
static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_interactive_query_response_0[5];

#line 120 "mdb.interactive_query.c"
static const MR_VA_TypeInfo_Struct2 mdb__interactive_query____vti_pred_2io__type_ctor_info_state_0io__type_ctor_info_state_0;

#line 123 "mdb.interactive_query.c"
static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__term__ti_term_1term__type_ctor_info_generic_0;

#line 126 "mdb.interactive_query.c"
static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 129 "mdb.interactive_query.c"
static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_prog_0_0[4];

#line 132 "mdb.interactive_query.c"
static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0;

#line 135 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0[1];

#line 138 "mdb.interactive_query.c"
static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_prog_0[1];

#line 141 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_prog_0[1];

#line 144 "mdb.interactive_query.c"
static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_prog_0[1];

#line 147 "mdb.interactive_query.c"
static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0;

#line 150 "mdb.interactive_query.c"
static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1;

#line 153 "mdb.interactive_query.c"
static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2;

#line 156 "mdb.interactive_query.c"
static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_value_ordered_query_type_0[3];

#line 159 "mdb.interactive_query.c"
static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_name_ordered_query_type_0[3];

#line 162 "mdb.interactive_query.c"
static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_query_type_0[3];

#line 165 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0_10001(
#line 168 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 170 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2);

#line 173 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____imports_0_0_10001(
#line 176 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 178 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 180 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3);

#line 183 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0_10001(
#line 186 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 188 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2);

#line 191 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0_10001(
#line 194 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 196 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 198 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3);

#line 201 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____io_pred_0_0_10001(
#line 204 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 206 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2);

#line 209 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____io_pred_0_0_10001(
#line 212 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 214 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 216 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3);

#line 219 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____options_0_0_10001(
#line 222 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 224 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2);

#line 227 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____options_0_0_10001(
#line 230 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 232 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 234 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3);

#line 237 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0_10001(
#line 240 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 242 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2);

#line 245 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0_10001(
#line 248 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 250 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 252 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3);

#line 255 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0_10001(
#line 258 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 260 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2);

#line 263 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0_10001(
#line 266 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 268 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 270 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3);

#line 493 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0(void);

#line 70 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0(
#line 70 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__1_1,
#line 70 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2,
#line 70 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__3_3);

#line 70 "interactive_query.m"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0(
#line 70 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1,
#line 70 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2);

#line 636 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query____Compare____io_pred_0_0(
#line 636 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__1_1,
#line 636 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2,
#line 636 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__3_3);

#line 636 "interactive_query.m"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____io_pred_0_0(
#line 636 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1,
#line 636 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2);

#line 144 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0(
#line 144 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__1_1,
#line 144 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2,
#line 144 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__3_3);

#line 144 "interactive_query.m"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0(
#line 144 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1,
#line 144 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2);

#line 640 "interactive_query.m"
static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_1_f_0(
#line 640 "interactive_query.m"
  MR_Word mdb__interactive_query__X_1);

#line 574 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__dynamically_load_and_run_2_p_0(void);

#line 508 "interactive_query.m"
static MR_String MR_CALL 
mdb__interactive_query__grade_option_0_f_0(void);

#line 456 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__compile_file_4_p_0(
#line 456 "interactive_query.m"
  MR_String mdb__interactive_query__Options_5,
#line 456 "interactive_query.m"
  MR_Word * mdb__interactive_query__Succeeded_6);

#line 448 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0_1(
#line 448 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 448 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 448 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 448 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3);

#line 443 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0(
#line 443 "interactive_query.m"
  MR_Word mdb__interactive_query__Out_5,
#line 443 "interactive_query.m"
  MR_Word mdb__interactive_query__Imports_6);

#line 438 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_one_var_4_p_0(
#line 438 "interactive_query.m"
  MR_Word mdb__interactive_query__VarSet_5,
#line 438 "interactive_query.m"
  MR_Word mdb__interactive_query__Var_6);

#line 432 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_args_4_p_0_1(
#line 432 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 432 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 432 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 432 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3);

#line 426 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_args_4_p_0(
#line 426 "interactive_query.m"
  MR_Word mdb__interactive_query__Vars_5,
#line 426 "interactive_query.m"
  MR_Word mdb__interactive_query__VarSet_6);

#line 416 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_code_to_print_one_var_4_p_0(
#line 416 "interactive_query.m"
  MR_Word mdb__interactive_query__VarSet_5,
#line 416 "interactive_query.m"
  MR_Word mdb__interactive_query__Var_6);

#line 408 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_line_directive_2_p_0(void);

#line 329 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_2(
#line 329 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 329 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 329 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 329 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3);

#line 383 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_1(
#line 383 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 383 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 383 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 383 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3);

#line 275 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0(
#line 275 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1);

#line 215 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__run_query_4_p_0(
#line 215 "interactive_query.m"
  MR_String mdb__interactive_query__Options_5,
#line 215 "interactive_query.m"
  MR_Word mdb__interactive_query__Program_6);

#line 207 "interactive_query.m"
static MR_bool MR_CALL 
mdb__interactive_query__term_to_list_2_p_0(
#line 207 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1,
#line 207 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__2_2);

#line 193 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__send_term_to_socket_4_p_0(
#line 193 "interactive_query.m"
  MR_Word mdb__interactive_query__Term_5,
#line 193 "interactive_query.m"
  MR_Word mdb__interactive_query__SocketStream_6);

#line 448 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__query_2_8_p_0_1(
#line 448 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 448 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 448 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 448 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3);

#line 93 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__query_2_8_p_0(
#line 93 "interactive_query.m"
  MR_Word mdb__interactive_query__QueryType_9,
#line 93 "interactive_query.m"
  MR_Word mdb__interactive_query__Imports_10,
#line 93 "interactive_query.m"
  MR_String mdb__interactive_query__Options_11,
#line 93 "interactive_query.m"
  MR_Word mdb__interactive_query__MDB_Stdin_12,
#line 93 "interactive_query.m"
  MR_Word mdb__interactive_query__MDB_Stdout_13,
#line 93 "interactive_query.m"
  MR_Word mdb__interactive_query__ReadTerm_14);


static /* final */ const MR_Box mdb__interactive_query_scalar_common_1[7][2];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_2[1][4];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_3[1][6];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_4[2][3];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_5[1][7];

static /* final */ const MR_Box mdb__interactive_query_scalar_common_6[1][1];

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

static /* final */ const MR_Box mdb__interactive_query_scalar_common_3[1][6] = {
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

static /* final */ const MR_Box mdb__interactive_query_scalar_common_4[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_3[0])),
    ((MR_Box) (mdb__interactive_query__query_2_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__interactive_query_scalar_common_3[0])),
    ((MR_Box) (mdb__interactive_query__write_import_list_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_5[1][7] = {
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

static /* final */ const MR_Box mdb__interactive_query_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "mdb_query"))
  },
};

static /* final */ const MR_Box mdb__interactive_query_scalar_common_7[1][5] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_6[0]))),
    ((MR_Box) ((MR_String) "run")),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "mdb.interactive_query.mh"
#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"

#line 151 "interactive_query.m"
void 
ML_query_external(
#line 151 "interactive_query.m"
  MR_Word mdb__interactive_query__QueryType_8,
#line 151 "interactive_query.m"
  MR_Word mdb__interactive_query__Imports_9,
#line 151 "interactive_query.m"
  MR_String mdb__interactive_query__Options_10,
#line 151 "interactive_query.m"
  MR_Word mdb__interactive_query__SocketIn_11,
#line 151 "interactive_query.m"
  MR_Word mdb__interactive_query__SocketOut_12)
#line 151 "interactive_query.m"
{
#line 151 "interactive_query.m"
	mdb__interactive_query__query_external_7_p_0((MR_Word) mdb__interactive_query__QueryType_8, (MR_Word) mdb__interactive_query__Imports_9, (MR_String) mdb__interactive_query__Options_10, (MR_Word) mdb__interactive_query__SocketIn_11, (MR_Word) mdb__interactive_query__SocketOut_12);
}

#line 68 "interactive_query.m"
void 
ML_query(
#line 68 "interactive_query.m"
  MR_Word mdb__interactive_query__QueryType_8,
#line 68 "interactive_query.m"
  MR_Word mdb__interactive_query__Imports_9,
#line 68 "interactive_query.m"
  MR_String mdb__interactive_query__Options_10,
#line 68 "interactive_query.m"
  MR_Word mdb__interactive_query__MDB_Stdin_11,
#line 68 "interactive_query.m"
  MR_Word mdb__interactive_query__MDB_Stdout_12)
#line 68 "interactive_query.m"
{
#line 68 "interactive_query.m"
	mdb__interactive_query__query_7_p_0((MR_Word) mdb__interactive_query__QueryType_8, (MR_Word) mdb__interactive_query__Imports_9, (MR_String) mdb__interactive_query__Options_10, (MR_Word) mdb__interactive_query__MDB_Stdin_11, (MR_Word) mdb__interactive_query__MDB_Stdout_12);
}


#line 671 "mdb.interactive_query.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 679 "mdb.interactive_query.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 687 "mdb.interactive_query.c"
static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 695 "mdb.interactive_query.c"
const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_imports_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____imports_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____imports_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "imports",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 716 "mdb.interactive_query.c"
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

#line 731 "mdb.interactive_query.c"
static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 736 "mdb.interactive_query.c"
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

#line 751 "mdb.interactive_query.c"
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

#line 766 "mdb.interactive_query.c"
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

#line 781 "mdb.interactive_query.c"
static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 786 "mdb.interactive_query.c"
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

#line 801 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_0[3] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3
};

#line 808 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_1[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1
};

#line 813 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_2[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4
};

#line 818 "mdb.interactive_query.c"
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

#line 837 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_interactive_query_response_0[5] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2
};

#line 846 "mdb.interactive_query.c"
static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_interactive_query_response_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 855 "mdb.interactive_query.c"
const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__interactive_query____Unify____interactive_query_response_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____interactive_query_response_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "interactive_query_response",
  {
    mdb__interactive_query__mdb__interactive_query__du_name_ordered_interactive_query_response_0
  },
  {
    mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_interactive_query_response_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__functor_number_map_interactive_query_response_0
};

#line 876 "mdb.interactive_query.c"
static const MR_VA_TypeInfo_Struct2 mdb__interactive_query____vti_pred_2io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 886 "mdb.interactive_query.c"
const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_io_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____io_pred_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____io_pred_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "io_pred",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdb__interactive_query____vti_pred_2io__type_ctor_info_state_0io__type_ctor_info_state_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 907 "mdb.interactive_query.c"
const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__interactive_query____Unify____options_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____options_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "options",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 928 "mdb.interactive_query.c"
static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 936 "mdb.interactive_query.c"
static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 944 "mdb.interactive_query.c"
static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_prog_0_0[4] = {
  (MR_PseudoTypeInfo) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_type_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__term__ti_term_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__varset__ti_varset_1term__type_ctor_info_generic_0
};

#line 952 "mdb.interactive_query.c"
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

#line 967 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0
};

#line 972 "mdb.interactive_query.c"
static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_prog_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0
  }
};

#line 981 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_prog_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0
};

#line 986 "mdb.interactive_query.c"
static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_prog_0[1] = {
  (MR_Integer) 0
};

#line 991 "mdb.interactive_query.c"
const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_prog_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__interactive_query____Unify____prog_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____prog_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "prog",
  {
    mdb__interactive_query__mdb__interactive_query__du_name_ordered_prog_0
  },
  {
    mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_prog_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__functor_number_map_prog_0
};

#line 1012 "mdb.interactive_query.c"
static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0 = {
  (MR_String) "normal_query",
  (MR_Integer) 0
};

#line 1018 "mdb.interactive_query.c"
static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1 = {
  (MR_String) "cc_query",
  (MR_Integer) 1
};

#line 1024 "mdb.interactive_query.c"
static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2 = {
  (MR_String) "io_query",
  (MR_Integer) 2
};

#line 1030 "mdb.interactive_query.c"
static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_value_ordered_query_type_0[3] = {
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2
};

#line 1037 "mdb.interactive_query.c"
static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_name_ordered_query_type_0[3] = {
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0
};

#line 1044 "mdb.interactive_query.c"
static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_query_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1051 "mdb.interactive_query.c"
const MR_TypeCtorInfo_Struct mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__interactive_query____Unify____query_type_0_0_10001)),
  ((MR_Box) (mdb__interactive_query____Compare____query_type_0_0_10001)),
  (MR_String) "mdb.interactive_query",
  (MR_String) "query_type",
  {
    mdb__interactive_query__mdb__interactive_query__enum_name_ordered_query_type_0
  },
  {
    mdb__interactive_query__mdb__interactive_query__enum_value_ordered_query_type_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__interactive_query__mdb__interactive_query__functor_number_map_query_type_0
};

#line 1072 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0_10001(
#line 1075 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 1077 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2)
#line 1079 "mdb.interactive_query.c"
{
#line 1081 "mdb.interactive_query.c"
  {
#line 1083 "mdb.interactive_query.c"
    MR_bool mdb__interactive_query__succeeded;

#line 1086 "mdb.interactive_query.c"
    {
#line 1088 "mdb.interactive_query.c"
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____imports_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
#line 1091 "mdb.interactive_query.c"
    return mdb__interactive_query__succeeded;
#line 1093 "mdb.interactive_query.c"
  }
#line 1095 "mdb.interactive_query.c"
}

#line 1098 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____imports_0_0_10001(
#line 1101 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 1103 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 1105 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3)
#line 1107 "mdb.interactive_query.c"
{
#line 1109 "mdb.interactive_query.c"
  {
#line 1111 "mdb.interactive_query.c"
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

#line 1114 "mdb.interactive_query.c"
    {
#line 1116 "mdb.interactive_query.c"
      mdb__interactive_query____Compare____imports_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
#line 1119 "mdb.interactive_query.c"
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
#line 1121 "mdb.interactive_query.c"
  }
#line 1123 "mdb.interactive_query.c"
}

#line 1126 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0_10001(
#line 1129 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 1131 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2)
#line 1133 "mdb.interactive_query.c"
{
#line 1135 "mdb.interactive_query.c"
  {
#line 1137 "mdb.interactive_query.c"
    MR_bool mdb__interactive_query__succeeded;

#line 1140 "mdb.interactive_query.c"
    {
#line 1142 "mdb.interactive_query.c"
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____interactive_query_response_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
#line 1145 "mdb.interactive_query.c"
    return mdb__interactive_query__succeeded;
#line 1147 "mdb.interactive_query.c"
  }
#line 1149 "mdb.interactive_query.c"
}

#line 1152 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0_10001(
#line 1155 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 1157 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 1159 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3)
#line 1161 "mdb.interactive_query.c"
{
#line 1163 "mdb.interactive_query.c"
  {
#line 1165 "mdb.interactive_query.c"
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

#line 1168 "mdb.interactive_query.c"
    {
#line 1170 "mdb.interactive_query.c"
      mdb__interactive_query____Compare____interactive_query_response_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
#line 1173 "mdb.interactive_query.c"
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
#line 1175 "mdb.interactive_query.c"
  }
#line 1177 "mdb.interactive_query.c"
}

#line 1180 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____io_pred_0_0_10001(
#line 1183 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 1185 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2)
#line 1187 "mdb.interactive_query.c"
{
#line 1189 "mdb.interactive_query.c"
  {
#line 1191 "mdb.interactive_query.c"
    MR_bool mdb__interactive_query__succeeded;

#line 1194 "mdb.interactive_query.c"
    {
#line 1196 "mdb.interactive_query.c"
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____io_pred_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
#line 1199 "mdb.interactive_query.c"
    return mdb__interactive_query__succeeded;
#line 1201 "mdb.interactive_query.c"
  }
#line 1203 "mdb.interactive_query.c"
}

#line 1206 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____io_pred_0_0_10001(
#line 1209 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 1211 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 1213 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3)
#line 1215 "mdb.interactive_query.c"
{
#line 1217 "mdb.interactive_query.c"
  {
#line 1219 "mdb.interactive_query.c"
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

#line 1222 "mdb.interactive_query.c"
    {
#line 1224 "mdb.interactive_query.c"
      mdb__interactive_query____Compare____io_pred_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
#line 1227 "mdb.interactive_query.c"
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
#line 1229 "mdb.interactive_query.c"
  }
#line 1231 "mdb.interactive_query.c"
}

#line 1234 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____options_0_0_10001(
#line 1237 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 1239 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2)
#line 1241 "mdb.interactive_query.c"
{
#line 1243 "mdb.interactive_query.c"
  {
#line 1245 "mdb.interactive_query.c"
    MR_bool mdb__interactive_query__succeeded;

#line 1248 "mdb.interactive_query.c"
    {
#line 1250 "mdb.interactive_query.c"
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____options_0_0(((MR_String) mdb__interactive_query__wrapper_arg_1), ((MR_String) mdb__interactive_query__wrapper_arg_2));
    }
#line 1253 "mdb.interactive_query.c"
    return mdb__interactive_query__succeeded;
#line 1255 "mdb.interactive_query.c"
  }
#line 1257 "mdb.interactive_query.c"
}

#line 1260 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____options_0_0_10001(
#line 1263 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 1265 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 1267 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3)
#line 1269 "mdb.interactive_query.c"
{
#line 1271 "mdb.interactive_query.c"
  {
#line 1273 "mdb.interactive_query.c"
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

#line 1276 "mdb.interactive_query.c"
    {
#line 1278 "mdb.interactive_query.c"
      mdb__interactive_query____Compare____options_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_String) mdb__interactive_query__wrapper_arg_2), ((MR_String) mdb__interactive_query__wrapper_arg_3));
    }
#line 1281 "mdb.interactive_query.c"
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
#line 1283 "mdb.interactive_query.c"
  }
#line 1285 "mdb.interactive_query.c"
}

#line 1288 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0_10001(
#line 1291 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 1293 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2)
#line 1295 "mdb.interactive_query.c"
{
#line 1297 "mdb.interactive_query.c"
  {
#line 1299 "mdb.interactive_query.c"
    MR_bool mdb__interactive_query__succeeded;

#line 1302 "mdb.interactive_query.c"
    {
#line 1304 "mdb.interactive_query.c"
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____prog_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
#line 1307 "mdb.interactive_query.c"
    return mdb__interactive_query__succeeded;
#line 1309 "mdb.interactive_query.c"
  }
#line 1311 "mdb.interactive_query.c"
}

#line 1314 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0_10001(
#line 1317 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 1319 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 1321 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3)
#line 1323 "mdb.interactive_query.c"
{
#line 1325 "mdb.interactive_query.c"
  {
#line 1327 "mdb.interactive_query.c"
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

#line 1330 "mdb.interactive_query.c"
    {
#line 1332 "mdb.interactive_query.c"
      mdb__interactive_query____Compare____prog_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
#line 1335 "mdb.interactive_query.c"
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
#line 1337 "mdb.interactive_query.c"
  }
#line 1339 "mdb.interactive_query.c"
}

#line 1342 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0_10001(
#line 1345 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 1347 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2)
#line 1349 "mdb.interactive_query.c"
{
#line 1351 "mdb.interactive_query.c"
  {
#line 1353 "mdb.interactive_query.c"
    MR_bool mdb__interactive_query__succeeded;

#line 1356 "mdb.interactive_query.c"
    {
#line 1358 "mdb.interactive_query.c"
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____query_type_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
#line 1361 "mdb.interactive_query.c"
    return mdb__interactive_query__succeeded;
#line 1363 "mdb.interactive_query.c"
  }
#line 1365 "mdb.interactive_query.c"
}

#line 1368 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0_10001(
#line 1371 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 1373 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 1375 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3)
#line 1377 "mdb.interactive_query.c"
{
#line 1379 "mdb.interactive_query.c"
  {
#line 1381 "mdb.interactive_query.c"
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

#line 1384 "mdb.interactive_query.c"
    {
#line 1386 "mdb.interactive_query.c"
      mdb__interactive_query____Compare____query_type_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
#line 1389 "mdb.interactive_query.c"
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
#line 1391 "mdb.interactive_query.c"
  }
#line 1393 "mdb.interactive_query.c"
}

#line 493 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0(void)
#line 493 "interactive_query.m"
{
#line 495 "interactive_query.m"
  {
#line 495 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 496 "interactive_query.m"
    MR_Word mdb__interactive_query__V_5_5;
#line 497 "interactive_query.m"
    MR_Word mdb__interactive_query__V_6_6;
#line 498 "interactive_query.m"
    MR_Word mdb__interactive_query__V_7_7;
#line 499 "interactive_query.m"
    MR_Word mdb__interactive_query__V_8_8;
#line 500 "interactive_query.m"
    MR_Word mdb__interactive_query__V_9_9;
#line 501 "interactive_query.m"
    MR_Word mdb__interactive_query__V_10_10;
#line 502 "interactive_query.m"
    MR_Word mdb__interactive_query__V_11_11;
#line 504 "interactive_query.m"
    MR_Word mdb__interactive_query__V_12_12;
#line 505 "interactive_query.m"
    MR_Word mdb__interactive_query__V_13_13;
#line 506 "interactive_query.m"
    MR_Word mdb__interactive_query__V_14_14;

#line 496 "interactive_query.m"
    {
#line 496 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.m", &mdb__interactive_query__V_5_5);
    }
#line 497 "interactive_query.m"
    {
#line 497 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.d", &mdb__interactive_query__V_6_6);
    }
#line 498 "interactive_query.m"
    {
#line 498 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "Mercury/ds/mdb_query.d", &mdb__interactive_query__V_7_7);
    }
#line 499 "interactive_query.m"
    {
#line 499 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.c", &mdb__interactive_query__V_8_8);
    }
#line 500 "interactive_query.m"
    {
#line 500 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "Mercury/cs/mdb_query.c", &mdb__interactive_query__V_9_9);
    }
#line 501 "interactive_query.m"
    {
#line 501 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.c_date", &mdb__interactive_query__V_10_10);
    }
#line 502 "interactive_query.m"
    {
#line 502 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "Mercury/c_dates/mdb_query.c_date", &mdb__interactive_query__V_11_11);
    }
#line 504 "interactive_query.m"
    {
#line 504 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.o", &mdb__interactive_query__V_12_12);
    }
#line 505 "interactive_query.m"
    {
#line 505 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "Mercury/os/mdb_query.o", &mdb__interactive_query__V_13_13);
    }
#line 506 "interactive_query.m"
    {
#line 506 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "libmdb_query.so", &mdb__interactive_query__V_14_14);
    }
#line 495 "interactive_query.m"
  }
#line 493 "interactive_query.m"
}

#line 41 "interactive_query.m"
void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0(
#line 41 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__1_1,
#line 41 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2,
#line 41 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__3_3)
#line 41 "interactive_query.m"
{
#line 41 "interactive_query.m"
  {
#line 41 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 41 "interactive_query.m"
    MR_Integer mdb__interactive_query__Cast_HeadVar1_4 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;
#line 41 "interactive_query.m"
    MR_Integer mdb__interactive_query__Cast_HeadVar2_5 = (MR_Integer) mdb__interactive_query__HeadVar__3_3;

#line 41 "interactive_query.m"
    {
#line 41 "interactive_query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__interactive_query__HeadVar__1_1, mdb__interactive_query__Cast_HeadVar1_4, mdb__interactive_query__Cast_HeadVar2_5);
#line 41 "interactive_query.m"
      return;
    }
#line 41 "interactive_query.m"
  }
#line 41 "interactive_query.m"
}

#line 41 "interactive_query.m"
MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0(
#line 41 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_1,
#line 41 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2)
#line 41 "interactive_query.m"
{
#line 1522 "mdb.interactive_query.c"
  {
#line 1524 "mdb.interactive_query.c"
    MR_bool mdb__interactive_query__succeeded = (mdb__interactive_query__HeadVar__2_1 == mdb__interactive_query__HeadVar__2_2);

#line 1527 "mdb.interactive_query.c"
    return mdb__interactive_query__succeeded;
#line 1529 "mdb.interactive_query.c"
  }
#line 41 "interactive_query.m"
}

#line 70 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0(
#line 70 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__1_1,
#line 70 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2,
#line 70 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__3_3)
#line 70 "interactive_query.m"
{
#line 70 "interactive_query.m"
  {
#line 70 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 70 "interactive_query.m"
    MR_Integer mdb__interactive_query__CastX_15 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;
#line 70 "interactive_query.m"
    MR_Integer mdb__interactive_query__CastY_16 = (MR_Integer) mdb__interactive_query__HeadVar__3_3;

#line 70 "interactive_query.m"
    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_15 == mdb__interactive_query__CastY_16);
#line 70 "interactive_query.m"
    if (mdb__interactive_query__succeeded)
#line 1558 "mdb.interactive_query.c"
      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
#line 70 "interactive_query.m"
    else
#line 70 "interactive_query.m"
      {
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 1)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 2)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 3)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 1)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 2)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 3)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_12_12;
#line 70 "interactive_query.m"
        MR_Integer mdb__interactive_query__V_21_21 = (MR_Integer) mdb__interactive_query__V_4_4;
#line 70 "interactive_query.m"
        MR_Integer mdb__interactive_query__V_22_22 = (MR_Integer) mdb__interactive_query__V_8_8;

#line 70 "interactive_query.m"
        {
#line 70 "interactive_query.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__interactive_query__V_12_12, mdb__interactive_query__V_21_21, mdb__interactive_query__V_22_22);
        }
#line 1592 "mdb.interactive_query.c"
        mdb__interactive_query__succeeded = (mdb__interactive_query__V_12_12 == (MR_Integer) 0);
#line 70 "interactive_query.m"
        mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
#line 70 "interactive_query.m"
        if (mdb__interactive_query__succeeded)
#line 70 "interactive_query.m"
          *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_12_12;
#line 70 "interactive_query.m"
        else
#line 70 "interactive_query.m"
          {
#line 70 "interactive_query.m"
            MR_Word mdb__interactive_query__V_13_13;

#line 70 "interactive_query.m"
            {
#line 70 "interactive_query.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], &mdb__interactive_query__V_13_13, ((MR_Box) (mdb__interactive_query__V_5_5)), ((MR_Box) (mdb__interactive_query__V_9_9)));
            }
#line 1612 "mdb.interactive_query.c"
            mdb__interactive_query__succeeded = (mdb__interactive_query__V_13_13 == (MR_Integer) 0);
#line 70 "interactive_query.m"
            mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
#line 70 "interactive_query.m"
            if (mdb__interactive_query__succeeded)
#line 70 "interactive_query.m"
              *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_13_13;
#line 70 "interactive_query.m"
            else
#line 70 "interactive_query.m"
              {
#line 70 "interactive_query.m"
                MR_Word mdb__interactive_query__V_14_14;

#line 70 "interactive_query.m"
                {
#line 70 "interactive_query.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[2], &mdb__interactive_query__V_14_14, ((MR_Box) (mdb__interactive_query__V_6_6)), ((MR_Box) (mdb__interactive_query__V_10_10)));
                }
#line 1632 "mdb.interactive_query.c"
                mdb__interactive_query__succeeded = (mdb__interactive_query__V_14_14 == (MR_Integer) 0);
#line 70 "interactive_query.m"
                mdb__interactive_query__succeeded = !(mdb__interactive_query__succeeded);
#line 70 "interactive_query.m"
                if (mdb__interactive_query__succeeded)
#line 70 "interactive_query.m"
                  *mdb__interactive_query__HeadVar__1_1 = mdb__interactive_query__V_14_14;
#line 70 "interactive_query.m"
                else
#line 70 "interactive_query.m"
                  {
#line 70 "interactive_query.m"
                    {
#line 70 "interactive_query.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[3], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__V_7_7)), ((MR_Box) (mdb__interactive_query__V_11_11)));
#line 70 "interactive_query.m"
                      return;
                    }
#line 70 "interactive_query.m"
                  }
#line 70 "interactive_query.m"
              }
#line 70 "interactive_query.m"
          }
#line 70 "interactive_query.m"
      }
#line 70 "interactive_query.m"
  }
#line 70 "interactive_query.m"
}

#line 70 "interactive_query.m"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0(
#line 70 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1,
#line 70 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2)
#line 70 "interactive_query.m"
{
#line 70 "interactive_query.m"
  {
#line 70 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 70 "interactive_query.m"
    MR_Integer mdb__interactive_query__CastX_11 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
#line 70 "interactive_query.m"
    MR_Integer mdb__interactive_query__CastY_12 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

#line 70 "interactive_query.m"
    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_11 == mdb__interactive_query__CastY_12);
#line 70 "interactive_query.m"
    if (mdb__interactive_query__succeeded)
#line 70 "interactive_query.m"
      mdb__interactive_query__succeeded = MR_TRUE;
#line 70 "interactive_query.m"
    else
#line 70 "interactive_query.m"
      {
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__TypeInfo_13_13;
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__TypeInfo_14_14;
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__TypeInfo_15_15;
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 1)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 2)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 3)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 1)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 2)));
#line 70 "interactive_query.m"
        MR_Word mdb__interactive_query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 3)));

#line 1715 "mdb.interactive_query.c"
        mdb__interactive_query__succeeded = (mdb__interactive_query__V_3_3 == mdb__interactive_query__V_7_7);
#line 70 "interactive_query.m"
        if (mdb__interactive_query__succeeded)
#line 70 "interactive_query.m"
          {
#line 1721 "mdb.interactive_query.c"
            mdb__interactive_query__TypeInfo_13_13 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
#line 1723 "mdb.interactive_query.c"
            {
#line 1725 "mdb.interactive_query.c"
              mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_13_13, ((MR_Box) (mdb__interactive_query__V_4_4)), ((MR_Box) (mdb__interactive_query__V_8_8)));
            }
#line 70 "interactive_query.m"
            if (mdb__interactive_query__succeeded)
#line 70 "interactive_query.m"
              {
#line 1732 "mdb.interactive_query.c"
                mdb__interactive_query__TypeInfo_14_14 = (MR_Word) &mdb__interactive_query_scalar_common_1[2];
#line 1734 "mdb.interactive_query.c"
                {
#line 1736 "mdb.interactive_query.c"
                  mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_14_14, ((MR_Box) (mdb__interactive_query__V_5_5)), ((MR_Box) (mdb__interactive_query__V_9_9)));
                }
#line 70 "interactive_query.m"
                if (mdb__interactive_query__succeeded)
#line 70 "interactive_query.m"
                  {
#line 1743 "mdb.interactive_query.c"
                    mdb__interactive_query__TypeInfo_15_15 = (MR_Word) &mdb__interactive_query_scalar_common_1[3];
#line 1745 "mdb.interactive_query.c"
                    {
#line 1747 "mdb.interactive_query.c"
                      return mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_15_15, ((MR_Box) (mdb__interactive_query__V_6_6)), ((MR_Box) (mdb__interactive_query__V_10_10)));
                    }
#line 70 "interactive_query.m"
                  }
#line 70 "interactive_query.m"
              }
#line 70 "interactive_query.m"
          }
#line 70 "interactive_query.m"
      }
#line 70 "interactive_query.m"
    return mdb__interactive_query__succeeded;
#line 70 "interactive_query.m"
  }
#line 70 "interactive_query.m"
}

#line 47 "interactive_query.m"
void MR_CALL 
mdb__interactive_query____Compare____options_0_0(
#line 47 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__1_1,
#line 47 "interactive_query.m"
  MR_String mdb__interactive_query__HeadVar__2_2,
#line 47 "interactive_query.m"
  MR_String mdb__interactive_query__HeadVar__3_3)
#line 47 "interactive_query.m"
{
#line 47 "interactive_query.m"
  {
#line 47 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 47 "interactive_query.m"
    MR_String mdb__interactive_query__Cast_HeadVar1_4 = mdb__interactive_query__HeadVar__2_2;
#line 47 "interactive_query.m"
    MR_String mdb__interactive_query__Cast_HeadVar2_5 = mdb__interactive_query__HeadVar__3_3;

#line 47 "interactive_query.m"
    {
#line 47 "interactive_query.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__interactive_query__HeadVar__1_1, mdb__interactive_query__Cast_HeadVar1_4, mdb__interactive_query__Cast_HeadVar2_5);
#line 47 "interactive_query.m"
      return;
    }
#line 47 "interactive_query.m"
  }
#line 47 "interactive_query.m"
}

#line 47 "interactive_query.m"
MR_bool MR_CALL 
mdb__interactive_query____Unify____options_0_0(
#line 47 "interactive_query.m"
  MR_String mdb__interactive_query__HeadVar__1_1,
#line 47 "interactive_query.m"
  MR_String mdb__interactive_query__HeadVar__2_2)
#line 47 "interactive_query.m"
{
#line 47 "interactive_query.m"
  {
#line 47 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 47 "interactive_query.m"
    MR_String mdb__interactive_query__Cast_HeadVar1_3 = mdb__interactive_query__HeadVar__1_1;
#line 47 "interactive_query.m"
    MR_String mdb__interactive_query__Cast_HeadVar2_4 = mdb__interactive_query__HeadVar__2_2;

#line 47 "interactive_query.m"
    mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__Cast_HeadVar1_3, mdb__interactive_query__Cast_HeadVar2_4) == 0);
#line 47 "interactive_query.m"
    return mdb__interactive_query__succeeded;
#line 47 "interactive_query.m"
  }
#line 47 "interactive_query.m"
}

#line 636 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query____Compare____io_pred_0_0(
#line 636 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__1_1,
#line 636 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2,
#line 636 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__3_3)
#line 636 "interactive_query.m"
{
#line 636 "interactive_query.m"
  {
#line 636 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 636 "interactive_query.m"
    MR_Word mdb__interactive_query__Cast_HeadVar1_4 = mdb__interactive_query__HeadVar__2_2;
#line 636 "interactive_query.m"
    MR_Word mdb__interactive_query__Cast_HeadVar2_5 = mdb__interactive_query__HeadVar__3_3;

#line 636 "interactive_query.m"
    {
#line 636 "interactive_query.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__Cast_HeadVar1_4)), ((MR_Box) (mdb__interactive_query__Cast_HeadVar2_5)));
#line 636 "interactive_query.m"
      return;
    }
#line 636 "interactive_query.m"
  }
#line 636 "interactive_query.m"
}

#line 636 "interactive_query.m"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____io_pred_0_0(
#line 636 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1,
#line 636 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2)
#line 636 "interactive_query.m"
{
#line 636 "interactive_query.m"
  {
#line 636 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 636 "interactive_query.m"
    MR_Word mdb__interactive_query__Cast_HeadVar1_3 = mdb__interactive_query__HeadVar__1_1;
#line 636 "interactive_query.m"
    MR_Word mdb__interactive_query__Cast_HeadVar2_4 = mdb__interactive_query__HeadVar__2_2;

#line 636 "interactive_query.m"
    {
#line 636 "interactive_query.m"
      return mdb__interactive_query__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mdb__interactive_query__Cast_HeadVar1_3, (MR_Word) mdb__interactive_query__Cast_HeadVar2_4);
    }
#line 636 "interactive_query.m"
    return mdb__interactive_query__succeeded;
#line 636 "interactive_query.m"
  }
#line 636 "interactive_query.m"
}

#line 144 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0(
#line 144 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__1_1,
#line 144 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2,
#line 144 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__3_3)
#line 144 "interactive_query.m"
{
#line 144 "interactive_query.m"
  {
#line 144 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 144 "interactive_query.m"
    MR_Integer mdb__interactive_query__CastX_24 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;
#line 144 "interactive_query.m"
    MR_Integer mdb__interactive_query__CastY_25 = (MR_Integer) mdb__interactive_query__HeadVar__3_3;

#line 144 "interactive_query.m"
    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_24 == mdb__interactive_query__CastY_25);
#line 144 "interactive_query.m"
    if (mdb__interactive_query__succeeded)
#line 1910 "mdb.interactive_query.c"
      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
#line 144 "interactive_query.m"
    else
#line 144 "interactive_query.m"
      if ((mdb__interactive_query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 144 "interactive_query.m"
        if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 144 "interactive_query.m"
          *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
#line 144 "interactive_query.m"
        else
#line 144 "interactive_query.m"
          if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "interactive_query.m"
            *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 144 "interactive_query.m"
          else
#line 144 "interactive_query.m"
            if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 144 "interactive_query.m"
              *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 144 "interactive_query.m"
            else
#line 144 "interactive_query.m"
              if (((MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1936 "mdb.interactive_query.c"
                *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 144 "interactive_query.m"
              else
#line 1940 "mdb.interactive_query.c"
                *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 144 "interactive_query.m"
      else
#line 144 "interactive_query.m"
        if ((mdb__interactive_query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "interactive_query.m"
          if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 144 "interactive_query.m"
            *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 144 "interactive_query.m"
          else
#line 144 "interactive_query.m"
            if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "interactive_query.m"
              *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
#line 144 "interactive_query.m"
            else
#line 144 "interactive_query.m"
              if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 144 "interactive_query.m"
                *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 144 "interactive_query.m"
              else
#line 144 "interactive_query.m"
                if (((MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1966 "mdb.interactive_query.c"
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 144 "interactive_query.m"
                else
#line 1970 "mdb.interactive_query.c"
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 144 "interactive_query.m"
        else
#line 144 "interactive_query.m"
          if ((mdb__interactive_query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 144 "interactive_query.m"
            if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 144 "interactive_query.m"
              *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 144 "interactive_query.m"
            else
#line 144 "interactive_query.m"
              if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "interactive_query.m"
                *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 144 "interactive_query.m"
              else
#line 144 "interactive_query.m"
                if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 144 "interactive_query.m"
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
#line 144 "interactive_query.m"
                else
#line 144 "interactive_query.m"
                  if (((MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1996 "mdb.interactive_query.c"
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 144 "interactive_query.m"
                  else
#line 2000 "mdb.interactive_query.c"
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 144 "interactive_query.m"
          else
#line 144 "interactive_query.m"
            if (((MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 144 "interactive_query.m"
              {
#line 144 "interactive_query.m"
                MR_String mdb__interactive_query__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));

#line 144 "interactive_query.m"
                if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2013 "mdb.interactive_query.c"
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 144 "interactive_query.m"
                else
#line 144 "interactive_query.m"
                  if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2019 "mdb.interactive_query.c"
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 144 "interactive_query.m"
                  else
#line 144 "interactive_query.m"
                    if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2025 "mdb.interactive_query.c"
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 144 "interactive_query.m"
                    else
#line 144 "interactive_query.m"
                      if (((MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 144 "interactive_query.m"
                        {
#line 144 "interactive_query.m"
                          MR_String mdb__interactive_query__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));

#line 144 "interactive_query.m"
                          {
#line 144 "interactive_query.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(mdb__interactive_query__HeadVar__1_1, mdb__interactive_query__V_28_28, mdb__interactive_query__V_23_23);
#line 144 "interactive_query.m"
                            return;
                          }
#line 144 "interactive_query.m"
                        }
#line 144 "interactive_query.m"
                      else
#line 2047 "mdb.interactive_query.c"
                        *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 144 "interactive_query.m"
              }
#line 144 "interactive_query.m"
            else
#line 144 "interactive_query.m"
              {
#line 144 "interactive_query.m"
                MR_Word mdb__interactive_query__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));

#line 144 "interactive_query.m"
                if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2060 "mdb.interactive_query.c"
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 144 "interactive_query.m"
                else
#line 144 "interactive_query.m"
                  if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2066 "mdb.interactive_query.c"
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 144 "interactive_query.m"
                  else
#line 144 "interactive_query.m"
                    if ((mdb__interactive_query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2072 "mdb.interactive_query.c"
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 144 "interactive_query.m"
                    else
#line 144 "interactive_query.m"
                      if (((MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2078 "mdb.interactive_query.c"
                        *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 144 "interactive_query.m"
                      else
#line 144 "interactive_query.m"
                        {
#line 144 "interactive_query.m"
                          MR_Word mdb__interactive_query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));

#line 144 "interactive_query.m"
                          {
#line 144 "interactive_query.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__V_29_29)), ((MR_Box) (mdb__interactive_query__V_8_8)));
#line 144 "interactive_query.m"
                            return;
                          }
#line 144 "interactive_query.m"
                        }
#line 144 "interactive_query.m"
              }
#line 144 "interactive_query.m"
  }
#line 144 "interactive_query.m"
}

#line 144 "interactive_query.m"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0(
#line 144 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1,
#line 144 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2)
#line 144 "interactive_query.m"
{
#line 144 "interactive_query.m"
  {
#line 144 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 144 "interactive_query.m"
    MR_Integer mdb__interactive_query__CastX_13 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
#line 144 "interactive_query.m"
    MR_Integer mdb__interactive_query__CastY_14 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

#line 144 "interactive_query.m"
    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_13 == mdb__interactive_query__CastY_14);
#line 144 "interactive_query.m"
    if (mdb__interactive_query__succeeded)
#line 144 "interactive_query.m"
      mdb__interactive_query__succeeded = MR_TRUE;
#line 144 "interactive_query.m"
    else
#line 144 "interactive_query.m"
      if ((mdb__interactive_query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 144 "interactive_query.m"
        {
#line 144 "interactive_query.m"
          MR_Integer mdb__interactive_query__CastX_9 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
#line 144 "interactive_query.m"
          MR_Integer mdb__interactive_query__CastY_10 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

#line 144 "interactive_query.m"
          mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_10 == mdb__interactive_query__CastX_9);
#line 144 "interactive_query.m"
        }
#line 144 "interactive_query.m"
      else
#line 144 "interactive_query.m"
        if ((mdb__interactive_query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 144 "interactive_query.m"
          {
#line 144 "interactive_query.m"
            MR_Integer mdb__interactive_query__CastX_3 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
#line 144 "interactive_query.m"
            MR_Integer mdb__interactive_query__CastY_4 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

#line 144 "interactive_query.m"
            mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_4 == mdb__interactive_query__CastX_3);
#line 144 "interactive_query.m"
          }
#line 144 "interactive_query.m"
        else
#line 144 "interactive_query.m"
          if ((mdb__interactive_query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 144 "interactive_query.m"
            {
#line 144 "interactive_query.m"
              MR_Integer mdb__interactive_query__CastX_7 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
#line 144 "interactive_query.m"
              MR_Integer mdb__interactive_query__CastY_8 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

#line 144 "interactive_query.m"
              mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_8 == mdb__interactive_query__CastX_7);
#line 144 "interactive_query.m"
            }
#line 144 "interactive_query.m"
          else
#line 144 "interactive_query.m"
            if (((MR_tag((MR_Word) mdb__interactive_query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 144 "interactive_query.m"
              {
#line 144 "interactive_query.m"
                MR_String mdb__interactive_query__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
#line 144 "interactive_query.m"
                MR_String mdb__interactive_query__V_12_12;

#line 144 "interactive_query.m"
                mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 144 "interactive_query.m"
                if (mdb__interactive_query__succeeded)
#line 144 "interactive_query.m"
                  {
#line 144 "interactive_query.m"
                    mdb__interactive_query__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
#line 2191 "mdb.interactive_query.c"
                    mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_11_11, mdb__interactive_query__V_12_12) == 0);
#line 144 "interactive_query.m"
                  }
#line 144 "interactive_query.m"
              }
#line 144 "interactive_query.m"
            else
#line 144 "interactive_query.m"
              {
#line 144 "interactive_query.m"
                MR_Word mdb__interactive_query__TypeInfo_15_15;
#line 144 "interactive_query.m"
                MR_Word mdb__interactive_query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
#line 144 "interactive_query.m"
                MR_Word mdb__interactive_query__V_6_6;

#line 144 "interactive_query.m"
                mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 144 "interactive_query.m"
                if (mdb__interactive_query__succeeded)
#line 144 "interactive_query.m"
                  {
#line 144 "interactive_query.m"
                    mdb__interactive_query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
#line 2216 "mdb.interactive_query.c"
                    mdb__interactive_query__TypeInfo_15_15 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
#line 2218 "mdb.interactive_query.c"
                    {
#line 2220 "mdb.interactive_query.c"
                      return mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_15_15, ((MR_Box) (mdb__interactive_query__V_5_5)), ((MR_Box) (mdb__interactive_query__V_6_6)));
                    }
#line 144 "interactive_query.m"
                  }
#line 144 "interactive_query.m"
              }
#line 144 "interactive_query.m"
    return mdb__interactive_query__succeeded;
#line 144 "interactive_query.m"
  }
#line 144 "interactive_query.m"
}

#line 46 "interactive_query.m"
void MR_CALL 
mdb__interactive_query____Compare____imports_0_0(
#line 46 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__1_1,
#line 46 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2,
#line 46 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__3_3)
#line 46 "interactive_query.m"
{
#line 46 "interactive_query.m"
  {
#line 46 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 46 "interactive_query.m"
    MR_Word mdb__interactive_query__Cast_HeadVar1_4 = mdb__interactive_query__HeadVar__2_2;
#line 46 "interactive_query.m"
    MR_Word mdb__interactive_query__Cast_HeadVar2_5 = mdb__interactive_query__HeadVar__3_3;

#line 46 "interactive_query.m"
    {
#line 46 "interactive_query.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__Cast_HeadVar1_4)), ((MR_Box) (mdb__interactive_query__Cast_HeadVar2_5)));
#line 46 "interactive_query.m"
      return;
    }
#line 46 "interactive_query.m"
  }
#line 46 "interactive_query.m"
}

#line 46 "interactive_query.m"
MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0(
#line 46 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1,
#line 46 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2)
#line 46 "interactive_query.m"
{
#line 46 "interactive_query.m"
  {
#line 46 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 46 "interactive_query.m"
    MR_Word mdb__interactive_query__Cast_HeadVar1_3 = mdb__interactive_query__HeadVar__1_1;
#line 46 "interactive_query.m"
    MR_Word mdb__interactive_query__Cast_HeadVar2_4 = mdb__interactive_query__HeadVar__2_2;

#line 46 "interactive_query.m"
    {
#line 46 "interactive_query.m"
      return mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], ((MR_Box) (mdb__interactive_query__Cast_HeadVar1_3)), ((MR_Box) (mdb__interactive_query__Cast_HeadVar2_4)));
    }
#line 46 "interactive_query.m"
    return mdb__interactive_query__succeeded;
#line 46 "interactive_query.m"
  }
#line 46 "interactive_query.m"
}

#line 640 "interactive_query.m"
static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_1_f_0(
#line 640 "interactive_query.m"
  MR_Word mdb__interactive_query__X_1)
#line 640 "interactive_query.m"
{
#line 642 "interactive_query.m"
  {
#line 642 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 642 "interactive_query.m"
    MR_Word mdb__interactive_query__Y_2;

#line 645 "interactive_query.m"
{
#define MR_PROC_LABEL mdb__interactive_query__inst_cast_1_f_0

	MR_Word X;
	MR_Word Y;

	X =  mdb__interactive_query__X_1 ;
		{
#line 645 "interactive_query.m"

    Y = X

#line 2323 "mdb.interactive_query.c"

		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__Y_2  = Y;
#line 645 "interactive_query.m"
}
#line 642 "interactive_query.m"
    return mdb__interactive_query__Y_2;
#line 642 "interactive_query.m"
  }
#line 640 "interactive_query.m"
}

#line 574 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__dynamically_load_and_run_2_p_0(void)
#line 574 "interactive_query.m"
{
#line 576 "interactive_query.m"
  {
#line 576 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 576 "interactive_query.m"
    MR_Word mdb__interactive_query__MaybeHandle_4;

#line 581 "interactive_query.m"
    {
#line 581 "interactive_query.m"
      mdb__dl__open_6_p_0((MR_String) "./libmdb_query.so", (MR_Integer) 0, (MR_Integer) 0, &mdb__interactive_query__MaybeHandle_4);
    }
#line 588 "interactive_query.m"
    if (((MR_tag((MR_Word) mdb__interactive_query__MaybeHandle_4)) == (MR_mktag((MR_Integer) 1))))
#line 584 "interactive_query.m"
      {
#line 584 "interactive_query.m"
        MR_Word mdb__interactive_query__TypeCtorInfo_47_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 584 "interactive_query.m"
        MR_String mdb__interactive_query__Msg_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__MaybeHandle_4, (MR_Integer) 0)));

#line 585 "interactive_query.m"
        {
#line 585 "interactive_query.m"
          mercury__io__print_3_p_0(mdb__interactive_query__TypeCtorInfo_47_47, ((MR_Box) ((MR_String) "dlopen failed: ")));
        }
#line 586 "interactive_query.m"
        {
#line 586 "interactive_query.m"
          mercury__io__print_3_p_0(mdb__interactive_query__TypeCtorInfo_47_47, ((MR_Box) (mdb__interactive_query__Msg_5)));
        }
#line 587 "interactive_query.m"
        {
#line 587 "interactive_query.m"
          mercury__io__nl_2_p_0();
#line 587 "interactive_query.m"
          return;
        }
#line 584 "interactive_query.m"
      }
#line 588 "interactive_query.m"
    else
#line 589 "interactive_query.m"
      {
#line 589 "interactive_query.m"
        MR_Word mdb__interactive_query__Handle_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__MaybeHandle_4, (MR_Integer) 0)));
#line 589 "interactive_query.m"
        MR_Word mdb__interactive_query__MaybeQuery_8;
#line 589 "interactive_query.m"
        MR_Word mdb__interactive_query__Result_11;

#line 596 "interactive_query.m"
        {
#line 596 "interactive_query.m"
          mdb__dl__mercury_sym_5_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], mdb__interactive_query__Handle_6, (MR_Word) &mdb__interactive_query_scalar_common_7[0], &mdb__interactive_query__MaybeQuery_8);
        }
#line 602 "interactive_query.m"
        if (((MR_tag((MR_Word) mdb__interactive_query__MaybeQuery_8)) == (MR_mktag((MR_Integer) 1))))
#line 598 "interactive_query.m"
          {
#line 598 "interactive_query.m"
            MR_Word mdb__interactive_query__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 598 "interactive_query.m"
            MR_String mdb__interactive_query__Msg_44 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__MaybeQuery_8, (MR_Integer) 0)));

#line 599 "interactive_query.m"
            {
#line 599 "interactive_query.m"
              mercury__io__print_3_p_0(mdb__interactive_query__TypeCtorInfo_49_49, ((MR_Box) ((MR_String) "dlsym failed: ")));
            }
#line 600 "interactive_query.m"
            {
#line 600 "interactive_query.m"
              mercury__io__print_3_p_0(mdb__interactive_query__TypeCtorInfo_49_49, ((MR_Box) (mdb__interactive_query__Msg_44)));
            }
#line 601 "interactive_query.m"
            {
#line 601 "interactive_query.m"
              mercury__io__nl_2_p_0();
            }
#line 598 "interactive_query.m"
          }
#line 602 "interactive_query.m"
        else
#line 603 "interactive_query.m"
          {
#line 603 "interactive_query.m"
            MR_Word mdb__interactive_query__QueryPred0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__MaybeQuery_8, (MR_Integer) 0)));
#line 603 "interactive_query.m"
            MR_Word mdb__interactive_query__QueryPred_10;
#line 613 "interactive_query.m"
            void MR_CALL (* mdb__interactive_query__func_0)(MR_Box, MR_Box, MR_Box *);
#line 613 "interactive_query.m"
            MR_Box mdb__interactive_query__conv1_STATE_VARIABLE_IO_34_34;

#line 645 "interactive_query.m"
{
#define MR_PROC_LABEL mdb__interactive_query__dynamically_load_and_run_2_p_0

	MR_Word X;
	MR_Word Y;

	X =  mdb__interactive_query__QueryPred0_9 ;
		{
#line 645 "interactive_query.m"

    Y = X

#line 2450 "mdb.interactive_query.c"

		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__QueryPred_10  = Y;
#line 645 "interactive_query.m"
}
#line 613 "interactive_query.m"
            mdb__interactive_query__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdb__interactive_query__QueryPred_10, (MR_Integer) 1)));
#line 613 "interactive_query.m"
            {
#line 613 "interactive_query.m"
              mdb__interactive_query__func_0(((MR_Box) mdb__interactive_query__QueryPred_10), ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv1_STATE_VARIABLE_IO_34_34);
            }
#line 603 "interactive_query.m"
          }
#line 618 "interactive_query.m"
        {
#line 618 "interactive_query.m"
          mdb__dl__close_4_p_0(mdb__interactive_query__Handle_6, &mdb__interactive_query__Result_11);
        }
#line 624 "interactive_query.m"
        if ((mdb__interactive_query__Result_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 625 "interactive_query.m"
          {
#line 625 "interactive_query.m"
          }
#line 624 "interactive_query.m"
        else
#line 620 "interactive_query.m"
          {
#line 620 "interactive_query.m"
            MR_Word mdb__interactive_query__TypeCtorInfo_50_50 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 620 "interactive_query.m"
            MR_String mdb__interactive_query__CloseMsg_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_11, (MR_Integer) 0)));

#line 621 "interactive_query.m"
            {
#line 621 "interactive_query.m"
              mercury__io__print_3_p_0(mdb__interactive_query__TypeCtorInfo_50_50, ((MR_Box) ((MR_String) "dlclose failed: ")));
            }
#line 622 "interactive_query.m"
            {
#line 622 "interactive_query.m"
              mercury__io__print_3_p_0(mdb__interactive_query__TypeCtorInfo_50_50, ((MR_Box) (mdb__interactive_query__CloseMsg_12)));
            }
#line 623 "interactive_query.m"
            {
#line 623 "interactive_query.m"
              mercury__io__nl_2_p_0();
#line 623 "interactive_query.m"
              return;
            }
#line 620 "interactive_query.m"
          }
#line 589 "interactive_query.m"
      }
#line 576 "interactive_query.m"
  }
#line 574 "interactive_query.m"
}

#line 508 "interactive_query.m"
static MR_String MR_CALL 
mdb__interactive_query__grade_option_0_f_0(void)
#line 508 "interactive_query.m"
{
#line 520 "interactive_query.m"
  {
#line 520 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 520 "interactive_query.m"
    MR_String mdb__interactive_query__GradeOpt_1;

#line 523 "interactive_query.m"
{
#define MR_PROC_LABEL mdb__interactive_query__grade_option_0_f_0

	MR_String GradeOpt;

		{
#line 523 "interactive_query.m"

    MR_make_aligned_string(GradeOpt, (MR_String) MR_GRADE_OPT);

#line 2535 "mdb.interactive_query.c"

		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__GradeOpt_1  = GradeOpt;
#line 523 "interactive_query.m"
}
#line 520 "interactive_query.m"
    return mdb__interactive_query__GradeOpt_1;
#line 520 "interactive_query.m"
  }
#line 508 "interactive_query.m"
}

#line 456 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__compile_file_4_p_0(
#line 456 "interactive_query.m"
  MR_String mdb__interactive_query__Options_5,
#line 456 "interactive_query.m"
  MR_Word * mdb__interactive_query__Succeeded_6)
#line 456 "interactive_query.m"
{
#line 458 "interactive_query.m"
  {
#line 458 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 458 "interactive_query.m"
    MR_String mdb__interactive_query__Command_8;
#line 458 "interactive_query.m"
    MR_Word mdb__interactive_query__V_11_11;
#line 458 "interactive_query.m"
    MR_Word mdb__interactive_query__V_13_13;
#line 458 "interactive_query.m"
    MR_Word mdb__interactive_query__V_15_15;
#line 458 "interactive_query.m"
    MR_Word mdb__interactive_query__V_17_17;
#line 458 "interactive_query.m"
    MR_Word mdb__interactive_query__V_19_19;
#line 458 "interactive_query.m"
    MR_Word mdb__interactive_query__V_20_20;
#line 458 "interactive_query.m"
    MR_Word mdb__interactive_query__V_22_22;
#line 458 "interactive_query.m"
    MR_String mdb__interactive_query__V_23_23;
#line 458 "interactive_query.m"
    MR_Word mdb__interactive_query__Result_37;

#line 523 "interactive_query.m"
{
#define MR_PROC_LABEL mdb__interactive_query__compile_file_4_p_0

	MR_String GradeOpt;

		{
#line 523 "interactive_query.m"

    MR_make_aligned_string(GradeOpt, (MR_String) MR_GRADE_OPT);

#line 2594 "mdb.interactive_query.c"

		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__V_23_23  = GradeOpt;
#line 523 "interactive_query.m"
}
#line 487 "interactive_query.m"
    {
#line 487 "interactive_query.m"
      mdb__interactive_query__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_22_22, 0) = ((MR_Box) (mdb__interactive_query__V_23_23));
#line 487 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[6])));
#line 487 "interactive_query.m"
    }
#line 486 "interactive_query.m"
    {
#line 486 "interactive_query.m"
      mdb__interactive_query__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_20_20, 0) = ((MR_Box) ((MR_String) " --grade "));
#line 486 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_20_20, 1) = ((MR_Box) (mdb__interactive_query__V_22_22));
#line 486 "interactive_query.m"
    }
#line 486 "interactive_query.m"
    {
#line 486 "interactive_query.m"
      mdb__interactive_query__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_19_19, 0) = ((MR_Box) (mdb__interactive_query__Options_5));
#line 486 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_19_19, 1) = ((MR_Box) (mdb__interactive_query__V_20_20));
#line 486 "interactive_query.m"
    }
#line 485 "interactive_query.m"
    {
#line 485 "interactive_query.m"
      mdb__interactive_query__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_17_17, 0) = ((MR_Box) ((MR_String) "--allow-undefined "));
#line 485 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_17_17, 1) = ((MR_Box) (mdb__interactive_query__V_19_19));
#line 485 "interactive_query.m"
    }
#line 484 "interactive_query.m"
    {
#line 484 "interactive_query.m"
      mdb__interactive_query__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_15_15, 0) = ((MR_Box) ((MR_String) "--output-compile-error-lines 10000 "));
#line 484 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_15_15, 1) = ((MR_Box) (mdb__interactive_query__V_17_17));
#line 484 "interactive_query.m"
    }
#line 483 "interactive_query.m"
    {
#line 483 "interactive_query.m"
      mdb__interactive_query__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_13_13, 0) = ((MR_Box) ((MR_String) "--no-warn-simple-code --no-warn-det-decls-too-lax "));
#line 483 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_13_13, 1) = ((MR_Box) (mdb__interactive_query__V_15_15));
#line 483 "interactive_query.m"
    }
#line 482 "interactive_query.m"
    {
#line 482 "interactive_query.m"
      mdb__interactive_query__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_11_11, 0) = ((MR_Box) ((MR_String) "mmc --infer-all --no-verbose-make -O0 --no-c-optimize "));
#line 482 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_11_11, 1) = ((MR_Box) (mdb__interactive_query__V_13_13));
#line 482 "interactive_query.m"
    }
#line 482 "interactive_query.m"
    {
#line 482 "interactive_query.m"
      mercury__string__append_list_2_p_0(mdb__interactive_query__V_11_11, &mdb__interactive_query__Command_8);
    }
#line 545 "interactive_query.m"
    {
#line 545 "interactive_query.m"
      mercury__io__call_system_4_p_0(mdb__interactive_query__Command_8, &mdb__interactive_query__Result_37);
    }
#line 559 "interactive_query.m"
    if (((MR_tag((MR_Word) mdb__interactive_query__Result_37)) == (MR_mktag((MR_Integer) 1))))
#line 560 "interactive_query.m"
      {
#line 561 "interactive_query.m"
        {
#line 561 "interactive_query.m"
          mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Error: unable to invoke the compiler.\n")));
        }
#line 562 "interactive_query.m"
        *mdb__interactive_query__Succeeded_6 = (MR_Integer) 0;
#line 560 "interactive_query.m"
      }
#line 559 "interactive_query.m"
    else
#line 547 "interactive_query.m"
      {
#line 547 "interactive_query.m"
        MR_Integer mdb__interactive_query__Status_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Result_37, (MR_Integer) 0)));

#line 548 "interactive_query.m"
        mdb__interactive_query__succeeded = (mdb__interactive_query__Status_38 == (MR_Integer) 0);
#line 555 "interactive_query.m"
        if (mdb__interactive_query__succeeded)
#line 554 "interactive_query.m"
          *mdb__interactive_query__Succeeded_6 = (MR_Integer) 1;
#line 555 "interactive_query.m"
        else
#line 556 "interactive_query.m"
          {
#line 556 "interactive_query.m"
            {
#line 556 "interactive_query.m"
              mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Compilation error(s) occurred.\n")));
            }
#line 557 "interactive_query.m"
            *mdb__interactive_query__Succeeded_6 = (MR_Integer) 0;
#line 556 "interactive_query.m"
          }
#line 547 "interactive_query.m"
      }
#line 458 "interactive_query.m"
  }
#line 456 "interactive_query.m"
}

#line 448 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0_1(
#line 448 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 448 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 448 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 448 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3)
#line 448 "interactive_query.m"
{
#line 448 "interactive_query.m"
  {
#line 448 "interactive_query.m"
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

#line 448 "interactive_query.m"
    {
#line 448 "interactive_query.m"
      mercury__term_io__quote_atom_3_p_0(((MR_String) mdb__interactive_query__wrapper_arg_1));
#line 448 "interactive_query.m"
      return;
    }
#line 448 "interactive_query.m"
  }
#line 448 "interactive_query.m"
}

#line 443 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0(
#line 443 "interactive_query.m"
  MR_Word mdb__interactive_query__Out_5,
#line 443 "interactive_query.m"
  MR_Word mdb__interactive_query__Imports_6)
#line 443 "interactive_query.m"
{
#line 446 "interactive_query.m"
  {
#line 446 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;

#line 447 "interactive_query.m"
    {
#line 447 "interactive_query.m"
      mercury__io__write_string_4_p_0(mdb__interactive_query__Out_5, (MR_String) ":- import_module ");
    }
#line 448 "interactive_query.m"
    {
#line 448 "interactive_query.m"
      mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__Out_5, mdb__interactive_query__Imports_6, (MR_String) ", ", (MR_Word) &mdb__interactive_query_scalar_common_4[1]);
    }
#line 449 "interactive_query.m"
    {
#line 449 "interactive_query.m"
      mercury__io__write_string_4_p_0(mdb__interactive_query__Out_5, (MR_String) ".\n");
#line 449 "interactive_query.m"
      return;
    }
#line 446 "interactive_query.m"
  }
#line 443 "interactive_query.m"
}

#line 438 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_one_var_4_p_0(
#line 438 "interactive_query.m"
  MR_Word mdb__interactive_query__VarSet_5,
#line 438 "interactive_query.m"
  MR_Word mdb__interactive_query__Var_6)
#line 438 "interactive_query.m"
{
#line 441 "interactive_query.m"
  {
#line 441 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;

#line 441 "interactive_query.m"
    {
#line 441 "interactive_query.m"
      mercury__term_io__write_variable_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, mdb__interactive_query__Var_6, mdb__interactive_query__VarSet_5);
#line 441 "interactive_query.m"
      return;
    }
#line 441 "interactive_query.m"
  }
#line 438 "interactive_query.m"
}

#line 432 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_args_4_p_0_1(
#line 432 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 432 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 432 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 432 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3)
#line 432 "interactive_query.m"
{
#line 432 "interactive_query.m"
  {
#line 432 "interactive_query.m"
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

#line 432 "interactive_query.m"
    {
#line 432 "interactive_query.m"
      mdb__interactive_query__write_one_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_Word) mdb__interactive_query__wrapper_arg_1));
#line 432 "interactive_query.m"
      return;
    }
#line 432 "interactive_query.m"
  }
#line 432 "interactive_query.m"
}

#line 426 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_args_4_p_0(
#line 426 "interactive_query.m"
  MR_Word mdb__interactive_query__Vars_5,
#line 426 "interactive_query.m"
  MR_Word mdb__interactive_query__VarSet_6)
#line 426 "interactive_query.m"
{
#line 430 "interactive_query.m"
  {
#line 430 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;

#line 430 "interactive_query.m"
    if ((mdb__interactive_query__Vars_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 435 "interactive_query.m"
      {
#line 435 "interactive_query.m"
      }
#line 430 "interactive_query.m"
    else
#line 430 "interactive_query.m"
      {
#line 430 "interactive_query.m"
        MR_Word mdb__interactive_query__V_15_15;

#line 431 "interactive_query.m"
        {
#line 431 "interactive_query.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 432 "interactive_query.m"
        {
#line 432 "interactive_query.m"
          mdb__interactive_query__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 432 "interactive_query.m"
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[0]));
#line 432 "interactive_query.m"
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 1) = ((MR_Box) (mdb__interactive_query__write_args_4_p_0_1));
#line 432 "interactive_query.m"
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 432 "interactive_query.m"
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 3) = ((MR_Box) (mdb__interactive_query__VarSet_6));
#line 432 "interactive_query.m"
        }
#line 432 "interactive_query.m"
        {
#line 432 "interactive_query.m"
          mercury__io__write_list_5_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[0], mdb__interactive_query__Vars_5, (MR_String) ", ", mdb__interactive_query__V_15_15);
        }
#line 433 "interactive_query.m"
        {
#line 433 "interactive_query.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
#line 433 "interactive_query.m"
          return;
        }
#line 430 "interactive_query.m"
      }
#line 430 "interactive_query.m"
  }
#line 426 "interactive_query.m"
}

#line 416 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_code_to_print_one_var_4_p_0(
#line 416 "interactive_query.m"
  MR_Word mdb__interactive_query__VarSet_5,
#line 416 "interactive_query.m"
  MR_Word mdb__interactive_query__Var_6)
#line 416 "interactive_query.m"
{
#line 419 "interactive_query.m"
  {
#line 419 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 419 "interactive_query.m"
    MR_Word mdb__interactive_query__TypeCtorInfo_18_18;

#line 420 "interactive_query.m"
    {
#line 420 "interactive_query.m"
      mercury__io__write_string_3_p_0((MR_String) "io.write_string(\"");
    }
#line 2935 "mdb.interactive_query.c"
    mdb__interactive_query__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 421 "interactive_query.m"
    {
#line 421 "interactive_query.m"
      mercury__term_io__write_variable_4_p_0(mdb__interactive_query__TypeCtorInfo_18_18, mdb__interactive_query__Var_6, mdb__interactive_query__VarSet_5);
    }
#line 422 "interactive_query.m"
    {
#line 422 "interactive_query.m"
      mercury__io__write_string_3_p_0((MR_String) " = \"), io.write_cc(");
    }
#line 423 "interactive_query.m"
    {
#line 423 "interactive_query.m"
      mercury__term_io__write_variable_4_p_0(mdb__interactive_query__TypeCtorInfo_18_18, mdb__interactive_query__Var_6, mdb__interactive_query__VarSet_5);
    }
#line 424 "interactive_query.m"
    {
#line 424 "interactive_query.m"
      mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "), io.write_string(\", \"), ")));
#line 424 "interactive_query.m"
      return;
    }
#line 419 "interactive_query.m"
  }
#line 416 "interactive_query.m"
}

#line 408 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_line_directive_2_p_0(void)
#line 408 "interactive_query.m"
{
#line 410 "interactive_query.m"
  {
#line 410 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 410 "interactive_query.m"
    MR_Integer mdb__interactive_query__LineNum_4;

#line 411 "interactive_query.m"
    {
#line 411 "interactive_query.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#");
    }
#line 412 "interactive_query.m"
    {
#line 412 "interactive_query.m"
      mercury__io__get_line_number_3_p_0(&mdb__interactive_query__LineNum_4);
    }
#line 413 "interactive_query.m"
    {
#line 413 "interactive_query.m"
      mercury__io__write_int_3_p_0(mdb__interactive_query__LineNum_4);
    }
#line 414 "interactive_query.m"
    {
#line 414 "interactive_query.m"
      mercury__io__nl_2_p_0();
#line 414 "interactive_query.m"
      return;
    }
#line 410 "interactive_query.m"
  }
#line 408 "interactive_query.m"
}

#line 329 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_2(
#line 329 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 329 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 329 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 329 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3)
#line 329 "interactive_query.m"
{
#line 329 "interactive_query.m"
  {
#line 329 "interactive_query.m"
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

#line 329 "interactive_query.m"
    {
#line 329 "interactive_query.m"
      mdb__interactive_query__write_code_to_print_one_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_Word) mdb__interactive_query__wrapper_arg_1));
#line 329 "interactive_query.m"
      return;
    }
#line 329 "interactive_query.m"
  }
#line 329 "interactive_query.m"
}

#line 383 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_1(
#line 383 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 383 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 383 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 383 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3)
#line 383 "interactive_query.m"
{
#line 383 "interactive_query.m"
  {
#line 383 "interactive_query.m"
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

#line 383 "interactive_query.m"
    {
#line 383 "interactive_query.m"
      mdb__interactive_query__write_code_to_print_one_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_Word) mdb__interactive_query__wrapper_arg_1));
#line 383 "interactive_query.m"
      return;
    }
#line 383 "interactive_query.m"
  }
#line 383 "interactive_query.m"
}

#line 275 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0(
#line 275 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1)
#line 275 "interactive_query.m"
{
#line 277 "interactive_query.m"
  {
#line 277 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 277 "interactive_query.m"
    MR_Word mdb__interactive_query__QueryType_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
#line 277 "interactive_query.m"
    MR_Word mdb__interactive_query__Imports_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 1)));
#line 277 "interactive_query.m"
    MR_Word mdb__interactive_query__Term_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 2)));
#line 277 "interactive_query.m"
    MR_Word mdb__interactive_query__VarSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 3)));
#line 277 "interactive_query.m"
    MR_Word mdb__interactive_query__Out_9;
#line 277 "interactive_query.m"
    MR_Word mdb__interactive_query__V_17_17;

#line 278 "interactive_query.m"
    {
#line 278 "interactive_query.m"
      mercury__io__write_string_3_p_0((MR_String) "\n        :- module mdb_query.\n        :- interface.\n        :- import_module io.\n        :- pred run(io.state::di, io.state::uo) is cc_multi.\n        :- impleme" "ntation.\n        ");
    }
#line 285 "interactive_query.m"
    {
#line 285 "interactive_query.m"
      mercury__io__output_stream_3_p_0(&mdb__interactive_query__Out_9);
    }
#line 286 "interactive_query.m"
    {
#line 286 "interactive_query.m"
      mdb__interactive_query__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_17_17, 0) = ((MR_Box) ((MR_String) "solutions"));
#line 286 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_17_17, 1) = ((MR_Box) (mdb__interactive_query__Imports_5));
#line 286 "interactive_query.m"
    }
#line 286 "interactive_query.m"
    {
#line 286 "interactive_query.m"
      mdb__interactive_query__write_import_list_4_p_0(mdb__interactive_query__Out_9, mdb__interactive_query__V_17_17);
    }
#line 287 "interactive_query.m"
    {
#line 287 "interactive_query.m"
      mercury__io__write_string_3_p_0((MR_String) "\n            :- pragma source_file(\"<stdin>\").\n            run -->\n    ");
    }
#line 362 "interactive_query.m"
    if ((mdb__interactive_query__QueryType_4 == (MR_Integer) 1))
#line 363 "interactive_query.m"
      {
#line 363 "interactive_query.m"
        MR_Word mdb__interactive_query__TypeCtorInfo_84_84 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 363 "interactive_query.m"
        MR_Word mdb__interactive_query__TypeInfo_85_85;
#line 363 "interactive_query.m"
        MR_Word mdb__interactive_query__V_31_31;
#line 363 "interactive_query.m"
        MR_Word mdb__interactive_query__Vars0_76;
#line 363 "interactive_query.m"
        MR_Word mdb__interactive_query__Vars_77;
#line 383 "interactive_query.m"
        MR_Box mdb__interactive_query__conv0_STATE_VARIABLE_IO_32_32;

#line 378 "interactive_query.m"
        {
#line 378 "interactive_query.m"
          mercury__term__vars_2_p_0(mdb__interactive_query__TypeCtorInfo_84_84, mdb__interactive_query__Term_6, &mdb__interactive_query__Vars0_76);
        }
#line 3139 "mdb.interactive_query.c"
        mdb__interactive_query__TypeInfo_85_85 = (MR_Word) &mdb__interactive_query_scalar_common_1[0];
#line 379 "interactive_query.m"
        {
#line 379 "interactive_query.m"
          mercury__list__remove_dups_2_p_0(mdb__interactive_query__TypeInfo_85_85, mdb__interactive_query__Vars0_76, &mdb__interactive_query__Vars_77);
        }
#line 380 "interactive_query.m"
        {
#line 380 "interactive_query.m"
          mercury__io__write_string_3_p_0((MR_String) "(if { query");
        }
#line 381 "interactive_query.m"
        {
#line 381 "interactive_query.m"
          mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_77, mdb__interactive_query__VarSet_7);
        }
#line 382 "interactive_query.m"
        {
#line 382 "interactive_query.m"
          mercury__io__write_string_3_p_0((MR_String) " } then\n");
        }
#line 383 "interactive_query.m"
        {
#line 383 "interactive_query.m"
          mdb__interactive_query__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 383 "interactive_query.m"
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_31_31, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[0]));
#line 383 "interactive_query.m"
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_31_31, 1) = ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_1));
#line 383 "interactive_query.m"
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 383 "interactive_query.m"
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_31_31, 3) = ((MR_Box) (mdb__interactive_query__VarSet_7));
#line 383 "interactive_query.m"
        }
#line 383 "interactive_query.m"
        {
#line 383 "interactive_query.m"
          mercury__list__foldl_4_p_2(mdb__interactive_query__TypeInfo_85_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mdb__interactive_query__V_31_31, mdb__interactive_query__Vars_77, ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv0_STATE_VARIABLE_IO_32_32);
        }
#line 384 "interactive_query.m"
        {
#line 384 "interactive_query.m"
          mercury__io__write_string_3_p_0((MR_String) "\n                    io.write_string(\"true.\\n\")\n                else\n                    io.write_string(\"No solution.\\n\")\n                ).\n        ");
        }
#line 390 "interactive_query.m"
        {
#line 390 "interactive_query.m"
          mercury__io__write_string_3_p_0((MR_String) "query");
        }
#line 391 "interactive_query.m"
        {
#line 391 "interactive_query.m"
          mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_77, mdb__interactive_query__VarSet_7);
        }
#line 392 "interactive_query.m"
        {
#line 392 "interactive_query.m"
          mercury__io__write_string_3_p_0((MR_String) " :-\n");
        }
#line 393 "interactive_query.m"
        {
#line 393 "interactive_query.m"
          mdb__interactive_query__write_line_directive_2_p_0();
        }
#line 394 "interactive_query.m"
        {
#line 394 "interactive_query.m"
          mercury__term_io__write_term_4_p_0(mdb__interactive_query__TypeCtorInfo_84_84, mdb__interactive_query__VarSet_7, mdb__interactive_query__Term_6);
        }
#line 395 "interactive_query.m"
        {
#line 395 "interactive_query.m"
          mercury__io__write_string_3_p_0((MR_String) " .\n");
#line 395 "interactive_query.m"
          return;
        }
#line 363 "interactive_query.m"
      }
#line 362 "interactive_query.m"
    else
#line 362 "interactive_query.m"
      if ((mdb__interactive_query__QueryType_4 == (MR_Integer) 2))
#line 397 "interactive_query.m"
        {
#line 403 "interactive_query.m"
          {
#line 403 "interactive_query.m"
            mdb__interactive_query__write_line_directive_2_p_0();
          }
#line 404 "interactive_query.m"
          {
#line 404 "interactive_query.m"
            mercury__term_io__write_term_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, mdb__interactive_query__VarSet_7, mdb__interactive_query__Term_6);
          }
#line 405 "interactive_query.m"
          {
#line 405 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) " .\n");
#line 405 "interactive_query.m"
            return;
          }
#line 397 "interactive_query.m"
        }
#line 362 "interactive_query.m"
      else
#line 292 "interactive_query.m"
        {
#line 292 "interactive_query.m"
          MR_Word mdb__interactive_query__TypeCtorInfo_78_78 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 292 "interactive_query.m"
          MR_Word mdb__interactive_query__TypeInfo_79_79;
#line 292 "interactive_query.m"
          MR_Word mdb__interactive_query__Vars0_10;
#line 292 "interactive_query.m"
          MR_Word mdb__interactive_query__Vars_11;
#line 292 "interactive_query.m"
          MR_Word mdb__interactive_query__V_57_57;
#line 329 "interactive_query.m"
          MR_Box mdb__interactive_query__conv1_STATE_VARIABLE_IO_58_58;

#line 293 "interactive_query.m"
          {
#line 293 "interactive_query.m"
            mercury__term__vars_2_p_0(mdb__interactive_query__TypeCtorInfo_78_78, mdb__interactive_query__Term_6, &mdb__interactive_query__Vars0_10);
          }
#line 3266 "mdb.interactive_query.c"
          mdb__interactive_query__TypeInfo_79_79 = (MR_Word) &mdb__interactive_query_scalar_common_1[0];
#line 294 "interactive_query.m"
          {
#line 294 "interactive_query.m"
            mercury__list__remove_dups_2_p_0(mdb__interactive_query__TypeInfo_79_79, mdb__interactive_query__Vars0_10, &mdb__interactive_query__Vars_11);
          }
#line 317 "interactive_query.m"
          {
#line 317 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "\n            unsorted_aggregate(\n                (pred(res");
          }
#line 320 "interactive_query.m"
          {
#line 320 "interactive_query.m"
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
#line 321 "interactive_query.m"
          {
#line 321 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "::out) is nondet :-\n            query");
          }
#line 323 "interactive_query.m"
          {
#line 323 "interactive_query.m"
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
#line 324 "interactive_query.m"
          {
#line 324 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "),");
          }
#line 325 "interactive_query.m"
          {
#line 325 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "(pred(res");
          }
#line 326 "interactive_query.m"
          {
#line 326 "interactive_query.m"
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
#line 327 "interactive_query.m"
          {
#line 327 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "::in, di, uo) is cc_multi -->\n            ");
          }
#line 329 "interactive_query.m"
          {
#line 329 "interactive_query.m"
            mdb__interactive_query__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 329 "interactive_query.m"
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_5[0]));
#line 329 "interactive_query.m"
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 1) = ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_2));
#line 329 "interactive_query.m"
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 329 "interactive_query.m"
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 3) = ((MR_Box) (mdb__interactive_query__VarSet_7));
#line 329 "interactive_query.m"
          }
#line 329 "interactive_query.m"
          {
#line 329 "interactive_query.m"
            mercury__list__foldl_4_p_2(mdb__interactive_query__TypeInfo_79_79, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mdb__interactive_query__V_57_57, mdb__interactive_query__Vars_11, ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv1_STATE_VARIABLE_IO_58_58);
          }
#line 330 "interactive_query.m"
          {
#line 330 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "\n                    io.write_string(\"true ;\n\"))\n                ),\n                io.write_string(\"fail.\n\"),\n                io.write_string(\"No (more) soluti" "ons.\n\").\n\n            :- type res");
          }
#line 337 "interactive_query.m"
          {
#line 337 "interactive_query.m"
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
#line 338 "interactive_query.m"
          {
#line 338 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) " ---> res");
          }
#line 339 "interactive_query.m"
          {
#line 339 "interactive_query.m"
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
#line 340 "interactive_query.m"
          {
#line 340 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
#line 355 "interactive_query.m"
          {
#line 355 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "\n            query");
          }
#line 357 "interactive_query.m"
          {
#line 357 "interactive_query.m"
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
#line 358 "interactive_query.m"
          {
#line 358 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) " :- ");
          }
#line 359 "interactive_query.m"
          {
#line 359 "interactive_query.m"
            mdb__interactive_query__write_line_directive_2_p_0();
          }
#line 360 "interactive_query.m"
          {
#line 360 "interactive_query.m"
            mercury__term_io__write_term_4_p_0(mdb__interactive_query__TypeCtorInfo_78_78, mdb__interactive_query__VarSet_7, mdb__interactive_query__Term_6);
          }
#line 361 "interactive_query.m"
          {
#line 361 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) " .\n");
#line 361 "interactive_query.m"
            return;
          }
#line 292 "interactive_query.m"
        }
#line 277 "interactive_query.m"
  }
#line 275 "interactive_query.m"
}

#line 215 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__run_query_4_p_0(
#line 215 "interactive_query.m"
  MR_String mdb__interactive_query__Options_5,
#line 215 "interactive_query.m"
  MR_Word mdb__interactive_query__Program_6)
#line 215 "interactive_query.m"
{
#line 217 "interactive_query.m"
  {
#line 217 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 217 "interactive_query.m"
    MR_Word mdb__interactive_query__MaybeMercuryOptions_9;

#line 219 "interactive_query.m"
    {
#line 219 "interactive_query.m"
      mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", &mdb__interactive_query__MaybeMercuryOptions_9);
    }
#line 233 "interactive_query.m"
    if ((mdb__interactive_query__MaybeMercuryOptions_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 234 "interactive_query.m"
      {
#line 235 "interactive_query.m"
        {
#line 235 "interactive_query.m"
          mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Unable to unset MERCURY_OPTIONS environment variable")));
#line 235 "interactive_query.m"
          return;
        }
#line 234 "interactive_query.m"
      }
#line 233 "interactive_query.m"
    else
#line 221 "interactive_query.m"
      {
#line 221 "interactive_query.m"
        MR_String mdb__interactive_query__MercuryOptions_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__MaybeMercuryOptions_9, (MR_Integer) 0)));
#line 221 "interactive_query.m"
        MR_Word mdb__interactive_query__Succeeded_11;
#line 221 "interactive_query.m"
        MR_Word mdb__interactive_query__Stream_35;
#line 221 "interactive_query.m"
        MR_Word mdb__interactive_query__OldStream_36;
#line 221 "interactive_query.m"
        MR_Word mdb__interactive_query__Result_48;
#line 249 "interactive_query.m"
        MR_Word mdb__interactive_query__V_37_37;

#line 222 "interactive_query.m"
        {
#line 222 "interactive_query.m"
          mercury__io__set_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", (MR_String) "");
        }
#line 256 "interactive_query.m"
        {
#line 256 "interactive_query.m"
          mercury__io__open_output_4_p_0((MR_String) "mdb_query.m", &mdb__interactive_query__Result_48);
        }
#line 260 "interactive_query.m"
        if (((MR_tag((MR_Word) mdb__interactive_query__Result_48)) == (MR_mktag((MR_Integer) 1))))
#line 261 "interactive_query.m"
          {
#line 261 "interactive_query.m"
            MR_Word mdb__interactive_query__Error_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_48, (MR_Integer) 0)));
#line 261 "interactive_query.m"
            MR_String mdb__interactive_query__Progname_51;
#line 261 "interactive_query.m"
            MR_String mdb__interactive_query__ErrorMessage_52;
#line 261 "interactive_query.m"
            MR_String mdb__interactive_query__Message_53;
#line 261 "interactive_query.m"
            MR_Word mdb__interactive_query__V_57_57;
#line 261 "interactive_query.m"
            MR_Word mdb__interactive_query__V_58_58;
#line 261 "interactive_query.m"
            MR_Word mdb__interactive_query__V_60_60;
#line 261 "interactive_query.m"
            MR_Word mdb__interactive_query__V_62_62;
#line 261 "interactive_query.m"
            MR_Word mdb__interactive_query__V_63_63;
#line 261 "interactive_query.m"
            MR_Word mdb__interactive_query__V_65_65;

#line 262 "interactive_query.m"
            {
#line 262 "interactive_query.m"
              mercury__io__progname_4_p_0((MR_String) "interactive", &mdb__interactive_query__Progname_51);
            }
#line 263 "interactive_query.m"
            {
#line 263 "interactive_query.m"
              mercury__io__error_message_2_p_0(mdb__interactive_query__Error_50, &mdb__interactive_query__ErrorMessage_52);
            }
#line 266 "interactive_query.m"
            {
#line 266 "interactive_query.m"
              mdb__interactive_query__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_65_65, 0) = ((MR_Box) (mdb__interactive_query__ErrorMessage_52));
#line 266 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[4])));
#line 266 "interactive_query.m"
            }
#line 266 "interactive_query.m"
            {
#line 266 "interactive_query.m"
              mdb__interactive_query__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_63_63, 0) = ((MR_Box) ((MR_String) "\' for output:\n\t"));
#line 266 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_63_63, 1) = ((MR_Box) (mdb__interactive_query__V_65_65));
#line 266 "interactive_query.m"
            }
#line 266 "interactive_query.m"
            {
#line 266 "interactive_query.m"
              mdb__interactive_query__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_62_62, 0) = ((MR_Box) ((MR_String) "mdb_query.m"));
#line 266 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_62_62, 1) = ((MR_Box) (mdb__interactive_query__V_63_63));
#line 266 "interactive_query.m"
            }
#line 265 "interactive_query.m"
            {
#line 265 "interactive_query.m"
              mdb__interactive_query__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_60_60, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 265 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_60_60, 1) = ((MR_Box) (mdb__interactive_query__V_62_62));
#line 265 "interactive_query.m"
            }
#line 265 "interactive_query.m"
            {
#line 265 "interactive_query.m"
              mdb__interactive_query__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_58_58, 0) = ((MR_Box) ((MR_String) ": "));
#line 265 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_58_58, 1) = ((MR_Box) (mdb__interactive_query__V_60_60));
#line 265 "interactive_query.m"
            }
#line 264 "interactive_query.m"
            {
#line 264 "interactive_query.m"
              mdb__interactive_query__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_57_57, 0) = ((MR_Box) (mdb__interactive_query__Progname_51));
#line 264 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_57_57, 1) = ((MR_Box) (mdb__interactive_query__V_58_58));
#line 264 "interactive_query.m"
            }
#line 264 "interactive_query.m"
            {
#line 264 "interactive_query.m"
              mercury__string__append_list_2_p_0(mdb__interactive_query__V_57_57, &mdb__interactive_query__Message_53);
            }
#line 269 "interactive_query.m"
            {
#line 269 "interactive_query.m"
              mercury__io__write_string_3_p_0(mdb__interactive_query__Message_53);
            }
#line 272 "interactive_query.m"
            {
#line 272 "interactive_query.m"
              mercury__io__stdout_stream_3_p_0(&mdb__interactive_query__Stream_35);
            }
#line 261 "interactive_query.m"
          }
#line 260 "interactive_query.m"
        else
#line 258 "interactive_query.m"
          mdb__interactive_query__Stream_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Result_48, (MR_Integer) 0)));
#line 247 "interactive_query.m"
        {
#line 247 "interactive_query.m"
          mercury__io__set_output_stream_4_p_0(mdb__interactive_query__Stream_35, &mdb__interactive_query__OldStream_36);
        }
#line 248 "interactive_query.m"
        {
#line 248 "interactive_query.m"
          mdb__interactive_query__write_prog_to_stream_3_p_0(mdb__interactive_query__Program_6);
        }
#line 249 "interactive_query.m"
        {
#line 249 "interactive_query.m"
          mercury__io__set_output_stream_4_p_0(mdb__interactive_query__OldStream_36, &mdb__interactive_query__V_37_37);
        }
#line 250 "interactive_query.m"
        {
#line 250 "interactive_query.m"
          mercury__io__close_output_3_p_0(mdb__interactive_query__Stream_35);
        }
#line 224 "interactive_query.m"
        {
#line 224 "interactive_query.m"
          mdb__interactive_query__compile_file_4_p_0(mdb__interactive_query__Options_5, &mdb__interactive_query__Succeeded_11);
        }
#line 228 "interactive_query.m"
        if ((mdb__interactive_query__Succeeded_11 == (MR_Integer) 0))
#line 229 "interactive_query.m"
          {
#line 229 "interactive_query.m"
          }
#line 228 "interactive_query.m"
        else
#line 227 "interactive_query.m"
          {
#line 227 "interactive_query.m"
            mdb__interactive_query__dynamically_load_and_run_2_p_0();
          }
#line 231 "interactive_query.m"
        {
#line 231 "interactive_query.m"
          mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0();
        }
#line 232 "interactive_query.m"
        {
#line 232 "interactive_query.m"
          mercury__io__set_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", mdb__interactive_query__MercuryOptions_10);
#line 232 "interactive_query.m"
          return;
        }
#line 221 "interactive_query.m"
      }
#line 217 "interactive_query.m"
  }
#line 215 "interactive_query.m"
}

#line 207 "interactive_query.m"
static MR_bool MR_CALL 
mdb__interactive_query__term_to_list_2_p_0(
#line 207 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1,
#line 207 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__2_2)
#line 207 "interactive_query.m"
{
#line 209 "interactive_query.m"
  {
#line 209 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 209 "interactive_query.m"
    MR_Word mdb__interactive_query__V_21_21;
#line 209 "interactive_query.m"
    MR_Word mdb__interactive_query__V_22_22;
#line 209 "interactive_query.m"
    MR_String mdb__interactive_query__V_23_23;
#line 209 "interactive_query.m"
    MR_Word mdb__interactive_query__V_20_20;

#line 209 "interactive_query.m"
    if (mdb__interactive_query__succeeded)
#line 209 "interactive_query.m"
      {
#line 209 "interactive_query.m"
        mdb__interactive_query__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
#line 209 "interactive_query.m"
        mdb__interactive_query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 1)));
#line 209 "interactive_query.m"
        mdb__interactive_query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 2)));
#line 209 "interactive_query.m"
        mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 209 "interactive_query.m"
        if (mdb__interactive_query__succeeded)
#line 209 "interactive_query.m"
          {
#line 209 "interactive_query.m"
            mdb__interactive_query__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_22_22, (MR_Integer) 0)));
#line 209 "interactive_query.m"
            if ((mdb__interactive_query__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "interactive_query.m"
              {
#line 209 "interactive_query.m"
                mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_23_23, (MR_String) "[]") == 0);
#line 209 "interactive_query.m"
                if (mdb__interactive_query__succeeded)
#line 209 "interactive_query.m"
                  {
#line 209 "interactive_query.m"
                    *mdb__interactive_query__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "interactive_query.m"
                    mdb__interactive_query__succeeded = MR_TRUE;
#line 209 "interactive_query.m"
                  }
#line 209 "interactive_query.m"
              }
#line 209 "interactive_query.m"
            else
#line 212 "interactive_query.m"
              {
#line 212 "interactive_query.m"
                MR_String mdb__interactive_query__Module_7;
#line 212 "interactive_query.m"
                MR_Word mdb__interactive_query__Rest_9;
#line 212 "interactive_query.m"
                MR_Word mdb__interactive_query__Modules_11;
#line 212 "interactive_query.m"
                MR_Word mdb__interactive_query__V_15_15;
#line 212 "interactive_query.m"
                MR_Word mdb__interactive_query__V_16_16;
#line 212 "interactive_query.m"
                MR_Word mdb__interactive_query__V_17_17;
#line 212 "interactive_query.m"
                MR_Word mdb__interactive_query__V_18_18;
#line 212 "interactive_query.m"
                MR_Word mdb__interactive_query__V_19_19;
#line 211 "interactive_query.m"
                MR_Word mdb__interactive_query___C1_8;

#line 210 "interactive_query.m"
                mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_23_23, (MR_String) "[|]") == 0);
#line 212 "interactive_query.m"
                if (mdb__interactive_query__succeeded)
#line 212 "interactive_query.m"
                  {
#line 210 "interactive_query.m"
                    mdb__interactive_query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_21_21, (MR_Integer) 0)));
#line 210 "interactive_query.m"
                    mdb__interactive_query__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_21_21, (MR_Integer) 1)));
#line 211 "interactive_query.m"
                    mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 211 "interactive_query.m"
                    if (mdb__interactive_query__succeeded)
#line 211 "interactive_query.m"
                      {
#line 211 "interactive_query.m"
                        mdb__interactive_query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, (MR_Integer) 0)));
#line 211 "interactive_query.m"
                        mdb__interactive_query__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, (MR_Integer) 1)));
#line 211 "interactive_query.m"
                        mdb__interactive_query___C1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, (MR_Integer) 2)));
#line 211 "interactive_query.m"
                        mdb__interactive_query__succeeded = (mdb__interactive_query__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "interactive_query.m"
                        if (mdb__interactive_query__succeeded)
#line 212 "interactive_query.m"
                          {
#line 211 "interactive_query.m"
                            mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 211 "interactive_query.m"
                            if (mdb__interactive_query__succeeded)
#line 211 "interactive_query.m"
                              {
#line 211 "interactive_query.m"
                                mdb__interactive_query__Module_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_16_16, (MR_Integer) 0)));
#line 211 "interactive_query.m"
                                mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 211 "interactive_query.m"
                                if (mdb__interactive_query__succeeded)
#line 211 "interactive_query.m"
                                  {
#line 211 "interactive_query.m"
                                    mdb__interactive_query__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_18_18, (MR_Integer) 0)));
#line 211 "interactive_query.m"
                                    mdb__interactive_query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_18_18, (MR_Integer) 1)));
#line 211 "interactive_query.m"
                                    mdb__interactive_query__succeeded = (mdb__interactive_query__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "interactive_query.m"
                                    if (mdb__interactive_query__succeeded)
#line 212 "interactive_query.m"
                                      {
#line 213 "interactive_query.m"
                                        {
#line 213 "interactive_query.m"
                                          mdb__interactive_query__succeeded = mdb__interactive_query__term_to_list_2_p_0(mdb__interactive_query__Rest_9, &mdb__interactive_query__Modules_11);
                                        }
#line 212 "interactive_query.m"
                                        if (mdb__interactive_query__succeeded)
#line 212 "interactive_query.m"
                                          {
#line 212 "interactive_query.m"
                                            {
#line 212 "interactive_query.m"
                                              MR_Word base;
#line 212 "interactive_query.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "interactive_query.m"
                                              *mdb__interactive_query__HeadVar__2_2 = base;
#line 212 "interactive_query.m"
                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__interactive_query__Module_7));
#line 212 "interactive_query.m"
                                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__interactive_query__Modules_11));
#line 212 "interactive_query.m"
                                            }
#line 212 "interactive_query.m"
                                            mdb__interactive_query__succeeded = MR_TRUE;
#line 212 "interactive_query.m"
                                          }
#line 212 "interactive_query.m"
                                      }
#line 211 "interactive_query.m"
                                  }
#line 211 "interactive_query.m"
                              }
#line 212 "interactive_query.m"
                          }
#line 211 "interactive_query.m"
                      }
#line 212 "interactive_query.m"
                  }
#line 212 "interactive_query.m"
              }
#line 209 "interactive_query.m"
          }
#line 209 "interactive_query.m"
      }
#line 209 "interactive_query.m"
    return mdb__interactive_query__succeeded;
#line 209 "interactive_query.m"
  }
#line 207 "interactive_query.m"
}

#line 193 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__send_term_to_socket_4_p_0(
#line 193 "interactive_query.m"
  MR_Word mdb__interactive_query__Term_5,
#line 193 "interactive_query.m"
  MR_Word mdb__interactive_query__SocketStream_6)
#line 193 "interactive_query.m"
{
#line 196 "interactive_query.m"
  {
#line 196 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;

#line 197 "interactive_query.m"
    {
#line 197 "interactive_query.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0, mdb__interactive_query__SocketStream_6, ((MR_Box) (mdb__interactive_query__Term_5)));
    }
#line 198 "interactive_query.m"
    {
#line 198 "interactive_query.m"
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__SocketStream_6, ((MR_Box) ((MR_String) ".\n")));
    }
#line 199 "interactive_query.m"
    {
#line 199 "interactive_query.m"
      mercury__io__flush_output_3_p_0(mdb__interactive_query__SocketStream_6);
#line 199 "interactive_query.m"
      return;
    }
#line 196 "interactive_query.m"
  }
#line 193 "interactive_query.m"
}

#line 448 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__query_2_8_p_0_1(
#line 448 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 448 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 448 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 448 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3)
#line 448 "interactive_query.m"
{
#line 448 "interactive_query.m"
  {
#line 448 "interactive_query.m"
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

#line 448 "interactive_query.m"
    {
#line 448 "interactive_query.m"
      mercury__term_io__quote_atom_3_p_0(((MR_String) mdb__interactive_query__wrapper_arg_1));
#line 448 "interactive_query.m"
      return;
    }
#line 448 "interactive_query.m"
  }
#line 448 "interactive_query.m"
}

#line 93 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__query_2_8_p_0(
#line 93 "interactive_query.m"
  MR_Word mdb__interactive_query__QueryType_9,
#line 93 "interactive_query.m"
  MR_Word mdb__interactive_query__Imports_10,
#line 93 "interactive_query.m"
  MR_String mdb__interactive_query__Options_11,
#line 93 "interactive_query.m"
  MR_Word mdb__interactive_query__MDB_Stdin_12,
#line 93 "interactive_query.m"
  MR_Word mdb__interactive_query__MDB_Stdout_13,
#line 93 "interactive_query.m"
  MR_Word mdb__interactive_query__ReadTerm_14)
#line 93 "interactive_query.m"
{
#line 99 "interactive_query.m"
  {
#line 99 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;

#line 99 "interactive_query.m"
    if ((mdb__interactive_query__ReadTerm_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 100 "interactive_query.m"
      {
#line 100 "interactive_query.m"
        mercury__io__nl_3_p_0(mdb__interactive_query__MDB_Stdout_13);
#line 100 "interactive_query.m"
        return;
      }
#line 99 "interactive_query.m"
    else
#line 99 "interactive_query.m"
      if (((MR_tag((MR_Word) mdb__interactive_query__ReadTerm_14)) == (MR_mktag((MR_Integer) 1))))
#line 102 "interactive_query.m"
        {
#line 102 "interactive_query.m"
          MR_String mdb__interactive_query__Msg_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__ReadTerm_14, (MR_Integer) 0)));
#line 102 "interactive_query.m"
          MR_Integer mdb__interactive_query___Line_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__interactive_query__ReadTerm_14, (MR_Integer) 1)));

#line 103 "interactive_query.m"
          {
#line 103 "interactive_query.m"
            mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_13, mdb__interactive_query__Msg_16);
          }
#line 104 "interactive_query.m"
          {
#line 104 "interactive_query.m"
            mercury__io__nl_3_p_0(mdb__interactive_query__MDB_Stdout_13);
          }
#line 105 "interactive_query.m"
          {
#line 105 "interactive_query.m"
            mdb__interactive_query__query_7_p_0(mdb__interactive_query__QueryType_9, mdb__interactive_query__Imports_10, mdb__interactive_query__Options_11, mdb__interactive_query__MDB_Stdin_12, mdb__interactive_query__MDB_Stdout_13);
#line 105 "interactive_query.m"
            return;
          }
#line 102 "interactive_query.m"
        }
#line 99 "interactive_query.m"
      else
#line 107 "interactive_query.m"
        {
#line 107 "interactive_query.m"
          MR_Word mdb__interactive_query__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__ReadTerm_14, (MR_Integer) 0)));
#line 107 "interactive_query.m"
          MR_Word mdb__interactive_query__Term_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__ReadTerm_14, (MR_Integer) 1)));
#line 112 "interactive_query.m"
          MR_Word mdb__interactive_query__V_28_28;
#line 112 "interactive_query.m"
          MR_String mdb__interactive_query__V_29_29;
#line 112 "interactive_query.m"
          MR_Word mdb__interactive_query__V_30_30;
#line 112 "interactive_query.m"
          MR_Word mdb__interactive_query__V_20_20;

#line 112 "interactive_query.m"
          mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__Term_19)) == (MR_mktag((MR_Integer) 0)));
#line 112 "interactive_query.m"
          if (mdb__interactive_query__succeeded)
#line 112 "interactive_query.m"
            {
#line 112 "interactive_query.m"
              mdb__interactive_query__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_19, (MR_Integer) 0)));
#line 112 "interactive_query.m"
              mdb__interactive_query__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_19, (MR_Integer) 1)));
#line 112 "interactive_query.m"
              mdb__interactive_query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_19, (MR_Integer) 2)));
#line 112 "interactive_query.m"
              mdb__interactive_query__succeeded = (mdb__interactive_query__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 112 "interactive_query.m"
              if (mdb__interactive_query__succeeded)
#line 112 "interactive_query.m"
                {
#line 112 "interactive_query.m"
                  mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_28_28)) == (MR_mktag((MR_Integer) 0)));
#line 112 "interactive_query.m"
                  if (mdb__interactive_query__succeeded)
#line 112 "interactive_query.m"
                    {
#line 112 "interactive_query.m"
                      mdb__interactive_query__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_28_28, (MR_Integer) 0)));
#line 112 "interactive_query.m"
                      mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_29_29, (MR_String) "quit") == 0);
#line 112 "interactive_query.m"
                    }
#line 112 "interactive_query.m"
                }
#line 112 "interactive_query.m"
            }
#line 115 "interactive_query.m"
          if (mdb__interactive_query__succeeded)
#line 114 "interactive_query.m"
            {
#line 114 "interactive_query.m"
              mercury__io__nl_3_p_0(mdb__interactive_query__MDB_Stdout_13);
#line 114 "interactive_query.m"
              return;
            }
#line 115 "interactive_query.m"
          else
#line 123 "interactive_query.m"
            {
#line 123 "interactive_query.m"
              MR_String mdb__interactive_query__NewOptions_21;
#line 116 "interactive_query.m"
              MR_Word mdb__interactive_query__V_32_32;
#line 116 "interactive_query.m"
              MR_String mdb__interactive_query__V_33_33;
#line 116 "interactive_query.m"
              MR_Word mdb__interactive_query__V_34_34;
#line 116 "interactive_query.m"
              MR_Word mdb__interactive_query__V_35_35;
#line 116 "interactive_query.m"
              MR_Word mdb__interactive_query__V_36_36;
#line 116 "interactive_query.m"
              MR_Word mdb__interactive_query__V_37_37;
#line 116 "interactive_query.m"
              MR_Word mdb__interactive_query__V_38_38;
#line 116 "interactive_query.m"
              MR_Word mdb__interactive_query__V_23_23;
#line 117 "interactive_query.m"
              MR_Word mdb__interactive_query__V_22_22;

#line 116 "interactive_query.m"
              mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__Term_19)) == (MR_mktag((MR_Integer) 0)));
#line 116 "interactive_query.m"
              if (mdb__interactive_query__succeeded)
#line 116 "interactive_query.m"
                {
#line 116 "interactive_query.m"
                  mdb__interactive_query__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_19, (MR_Integer) 0)));
#line 116 "interactive_query.m"
                  mdb__interactive_query__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_19, (MR_Integer) 1)));
#line 116 "interactive_query.m"
                  mdb__interactive_query__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_19, (MR_Integer) 2)));
#line 116 "interactive_query.m"
                  mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 116 "interactive_query.m"
                  if (mdb__interactive_query__succeeded)
#line 116 "interactive_query.m"
                    {
#line 116 "interactive_query.m"
                      mdb__interactive_query__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_32_32, (MR_Integer) 0)));
#line 116 "interactive_query.m"
                      mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_33_33, (MR_String) "options") == 0);
#line 116 "interactive_query.m"
                      if (mdb__interactive_query__succeeded)
#line 116 "interactive_query.m"
                        {
#line 116 "interactive_query.m"
                          mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 116 "interactive_query.m"
                          if (mdb__interactive_query__succeeded)
#line 116 "interactive_query.m"
                            {
#line 116 "interactive_query.m"
                              mdb__interactive_query__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_34_34, (MR_Integer) 0)));
#line 116 "interactive_query.m"
                              mdb__interactive_query__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_34_34, (MR_Integer) 1)));
#line 117 "interactive_query.m"
                              mdb__interactive_query__succeeded = (mdb__interactive_query__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 116 "interactive_query.m"
                              if (mdb__interactive_query__succeeded)
#line 116 "interactive_query.m"
                                {
#line 117 "interactive_query.m"
                                  mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_35_35)) == (MR_mktag((MR_Integer) 0)));
#line 117 "interactive_query.m"
                                  if (mdb__interactive_query__succeeded)
#line 117 "interactive_query.m"
                                    {
#line 117 "interactive_query.m"
                                      mdb__interactive_query__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_35_35, (MR_Integer) 0)));
#line 117 "interactive_query.m"
                                      mdb__interactive_query__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_35_35, (MR_Integer) 1)));
#line 117 "interactive_query.m"
                                      mdb__interactive_query__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_35_35, (MR_Integer) 2)));
#line 117 "interactive_query.m"
                                      mdb__interactive_query__succeeded = (mdb__interactive_query__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 116 "interactive_query.m"
                                      if (mdb__interactive_query__succeeded)
#line 116 "interactive_query.m"
                                        {
#line 117 "interactive_query.m"
                                          mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_36_36)) == (MR_mktag((MR_Integer) 2)));
#line 117 "interactive_query.m"
                                          if (mdb__interactive_query__succeeded)
#line 117 "interactive_query.m"
                                            mdb__interactive_query__NewOptions_21 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__V_36_36, (MR_Integer) 0)));
#line 116 "interactive_query.m"
                                        }
#line 117 "interactive_query.m"
                                    }
#line 116 "interactive_query.m"
                                }
#line 116 "interactive_query.m"
                            }
#line 116 "interactive_query.m"
                        }
#line 116 "interactive_query.m"
                    }
#line 116 "interactive_query.m"
                }
#line 123 "interactive_query.m"
              if (mdb__interactive_query__succeeded)
#line 119 "interactive_query.m"
                {
#line 119 "interactive_query.m"
                  MR_Word mdb__interactive_query__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 119 "interactive_query.m"
                  {
#line 119 "interactive_query.m"
                    mercury__io__print_4_p_0(mdb__interactive_query__TypeCtorInfo_54_54, mdb__interactive_query__MDB_Stdout_13, ((MR_Box) ((MR_String) "Compilation options: ")));
                  }
#line 120 "interactive_query.m"
                  {
#line 120 "interactive_query.m"
                    mercury__io__print_4_p_0(mdb__interactive_query__TypeCtorInfo_54_54, mdb__interactive_query__MDB_Stdout_13, ((MR_Box) (mdb__interactive_query__NewOptions_21)));
                  }
#line 121 "interactive_query.m"
                  {
#line 121 "interactive_query.m"
                    mercury__io__nl_3_p_0(mdb__interactive_query__MDB_Stdout_13);
                  }
#line 122 "interactive_query.m"
                  {
#line 122 "interactive_query.m"
                    mdb__interactive_query__query_7_p_0(mdb__interactive_query__QueryType_9, mdb__interactive_query__Imports_10, mdb__interactive_query__NewOptions_21, mdb__interactive_query__MDB_Stdin_12, mdb__interactive_query__MDB_Stdout_13);
#line 122 "interactive_query.m"
                    return;
                  }
#line 119 "interactive_query.m"
                }
#line 123 "interactive_query.m"
              else
#line 129 "interactive_query.m"
                {
#line 129 "interactive_query.m"
                  MR_Word mdb__interactive_query__ModuleList_24;

#line 124 "interactive_query.m"
                  {
#line 124 "interactive_query.m"
                    mdb__interactive_query__succeeded = mdb__interactive_query__term_to_list_2_p_0(mdb__interactive_query__Term_19, &mdb__interactive_query__ModuleList_24);
                  }
#line 129 "interactive_query.m"
                  if (mdb__interactive_query__succeeded)
#line 126 "interactive_query.m"
                    {
#line 126 "interactive_query.m"
                      MR_Word mdb__interactive_query__NewImports_25;

#line 126 "interactive_query.m"
                      {
#line 126 "interactive_query.m"
                        mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__Imports_10, mdb__interactive_query__ModuleList_24, &mdb__interactive_query__NewImports_25);
                      }
#line 447 "interactive_query.m"
                      {
#line 447 "interactive_query.m"
                        mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_13, (MR_String) ":- import_module ");
                      }
#line 448 "interactive_query.m"
                      {
#line 448 "interactive_query.m"
                        mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__MDB_Stdout_13, mdb__interactive_query__NewImports_25, (MR_String) ", ", (MR_Word) &mdb__interactive_query_scalar_common_4[0]);
                      }
#line 449 "interactive_query.m"
                      {
#line 449 "interactive_query.m"
                        mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_13, (MR_String) ".\n");
                      }
#line 128 "interactive_query.m"
                      {
#line 128 "interactive_query.m"
                        mdb__interactive_query__query_7_p_0(mdb__interactive_query__QueryType_9, mdb__interactive_query__NewImports_25, mdb__interactive_query__Options_11, mdb__interactive_query__MDB_Stdin_12, mdb__interactive_query__MDB_Stdout_13);
#line 128 "interactive_query.m"
                        return;
                      }
#line 126 "interactive_query.m"
                    }
#line 129 "interactive_query.m"
                  else
#line 134 "interactive_query.m"
                    {
#line 134 "interactive_query.m"
                      MR_Word mdb__interactive_query__V_47_47;

#line 134 "interactive_query.m"
                      {
#line 134 "interactive_query.m"
                        mercury__io__flush_output_3_p_0(mdb__interactive_query__MDB_Stdout_13);
                      }
#line 135 "interactive_query.m"
                      {
#line 135 "interactive_query.m"
                        mdb__interactive_query__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 135 "interactive_query.m"
                        MR_hl_field(MR_mktag(0), mdb__interactive_query__V_47_47, 0) = ((MR_Box) (mdb__interactive_query__QueryType_9));
#line 135 "interactive_query.m"
                        MR_hl_field(MR_mktag(0), mdb__interactive_query__V_47_47, 1) = ((MR_Box) (mdb__interactive_query__Imports_10));
#line 135 "interactive_query.m"
                        MR_hl_field(MR_mktag(0), mdb__interactive_query__V_47_47, 2) = ((MR_Box) (mdb__interactive_query__Term_19));
#line 135 "interactive_query.m"
                        MR_hl_field(MR_mktag(0), mdb__interactive_query__V_47_47, 3) = ((MR_Box) (mdb__interactive_query__VarSet_18));
#line 135 "interactive_query.m"
                      }
#line 135 "interactive_query.m"
                      {
#line 135 "interactive_query.m"
                        mdb__interactive_query__run_query_4_p_0(mdb__interactive_query__Options_11, mdb__interactive_query__V_47_47);
                      }
#line 136 "interactive_query.m"
                      {
#line 136 "interactive_query.m"
                        mdb__interactive_query__query_7_p_0(mdb__interactive_query__QueryType_9, mdb__interactive_query__Imports_10, mdb__interactive_query__Options_11, mdb__interactive_query__MDB_Stdin_12, mdb__interactive_query__MDB_Stdout_13);
#line 136 "interactive_query.m"
                        return;
                      }
#line 134 "interactive_query.m"
                    }
#line 129 "interactive_query.m"
                }
#line 123 "interactive_query.m"
            }
#line 107 "interactive_query.m"
        }
#line 99 "interactive_query.m"
  }
#line 93 "interactive_query.m"
}

#line 38 "interactive_query.m"
void MR_CALL 
mdb__interactive_query__query_external_7_p_0(
#line 38 "interactive_query.m"
  MR_Word mdb__interactive_query__QueryType_8,
#line 38 "interactive_query.m"
  MR_Word mdb__interactive_query__Imports_9,
#line 38 "interactive_query.m"
  MR_String mdb__interactive_query__Options_10,
#line 38 "interactive_query.m"
  MR_Word mdb__interactive_query__SocketIn_11,
#line 38 "interactive_query.m"
  MR_Word mdb__interactive_query__SocketOut_12)
#line 38 "interactive_query.m"
{
#line 154 "interactive_query.m"
  while (MR_TRUE)
#line 154 "interactive_query.m"
    {
#line 154 "interactive_query.m"
      /* tailcall optimized into a loop */
#line 154 "interactive_query.m"
      {
#line 154 "interactive_query.m"
        MR_bool mdb__interactive_query__succeeded;
#line 154 "interactive_query.m"
        MR_Word mdb__interactive_query__OldStdin_14;
#line 154 "interactive_query.m"
        MR_Word mdb__interactive_query__Result_15;
#line 157 "interactive_query.m"
        MR_Word mdb__interactive_query__V_16_16;

#line 155 "interactive_query.m"
        {
#line 155 "interactive_query.m"
          mercury__io__set_input_stream_4_p_0(mdb__interactive_query__SocketIn_11, &mdb__interactive_query__OldStdin_14);
        }
#line 156 "interactive_query.m"
        {
#line 156 "interactive_query.m"
          mercury__term_io__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &mdb__interactive_query__Result_15);
        }
#line 157 "interactive_query.m"
        {
#line 157 "interactive_query.m"
          mercury__io__set_input_stream_4_p_0(mdb__interactive_query__OldStdin_14, &mdb__interactive_query__V_16_16);
        }
#line 161 "interactive_query.m"
        if ((mdb__interactive_query__Result_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 159 "interactive_query.m"
          {
#line 197 "interactive_query.m"
            {
#line 197 "interactive_query.m"
              mercury__io__write_4_p_0((MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0, mdb__interactive_query__SocketOut_12, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))));
            }
#line 198 "interactive_query.m"
            {
#line 198 "interactive_query.m"
              mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__SocketOut_12, ((MR_Box) ((MR_String) ".\n")));
            }
#line 199 "interactive_query.m"
            {
#line 199 "interactive_query.m"
              mercury__io__flush_output_3_p_0(mdb__interactive_query__SocketOut_12);
#line 199 "interactive_query.m"
              return;
            }
#line 159 "interactive_query.m"
          }
#line 161 "interactive_query.m"
        else
#line 161 "interactive_query.m"
          if (((MR_tag((MR_Word) mdb__interactive_query__Result_15)) == (MR_mktag((MR_Integer) 1))))
#line 162 "interactive_query.m"
            {
#line 162 "interactive_query.m"
              MR_String mdb__interactive_query__ErrorMsg_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_15, (MR_Integer) 0)));
#line 162 "interactive_query.m"
              MR_Word mdb__interactive_query__V_55_55;
#line 162 "interactive_query.m"
              MR_Integer mdb__interactive_query___Line_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_15, (MR_Integer) 1)));

#line 163 "interactive_query.m"
              {
#line 163 "interactive_query.m"
                mdb__interactive_query__V_55_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 163 "interactive_query.m"
                MR_hl_field(MR_mktag(2), mdb__interactive_query__V_55_55, 0) = ((MR_Box) (mdb__interactive_query__ErrorMsg_17));
#line 163 "interactive_query.m"
              }
#line 197 "interactive_query.m"
              {
#line 197 "interactive_query.m"
                mercury__io__write_4_p_0((MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0, mdb__interactive_query__SocketOut_12, ((MR_Box) (mdb__interactive_query__V_55_55)));
              }
#line 198 "interactive_query.m"
              {
#line 198 "interactive_query.m"
                mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__SocketOut_12, ((MR_Box) ((MR_String) ".\n")));
              }
#line 199 "interactive_query.m"
              {
#line 199 "interactive_query.m"
                mercury__io__flush_output_3_p_0(mdb__interactive_query__SocketOut_12);
              }
#line 164 "interactive_query.m"
              /* direct tailcall eliminated */
#line 164 "interactive_query.m"
              {
#line 164 "interactive_query.m"
              }
#line 164 "interactive_query.m"
              continue;
#line 162 "interactive_query.m"
            }
#line 161 "interactive_query.m"
          else
#line 166 "interactive_query.m"
            {
#line 166 "interactive_query.m"
              MR_Word mdb__interactive_query__VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__Result_15, (MR_Integer) 0)));
#line 166 "interactive_query.m"
              MR_Word mdb__interactive_query__Term_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__Result_15, (MR_Integer) 1)));
#line 168 "interactive_query.m"
              MR_Word mdb__interactive_query__V_32_32;
#line 168 "interactive_query.m"
              MR_String mdb__interactive_query__V_33_33;
#line 168 "interactive_query.m"
              MR_Word mdb__interactive_query__V_34_34;
#line 168 "interactive_query.m"
              MR_Word mdb__interactive_query__V_21_21;

#line 168 "interactive_query.m"
              mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__Term_20)) == (MR_mktag((MR_Integer) 0)));
#line 168 "interactive_query.m"
              if (mdb__interactive_query__succeeded)
#line 168 "interactive_query.m"
                {
#line 168 "interactive_query.m"
                  mdb__interactive_query__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_20, (MR_Integer) 0)));
#line 168 "interactive_query.m"
                  mdb__interactive_query__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_20, (MR_Integer) 1)));
#line 168 "interactive_query.m"
                  mdb__interactive_query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_20, (MR_Integer) 2)));
#line 168 "interactive_query.m"
                  mdb__interactive_query__succeeded = (mdb__interactive_query__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "interactive_query.m"
                  if (mdb__interactive_query__succeeded)
#line 168 "interactive_query.m"
                    {
#line 168 "interactive_query.m"
                      mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_32_32)) == (MR_mktag((MR_Integer) 0)));
#line 168 "interactive_query.m"
                      if (mdb__interactive_query__succeeded)
#line 168 "interactive_query.m"
                        {
#line 168 "interactive_query.m"
                          mdb__interactive_query__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_32_32, (MR_Integer) 0)));
#line 168 "interactive_query.m"
                          mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_33_33, (MR_String) "quit") == 0);
#line 168 "interactive_query.m"
                        }
#line 168 "interactive_query.m"
                    }
#line 168 "interactive_query.m"
                }
#line 171 "interactive_query.m"
              if (mdb__interactive_query__succeeded)
#line 170 "interactive_query.m"
                {
#line 197 "interactive_query.m"
                  {
#line 197 "interactive_query.m"
                    mercury__io__write_4_p_0((MR_Word) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_interactive_query_response_0, mdb__interactive_query__SocketOut_12, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))));
                  }
#line 198 "interactive_query.m"
                  {
#line 198 "interactive_query.m"
                    mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__SocketOut_12, ((MR_Box) ((MR_String) ".\n")));
                  }
#line 199 "interactive_query.m"
                  {
#line 199 "interactive_query.m"
                    mercury__io__flush_output_3_p_0(mdb__interactive_query__SocketOut_12);
#line 199 "interactive_query.m"
                    return;
                  }
#line 170 "interactive_query.m"
                }
#line 171 "interactive_query.m"
              else
#line 178 "interactive_query.m"
                {
#line 178 "interactive_query.m"
                  MR_String mdb__interactive_query__NewOptions_22;
#line 172 "interactive_query.m"
                  MR_Word mdb__interactive_query__V_37_37;
#line 172 "interactive_query.m"
                  MR_String mdb__interactive_query__V_38_38;
#line 172 "interactive_query.m"
                  MR_Word mdb__interactive_query__V_39_39;
#line 172 "interactive_query.m"
                  MR_Word mdb__interactive_query__V_40_40;
#line 172 "interactive_query.m"
                  MR_Word mdb__interactive_query__V_41_41;
#line 172 "interactive_query.m"
                  MR_Word mdb__interactive_query__V_42_42;
#line 172 "interactive_query.m"
                  MR_Word mdb__interactive_query__V_43_43;
#line 172 "interactive_query.m"
                  MR_Word mdb__interactive_query__V_24_24;
#line 173 "interactive_query.m"
                  MR_Word mdb__interactive_query__V_23_23;

#line 172 "interactive_query.m"
                  mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__Term_20)) == (MR_mktag((MR_Integer) 0)));
#line 172 "interactive_query.m"
                  if (mdb__interactive_query__succeeded)
#line 172 "interactive_query.m"
                    {
#line 172 "interactive_query.m"
                      mdb__interactive_query__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_20, (MR_Integer) 0)));
#line 172 "interactive_query.m"
                      mdb__interactive_query__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_20, (MR_Integer) 1)));
#line 172 "interactive_query.m"
                      mdb__interactive_query__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Term_20, (MR_Integer) 2)));
#line 172 "interactive_query.m"
                      mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_37_37)) == (MR_mktag((MR_Integer) 0)));
#line 172 "interactive_query.m"
                      if (mdb__interactive_query__succeeded)
#line 172 "interactive_query.m"
                        {
#line 172 "interactive_query.m"
                          mdb__interactive_query__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_37_37, (MR_Integer) 0)));
#line 172 "interactive_query.m"
                          mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_38_38, (MR_String) "options") == 0);
#line 172 "interactive_query.m"
                          if (mdb__interactive_query__succeeded)
#line 172 "interactive_query.m"
                            {
#line 172 "interactive_query.m"
                              mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 172 "interactive_query.m"
                              if (mdb__interactive_query__succeeded)
#line 172 "interactive_query.m"
                                {
#line 172 "interactive_query.m"
                                  mdb__interactive_query__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_39_39, (MR_Integer) 0)));
#line 172 "interactive_query.m"
                                  mdb__interactive_query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_39_39, (MR_Integer) 1)));
#line 173 "interactive_query.m"
                                  mdb__interactive_query__succeeded = (mdb__interactive_query__V_43_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 172 "interactive_query.m"
                                  if (mdb__interactive_query__succeeded)
#line 172 "interactive_query.m"
                                    {
#line 173 "interactive_query.m"
                                      mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_40_40)) == (MR_mktag((MR_Integer) 0)));
#line 173 "interactive_query.m"
                                      if (mdb__interactive_query__succeeded)
#line 173 "interactive_query.m"
                                        {
#line 173 "interactive_query.m"
                                          mdb__interactive_query__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_40_40, (MR_Integer) 0)));
#line 173 "interactive_query.m"
                                          mdb__interactive_query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_40_40, (MR_Integer) 1)));
#line 173 "interactive_query.m"
                                          mdb__interactive_query__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__V_40_40, (MR_Integer) 2)));
#line 173 "interactive_query.m"
                                          mdb__interactive_query__succeeded = (mdb__interactive_query__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 172 "interactive_query.m"
                                          if (mdb__interactive_query__succeeded)
#line 172 "interactive_query.m"
                                            {
#line 173 "interactive_query.m"
                                              mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_41_41)) == (MR_mktag((MR_Integer) 2)));
#line 173 "interactive_query.m"
                                              if (mdb__interactive_query__succeeded)
#line 173 "interactive_query.m"
                                                mdb__interactive_query__NewOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__V_41_41, (MR_Integer) 0)));
#line 172 "interactive_query.m"
                                            }
#line 173 "interactive_query.m"
                                        }
#line 172 "interactive_query.m"
                                    }
#line 172 "interactive_query.m"
                                }
#line 172 "interactive_query.m"
                            }
#line 172 "interactive_query.m"
                        }
#line 172 "interactive_query.m"
                    }
#line 178 "interactive_query.m"
                  if (mdb__interactive_query__succeeded)
#line 175 "interactive_query.m"
                    {
#line 175 "interactive_query.m"
                      {
#line 175 "interactive_query.m"
                        mdb__interactive_query__send_term_to_socket_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__interactive_query__SocketOut_12);
                      }
#line 176 "interactive_query.m"
                      /* direct tailcall eliminated */
#line 176 "interactive_query.m"
                      {
#line 176 "interactive_query.m"
                        MR_String mdb__interactive_query__Options__tmp_copy_10 = mdb__interactive_query__NewOptions_22;

#line 176 "interactive_query.m"
                        mdb__interactive_query__Options_10 = mdb__interactive_query__Options__tmp_copy_10;
#line 176 "interactive_query.m"
                      }
#line 176 "interactive_query.m"
                      continue;
#line 175 "interactive_query.m"
                    }
#line 178 "interactive_query.m"
                  else
#line 185 "interactive_query.m"
                    {
#line 185 "interactive_query.m"
                      MR_Word mdb__interactive_query__ModuleList_25;

#line 179 "interactive_query.m"
                      {
#line 179 "interactive_query.m"
                        mdb__interactive_query__succeeded = mdb__interactive_query__term_to_list_2_p_0(mdb__interactive_query__Term_20, &mdb__interactive_query__ModuleList_25);
                      }
#line 185 "interactive_query.m"
                      if (mdb__interactive_query__succeeded)
#line 181 "interactive_query.m"
                        {
#line 181 "interactive_query.m"
                          MR_Word mdb__interactive_query__NewImports_26;
#line 181 "interactive_query.m"
                          MR_Word mdb__interactive_query__V_47_47;

#line 181 "interactive_query.m"
                          {
#line 181 "interactive_query.m"
                            mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__Imports_9, mdb__interactive_query__ModuleList_25, &mdb__interactive_query__NewImports_26);
                          }
#line 182 "interactive_query.m"
                          {
#line 182 "interactive_query.m"
                            mdb__interactive_query__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 182 "interactive_query.m"
                            MR_hl_field(MR_mktag(1), mdb__interactive_query__V_47_47, 0) = ((MR_Box) (mdb__interactive_query__NewImports_26));
#line 182 "interactive_query.m"
                          }
#line 182 "interactive_query.m"
                          {
#line 182 "interactive_query.m"
                            mdb__interactive_query__send_term_to_socket_4_p_0(mdb__interactive_query__V_47_47, mdb__interactive_query__SocketOut_12);
                          }
#line 183 "interactive_query.m"
                          /* direct tailcall eliminated */
#line 183 "interactive_query.m"
                          {
#line 183 "interactive_query.m"
                            MR_Word mdb__interactive_query__Imports__tmp_copy_9 = mdb__interactive_query__NewImports_26;

#line 183 "interactive_query.m"
                            mdb__interactive_query__Imports_9 = mdb__interactive_query__Imports__tmp_copy_9;
#line 183 "interactive_query.m"
                          }
#line 183 "interactive_query.m"
                          continue;
#line 181 "interactive_query.m"
                        }
#line 185 "interactive_query.m"
                      else
#line 186 "interactive_query.m"
                        {
#line 186 "interactive_query.m"
                          MR_Word mdb__interactive_query__V_50_50;

#line 186 "interactive_query.m"
                          {
#line 186 "interactive_query.m"
                            mdb__interactive_query__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 186 "interactive_query.m"
                            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_50_50, 0) = ((MR_Box) (mdb__interactive_query__QueryType_8));
#line 186 "interactive_query.m"
                            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_50_50, 1) = ((MR_Box) (mdb__interactive_query__Imports_9));
#line 186 "interactive_query.m"
                            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_50_50, 2) = ((MR_Box) (mdb__interactive_query__Term_20));
#line 186 "interactive_query.m"
                            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_50_50, 3) = ((MR_Box) (mdb__interactive_query__VarSet_19));
#line 186 "interactive_query.m"
                          }
#line 186 "interactive_query.m"
                          {
#line 186 "interactive_query.m"
                            mdb__interactive_query__run_query_4_p_0(mdb__interactive_query__Options_10, mdb__interactive_query__V_50_50);
                          }
#line 187 "interactive_query.m"
                          {
#line 187 "interactive_query.m"
                            mdb__interactive_query__send_term_to_socket_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__interactive_query__SocketOut_12);
                          }
#line 188 "interactive_query.m"
                          /* direct tailcall eliminated */
#line 188 "interactive_query.m"
                          {
#line 188 "interactive_query.m"
                          }
#line 188 "interactive_query.m"
                          continue;
#line 186 "interactive_query.m"
                        }
#line 185 "interactive_query.m"
                    }
#line 178 "interactive_query.m"
                }
#line 166 "interactive_query.m"
            }
#line 154 "interactive_query.m"
      }
#line 154 "interactive_query.m"
      break;
#line 154 "interactive_query.m"
    }
#line 38 "interactive_query.m"
}

#line 32 "interactive_query.m"
void MR_CALL 
mdb__interactive_query__query_7_p_0(
#line 32 "interactive_query.m"
  MR_Word mdb__interactive_query__QueryType_8,
#line 32 "interactive_query.m"
  MR_Word mdb__interactive_query__Imports_9,
#line 32 "interactive_query.m"
  MR_String mdb__interactive_query__Options_10,
#line 32 "interactive_query.m"
  MR_Word mdb__interactive_query__MDB_Stdin_11,
#line 32 "interactive_query.m"
  MR_Word mdb__interactive_query__MDB_Stdout_12)
#line 32 "interactive_query.m"
{
#line 73 "interactive_query.m"
  while (MR_TRUE)
#line 73 "interactive_query.m"
    {
#line 73 "interactive_query.m"
      /* tailcall optimized into a loop */
#line 73 "interactive_query.m"
      {
#line 73 "interactive_query.m"
        MR_bool mdb__interactive_query__succeeded;
#line 73 "interactive_query.m"
        MR_Word mdb__interactive_query__Result_14;
#line 73 "interactive_query.m"
        MR_String mdb__interactive_query__V_22_22;

#line 203 "interactive_query.m"
        if ((mdb__interactive_query__QueryType_8 == (MR_Integer) 1))
#line 204 "interactive_query.m"
          mdb__interactive_query__V_22_22 = (MR_String) "\?- ";
#line 203 "interactive_query.m"
        else
#line 203 "interactive_query.m"
          if ((mdb__interactive_query__QueryType_8 == (MR_Integer) 2))
#line 205 "interactive_query.m"
            mdb__interactive_query__V_22_22 = (MR_String) "run <-- ";
#line 203 "interactive_query.m"
          else
#line 203 "interactive_query.m"
            mdb__interactive_query__V_22_22 = (MR_String) "\?- ";
#line 75 "interactive_query.m"
        {
#line 75 "interactive_query.m"
          mdb__util__trace_getline_6_p_0(mdb__interactive_query__V_22_22, &mdb__interactive_query__Result_14, mdb__interactive_query__MDB_Stdin_11, mdb__interactive_query__MDB_Stdout_12);
        }
#line 80 "interactive_query.m"
        if ((mdb__interactive_query__Result_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 79 "interactive_query.m"
          {
#line 79 "interactive_query.m"
            mercury__io__nl_3_p_0(mdb__interactive_query__MDB_Stdout_12);
#line 79 "interactive_query.m"
            return;
          }
#line 80 "interactive_query.m"
        else
#line 80 "interactive_query.m"
          if (((MR_tag((MR_Word) mdb__interactive_query__Result_14)) == (MR_mktag((MR_Integer) 2))))
#line 81 "interactive_query.m"
            {
#line 81 "interactive_query.m"
              MR_Word mdb__interactive_query__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__interactive_query__Result_14, (MR_Integer) 0)));
#line 81 "interactive_query.m"
              MR_String mdb__interactive_query__Msg_16;

#line 82 "interactive_query.m"
              {
#line 82 "interactive_query.m"
                mercury__io__error_message_2_p_0(mdb__interactive_query__Error_15, &mdb__interactive_query__Msg_16);
              }
#line 83 "interactive_query.m"
              {
#line 83 "interactive_query.m"
                mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_12, mdb__interactive_query__Msg_16);
              }
#line 84 "interactive_query.m"
              {
#line 84 "interactive_query.m"
                mercury__io__nl_3_p_0(mdb__interactive_query__MDB_Stdout_12);
              }
#line 85 "interactive_query.m"
              /* direct tailcall eliminated */
#line 85 "interactive_query.m"
              {
#line 85 "interactive_query.m"
              }
#line 85 "interactive_query.m"
              continue;
#line 81 "interactive_query.m"
            }
#line 80 "interactive_query.m"
          else
#line 87 "interactive_query.m"
            {
#line 87 "interactive_query.m"
              MR_String mdb__interactive_query__Line_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_14, (MR_Integer) 0)));
#line 87 "interactive_query.m"
              MR_Word mdb__interactive_query__ReadTerm_19;
#line 88 "interactive_query.m"
              MR_Word mdb__interactive_query__V_18_18;

#line 88 "interactive_query.m"
              {
#line 88 "interactive_query.m"
                mercury__parser__read_term_from_string_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_String) "", mdb__interactive_query__Line_17, &mdb__interactive_query__V_18_18, &mdb__interactive_query__ReadTerm_19);
              }
#line 89 "interactive_query.m"
              {
#line 89 "interactive_query.m"
                mdb__interactive_query__query_2_8_p_0(mdb__interactive_query__QueryType_8, mdb__interactive_query__Imports_9, mdb__interactive_query__Options_10, mdb__interactive_query__MDB_Stdin_11, mdb__interactive_query__MDB_Stdout_12, mdb__interactive_query__ReadTerm_19);
#line 89 "interactive_query.m"
                return;
              }
#line 87 "interactive_query.m"
            }
#line 73 "interactive_query.m"
      }
#line 73 "interactive_query.m"
      break;
#line 73 "interactive_query.m"
    }
#line 32 "interactive_query.m"
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
