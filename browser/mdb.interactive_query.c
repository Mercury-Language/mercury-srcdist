/*
** Automatically generated from `interactive_query.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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




#line 77 "mdb.interactive_query.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 80 "mdb.interactive_query.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 83 "mdb.interactive_query.c"
static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0;

#line 86 "mdb.interactive_query.c"
static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0;

#line 89 "mdb.interactive_query.c"
static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_1[1];

#line 92 "mdb.interactive_query.c"
static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1;

#line 95 "mdb.interactive_query.c"
static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2;

#line 98 "mdb.interactive_query.c"
static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3;

#line 101 "mdb.interactive_query.c"
static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_4[1];

#line 104 "mdb.interactive_query.c"
static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4;

#line 107 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_0[3];

#line 110 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_1[1];

#line 113 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_2[1];

#line 116 "mdb.interactive_query.c"
static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_interactive_query_response_0[3];

#line 119 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_interactive_query_response_0[5];

#line 122 "mdb.interactive_query.c"
static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_interactive_query_response_0[5];

#line 125 "mdb.interactive_query.c"
static const MR_VA_TypeInfo_Struct2 mdb__interactive_query____vti_pred_2io__type_ctor_info_state_0io__type_ctor_info_state_0;

#line 128 "mdb.interactive_query.c"
static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__term__ti_term_1term__type_ctor_info_generic_0;

#line 131 "mdb.interactive_query.c"
static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__varset__ti_varset_1term__type_ctor_info_generic_0;

#line 134 "mdb.interactive_query.c"
static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_prog_0_0[4];

#line 137 "mdb.interactive_query.c"
static const MR_DuFunctorDesc mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0;

#line 140 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0[1];

#line 143 "mdb.interactive_query.c"
static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_prog_0[1];

#line 146 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_prog_0[1];

#line 149 "mdb.interactive_query.c"
static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_prog_0[1];

#line 152 "mdb.interactive_query.c"
static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0;

#line 155 "mdb.interactive_query.c"
static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1;

#line 158 "mdb.interactive_query.c"
static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2;

#line 161 "mdb.interactive_query.c"
static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_value_ordered_query_type_0[3];

#line 164 "mdb.interactive_query.c"
static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_name_ordered_query_type_0[3];

#line 167 "mdb.interactive_query.c"
static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_query_type_0[3];

#line 170 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0_10001(
#line 173 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 175 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2);

#line 178 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____imports_0_0_10001(
#line 181 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 183 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 185 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3);

#line 188 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0_10001(
#line 191 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 193 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2);

#line 196 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0_10001(
#line 199 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 201 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 203 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3);

#line 206 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____io_pred_0_0_10001(
#line 209 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 211 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2);

#line 214 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____io_pred_0_0_10001(
#line 217 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 219 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 221 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3);

#line 224 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____options_0_0_10001(
#line 227 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 229 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2);

#line 232 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____options_0_0_10001(
#line 235 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 237 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 239 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3);

#line 242 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0_10001(
#line 245 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 247 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2);

#line 250 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0_10001(
#line 253 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 255 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 257 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3);

#line 260 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0_10001(
#line 263 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 265 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2);

#line 268 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0_10001(
#line 271 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 273 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 275 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3);

#line 492 "interactive_query.m"
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

#line 616 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query____Compare____io_pred_0_0(
#line 616 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__1_1,
#line 616 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2,
#line 616 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__3_3);

#line 616 "interactive_query.m"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____io_pred_0_0(
#line 616 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1,
#line 616 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2);

#line 143 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0(
#line 143 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__1_1,
#line 143 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2,
#line 143 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__3_3);

#line 143 "interactive_query.m"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0(
#line 143 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1,
#line 143 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2);

#line 639 "interactive_query.m"
static MR_bool MR_CALL 
mdb__interactive_query__system_is_darwin_0_p_0(void);

#line 620 "interactive_query.m"
static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_1_f_0(
#line 620 "interactive_query.m"
  MR_Word mdb__interactive_query__X_1);

#line 569 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__dynamically_load_and_run_2_p_0(void);

#line 512 "interactive_query.m"
static MR_String MR_CALL 
mdb__interactive_query__grade_option_0_f_0(void);

#line 456 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__compile_file_4_p_0(
#line 456 "interactive_query.m"
  MR_String mdb__interactive_query__Options_5,
#line 456 "interactive_query.m"
  MR_Word * mdb__interactive_query__Succeeded_6);

#line 449 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0_1(
#line 449 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 449 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 449 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 449 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3);

#line 444 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0(
#line 444 "interactive_query.m"
  MR_Word mdb__interactive_query__Out_5,
#line 444 "interactive_query.m"
  MR_Word mdb__interactive_query__Imports_6);

#line 439 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_one_var_4_p_0(
#line 439 "interactive_query.m"
  MR_Word mdb__interactive_query__VarSet_5,
#line 439 "interactive_query.m"
  MR_Word mdb__interactive_query__Var_6);

#line 433 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_args_4_p_0_1(
#line 433 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 433 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 433 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 433 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3);

#line 427 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_args_4_p_0(
#line 427 "interactive_query.m"
  MR_Word mdb__interactive_query__Vars_5,
#line 427 "interactive_query.m"
  MR_Word mdb__interactive_query__VarSet_6);

#line 417 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_code_to_print_one_var_4_p_0(
#line 417 "interactive_query.m"
  MR_Word mdb__interactive_query__VarSet_5,
#line 417 "interactive_query.m"
  MR_Word mdb__interactive_query__Var_6);

#line 409 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_line_directive_2_p_0(void);

#line 330 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_2(
#line 330 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 330 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 330 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 330 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3);

#line 384 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_1(
#line 384 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 384 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 384 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 384 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3);

#line 276 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0(
#line 276 "interactive_query.m"
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

#line 449 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__query_2_8_p_0_1(
#line 449 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 449 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 449 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 449 "interactive_query.m"
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

#line 150 "interactive_query.m"
void 
ML_query_external(
#line 150 "interactive_query.m"
  MR_Word mdb__interactive_query__QueryType_8,
#line 150 "interactive_query.m"
  MR_Word mdb__interactive_query__Imports_9,
#line 150 "interactive_query.m"
  MR_String mdb__interactive_query__Options_10,
#line 150 "interactive_query.m"
  MR_Word mdb__interactive_query__SocketIn_11,
#line 150 "interactive_query.m"
  MR_Word mdb__interactive_query__SocketOut_12)
#line 150 "interactive_query.m"
{
#line 150 "interactive_query.m"
	mdb__interactive_query__query_external_7_p_0((MR_Word) mdb__interactive_query__QueryType_8, (MR_Word) mdb__interactive_query__Imports_9, (MR_String) mdb__interactive_query__Options_10, (MR_Word) mdb__interactive_query__SocketIn_11, (MR_Word) mdb__interactive_query__SocketOut_12);
}


#line 679 "mdb.interactive_query.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 687 "mdb.interactive_query.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__interactive_query__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 695 "mdb.interactive_query.c"
static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 703 "mdb.interactive_query.c"
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

#line 720 "mdb.interactive_query.c"
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

#line 735 "mdb.interactive_query.c"
static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 740 "mdb.interactive_query.c"
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

#line 755 "mdb.interactive_query.c"
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

#line 770 "mdb.interactive_query.c"
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

#line 785 "mdb.interactive_query.c"
static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_interactive_query_response_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 790 "mdb.interactive_query.c"
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

#line 805 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_0[3] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3
};

#line 812 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_1[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1
};

#line 817 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_interactive_query_response_0_2[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4
};

#line 822 "mdb.interactive_query.c"
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

#line 841 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_interactive_query_response_0[5] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_3,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_4,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_1,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_0,
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_interactive_query_response_0_2
};

#line 850 "mdb.interactive_query.c"
static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_interactive_query_response_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 859 "mdb.interactive_query.c"
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
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__interactive_query____vti_pred_2io__type_ctor_info_state_0io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 903 "mdb.interactive_query.c"
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

#line 920 "mdb.interactive_query.c"
static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 928 "mdb.interactive_query.c"
static const MR_FA_TypeInfo_Struct1 mdb__interactive_query__varset__ti_varset_1term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 936 "mdb.interactive_query.c"
static const MR_PseudoTypeInfo mdb__interactive_query__mdb__interactive_query__field_types_prog_0_0[4] = {
  (MR_PseudoTypeInfo) &mdb__interactive_query__mdb__interactive_query__type_ctor_info_query_type_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__term__ti_term_1term__type_ctor_info_generic_0,
  (MR_PseudoTypeInfo) &mdb__interactive_query__varset__ti_varset_1term__type_ctor_info_generic_0
};

#line 944 "mdb.interactive_query.c"
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

#line 959 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0
};

#line 964 "mdb.interactive_query.c"
static const MR_DuPtagLayout mdb__interactive_query__mdb__interactive_query__du_ptag_ordered_prog_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__interactive_query__mdb__interactive_query__du_stag_ordered_prog_0_0
  }
};

#line 973 "mdb.interactive_query.c"
static const MR_DuFunctorDescPtr mdb__interactive_query__mdb__interactive_query__du_name_ordered_prog_0[1] = {
  &mdb__interactive_query__mdb__interactive_query__du_functor_desc_prog_0_0
};

#line 978 "mdb.interactive_query.c"
static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_prog_0[1] = {
  (MR_Integer) 0
};

#line 983 "mdb.interactive_query.c"
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

#line 1000 "mdb.interactive_query.c"
static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0 = {
  (MR_String) "normal_query",
  (MR_Integer) 0
};

#line 1006 "mdb.interactive_query.c"
static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1 = {
  (MR_String) "cc_query",
  (MR_Integer) 1
};

#line 1012 "mdb.interactive_query.c"
static const MR_EnumFunctorDesc mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2 = {
  (MR_String) "io_query",
  (MR_Integer) 2
};

#line 1018 "mdb.interactive_query.c"
static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_value_ordered_query_type_0[3] = {
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2
};

#line 1025 "mdb.interactive_query.c"
static const MR_EnumFunctorDescPtr mdb__interactive_query__mdb__interactive_query__enum_name_ordered_query_type_0[3] = {
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_1,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_2,
  &mdb__interactive_query__mdb__interactive_query__enum_functor_desc_query_type_0_0
};

#line 1032 "mdb.interactive_query.c"
static const MR_Integer mdb__interactive_query__mdb__interactive_query__functor_number_map_query_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1039 "mdb.interactive_query.c"
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

#line 1056 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____imports_0_0_10001(
#line 1059 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 1061 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2)
#line 1063 "mdb.interactive_query.c"
{
#line 1065 "mdb.interactive_query.c"
  {
#line 1067 "mdb.interactive_query.c"
    MR_bool mdb__interactive_query__succeeded;

#line 1070 "mdb.interactive_query.c"
    {
#line 1072 "mdb.interactive_query.c"
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____imports_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
#line 1075 "mdb.interactive_query.c"
    return mdb__interactive_query__succeeded;
#line 1077 "mdb.interactive_query.c"
  }
#line 1079 "mdb.interactive_query.c"
}

#line 1082 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____imports_0_0_10001(
#line 1085 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 1087 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 1089 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3)
#line 1091 "mdb.interactive_query.c"
{
#line 1093 "mdb.interactive_query.c"
  {
#line 1095 "mdb.interactive_query.c"
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

#line 1098 "mdb.interactive_query.c"
    {
#line 1100 "mdb.interactive_query.c"
      mdb__interactive_query____Compare____imports_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
#line 1103 "mdb.interactive_query.c"
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
#line 1105 "mdb.interactive_query.c"
  }
#line 1107 "mdb.interactive_query.c"
}

#line 1110 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0_10001(
#line 1113 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 1115 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2)
#line 1117 "mdb.interactive_query.c"
{
#line 1119 "mdb.interactive_query.c"
  {
#line 1121 "mdb.interactive_query.c"
    MR_bool mdb__interactive_query__succeeded;

#line 1124 "mdb.interactive_query.c"
    {
#line 1126 "mdb.interactive_query.c"
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____interactive_query_response_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
#line 1129 "mdb.interactive_query.c"
    return mdb__interactive_query__succeeded;
#line 1131 "mdb.interactive_query.c"
  }
#line 1133 "mdb.interactive_query.c"
}

#line 1136 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0_10001(
#line 1139 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 1141 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 1143 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3)
#line 1145 "mdb.interactive_query.c"
{
#line 1147 "mdb.interactive_query.c"
  {
#line 1149 "mdb.interactive_query.c"
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

#line 1152 "mdb.interactive_query.c"
    {
#line 1154 "mdb.interactive_query.c"
      mdb__interactive_query____Compare____interactive_query_response_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
#line 1157 "mdb.interactive_query.c"
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
#line 1159 "mdb.interactive_query.c"
  }
#line 1161 "mdb.interactive_query.c"
}

#line 1164 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____io_pred_0_0_10001(
#line 1167 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 1169 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2)
#line 1171 "mdb.interactive_query.c"
{
#line 1173 "mdb.interactive_query.c"
  {
#line 1175 "mdb.interactive_query.c"
    MR_bool mdb__interactive_query__succeeded;

#line 1178 "mdb.interactive_query.c"
    {
#line 1180 "mdb.interactive_query.c"
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____io_pred_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
#line 1183 "mdb.interactive_query.c"
    return mdb__interactive_query__succeeded;
#line 1185 "mdb.interactive_query.c"
  }
#line 1187 "mdb.interactive_query.c"
}

#line 1190 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____io_pred_0_0_10001(
#line 1193 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 1195 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 1197 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3)
#line 1199 "mdb.interactive_query.c"
{
#line 1201 "mdb.interactive_query.c"
  {
#line 1203 "mdb.interactive_query.c"
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

#line 1206 "mdb.interactive_query.c"
    {
#line 1208 "mdb.interactive_query.c"
      mdb__interactive_query____Compare____io_pred_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
#line 1211 "mdb.interactive_query.c"
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
#line 1213 "mdb.interactive_query.c"
  }
#line 1215 "mdb.interactive_query.c"
}

#line 1218 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____options_0_0_10001(
#line 1221 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 1223 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2)
#line 1225 "mdb.interactive_query.c"
{
#line 1227 "mdb.interactive_query.c"
  {
#line 1229 "mdb.interactive_query.c"
    MR_bool mdb__interactive_query__succeeded;

#line 1232 "mdb.interactive_query.c"
    {
#line 1234 "mdb.interactive_query.c"
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____options_0_0(((MR_String) mdb__interactive_query__wrapper_arg_1), ((MR_String) mdb__interactive_query__wrapper_arg_2));
    }
#line 1237 "mdb.interactive_query.c"
    return mdb__interactive_query__succeeded;
#line 1239 "mdb.interactive_query.c"
  }
#line 1241 "mdb.interactive_query.c"
}

#line 1244 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____options_0_0_10001(
#line 1247 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 1249 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 1251 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3)
#line 1253 "mdb.interactive_query.c"
{
#line 1255 "mdb.interactive_query.c"
  {
#line 1257 "mdb.interactive_query.c"
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

#line 1260 "mdb.interactive_query.c"
    {
#line 1262 "mdb.interactive_query.c"
      mdb__interactive_query____Compare____options_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_String) mdb__interactive_query__wrapper_arg_2), ((MR_String) mdb__interactive_query__wrapper_arg_3));
    }
#line 1265 "mdb.interactive_query.c"
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
#line 1267 "mdb.interactive_query.c"
  }
#line 1269 "mdb.interactive_query.c"
}

#line 1272 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____prog_0_0_10001(
#line 1275 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 1277 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2)
#line 1279 "mdb.interactive_query.c"
{
#line 1281 "mdb.interactive_query.c"
  {
#line 1283 "mdb.interactive_query.c"
    MR_bool mdb__interactive_query__succeeded;

#line 1286 "mdb.interactive_query.c"
    {
#line 1288 "mdb.interactive_query.c"
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____prog_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
#line 1291 "mdb.interactive_query.c"
    return mdb__interactive_query__succeeded;
#line 1293 "mdb.interactive_query.c"
  }
#line 1295 "mdb.interactive_query.c"
}

#line 1298 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____prog_0_0_10001(
#line 1301 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 1303 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 1305 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3)
#line 1307 "mdb.interactive_query.c"
{
#line 1309 "mdb.interactive_query.c"
  {
#line 1311 "mdb.interactive_query.c"
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

#line 1314 "mdb.interactive_query.c"
    {
#line 1316 "mdb.interactive_query.c"
      mdb__interactive_query____Compare____prog_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
#line 1319 "mdb.interactive_query.c"
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
#line 1321 "mdb.interactive_query.c"
  }
#line 1323 "mdb.interactive_query.c"
}

#line 1326 "mdb.interactive_query.c"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____query_type_0_0_10001(
#line 1329 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 1331 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2)
#line 1333 "mdb.interactive_query.c"
{
#line 1335 "mdb.interactive_query.c"
  {
#line 1337 "mdb.interactive_query.c"
    MR_bool mdb__interactive_query__succeeded;

#line 1340 "mdb.interactive_query.c"
    {
#line 1342 "mdb.interactive_query.c"
      mdb__interactive_query__succeeded = mdb__interactive_query____Unify____query_type_0_0(((MR_Word) mdb__interactive_query__wrapper_arg_1), ((MR_Word) mdb__interactive_query__wrapper_arg_2));
    }
#line 1345 "mdb.interactive_query.c"
    return mdb__interactive_query__succeeded;
#line 1347 "mdb.interactive_query.c"
  }
#line 1349 "mdb.interactive_query.c"
}

#line 1352 "mdb.interactive_query.c"
static void MR_CALL 
mdb__interactive_query____Compare____query_type_0_0_10001(
#line 1355 "mdb.interactive_query.c"
  MR_Box * mdb__interactive_query__wrapper_arg_1,
#line 1357 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 1359 "mdb.interactive_query.c"
  MR_Box mdb__interactive_query__wrapper_arg_3)
#line 1361 "mdb.interactive_query.c"
{
#line 1363 "mdb.interactive_query.c"
  {
#line 1365 "mdb.interactive_query.c"
    MR_Word mdb__interactive_query__conv0_HeadVar__1_1;

#line 1368 "mdb.interactive_query.c"
    {
#line 1370 "mdb.interactive_query.c"
      mdb__interactive_query____Compare____query_type_0_0(&mdb__interactive_query__conv0_HeadVar__1_1, ((MR_Word) mdb__interactive_query__wrapper_arg_2), ((MR_Word) mdb__interactive_query__wrapper_arg_3));
    }
#line 1373 "mdb.interactive_query.c"
    *mdb__interactive_query__wrapper_arg_1 = ((MR_Box) (mdb__interactive_query__conv0_HeadVar__1_1));
#line 1375 "mdb.interactive_query.c"
  }
#line 1377 "mdb.interactive_query.c"
}

#line 492 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0(void)
#line 492 "interactive_query.m"
{
#line 494 "interactive_query.m"
  {
#line 494 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 494 "interactive_query.m"
    MR_String mdb__interactive_query__V_61_61;
#line 494 "interactive_query.m"
    MR_String mdb__interactive_query__V_63_63;
#line 494 "interactive_query.m"
    MR_String mdb__interactive_query__V_65_65;
#line 495 "interactive_query.m"
    MR_Word mdb__interactive_query__V_5_5;
#line 496 "interactive_query.m"
    MR_Word mdb__interactive_query__V_6_6;
#line 497 "interactive_query.m"
    MR_Word mdb__interactive_query__V_7_7;
#line 498 "interactive_query.m"
    MR_Word mdb__interactive_query__V_8_8;
#line 499 "interactive_query.m"
    MR_Word mdb__interactive_query__V_9_9;
#line 500 "interactive_query.m"
    MR_Word mdb__interactive_query__V_10_10;
#line 501 "interactive_query.m"
    MR_Word mdb__interactive_query__V_11_11;
#line 503 "interactive_query.m"
    MR_Word mdb__interactive_query__V_12_12;
#line 504 "interactive_query.m"
    MR_Word mdb__interactive_query__V_13_13;
#line 505 "interactive_query.m"
    MR_Word mdb__interactive_query__V_14_14;

#line 495 "interactive_query.m"
    {
#line 495 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.m", &mdb__interactive_query__V_5_5);
    }
#line 496 "interactive_query.m"
    {
#line 496 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.d", &mdb__interactive_query__V_6_6);
    }
#line 497 "interactive_query.m"
    {
#line 497 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "Mercury/ds/mdb_query.d", &mdb__interactive_query__V_7_7);
    }
#line 498 "interactive_query.m"
    {
#line 498 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.c", &mdb__interactive_query__V_8_8);
    }
#line 499 "interactive_query.m"
    {
#line 499 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "Mercury/cs/mdb_query.c", &mdb__interactive_query__V_9_9);
    }
#line 500 "interactive_query.m"
    {
#line 500 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.c_date", &mdb__interactive_query__V_10_10);
    }
#line 501 "interactive_query.m"
    {
#line 501 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "Mercury/c_dates/mdb_query.c_date", &mdb__interactive_query__V_11_11);
    }
#line 503 "interactive_query.m"
    {
#line 503 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "mdb_query.o", &mdb__interactive_query__V_12_12);
    }
#line 504 "interactive_query.m"
    {
#line 504 "interactive_query.m"
      mercury__io__remove_file_4_p_0((MR_String) "Mercury/os/mdb_query.o", &mdb__interactive_query__V_13_13);
    }
#line 643 "interactive_query.m"
{
#define MR_PROC_LABEL mdb__interactive_query__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 643 "interactive_query.m"

#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 1476 "mdb.interactive_query.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 643 "interactive_query.m"
	}
mdb__interactive_query__succeeded  = SUCCESS_INDICATOR;
}
#line 636 "interactive_query.m"
    if (mdb__interactive_query__succeeded)
#line 637 "interactive_query.m"
      mdb__interactive_query__V_65_65 = (MR_String) ".dylib";
#line 636 "interactive_query.m"
    else
#line 637 "interactive_query.m"
      mdb__interactive_query__V_65_65 = (MR_String) ".so";
#line 505 "interactive_query.m"
    {
#line 505 "interactive_query.m"
      mdb__interactive_query__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", mdb__interactive_query__V_65_65);
    }
#line 505 "interactive_query.m"
    {
#line 505 "interactive_query.m"
      mdb__interactive_query__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "lib", mdb__interactive_query__V_63_63);
    }
#line 505 "interactive_query.m"
    {
#line 505 "interactive_query.m"
      mercury__io__remove_file_4_p_0(mdb__interactive_query__V_61_61, &mdb__interactive_query__V_14_14);
    }
#line 494 "interactive_query.m"
  }
#line 492 "interactive_query.m"
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
#line 1554 "mdb.interactive_query.c"
  {
#line 1556 "mdb.interactive_query.c"
    MR_bool mdb__interactive_query__succeeded = (mdb__interactive_query__HeadVar__2_1 == mdb__interactive_query__HeadVar__2_2);

#line 1559 "mdb.interactive_query.c"
    return mdb__interactive_query__succeeded;
#line 1561 "mdb.interactive_query.c"
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
#line 1590 "mdb.interactive_query.c"
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
#line 1624 "mdb.interactive_query.c"
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
#line 1644 "mdb.interactive_query.c"
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
#line 1664 "mdb.interactive_query.c"
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

#line 1747 "mdb.interactive_query.c"
        mdb__interactive_query__succeeded = (mdb__interactive_query__V_3_3 == mdb__interactive_query__V_7_7);
#line 70 "interactive_query.m"
        if (mdb__interactive_query__succeeded)
#line 70 "interactive_query.m"
          {
#line 1753 "mdb.interactive_query.c"
            mdb__interactive_query__TypeInfo_13_13 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
#line 1755 "mdb.interactive_query.c"
            {
#line 1757 "mdb.interactive_query.c"
              mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_13_13, ((MR_Box) (mdb__interactive_query__V_4_4)), ((MR_Box) (mdb__interactive_query__V_8_8)));
            }
#line 70 "interactive_query.m"
            if (mdb__interactive_query__succeeded)
#line 70 "interactive_query.m"
              {
#line 1764 "mdb.interactive_query.c"
                mdb__interactive_query__TypeInfo_14_14 = (MR_Word) &mdb__interactive_query_scalar_common_1[2];
#line 1766 "mdb.interactive_query.c"
                {
#line 1768 "mdb.interactive_query.c"
                  mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_14_14, ((MR_Box) (mdb__interactive_query__V_5_5)), ((MR_Box) (mdb__interactive_query__V_9_9)));
                }
#line 70 "interactive_query.m"
                if (mdb__interactive_query__succeeded)
#line 70 "interactive_query.m"
                  {
#line 1775 "mdb.interactive_query.c"
                    mdb__interactive_query__TypeInfo_15_15 = (MR_Word) &mdb__interactive_query_scalar_common_1[3];
#line 1777 "mdb.interactive_query.c"
                    {
#line 1779 "mdb.interactive_query.c"
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

#line 616 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query____Compare____io_pred_0_0(
#line 616 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__1_1,
#line 616 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2,
#line 616 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__3_3)
#line 616 "interactive_query.m"
{
#line 616 "interactive_query.m"
  {
#line 616 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 616 "interactive_query.m"
    MR_Word mdb__interactive_query__Cast_HeadVar1_4 = mdb__interactive_query__HeadVar__2_2;
#line 616 "interactive_query.m"
    MR_Word mdb__interactive_query__Cast_HeadVar2_5 = mdb__interactive_query__HeadVar__3_3;

#line 616 "interactive_query.m"
    {
#line 616 "interactive_query.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__Cast_HeadVar1_4)), ((MR_Box) (mdb__interactive_query__Cast_HeadVar2_5)));
#line 616 "interactive_query.m"
      return;
    }
#line 616 "interactive_query.m"
  }
#line 616 "interactive_query.m"
}

#line 616 "interactive_query.m"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____io_pred_0_0(
#line 616 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1,
#line 616 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2)
#line 616 "interactive_query.m"
{
#line 616 "interactive_query.m"
  {
#line 616 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 616 "interactive_query.m"
    MR_Word mdb__interactive_query__Cast_HeadVar1_3 = mdb__interactive_query__HeadVar__1_1;
#line 616 "interactive_query.m"
    MR_Word mdb__interactive_query__Cast_HeadVar2_4 = mdb__interactive_query__HeadVar__2_2;

#line 616 "interactive_query.m"
    {
#line 616 "interactive_query.m"
      return mdb__interactive_query__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mdb__interactive_query__Cast_HeadVar1_3, (MR_Word) mdb__interactive_query__Cast_HeadVar2_4);
    }
#line 616 "interactive_query.m"
    return mdb__interactive_query__succeeded;
#line 616 "interactive_query.m"
  }
#line 616 "interactive_query.m"
}

#line 143 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query____Compare____interactive_query_response_0_0(
#line 143 "interactive_query.m"
  MR_Word * mdb__interactive_query__HeadVar__1_1,
#line 143 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2,
#line 143 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__3_3)
#line 143 "interactive_query.m"
{
#line 143 "interactive_query.m"
  {
#line 143 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 143 "interactive_query.m"
    MR_Integer mdb__interactive_query__CastX_24 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;
#line 143 "interactive_query.m"
    MR_Integer mdb__interactive_query__CastY_25 = (MR_Integer) mdb__interactive_query__HeadVar__3_3;

#line 143 "interactive_query.m"
    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_24 == mdb__interactive_query__CastY_25);
#line 143 "interactive_query.m"
    if (mdb__interactive_query__succeeded)
#line 1942 "mdb.interactive_query.c"
      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
#line 143 "interactive_query.m"
    else
#line 143 "interactive_query.m"
#line 143 "interactive_query.m"
      switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) {
#line 143 "interactive_query.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 143 "interactive_query.m"
        case (MR_Integer) 0:
#line 143 "interactive_query.m"
#line 143 "interactive_query.m"
          switch (MR_unmkbody(mdb__interactive_query__HeadVar__2_2)) {
#line 143 "interactive_query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 143 "interactive_query.m"
            case (MR_Integer) 0:
#line 143 "interactive_query.m"
#line 143 "interactive_query.m"
              switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
#line 143 "interactive_query.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 143 "interactive_query.m"
                case (MR_Integer) 0:
#line 143 "interactive_query.m"
#line 143 "interactive_query.m"
                  switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
#line 143 "interactive_query.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 143 "interactive_query.m"
                    case (MR_Integer) 0:
#line 143 "interactive_query.m"
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
#line 143 "interactive_query.m"
                      break;
#line 143 "interactive_query.m"
                    case (MR_Integer) 1:
#line 143 "interactive_query.m"
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 143 "interactive_query.m"
                      break;
#line 143 "interactive_query.m"
                    case (MR_Integer) 2:
#line 143 "interactive_query.m"
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 143 "interactive_query.m"
                      break;
#line 143 "interactive_query.m"
                  }
#line 143 "interactive_query.m"
                  break;
#line 143 "interactive_query.m"
                case (MR_Integer) 1:
#line 1996 "mdb.interactive_query.c"
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 143 "interactive_query.m"
                  break;
#line 143 "interactive_query.m"
                case (MR_Integer) 2:
#line 2002 "mdb.interactive_query.c"
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 143 "interactive_query.m"
                  break;
#line 143 "interactive_query.m"
              }
#line 143 "interactive_query.m"
              break;
#line 143 "interactive_query.m"
            case (MR_Integer) 1:
#line 143 "interactive_query.m"
#line 143 "interactive_query.m"
              switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
#line 143 "interactive_query.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 143 "interactive_query.m"
                case (MR_Integer) 0:
#line 143 "interactive_query.m"
#line 143 "interactive_query.m"
                  switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
#line 143 "interactive_query.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 143 "interactive_query.m"
                    case (MR_Integer) 0:
#line 143 "interactive_query.m"
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 143 "interactive_query.m"
                      break;
#line 143 "interactive_query.m"
                    case (MR_Integer) 1:
#line 143 "interactive_query.m"
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
#line 143 "interactive_query.m"
                      break;
#line 143 "interactive_query.m"
                    case (MR_Integer) 2:
#line 143 "interactive_query.m"
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 143 "interactive_query.m"
                      break;
#line 143 "interactive_query.m"
                  }
#line 143 "interactive_query.m"
                  break;
#line 143 "interactive_query.m"
                case (MR_Integer) 1:
#line 2048 "mdb.interactive_query.c"
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 143 "interactive_query.m"
                  break;
#line 143 "interactive_query.m"
                case (MR_Integer) 2:
#line 2054 "mdb.interactive_query.c"
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 143 "interactive_query.m"
                  break;
#line 143 "interactive_query.m"
              }
#line 143 "interactive_query.m"
              break;
#line 143 "interactive_query.m"
            case (MR_Integer) 2:
#line 143 "interactive_query.m"
#line 143 "interactive_query.m"
              switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
#line 143 "interactive_query.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 143 "interactive_query.m"
                case (MR_Integer) 0:
#line 143 "interactive_query.m"
#line 143 "interactive_query.m"
                  switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
#line 143 "interactive_query.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 143 "interactive_query.m"
                    case (MR_Integer) 0:
#line 143 "interactive_query.m"
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 143 "interactive_query.m"
                      break;
#line 143 "interactive_query.m"
                    case (MR_Integer) 1:
#line 143 "interactive_query.m"
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 143 "interactive_query.m"
                      break;
#line 143 "interactive_query.m"
                    case (MR_Integer) 2:
#line 143 "interactive_query.m"
                      *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 0;
#line 143 "interactive_query.m"
                      break;
#line 143 "interactive_query.m"
                  }
#line 143 "interactive_query.m"
                  break;
#line 143 "interactive_query.m"
                case (MR_Integer) 1:
#line 2100 "mdb.interactive_query.c"
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 143 "interactive_query.m"
                  break;
#line 143 "interactive_query.m"
                case (MR_Integer) 2:
#line 2106 "mdb.interactive_query.c"
                  *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 143 "interactive_query.m"
                  break;
#line 143 "interactive_query.m"
              }
#line 143 "interactive_query.m"
              break;
#line 143 "interactive_query.m"
          }
#line 143 "interactive_query.m"
          break;
#line 143 "interactive_query.m"
        case (MR_Integer) 1:
#line 143 "interactive_query.m"
          {
#line 143 "interactive_query.m"
            MR_Word mdb__interactive_query__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));

#line 143 "interactive_query.m"
#line 143 "interactive_query.m"
            switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
#line 143 "interactive_query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 143 "interactive_query.m"
              case (MR_Integer) 0:
#line 143 "interactive_query.m"
#line 143 "interactive_query.m"
                switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
#line 143 "interactive_query.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 143 "interactive_query.m"
                  case (MR_Integer) 0:
#line 2139 "mdb.interactive_query.c"
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 143 "interactive_query.m"
                    break;
#line 143 "interactive_query.m"
                  case (MR_Integer) 1:
#line 2145 "mdb.interactive_query.c"
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 143 "interactive_query.m"
                    break;
#line 143 "interactive_query.m"
                  case (MR_Integer) 2:
#line 2151 "mdb.interactive_query.c"
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 143 "interactive_query.m"
                    break;
#line 143 "interactive_query.m"
                }
#line 143 "interactive_query.m"
                break;
#line 143 "interactive_query.m"
              case (MR_Integer) 1:
#line 143 "interactive_query.m"
                {
#line 143 "interactive_query.m"
                  MR_Word mdb__interactive_query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));

#line 143 "interactive_query.m"
                  {
#line 143 "interactive_query.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[1], mdb__interactive_query__HeadVar__1_1, ((MR_Box) (mdb__interactive_query__V_29_29)), ((MR_Box) (mdb__interactive_query__V_8_8)));
#line 143 "interactive_query.m"
                    return;
                  }
#line 143 "interactive_query.m"
                }
#line 143 "interactive_query.m"
                break;
#line 143 "interactive_query.m"
              case (MR_Integer) 2:
#line 2179 "mdb.interactive_query.c"
                *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 1;
#line 143 "interactive_query.m"
                break;
#line 143 "interactive_query.m"
            }
#line 143 "interactive_query.m"
          }
#line 143 "interactive_query.m"
          break;
#line 143 "interactive_query.m"
        case (MR_Integer) 2:
#line 143 "interactive_query.m"
          {
#line 143 "interactive_query.m"
            MR_String mdb__interactive_query__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));

#line 143 "interactive_query.m"
#line 143 "interactive_query.m"
            switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__3_3)) {
#line 143 "interactive_query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 143 "interactive_query.m"
              case (MR_Integer) 0:
#line 143 "interactive_query.m"
#line 143 "interactive_query.m"
                switch (MR_unmkbody(mdb__interactive_query__HeadVar__3_3)) {
#line 143 "interactive_query.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 143 "interactive_query.m"
                  case (MR_Integer) 0:
#line 2210 "mdb.interactive_query.c"
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 143 "interactive_query.m"
                    break;
#line 143 "interactive_query.m"
                  case (MR_Integer) 1:
#line 2216 "mdb.interactive_query.c"
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 143 "interactive_query.m"
                    break;
#line 143 "interactive_query.m"
                  case (MR_Integer) 2:
#line 2222 "mdb.interactive_query.c"
                    *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 143 "interactive_query.m"
                    break;
#line 143 "interactive_query.m"
                }
#line 143 "interactive_query.m"
                break;
#line 143 "interactive_query.m"
              case (MR_Integer) 1:
#line 2232 "mdb.interactive_query.c"
                *mdb__interactive_query__HeadVar__1_1 = (MR_Integer) 2;
#line 143 "interactive_query.m"
                break;
#line 143 "interactive_query.m"
              case (MR_Integer) 2:
#line 143 "interactive_query.m"
                {
#line 143 "interactive_query.m"
                  MR_String mdb__interactive_query__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__3_3, (MR_Integer) 0)));

#line 143 "interactive_query.m"
                  {
#line 143 "interactive_query.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__interactive_query__HeadVar__1_1, mdb__interactive_query__V_28_28, mdb__interactive_query__V_23_23);
#line 143 "interactive_query.m"
                    return;
                  }
#line 143 "interactive_query.m"
                }
#line 143 "interactive_query.m"
                break;
#line 143 "interactive_query.m"
            }
#line 143 "interactive_query.m"
          }
#line 143 "interactive_query.m"
          break;
#line 143 "interactive_query.m"
      }
#line 143 "interactive_query.m"
  }
#line 143 "interactive_query.m"
}

#line 143 "interactive_query.m"
static MR_bool MR_CALL 
mdb__interactive_query____Unify____interactive_query_response_0_0(
#line 143 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1,
#line 143 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__2_2)
#line 143 "interactive_query.m"
{
#line 143 "interactive_query.m"
  {
#line 143 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 143 "interactive_query.m"
    MR_Integer mdb__interactive_query__CastX_13 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
#line 143 "interactive_query.m"
    MR_Integer mdb__interactive_query__CastY_14 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

#line 143 "interactive_query.m"
    mdb__interactive_query__succeeded = (mdb__interactive_query__CastX_13 == mdb__interactive_query__CastY_14);
#line 143 "interactive_query.m"
    if (mdb__interactive_query__succeeded)
#line 143 "interactive_query.m"
      mdb__interactive_query__succeeded = MR_TRUE;
#line 143 "interactive_query.m"
    else
#line 143 "interactive_query.m"
#line 143 "interactive_query.m"
      switch (MR_tag((MR_Word) mdb__interactive_query__HeadVar__1_1)) {
#line 143 "interactive_query.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 143 "interactive_query.m"
        case (MR_Integer) 0:
#line 143 "interactive_query.m"
#line 143 "interactive_query.m"
          switch (MR_unmkbody(mdb__interactive_query__HeadVar__1_1)) {
#line 143 "interactive_query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 143 "interactive_query.m"
            case (MR_Integer) 0:
#line 143 "interactive_query.m"
              {
#line 143 "interactive_query.m"
                MR_Integer mdb__interactive_query__CastX_3 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
#line 143 "interactive_query.m"
                MR_Integer mdb__interactive_query__CastY_4 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

#line 143 "interactive_query.m"
                mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_4 == mdb__interactive_query__CastX_3);
#line 143 "interactive_query.m"
              }
#line 143 "interactive_query.m"
              break;
#line 143 "interactive_query.m"
            case (MR_Integer) 1:
#line 143 "interactive_query.m"
              {
#line 143 "interactive_query.m"
                MR_Integer mdb__interactive_query__CastX_7 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
#line 143 "interactive_query.m"
                MR_Integer mdb__interactive_query__CastY_8 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

#line 143 "interactive_query.m"
                mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_8 == mdb__interactive_query__CastX_7);
#line 143 "interactive_query.m"
              }
#line 143 "interactive_query.m"
              break;
#line 143 "interactive_query.m"
            case (MR_Integer) 2:
#line 143 "interactive_query.m"
              {
#line 143 "interactive_query.m"
                MR_Integer mdb__interactive_query__CastX_9 = (MR_Integer) mdb__interactive_query__HeadVar__1_1;
#line 143 "interactive_query.m"
                MR_Integer mdb__interactive_query__CastY_10 = (MR_Integer) mdb__interactive_query__HeadVar__2_2;

#line 143 "interactive_query.m"
                mdb__interactive_query__succeeded = (mdb__interactive_query__CastY_10 == mdb__interactive_query__CastX_9);
#line 143 "interactive_query.m"
              }
#line 143 "interactive_query.m"
              break;
#line 143 "interactive_query.m"
          }
#line 143 "interactive_query.m"
          break;
#line 143 "interactive_query.m"
        case (MR_Integer) 1:
#line 143 "interactive_query.m"
          {
#line 143 "interactive_query.m"
            MR_Word mdb__interactive_query__TypeInfo_15_15;
#line 143 "interactive_query.m"
            MR_Word mdb__interactive_query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
#line 143 "interactive_query.m"
            MR_Word mdb__interactive_query__V_6_6;

#line 143 "interactive_query.m"
            mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 143 "interactive_query.m"
            if (mdb__interactive_query__succeeded)
#line 143 "interactive_query.m"
              {
#line 143 "interactive_query.m"
                mdb__interactive_query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
#line 2373 "mdb.interactive_query.c"
                mdb__interactive_query__TypeInfo_15_15 = (MR_Word) &mdb__interactive_query_scalar_common_1[1];
#line 2375 "mdb.interactive_query.c"
                {
#line 2377 "mdb.interactive_query.c"
                  return mdb__interactive_query__succeeded = mercury__builtin__unify_2_p_0(mdb__interactive_query__TypeInfo_15_15, ((MR_Box) (mdb__interactive_query__V_5_5)), ((MR_Box) (mdb__interactive_query__V_6_6)));
                }
#line 143 "interactive_query.m"
              }
#line 143 "interactive_query.m"
          }
#line 143 "interactive_query.m"
          break;
#line 143 "interactive_query.m"
        case (MR_Integer) 2:
#line 143 "interactive_query.m"
          {
#line 143 "interactive_query.m"
            MR_String mdb__interactive_query__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
#line 143 "interactive_query.m"
            MR_String mdb__interactive_query__V_12_12;

#line 143 "interactive_query.m"
            mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 143 "interactive_query.m"
            if (mdb__interactive_query__succeeded)
#line 143 "interactive_query.m"
              {
#line 143 "interactive_query.m"
                mdb__interactive_query__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__interactive_query__HeadVar__2_2, (MR_Integer) 0)));
#line 2403 "mdb.interactive_query.c"
                mdb__interactive_query__succeeded = (strcmp(mdb__interactive_query__V_11_11, mdb__interactive_query__V_12_12) == 0);
#line 143 "interactive_query.m"
              }
#line 143 "interactive_query.m"
          }
#line 143 "interactive_query.m"
          break;
#line 143 "interactive_query.m"
      }
#line 143 "interactive_query.m"
    return mdb__interactive_query__succeeded;
#line 143 "interactive_query.m"
  }
#line 143 "interactive_query.m"
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

#line 639 "interactive_query.m"
static MR_bool MR_CALL 
mdb__interactive_query__system_is_darwin_0_p_0(void)
#line 639 "interactive_query.m"
{
#line 640 "interactive_query.m"
  {
#line 640 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;

#line 643 "interactive_query.m"
{
#define MR_PROC_LABEL mdb__interactive_query__system_is_darwin_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 643 "interactive_query.m"

#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2507 "mdb.interactive_query.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 643 "interactive_query.m"
	}
mdb__interactive_query__succeeded  = SUCCESS_INDICATOR;
}
#line 640 "interactive_query.m"
    return mdb__interactive_query__succeeded;
#line 640 "interactive_query.m"
  }
#line 639 "interactive_query.m"
}

#line 620 "interactive_query.m"
static MR_Word MR_CALL 
mdb__interactive_query__inst_cast_1_f_0(
#line 620 "interactive_query.m"
  MR_Word mdb__interactive_query__X_1)
#line 620 "interactive_query.m"
{
#line 622 "interactive_query.m"
  {
#line 622 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 622 "interactive_query.m"
    MR_Word mdb__interactive_query__Y_2;

#line 625 "interactive_query.m"
{
#define MR_PROC_LABEL mdb__interactive_query__inst_cast_1_f_0

	MR_Word X;
	MR_Word Y;

	X =  mdb__interactive_query__X_1 ;
		{
#line 625 "interactive_query.m"

    Y = X

#line 2550 "mdb.interactive_query.c"

		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__Y_2  = Y;
#line 625 "interactive_query.m"
}
#line 622 "interactive_query.m"
    return mdb__interactive_query__Y_2;
#line 622 "interactive_query.m"
  }
#line 620 "interactive_query.m"
}

#line 569 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__dynamically_load_and_run_2_p_0(void)
#line 569 "interactive_query.m"
{
#line 571 "interactive_query.m"
  {
#line 571 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 571 "interactive_query.m"
    MR_Word mdb__interactive_query__MaybeHandle_4;
#line 571 "interactive_query.m"
    MR_String mdb__interactive_query__V_15_15;
#line 571 "interactive_query.m"
    MR_String mdb__interactive_query__V_20_20;
#line 571 "interactive_query.m"
    MR_String mdb__interactive_query__V_22_22;

#line 643 "interactive_query.m"
{
#define MR_PROC_LABEL mdb__interactive_query__dynamically_load_and_run_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 643 "interactive_query.m"

#if defined(MR_MAC_OSX)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif

#line 2597 "mdb.interactive_query.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 643 "interactive_query.m"
	}
mdb__interactive_query__succeeded  = SUCCESS_INDICATOR;
}
#line 636 "interactive_query.m"
    if (mdb__interactive_query__succeeded)
#line 637 "interactive_query.m"
      mdb__interactive_query__V_22_22 = (MR_String) ".dylib";
#line 636 "interactive_query.m"
    else
#line 637 "interactive_query.m"
      mdb__interactive_query__V_22_22 = (MR_String) ".so";
#line 574 "interactive_query.m"
    {
#line 574 "interactive_query.m"
      mdb__interactive_query__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "mdb_query", mdb__interactive_query__V_22_22);
    }
#line 574 "interactive_query.m"
    {
#line 574 "interactive_query.m"
      mdb__interactive_query__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "./lib", mdb__interactive_query__V_20_20);
    }
#line 574 "interactive_query.m"
    {
#line 574 "interactive_query.m"
      mdb__dl__open_6_p_0(mdb__interactive_query__V_15_15, (MR_Integer) 0, (MR_Integer) 0, &mdb__interactive_query__MaybeHandle_4);
    }
#line 579 "interactive_query.m"
    if (((MR_tag((MR_Word) mdb__interactive_query__MaybeHandle_4)) == (MR_mktag((MR_Integer) 1))))
#line 577 "interactive_query.m"
      {
#line 577 "interactive_query.m"
        MR_String mdb__interactive_query__Msg_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__MaybeHandle_4, (MR_Integer) 0)));
#line 577 "interactive_query.m"
        MR_String mdb__interactive_query__V_76_76;

#line 578 "interactive_query.m"
        {
#line 578 "interactive_query.m"
          mercury__io__write_string_3_p_0((MR_String) "dlopen failed: ");
        }
#line 578 "interactive_query.m"
        {
#line 578 "interactive_query.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], mdb__interactive_query__Msg_5, &mdb__interactive_query__V_76_76);
        }
#line 578 "interactive_query.m"
        {
#line 578 "interactive_query.m"
          mercury__io__write_string_3_p_0(mdb__interactive_query__V_76_76);
        }
#line 578 "interactive_query.m"
        {
#line 578 "interactive_query.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 578 "interactive_query.m"
          return;
        }
#line 577 "interactive_query.m"
      }
#line 579 "interactive_query.m"
    else
#line 580 "interactive_query.m"
      {
#line 580 "interactive_query.m"
        MR_Word mdb__interactive_query__Handle_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__MaybeHandle_4, (MR_Integer) 0)));
#line 580 "interactive_query.m"
        MR_Word mdb__interactive_query__MaybeQuery_8;
#line 580 "interactive_query.m"
        MR_Word mdb__interactive_query__Result_11;

#line 585 "interactive_query.m"
        {
#line 585 "interactive_query.m"
          mdb__dl__mercury_sym_5_p_0((MR_Word) &mdb__interactive_query_scalar_common_2[0], mdb__interactive_query__Handle_6, (MR_Word) &mdb__interactive_query_scalar_common_7[0], &mdb__interactive_query__MaybeQuery_8);
        }
#line 589 "interactive_query.m"
        if (((MR_tag((MR_Word) mdb__interactive_query__MaybeQuery_8)) == (MR_mktag((MR_Integer) 1))))
#line 587 "interactive_query.m"
          {
#line 587 "interactive_query.m"
            MR_String mdb__interactive_query__Msg_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__MaybeQuery_8, (MR_Integer) 0)));
#line 587 "interactive_query.m"
            MR_String mdb__interactive_query__V_54_54;

#line 588 "interactive_query.m"
            {
#line 588 "interactive_query.m"
              mercury__io__write_string_3_p_0((MR_String) "dlsym failed: ");
            }
#line 588 "interactive_query.m"
            {
#line 588 "interactive_query.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], mdb__interactive_query__Msg_47, &mdb__interactive_query__V_54_54);
            }
#line 588 "interactive_query.m"
            {
#line 588 "interactive_query.m"
              mercury__io__write_string_3_p_0(mdb__interactive_query__V_54_54);
            }
#line 588 "interactive_query.m"
            {
#line 588 "interactive_query.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 587 "interactive_query.m"
          }
#line 589 "interactive_query.m"
        else
#line 590 "interactive_query.m"
          {
#line 590 "interactive_query.m"
            MR_Word mdb__interactive_query__QueryPred0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__MaybeQuery_8, (MR_Integer) 0)));
#line 590 "interactive_query.m"
            MR_Word mdb__interactive_query__QueryPred_10;
#line 596 "interactive_query.m"
            void MR_CALL (* mdb__interactive_query__func_0)(MR_Box, MR_Box, MR_Box *);
#line 596 "interactive_query.m"
            MR_Box mdb__interactive_query__conv1_STATE_VARIABLE_IO_33_33;

#line 625 "interactive_query.m"
{
#define MR_PROC_LABEL mdb__interactive_query__dynamically_load_and_run_2_p_0

	MR_Word X;
	MR_Word Y;

	X =  mdb__interactive_query__QueryPred0_9 ;
		{
#line 625 "interactive_query.m"

    Y = X

#line 2735 "mdb.interactive_query.c"

		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__QueryPred_10  = Y;
#line 625 "interactive_query.m"
}
#line 596 "interactive_query.m"
            mdb__interactive_query__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdb__interactive_query__QueryPred_10, (MR_Integer) 1)));
#line 596 "interactive_query.m"
            {
#line 596 "interactive_query.m"
              mdb__interactive_query__func_0(((MR_Box) mdb__interactive_query__QueryPred_10), ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv1_STATE_VARIABLE_IO_33_33);
            }
#line 590 "interactive_query.m"
          }
#line 600 "interactive_query.m"
        {
#line 600 "interactive_query.m"
          mdb__dl__close_4_p_0(mdb__interactive_query__Handle_6, &mdb__interactive_query__Result_11);
        }
#line 604 "interactive_query.m"
        if ((mdb__interactive_query__Result_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "interactive_query.m"
          {
#line 605 "interactive_query.m"
          }
#line 604 "interactive_query.m"
        else
#line 602 "interactive_query.m"
          {
#line 602 "interactive_query.m"
            MR_String mdb__interactive_query__CloseMsg_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_11, (MR_Integer) 0)));
#line 602 "interactive_query.m"
            MR_String mdb__interactive_query__V_65_65;

#line 603 "interactive_query.m"
            {
#line 603 "interactive_query.m"
              mercury__io__write_string_3_p_0((MR_String) "dlclose failed: ");
            }
#line 603 "interactive_query.m"
            {
#line 603 "interactive_query.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], mdb__interactive_query__CloseMsg_12, &mdb__interactive_query__V_65_65);
            }
#line 603 "interactive_query.m"
            {
#line 603 "interactive_query.m"
              mercury__io__write_string_3_p_0(mdb__interactive_query__V_65_65);
            }
#line 603 "interactive_query.m"
            {
#line 603 "interactive_query.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
#line 603 "interactive_query.m"
              return;
            }
#line 602 "interactive_query.m"
          }
#line 580 "interactive_query.m"
      }
#line 571 "interactive_query.m"
  }
#line 569 "interactive_query.m"
}

#line 512 "interactive_query.m"
static MR_String MR_CALL 
mdb__interactive_query__grade_option_0_f_0(void)
#line 512 "interactive_query.m"
{
#line 518 "interactive_query.m"
  {
#line 518 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 518 "interactive_query.m"
    MR_String mdb__interactive_query__GradeOpt_1;

#line 521 "interactive_query.m"
{
#define MR_PROC_LABEL mdb__interactive_query__grade_option_0_f_0

	MR_String GradeOpt;

		{
#line 521 "interactive_query.m"

    MR_make_aligned_string(GradeOpt, (MR_String) MR_GRADE_OPT);

#line 2825 "mdb.interactive_query.c"

		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__GradeOpt_1  = GradeOpt;
#line 521 "interactive_query.m"
}
#line 518 "interactive_query.m"
    return mdb__interactive_query__GradeOpt_1;
#line 518 "interactive_query.m"
  }
#line 512 "interactive_query.m"
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

#line 521 "interactive_query.m"
{
#define MR_PROC_LABEL mdb__interactive_query__compile_file_4_p_0

	MR_String GradeOpt;

		{
#line 521 "interactive_query.m"

    MR_make_aligned_string(GradeOpt, (MR_String) MR_GRADE_OPT);

#line 2884 "mdb.interactive_query.c"

		;}
#undef MR_PROC_LABEL
	 mdb__interactive_query__V_23_23  = GradeOpt;
#line 521 "interactive_query.m"
}
#line 486 "interactive_query.m"
    {
#line 486 "interactive_query.m"
      mdb__interactive_query__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_22_22, 0) = ((MR_Box) (mdb__interactive_query__V_23_23));
#line 486 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[6])));
#line 486 "interactive_query.m"
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
#line 485 "interactive_query.m"
    {
#line 485 "interactive_query.m"
      mdb__interactive_query__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_19_19, 0) = ((MR_Box) (mdb__interactive_query__Options_5));
#line 485 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_19_19, 1) = ((MR_Box) (mdb__interactive_query__V_20_20));
#line 485 "interactive_query.m"
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
#line 481 "interactive_query.m"
    {
#line 481 "interactive_query.m"
      mercury__string__append_list_2_p_0(mdb__interactive_query__V_11_11, &mdb__interactive_query__Command_8);
    }
#line 541 "interactive_query.m"
    {
#line 541 "interactive_query.m"
      mercury__io__call_system_4_p_0(mdb__interactive_query__Command_8, &mdb__interactive_query__Result_37);
    }
#line 555 "interactive_query.m"
    if (((MR_tag((MR_Word) mdb__interactive_query__Result_37)) == (MR_mktag((MR_Integer) 1))))
#line 556 "interactive_query.m"
      {
#line 557 "interactive_query.m"
        {
#line 557 "interactive_query.m"
          mercury__io__write_string_3_p_0((MR_String) "Error: unable to invoke the compiler.\n");
        }
#line 558 "interactive_query.m"
        *mdb__interactive_query__Succeeded_6 = (MR_Integer) 0;
#line 556 "interactive_query.m"
      }
#line 555 "interactive_query.m"
    else
#line 543 "interactive_query.m"
      {
#line 543 "interactive_query.m"
        MR_Integer mdb__interactive_query__Status_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Result_37, (MR_Integer) 0)));

#line 544 "interactive_query.m"
        mdb__interactive_query__succeeded = (mdb__interactive_query__Status_38 == (MR_Integer) 0);
#line 551 "interactive_query.m"
        if (mdb__interactive_query__succeeded)
#line 550 "interactive_query.m"
          *mdb__interactive_query__Succeeded_6 = (MR_Integer) 1;
#line 551 "interactive_query.m"
        else
#line 552 "interactive_query.m"
          {
#line 552 "interactive_query.m"
            {
#line 552 "interactive_query.m"
              mercury__io__write_string_3_p_0((MR_String) "Compilation error(s) occurred.\n");
            }
#line 553 "interactive_query.m"
            *mdb__interactive_query__Succeeded_6 = (MR_Integer) 0;
#line 552 "interactive_query.m"
          }
#line 543 "interactive_query.m"
      }
#line 458 "interactive_query.m"
  }
#line 456 "interactive_query.m"
}

#line 449 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0_1(
#line 449 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 449 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 449 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 449 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3)
#line 449 "interactive_query.m"
{
#line 449 "interactive_query.m"
  {
#line 449 "interactive_query.m"
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

#line 449 "interactive_query.m"
    {
#line 449 "interactive_query.m"
      mercury__term_io__quote_atom_3_p_0(((MR_String) mdb__interactive_query__wrapper_arg_1));
#line 449 "interactive_query.m"
      return;
    }
#line 449 "interactive_query.m"
  }
#line 449 "interactive_query.m"
}

#line 444 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_import_list_4_p_0(
#line 444 "interactive_query.m"
  MR_Word mdb__interactive_query__Out_5,
#line 444 "interactive_query.m"
  MR_Word mdb__interactive_query__Imports_6)
#line 444 "interactive_query.m"
{
#line 447 "interactive_query.m"
  {
#line 447 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;

#line 448 "interactive_query.m"
    {
#line 448 "interactive_query.m"
      mercury__io__write_string_4_p_0(mdb__interactive_query__Out_5, (MR_String) ":- import_module ");
    }
#line 449 "interactive_query.m"
    {
#line 449 "interactive_query.m"
      mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__Out_5, mdb__interactive_query__Imports_6, (MR_String) ", ", (MR_Word) &mdb__interactive_query_scalar_common_5[1]);
    }
#line 450 "interactive_query.m"
    {
#line 450 "interactive_query.m"
      mercury__io__write_string_4_p_0(mdb__interactive_query__Out_5, (MR_String) ".\n");
#line 450 "interactive_query.m"
      return;
    }
#line 447 "interactive_query.m"
  }
#line 444 "interactive_query.m"
}

#line 439 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_one_var_4_p_0(
#line 439 "interactive_query.m"
  MR_Word mdb__interactive_query__VarSet_5,
#line 439 "interactive_query.m"
  MR_Word mdb__interactive_query__Var_6)
#line 439 "interactive_query.m"
{
#line 442 "interactive_query.m"
  {
#line 442 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;

#line 442 "interactive_query.m"
    {
#line 442 "interactive_query.m"
      mercury__term_io__write_variable_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, mdb__interactive_query__Var_6, mdb__interactive_query__VarSet_5);
#line 442 "interactive_query.m"
      return;
    }
#line 442 "interactive_query.m"
  }
#line 439 "interactive_query.m"
}

#line 433 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_args_4_p_0_1(
#line 433 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 433 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 433 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 433 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3)
#line 433 "interactive_query.m"
{
#line 433 "interactive_query.m"
  {
#line 433 "interactive_query.m"
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

#line 433 "interactive_query.m"
    {
#line 433 "interactive_query.m"
      mdb__interactive_query__write_one_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_Word) mdb__interactive_query__wrapper_arg_1));
#line 433 "interactive_query.m"
      return;
    }
#line 433 "interactive_query.m"
  }
#line 433 "interactive_query.m"
}

#line 427 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_args_4_p_0(
#line 427 "interactive_query.m"
  MR_Word mdb__interactive_query__Vars_5,
#line 427 "interactive_query.m"
  MR_Word mdb__interactive_query__VarSet_6)
#line 427 "interactive_query.m"
{
#line 431 "interactive_query.m"
  {
#line 431 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;

#line 431 "interactive_query.m"
    if ((mdb__interactive_query__Vars_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "interactive_query.m"
      {
#line 436 "interactive_query.m"
      }
#line 431 "interactive_query.m"
    else
#line 431 "interactive_query.m"
      {
#line 431 "interactive_query.m"
        MR_Word mdb__interactive_query__V_15_15;

#line 432 "interactive_query.m"
        {
#line 432 "interactive_query.m"
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
#line 433 "interactive_query.m"
        {
#line 433 "interactive_query.m"
          mdb__interactive_query__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 433 "interactive_query.m"
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_6[0]));
#line 433 "interactive_query.m"
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 1) = ((MR_Box) (mdb__interactive_query__write_args_4_p_0_1));
#line 433 "interactive_query.m"
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 433 "interactive_query.m"
          MR_hl_field(MR_mktag(0), mdb__interactive_query__V_15_15, 3) = ((MR_Box) (mdb__interactive_query__VarSet_6));
#line 433 "interactive_query.m"
        }
#line 433 "interactive_query.m"
        {
#line 433 "interactive_query.m"
          mercury__io__write_list_5_p_0((MR_Word) &mdb__interactive_query_scalar_common_1[0], mdb__interactive_query__Vars_5, (MR_String) ", ", mdb__interactive_query__V_15_15);
        }
#line 434 "interactive_query.m"
        {
#line 434 "interactive_query.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
#line 434 "interactive_query.m"
          return;
        }
#line 431 "interactive_query.m"
      }
#line 431 "interactive_query.m"
  }
#line 427 "interactive_query.m"
}

#line 417 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_code_to_print_one_var_4_p_0(
#line 417 "interactive_query.m"
  MR_Word mdb__interactive_query__VarSet_5,
#line 417 "interactive_query.m"
  MR_Word mdb__interactive_query__Var_6)
#line 417 "interactive_query.m"
{
#line 420 "interactive_query.m"
  {
#line 420 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 420 "interactive_query.m"
    MR_Word mdb__interactive_query__TypeCtorInfo_18_18;

#line 421 "interactive_query.m"
    {
#line 421 "interactive_query.m"
      mercury__io__write_string_3_p_0((MR_String) "io.write_string(\"");
    }
#line 3225 "mdb.interactive_query.c"
    mdb__interactive_query__TypeCtorInfo_18_18 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 422 "interactive_query.m"
    {
#line 422 "interactive_query.m"
      mercury__term_io__write_variable_4_p_0(mdb__interactive_query__TypeCtorInfo_18_18, mdb__interactive_query__Var_6, mdb__interactive_query__VarSet_5);
    }
#line 423 "interactive_query.m"
    {
#line 423 "interactive_query.m"
      mercury__io__write_string_3_p_0((MR_String) " = \"), io.write_cc(");
    }
#line 424 "interactive_query.m"
    {
#line 424 "interactive_query.m"
      mercury__term_io__write_variable_4_p_0(mdb__interactive_query__TypeCtorInfo_18_18, mdb__interactive_query__Var_6, mdb__interactive_query__VarSet_5);
    }
#line 425 "interactive_query.m"
    {
#line 425 "interactive_query.m"
      mercury__io__write_string_3_p_0((MR_String) "), io.write_string(\", \"), ");
#line 425 "interactive_query.m"
      return;
    }
#line 420 "interactive_query.m"
  }
#line 417 "interactive_query.m"
}

#line 409 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_line_directive_2_p_0(void)
#line 409 "interactive_query.m"
{
#line 411 "interactive_query.m"
  {
#line 411 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 411 "interactive_query.m"
    MR_Integer mdb__interactive_query__LineNum_4;

#line 412 "interactive_query.m"
    {
#line 412 "interactive_query.m"
      mercury__io__write_string_3_p_0((MR_String) "\n#");
    }
#line 413 "interactive_query.m"
    {
#line 413 "interactive_query.m"
      mercury__io__get_line_number_3_p_0(&mdb__interactive_query__LineNum_4);
    }
#line 414 "interactive_query.m"
    {
#line 414 "interactive_query.m"
      mercury__io__write_int_3_p_0(mdb__interactive_query__LineNum_4);
    }
#line 415 "interactive_query.m"
    {
#line 415 "interactive_query.m"
      mercury__io__nl_2_p_0();
#line 415 "interactive_query.m"
      return;
    }
#line 411 "interactive_query.m"
  }
#line 409 "interactive_query.m"
}

#line 330 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_2(
#line 330 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 330 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 330 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 330 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3)
#line 330 "interactive_query.m"
{
#line 330 "interactive_query.m"
  {
#line 330 "interactive_query.m"
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

#line 330 "interactive_query.m"
    {
#line 330 "interactive_query.m"
      mdb__interactive_query__write_code_to_print_one_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_Word) mdb__interactive_query__wrapper_arg_1));
#line 330 "interactive_query.m"
      return;
    }
#line 330 "interactive_query.m"
  }
#line 330 "interactive_query.m"
}

#line 384 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0_1(
#line 384 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 384 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 384 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 384 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3)
#line 384 "interactive_query.m"
{
#line 384 "interactive_query.m"
  {
#line 384 "interactive_query.m"
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

#line 384 "interactive_query.m"
    {
#line 384 "interactive_query.m"
      mdb__interactive_query__write_code_to_print_one_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__closure, (MR_Integer) 3))), ((MR_Word) mdb__interactive_query__wrapper_arg_1));
#line 384 "interactive_query.m"
      return;
    }
#line 384 "interactive_query.m"
  }
#line 384 "interactive_query.m"
}

#line 276 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__write_prog_to_stream_3_p_0(
#line 276 "interactive_query.m"
  MR_Word mdb__interactive_query__HeadVar__1_1)
#line 276 "interactive_query.m"
{
#line 278 "interactive_query.m"
  {
#line 278 "interactive_query.m"
    MR_bool mdb__interactive_query__succeeded;
#line 278 "interactive_query.m"
    MR_Word mdb__interactive_query__QueryType_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 0)));
#line 278 "interactive_query.m"
    MR_Word mdb__interactive_query__Imports_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 1)));
#line 278 "interactive_query.m"
    MR_Word mdb__interactive_query__Term_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 2)));
#line 278 "interactive_query.m"
    MR_Word mdb__interactive_query__VarSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__HeadVar__1_1, (MR_Integer) 3)));
#line 278 "interactive_query.m"
    MR_Word mdb__interactive_query__Out_9;
#line 278 "interactive_query.m"
    MR_Word mdb__interactive_query__V_17_17;

#line 279 "interactive_query.m"
    {
#line 279 "interactive_query.m"
      mercury__io__write_string_3_p_0((MR_String) "\n        :- module mdb_query.\n        :- interface.\n        :- import_module io.\n        :- pred run(io.state::di, io.state::uo) is cc_multi.\n        :- impleme" "ntation.\n        ");
    }
#line 286 "interactive_query.m"
    {
#line 286 "interactive_query.m"
      mercury__io__output_stream_3_p_0(&mdb__interactive_query__Out_9);
    }
#line 287 "interactive_query.m"
    {
#line 287 "interactive_query.m"
      mdb__interactive_query__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_17_17, 0) = ((MR_Box) ((MR_String) "solutions"));
#line 287 "interactive_query.m"
      MR_hl_field(MR_mktag(1), mdb__interactive_query__V_17_17, 1) = ((MR_Box) (mdb__interactive_query__Imports_5));
#line 287 "interactive_query.m"
    }
#line 287 "interactive_query.m"
    {
#line 287 "interactive_query.m"
      mdb__interactive_query__write_import_list_4_p_0(mdb__interactive_query__Out_9, mdb__interactive_query__V_17_17);
    }
#line 288 "interactive_query.m"
    {
#line 288 "interactive_query.m"
      mercury__io__write_string_3_p_0((MR_String) "\n            :- pragma source_file(\"<stdin>\").\n            run -->\n    ");
    }
#line 363 "interactive_query.m"
#line 363 "interactive_query.m"
    switch (mdb__interactive_query__QueryType_4) {
#line 363 "interactive_query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 363 "interactive_query.m"
      case (MR_Integer) 1:
#line 364 "interactive_query.m"
        {
#line 364 "interactive_query.m"
          MR_Word mdb__interactive_query__TypeCtorInfo_84_84 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 364 "interactive_query.m"
          MR_Word mdb__interactive_query__TypeInfo_85_85;
#line 364 "interactive_query.m"
          MR_Word mdb__interactive_query__V_31_31;
#line 364 "interactive_query.m"
          MR_Word mdb__interactive_query__Vars0_76;
#line 364 "interactive_query.m"
          MR_Word mdb__interactive_query__Vars_77;
#line 384 "interactive_query.m"
          MR_Box mdb__interactive_query__conv0_STATE_VARIABLE_IO_32_32;

#line 379 "interactive_query.m"
          {
#line 379 "interactive_query.m"
            mercury__term__vars_2_p_0(mdb__interactive_query__TypeCtorInfo_84_84, mdb__interactive_query__Term_6, &mdb__interactive_query__Vars0_76);
          }
#line 3434 "mdb.interactive_query.c"
          mdb__interactive_query__TypeInfo_85_85 = (MR_Word) &mdb__interactive_query_scalar_common_1[0];
#line 380 "interactive_query.m"
          {
#line 380 "interactive_query.m"
            mercury__list__remove_dups_2_p_0(mdb__interactive_query__TypeInfo_85_85, mdb__interactive_query__Vars0_76, &mdb__interactive_query__Vars_77);
          }
#line 381 "interactive_query.m"
          {
#line 381 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "(if { query");
          }
#line 382 "interactive_query.m"
          {
#line 382 "interactive_query.m"
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_77, mdb__interactive_query__VarSet_7);
          }
#line 383 "interactive_query.m"
          {
#line 383 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) " } then\n");
          }
#line 384 "interactive_query.m"
          {
#line 384 "interactive_query.m"
            mdb__interactive_query__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 384 "interactive_query.m"
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_31_31, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_6[0]));
#line 384 "interactive_query.m"
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_31_31, 1) = ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_1));
#line 384 "interactive_query.m"
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 384 "interactive_query.m"
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_31_31, 3) = ((MR_Box) (mdb__interactive_query__VarSet_7));
#line 384 "interactive_query.m"
          }
#line 384 "interactive_query.m"
          {
#line 384 "interactive_query.m"
            mercury__list__foldl_4_p_2(mdb__interactive_query__TypeInfo_85_85, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mdb__interactive_query__V_31_31, mdb__interactive_query__Vars_77, ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv0_STATE_VARIABLE_IO_32_32);
          }
#line 385 "interactive_query.m"
          {
#line 385 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "\n                    io.write_string(\"true.\\n\")\n                else\n                    io.write_string(\"No solution.\\n\")\n                ).\n        ");
          }
#line 391 "interactive_query.m"
          {
#line 391 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "query");
          }
#line 392 "interactive_query.m"
          {
#line 392 "interactive_query.m"
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_77, mdb__interactive_query__VarSet_7);
          }
#line 393 "interactive_query.m"
          {
#line 393 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) " :-\n");
          }
#line 394 "interactive_query.m"
          {
#line 394 "interactive_query.m"
            mdb__interactive_query__write_line_directive_2_p_0();
          }
#line 395 "interactive_query.m"
          {
#line 395 "interactive_query.m"
            mercury__term_io__write_term_4_p_0(mdb__interactive_query__TypeCtorInfo_84_84, mdb__interactive_query__VarSet_7, mdb__interactive_query__Term_6);
          }
#line 396 "interactive_query.m"
          {
#line 396 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) " .\n");
#line 396 "interactive_query.m"
            return;
          }
#line 364 "interactive_query.m"
        }
#line 363 "interactive_query.m"
        break;
#line 363 "interactive_query.m"
      case (MR_Integer) 2:
#line 398 "interactive_query.m"
        {
#line 404 "interactive_query.m"
          {
#line 404 "interactive_query.m"
            mdb__interactive_query__write_line_directive_2_p_0();
          }
#line 405 "interactive_query.m"
          {
#line 405 "interactive_query.m"
            mercury__term_io__write_term_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, mdb__interactive_query__VarSet_7, mdb__interactive_query__Term_6);
          }
#line 406 "interactive_query.m"
          {
#line 406 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) " .\n");
#line 406 "interactive_query.m"
            return;
          }
#line 398 "interactive_query.m"
        }
#line 363 "interactive_query.m"
        break;
#line 363 "interactive_query.m"
      case (MR_Integer) 0:
#line 293 "interactive_query.m"
        {
#line 293 "interactive_query.m"
          MR_Word mdb__interactive_query__TypeCtorInfo_78_78 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 293 "interactive_query.m"
          MR_Word mdb__interactive_query__TypeInfo_79_79;
#line 293 "interactive_query.m"
          MR_Word mdb__interactive_query__Vars0_10;
#line 293 "interactive_query.m"
          MR_Word mdb__interactive_query__Vars_11;
#line 293 "interactive_query.m"
          MR_Word mdb__interactive_query__V_57_57;
#line 330 "interactive_query.m"
          MR_Box mdb__interactive_query__conv1_STATE_VARIABLE_IO_58_58;

#line 294 "interactive_query.m"
          {
#line 294 "interactive_query.m"
            mercury__term__vars_2_p_0(mdb__interactive_query__TypeCtorInfo_78_78, mdb__interactive_query__Term_6, &mdb__interactive_query__Vars0_10);
          }
#line 3563 "mdb.interactive_query.c"
          mdb__interactive_query__TypeInfo_79_79 = (MR_Word) &mdb__interactive_query_scalar_common_1[0];
#line 295 "interactive_query.m"
          {
#line 295 "interactive_query.m"
            mercury__list__remove_dups_2_p_0(mdb__interactive_query__TypeInfo_79_79, mdb__interactive_query__Vars0_10, &mdb__interactive_query__Vars_11);
          }
#line 318 "interactive_query.m"
          {
#line 318 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "\n            unsorted_aggregate(\n                (pred(res");
          }
#line 321 "interactive_query.m"
          {
#line 321 "interactive_query.m"
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
#line 322 "interactive_query.m"
          {
#line 322 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "::out) is nondet :-\n            query");
          }
#line 324 "interactive_query.m"
          {
#line 324 "interactive_query.m"
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
#line 325 "interactive_query.m"
          {
#line 325 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "),");
          }
#line 326 "interactive_query.m"
          {
#line 326 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "(pred(res");
          }
#line 327 "interactive_query.m"
          {
#line 327 "interactive_query.m"
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
#line 328 "interactive_query.m"
          {
#line 328 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "::in, di, uo) is cc_multi -->\n            ");
          }
#line 330 "interactive_query.m"
          {
#line 330 "interactive_query.m"
            mdb__interactive_query__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 330 "interactive_query.m"
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 0) = ((MR_Box) (&mdb__interactive_query_scalar_common_6[0]));
#line 330 "interactive_query.m"
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 1) = ((MR_Box) (mdb__interactive_query__write_prog_to_stream_3_p_0_2));
#line 330 "interactive_query.m"
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 330 "interactive_query.m"
            MR_hl_field(MR_mktag(0), mdb__interactive_query__V_57_57, 3) = ((MR_Box) (mdb__interactive_query__VarSet_7));
#line 330 "interactive_query.m"
          }
#line 330 "interactive_query.m"
          {
#line 330 "interactive_query.m"
            mercury__list__foldl_4_p_2(mdb__interactive_query__TypeInfo_79_79, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mdb__interactive_query__V_57_57, mdb__interactive_query__Vars_11, ((MR_Box) ((MR_Integer) 0)), &mdb__interactive_query__conv1_STATE_VARIABLE_IO_58_58);
          }
#line 331 "interactive_query.m"
          {
#line 331 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "\n                    io.write_string(\"true ;\n\"))\n                ),\n                io.write_string(\"fail.\n\"),\n                io.write_string(\"No (more) soluti" "ons.\n\").\n\n            :- type res");
          }
#line 338 "interactive_query.m"
          {
#line 338 "interactive_query.m"
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
#line 339 "interactive_query.m"
          {
#line 339 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) " ---> res");
          }
#line 340 "interactive_query.m"
          {
#line 340 "interactive_query.m"
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
#line 341 "interactive_query.m"
          {
#line 341 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
#line 356 "interactive_query.m"
          {
#line 356 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) "\n            query");
          }
#line 358 "interactive_query.m"
          {
#line 358 "interactive_query.m"
            mdb__interactive_query__write_args_4_p_0(mdb__interactive_query__Vars_11, mdb__interactive_query__VarSet_7);
          }
#line 359 "interactive_query.m"
          {
#line 359 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) " :- ");
          }
#line 360 "interactive_query.m"
          {
#line 360 "interactive_query.m"
            mdb__interactive_query__write_line_directive_2_p_0();
          }
#line 361 "interactive_query.m"
          {
#line 361 "interactive_query.m"
            mercury__term_io__write_term_4_p_0(mdb__interactive_query__TypeCtorInfo_78_78, mdb__interactive_query__VarSet_7, mdb__interactive_query__Term_6);
          }
#line 362 "interactive_query.m"
          {
#line 362 "interactive_query.m"
            mercury__io__write_string_3_p_0((MR_String) " .\n");
#line 362 "interactive_query.m"
            return;
          }
#line 293 "interactive_query.m"
        }
#line 363 "interactive_query.m"
        break;
#line 363 "interactive_query.m"
    }
#line 278 "interactive_query.m"
  }
#line 276 "interactive_query.m"
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
          mercury__io__write_string_3_p_0((MR_String) "Unable to unset MERCURY_OPTIONS environment variable");
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
        MR_Word mdb__interactive_query__Stream_34;
#line 221 "interactive_query.m"
        MR_Word mdb__interactive_query__OldStream_35;
#line 221 "interactive_query.m"
        MR_Word mdb__interactive_query__Result_47;
#line 250 "interactive_query.m"
        MR_Word mdb__interactive_query__V_36_36;

#line 222 "interactive_query.m"
        {
#line 222 "interactive_query.m"
          mercury__io__set_environment_var_4_p_0((MR_String) "MERCURY_OPTIONS", (MR_String) "");
        }
#line 257 "interactive_query.m"
        {
#line 257 "interactive_query.m"
          mercury__io__open_output_4_p_0((MR_String) "mdb_query.m", &mdb__interactive_query__Result_47);
        }
#line 261 "interactive_query.m"
        if (((MR_tag((MR_Word) mdb__interactive_query__Result_47)) == (MR_mktag((MR_Integer) 1))))
#line 262 "interactive_query.m"
          {
#line 262 "interactive_query.m"
            MR_Word mdb__interactive_query__Error_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__Result_47, (MR_Integer) 0)));
#line 262 "interactive_query.m"
            MR_String mdb__interactive_query__Progname_50;
#line 262 "interactive_query.m"
            MR_String mdb__interactive_query__ErrorMessage_51;
#line 262 "interactive_query.m"
            MR_String mdb__interactive_query__Message_52;
#line 262 "interactive_query.m"
            MR_Word mdb__interactive_query__V_56_56;
#line 262 "interactive_query.m"
            MR_Word mdb__interactive_query__V_57_57;
#line 262 "interactive_query.m"
            MR_Word mdb__interactive_query__V_59_59;
#line 262 "interactive_query.m"
            MR_Word mdb__interactive_query__V_61_61;
#line 262 "interactive_query.m"
            MR_Word mdb__interactive_query__V_62_62;
#line 262 "interactive_query.m"
            MR_Word mdb__interactive_query__V_64_64;

#line 263 "interactive_query.m"
            {
#line 263 "interactive_query.m"
              mercury__io__progname_4_p_0((MR_String) "interactive", &mdb__interactive_query__Progname_50);
            }
#line 264 "interactive_query.m"
            {
#line 264 "interactive_query.m"
              mercury__io__error_message_2_p_0(mdb__interactive_query__Error_49, &mdb__interactive_query__ErrorMessage_51);
            }
#line 268 "interactive_query.m"
            {
#line 268 "interactive_query.m"
              mdb__interactive_query__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_64_64, 0) = ((MR_Box) (mdb__interactive_query__ErrorMessage_51));
#line 268 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__interactive_query_scalar_common_1[4])));
#line 268 "interactive_query.m"
            }
#line 267 "interactive_query.m"
            {
#line 267 "interactive_query.m"
              mdb__interactive_query__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_62_62, 0) = ((MR_Box) ((MR_String) "\' for output:\n\t"));
#line 267 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_62_62, 1) = ((MR_Box) (mdb__interactive_query__V_64_64));
#line 267 "interactive_query.m"
            }
#line 267 "interactive_query.m"
            {
#line 267 "interactive_query.m"
              mdb__interactive_query__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_61_61, 0) = ((MR_Box) ((MR_String) "mdb_query.m"));
#line 267 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_61_61, 1) = ((MR_Box) (mdb__interactive_query__V_62_62));
#line 267 "interactive_query.m"
            }
#line 267 "interactive_query.m"
            {
#line 267 "interactive_query.m"
              mdb__interactive_query__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_59_59, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 267 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_59_59, 1) = ((MR_Box) (mdb__interactive_query__V_61_61));
#line 267 "interactive_query.m"
            }
#line 266 "interactive_query.m"
            {
#line 266 "interactive_query.m"
              mdb__interactive_query__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_57_57, 0) = ((MR_Box) ((MR_String) ": "));
#line 266 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_57_57, 1) = ((MR_Box) (mdb__interactive_query__V_59_59));
#line 266 "interactive_query.m"
            }
#line 266 "interactive_query.m"
            {
#line 266 "interactive_query.m"
              mdb__interactive_query__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_56_56, 0) = ((MR_Box) (mdb__interactive_query__Progname_50));
#line 266 "interactive_query.m"
              MR_hl_field(MR_mktag(1), mdb__interactive_query__V_56_56, 1) = ((MR_Box) (mdb__interactive_query__V_57_57));
#line 266 "interactive_query.m"
            }
#line 265 "interactive_query.m"
            {
#line 265 "interactive_query.m"
              mercury__string__append_list_2_p_0(mdb__interactive_query__V_56_56, &mdb__interactive_query__Message_52);
            }
#line 270 "interactive_query.m"
            {
#line 270 "interactive_query.m"
              mercury__io__write_string_3_p_0(mdb__interactive_query__Message_52);
            }
#line 273 "interactive_query.m"
            {
#line 273 "interactive_query.m"
              mercury__io__stdout_stream_3_p_0(&mdb__interactive_query__Stream_34);
            }
#line 262 "interactive_query.m"
          }
#line 261 "interactive_query.m"
        else
#line 259 "interactive_query.m"
          mdb__interactive_query__Stream_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__interactive_query__Result_47, (MR_Integer) 0)));
#line 248 "interactive_query.m"
        {
#line 248 "interactive_query.m"
          mercury__io__set_output_stream_4_p_0(mdb__interactive_query__Stream_34, &mdb__interactive_query__OldStream_35);
        }
#line 249 "interactive_query.m"
        {
#line 249 "interactive_query.m"
          mdb__interactive_query__write_prog_to_stream_3_p_0(mdb__interactive_query__Program_6);
        }
#line 250 "interactive_query.m"
        {
#line 250 "interactive_query.m"
          mercury__io__set_output_stream_4_p_0(mdb__interactive_query__OldStream_35, &mdb__interactive_query__V_36_36);
        }
#line 251 "interactive_query.m"
        {
#line 251 "interactive_query.m"
          mercury__io__close_output_3_p_0(mdb__interactive_query__Stream_34);
        }
#line 224 "interactive_query.m"
        {
#line 224 "interactive_query.m"
          mdb__interactive_query__compile_file_4_p_0(mdb__interactive_query__Options_5, &mdb__interactive_query__Succeeded_11);
        }
#line 228 "interactive_query.m"
#line 228 "interactive_query.m"
        switch (mdb__interactive_query__Succeeded_11) {
#line 228 "interactive_query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 228 "interactive_query.m"
          case (MR_Integer) 0:
#line 229 "interactive_query.m"
            {
#line 229 "interactive_query.m"
            }
#line 228 "interactive_query.m"
            break;
#line 228 "interactive_query.m"
          case (MR_Integer) 1:
#line 227 "interactive_query.m"
            {
#line 227 "interactive_query.m"
              mdb__interactive_query__dynamically_load_and_run_2_p_0();
            }
#line 228 "interactive_query.m"
            break;
#line 228 "interactive_query.m"
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
#line 211 "interactive_query.m"
                    mdb__interactive_query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_21_21, (MR_Integer) 0)));
#line 211 "interactive_query.m"
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
      mercury__io__write_string_4_p_0(mdb__interactive_query__SocketStream_6, (MR_String) ".\n");
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

#line 449 "interactive_query.m"
static void MR_CALL 
mdb__interactive_query__query_2_8_p_0_1(
#line 449 "interactive_query.m"
  MR_Box mdb__interactive_query__closure_arg,
#line 449 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_1,
#line 449 "interactive_query.m"
  MR_Box mdb__interactive_query__wrapper_arg_2,
#line 449 "interactive_query.m"
  MR_Box * mdb__interactive_query__wrapper_arg_3)
#line 449 "interactive_query.m"
{
#line 449 "interactive_query.m"
  {
#line 449 "interactive_query.m"
    MR_Box mdb__interactive_query__closure = mdb__interactive_query__closure_arg;

#line 449 "interactive_query.m"
    {
#line 449 "interactive_query.m"
      mercury__term_io__quote_atom_3_p_0(((MR_String) mdb__interactive_query__wrapper_arg_1));
#line 449 "interactive_query.m"
      return;
    }
#line 449 "interactive_query.m"
  }
#line 449 "interactive_query.m"
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
#line 99 "interactive_query.m"
    switch (MR_tag((MR_Word) mdb__interactive_query__ReadTerm_14)) {
#line 99 "interactive_query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 99 "interactive_query.m"
      case (MR_Integer) 0:
#line 100 "interactive_query.m"
        {
#line 100 "interactive_query.m"
          mercury__io__nl_3_p_0(mdb__interactive_query__MDB_Stdout_13);
#line 100 "interactive_query.m"
          return;
        }
#line 99 "interactive_query.m"
        break;
#line 99 "interactive_query.m"
      case (MR_Integer) 1:
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
        break;
#line 99 "interactive_query.m"
      case (MR_Integer) 2:
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
#line 122 "interactive_query.m"
            {
#line 122 "interactive_query.m"
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
#line 117 "interactive_query.m"
                          mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 117 "interactive_query.m"
                          if (mdb__interactive_query__succeeded)
#line 117 "interactive_query.m"
                            {
#line 117 "interactive_query.m"
                              mdb__interactive_query__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_34_34, (MR_Integer) 0)));
#line 117 "interactive_query.m"
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
                                          mdb__interactive_query__succeeded = ((((MR_tag((MR_Word) mdb__interactive_query__V_36_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__interactive_query__V_36_36, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 117 "interactive_query.m"
                                          if (mdb__interactive_query__succeeded)
#line 117 "interactive_query.m"
                                            mdb__interactive_query__NewOptions_21 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__interactive_query__V_36_36, (MR_Integer) 1)));
#line 116 "interactive_query.m"
                                        }
#line 117 "interactive_query.m"
                                    }
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
#line 122 "interactive_query.m"
              if (mdb__interactive_query__succeeded)
#line 120 "interactive_query.m"
                {
#line 120 "interactive_query.m"
                  MR_String mdb__interactive_query__V_59_59;

#line 119 "interactive_query.m"
                  {
#line 119 "interactive_query.m"
                    mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_13, (MR_String) "Compilation options: ");
                  }
#line 120 "interactive_query.m"
                  {
#line 120 "interactive_query.m"
                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdb__interactive_query_scalar_common_3[0], mdb__interactive_query__NewOptions_21, &mdb__interactive_query__V_59_59);
                  }
#line 120 "interactive_query.m"
                  {
#line 120 "interactive_query.m"
                    mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_13, mdb__interactive_query__V_59_59);
                  }
#line 119 "interactive_query.m"
                  {
#line 119 "interactive_query.m"
                    mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_13, (MR_String) "\n");
                  }
#line 121 "interactive_query.m"
                  {
#line 121 "interactive_query.m"
                    mdb__interactive_query__query_7_p_0(mdb__interactive_query__QueryType_9, mdb__interactive_query__Imports_10, mdb__interactive_query__NewOptions_21, mdb__interactive_query__MDB_Stdin_12, mdb__interactive_query__MDB_Stdout_13);
#line 121 "interactive_query.m"
                    return;
                  }
#line 120 "interactive_query.m"
                }
#line 122 "interactive_query.m"
              else
#line 128 "interactive_query.m"
                {
#line 128 "interactive_query.m"
                  MR_Word mdb__interactive_query__ModuleList_24;

#line 123 "interactive_query.m"
                  {
#line 123 "interactive_query.m"
                    mdb__interactive_query__succeeded = mdb__interactive_query__term_to_list_2_p_0(mdb__interactive_query__Term_19, &mdb__interactive_query__ModuleList_24);
                  }
#line 128 "interactive_query.m"
                  if (mdb__interactive_query__succeeded)
#line 125 "interactive_query.m"
                    {
#line 125 "interactive_query.m"
                      MR_Word mdb__interactive_query__NewImports_25;

#line 125 "interactive_query.m"
                      {
#line 125 "interactive_query.m"
                        mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__Imports_10, mdb__interactive_query__ModuleList_24, &mdb__interactive_query__NewImports_25);
                      }
#line 448 "interactive_query.m"
                      {
#line 448 "interactive_query.m"
                        mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_13, (MR_String) ":- import_module ");
                      }
#line 449 "interactive_query.m"
                      {
#line 449 "interactive_query.m"
                        mercury__io__write_list_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__interactive_query__MDB_Stdout_13, mdb__interactive_query__NewImports_25, (MR_String) ", ", (MR_Word) &mdb__interactive_query_scalar_common_5[0]);
                      }
#line 450 "interactive_query.m"
                      {
#line 450 "interactive_query.m"
                        mercury__io__write_string_4_p_0(mdb__interactive_query__MDB_Stdout_13, (MR_String) ".\n");
                      }
#line 127 "interactive_query.m"
                      {
#line 127 "interactive_query.m"
                        mdb__interactive_query__query_7_p_0(mdb__interactive_query__QueryType_9, mdb__interactive_query__NewImports_25, mdb__interactive_query__Options_11, mdb__interactive_query__MDB_Stdin_12, mdb__interactive_query__MDB_Stdout_13);
#line 127 "interactive_query.m"
                        return;
                      }
#line 125 "interactive_query.m"
                    }
#line 128 "interactive_query.m"
                  else
#line 133 "interactive_query.m"
                    {
#line 133 "interactive_query.m"
                      MR_Word mdb__interactive_query__V_48_48;

#line 133 "interactive_query.m"
                      {
#line 133 "interactive_query.m"
                        mercury__io__flush_output_3_p_0(mdb__interactive_query__MDB_Stdout_13);
                      }
#line 134 "interactive_query.m"
                      {
#line 134 "interactive_query.m"
                        mdb__interactive_query__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 134 "interactive_query.m"
                        MR_hl_field(MR_mktag(0), mdb__interactive_query__V_48_48, 0) = ((MR_Box) (mdb__interactive_query__QueryType_9));
#line 134 "interactive_query.m"
                        MR_hl_field(MR_mktag(0), mdb__interactive_query__V_48_48, 1) = ((MR_Box) (mdb__interactive_query__Imports_10));
#line 134 "interactive_query.m"
                        MR_hl_field(MR_mktag(0), mdb__interactive_query__V_48_48, 2) = ((MR_Box) (mdb__interactive_query__Term_19));
#line 134 "interactive_query.m"
                        MR_hl_field(MR_mktag(0), mdb__interactive_query__V_48_48, 3) = ((MR_Box) (mdb__interactive_query__VarSet_18));
#line 134 "interactive_query.m"
                      }
#line 134 "interactive_query.m"
                      {
#line 134 "interactive_query.m"
                        mdb__interactive_query__run_query_4_p_0(mdb__interactive_query__Options_11, mdb__interactive_query__V_48_48);
                      }
#line 135 "interactive_query.m"
                      {
#line 135 "interactive_query.m"
                        mdb__interactive_query__query_7_p_0(mdb__interactive_query__QueryType_9, mdb__interactive_query__Imports_10, mdb__interactive_query__Options_11, mdb__interactive_query__MDB_Stdin_12, mdb__interactive_query__MDB_Stdout_13);
#line 135 "interactive_query.m"
                        return;
                      }
#line 133 "interactive_query.m"
                    }
#line 128 "interactive_query.m"
                }
#line 122 "interactive_query.m"
            }
#line 107 "interactive_query.m"
        }
#line 99 "interactive_query.m"
        break;
#line 99 "interactive_query.m"
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
#line 161 "interactive_query.m"
        switch (MR_tag((MR_Word) mdb__interactive_query__Result_15)) {
#line 161 "interactive_query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 161 "interactive_query.m"
          case (MR_Integer) 0:
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
                mercury__io__write_string_4_p_0(mdb__interactive_query__SocketOut_12, (MR_String) ".\n");
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
            break;
#line 161 "interactive_query.m"
          case (MR_Integer) 1:
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
                mercury__io__write_string_4_p_0(mdb__interactive_query__SocketOut_12, (MR_String) ".\n");
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
            break;
#line 161 "interactive_query.m"
          case (MR_Integer) 2:
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
                    mercury__io__write_string_4_p_0(mdb__interactive_query__SocketOut_12, (MR_String) ".\n");
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
#line 173 "interactive_query.m"
                              mdb__interactive_query__succeeded = ((MR_tag((MR_Word) mdb__interactive_query__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 173 "interactive_query.m"
                              if (mdb__interactive_query__succeeded)
#line 173 "interactive_query.m"
                                {
#line 173 "interactive_query.m"
                                  mdb__interactive_query__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__interactive_query__V_39_39, (MR_Integer) 0)));
#line 173 "interactive_query.m"
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
                                              mdb__interactive_query__succeeded = ((((MR_tag((MR_Word) mdb__interactive_query__V_41_41)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__interactive_query__V_41_41, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 173 "interactive_query.m"
                                              if (mdb__interactive_query__succeeded)
#line 173 "interactive_query.m"
                                                mdb__interactive_query__NewOptions_22 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__interactive_query__V_41_41, (MR_Integer) 1)));
#line 172 "interactive_query.m"
                                            }
#line 173 "interactive_query.m"
                                        }
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
#line 161 "interactive_query.m"
            break;
#line 161 "interactive_query.m"
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
#line 203 "interactive_query.m"
        switch (mdb__interactive_query__QueryType_8) {
#line 203 "interactive_query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 203 "interactive_query.m"
          case (MR_Integer) 1:
#line 204 "interactive_query.m"
            mdb__interactive_query__V_22_22 = (MR_String) "\?- ";
#line 203 "interactive_query.m"
            break;
#line 203 "interactive_query.m"
          case (MR_Integer) 2:
#line 205 "interactive_query.m"
            mdb__interactive_query__V_22_22 = (MR_String) "run <-- ";
#line 203 "interactive_query.m"
            break;
#line 203 "interactive_query.m"
          case (MR_Integer) 0:
#line 203 "interactive_query.m"
            mdb__interactive_query__V_22_22 = (MR_String) "\?- ";
#line 203 "interactive_query.m"
            break;
#line 203 "interactive_query.m"
        }
#line 75 "interactive_query.m"
        {
#line 75 "interactive_query.m"
          mdb__util__trace_getline_6_p_0(mdb__interactive_query__V_22_22, &mdb__interactive_query__Result_14, mdb__interactive_query__MDB_Stdin_11, mdb__interactive_query__MDB_Stdout_12);
        }
#line 80 "interactive_query.m"
#line 80 "interactive_query.m"
        switch (MR_tag((MR_Word) mdb__interactive_query__Result_14)) {
#line 80 "interactive_query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 80 "interactive_query.m"
          case (MR_Integer) 0:
#line 79 "interactive_query.m"
            {
#line 79 "interactive_query.m"
              mercury__io__nl_3_p_0(mdb__interactive_query__MDB_Stdout_12);
#line 79 "interactive_query.m"
              return;
            }
#line 80 "interactive_query.m"
            break;
#line 80 "interactive_query.m"
          case (MR_Integer) 1:
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
#line 80 "interactive_query.m"
            break;
#line 80 "interactive_query.m"
          case (MR_Integer) 2:
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
            break;
#line 80 "interactive_query.m"
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
