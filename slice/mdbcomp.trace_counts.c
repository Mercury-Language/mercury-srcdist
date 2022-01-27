/*
** Automatically generated from `mdbcomp.trace_counts.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


/* :- module mdbcomp.trace_counts. */
/* :- implementation. */

/*
INIT mercury__mdbcomp__trace_counts__init
ENDINIT
*/

#include "mdbcomp.trace_counts.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exception.mih"
#include "int.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 79 "mdbcomp.trace_counts.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 82 "mdbcomp.trace_counts.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 85 "mdbcomp.trace_counts.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 88 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0;

#line 91 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1;

#line 94 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_value_ordered_all_or_nonzero_0[2];

#line 97 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_name_ordered_all_or_nonzero_0[2];

#line 100 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_all_or_nonzero_0[2];

#line 103 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_base_count_file_type_0_0[2];

#line 106 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0;

#line 109 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_base_count_file_type_0_0[1];

#line 112 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_base_count_file_type_0[1];

#line 115 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_base_count_file_type_0[1];

#line 118 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_base_count_file_type_0[1];

#line 121 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_line_no_and_count_0_0[3];

#line 124 "mdbcomp.trace_counts.c"
static const MR_ConstString mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_line_no_and_count_0_0[3];

#line 127 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0;

#line 130 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_line_no_and_count_0_0[1];

#line 133 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_line_no_and_count_0[1];

#line 136 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_line_no_and_count_0[1];

#line 139 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_line_no_and_count_0[1];

#line 142 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_0[1];

#line 145 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_0;

#line 148 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_1[1];

#line 151 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_1;

#line 154 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_2[2];

#line 157 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_2;

#line 160 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_0[1];

#line 163 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_1[1];

#line 166 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_2[1];

#line 169 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_path_port_0[3];

#line 172 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_path_port_0[3];

#line 175 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_path_port_0[3];

#line 178 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_proc_label_in_context_0_0[3];

#line 181 "mdbcomp.trace_counts.c"
static const MR_ConstString mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_proc_label_in_context_0_0[3];

#line 184 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0;

#line 187 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_proc_label_in_context_0_0[1];

#line 190 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_proc_label_in_context_0[1];

#line 193 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_proc_label_in_context_0[1];

#line 196 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_proc_label_in_context_0[1];

#line 199 "mdbcomp.trace_counts.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 202 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_0[2];

#line 205 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0;

#line 208 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_1[1];

#line 211 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1;

#line 214 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_0[1];

#line 217 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_1[1];

#line 220 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_list_result_0[2];

#line 223 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_list_result_0[2];

#line 226 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_list_result_0[2];

#line 229 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_0[2];

#line 232 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0;

#line 235 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_1[1];

#line 238 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1;

#line 241 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_2[1];

#line 244 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2;

#line 247 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_3[1];

#line 250 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3;

#line 253 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_4[1];

#line 256 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4;

#line 259 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_0[1];

#line 262 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_1[1];

#line 265 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_2[1];

#line 268 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_3[2];

#line 271 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_result_0[4];

#line 274 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_result_0[5];

#line 277 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_result_0[5];

#line 280 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_0[1];

#line 283 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0;

#line 286 "mdbcomp.trace_counts.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__trace_counts__list__ti_list_1mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;

#line 289 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_1[2];

#line 292 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1;

#line 295 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_2[2];

#line 298 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2;

#line 301 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_0[1];

#line 304 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_1[1];

#line 307 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_2[1];

#line 310 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_trace_count_file_type_0[3];

#line 313 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_trace_count_file_type_0[3];

#line 316 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_file_type_0[3];

#line 319 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_syntax_error_0[1];

#line 322 "mdbcomp.trace_counts.c"
static const MR_NotagFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0;

#line 325 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____all_or_nonzero_0_0_10001(
#line 328 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 330 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 333 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____all_or_nonzero_0_0_10001(
#line 336 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 338 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 340 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 343 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____base_count_file_type_0_0_10001(
#line 346 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 348 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 351 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____base_count_file_type_0_0_10001(
#line 354 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 356 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 358 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 361 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____line_no_and_count_0_0_10001(
#line 364 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 366 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 369 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____line_no_and_count_0_0_10001(
#line 372 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 374 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 376 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 379 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____path_port_0_0_10001(
#line 382 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 384 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 387 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____path_port_0_0_10001(
#line 390 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 392 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 394 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 397 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_label_in_context_0_0_10001(
#line 400 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 402 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 405 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_label_in_context_0_0_10001(
#line 408 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 410 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 412 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 415 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_trace_counts_0_0_10001(
#line 418 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 420 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 423 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_trace_counts_0_0_10001(
#line 426 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 428 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 430 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 433 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0_10001(
#line 436 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 438 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 441 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0_10001(
#line 444 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 446 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 448 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 451 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0_10001(
#line 454 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 456 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 459 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0_10001(
#line 462 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 464 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 466 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 469 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_file_type_0_0_10001(
#line 472 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 474 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 477 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_file_type_0_0_10001(
#line 480 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 482 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 484 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 487 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0_10001(
#line 490 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 492 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 495 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0_10001(
#line 498 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 500 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 502 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 505 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_counts_0_0_10001(
#line 508 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 510 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 513 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_counts_0_0_10001(
#line 516 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 518 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 520 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 843 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__843__1_2_p_0(
#line 843 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ModuleNameSym_5,
#line 843 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__DefModuleSym_8);

#line 493 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0(
#line 493 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
#line 493 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 493 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__3_3);

#line 493 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0(
#line 493 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 493 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2);

#line 988 "trace_counts.m"
static MR_Word MR_CALL 
mdbcomp__trace_counts__insert_into_list_as_set_2_f_0(
#line 988 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TypeInfo_for_T_9,
#line 988 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__List0_4,
#line 988 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__Item_5);

#line 922 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_2_5_p_0(
#line 922 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ModuleName_6,
#line 922 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_7,
#line 922 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcCounts_8,
#line 922 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_16,
#line 922 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_17);

#line 889 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_path_port_count_4_p_0(
#line 889 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 889 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2);

#line 835 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_2(
#line 835 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 835 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 835 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 835 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 835 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4);

#line 843 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_1(
#line 843 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg);

#line 809 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0(
#line 809 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_9,
#line 809 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__PathPortCounts_10,
#line 809 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_0_18,
#line 809 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_19,
#line 809 "trace_counts.m"
  MR_String mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_0_20,
#line 809 "trace_counts.m"
  MR_String * mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_21);

#line 755 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_and_union_trace_counts_2_9_p_0(
#line 755 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ShowProgress_1,
#line 755 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 755 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3,
#line 755 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_FileType_4,
#line 755 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5,
#line 755 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_6,
#line 755 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__7_7);

#line 642 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts__parse_path_port_line_5_p_0(
#line 642 "trace_counts.m"
  MR_String mdbcomp__trace_counts__Line_6,
#line 642 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__PathPort_7,
#line 642 "trace_counts.m"
  MR_Integer * mdbcomp__trace_counts__LineNumber_8,
#line 642 "trace_counts.m"
  MR_Integer * mdbcomp__trace_counts__ExecCount_9,
#line 642 "trace_counts.m"
  MR_Integer * mdbcomp__trace_counts__NumTests_10);

#line 609 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_2_6_p_0(
#line 609 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_7,
#line 609 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcCounts0_8,
#line 609 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_22,
#line 609 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_23);

#line 496 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_8_p_0(
#line 496 "trace_counts.m"
  MR_Integer mdbcomp__trace_counts__HeaderLineNumber_9,
#line 496 "trace_counts.m"
  MR_String mdbcomp__trace_counts__HeaderLine_10,
#line 496 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__CurModuleNameSym_11,
#line 496 "trace_counts.m"
  MR_String mdbcomp__trace_counts__CurFileName_12,
#line 496 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53,
#line 496 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54);

#line 471 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_setup_4_p_0(
#line 471 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_13,
#line 471 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_14);

#line 444 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_p_0_1(
#line 444 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 444 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 444 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 444 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3);

#line 435 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_p_0(
#line 435 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__ReadResult_4);

#line 330 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_list_stream_8_p_0(
#line 330 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ShowProgress_9,
#line 330 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__FileType0_10,
#line 330 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCounts0_11,
#line 330 "trace_counts.m"
  MR_String mdbcomp__trace_counts__MainFileName_12,
#line 330 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__Stream_13,
#line 330 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__Result_14);

#line 258 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_proc_counts_acc_5_p_0(
#line 258 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsB_6,
#line 258 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__PathPortA_7,
#line 258 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__LineNoCountA_8,
#line 258 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_0_12,
#line 258 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_13);

#line 255 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0_1(
#line 255 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 255 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 255 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 255 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 255 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4);

#line 238 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0(
#line 238 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCountsB_6,
#line 238 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContextA_7,
#line 238 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsA_8,
#line 238 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_12,
#line 238 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_13);

#line 218 "trace_counts.m"
static MR_Word MR_CALL 
mdbcomp__trace_counts__sum_counts_on_line_2_f_0(
#line 218 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__LC1_4,
#line 218 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__LC2_5);

#line 215 "trace_counts.m"
static MR_Box MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0_1(
#line 215 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 215 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 215 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 211 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0(
#line 211 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsA_4,
#line 211 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsB_5,
#line 211 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__ProcTraceCounts_6);

#line 919 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0_1(
#line 919 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 919 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 919 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 919 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 919 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4);

#line 806 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0_1(
#line 806 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 806 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 806 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 806 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 806 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4,
#line 806 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_5,
#line 806 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_6,
#line 806 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_7,
#line 806 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_8);

#line 414 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_4_p_0_1(
#line 414 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 414 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 414 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 414 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3);

#line 235 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_3_p_0_1(
#line 235 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 235 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 235 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 235 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 235 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4);

#line 209 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__sum_trace_counts_3_p_0_1(
#line 209 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 209 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 209 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 209 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3);

#line 205 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0_1(
#line 205 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 205 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 205 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 205 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3);


static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_1[8][3];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_2[3][2];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_3[10][1];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_4[4][6];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_5[3][8];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_6[1][11];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_7[2][7];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_8[1][5];




static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_1[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_4[0])),
    ((MR_Box) (mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_4[1])),
    ((MR_Box) (mdbcomp__trace_counts__sum_trace_counts_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_4[2])),
    ((MR_Box) (mdbcomp__trace_counts__read_trace_counts_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_6[0])),
    ((MR_Box) (mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_4[3])),
    ((MR_Box) (mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_7[1])),
    ((MR_Box) (mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_2[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_3[10][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 15))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "no trace count file id"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "no info on trace count file type"))
  },
  /* row 9 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_4[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_read_trace_counts_result_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_5[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_6[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_7[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_8[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "mdbcomp.mh"
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"



#line 1153 "mdbcomp.trace_counts.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1162 "mdbcomp.trace_counts.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1171 "mdbcomp.trace_counts.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1180 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0 = {
  (MR_String) "user_all",
  (MR_Integer) 0
};

#line 1186 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1 = {
  (MR_String) "user_nonzero",
  (MR_Integer) 1
};

#line 1192 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_value_ordered_all_or_nonzero_0[2] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1
};

#line 1198 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_name_ordered_all_or_nonzero_0[2] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1
};

#line 1204 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_all_or_nonzero_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1210 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__trace_counts____Unify____all_or_nonzero_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____all_or_nonzero_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "all_or_nonzero",
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__enum_name_ordered_all_or_nonzero_0
  },
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__enum_value_ordered_all_or_nonzero_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_all_or_nonzero_0
};

#line 1231 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_base_count_file_type_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1237 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0 = {
  (MR_String) "base_count_file_type",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_base_count_file_type_0_0,
  NULL,
  NULL,
  NULL
};

#line 1252 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_base_count_file_type_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0
};

#line 1257 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_base_count_file_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_base_count_file_type_0_0
  }
};

#line 1266 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_base_count_file_type_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0
};

#line 1271 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_base_count_file_type_0[1] = {
  (MR_Integer) 0
};

#line 1276 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____base_count_file_type_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____base_count_file_type_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "base_count_file_type",
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_base_count_file_type_0
  },
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_base_count_file_type_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_base_count_file_type_0
};

#line 1297 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_line_no_and_count_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1304 "mdbcomp.trace_counts.c"
static const MR_ConstString mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_line_no_and_count_0_0[3] = {
  (MR_String) "line_number",
  (MR_String) "exec_count",
  (MR_String) "num_tests"
};

#line 1311 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0 = {
  (MR_String) "line_no_and_count",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_line_no_and_count_0_0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_line_no_and_count_0_0,
  NULL,
  NULL
};

#line 1326 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_line_no_and_count_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0
};

#line 1331 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_line_no_and_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_line_no_and_count_0_0
  }
};

#line 1340 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_line_no_and_count_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0
};

#line 1345 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_line_no_and_count_0[1] = {
  (MR_Integer) 0
};

#line 1350 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____line_no_and_count_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____line_no_and_count_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "line_no_and_count",
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_line_no_and_count_0
  },
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_line_no_and_count_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_line_no_and_count_0
};

#line 1371 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0
};

#line 1376 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_0 = {
  (MR_String) "port_only",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_0,
  NULL,
  NULL,
  NULL
};

#line 1391 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 1396 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_1 = {
  (MR_String) "path_only",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_1,
  NULL,
  NULL,
  NULL
};

#line 1411 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 1417 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_2 = {
  (MR_String) "port_and_path",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_2,
  NULL,
  NULL,
  NULL
};

#line 1432 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_0
};

#line 1437 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_1[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_1
};

#line 1442 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_2[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_2
};

#line 1447 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_path_port_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_2
  }
};

#line 1466 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_path_port_0[3] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_1,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_2,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_0
};

#line 1473 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_path_port_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1480 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____path_port_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____path_port_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "path_port",
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_path_port_0
  },
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_path_port_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_path_port_0
};

#line 1501 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_proc_label_in_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0
};

#line 1508 "mdbcomp.trace_counts.c"
static const MR_ConstString mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_proc_label_in_context_0_0[3] = {
  (MR_String) "context_module_symname",
  (MR_String) "context_filename",
  (MR_String) "proc_label"
};

#line 1515 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0 = {
  (MR_String) "proc_label_in_context",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_proc_label_in_context_0_0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_proc_label_in_context_0_0,
  NULL,
  NULL
};

#line 1530 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_proc_label_in_context_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0
};

#line 1535 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_proc_label_in_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_proc_label_in_context_0_0
  }
};

#line 1544 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_proc_label_in_context_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0
};

#line 1549 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_proc_label_in_context_0[1] = {
  (MR_Integer) 0
};

#line 1554 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____proc_label_in_context_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____proc_label_in_context_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "proc_label_in_context",
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_proc_label_in_context_0
  },
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_proc_label_in_context_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_proc_label_in_context_0
};

#line 1575 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_trace_counts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__trace_counts____Unify____proc_trace_counts_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____proc_trace_counts_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "proc_trace_counts",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1596 "mdbcomp.trace_counts.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
    (MR_TypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1605 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
};

#line 1611 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0 = {
  (MR_String) "list_ok",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_0,
  NULL,
  NULL,
  NULL
};

#line 1626 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1631 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1 = {
  (MR_String) "list_error_message",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 1646 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0
};

#line 1651 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_1[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1
};

#line 1656 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_list_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_1
  }
};

#line 1670 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_list_result_0[2] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0
};

#line 1676 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_list_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1682 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_read_trace_counts_list_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "read_trace_counts_list_result",
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_list_result_0
  },
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_list_result_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_list_result_0
};

#line 1703 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
};

#line 1709 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_0,
  NULL,
  NULL,
  NULL
};

#line 1724 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1729 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1 = {
  (MR_String) "syntax_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 1744 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1749 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2 = {
  (MR_String) "error_message",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_2,
  NULL,
  NULL,
  NULL
};

#line 1764 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 1769 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3 = {
  (MR_String) "open_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_3,
  NULL,
  NULL,
  NULL
};

#line 1784 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 1789 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4 = {
  (MR_String) "io_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_4,
  NULL,
  NULL,
  NULL
};

#line 1804 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0
};

#line 1809 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_1[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1
};

#line 1814 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_2[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2
};

#line 1819 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_3[2] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4
};

#line 1825 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_result_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_3
  }
};

#line 1849 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_result_0[5] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1
};

#line 1858 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_result_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 1867 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_read_trace_counts_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "read_trace_counts_result",
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_result_0
  },
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_result_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_result_0
};

#line 1888 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0
};

#line 1893 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0 = {
  (MR_String) "single_file",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_0,
  NULL,
  NULL,
  NULL
};

#line 1908 "mdbcomp.trace_counts.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__trace_counts__list__ti_list_1mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0
  }
};

#line 1916 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__list__ti_list_1mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0
};

#line 1922 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1 = {
  (MR_String) "union_file",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_1,
  NULL,
  NULL,
  NULL
};

#line 1937 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0
};

#line 1943 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2 = {
  (MR_String) "diff_file",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_2,
  NULL,
  NULL,
  NULL
};

#line 1958 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0
};

#line 1963 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_1[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1
};

#line 1968 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_2[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2
};

#line 1973 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_trace_count_file_type_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_2
  }
};

#line 1992 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_trace_count_file_type_0[3] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1
};

#line 1999 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_file_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2006 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____trace_count_file_type_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____trace_count_file_type_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "trace_count_file_type",
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_trace_count_file_type_0
  },
  {
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_trace_count_file_type_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_file_type_0
};

#line 2027 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_syntax_error_0[1] = {
  (MR_Integer) 0
};

#line 2032 "mdbcomp.trace_counts.c"
static const MR_NotagFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0 = {
  (MR_String) "trace_count_syntax_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 2039 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "trace_count_syntax_error",
  {
    &mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0
  },
  {
    &mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_syntax_error_0
};

#line 2060 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_counts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__trace_counts____Unify____trace_counts_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____trace_counts_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "trace_counts",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2081 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____all_or_nonzero_0_0_10001(
#line 2084 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2086 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2088 "mdbcomp.trace_counts.c"
{
#line 2090 "mdbcomp.trace_counts.c"
  {
#line 2092 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2095 "mdbcomp.trace_counts.c"
    {
#line 2097 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____all_or_nonzero_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2100 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2102 "mdbcomp.trace_counts.c"
  }
#line 2104 "mdbcomp.trace_counts.c"
}

#line 2107 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____all_or_nonzero_0_0_10001(
#line 2110 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2112 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2114 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2116 "mdbcomp.trace_counts.c"
{
#line 2118 "mdbcomp.trace_counts.c"
  {
#line 2120 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2123 "mdbcomp.trace_counts.c"
    {
#line 2125 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____all_or_nonzero_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2128 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2130 "mdbcomp.trace_counts.c"
  }
#line 2132 "mdbcomp.trace_counts.c"
}

#line 2135 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____base_count_file_type_0_0_10001(
#line 2138 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2140 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2142 "mdbcomp.trace_counts.c"
{
#line 2144 "mdbcomp.trace_counts.c"
  {
#line 2146 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2149 "mdbcomp.trace_counts.c"
    {
#line 2151 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____base_count_file_type_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2154 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2156 "mdbcomp.trace_counts.c"
  }
#line 2158 "mdbcomp.trace_counts.c"
}

#line 2161 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____base_count_file_type_0_0_10001(
#line 2164 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2166 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2168 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2170 "mdbcomp.trace_counts.c"
{
#line 2172 "mdbcomp.trace_counts.c"
  {
#line 2174 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2177 "mdbcomp.trace_counts.c"
    {
#line 2179 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____base_count_file_type_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2182 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2184 "mdbcomp.trace_counts.c"
  }
#line 2186 "mdbcomp.trace_counts.c"
}

#line 2189 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____line_no_and_count_0_0_10001(
#line 2192 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2194 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2196 "mdbcomp.trace_counts.c"
{
#line 2198 "mdbcomp.trace_counts.c"
  {
#line 2200 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2203 "mdbcomp.trace_counts.c"
    {
#line 2205 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____line_no_and_count_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2208 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2210 "mdbcomp.trace_counts.c"
  }
#line 2212 "mdbcomp.trace_counts.c"
}

#line 2215 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____line_no_and_count_0_0_10001(
#line 2218 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2220 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2222 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2224 "mdbcomp.trace_counts.c"
{
#line 2226 "mdbcomp.trace_counts.c"
  {
#line 2228 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2231 "mdbcomp.trace_counts.c"
    {
#line 2233 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____line_no_and_count_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2236 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2238 "mdbcomp.trace_counts.c"
  }
#line 2240 "mdbcomp.trace_counts.c"
}

#line 2243 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____path_port_0_0_10001(
#line 2246 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2248 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2250 "mdbcomp.trace_counts.c"
{
#line 2252 "mdbcomp.trace_counts.c"
  {
#line 2254 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2257 "mdbcomp.trace_counts.c"
    {
#line 2259 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2262 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2264 "mdbcomp.trace_counts.c"
  }
#line 2266 "mdbcomp.trace_counts.c"
}

#line 2269 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____path_port_0_0_10001(
#line 2272 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2274 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2276 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2278 "mdbcomp.trace_counts.c"
{
#line 2280 "mdbcomp.trace_counts.c"
  {
#line 2282 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2285 "mdbcomp.trace_counts.c"
    {
#line 2287 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2290 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2292 "mdbcomp.trace_counts.c"
  }
#line 2294 "mdbcomp.trace_counts.c"
}

#line 2297 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_label_in_context_0_0_10001(
#line 2300 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2302 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2304 "mdbcomp.trace_counts.c"
{
#line 2306 "mdbcomp.trace_counts.c"
  {
#line 2308 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2311 "mdbcomp.trace_counts.c"
    {
#line 2313 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____proc_label_in_context_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2316 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2318 "mdbcomp.trace_counts.c"
  }
#line 2320 "mdbcomp.trace_counts.c"
}

#line 2323 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_label_in_context_0_0_10001(
#line 2326 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2328 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2330 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2332 "mdbcomp.trace_counts.c"
{
#line 2334 "mdbcomp.trace_counts.c"
  {
#line 2336 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2339 "mdbcomp.trace_counts.c"
    {
#line 2341 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____proc_label_in_context_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2344 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2346 "mdbcomp.trace_counts.c"
  }
#line 2348 "mdbcomp.trace_counts.c"
}

#line 2351 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_trace_counts_0_0_10001(
#line 2354 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2356 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2358 "mdbcomp.trace_counts.c"
{
#line 2360 "mdbcomp.trace_counts.c"
  {
#line 2362 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2365 "mdbcomp.trace_counts.c"
    {
#line 2367 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____proc_trace_counts_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2370 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2372 "mdbcomp.trace_counts.c"
  }
#line 2374 "mdbcomp.trace_counts.c"
}

#line 2377 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_trace_counts_0_0_10001(
#line 2380 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2382 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2384 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2386 "mdbcomp.trace_counts.c"
{
#line 2388 "mdbcomp.trace_counts.c"
  {
#line 2390 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2393 "mdbcomp.trace_counts.c"
    {
#line 2395 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____proc_trace_counts_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2398 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2400 "mdbcomp.trace_counts.c"
  }
#line 2402 "mdbcomp.trace_counts.c"
}

#line 2405 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0_10001(
#line 2408 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2410 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2412 "mdbcomp.trace_counts.c"
{
#line 2414 "mdbcomp.trace_counts.c"
  {
#line 2416 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2419 "mdbcomp.trace_counts.c"
    {
#line 2421 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2424 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2426 "mdbcomp.trace_counts.c"
  }
#line 2428 "mdbcomp.trace_counts.c"
}

#line 2431 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0_10001(
#line 2434 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2436 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2438 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2440 "mdbcomp.trace_counts.c"
{
#line 2442 "mdbcomp.trace_counts.c"
  {
#line 2444 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2447 "mdbcomp.trace_counts.c"
    {
#line 2449 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2452 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2454 "mdbcomp.trace_counts.c"
  }
#line 2456 "mdbcomp.trace_counts.c"
}

#line 2459 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0_10001(
#line 2462 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2464 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2466 "mdbcomp.trace_counts.c"
{
#line 2468 "mdbcomp.trace_counts.c"
  {
#line 2470 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2473 "mdbcomp.trace_counts.c"
    {
#line 2475 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2478 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2480 "mdbcomp.trace_counts.c"
  }
#line 2482 "mdbcomp.trace_counts.c"
}

#line 2485 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0_10001(
#line 2488 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2490 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2492 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2494 "mdbcomp.trace_counts.c"
{
#line 2496 "mdbcomp.trace_counts.c"
  {
#line 2498 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2501 "mdbcomp.trace_counts.c"
    {
#line 2503 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2506 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2508 "mdbcomp.trace_counts.c"
  }
#line 2510 "mdbcomp.trace_counts.c"
}

#line 2513 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_file_type_0_0_10001(
#line 2516 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2518 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2520 "mdbcomp.trace_counts.c"
{
#line 2522 "mdbcomp.trace_counts.c"
  {
#line 2524 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2527 "mdbcomp.trace_counts.c"
    {
#line 2529 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2532 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2534 "mdbcomp.trace_counts.c"
  }
#line 2536 "mdbcomp.trace_counts.c"
}

#line 2539 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_file_type_0_0_10001(
#line 2542 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2544 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2546 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2548 "mdbcomp.trace_counts.c"
{
#line 2550 "mdbcomp.trace_counts.c"
  {
#line 2552 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2555 "mdbcomp.trace_counts.c"
    {
#line 2557 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2560 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2562 "mdbcomp.trace_counts.c"
  }
#line 2564 "mdbcomp.trace_counts.c"
}

#line 2567 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0_10001(
#line 2570 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2572 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2574 "mdbcomp.trace_counts.c"
{
#line 2576 "mdbcomp.trace_counts.c"
  {
#line 2578 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2581 "mdbcomp.trace_counts.c"
    {
#line 2583 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2586 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2588 "mdbcomp.trace_counts.c"
  }
#line 2590 "mdbcomp.trace_counts.c"
}

#line 2593 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0_10001(
#line 2596 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2598 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2600 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2602 "mdbcomp.trace_counts.c"
{
#line 2604 "mdbcomp.trace_counts.c"
  {
#line 2606 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2609 "mdbcomp.trace_counts.c"
    {
#line 2611 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2614 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2616 "mdbcomp.trace_counts.c"
  }
#line 2618 "mdbcomp.trace_counts.c"
}

#line 2621 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_counts_0_0_10001(
#line 2624 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2626 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2628 "mdbcomp.trace_counts.c"
{
#line 2630 "mdbcomp.trace_counts.c"
  {
#line 2632 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2635 "mdbcomp.trace_counts.c"
    {
#line 2637 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_counts_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2640 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2642 "mdbcomp.trace_counts.c"
  }
#line 2644 "mdbcomp.trace_counts.c"
}

#line 2647 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_counts_0_0_10001(
#line 2650 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2652 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2654 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2656 "mdbcomp.trace_counts.c"
{
#line 2658 "mdbcomp.trace_counts.c"
  {
#line 2660 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2663 "mdbcomp.trace_counts.c"
    {
#line 2665 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____trace_counts_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2668 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2670 "mdbcomp.trace_counts.c"
  }
#line 2672 "mdbcomp.trace_counts.c"
}

#line 843 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__843__1_2_p_0(
#line 843 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ModuleNameSym_5,
#line 843 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__DefModuleSym_8)
#line 843 "trace_counts.m"
{
#line 843 "trace_counts.m"
  {
#line 843 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 843 "trace_counts.m"
    {
#line 843 "trace_counts.m"
      return mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__ModuleNameSym_5, mdbcomp__trace_counts__DefModuleSym_8);
    }
#line 843 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 843 "trace_counts.m"
  }
#line 843 "trace_counts.m"
}

#line 66 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts____Compare____trace_counts_0_0(
#line 66 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
#line 66 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 66 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
#line 66 "trace_counts.m"
{
#line 66 "trace_counts.m"
  {
#line 66 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 66 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Cast_HeadVar1_4 = mdbcomp__trace_counts__HeadVar__2_2;
#line 66 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Cast_HeadVar2_5 = mdbcomp__trace_counts__HeadVar__3_3;

#line 66 "trace_counts.m"
    {
#line 66 "trace_counts.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__HeadVar__1_1, ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar2_5)));
#line 66 "trace_counts.m"
      return;
    }
#line 66 "trace_counts.m"
  }
#line 66 "trace_counts.m"
}

#line 66 "trace_counts.m"
MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_counts_0_0(
#line 66 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 66 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 66 "trace_counts.m"
{
#line 66 "trace_counts.m"
  {
#line 66 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 66 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Cast_HeadVar1_3 = mdbcomp__trace_counts__HeadVar__1_1;
#line 66 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Cast_HeadVar2_4 = mdbcomp__trace_counts__HeadVar__2_2;

#line 66 "trace_counts.m"
    {
#line 66 "trace_counts.m"
      return mdbcomp__trace_counts__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar2_4)));
    }
#line 66 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 66 "trace_counts.m"
  }
#line 66 "trace_counts.m"
}

#line 493 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0(
#line 493 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
#line 493 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 493 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
#line 493 "trace_counts.m"
{
#line 493 "trace_counts.m"
  {
#line 493 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 493 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_6 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
#line 493 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_7 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

#line 493 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_6 == mdbcomp__trace_counts__CastY_7);
#line 493 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 2787 "mdbcomp.trace_counts.c"
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
#line 493 "trace_counts.m"
    else
#line 493 "trace_counts.m"
      {
#line 493 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_4_4 = (MR_String) mdbcomp__trace_counts__HeadVar__2_2;
#line 493 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_5_5 = (MR_String) mdbcomp__trace_counts__HeadVar__3_3;

#line 493 "trace_counts.m"
        {
#line 493 "trace_counts.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_4_4, mdbcomp__trace_counts__V_5_5);
#line 493 "trace_counts.m"
          return;
        }
#line 493 "trace_counts.m"
      }
#line 493 "trace_counts.m"
  }
#line 493 "trace_counts.m"
}

#line 493 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0(
#line 493 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 493 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 493 "trace_counts.m"
{
#line 493 "trace_counts.m"
  {
#line 493 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 493 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_5 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
#line 493 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_6 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

#line 493 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_5 == mdbcomp__trace_counts__CastY_6);
#line 493 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 493 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 493 "trace_counts.m"
    else
#line 493 "trace_counts.m"
      {
#line 493 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_3_3 = (MR_String) mdbcomp__trace_counts__HeadVar__1_1;
#line 493 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_4_4 = (MR_String) mdbcomp__trace_counts__HeadVar__2_2;

#line 2845 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_4_4) == 0);
#line 493 "trace_counts.m"
      }
#line 493 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 493 "trace_counts.m"
  }
#line 493 "trace_counts.m"
}

#line 48 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(
#line 48 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
#line 48 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 48 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
#line 48 "trace_counts.m"
{
#line 48 "trace_counts.m"
  while (MR_TRUE)
#line 48 "trace_counts.m"
    {
#line 48 "trace_counts.m"
      /* tailcall optimized into a loop */
#line 48 "trace_counts.m"
      {
#line 48 "trace_counts.m"
        MR_bool mdbcomp__trace_counts__succeeded;
#line 48 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__CastX_36 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
#line 48 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__CastY_37 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

#line 48 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_36 == mdbcomp__trace_counts__CastY_37);
#line 48 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 2886 "mdbcomp.trace_counts.c"
          *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
#line 48 "trace_counts.m"
        else
#line 48 "trace_counts.m"
          if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 48 "trace_counts.m"
            {
#line 48 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 48 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 48 "trace_counts.m"
              if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 48 "trace_counts.m"
                {
#line 48 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
#line 48 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
#line 48 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__V_35_35;

#line 48 "trace_counts.m"
                  {
#line 48 "trace_counts.m"
                    mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(&mdbcomp__trace_counts__V_35_35, mdbcomp__trace_counts__V_44_44, mdbcomp__trace_counts__V_33_33);
                  }
#line 2915 "mdbcomp.trace_counts.c"
                  mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_35_35 == (MR_Integer) 0);
#line 48 "trace_counts.m"
                  mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
#line 48 "trace_counts.m"
                  if (mdbcomp__trace_counts__succeeded)
#line 48 "trace_counts.m"
                    *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_35_35;
#line 48 "trace_counts.m"
                  else
#line 48 "trace_counts.m"
                    {
#line 48 "trace_counts.m"
                      /* direct tailcall eliminated */
#line 48 "trace_counts.m"
                      {
#line 48 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__HeadVar__2__tmp_copy_2 = mdbcomp__trace_counts__V_43_43;
#line 48 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__HeadVar__3__tmp_copy_3 = mdbcomp__trace_counts__V_34_34;

#line 48 "trace_counts.m"
                        mdbcomp__trace_counts__HeadVar__3_3 = mdbcomp__trace_counts__HeadVar__3__tmp_copy_3;
#line 48 "trace_counts.m"
                        mdbcomp__trace_counts__HeadVar__2_2 = mdbcomp__trace_counts__HeadVar__2__tmp_copy_2;
#line 48 "trace_counts.m"
                      }
#line 48 "trace_counts.m"
                      continue;
#line 48 "trace_counts.m"
                    }
#line 48 "trace_counts.m"
                }
#line 48 "trace_counts.m"
              else
#line 48 "trace_counts.m"
                if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2952 "mdbcomp.trace_counts.c"
                  *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "trace_counts.m"
                else
#line 2956 "mdbcomp.trace_counts.c"
                  *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "trace_counts.m"
            }
#line 48 "trace_counts.m"
          else
#line 48 "trace_counts.m"
            if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 48 "trace_counts.m"
              {
#line 48 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_45_45 = (MR_Word) MR_body(((MR_Word) mdbcomp__trace_counts__HeadVar__2_2), (MR_Integer) 0);

#line 48 "trace_counts.m"
                if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2971 "mdbcomp.trace_counts.c"
                  *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "trace_counts.m"
                else
#line 48 "trace_counts.m"
                  if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 48 "trace_counts.m"
                    {
#line 48 "trace_counts.m"
                      MR_Word mdbcomp__trace_counts__V_5_5 = (MR_Word) MR_body(((MR_Word) mdbcomp__trace_counts__HeadVar__3_3), (MR_Integer) 0);

#line 48 "trace_counts.m"
                      {
#line 48 "trace_counts.m"
                        mdbcomp__trace_counts____Compare____base_count_file_type_0_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_45_45, mdbcomp__trace_counts__V_5_5);
#line 48 "trace_counts.m"
                        return;
                      }
#line 48 "trace_counts.m"
                    }
#line 48 "trace_counts.m"
                  else
#line 2993 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "trace_counts.m"
              }
#line 48 "trace_counts.m"
            else
#line 48 "trace_counts.m"
              {
#line 48 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 48 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 48 "trace_counts.m"
                if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3008 "mdbcomp.trace_counts.c"
                  *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "trace_counts.m"
                else
#line 48 "trace_counts.m"
                  if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3014 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "trace_counts.m"
                  else
#line 48 "trace_counts.m"
                    {
#line 48 "trace_counts.m"
                      MR_Integer mdbcomp__trace_counts__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
#line 48 "trace_counts.m"
                      MR_Word mdbcomp__trace_counts__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
#line 48 "trace_counts.m"
                      MR_Word mdbcomp__trace_counts__V_19_19;

#line 48 "trace_counts.m"
                      {
#line 48 "trace_counts.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__trace_counts__V_19_19, mdbcomp__trace_counts__V_47_47, mdbcomp__trace_counts__V_17_17);
                      }
#line 3032 "mdbcomp.trace_counts.c"
                      mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_19_19 == (MR_Integer) 0);
#line 48 "trace_counts.m"
                      mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
#line 48 "trace_counts.m"
                      if (mdbcomp__trace_counts__succeeded)
#line 48 "trace_counts.m"
                        *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_19_19;
#line 48 "trace_counts.m"
                      else
#line 48 "trace_counts.m"
                        {
#line 48 "trace_counts.m"
                          {
#line 48 "trace_counts.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_2[0], mdbcomp__trace_counts__HeadVar__1_1, ((MR_Box) (mdbcomp__trace_counts__V_46_46)), ((MR_Box) (mdbcomp__trace_counts__V_18_18)));
#line 48 "trace_counts.m"
                            return;
                          }
#line 48 "trace_counts.m"
                        }
#line 48 "trace_counts.m"
                    }
#line 48 "trace_counts.m"
              }
#line 48 "trace_counts.m"
      }
#line 48 "trace_counts.m"
      break;
#line 48 "trace_counts.m"
    }
#line 48 "trace_counts.m"
}

#line 48 "trace_counts.m"
MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(
#line 48 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 48 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 48 "trace_counts.m"
{
#line 48 "trace_counts.m"
  while (MR_TRUE)
#line 48 "trace_counts.m"
    {
#line 48 "trace_counts.m"
      /* tailcall optimized into a loop */
#line 48 "trace_counts.m"
      {
#line 48 "trace_counts.m"
        MR_bool mdbcomp__trace_counts__succeeded;
#line 48 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__CastX_13 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
#line 48 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__CastY_14 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

#line 48 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_13 == mdbcomp__trace_counts__CastY_14);
#line 48 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 48 "trace_counts.m"
          mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 48 "trace_counts.m"
        else
#line 48 "trace_counts.m"
          if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 48 "trace_counts.m"
            {
#line 48 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 48 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 48 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_11_11;
#line 48 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_12_12;

#line 48 "trace_counts.m"
              mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 48 "trace_counts.m"
              if (mdbcomp__trace_counts__succeeded)
#line 48 "trace_counts.m"
                {
#line 48 "trace_counts.m"
                  mdbcomp__trace_counts__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 48 "trace_counts.m"
                  mdbcomp__trace_counts__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 3121 "mdbcomp.trace_counts.c"
                  {
#line 3123 "mdbcomp.trace_counts.c"
                    mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(mdbcomp__trace_counts__V_9_9, mdbcomp__trace_counts__V_11_11);
                  }
#line 48 "trace_counts.m"
                  if (mdbcomp__trace_counts__succeeded)
#line 3128 "mdbcomp.trace_counts.c"
                    {
#line 3130 "mdbcomp.trace_counts.c"
                      /* direct tailcall eliminated */
#line 3132 "mdbcomp.trace_counts.c"
                      {
#line 3134 "mdbcomp.trace_counts.c"
                        MR_Word mdbcomp__trace_counts__HeadVar__1__tmp_copy_1 = mdbcomp__trace_counts__V_10_10;
#line 3136 "mdbcomp.trace_counts.c"
                        MR_Word mdbcomp__trace_counts__HeadVar__2__tmp_copy_2 = mdbcomp__trace_counts__V_12_12;

#line 3139 "mdbcomp.trace_counts.c"
                        mdbcomp__trace_counts__HeadVar__2_2 = mdbcomp__trace_counts__HeadVar__2__tmp_copy_2;
#line 3141 "mdbcomp.trace_counts.c"
                        mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__HeadVar__1__tmp_copy_1;
#line 3143 "mdbcomp.trace_counts.c"
                      }
#line 3145 "mdbcomp.trace_counts.c"
                      continue;
#line 3147 "mdbcomp.trace_counts.c"
                    }
#line 48 "trace_counts.m"
                }
#line 48 "trace_counts.m"
            }
#line 48 "trace_counts.m"
          else
#line 48 "trace_counts.m"
            if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 48 "trace_counts.m"
              {
#line 48 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_3_3 = (MR_Word) MR_body(((MR_Word) mdbcomp__trace_counts__HeadVar__1_1), (MR_Integer) 0);
#line 48 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_4_4;

#line 48 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 48 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 48 "trace_counts.m"
                  {
#line 48 "trace_counts.m"
                    mdbcomp__trace_counts__V_4_4 = (MR_Word) MR_body(((MR_Word) mdbcomp__trace_counts__HeadVar__2_2), (MR_Integer) 0);
#line 3172 "mdbcomp.trace_counts.c"
                    {
#line 3174 "mdbcomp.trace_counts.c"
                      return mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____base_count_file_type_0_0(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_4_4);
                    }
#line 48 "trace_counts.m"
                  }
#line 48 "trace_counts.m"
              }
#line 48 "trace_counts.m"
            else
#line 48 "trace_counts.m"
              {
#line 48 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__TypeInfo_15_15;
#line 48 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 48 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 48 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_7_7;
#line 48 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_8_8;

#line 48 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 48 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 48 "trace_counts.m"
                  {
#line 48 "trace_counts.m"
                    mdbcomp__trace_counts__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 48 "trace_counts.m"
                    mdbcomp__trace_counts__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 3206 "mdbcomp.trace_counts.c"
                    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_5_5 == mdbcomp__trace_counts__V_7_7);
#line 48 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 48 "trace_counts.m"
                      {
#line 3212 "mdbcomp.trace_counts.c"
                        mdbcomp__trace_counts__TypeInfo_15_15 = (MR_Word) &mdbcomp__trace_counts_scalar_common_2[0];
#line 3214 "mdbcomp.trace_counts.c"
                        {
#line 3216 "mdbcomp.trace_counts.c"
                          return mdbcomp__trace_counts__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__trace_counts__TypeInfo_15_15, ((MR_Box) (mdbcomp__trace_counts__V_6_6)), ((MR_Box) (mdbcomp__trace_counts__V_8_8)));
                        }
#line 48 "trace_counts.m"
                      }
#line 48 "trace_counts.m"
                  }
#line 48 "trace_counts.m"
              }
#line 48 "trace_counts.m"
        return mdbcomp__trace_counts__succeeded;
#line 48 "trace_counts.m"
      }
#line 48 "trace_counts.m"
      break;
#line 48 "trace_counts.m"
    }
#line 48 "trace_counts.m"
}

#line 102 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0(
#line 102 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
#line 102 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 102 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
#line 102 "trace_counts.m"
{
#line 102 "trace_counts.m"
  {
#line 102 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 102 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_65 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
#line 102 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_66 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

#line 102 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_65 == mdbcomp__trace_counts__CastY_66);
#line 102 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 3260 "mdbcomp.trace_counts.c"
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
#line 102 "trace_counts.m"
    else
#line 102 "trace_counts.m"
      if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 102 "trace_counts.m"
        {
#line 102 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 102 "trace_counts.m"
          if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 102 "trace_counts.m"
            {
#line 102 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));

#line 102 "trace_counts.m"
              {
#line 102 "trace_counts.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_73_73, mdbcomp__trace_counts__V_38_38);
#line 102 "trace_counts.m"
                return;
              }
#line 102 "trace_counts.m"
            }
#line 102 "trace_counts.m"
          else
#line 102 "trace_counts.m"
            if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3291 "mdbcomp.trace_counts.c"
              *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
            else
#line 102 "trace_counts.m"
              if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3297 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
              else
#line 102 "trace_counts.m"
                if (((((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3303 "mdbcomp.trace_counts.c"
                  *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                else
#line 3307 "mdbcomp.trace_counts.c"
                  *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
        }
#line 102 "trace_counts.m"
      else
#line 102 "trace_counts.m"
        if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 102 "trace_counts.m"
          {
#line 102 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 102 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 102 "trace_counts.m"
            if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3324 "mdbcomp.trace_counts.c"
              *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
            else
#line 102 "trace_counts.m"
              if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 102 "trace_counts.m"
                {
#line 102 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
#line 102 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
#line 102 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__V_8_8;

#line 102 "trace_counts.m"
                  {
#line 102 "trace_counts.m"
                    mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(&mdbcomp__trace_counts__V_8_8, mdbcomp__trace_counts__V_76_76, mdbcomp__trace_counts__V_6_6);
                  }
#line 3344 "mdbcomp.trace_counts.c"
                  mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_8_8 == (MR_Integer) 0);
#line 102 "trace_counts.m"
                  mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
#line 102 "trace_counts.m"
                  if (mdbcomp__trace_counts__succeeded)
#line 102 "trace_counts.m"
                    *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_8_8;
#line 102 "trace_counts.m"
                  else
#line 102 "trace_counts.m"
                    {
#line 102 "trace_counts.m"
                      {
#line 102 "trace_counts.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__HeadVar__1_1, ((MR_Box) (mdbcomp__trace_counts__V_75_75)), ((MR_Box) (mdbcomp__trace_counts__V_7_7)));
#line 102 "trace_counts.m"
                        return;
                      }
#line 102 "trace_counts.m"
                    }
#line 102 "trace_counts.m"
                }
#line 102 "trace_counts.m"
              else
#line 102 "trace_counts.m"
                if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3371 "mdbcomp.trace_counts.c"
                  *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                else
#line 102 "trace_counts.m"
                  if (((((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3377 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                  else
#line 3381 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
          }
#line 102 "trace_counts.m"
        else
#line 102 "trace_counts.m"
          if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 102 "trace_counts.m"
            {
#line 102 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 102 "trace_counts.m"
              if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3396 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
              else
#line 102 "trace_counts.m"
                if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3402 "mdbcomp.trace_counts.c"
                  *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                else
#line 102 "trace_counts.m"
                  if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 102 "trace_counts.m"
                    {
#line 102 "trace_counts.m"
                      MR_String mdbcomp__trace_counts__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));

#line 102 "trace_counts.m"
                      {
#line 102 "trace_counts.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_78_78, mdbcomp__trace_counts__V_25_25);
#line 102 "trace_counts.m"
                        return;
                      }
#line 102 "trace_counts.m"
                    }
#line 102 "trace_counts.m"
                  else
#line 102 "trace_counts.m"
                    if (((((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3426 "mdbcomp.trace_counts.c"
                      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                    else
#line 3430 "mdbcomp.trace_counts.c"
                      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
            }
#line 102 "trace_counts.m"
          else
#line 102 "trace_counts.m"
            if (((((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 102 "trace_counts.m"
              {
#line 102 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));

#line 102 "trace_counts.m"
                if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3445 "mdbcomp.trace_counts.c"
                  *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                else
#line 102 "trace_counts.m"
                  if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3451 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                  else
#line 102 "trace_counts.m"
                    if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3457 "mdbcomp.trace_counts.c"
                      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                    else
#line 102 "trace_counts.m"
                      if (((((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 102 "trace_counts.m"
                        {
#line 102 "trace_counts.m"
                          MR_Word mdbcomp__trace_counts__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));

#line 102 "trace_counts.m"
                          {
#line 102 "trace_counts.m"
                            mercury__io____Compare____error_0_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_74_74, mdbcomp__trace_counts__V_64_64);
#line 102 "trace_counts.m"
                            return;
                          }
#line 102 "trace_counts.m"
                        }
#line 102 "trace_counts.m"
                      else
#line 3479 "mdbcomp.trace_counts.c"
                        *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
              }
#line 102 "trace_counts.m"
            else
#line 102 "trace_counts.m"
              {
#line 102 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));

#line 102 "trace_counts.m"
                if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3492 "mdbcomp.trace_counts.c"
                  *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                else
#line 102 "trace_counts.m"
                  if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3498 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                  else
#line 102 "trace_counts.m"
                    if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3504 "mdbcomp.trace_counts.c"
                      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                    else
#line 102 "trace_counts.m"
                      if (((((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3510 "mdbcomp.trace_counts.c"
                        *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                      else
#line 102 "trace_counts.m"
                        {
#line 102 "trace_counts.m"
                          MR_Word mdbcomp__trace_counts__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));

#line 102 "trace_counts.m"
                          {
#line 102 "trace_counts.m"
                            mercury__io____Compare____error_0_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_77_77, mdbcomp__trace_counts__V_51_51);
#line 102 "trace_counts.m"
                            return;
                          }
#line 102 "trace_counts.m"
                        }
#line 102 "trace_counts.m"
              }
#line 102 "trace_counts.m"
  }
#line 102 "trace_counts.m"
}

#line 102 "trace_counts.m"
MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0(
#line 102 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 102 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 102 "trace_counts.m"
{
#line 102 "trace_counts.m"
  {
#line 102 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 102 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_15 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
#line 102 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_16 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

#line 102 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_15 == mdbcomp__trace_counts__CastY_16);
#line 102 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 102 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 102 "trace_counts.m"
    else
#line 102 "trace_counts.m"
      if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 102 "trace_counts.m"
        {
#line 102 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 102 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_10_10;

#line 102 "trace_counts.m"
          mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 102 "trace_counts.m"
          if (mdbcomp__trace_counts__succeeded)
#line 102 "trace_counts.m"
            {
#line 102 "trace_counts.m"
              mdbcomp__trace_counts__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 3578 "mdbcomp.trace_counts.c"
              mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_9_9, mdbcomp__trace_counts__V_10_10) == 0);
#line 102 "trace_counts.m"
            }
#line 102 "trace_counts.m"
        }
#line 102 "trace_counts.m"
      else
#line 102 "trace_counts.m"
        if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 102 "trace_counts.m"
          {
#line 102 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__TypeInfo_18_18;
#line 102 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 102 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 102 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_5_5;
#line 102 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_6_6;

#line 102 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 102 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 102 "trace_counts.m"
              {
#line 102 "trace_counts.m"
                mdbcomp__trace_counts__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 102 "trace_counts.m"
                mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 3611 "mdbcomp.trace_counts.c"
                {
#line 3613 "mdbcomp.trace_counts.c"
                  mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_5_5);
                }
#line 102 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 102 "trace_counts.m"
                  {
#line 3620 "mdbcomp.trace_counts.c"
                    mdbcomp__trace_counts__TypeInfo_18_18 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1];
#line 3622 "mdbcomp.trace_counts.c"
                    {
#line 3624 "mdbcomp.trace_counts.c"
                      return mdbcomp__trace_counts__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__trace_counts__TypeInfo_18_18, ((MR_Box) (mdbcomp__trace_counts__V_4_4)), ((MR_Box) (mdbcomp__trace_counts__V_6_6)));
                    }
#line 102 "trace_counts.m"
                  }
#line 102 "trace_counts.m"
              }
#line 102 "trace_counts.m"
          }
#line 102 "trace_counts.m"
        else
#line 102 "trace_counts.m"
          if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 102 "trace_counts.m"
            {
#line 102 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 102 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_8_8;

#line 102 "trace_counts.m"
              mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 102 "trace_counts.m"
              if (mdbcomp__trace_counts__succeeded)
#line 102 "trace_counts.m"
                {
#line 102 "trace_counts.m"
                  mdbcomp__trace_counts__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 3652 "mdbcomp.trace_counts.c"
                  mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_7_7, mdbcomp__trace_counts__V_8_8) == 0);
#line 102 "trace_counts.m"
                }
#line 102 "trace_counts.m"
            }
#line 102 "trace_counts.m"
          else
#line 102 "trace_counts.m"
            if (((((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 102 "trace_counts.m"
              {
#line 102 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 102 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_14_14;

#line 102 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 102 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 102 "trace_counts.m"
                  {
#line 102 "trace_counts.m"
                    mdbcomp__trace_counts__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 3677 "mdbcomp.trace_counts.c"
                    {
#line 3679 "mdbcomp.trace_counts.c"
                      return mdbcomp__trace_counts__succeeded = mercury__io____Unify____error_0_0(mdbcomp__trace_counts__V_13_13, mdbcomp__trace_counts__V_14_14);
                    }
#line 102 "trace_counts.m"
                  }
#line 102 "trace_counts.m"
              }
#line 102 "trace_counts.m"
            else
#line 102 "trace_counts.m"
              {
#line 102 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 102 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_12_12;

#line 102 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 102 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 102 "trace_counts.m"
                  {
#line 102 "trace_counts.m"
                    mdbcomp__trace_counts__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 3703 "mdbcomp.trace_counts.c"
                    {
#line 3705 "mdbcomp.trace_counts.c"
                      return mdbcomp__trace_counts__succeeded = mercury__io____Unify____error_0_0(mdbcomp__trace_counts__V_11_11, mdbcomp__trace_counts__V_12_12);
                    }
#line 102 "trace_counts.m"
                  }
#line 102 "trace_counts.m"
              }
#line 102 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 102 "trace_counts.m"
  }
#line 102 "trace_counts.m"
}

#line 116 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0(
#line 116 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
#line 116 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 116 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
#line 116 "trace_counts.m"
{
#line 116 "trace_counts.m"
  {
#line 116 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 116 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_17 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
#line 116 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_18 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

#line 116 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_17 == mdbcomp__trace_counts__CastY_18);
#line 116 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 3743 "mdbcomp.trace_counts.c"
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
#line 116 "trace_counts.m"
    else
#line 116 "trace_counts.m"
      if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 116 "trace_counts.m"
        {
#line 116 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 116 "trace_counts.m"
          if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 116 "trace_counts.m"
            {
#line 116 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));

#line 116 "trace_counts.m"
              {
#line 116 "trace_counts.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_22_22, mdbcomp__trace_counts__V_16_16);
#line 116 "trace_counts.m"
                return;
              }
#line 116 "trace_counts.m"
            }
#line 116 "trace_counts.m"
          else
#line 3772 "mdbcomp.trace_counts.c"
            *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 116 "trace_counts.m"
        }
#line 116 "trace_counts.m"
      else
#line 116 "trace_counts.m"
        {
#line 116 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 116 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 116 "trace_counts.m"
          if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3787 "mdbcomp.trace_counts.c"
            *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 116 "trace_counts.m"
          else
#line 116 "trace_counts.m"
            {
#line 116 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
#line 116 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
#line 116 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_8_8;

#line 116 "trace_counts.m"
              {
#line 116 "trace_counts.m"
                mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(&mdbcomp__trace_counts__V_8_8, mdbcomp__trace_counts__V_24_24, mdbcomp__trace_counts__V_6_6);
              }
#line 3805 "mdbcomp.trace_counts.c"
              mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_8_8 == (MR_Integer) 0);
#line 116 "trace_counts.m"
              mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
#line 116 "trace_counts.m"
              if (mdbcomp__trace_counts__succeeded)
#line 116 "trace_counts.m"
                *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_8_8;
#line 116 "trace_counts.m"
              else
#line 116 "trace_counts.m"
                {
#line 116 "trace_counts.m"
                  {
#line 116 "trace_counts.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__HeadVar__1_1, ((MR_Box) (mdbcomp__trace_counts__V_23_23)), ((MR_Box) (mdbcomp__trace_counts__V_7_7)));
#line 116 "trace_counts.m"
                    return;
                  }
#line 116 "trace_counts.m"
                }
#line 116 "trace_counts.m"
            }
#line 116 "trace_counts.m"
        }
#line 116 "trace_counts.m"
  }
#line 116 "trace_counts.m"
}

#line 116 "trace_counts.m"
MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0(
#line 116 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 116 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 116 "trace_counts.m"
{
#line 116 "trace_counts.m"
  {
#line 116 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 116 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_9 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
#line 116 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_10 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

#line 116 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_9 == mdbcomp__trace_counts__CastY_10);
#line 116 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 116 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 116 "trace_counts.m"
    else
#line 116 "trace_counts.m"
      if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 116 "trace_counts.m"
        {
#line 116 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 116 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_8_8;

#line 116 "trace_counts.m"
          mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 116 "trace_counts.m"
          if (mdbcomp__trace_counts__succeeded)
#line 116 "trace_counts.m"
            {
#line 116 "trace_counts.m"
              mdbcomp__trace_counts__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 3878 "mdbcomp.trace_counts.c"
              mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_7_7, mdbcomp__trace_counts__V_8_8) == 0);
#line 116 "trace_counts.m"
            }
#line 116 "trace_counts.m"
        }
#line 116 "trace_counts.m"
      else
#line 116 "trace_counts.m"
        {
#line 116 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__TypeInfo_11_11;
#line 116 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 116 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 116 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_5_5;
#line 116 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_6_6;

#line 116 "trace_counts.m"
          mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 116 "trace_counts.m"
          if (mdbcomp__trace_counts__succeeded)
#line 116 "trace_counts.m"
            {
#line 116 "trace_counts.m"
              mdbcomp__trace_counts__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 116 "trace_counts.m"
              mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 3909 "mdbcomp.trace_counts.c"
              {
#line 3911 "mdbcomp.trace_counts.c"
                mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_5_5);
              }
#line 116 "trace_counts.m"
              if (mdbcomp__trace_counts__succeeded)
#line 116 "trace_counts.m"
                {
#line 3918 "mdbcomp.trace_counts.c"
                  mdbcomp__trace_counts__TypeInfo_11_11 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1];
#line 3920 "mdbcomp.trace_counts.c"
                  {
#line 3922 "mdbcomp.trace_counts.c"
                    return mdbcomp__trace_counts__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__trace_counts__TypeInfo_11_11, ((MR_Box) (mdbcomp__trace_counts__V_4_4)), ((MR_Box) (mdbcomp__trace_counts__V_6_6)));
                  }
#line 116 "trace_counts.m"
                }
#line 116 "trace_counts.m"
            }
#line 116 "trace_counts.m"
        }
#line 116 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 116 "trace_counts.m"
  }
#line 116 "trace_counts.m"
}

#line 75 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts____Compare____proc_trace_counts_0_0(
#line 75 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
#line 75 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 75 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
#line 75 "trace_counts.m"
{
#line 75 "trace_counts.m"
  {
#line 75 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 75 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Cast_HeadVar1_4 = mdbcomp__trace_counts__HeadVar__2_2;
#line 75 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Cast_HeadVar2_5 = mdbcomp__trace_counts__HeadVar__3_3;

#line 75 "trace_counts.m"
    {
#line 75 "trace_counts.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], mdbcomp__trace_counts__HeadVar__1_1, ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar2_5)));
#line 75 "trace_counts.m"
      return;
    }
#line 75 "trace_counts.m"
  }
#line 75 "trace_counts.m"
}

#line 75 "trace_counts.m"
MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_trace_counts_0_0(
#line 75 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 75 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 75 "trace_counts.m"
{
#line 75 "trace_counts.m"
  {
#line 75 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 75 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Cast_HeadVar1_3 = mdbcomp__trace_counts__HeadVar__1_1;
#line 75 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Cast_HeadVar2_4 = mdbcomp__trace_counts__HeadVar__2_2;

#line 75 "trace_counts.m"
    {
#line 75 "trace_counts.m"
      return mdbcomp__trace_counts__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__trace_counts__Cast_HeadVar2_4)));
    }
#line 75 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 75 "trace_counts.m"
  }
#line 75 "trace_counts.m"
}

#line 68 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts____Compare____proc_label_in_context_0_0(
#line 68 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
#line 68 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 68 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
#line 68 "trace_counts.m"
{
#line 68 "trace_counts.m"
  {
#line 68 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 68 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_12 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
#line 68 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_13 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

#line 68 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_12 == mdbcomp__trace_counts__CastY_13);
#line 68 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 4024 "mdbcomp.trace_counts.c"
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "trace_counts.m"
    else
#line 68 "trace_counts.m"
      {
#line 68 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 2)));
#line 68 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
#line 68 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
#line 68 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 2)));
#line 68 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_10_10;

#line 68 "trace_counts.m"
        {
#line 68 "trace_counts.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&mdbcomp__trace_counts__V_10_10, mdbcomp__trace_counts__V_4_4, mdbcomp__trace_counts__V_7_7);
        }
#line 4050 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_10_10 == (MR_Integer) 0);
#line 68 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
#line 68 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 68 "trace_counts.m"
          *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_10_10;
#line 68 "trace_counts.m"
        else
#line 68 "trace_counts.m"
          {
#line 68 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_11_11;

#line 68 "trace_counts.m"
            {
#line 68 "trace_counts.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__trace_counts__V_11_11, mdbcomp__trace_counts__V_5_5, mdbcomp__trace_counts__V_8_8);
            }
#line 4070 "mdbcomp.trace_counts.c"
            mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_11_11 == (MR_Integer) 0);
#line 68 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
#line 68 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 68 "trace_counts.m"
              *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_11_11;
#line 68 "trace_counts.m"
            else
#line 68 "trace_counts.m"
              {
#line 68 "trace_counts.m"
                mdbcomp__prim_data____Compare____proc_label_0_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_6_6, mdbcomp__trace_counts__V_9_9);
#line 68 "trace_counts.m"
                return;
              }
#line 68 "trace_counts.m"
          }
#line 68 "trace_counts.m"
      }
#line 68 "trace_counts.m"
  }
#line 68 "trace_counts.m"
}

#line 68 "trace_counts.m"
MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_label_in_context_0_0(
#line 68 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 68 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 68 "trace_counts.m"
{
#line 68 "trace_counts.m"
  {
#line 68 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 68 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_9 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
#line 68 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_10 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

#line 68 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_9 == mdbcomp__trace_counts__CastY_10);
#line 68 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 68 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 68 "trace_counts.m"
    else
#line 68 "trace_counts.m"
      {
#line 68 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 68 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 2)));
#line 68 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 2)));

#line 4137 "mdbcomp.trace_counts.c"
        {
#line 4139 "mdbcomp.trace_counts.c"
          mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_6_6);
        }
#line 68 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 68 "trace_counts.m"
          {
#line 4146 "mdbcomp.trace_counts.c"
            mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_4_4, mdbcomp__trace_counts__V_7_7) == 0);
#line 68 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 4150 "mdbcomp.trace_counts.c"
              {
#line 4152 "mdbcomp.trace_counts.c"
                return mdbcomp__trace_counts__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mdbcomp__trace_counts__V_5_5, mdbcomp__trace_counts__V_8_8);
              }
#line 68 "trace_counts.m"
          }
#line 68 "trace_counts.m"
      }
#line 68 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 68 "trace_counts.m"
  }
#line 68 "trace_counts.m"
}

#line 77 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts____Compare____path_port_0_0(
#line 77 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
#line 77 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 77 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
#line 77 "trace_counts.m"
{
#line 77 "trace_counts.m"
  {
#line 77 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 77 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_29 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
#line 77 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_30 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

#line 77 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_29 == mdbcomp__trace_counts__CastY_30);
#line 77 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 4190 "mdbcomp.trace_counts.c"
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "trace_counts.m"
    else
#line 77 "trace_counts.m"
      if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 77 "trace_counts.m"
        {
#line 77 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "trace_counts.m"
          if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 77 "trace_counts.m"
            {
#line 77 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));

#line 77 "trace_counts.m"
              {
#line 77 "trace_counts.m"
                mdbcomp__goal_path____Compare____reverse_goal_path_0_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_35_35, mdbcomp__trace_counts__V_14_14);
#line 77 "trace_counts.m"
                return;
              }
#line 77 "trace_counts.m"
            }
#line 77 "trace_counts.m"
          else
#line 77 "trace_counts.m"
            if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4221 "mdbcomp.trace_counts.c"
              *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "trace_counts.m"
            else
#line 4225 "mdbcomp.trace_counts.c"
              *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "trace_counts.m"
        }
#line 77 "trace_counts.m"
      else
#line 77 "trace_counts.m"
        if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 77 "trace_counts.m"
          {
#line 77 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 77 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "trace_counts.m"
            if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4242 "mdbcomp.trace_counts.c"
              *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "trace_counts.m"
            else
#line 77 "trace_counts.m"
              if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 77 "trace_counts.m"
                {
#line 77 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
#line 77 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
#line 77 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__V_28_28;
#line 77 "trace_counts.m"
                  MR_Integer mdbcomp__trace_counts__V_39_39 = (MR_Integer) mdbcomp__trace_counts__V_37_37;
#line 77 "trace_counts.m"
                  MR_Integer mdbcomp__trace_counts__V_40_40 = (MR_Integer) mdbcomp__trace_counts__V_26_26;

#line 77 "trace_counts.m"
                  {
#line 77 "trace_counts.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__trace_counts__V_28_28, mdbcomp__trace_counts__V_39_39, mdbcomp__trace_counts__V_40_40);
                  }
#line 4266 "mdbcomp.trace_counts.c"
                  mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_28_28 == (MR_Integer) 0);
#line 77 "trace_counts.m"
                  mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
#line 77 "trace_counts.m"
                  if (mdbcomp__trace_counts__succeeded)
#line 77 "trace_counts.m"
                    *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_28_28;
#line 77 "trace_counts.m"
                  else
#line 77 "trace_counts.m"
                    {
#line 77 "trace_counts.m"
                      mdbcomp__goal_path____Compare____reverse_goal_path_0_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_36_36, mdbcomp__trace_counts__V_27_27);
#line 77 "trace_counts.m"
                      return;
                    }
#line 77 "trace_counts.m"
                }
#line 77 "trace_counts.m"
              else
#line 4287 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "trace_counts.m"
          }
#line 77 "trace_counts.m"
        else
#line 77 "trace_counts.m"
          {
#line 77 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "trace_counts.m"
            if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4300 "mdbcomp.trace_counts.c"
              *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "trace_counts.m"
            else
#line 77 "trace_counts.m"
              if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4306 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "trace_counts.m"
              else
#line 77 "trace_counts.m"
                {
#line 77 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
#line 77 "trace_counts.m"
                  MR_Integer mdbcomp__trace_counts__V_41_41 = (MR_Integer) mdbcomp__trace_counts__V_38_38;
#line 77 "trace_counts.m"
                  MR_Integer mdbcomp__trace_counts__V_42_42 = (MR_Integer) mdbcomp__trace_counts__V_5_5;

#line 77 "trace_counts.m"
                  {
#line 77 "trace_counts.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_41_41, mdbcomp__trace_counts__V_42_42);
#line 77 "trace_counts.m"
                    return;
                  }
#line 77 "trace_counts.m"
                }
#line 77 "trace_counts.m"
          }
#line 77 "trace_counts.m"
  }
#line 77 "trace_counts.m"
}

#line 77 "trace_counts.m"
MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____path_port_0_0(
#line 77 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 77 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 77 "trace_counts.m"
{
#line 77 "trace_counts.m"
  {
#line 77 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 77 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_11 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
#line 77 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_12 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

#line 77 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_11 == mdbcomp__trace_counts__CastY_12);
#line 77 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 77 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 77 "trace_counts.m"
    else
#line 77 "trace_counts.m"
      if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 77 "trace_counts.m"
        {
#line 77 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 77 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_6_6;

#line 77 "trace_counts.m"
          mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 77 "trace_counts.m"
          if (mdbcomp__trace_counts__succeeded)
#line 77 "trace_counts.m"
            {
#line 77 "trace_counts.m"
              mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 4378 "mdbcomp.trace_counts.c"
              {
#line 4380 "mdbcomp.trace_counts.c"
                return mdbcomp__trace_counts__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdbcomp__trace_counts__V_5_5, mdbcomp__trace_counts__V_6_6);
              }
#line 77 "trace_counts.m"
            }
#line 77 "trace_counts.m"
        }
#line 77 "trace_counts.m"
      else
#line 77 "trace_counts.m"
        if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 77 "trace_counts.m"
          {
#line 77 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 77 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 77 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_9_9;
#line 77 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_10_10;

#line 77 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 77 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 77 "trace_counts.m"
              {
#line 77 "trace_counts.m"
                mdbcomp__trace_counts__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 77 "trace_counts.m"
                mdbcomp__trace_counts__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 4412 "mdbcomp.trace_counts.c"
                mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_7_7 == mdbcomp__trace_counts__V_9_9);
#line 77 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 4416 "mdbcomp.trace_counts.c"
                  {
#line 4418 "mdbcomp.trace_counts.c"
                    return mdbcomp__trace_counts__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdbcomp__trace_counts__V_8_8, mdbcomp__trace_counts__V_10_10);
                  }
#line 77 "trace_counts.m"
              }
#line 77 "trace_counts.m"
          }
#line 77 "trace_counts.m"
        else
#line 77 "trace_counts.m"
          {
#line 77 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 77 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_4_4;

#line 77 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 77 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 77 "trace_counts.m"
              {
#line 77 "trace_counts.m"
                mdbcomp__trace_counts__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 4442 "mdbcomp.trace_counts.c"
                mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_3_3 == mdbcomp__trace_counts__V_4_4);
#line 77 "trace_counts.m"
              }
#line 77 "trace_counts.m"
          }
#line 77 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 77 "trace_counts.m"
  }
#line 77 "trace_counts.m"
}

#line 82 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts____Compare____line_no_and_count_0_0(
#line 82 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
#line 82 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 82 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
#line 82 "trace_counts.m"
{
#line 82 "trace_counts.m"
  {
#line 82 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 82 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_12 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
#line 82 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_13 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

#line 82 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_12 == mdbcomp__trace_counts__CastY_13);
#line 82 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 4479 "mdbcomp.trace_counts.c"
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
#line 82 "trace_counts.m"
    else
#line 82 "trace_counts.m"
      {
#line 82 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 82 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 82 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 2)));
#line 82 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
#line 82 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
#line 82 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 2)));
#line 82 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_10_10;

#line 82 "trace_counts.m"
        {
#line 82 "trace_counts.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__trace_counts__V_10_10, mdbcomp__trace_counts__V_4_4, mdbcomp__trace_counts__V_7_7);
        }
#line 4505 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_10_10 == (MR_Integer) 0);
#line 82 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
#line 82 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 82 "trace_counts.m"
          *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_10_10;
#line 82 "trace_counts.m"
        else
#line 82 "trace_counts.m"
          {
#line 82 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_11_11;

#line 82 "trace_counts.m"
            {
#line 82 "trace_counts.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__trace_counts__V_11_11, mdbcomp__trace_counts__V_5_5, mdbcomp__trace_counts__V_8_8);
            }
#line 4525 "mdbcomp.trace_counts.c"
            mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_11_11 == (MR_Integer) 0);
#line 82 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
#line 82 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 82 "trace_counts.m"
              *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_11_11;
#line 82 "trace_counts.m"
            else
#line 82 "trace_counts.m"
              {
#line 82 "trace_counts.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_6_6, mdbcomp__trace_counts__V_9_9);
#line 82 "trace_counts.m"
                return;
              }
#line 82 "trace_counts.m"
          }
#line 82 "trace_counts.m"
      }
#line 82 "trace_counts.m"
  }
#line 82 "trace_counts.m"
}

#line 82 "trace_counts.m"
MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____line_no_and_count_0_0(
#line 82 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 82 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 82 "trace_counts.m"
{
#line 82 "trace_counts.m"
  {
#line 82 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 82 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_9 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
#line 82 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_10 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

#line 82 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_9 == mdbcomp__trace_counts__CastY_10);
#line 82 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 82 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 82 "trace_counts.m"
    else
#line 82 "trace_counts.m"
      {
#line 82 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 82 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 82 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 2)));
#line 82 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 82 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 82 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 2)));

#line 4592 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_3_3 == mdbcomp__trace_counts__V_6_6);
#line 82 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 82 "trace_counts.m"
          {
#line 4598 "mdbcomp.trace_counts.c"
            mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_4_4 == mdbcomp__trace_counts__V_7_7);
#line 82 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 4602 "mdbcomp.trace_counts.c"
              mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_5_5 == mdbcomp__trace_counts__V_8_8);
#line 82 "trace_counts.m"
          }
#line 82 "trace_counts.m"
      }
#line 82 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 82 "trace_counts.m"
  }
#line 82 "trace_counts.m"
}

#line 43 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts____Compare____base_count_file_type_0_0(
#line 43 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
#line 43 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 43 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
#line 43 "trace_counts.m"
{
#line 43 "trace_counts.m"
  {
#line 43 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 43 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_9 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
#line 43 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_10 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

#line 43 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_9 == mdbcomp__trace_counts__CastY_10);
#line 43 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 4639 "mdbcomp.trace_counts.c"
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "trace_counts.m"
    else
#line 43 "trace_counts.m"
      {
#line 43 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)));
#line 43 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 1)));
#line 43 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_8_8;
#line 43 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_13_13 = (MR_Integer) mdbcomp__trace_counts__V_4_4;
#line 43 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_14_14 = (MR_Integer) mdbcomp__trace_counts__V_6_6;

#line 43 "trace_counts.m"
        {
#line 43 "trace_counts.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__trace_counts__V_8_8, mdbcomp__trace_counts__V_13_13, mdbcomp__trace_counts__V_14_14);
        }
#line 4665 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_8_8 == (MR_Integer) 0);
#line 43 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = !(mdbcomp__trace_counts__succeeded);
#line 43 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 43 "trace_counts.m"
          *mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__V_8_8;
#line 43 "trace_counts.m"
        else
#line 43 "trace_counts.m"
          {
#line 43 "trace_counts.m"
            mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_5_5, mdbcomp__trace_counts__V_7_7);
#line 43 "trace_counts.m"
            return;
          }
#line 43 "trace_counts.m"
      }
#line 43 "trace_counts.m"
  }
#line 43 "trace_counts.m"
}

#line 43 "trace_counts.m"
MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____base_count_file_type_0_0(
#line 43 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 43 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 43 "trace_counts.m"
{
#line 43 "trace_counts.m"
  {
#line 43 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 43 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_7 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
#line 43 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_8 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

#line 43 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_7 == mdbcomp__trace_counts__CastY_8);
#line 43 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 43 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 43 "trace_counts.m"
    else
#line 43 "trace_counts.m"
      {
#line 43 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 43 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));

#line 4726 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_3_3 == mdbcomp__trace_counts__V_5_5);
#line 43 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 4730 "mdbcomp.trace_counts.c"
          mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_4_4, mdbcomp__trace_counts__V_6_6) == 0);
#line 43 "trace_counts.m"
      }
#line 43 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 43 "trace_counts.m"
  }
#line 43 "trace_counts.m"
}

#line 34 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts____Compare____all_or_nonzero_0_0(
#line 34 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
#line 34 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 34 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
#line 34 "trace_counts.m"
{
#line 34 "trace_counts.m"
  {
#line 34 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 34 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
#line 34 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

#line 34 "trace_counts.m"
    {
#line 34 "trace_counts.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__Cast_HeadVar1_4, mdbcomp__trace_counts__Cast_HeadVar2_5);
#line 34 "trace_counts.m"
      return;
    }
#line 34 "trace_counts.m"
  }
#line 34 "trace_counts.m"
}

#line 34 "trace_counts.m"
MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____all_or_nonzero_0_0(
#line 34 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_1,
#line 34 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 34 "trace_counts.m"
{
#line 4782 "mdbcomp.trace_counts.c"
  {
#line 4784 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__HeadVar__2_1 == mdbcomp__trace_counts__HeadVar__2_2);

#line 4787 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 4789 "mdbcomp.trace_counts.c"
  }
#line 34 "trace_counts.m"
}

#line 988 "trace_counts.m"
static MR_Word MR_CALL 
mdbcomp__trace_counts__insert_into_list_as_set_2_f_0(
#line 988 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TypeInfo_for_T_9,
#line 988 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__List0_4,
#line 988 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__Item_5)
#line 988 "trace_counts.m"
{
#line 990 "trace_counts.m"
  {
#line 990 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 990 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__List_6;
#line 990 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Set0_7;
#line 990 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Set_8;

#line 991 "trace_counts.m"
    {
#line 991 "trace_counts.m"
      mercury__set__list_to_set_2_p_0(mdbcomp__trace_counts__TypeInfo_for_T_9, mdbcomp__trace_counts__List0_4, &mdbcomp__trace_counts__Set0_7);
    }
#line 992 "trace_counts.m"
    {
#line 992 "trace_counts.m"
      mercury__set__insert_3_p_0(mdbcomp__trace_counts__TypeInfo_for_T_9, mdbcomp__trace_counts__Item_5, mdbcomp__trace_counts__Set0_7, &mdbcomp__trace_counts__Set_8);
    }
#line 993 "trace_counts.m"
    {
#line 993 "trace_counts.m"
      mercury__set__to_sorted_list_2_p_0(mdbcomp__trace_counts__TypeInfo_for_T_9, mdbcomp__trace_counts__Set_8, &mdbcomp__trace_counts__List_6);
    }
#line 990 "trace_counts.m"
    return mdbcomp__trace_counts__List_6;
#line 990 "trace_counts.m"
  }
#line 988 "trace_counts.m"
}

#line 922 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_2_5_p_0(
#line 922 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ModuleName_6,
#line 922 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_7,
#line 922 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcCounts_8,
#line 922 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_16,
#line 922 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_17)
#line 922 "trace_counts.m"
{
#line 926 "trace_counts.m"
  {
#line 926 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 926 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__ProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 2)));
#line 927 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 0)));
#line 927 "trace_counts.m"
    MR_String mdbcomp__trace_counts__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 1)));
#line 928 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_23_23;
#line 928 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_11_11;
#line 928 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_12_12;
#line 928 "trace_counts.m"
    MR_String mdbcomp__trace_counts__V_13_13;
#line 928 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__V_14_14;
#line 928 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__V_15_15;

#line 928 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__ProcLabel_10)) == (MR_mktag((MR_Integer) 0)));
#line 928 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 928 "trace_counts.m"
      {
#line 928 "trace_counts.m"
        mdbcomp__trace_counts__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 0)));
#line 928 "trace_counts.m"
        mdbcomp__trace_counts__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 1)));
#line 928 "trace_counts.m"
        mdbcomp__trace_counts__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 2)));
#line 928 "trace_counts.m"
        mdbcomp__trace_counts__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 3)));
#line 928 "trace_counts.m"
        mdbcomp__trace_counts__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 4)));
#line 928 "trace_counts.m"
        mdbcomp__trace_counts__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 5)));
#line 928 "trace_counts.m"
        {
#line 928 "trace_counts.m"
          mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__ModuleName_6, mdbcomp__trace_counts__V_23_23);
        }
#line 928 "trace_counts.m"
      }
#line 930 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 929 "trace_counts.m"
      {
#line 929 "trace_counts.m"
        {
#line 929 "trace_counts.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContext_7)), ((MR_Box) (mdbcomp__trace_counts__ProcCounts_8)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_16, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_17);
#line 929 "trace_counts.m"
          return;
        }
#line 929 "trace_counts.m"
      }
#line 930 "trace_counts.m"
    else
#line 929 "trace_counts.m"
      *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_17 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_16;
#line 926 "trace_counts.m"
  }
#line 922 "trace_counts.m"
}

#line 889 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_path_port_count_4_p_0(
#line 889 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 889 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 889 "trace_counts.m"
{
#line 893 "trace_counts.m"
  {
#line 893 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 893 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 2)));
#line 893 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 893 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 893 "trace_counts.m"
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 901 "trace_counts.m"
      {
#line 901 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__Path_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 901 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_37_37;
#line 901 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_40_40;
#line 901 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_41_41;
#line 901 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_42_42;
#line 901 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_44_44;
#line 901 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_45_45;
#line 901 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_46_46;
#line 901 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_48_48;
#line 901 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_49_49;
#line 901 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_50_50;
#line 901 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_52_52;
#line 901 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_53_53;

#line 903 "trace_counts.m"
        {
#line 903 "trace_counts.m"
          mdbcomp__trace_counts__V_41_41 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mdbcomp__trace_counts__Path_30);
        }
#line 904 "trace_counts.m"
        {
#line 904 "trace_counts.m"
          mdbcomp__trace_counts__V_45_45 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_89_89);
        }
#line 905 "trace_counts.m"
        {
#line 905 "trace_counts.m"
          mdbcomp__trace_counts__V_49_49 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_88_88);
        }
#line 906 "trace_counts.m"
        {
#line 906 "trace_counts.m"
          mdbcomp__trace_counts__V_53_53 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_87_87);
        }
#line 906 "trace_counts.m"
        {
#line 906 "trace_counts.m"
          mdbcomp__trace_counts__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_52_52, 0) = ((MR_Box) (mdbcomp__trace_counts__V_53_53));
#line 906 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[2])));
#line 906 "trace_counts.m"
        }
#line 905 "trace_counts.m"
        {
#line 905 "trace_counts.m"
          mdbcomp__trace_counts__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_50_50, 0) = ((MR_Box) ((MR_String) " "));
#line 905 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_50_50, 1) = ((MR_Box) (mdbcomp__trace_counts__V_52_52));
#line 905 "trace_counts.m"
        }
#line 905 "trace_counts.m"
        {
#line 905 "trace_counts.m"
          mdbcomp__trace_counts__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_48_48, 0) = ((MR_Box) (mdbcomp__trace_counts__V_49_49));
#line 905 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_48_48, 1) = ((MR_Box) (mdbcomp__trace_counts__V_50_50));
#line 905 "trace_counts.m"
        }
#line 904 "trace_counts.m"
        {
#line 904 "trace_counts.m"
          mdbcomp__trace_counts__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_46_46, 0) = ((MR_Box) ((MR_String) " "));
#line 904 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_46_46, 1) = ((MR_Box) (mdbcomp__trace_counts__V_48_48));
#line 904 "trace_counts.m"
        }
#line 904 "trace_counts.m"
        {
#line 904 "trace_counts.m"
          mdbcomp__trace_counts__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_44_44, 0) = ((MR_Box) (mdbcomp__trace_counts__V_45_45));
#line 904 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_44_44, 1) = ((MR_Box) (mdbcomp__trace_counts__V_46_46));
#line 904 "trace_counts.m"
        }
#line 903 "trace_counts.m"
        {
#line 903 "trace_counts.m"
          mdbcomp__trace_counts__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_42_42, 0) = ((MR_Box) ((MR_String) "> "));
#line 903 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_42_42, 1) = ((MR_Box) (mdbcomp__trace_counts__V_44_44));
#line 903 "trace_counts.m"
        }
#line 903 "trace_counts.m"
        {
#line 903 "trace_counts.m"
          mdbcomp__trace_counts__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_40_40, 0) = ((MR_Box) (mdbcomp__trace_counts__V_41_41));
#line 903 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_40_40, 1) = ((MR_Box) (mdbcomp__trace_counts__V_42_42));
#line 903 "trace_counts.m"
        }
#line 903 "trace_counts.m"
        {
#line 903 "trace_counts.m"
          mdbcomp__trace_counts__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_37_37, 0) = ((MR_Box) ((MR_String) "<"));
#line 903 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_37_37, 1) = ((MR_Box) (mdbcomp__trace_counts__V_40_40));
#line 903 "trace_counts.m"
        }
#line 902 "trace_counts.m"
        {
#line 902 "trace_counts.m"
          mercury__io__write_strings_3_p_0(mdbcomp__trace_counts__V_37_37);
#line 902 "trace_counts.m"
          return;
        }
#line 901 "trace_counts.m"
      }
#line 893 "trace_counts.m"
    else
#line 893 "trace_counts.m"
      if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 908 "trace_counts.m"
        {
#line 908 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__Port_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 908 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__Path_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 908 "trace_counts.m"
          MR_String mdbcomp__trace_counts__PortStr_63;
#line 908 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_66_66;
#line 908 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_68_68;
#line 908 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_70_70;
#line 908 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_71_71;
#line 908 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_72_72;
#line 908 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_74_74;
#line 908 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_75_75;
#line 908 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_76_76;
#line 908 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_78_78;
#line 908 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_79_79;
#line 908 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_80_80;
#line 908 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_82_82;
#line 908 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_83_83;

#line 909 "trace_counts.m"
          {
#line 909 "trace_counts.m"
            mdbcomp__trace_counts__string_to_trace_port_2_p_1(&mdbcomp__trace_counts__PortStr_63, mdbcomp__trace_counts__Port_57);
          }
#line 911 "trace_counts.m"
          {
#line 911 "trace_counts.m"
            mdbcomp__trace_counts__V_71_71 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mdbcomp__trace_counts__Path_58);
          }
#line 912 "trace_counts.m"
          {
#line 912 "trace_counts.m"
            mdbcomp__trace_counts__V_75_75 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_89_89);
          }
#line 913 "trace_counts.m"
          {
#line 913 "trace_counts.m"
            mdbcomp__trace_counts__V_79_79 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_88_88);
          }
#line 914 "trace_counts.m"
          {
#line 914 "trace_counts.m"
            mdbcomp__trace_counts__V_83_83 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_87_87);
          }
#line 914 "trace_counts.m"
          {
#line 914 "trace_counts.m"
            mdbcomp__trace_counts__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_82_82, 0) = ((MR_Box) (mdbcomp__trace_counts__V_83_83));
#line 914 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[2])));
#line 914 "trace_counts.m"
          }
#line 913 "trace_counts.m"
          {
#line 913 "trace_counts.m"
            mdbcomp__trace_counts__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_80_80, 0) = ((MR_Box) ((MR_String) " "));
#line 913 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_80_80, 1) = ((MR_Box) (mdbcomp__trace_counts__V_82_82));
#line 913 "trace_counts.m"
          }
#line 913 "trace_counts.m"
          {
#line 913 "trace_counts.m"
            mdbcomp__trace_counts__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_78_78, 0) = ((MR_Box) (mdbcomp__trace_counts__V_79_79));
#line 913 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_78_78, 1) = ((MR_Box) (mdbcomp__trace_counts__V_80_80));
#line 913 "trace_counts.m"
          }
#line 912 "trace_counts.m"
          {
#line 912 "trace_counts.m"
            mdbcomp__trace_counts__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_76_76, 0) = ((MR_Box) ((MR_String) " "));
#line 912 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_76_76, 1) = ((MR_Box) (mdbcomp__trace_counts__V_78_78));
#line 912 "trace_counts.m"
          }
#line 912 "trace_counts.m"
          {
#line 912 "trace_counts.m"
            mdbcomp__trace_counts__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_74_74, 0) = ((MR_Box) (mdbcomp__trace_counts__V_75_75));
#line 912 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_74_74, 1) = ((MR_Box) (mdbcomp__trace_counts__V_76_76));
#line 912 "trace_counts.m"
          }
#line 911 "trace_counts.m"
          {
#line 911 "trace_counts.m"
            mdbcomp__trace_counts__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_72_72, 0) = ((MR_Box) ((MR_String) "> "));
#line 911 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_72_72, 1) = ((MR_Box) (mdbcomp__trace_counts__V_74_74));
#line 911 "trace_counts.m"
          }
#line 911 "trace_counts.m"
          {
#line 911 "trace_counts.m"
            mdbcomp__trace_counts__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_70_70, 0) = ((MR_Box) (mdbcomp__trace_counts__V_71_71));
#line 911 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_70_70, 1) = ((MR_Box) (mdbcomp__trace_counts__V_72_72));
#line 911 "trace_counts.m"
          }
#line 911 "trace_counts.m"
          {
#line 911 "trace_counts.m"
            mdbcomp__trace_counts__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, 0) = ((MR_Box) ((MR_String) " <"));
#line 911 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, 1) = ((MR_Box) (mdbcomp__trace_counts__V_70_70));
#line 911 "trace_counts.m"
          }
#line 911 "trace_counts.m"
          {
#line 911 "trace_counts.m"
            mdbcomp__trace_counts__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_66_66, 0) = ((MR_Box) (mdbcomp__trace_counts__PortStr_63));
#line 911 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_66_66, 1) = ((MR_Box) (mdbcomp__trace_counts__V_68_68));
#line 911 "trace_counts.m"
          }
#line 910 "trace_counts.m"
          {
#line 910 "trace_counts.m"
            mercury__io__write_strings_3_p_0(mdbcomp__trace_counts__V_66_66);
#line 910 "trace_counts.m"
            return;
          }
#line 908 "trace_counts.m"
        }
#line 893 "trace_counts.m"
      else
#line 893 "trace_counts.m"
        {
#line 893 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__Port_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 893 "trace_counts.m"
          MR_String mdbcomp__trace_counts__PortStr_10;
#line 893 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_13_13;
#line 893 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_15_15;
#line 893 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_17_17;
#line 893 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_18_18;
#line 893 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_19_19;
#line 893 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_21_21;
#line 893 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_22_22;
#line 893 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_23_23;
#line 893 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_25_25;
#line 893 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_26_26;

#line 894 "trace_counts.m"
          {
#line 894 "trace_counts.m"
            mdbcomp__trace_counts__string_to_trace_port_2_p_1(&mdbcomp__trace_counts__PortStr_10, mdbcomp__trace_counts__Port_5);
          }
#line 897 "trace_counts.m"
          {
#line 897 "trace_counts.m"
            mdbcomp__trace_counts__V_18_18 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_89_89);
          }
#line 898 "trace_counts.m"
          {
#line 898 "trace_counts.m"
            mdbcomp__trace_counts__V_22_22 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_88_88);
          }
#line 899 "trace_counts.m"
          {
#line 899 "trace_counts.m"
            mdbcomp__trace_counts__V_26_26 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_87_87);
          }
#line 899 "trace_counts.m"
          {
#line 899 "trace_counts.m"
            mdbcomp__trace_counts__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_25_25, 0) = ((MR_Box) (mdbcomp__trace_counts__V_26_26));
#line 899 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[2])));
#line 899 "trace_counts.m"
          }
#line 898 "trace_counts.m"
          {
#line 898 "trace_counts.m"
            mdbcomp__trace_counts__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_23_23, 0) = ((MR_Box) ((MR_String) " "));
#line 898 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_23_23, 1) = ((MR_Box) (mdbcomp__trace_counts__V_25_25));
#line 898 "trace_counts.m"
          }
#line 898 "trace_counts.m"
          {
#line 898 "trace_counts.m"
            mdbcomp__trace_counts__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_21_21, 0) = ((MR_Box) (mdbcomp__trace_counts__V_22_22));
#line 898 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_21_21, 1) = ((MR_Box) (mdbcomp__trace_counts__V_23_23));
#line 898 "trace_counts.m"
          }
#line 897 "trace_counts.m"
          {
#line 897 "trace_counts.m"
            mdbcomp__trace_counts__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_19_19, 0) = ((MR_Box) ((MR_String) " "));
#line 897 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_19_19, 1) = ((MR_Box) (mdbcomp__trace_counts__V_21_21));
#line 897 "trace_counts.m"
          }
#line 897 "trace_counts.m"
          {
#line 897 "trace_counts.m"
            mdbcomp__trace_counts__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_17_17, 0) = ((MR_Box) (mdbcomp__trace_counts__V_18_18));
#line 897 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_17_17, 1) = ((MR_Box) (mdbcomp__trace_counts__V_19_19));
#line 897 "trace_counts.m"
          }
#line 896 "trace_counts.m"
          {
#line 896 "trace_counts.m"
            mdbcomp__trace_counts__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_15_15, 0) = ((MR_Box) ((MR_String) " "));
#line 896 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_15_15, 1) = ((MR_Box) (mdbcomp__trace_counts__V_17_17));
#line 896 "trace_counts.m"
          }
#line 896 "trace_counts.m"
          {
#line 896 "trace_counts.m"
            mdbcomp__trace_counts__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_13_13, 0) = ((MR_Box) (mdbcomp__trace_counts__PortStr_10));
#line 896 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_13_13, 1) = ((MR_Box) (mdbcomp__trace_counts__V_15_15));
#line 896 "trace_counts.m"
          }
#line 895 "trace_counts.m"
          {
#line 895 "trace_counts.m"
            mercury__io__write_strings_3_p_0(mdbcomp__trace_counts__V_13_13);
#line 895 "trace_counts.m"
            return;
          }
#line 893 "trace_counts.m"
        }
#line 893 "trace_counts.m"
  }
#line 889 "trace_counts.m"
}

#line 835 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_2(
#line 835 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 835 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 835 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 835 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 835 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4)
#line 835 "trace_counts.m"
{
#line 835 "trace_counts.m"
  {
#line 835 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;

#line 835 "trace_counts.m"
    {
#line 835 "trace_counts.m"
      mdbcomp__trace_counts__write_path_port_count_4_p_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
#line 835 "trace_counts.m"
      return;
    }
#line 835 "trace_counts.m"
  }
#line 835 "trace_counts.m"
}

#line 843 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_1(
#line 843 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg)
#line 843 "trace_counts.m"
{
#line 843 "trace_counts.m"
  {
#line 843 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 843 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;

#line 843 "trace_counts.m"
    {
#line 843 "trace_counts.m"
      return mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__843__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 4))));
    }
#line 843 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 843 "trace_counts.m"
  }
#line 843 "trace_counts.m"
}

#line 809 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0(
#line 809 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_9,
#line 809 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__PathPortCounts_10,
#line 809 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_0_18,
#line 809 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_19,
#line 809 "trace_counts.m"
  MR_String mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_0_20,
#line 809 "trace_counts.m"
  MR_String * mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_21)
#line 809 "trace_counts.m"
{
#line 814 "trace_counts.m"
  {
#line 814 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 814 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__ModuleNameSym_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_9, (MR_Integer) 0)));
#line 814 "trace_counts.m"
    MR_String mdbcomp__trace_counts__FileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_9, (MR_Integer) 1)));
#line 814 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_9, (MR_Integer) 2)));
#line 835 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__conv0_STATE_VARIABLE_IO_23;

#line 817 "trace_counts.m"
    {
#line 817 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__ModuleNameSym_14, mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_0_18);
    }
#line 819 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 818 "trace_counts.m"
      *mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_19 = mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_0_18;
#line 819 "trace_counts.m"
    else
#line 820 "trace_counts.m"
      {
#line 820 "trace_counts.m"
        MR_String mdbcomp__trace_counts__ModuleName_17;

#line 820 "trace_counts.m"
        {
#line 820 "trace_counts.m"
          mdbcomp__trace_counts__ModuleName_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdbcomp__trace_counts__ModuleNameSym_14);
        }
#line 821 "trace_counts.m"
        {
#line 821 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) "module ");
        }
#line 822 "trace_counts.m"
        {
#line 822 "trace_counts.m"
          mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__ModuleName_17);
        }
#line 823 "trace_counts.m"
        {
#line 823 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 824 "trace_counts.m"
        *mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_19 = mdbcomp__trace_counts__ModuleNameSym_14;
#line 820 "trace_counts.m"
      }
#line 826 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__FileName_15, mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_0_20) == 0);
#line 828 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 827 "trace_counts.m"
      *mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_21 = mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_0_20;
#line 828 "trace_counts.m"
    else
#line 829 "trace_counts.m"
      {
#line 829 "trace_counts.m"
        {
#line 829 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) "file ");
        }
#line 830 "trace_counts.m"
        {
#line 830 "trace_counts.m"
          mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__FileName_15);
        }
#line 831 "trace_counts.m"
        {
#line 831 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 832 "trace_counts.m"
        *mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_21 = mdbcomp__trace_counts__FileName_15;
#line 829 "trace_counts.m"
      }
#line 845 "trace_counts.m"
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__ProcLabel_16)) == (MR_mktag((MR_Integer) 0))))
#line 842 "trace_counts.m"
      {
#line 842 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__DefModuleSym_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 0)));
#line 842 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_65_65;
#line 842 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 1)));
#line 842 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 2)));
#line 842 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 3)));
#line 842 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 4)));
#line 842 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 5)));

#line 843 "trace_counts.m"
        {
#line 843 "trace_counts.m"
          mdbcomp__trace_counts__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 843 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_8[0]));
#line 843 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 1) = ((MR_Box) (mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_1));
#line 843 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 843 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 3) = ((MR_Box) (mdbcomp__trace_counts__ModuleNameSym_14));
#line 843 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 4) = ((MR_Box) (mdbcomp__trace_counts__DefModuleSym_52));
#line 843 "trace_counts.m"
        }
#line 843 "trace_counts.m"
        {
#line 843 "trace_counts.m"
          mercury__require__require_2_p_0(mdbcomp__trace_counts__V_65_65, (MR_String) "write_proc_label_and_check: module mismatch");
        }
#line 842 "trace_counts.m"
      }
#line 845 "trace_counts.m"
    else
#line 847 "trace_counts.m"
      {
#line 848 "trace_counts.m"
        {
#line 848 "trace_counts.m"
          mercury__require__error_1_p_0((MR_String) "write_proc_label: special_pred");
#line 848 "trace_counts.m"
          return;
        }
#line 847 "trace_counts.m"
      }
#line 850 "trace_counts.m"
    {
#line 850 "trace_counts.m"
      mdbcomp__trace_counts__write_proc_label_3_p_0(mdbcomp__trace_counts__ProcLabel_16);
    }
#line 835 "trace_counts.m"
    {
#line 835 "trace_counts.m"
      mercury__map__foldl_4_p_2((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[7], mdbcomp__trace_counts__PathPortCounts_10, ((MR_Box) ((MR_Integer) 0)), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_IO_23);
    }
#line 814 "trace_counts.m"
  }
#line 809 "trace_counts.m"
}

#line 755 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_and_union_trace_counts_2_9_p_0(
#line 755 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ShowProgress_1,
#line 755 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 755 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3,
#line 755 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_FileType_4,
#line 755 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5,
#line 755 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_6,
#line 755 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__7_7)
#line 755 "trace_counts.m"
{
#line 760 "trace_counts.m"
  while (MR_TRUE)
#line 760 "trace_counts.m"
    {
#line 760 "trace_counts.m"
      /* tailcall optimized into a loop */
#line 760 "trace_counts.m"
      {
#line 760 "trace_counts.m"
        MR_bool mdbcomp__trace_counts__succeeded;

#line 760 "trace_counts.m"
        if ((mdbcomp__trace_counts__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 760 "trace_counts.m"
          {
#line 760 "trace_counts.m"
            *mdbcomp__trace_counts__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 760 "trace_counts.m"
            *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_6 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5;
#line 760 "trace_counts.m"
            *mdbcomp__trace_counts__STATE_VARIABLE_FileType_4 = mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3;
#line 760 "trace_counts.m"
          }
#line 760 "trace_counts.m"
        else
#line 762 "trace_counts.m"
          {
#line 762 "trace_counts.m"
            MR_String mdbcomp__trace_counts__FileName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 762 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__FileNames_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 762 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__TCResult_27;

#line 767 "trace_counts.m"
            if ((mdbcomp__trace_counts__ShowProgress_1 == (MR_Integer) 0))
#line 768 "trace_counts.m"
              {
#line 768 "trace_counts.m"
              }
#line 767 "trace_counts.m"
            else
#line 764 "trace_counts.m"
              {
#line 765 "trace_counts.m"
                {
#line 765 "trace_counts.m"
                  mercury__io__write_string_3_p_0(mdbcomp__trace_counts__FileName_21);
                }
#line 766 "trace_counts.m"
                {
#line 766 "trace_counts.m"
                  mercury__io__nl_2_p_0();
                }
#line 764 "trace_counts.m"
              }
#line 770 "trace_counts.m"
            {
#line 770 "trace_counts.m"
              mdbcomp__trace_counts__read_trace_counts_source_4_p_0(mdbcomp__trace_counts__FileName_21, &mdbcomp__trace_counts__TCResult_27);
            }
#line 778 "trace_counts.m"
            if (((MR_tag((MR_Word) mdbcomp__trace_counts__TCResult_27)) == (MR_mktag((MR_Integer) 1))))
#line 779 "trace_counts.m"
              {
#line 779 "trace_counts.m"
                MR_String mdbcomp__trace_counts__Message_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TCResult_27, (MR_Integer) 0)));

#line 780 "trace_counts.m"
                {
#line 780 "trace_counts.m"
                  MR_Word base;
#line 780 "trace_counts.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 780 "trace_counts.m"
                  *mdbcomp__trace_counts__HeadVar__7_7 = base;
#line 780 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__Message_29));
#line 780 "trace_counts.m"
                }
#line 780 "trace_counts.m"
                *mdbcomp__trace_counts__STATE_VARIABLE_FileType_4 = mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3;
#line 780 "trace_counts.m"
                *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_6 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5;
#line 779 "trace_counts.m"
              }
#line 778 "trace_counts.m"
            else
#line 772 "trace_counts.m"
              {
#line 772 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__FileType_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__TCResult_27, (MR_Integer) 0)));
#line 772 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__NewTraceCounts_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__TCResult_27, (MR_Integer) 1)));
#line 772 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_39_39;
#line 772 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_40_40;
#line 772 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_41_41;
#line 772 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__STATE_VARIABLE_FileType_43_43;

#line 773 "trace_counts.m"
                {
#line 773 "trace_counts.m"
                  mdbcomp__trace_counts__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_41_41, 0) = ((MR_Box) (mdbcomp__trace_counts__NewTraceCounts_28));
#line 773 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "trace_counts.m"
                }
#line 773 "trace_counts.m"
                {
#line 773 "trace_counts.m"
                  mdbcomp__trace_counts__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_39_39, 0) = ((MR_Box) (mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5));
#line 773 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_39_39, 1) = ((MR_Box) (mdbcomp__trace_counts__V_41_41));
#line 773 "trace_counts.m"
                }
#line 773 "trace_counts.m"
                {
#line 773 "trace_counts.m"
                  mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0(mdbcomp__trace_counts__V_39_39, &mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_40_40);
                }
#line 775 "trace_counts.m"
                {
#line 775 "trace_counts.m"
                  mdbcomp__trace_counts__STATE_VARIABLE_FileType_43_43 = mdbcomp__trace_counts__sum_trace_count_file_type_2_f_0(mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3, mdbcomp__trace_counts__FileType_23);
                }
#line 776 "trace_counts.m"
                /* direct tailcall eliminated */
#line 776 "trace_counts.m"
                {
#line 776 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__HeadVar__2__tmp_copy_2 = mdbcomp__trace_counts__FileNames_22;
#line 776 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_FileType_0__tmp_copy_3 = mdbcomp__trace_counts__STATE_VARIABLE_FileType_43_43;
#line 776 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0__tmp_copy_5 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_40_40;

#line 776 "trace_counts.m"
                  mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0__tmp_copy_5;
#line 776 "trace_counts.m"
                  mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3 = mdbcomp__trace_counts__STATE_VARIABLE_FileType_0__tmp_copy_3;
#line 776 "trace_counts.m"
                  mdbcomp__trace_counts__HeadVar__2_2 = mdbcomp__trace_counts__HeadVar__2__tmp_copy_2;
#line 776 "trace_counts.m"
                }
#line 776 "trace_counts.m"
                continue;
#line 772 "trace_counts.m"
              }
#line 762 "trace_counts.m"
          }
#line 760 "trace_counts.m"
      }
#line 760 "trace_counts.m"
      break;
#line 760 "trace_counts.m"
    }
#line 755 "trace_counts.m"
}

#line 642 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts__parse_path_port_line_5_p_0(
#line 642 "trace_counts.m"
  MR_String mdbcomp__trace_counts__Line_6,
#line 642 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__PathPort_7,
#line 642 "trace_counts.m"
  MR_Integer * mdbcomp__trace_counts__LineNumber_8,
#line 642 "trace_counts.m"
  MR_Integer * mdbcomp__trace_counts__ExecCount_9,
#line 642 "trace_counts.m"
  MR_Integer * mdbcomp__trace_counts__NumTests_10)
#line 642 "trace_counts.m"
{
#line 645 "trace_counts.m"
  {
#line 645 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 645 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Words_11;
#line 663 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__PathPortPrime_16;
#line 663 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__LineNumberPrime_18;
#line 663 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__ExecCountPrime_19;
#line 663 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__NumTestsPrime_20;
#line 648 "trace_counts.m"
    MR_String mdbcomp__trace_counts__Word1_12;
#line 648 "trace_counts.m"
    MR_String mdbcomp__trace_counts__LineNumberStr_13;
#line 648 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Rest_14;
#line 648 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_23_23;
#line 651 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Port_15;

#line 646 "trace_counts.m"
    {
#line 646 "trace_counts.m"
      mdbcomp__trace_counts__Words_11 = mercury__string__words_1_f_0(mdbcomp__trace_counts__Line_6);
    }
#line 648 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__Words_11)) == (MR_mktag((MR_Integer) 1)));
#line 648 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 648 "trace_counts.m"
      {
#line 648 "trace_counts.m"
        mdbcomp__trace_counts__Word1_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Words_11, (MR_Integer) 0)));
#line 648 "trace_counts.m"
        mdbcomp__trace_counts__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Words_11, (MR_Integer) 1)));
#line 648 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 648 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 648 "trace_counts.m"
          {
#line 648 "trace_counts.m"
            mdbcomp__trace_counts__LineNumberStr_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_23_23, (MR_Integer) 0)));
#line 648 "trace_counts.m"
            mdbcomp__trace_counts__Rest_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_23_23, (MR_Integer) 1)));
#line 649 "trace_counts.m"
            {
#line 649 "trace_counts.m"
              mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts__string_to_trace_port_2_p_0(mdbcomp__trace_counts__Word1_12, &mdbcomp__trace_counts__Port_15);
            }
#line 651 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 650 "trace_counts.m"
              {
#line 650 "trace_counts.m"
                {
#line 650 "trace_counts.m"
                  mdbcomp__trace_counts__PathPortPrime_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 650 "trace_counts.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__PathPortPrime_16, 0) = ((MR_Box) (mdbcomp__trace_counts__Port_15));
#line 650 "trace_counts.m"
                }
#line 650 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 650 "trace_counts.m"
              }
#line 651 "trace_counts.m"
            else
#line 653 "trace_counts.m"
              {
#line 653 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__Path_17;
#line 653 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__Length_32;
#line 653 "trace_counts.m"
                MR_String mdbcomp__trace_counts__SubString_33;
#line 653 "trace_counts.m"
                MR_String mdbcomp__trace_counts__V_35_35;
#line 653 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_36_36;
#line 653 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_37_37;
#line 653 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_38_38;

#line 709 "trace_counts.m"
                {
#line 709 "trace_counts.m"
                  mdbcomp__trace_counts__succeeded = mercury__string__prefix_2_p_0(mdbcomp__trace_counts__Word1_12, (MR_String) "<");
                }
#line 653 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 653 "trace_counts.m"
                  {
#line 710 "trace_counts.m"
                    mdbcomp__trace_counts__V_35_35 = (MR_String) ">";
#line 710 "trace_counts.m"
                    {
#line 710 "trace_counts.m"
                      mdbcomp__trace_counts__succeeded = mercury__string__suffix_2_p_0(mdbcomp__trace_counts__Word1_12, mdbcomp__trace_counts__V_35_35);
                    }
#line 653 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 653 "trace_counts.m"
                      {
#line 711 "trace_counts.m"
                        {
#line 711 "trace_counts.m"
                          mercury__string__length_2_p_0(mdbcomp__trace_counts__Word1_12, &mdbcomp__trace_counts__Length_32);
                        }
#line 712 "trace_counts.m"
                        mdbcomp__trace_counts__V_36_36 = (MR_Integer) 1;
#line 712 "trace_counts.m"
                        mdbcomp__trace_counts__V_38_38 = (MR_Integer) 1;
#line 712 "trace_counts.m"
                        mdbcomp__trace_counts__V_37_37 = (mdbcomp__trace_counts__Length_32 - mdbcomp__trace_counts__V_38_38);
#line 712 "trace_counts.m"
                        {
#line 712 "trace_counts.m"
                          mercury__string__between_4_p_0(mdbcomp__trace_counts__Word1_12, mdbcomp__trace_counts__V_36_36, mdbcomp__trace_counts__V_37_37, &mdbcomp__trace_counts__SubString_33);
                        }
#line 713 "trace_counts.m"
                        {
#line 713 "trace_counts.m"
                          mdbcomp__trace_counts__succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(mdbcomp__trace_counts__SubString_33, &mdbcomp__trace_counts__Path_17);
                        }
#line 653 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 653 "trace_counts.m"
                          {
#line 652 "trace_counts.m"
                            {
#line 652 "trace_counts.m"
                              mdbcomp__trace_counts__PathPortPrime_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 652 "trace_counts.m"
                              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__PathPortPrime_16, 0) = ((MR_Box) (mdbcomp__trace_counts__Path_17));
#line 652 "trace_counts.m"
                            }
#line 652 "trace_counts.m"
                            mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 653 "trace_counts.m"
                          }
#line 653 "trace_counts.m"
                      }
#line 653 "trace_counts.m"
                  }
#line 653 "trace_counts.m"
              }
#line 648 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 648 "trace_counts.m"
              {
#line 656 "trace_counts.m"
                {
#line 656 "trace_counts.m"
                  mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__LineNumberStr_13, &mdbcomp__trace_counts__LineNumberPrime_18);
                }
#line 648 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 676 "trace_counts.m"
                  {
#line 676 "trace_counts.m"
                    if ((mdbcomp__trace_counts__Rest_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 676 "trace_counts.m"
                      {
#line 677 "trace_counts.m"
                        mdbcomp__trace_counts__ExecCountPrime_19 = (MR_Integer) 0;
#line 678 "trace_counts.m"
                        mdbcomp__trace_counts__NumTestsPrime_20 = (MR_Integer) 1;
#line 676 "trace_counts.m"
                        mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 676 "trace_counts.m"
                      }
#line 676 "trace_counts.m"
                    else
#line 676 "trace_counts.m"
                      {
#line 676 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Rest_14, (MR_Integer) 1)));
#line 676 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Rest_14, (MR_Integer) 0)));

#line 676 "trace_counts.m"
                        if ((mdbcomp__trace_counts__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 680 "trace_counts.m"
                          {
#line 681 "trace_counts.m"
                            {
#line 681 "trace_counts.m"
                              mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__V_49_49, &mdbcomp__trace_counts__ExecCountPrime_19);
                            }
#line 680 "trace_counts.m"
                            if (mdbcomp__trace_counts__succeeded)
#line 680 "trace_counts.m"
                              {
#line 682 "trace_counts.m"
                                mdbcomp__trace_counts__NumTestsPrime_20 = (MR_Integer) 1;
#line 682 "trace_counts.m"
                                mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 680 "trace_counts.m"
                              }
#line 680 "trace_counts.m"
                          }
#line 676 "trace_counts.m"
                        else
#line 684 "trace_counts.m"
                          {
#line 684 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__NumTestsStr_43 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_48_48, (MR_Integer) 0)));
#line 684 "trace_counts.m"
                            MR_Word mdbcomp__trace_counts__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_48_48, (MR_Integer) 1)));

#line 684 "trace_counts.m"
                            mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "trace_counts.m"
                            if (mdbcomp__trace_counts__succeeded)
#line 684 "trace_counts.m"
                              {
#line 685 "trace_counts.m"
                                {
#line 685 "trace_counts.m"
                                  mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__V_49_49, &mdbcomp__trace_counts__ExecCountPrime_19);
                                }
#line 684 "trace_counts.m"
                                if (mdbcomp__trace_counts__succeeded)
#line 686 "trace_counts.m"
                                  {
#line 686 "trace_counts.m"
                                    mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__NumTestsStr_43, &mdbcomp__trace_counts__NumTestsPrime_20);
                                  }
#line 684 "trace_counts.m"
                              }
#line 684 "trace_counts.m"
                          }
#line 676 "trace_counts.m"
                      }
#line 676 "trace_counts.m"
                  }
#line 648 "trace_counts.m"
              }
#line 648 "trace_counts.m"
          }
#line 648 "trace_counts.m"
      }
#line 663 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 659 "trace_counts.m"
      {
#line 659 "trace_counts.m"
        *mdbcomp__trace_counts__PathPort_7 = mdbcomp__trace_counts__PathPortPrime_16;
#line 660 "trace_counts.m"
        *mdbcomp__trace_counts__LineNumber_8 = mdbcomp__trace_counts__LineNumberPrime_18;
#line 661 "trace_counts.m"
        *mdbcomp__trace_counts__ExecCount_9 = mdbcomp__trace_counts__ExecCountPrime_19;
#line 662 "trace_counts.m"
        *mdbcomp__trace_counts__NumTests_10 = mdbcomp__trace_counts__NumTestsPrime_20;
#line 659 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 659 "trace_counts.m"
      }
#line 663 "trace_counts.m"
    else
#line 664 "trace_counts.m"
      {
#line 664 "trace_counts.m"
        MR_String mdbcomp__trace_counts__PortStr_21;
#line 664 "trace_counts.m"
        MR_String mdbcomp__trace_counts__PathStr_22;
#line 664 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_24_24;
#line 664 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_25_25;
#line 664 "trace_counts.m"
        MR_String mdbcomp__trace_counts__LineNumberStr_26;
#line 664 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__Rest_27;
#line 664 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__Port_28;
#line 664 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__Path_29;
#line 664 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__Length_52;
#line 664 "trace_counts.m"
        MR_String mdbcomp__trace_counts__SubString_53;
#line 664 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_54_54;
#line 664 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_55_55;
#line 664 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_56_56;
#line 664 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_57_57;
#line 664 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_58_58;

#line 664 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__Words_11)) == (MR_mktag((MR_Integer) 1)));
#line 664 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 664 "trace_counts.m"
          {
#line 664 "trace_counts.m"
            mdbcomp__trace_counts__PortStr_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Words_11, (MR_Integer) 0)));
#line 664 "trace_counts.m"
            mdbcomp__trace_counts__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Words_11, (MR_Integer) 1)));
#line 664 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 664 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 664 "trace_counts.m"
              {
#line 664 "trace_counts.m"
                mdbcomp__trace_counts__PathStr_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_24_24, (MR_Integer) 0)));
#line 664 "trace_counts.m"
                mdbcomp__trace_counts__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_24_24, (MR_Integer) 1)));
#line 664 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 664 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 664 "trace_counts.m"
                  {
#line 664 "trace_counts.m"
                    mdbcomp__trace_counts__LineNumberStr_26 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_25_25, (MR_Integer) 0)));
#line 664 "trace_counts.m"
                    mdbcomp__trace_counts__Rest_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_25_25, (MR_Integer) 1)));
#line 665 "trace_counts.m"
                    {
#line 665 "trace_counts.m"
                      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts__string_to_trace_port_2_p_0(mdbcomp__trace_counts__PortStr_21, &mdbcomp__trace_counts__Port_28);
                    }
#line 664 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 664 "trace_counts.m"
                      {
#line 709 "trace_counts.m"
                        mdbcomp__trace_counts__V_54_54 = (MR_String) "<";
#line 709 "trace_counts.m"
                        {
#line 709 "trace_counts.m"
                          mdbcomp__trace_counts__succeeded = mercury__string__prefix_2_p_0(mdbcomp__trace_counts__PathStr_22, mdbcomp__trace_counts__V_54_54);
                        }
#line 664 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 664 "trace_counts.m"
                          {
#line 710 "trace_counts.m"
                            mdbcomp__trace_counts__V_55_55 = (MR_String) ">";
#line 710 "trace_counts.m"
                            {
#line 710 "trace_counts.m"
                              mdbcomp__trace_counts__succeeded = mercury__string__suffix_2_p_0(mdbcomp__trace_counts__PathStr_22, mdbcomp__trace_counts__V_55_55);
                            }
#line 664 "trace_counts.m"
                            if (mdbcomp__trace_counts__succeeded)
#line 664 "trace_counts.m"
                              {
#line 711 "trace_counts.m"
                                {
#line 711 "trace_counts.m"
                                  mercury__string__length_2_p_0(mdbcomp__trace_counts__PathStr_22, &mdbcomp__trace_counts__Length_52);
                                }
#line 712 "trace_counts.m"
                                mdbcomp__trace_counts__V_56_56 = (MR_Integer) 1;
#line 712 "trace_counts.m"
                                mdbcomp__trace_counts__V_58_58 = (MR_Integer) 1;
#line 712 "trace_counts.m"
                                mdbcomp__trace_counts__V_57_57 = (mdbcomp__trace_counts__Length_52 - mdbcomp__trace_counts__V_58_58);
#line 712 "trace_counts.m"
                                {
#line 712 "trace_counts.m"
                                  mercury__string__between_4_p_0(mdbcomp__trace_counts__PathStr_22, mdbcomp__trace_counts__V_56_56, mdbcomp__trace_counts__V_57_57, &mdbcomp__trace_counts__SubString_53);
                                }
#line 713 "trace_counts.m"
                                {
#line 713 "trace_counts.m"
                                  mdbcomp__trace_counts__succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(mdbcomp__trace_counts__SubString_53, &mdbcomp__trace_counts__Path_29);
                                }
#line 664 "trace_counts.m"
                                if (mdbcomp__trace_counts__succeeded)
#line 664 "trace_counts.m"
                                  {
#line 667 "trace_counts.m"
                                    {
#line 667 "trace_counts.m"
                                      MR_Word base;
#line 667 "trace_counts.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "trace_counts.m"
                                      *mdbcomp__trace_counts__PathPort_7 = base;
#line 667 "trace_counts.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdbcomp__trace_counts__Port_28));
#line 667 "trace_counts.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdbcomp__trace_counts__Path_29));
#line 667 "trace_counts.m"
                                    }
#line 668 "trace_counts.m"
                                    {
#line 668 "trace_counts.m"
                                      mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__LineNumberStr_26, mdbcomp__trace_counts__LineNumber_8);
                                    }
#line 664 "trace_counts.m"
                                    if (mdbcomp__trace_counts__succeeded)
#line 676 "trace_counts.m"
                                      {
#line 676 "trace_counts.m"
                                        if ((mdbcomp__trace_counts__Rest_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 676 "trace_counts.m"
                                          {
#line 677 "trace_counts.m"
                                            *mdbcomp__trace_counts__ExecCount_9 = (MR_Integer) 0;
#line 678 "trace_counts.m"
                                            *mdbcomp__trace_counts__NumTests_10 = (MR_Integer) 1;
#line 676 "trace_counts.m"
                                            mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 676 "trace_counts.m"
                                          }
#line 676 "trace_counts.m"
                                        else
#line 676 "trace_counts.m"
                                          {
#line 676 "trace_counts.m"
                                            MR_Word mdbcomp__trace_counts__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Rest_27, (MR_Integer) 1)));
#line 676 "trace_counts.m"
                                            MR_String mdbcomp__trace_counts__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Rest_27, (MR_Integer) 0)));

#line 676 "trace_counts.m"
                                            if ((mdbcomp__trace_counts__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 680 "trace_counts.m"
                                              {
#line 681 "trace_counts.m"
                                                {
#line 681 "trace_counts.m"
                                                  mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__V_69_69, mdbcomp__trace_counts__ExecCount_9);
                                                }
#line 680 "trace_counts.m"
                                                if (mdbcomp__trace_counts__succeeded)
#line 680 "trace_counts.m"
                                                  {
#line 682 "trace_counts.m"
                                                    *mdbcomp__trace_counts__NumTests_10 = (MR_Integer) 1;
#line 682 "trace_counts.m"
                                                    mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 680 "trace_counts.m"
                                                  }
#line 680 "trace_counts.m"
                                              }
#line 676 "trace_counts.m"
                                            else
#line 684 "trace_counts.m"
                                              {
#line 684 "trace_counts.m"
                                                MR_String mdbcomp__trace_counts__NumTestsStr_63 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, (MR_Integer) 0)));
#line 684 "trace_counts.m"
                                                MR_Word mdbcomp__trace_counts__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, (MR_Integer) 1)));

#line 684 "trace_counts.m"
                                                mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 684 "trace_counts.m"
                                                if (mdbcomp__trace_counts__succeeded)
#line 684 "trace_counts.m"
                                                  {
#line 685 "trace_counts.m"
                                                    {
#line 685 "trace_counts.m"
                                                      mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__V_69_69, mdbcomp__trace_counts__ExecCount_9);
                                                    }
#line 684 "trace_counts.m"
                                                    if (mdbcomp__trace_counts__succeeded)
#line 686 "trace_counts.m"
                                                      {
#line 686 "trace_counts.m"
                                                        return mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__NumTestsStr_63, mdbcomp__trace_counts__NumTests_10);
                                                      }
#line 684 "trace_counts.m"
                                                  }
#line 684 "trace_counts.m"
                                              }
#line 676 "trace_counts.m"
                                          }
#line 676 "trace_counts.m"
                                      }
#line 664 "trace_counts.m"
                                  }
#line 664 "trace_counts.m"
                              }
#line 664 "trace_counts.m"
                          }
#line 664 "trace_counts.m"
                      }
#line 664 "trace_counts.m"
                  }
#line 664 "trace_counts.m"
              }
#line 664 "trace_counts.m"
          }
#line 664 "trace_counts.m"
      }
#line 645 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 645 "trace_counts.m"
  }
#line 642 "trace_counts.m"
}

#line 609 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_2_6_p_0(
#line 609 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_7,
#line 609 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcCounts0_8,
#line 609 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_22,
#line 609 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_23)
#line 609 "trace_counts.m"
{
#line 613 "trace_counts.m"
  while (MR_TRUE)
#line 613 "trace_counts.m"
    {
#line 613 "trace_counts.m"
      /* tailcall optimized into a loop */
#line 613 "trace_counts.m"
      {
#line 613 "trace_counts.m"
        MR_bool mdbcomp__trace_counts__succeeded;
#line 613 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__Result_11;

#line 614 "trace_counts.m"
        {
#line 614 "trace_counts.m"
          mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__Result_11);
        }
#line 634 "trace_counts.m"
        if ((mdbcomp__trace_counts__Result_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "trace_counts.m"
          {
#line 636 "trace_counts.m"
            {
#line 636 "trace_counts.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContext_7)), ((MR_Box) (mdbcomp__trace_counts__ProcCounts0_8)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_22, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_23);
#line 636 "trace_counts.m"
              return;
            }
#line 635 "trace_counts.m"
          }
#line 634 "trace_counts.m"
        else
#line 634 "trace_counts.m"
          if (((MR_tag((MR_Word) mdbcomp__trace_counts__Result_11)) == (MR_mktag((MR_Integer) 2))))
#line 638 "trace_counts.m"
            {
#line 638 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__Error_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_11, (MR_Integer) 0)));

#line 639 "trace_counts.m"
              {
#line 639 "trace_counts.m"
                mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_21)));
#line 639 "trace_counts.m"
                return;
              }
#line 638 "trace_counts.m"
            }
#line 634 "trace_counts.m"
          else
#line 616 "trace_counts.m"
            {
#line 616 "trace_counts.m"
              MR_String mdbcomp__trace_counts__Line_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_11, (MR_Integer) 0)));
#line 626 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__PathPort_13;
#line 626 "trace_counts.m"
              MR_Integer mdbcomp__trace_counts__LineNumber_14;
#line 626 "trace_counts.m"
              MR_Integer mdbcomp__trace_counts__ExecCount_15;
#line 626 "trace_counts.m"
              MR_Integer mdbcomp__trace_counts__NumTests_16;

#line 618 "trace_counts.m"
              {
#line 618 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts__parse_path_port_line_5_p_0(mdbcomp__trace_counts__Line_12, &mdbcomp__trace_counts__PathPort_13, &mdbcomp__trace_counts__LineNumber_14, &mdbcomp__trace_counts__ExecCount_15, &mdbcomp__trace_counts__NumTests_16);
              }
#line 626 "trace_counts.m"
              if (mdbcomp__trace_counts__succeeded)
#line 622 "trace_counts.m"
                {
#line 622 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__LineNoAndCount_17;
#line 622 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__ProcCounts_18;

#line 621 "trace_counts.m"
                  {
#line 621 "trace_counts.m"
                    mdbcomp__trace_counts__LineNoAndCount_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "trace_counts.m"
                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoAndCount_17, 0) = ((MR_Box) (mdbcomp__trace_counts__LineNumber_14));
#line 621 "trace_counts.m"
                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoAndCount_17, 1) = ((MR_Box) (mdbcomp__trace_counts__ExecCount_15));
#line 621 "trace_counts.m"
                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoAndCount_17, 2) = ((MR_Box) (mdbcomp__trace_counts__NumTests_16));
#line 621 "trace_counts.m"
                  }
#line 623 "trace_counts.m"
                  {
#line 623 "trace_counts.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, ((MR_Box) (mdbcomp__trace_counts__PathPort_13)), ((MR_Box) (mdbcomp__trace_counts__LineNoAndCount_17)), mdbcomp__trace_counts__ProcCounts0_8, &mdbcomp__trace_counts__ProcCounts_18);
                  }
#line 624 "trace_counts.m"
                  /* direct tailcall eliminated */
#line 624 "trace_counts.m"
                  {
#line 624 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__ProcCounts0__tmp_copy_8 = mdbcomp__trace_counts__ProcCounts_18;

#line 624 "trace_counts.m"
                    mdbcomp__trace_counts__ProcCounts0_8 = mdbcomp__trace_counts__ProcCounts0__tmp_copy_8;
#line 624 "trace_counts.m"
                  }
#line 624 "trace_counts.m"
                  continue;
#line 622 "trace_counts.m"
                }
#line 626 "trace_counts.m"
              else
#line 627 "trace_counts.m"
                {
#line 627 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__CurModuleNameSym_19;
#line 627 "trace_counts.m"
                  MR_String mdbcomp__trace_counts__CurFileName_20;
#line 627 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_30_30;
#line 627 "trace_counts.m"
                  MR_Integer mdbcomp__trace_counts__LineNumber_34;
#line 629 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__V_36_36;

#line 627 "trace_counts.m"
                  {
#line 627 "trace_counts.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContext_7)), ((MR_Box) (mdbcomp__trace_counts__ProcCounts0_8)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_22, &mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_30_30);
                  }
#line 628 "trace_counts.m"
                  {
#line 628 "trace_counts.m"
                    mercury__io__get_line_number_3_p_0(&mdbcomp__trace_counts__LineNumber_34);
                  }
#line 629 "trace_counts.m"
                  mdbcomp__trace_counts__CurModuleNameSym_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 0)));
#line 629 "trace_counts.m"
                  mdbcomp__trace_counts__CurFileName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 1)));
#line 629 "trace_counts.m"
                  mdbcomp__trace_counts__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 2)));
#line 631 "trace_counts.m"
                  {
#line 631 "trace_counts.m"
                    mdbcomp__trace_counts__read_proc_trace_counts_8_p_0(mdbcomp__trace_counts__LineNumber_34, mdbcomp__trace_counts__Line_12, mdbcomp__trace_counts__CurModuleNameSym_19, mdbcomp__trace_counts__CurFileName_20, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_30_30, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_23);
#line 631 "trace_counts.m"
                    return;
                  }
#line 627 "trace_counts.m"
                }
#line 616 "trace_counts.m"
            }
#line 613 "trace_counts.m"
      }
#line 613 "trace_counts.m"
      break;
#line 613 "trace_counts.m"
    }
#line 609 "trace_counts.m"
}

#line 496 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_8_p_0(
#line 496 "trace_counts.m"
  MR_Integer mdbcomp__trace_counts__HeaderLineNumber_9,
#line 496 "trace_counts.m"
  MR_String mdbcomp__trace_counts__HeaderLine_10,
#line 496 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__CurModuleNameSym_11,
#line 496 "trace_counts.m"
  MR_String mdbcomp__trace_counts__CurFileName_12,
#line 496 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53,
#line 496 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54)
#line 496 "trace_counts.m"
{
#line 500 "trace_counts.m"
  while (MR_TRUE)
#line 500 "trace_counts.m"
    {
#line 500 "trace_counts.m"
      /* tailcall optimized into a loop */
#line 500 "trace_counts.m"
      {
#line 500 "trace_counts.m"
        MR_bool mdbcomp__trace_counts__succeeded;
#line 500 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__TokenList_15;
#line 500 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_57_57;
#line 500 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_58_58;
#line 501 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_16_16;
#line 603 "trace_counts.m"
        MR_String mdbcomp__trace_counts__TokenName_17;
#line 603 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__TokenListRest_19;
#line 503 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_61_61;
#line 503 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_18_18;

#line 501 "trace_counts.m"
        {
#line 501 "trace_counts.m"
          mdbcomp__trace_counts__V_57_57 = mercury__string__length_1_f_0(mdbcomp__trace_counts__HeaderLine_10);
        }
#line 502 "trace_counts.m"
        {
#line 502 "trace_counts.m"
          mdbcomp__trace_counts__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 502 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_58_58, 0) = ((MR_Box) (mdbcomp__trace_counts__HeaderLineNumber_9));
#line 502 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_58_58, 1) = ((MR_Box) ((MR_Integer) 1));
#line 502 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_58_58, 2) = ((MR_Box) ((MR_Integer) 0));
#line 502 "trace_counts.m"
        }
#line 501 "trace_counts.m"
        {
#line 501 "trace_counts.m"
          mercury__lexer__string_get_token_list_max_5_p_0(mdbcomp__trace_counts__HeaderLine_10, mdbcomp__trace_counts__V_57_57, &mdbcomp__trace_counts__TokenList_15, mdbcomp__trace_counts__V_58_58, &mdbcomp__trace_counts__V_16_16);
        }
#line 503 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TokenList_15)) == (MR_mktag((MR_Integer) 1)));
#line 503 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 503 "trace_counts.m"
          {
#line 503 "trace_counts.m"
            mdbcomp__trace_counts__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenList_15, (MR_Integer) 0)));
#line 503 "trace_counts.m"
            mdbcomp__trace_counts__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenList_15, (MR_Integer) 1)));
#line 503 "trace_counts.m"
            mdbcomp__trace_counts__TokenListRest_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenList_15, (MR_Integer) 2)));
#line 503 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 503 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 503 "trace_counts.m"
              mdbcomp__trace_counts__TokenName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_61_61, (MR_Integer) 0)));
#line 503 "trace_counts.m"
          }
#line 603 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 523 "trace_counts.m"
          {
#line 523 "trace_counts.m"
            MR_String mdbcomp__trace_counts__NextModuleName_20;
#line 505 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_62_62;
#line 505 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_63_63;
#line 507 "trace_counts.m"
            MR_Integer mdbcomp__trace_counts__V_21_21;

#line 505 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__TokenName_17, (MR_String) "module") == 0);
#line 505 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 505 "trace_counts.m"
              {
#line 507 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TokenListRest_19)) == (MR_mktag((MR_Integer) 1)));
#line 507 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 507 "trace_counts.m"
                  {
#line 507 "trace_counts.m"
                    mdbcomp__trace_counts__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 0)));
#line 507 "trace_counts.m"
                    mdbcomp__trace_counts__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 1)));
#line 507 "trace_counts.m"
                    mdbcomp__trace_counts__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 2)));
#line 508 "trace_counts.m"
                    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 505 "trace_counts.m"
                      {
#line 507 "trace_counts.m"
                        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 507 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 507 "trace_counts.m"
                          mdbcomp__trace_counts__NextModuleName_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_62_62, (MR_Integer) 0)));
#line 505 "trace_counts.m"
                      }
#line 507 "trace_counts.m"
                  }
#line 505 "trace_counts.m"
              }
#line 523 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 510 "trace_counts.m"
              {
#line 510 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__NextModuleNameSym_22;
#line 510 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__Result_23;

#line 510 "trace_counts.m"
                {
#line 510 "trace_counts.m"
                  mdbcomp__trace_counts__NextModuleNameSym_22 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__trace_counts__NextModuleName_20);
                }
#line 511 "trace_counts.m"
                {
#line 511 "trace_counts.m"
                  mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__Result_23);
                }
#line 517 "trace_counts.m"
                if ((mdbcomp__trace_counts__Result_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "trace_counts.m"
                  *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53;
#line 517 "trace_counts.m"
                else
#line 517 "trace_counts.m"
                  if (((MR_tag((MR_Word) mdbcomp__trace_counts__Result_23)) == (MR_mktag((MR_Integer) 2))))
#line 520 "trace_counts.m"
                    {
#line 520 "trace_counts.m"
                      MR_Word mdbcomp__trace_counts__Error_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_23, (MR_Integer) 0)));

#line 521 "trace_counts.m"
                      {
#line 521 "trace_counts.m"
                        mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_26)));
#line 521 "trace_counts.m"
                        return;
                      }
#line 520 "trace_counts.m"
                    }
#line 517 "trace_counts.m"
                  else
#line 513 "trace_counts.m"
                    {
#line 513 "trace_counts.m"
                      MR_String mdbcomp__trace_counts__Line_24 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_23, (MR_Integer) 0)));
#line 513 "trace_counts.m"
                      MR_Integer mdbcomp__trace_counts__LineNumber_25;

#line 514 "trace_counts.m"
                      {
#line 514 "trace_counts.m"
                        mercury__io__get_line_number_3_p_0(&mdbcomp__trace_counts__LineNumber_25);
                      }
#line 515 "trace_counts.m"
                      /* direct tailcall eliminated */
#line 515 "trace_counts.m"
                      {
#line 515 "trace_counts.m"
                        MR_Integer mdbcomp__trace_counts__HeaderLineNumber__tmp_copy_9 = mdbcomp__trace_counts__LineNumber_25;
#line 515 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__HeaderLine__tmp_copy_10 = mdbcomp__trace_counts__Line_24;
#line 515 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__CurModuleNameSym__tmp_copy_11 = mdbcomp__trace_counts__NextModuleNameSym_22;

#line 515 "trace_counts.m"
                        mdbcomp__trace_counts__CurModuleNameSym_11 = mdbcomp__trace_counts__CurModuleNameSym__tmp_copy_11;
#line 515 "trace_counts.m"
                        mdbcomp__trace_counts__HeaderLine_10 = mdbcomp__trace_counts__HeaderLine__tmp_copy_10;
#line 515 "trace_counts.m"
                        mdbcomp__trace_counts__HeaderLineNumber_9 = mdbcomp__trace_counts__HeaderLineNumber__tmp_copy_9;
#line 515 "trace_counts.m"
                      }
#line 515 "trace_counts.m"
                      continue;
#line 513 "trace_counts.m"
                    }
#line 510 "trace_counts.m"
              }
#line 523 "trace_counts.m"
            else
#line 541 "trace_counts.m"
              {
#line 541 "trace_counts.m"
                MR_String mdbcomp__trace_counts__NextFileName_27;
#line 524 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_68_68;
#line 524 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_69_69;
#line 526 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_28_28;

#line 524 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__TokenName_17, (MR_String) "file") == 0);
#line 524 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 524 "trace_counts.m"
                  {
#line 526 "trace_counts.m"
                    mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TokenListRest_19)) == (MR_mktag((MR_Integer) 1)));
#line 526 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 526 "trace_counts.m"
                      {
#line 526 "trace_counts.m"
                        mdbcomp__trace_counts__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 0)));
#line 526 "trace_counts.m"
                        mdbcomp__trace_counts__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 1)));
#line 526 "trace_counts.m"
                        mdbcomp__trace_counts__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 2)));
#line 527 "trace_counts.m"
                        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 524 "trace_counts.m"
                          {
#line 526 "trace_counts.m"
                            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_68_68)) == (MR_mktag((MR_Integer) 1)));
#line 526 "trace_counts.m"
                            if (mdbcomp__trace_counts__succeeded)
#line 526 "trace_counts.m"
                              mdbcomp__trace_counts__NextFileName_27 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, (MR_Integer) 0)));
#line 524 "trace_counts.m"
                          }
#line 526 "trace_counts.m"
                      }
#line 524 "trace_counts.m"
                  }
#line 541 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 529 "trace_counts.m"
                  {
#line 529 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__Result_128;

#line 529 "trace_counts.m"
                    {
#line 529 "trace_counts.m"
                      mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__Result_128);
                    }
#line 535 "trace_counts.m"
                    if ((mdbcomp__trace_counts__Result_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 536 "trace_counts.m"
                      *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53;
#line 535 "trace_counts.m"
                    else
#line 535 "trace_counts.m"
                      if (((MR_tag((MR_Word) mdbcomp__trace_counts__Result_128)) == (MR_mktag((MR_Integer) 2))))
#line 538 "trace_counts.m"
                        {
#line 538 "trace_counts.m"
                          MR_Word mdbcomp__trace_counts__Error_124 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_128, (MR_Integer) 0)));

#line 539 "trace_counts.m"
                          {
#line 539 "trace_counts.m"
                            mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_124)));
#line 539 "trace_counts.m"
                            return;
                          }
#line 538 "trace_counts.m"
                        }
#line 535 "trace_counts.m"
                      else
#line 531 "trace_counts.m"
                        {
#line 531 "trace_counts.m"
                          MR_String mdbcomp__trace_counts__Line_122 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_128, (MR_Integer) 0)));
#line 531 "trace_counts.m"
                          MR_Integer mdbcomp__trace_counts__LineNumber_123;

#line 532 "trace_counts.m"
                          {
#line 532 "trace_counts.m"
                            mercury__io__get_line_number_3_p_0(&mdbcomp__trace_counts__LineNumber_123);
                          }
#line 533 "trace_counts.m"
                          /* direct tailcall eliminated */
#line 533 "trace_counts.m"
                          {
#line 533 "trace_counts.m"
                            MR_Integer mdbcomp__trace_counts__HeaderLineNumber__tmp_copy_9 = mdbcomp__trace_counts__LineNumber_123;
#line 533 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__HeaderLine__tmp_copy_10 = mdbcomp__trace_counts__Line_122;
#line 533 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__CurFileName__tmp_copy_12 = mdbcomp__trace_counts__NextFileName_27;

#line 533 "trace_counts.m"
                            mdbcomp__trace_counts__CurFileName_12 = mdbcomp__trace_counts__CurFileName__tmp_copy_12;
#line 533 "trace_counts.m"
                            mdbcomp__trace_counts__HeaderLine_10 = mdbcomp__trace_counts__HeaderLine__tmp_copy_10;
#line 533 "trace_counts.m"
                            mdbcomp__trace_counts__HeaderLineNumber_9 = mdbcomp__trace_counts__HeaderLineNumber__tmp_copy_9;
#line 533 "trace_counts.m"
                          }
#line 533 "trace_counts.m"
                          continue;
#line 531 "trace_counts.m"
                        }
#line 529 "trace_counts.m"
                  }
#line 541 "trace_counts.m"
                else
#line 598 "trace_counts.m"
                  {
#line 598 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__ProcLabel_35;
#line 553 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__V_156_156;
#line 553 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__V_158_158;
#line 553 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__V_159_159;
#line 553 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__V_161_161;
#line 553 "trace_counts.m"
                    MR_String mdbcomp__trace_counts__V_162_162;
#line 553 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__V_163_163;
#line 553 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__V_165_165;
#line 553 "trace_counts.m"
                    MR_Integer mdbcomp__trace_counts__V_166_166;
#line 556 "trace_counts.m"
                    MR_Integer mdbcomp__trace_counts__V_157_157;
#line 557 "trace_counts.m"
                    MR_Integer mdbcomp__trace_counts__V_160_160;
#line 558 "trace_counts.m"
                    MR_Integer mdbcomp__trace_counts__V_164_164;

#line 556 "trace_counts.m"
                    mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TokenListRest_19)) == (MR_mktag((MR_Integer) 1)));
#line 556 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 556 "trace_counts.m"
                      {
#line 556 "trace_counts.m"
                        mdbcomp__trace_counts__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 0)));
#line 556 "trace_counts.m"
                        mdbcomp__trace_counts__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 1)));
#line 556 "trace_counts.m"
                        mdbcomp__trace_counts__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 2)));
#line 557 "trace_counts.m"
                        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_156_156)) == (MR_mktag((MR_Integer) 1)));
#line 557 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 557 "trace_counts.m"
                          {
#line 557 "trace_counts.m"
                            mdbcomp__trace_counts__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_156_156, (MR_Integer) 0)));
#line 557 "trace_counts.m"
                            mdbcomp__trace_counts__V_160_160 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_156_156, (MR_Integer) 1)));
#line 557 "trace_counts.m"
                            mdbcomp__trace_counts__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_156_156, (MR_Integer) 2)));
#line 556 "trace_counts.m"
                            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_158_158)) == (MR_mktag((MR_Integer) 1)));
#line 556 "trace_counts.m"
                            if (mdbcomp__trace_counts__succeeded)
#line 556 "trace_counts.m"
                              {
#line 556 "trace_counts.m"
                                mdbcomp__trace_counts__V_162_162 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_158_158, (MR_Integer) 0)));
#line 558 "trace_counts.m"
                                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_159_159)) == (MR_mktag((MR_Integer) 1)));
#line 558 "trace_counts.m"
                                if (mdbcomp__trace_counts__succeeded)
#line 558 "trace_counts.m"
                                  {
#line 558 "trace_counts.m"
                                    mdbcomp__trace_counts__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_159_159, (MR_Integer) 0)));
#line 558 "trace_counts.m"
                                    mdbcomp__trace_counts__V_164_164 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_159_159, (MR_Integer) 1)));
#line 558 "trace_counts.m"
                                    mdbcomp__trace_counts__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_159_159, (MR_Integer) 2)));
#line 558 "trace_counts.m"
                                    mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_165_165)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_165_165, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 558 "trace_counts.m"
                                    if (mdbcomp__trace_counts__succeeded)
#line 558 "trace_counts.m"
                                      {
#line 558 "trace_counts.m"
                                        mdbcomp__trace_counts__V_166_166 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_165_165, (MR_Integer) 1)));
#line 553 "trace_counts.m"
                                        if ((strcmp(mdbcomp__trace_counts__TokenName_17, (MR_String) "fproc") == 0))
#line 554 "trace_counts.m"
                                          {
#line 554 "trace_counts.m"
                                            MR_Word mdbcomp__trace_counts__V_98_98;
#line 554 "trace_counts.m"
                                            MR_Integer mdbcomp__trace_counts__Arity_133;

#line 559 "trace_counts.m"
                                            mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "trace_counts.m"
                                            if (mdbcomp__trace_counts__succeeded)
#line 554 "trace_counts.m"
                                              {
#line 557 "trace_counts.m"
                                                mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_161_161)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_161_161, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 557 "trace_counts.m"
                                                if (mdbcomp__trace_counts__succeeded)
#line 557 "trace_counts.m"
                                                  {
#line 557 "trace_counts.m"
                                                    mdbcomp__trace_counts__Arity_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_161_161, (MR_Integer) 1)));
#line 560 "trace_counts.m"
                                                    mdbcomp__trace_counts__V_98_98 = (MR_Integer) 1;
#line 560 "trace_counts.m"
                                                    {
#line 560 "trace_counts.m"
                                                      mdbcomp__trace_counts__ProcLabel_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 560 "trace_counts.m"
                                                      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
#line 560 "trace_counts.m"
                                                      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 1) = ((MR_Box) (mdbcomp__trace_counts__V_98_98));
#line 560 "trace_counts.m"
                                                      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 2) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
#line 560 "trace_counts.m"
                                                      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 3) = ((MR_Box) (mdbcomp__trace_counts__V_162_162));
#line 560 "trace_counts.m"
                                                      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 4) = ((MR_Box) (mdbcomp__trace_counts__Arity_133));
#line 560 "trace_counts.m"
                                                      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 5) = ((MR_Box) (mdbcomp__trace_counts__V_166_166));
#line 560 "trace_counts.m"
                                                    }
#line 560 "trace_counts.m"
                                                    mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 557 "trace_counts.m"
                                                  }
#line 554 "trace_counts.m"
                                              }
#line 554 "trace_counts.m"
                                          }
#line 553 "trace_counts.m"
                                        else
#line 553 "trace_counts.m"
                                          if ((strcmp(mdbcomp__trace_counts__TokenName_17, (MR_String) "pproc") == 0))
#line 545 "trace_counts.m"
                                            {
#line 545 "trace_counts.m"
                                              MR_Integer mdbcomp__trace_counts__Arity_31;
#line 545 "trace_counts.m"
                                              MR_Word mdbcomp__trace_counts__V_106_106;

#line 550 "trace_counts.m"
                                              mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "trace_counts.m"
                                              if (mdbcomp__trace_counts__succeeded)
#line 545 "trace_counts.m"
                                                {
#line 548 "trace_counts.m"
                                                  mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_161_161)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_161_161, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 548 "trace_counts.m"
                                                  if (mdbcomp__trace_counts__succeeded)
#line 548 "trace_counts.m"
                                                    {
#line 548 "trace_counts.m"
                                                      mdbcomp__trace_counts__Arity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_161_161, (MR_Integer) 1)));
#line 551 "trace_counts.m"
                                                      mdbcomp__trace_counts__V_106_106 = (MR_Integer) 0;
#line 551 "trace_counts.m"
                                                      {
#line 551 "trace_counts.m"
                                                        mdbcomp__trace_counts__ProcLabel_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 551 "trace_counts.m"
                                                        MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
#line 551 "trace_counts.m"
                                                        MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 1) = ((MR_Box) (mdbcomp__trace_counts__V_106_106));
#line 551 "trace_counts.m"
                                                        MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 2) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
#line 551 "trace_counts.m"
                                                        MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 3) = ((MR_Box) (mdbcomp__trace_counts__V_162_162));
#line 551 "trace_counts.m"
                                                        MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 4) = ((MR_Box) (mdbcomp__trace_counts__Arity_31));
#line 551 "trace_counts.m"
                                                        MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 5) = ((MR_Box) (mdbcomp__trace_counts__V_166_166));
#line 551 "trace_counts.m"
                                                      }
#line 551 "trace_counts.m"
                                                      mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 548 "trace_counts.m"
                                                    }
#line 545 "trace_counts.m"
                                                }
#line 545 "trace_counts.m"
                                            }
#line 553 "trace_counts.m"
                                          else
#line 553 "trace_counts.m"
                                            if ((strcmp(mdbcomp__trace_counts__TokenName_17, (MR_String) "fprocdecl") == 0))
#line 574 "trace_counts.m"
                                              {
#line 574 "trace_counts.m"
                                                MR_Word mdbcomp__trace_counts__V_80_80;
#line 574 "trace_counts.m"
                                                MR_Word mdbcomp__trace_counts__V_81_81;
#line 574 "trace_counts.m"
                                                MR_Word mdbcomp__trace_counts__V_82_82;
#line 574 "trace_counts.m"
                                                MR_String mdbcomp__trace_counts__Name_138;
#line 574 "trace_counts.m"
                                                MR_Integer mdbcomp__trace_counts__Mode_140;
#line 574 "trace_counts.m"
                                                MR_Word mdbcomp__trace_counts__DeclModuleNameSym_142;
#line 579 "trace_counts.m"
                                                MR_Integer mdbcomp__trace_counts__V_48_48;

#line 577 "trace_counts.m"
                                                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_161_161)) == (MR_mktag((MR_Integer) 1)));
#line 577 "trace_counts.m"
                                                if (mdbcomp__trace_counts__succeeded)
#line 577 "trace_counts.m"
                                                  {
#line 577 "trace_counts.m"
                                                    mdbcomp__trace_counts__Name_138 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_161_161, (MR_Integer) 0)));
#line 579 "trace_counts.m"
                                                    mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_163_163)) == (MR_mktag((MR_Integer) 1)));
#line 579 "trace_counts.m"
                                                    if (mdbcomp__trace_counts__succeeded)
#line 579 "trace_counts.m"
                                                      {
#line 579 "trace_counts.m"
                                                        mdbcomp__trace_counts__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 0)));
#line 579 "trace_counts.m"
                                                        mdbcomp__trace_counts__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 1)));
#line 579 "trace_counts.m"
                                                        mdbcomp__trace_counts__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 2)));
#line 580 "trace_counts.m"
                                                        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 574 "trace_counts.m"
                                                        if (mdbcomp__trace_counts__succeeded)
#line 574 "trace_counts.m"
                                                          {
#line 579 "trace_counts.m"
                                                            mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_80_80)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_80_80, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 579 "trace_counts.m"
                                                            if (mdbcomp__trace_counts__succeeded)
#line 579 "trace_counts.m"
                                                              {
#line 579 "trace_counts.m"
                                                                mdbcomp__trace_counts__Mode_140 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_80_80, (MR_Integer) 1)));
#line 581 "trace_counts.m"
                                                                {
#line 581 "trace_counts.m"
                                                                  mdbcomp__trace_counts__DeclModuleNameSym_142 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__trace_counts__V_162_162);
                                                                }
#line 582 "trace_counts.m"
                                                                mdbcomp__trace_counts__V_82_82 = (MR_Integer) 1;
#line 582 "trace_counts.m"
                                                                {
#line 582 "trace_counts.m"
                                                                  mdbcomp__trace_counts__ProcLabel_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 582 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
#line 582 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 1) = ((MR_Box) (mdbcomp__trace_counts__V_82_82));
#line 582 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 2) = ((MR_Box) (mdbcomp__trace_counts__DeclModuleNameSym_142));
#line 582 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 3) = ((MR_Box) (mdbcomp__trace_counts__Name_138));
#line 582 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 4) = ((MR_Box) (mdbcomp__trace_counts__V_166_166));
#line 582 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 5) = ((MR_Box) (mdbcomp__trace_counts__Mode_140));
#line 582 "trace_counts.m"
                                                                }
#line 582 "trace_counts.m"
                                                                mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 579 "trace_counts.m"
                                                              }
#line 574 "trace_counts.m"
                                                          }
#line 579 "trace_counts.m"
                                                      }
#line 577 "trace_counts.m"
                                                  }
#line 574 "trace_counts.m"
                                              }
#line 553 "trace_counts.m"
                                            else
#line 553 "trace_counts.m"
                                              if ((strcmp(mdbcomp__trace_counts__TokenName_17, (MR_String) "pprocdecl") == 0))
#line 563 "trace_counts.m"
                                                {
#line 563 "trace_counts.m"
                                                  MR_Word mdbcomp__trace_counts__DeclModuleNameSym_44;
#line 563 "trace_counts.m"
                                                  MR_Word mdbcomp__trace_counts__V_89_89;
#line 563 "trace_counts.m"
                                                  MR_Word mdbcomp__trace_counts__V_90_90;
#line 563 "trace_counts.m"
                                                  MR_Word mdbcomp__trace_counts__V_91_91;
#line 563 "trace_counts.m"
                                                  MR_String mdbcomp__trace_counts__Name_135;
#line 563 "trace_counts.m"
                                                  MR_Integer mdbcomp__trace_counts__Mode_137;
#line 568 "trace_counts.m"
                                                  MR_Integer mdbcomp__trace_counts__V_43_43;

#line 566 "trace_counts.m"
                                                  mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_161_161)) == (MR_mktag((MR_Integer) 1)));
#line 566 "trace_counts.m"
                                                  if (mdbcomp__trace_counts__succeeded)
#line 566 "trace_counts.m"
                                                    {
#line 566 "trace_counts.m"
                                                      mdbcomp__trace_counts__Name_135 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_161_161, (MR_Integer) 0)));
#line 568 "trace_counts.m"
                                                      mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_163_163)) == (MR_mktag((MR_Integer) 1)));
#line 568 "trace_counts.m"
                                                      if (mdbcomp__trace_counts__succeeded)
#line 568 "trace_counts.m"
                                                        {
#line 568 "trace_counts.m"
                                                          mdbcomp__trace_counts__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 0)));
#line 568 "trace_counts.m"
                                                          mdbcomp__trace_counts__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 1)));
#line 568 "trace_counts.m"
                                                          mdbcomp__trace_counts__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 2)));
#line 569 "trace_counts.m"
                                                          mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "trace_counts.m"
                                                          if (mdbcomp__trace_counts__succeeded)
#line 563 "trace_counts.m"
                                                            {
#line 568 "trace_counts.m"
                                                              mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_89_89)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_89_89, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 568 "trace_counts.m"
                                                              if (mdbcomp__trace_counts__succeeded)
#line 568 "trace_counts.m"
                                                                {
#line 568 "trace_counts.m"
                                                                  mdbcomp__trace_counts__Mode_137 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_89_89, (MR_Integer) 1)));
#line 570 "trace_counts.m"
                                                                  {
#line 570 "trace_counts.m"
                                                                    mdbcomp__trace_counts__DeclModuleNameSym_44 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__trace_counts__V_162_162);
                                                                  }
#line 571 "trace_counts.m"
                                                                  mdbcomp__trace_counts__V_91_91 = (MR_Integer) 0;
#line 571 "trace_counts.m"
                                                                  {
#line 571 "trace_counts.m"
                                                                    mdbcomp__trace_counts__ProcLabel_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 571 "trace_counts.m"
                                                                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
#line 571 "trace_counts.m"
                                                                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 1) = ((MR_Box) (mdbcomp__trace_counts__V_91_91));
#line 571 "trace_counts.m"
                                                                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 2) = ((MR_Box) (mdbcomp__trace_counts__DeclModuleNameSym_44));
#line 571 "trace_counts.m"
                                                                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 3) = ((MR_Box) (mdbcomp__trace_counts__Name_135));
#line 571 "trace_counts.m"
                                                                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 4) = ((MR_Box) (mdbcomp__trace_counts__V_166_166));
#line 571 "trace_counts.m"
                                                                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 5) = ((MR_Box) (mdbcomp__trace_counts__Mode_137));
#line 571 "trace_counts.m"
                                                                  }
#line 571 "trace_counts.m"
                                                                  mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 568 "trace_counts.m"
                                                                }
#line 563 "trace_counts.m"
                                                            }
#line 568 "trace_counts.m"
                                                        }
#line 566 "trace_counts.m"
                                                    }
#line 563 "trace_counts.m"
                                                }
#line 553 "trace_counts.m"
                                              else
#line 553 "trace_counts.m"
                                                mdbcomp__trace_counts__succeeded = MR_FALSE;
#line 558 "trace_counts.m"
                                      }
#line 558 "trace_counts.m"
                                  }
#line 556 "trace_counts.m"
                              }
#line 557 "trace_counts.m"
                          }
#line 556 "trace_counts.m"
                      }
#line 598 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 587 "trace_counts.m"
                      {
#line 587 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__ProcLabelInContext_49;
#line 587 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__StartCounts_51;
#line 587 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_109_109;
#line 593 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__ProbeCounts_50;
#line 593 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_108_108;
#line 591 "trace_counts.m"
                        MR_Box mdbcomp__trace_counts__conv0_ProbeCounts_50;

#line 586 "trace_counts.m"
                        {
#line 586 "trace_counts.m"
                          mdbcomp__trace_counts__ProcLabelInContext_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 586 "trace_counts.m"
                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_49, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
#line 586 "trace_counts.m"
                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_49, 1) = ((MR_Box) (mdbcomp__trace_counts__CurFileName_12));
#line 586 "trace_counts.m"
                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_49, 2) = ((MR_Box) (mdbcomp__trace_counts__ProcLabel_35));
#line 586 "trace_counts.m"
                        }
#line 591 "trace_counts.m"
                        {
#line 591 "trace_counts.m"
                          mdbcomp__trace_counts__succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContext_49)), &mdbcomp__trace_counts__conv0_ProbeCounts_50, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53, &mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_108_108);
                        }
#line 591 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 591 "trace_counts.m"
                          {
#line 591 "trace_counts.m"
                            mdbcomp__trace_counts__ProbeCounts_50 = ((MR_Word) mdbcomp__trace_counts__conv0_ProbeCounts_50);
#line 591 "trace_counts.m"
                            mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 591 "trace_counts.m"
                          }
#line 593 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 592 "trace_counts.m"
                          {
#line 592 "trace_counts.m"
                            mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_109_109 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_108_108;
#line 592 "trace_counts.m"
                            mdbcomp__trace_counts__StartCounts_51 = mdbcomp__trace_counts__ProbeCounts_50;
#line 592 "trace_counts.m"
                          }
#line 593 "trace_counts.m"
                        else
#line 594 "trace_counts.m"
                          {
#line 594 "trace_counts.m"
                            {
#line 594 "trace_counts.m"
                              mdbcomp__trace_counts__StartCounts_51 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0);
                            }
#line 594 "trace_counts.m"
                            mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_109_109 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53;
#line 594 "trace_counts.m"
                          }
#line 596 "trace_counts.m"
                        {
#line 596 "trace_counts.m"
                          mdbcomp__trace_counts__read_proc_trace_counts_2_6_p_0(mdbcomp__trace_counts__ProcLabelInContext_49, mdbcomp__trace_counts__StartCounts_51, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_109_109, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54);
#line 596 "trace_counts.m"
                          return;
                        }
#line 587 "trace_counts.m"
                      }
#line 598 "trace_counts.m"
                    else
#line 600 "trace_counts.m"
                      {
#line 600 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__Message_52;
#line 600 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__V_116_116;
#line 600 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__V_168_168;
#line 600 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__V_175_175;

#line 600 "trace_counts.m"
                        {
#line 600 "trace_counts.m"
                          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_3[9], mdbcomp__trace_counts__HeaderLineNumber_9, &mdbcomp__trace_counts__V_168_168);
                        }
#line 599 "trace_counts.m"
                        {
#line 599 "trace_counts.m"
                          mdbcomp__trace_counts__V_175_175 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__V_168_168, (MR_String) " of execution trace");
                        }
#line 599 "trace_counts.m"
                        {
#line 599 "trace_counts.m"
                          mdbcomp__trace_counts__Message_52 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", mdbcomp__trace_counts__V_175_175);
                        }
#line 601 "trace_counts.m"
                        mdbcomp__trace_counts__V_116_116 = (MR_Word) mdbcomp__trace_counts__Message_52;
#line 601 "trace_counts.m"
                        {
#line 601 "trace_counts.m"
                          mercury__exception__throw_1_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0, ((MR_Box) (mdbcomp__trace_counts__V_116_116)));
#line 601 "trace_counts.m"
                          return;
                        }
#line 600 "trace_counts.m"
                      }
#line 598 "trace_counts.m"
                  }
#line 541 "trace_counts.m"
              }
#line 523 "trace_counts.m"
          }
#line 603 "trace_counts.m"
        else
#line 605 "trace_counts.m"
          {
#line 605 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_121_121;
#line 605 "trace_counts.m"
            MR_String mdbcomp__trace_counts__Message_147;
#line 605 "trace_counts.m"
            MR_String mdbcomp__trace_counts__V_178_178;
#line 605 "trace_counts.m"
            MR_String mdbcomp__trace_counts__V_185_185;

#line 605 "trace_counts.m"
            {
#line 605 "trace_counts.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_3[9], mdbcomp__trace_counts__HeaderLineNumber_9, &mdbcomp__trace_counts__V_178_178);
            }
#line 604 "trace_counts.m"
            {
#line 604 "trace_counts.m"
              mdbcomp__trace_counts__V_185_185 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__V_178_178, (MR_String) " of execution trace");
            }
#line 604 "trace_counts.m"
            {
#line 604 "trace_counts.m"
              mdbcomp__trace_counts__Message_147 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", mdbcomp__trace_counts__V_185_185);
            }
#line 606 "trace_counts.m"
            mdbcomp__trace_counts__V_121_121 = (MR_Word) mdbcomp__trace_counts__Message_147;
#line 606 "trace_counts.m"
            {
#line 606 "trace_counts.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0, ((MR_Box) (mdbcomp__trace_counts__V_121_121)));
#line 606 "trace_counts.m"
              return;
            }
#line 605 "trace_counts.m"
          }
#line 500 "trace_counts.m"
      }
#line 500 "trace_counts.m"
      break;
#line 500 "trace_counts.m"
    }
#line 496 "trace_counts.m"
}

#line 471 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_setup_4_p_0(
#line 471 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_13,
#line 471 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_14)
#line 471 "trace_counts.m"
{
#line 474 "trace_counts.m"
  {
#line 474 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 474 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__LineNumber_7;
#line 474 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Result_8;

#line 475 "trace_counts.m"
    {
#line 475 "trace_counts.m"
      mercury__io__get_line_number_3_p_0(&mdbcomp__trace_counts__LineNumber_7);
    }
#line 476 "trace_counts.m"
    {
#line 476 "trace_counts.m"
      mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__Result_8);
    }
#line 486 "trace_counts.m"
    if ((mdbcomp__trace_counts__Result_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "trace_counts.m"
      *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_14 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_13;
#line 486 "trace_counts.m"
    else
#line 486 "trace_counts.m"
      if (((MR_tag((MR_Word) mdbcomp__trace_counts__Result_8)) == (MR_mktag((MR_Integer) 2))))
#line 489 "trace_counts.m"
        {
#line 489 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_8, (MR_Integer) 0)));

#line 490 "trace_counts.m"
          {
#line 490 "trace_counts.m"
            mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_12)));
#line 490 "trace_counts.m"
            return;
          }
#line 489 "trace_counts.m"
        }
#line 486 "trace_counts.m"
      else
#line 478 "trace_counts.m"
        {
#line 478 "trace_counts.m"
          MR_String mdbcomp__trace_counts__Line_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_8, (MR_Integer) 0)));

#line 484 "trace_counts.m"
          {
#line 484 "trace_counts.m"
            mdbcomp__trace_counts__read_proc_trace_counts_8_p_0(mdbcomp__trace_counts__LineNumber_7, mdbcomp__trace_counts__Line_9, (MR_Word) &mdbcomp__trace_counts_scalar_common_3[7], (MR_String) "", mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_13, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_14);
#line 484 "trace_counts.m"
            return;
          }
#line 478 "trace_counts.m"
        }
#line 474 "trace_counts.m"
  }
#line 471 "trace_counts.m"
}

#line 444 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_p_0_1(
#line 444 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 444 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 444 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 444 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3)
#line 444 "trace_counts.m"
{
#line 444 "trace_counts.m"
  {
#line 444 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 444 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_14;

#line 444 "trace_counts.m"
    {
#line 444 "trace_counts.m"
      mdbcomp__trace_counts__read_trace_counts_setup_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_14);
    }
#line 444 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_14));
#line 444 "trace_counts.m"
  }
#line 444 "trace_counts.m"
}

#line 435 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_p_0(
#line 435 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__ReadResult_4)
#line 435 "trace_counts.m"
{
#line 438 "trace_counts.m"
  {
#line 438 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 438 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__FileTypeResult_6;

#line 439 "trace_counts.m"
    {
#line 439 "trace_counts.m"
      mercury__io__read_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, &mdbcomp__trace_counts__FileTypeResult_6);
    }
#line 464 "trace_counts.m"
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__FileTypeResult_6)) == (MR_mktag((MR_Integer) 1))))
#line 441 "trace_counts.m"
      {
#line 441 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__FileType_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileTypeResult_6, (MR_Integer) 0)));
#line 441 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__NewlineResult_8;
#line 443 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_22_22;

#line 442 "trace_counts.m"
        {
#line 442 "trace_counts.m"
          mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__NewlineResult_8);
        }
#line 443 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__NewlineResult_8)) == (MR_mktag((MR_Integer) 1)));
#line 443 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 443 "trace_counts.m"
          {
#line 443 "trace_counts.m"
            mdbcomp__trace_counts__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__NewlineResult_8, (MR_Integer) 0)));
#line 443 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_22_22, (MR_String) "\n") == 0);
#line 443 "trace_counts.m"
          }
#line 461 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 444 "trace_counts.m"
          {
#line 444 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__Result_9;
#line 444 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_23_23;
#line 444 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_25_25;

#line 444 "trace_counts.m"
            {
#line 444 "trace_counts.m"
              mdbcomp__trace_counts__V_25_25 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0]);
            }
#line 444 "trace_counts.m"
            {
#line 444 "trace_counts.m"
              mdbcomp__trace_counts__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 444 "trace_counts.m"
              MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_23_23, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_7[0]));
#line 444 "trace_counts.m"
              MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_23_23, 1) = ((MR_Box) (mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_p_0_1));
#line 444 "trace_counts.m"
              MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 444 "trace_counts.m"
              MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_23_23, 3) = ((MR_Box) (mdbcomp__trace_counts__V_25_25));
#line 444 "trace_counts.m"
            }
#line 444 "trace_counts.m"
            {
#line 444 "trace_counts.m"
              mercury__exception__try_io_4_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__V_23_23, &mdbcomp__trace_counts__Result_9);
            }
#line 448 "trace_counts.m"
            if (((MR_tag((MR_Word) mdbcomp__trace_counts__Result_9)) == (MR_mktag((MR_Integer) 2))))
#line 449 "trace_counts.m"
              {
#line 449 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__Exception_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_9, (MR_Integer) 0)));
#line 452 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__IOError_12;
#line 450 "trace_counts.m"
                MR_Box mdbcomp__trace_counts__conv1_IOError_12;

#line 450 "trace_counts.m"
                {
#line 450 "trace_counts.m"
                  mdbcomp__trace_counts__succeeded = mercury__univ__univ_1_f_2((MR_Word) &mercury__io__io__type_ctor_info_error_0, &mdbcomp__trace_counts__conv1_IOError_12, mdbcomp__trace_counts__Exception_11);
                }
#line 450 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 450 "trace_counts.m"
                  {
#line 450 "trace_counts.m"
                    mdbcomp__trace_counts__IOError_12 = ((MR_Word) mdbcomp__trace_counts__conv1_IOError_12);
#line 450 "trace_counts.m"
                    mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 450 "trace_counts.m"
                  }
#line 452 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 451 "trace_counts.m"
                  {
#line 451 "trace_counts.m"
                    MR_Word base;
#line 451 "trace_counts.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "trace_counts.m"
                    *mdbcomp__trace_counts__ReadResult_4 = base;
#line 451 "trace_counts.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 451 "trace_counts.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdbcomp__trace_counts__IOError_12));
#line 451 "trace_counts.m"
                  }
#line 452 "trace_counts.m"
                else
#line 454 "trace_counts.m"
                  {
#line 454 "trace_counts.m"
                    MR_String mdbcomp__trace_counts__Message_13;
#line 452 "trace_counts.m"
                    MR_Box mdbcomp__trace_counts__conv2_Message_13;

#line 452 "trace_counts.m"
                    {
#line 452 "trace_counts.m"
                      mdbcomp__trace_counts__succeeded = mercury__univ__univ_1_f_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &mdbcomp__trace_counts__conv2_Message_13, mdbcomp__trace_counts__Exception_11);
                    }
#line 452 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 452 "trace_counts.m"
                      {
#line 452 "trace_counts.m"
                        mdbcomp__trace_counts__Message_13 = ((MR_String) mdbcomp__trace_counts__conv2_Message_13);
#line 452 "trace_counts.m"
                        mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 452 "trace_counts.m"
                      }
#line 454 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 453 "trace_counts.m"
                      {
#line 453 "trace_counts.m"
                        MR_Word base;
#line 453 "trace_counts.m"
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 453 "trace_counts.m"
                        *mdbcomp__trace_counts__ReadResult_4 = base;
#line 453 "trace_counts.m"
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdbcomp__trace_counts__Message_13));
#line 453 "trace_counts.m"
                      }
#line 454 "trace_counts.m"
                    else
#line 456 "trace_counts.m"
                      {
#line 456 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__Error_14;
#line 454 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__V_26_26;
#line 454 "trace_counts.m"
                        MR_Box mdbcomp__trace_counts__conv3_V_26_26;

#line 454 "trace_counts.m"
                        {
#line 454 "trace_counts.m"
                          mdbcomp__trace_counts__succeeded = mercury__univ__univ_1_f_2((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0, &mdbcomp__trace_counts__conv3_V_26_26, mdbcomp__trace_counts__Exception_11);
                        }
#line 454 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 454 "trace_counts.m"
                          {
#line 454 "trace_counts.m"
                            mdbcomp__trace_counts__V_26_26 = ((MR_Word) mdbcomp__trace_counts__conv3_V_26_26);
#line 454 "trace_counts.m"
                            mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 454 "trace_counts.m"
                          }
#line 454 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 454 "trace_counts.m"
                          {
#line 454 "trace_counts.m"
                            mdbcomp__trace_counts__Error_14 = (MR_String) mdbcomp__trace_counts__V_26_26;
#line 454 "trace_counts.m"
                            mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 454 "trace_counts.m"
                          }
#line 456 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 455 "trace_counts.m"
                          {
#line 455 "trace_counts.m"
                            MR_Word base;
#line 455 "trace_counts.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 455 "trace_counts.m"
                            *mdbcomp__trace_counts__ReadResult_4 = base;
#line 455 "trace_counts.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__Error_14));
#line 455 "trace_counts.m"
                          }
#line 456 "trace_counts.m"
                        else
#line 457 "trace_counts.m"
                          {
#line 457 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_27_27;
#line 457 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_29_29;
#line 457 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_31_31;

#line 458 "trace_counts.m"
                            {
#line 458 "trace_counts.m"
                              mdbcomp__trace_counts__V_31_31 = mercury__string__string_1_f_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, ((MR_Box) (mdbcomp__trace_counts__Exception_11)));
                            }
#line 458 "trace_counts.m"
                            {
#line 458 "trace_counts.m"
                              mdbcomp__trace_counts__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected exception type: ", mdbcomp__trace_counts__V_31_31);
                            }
#line 457 "trace_counts.m"
                            {
#line 457 "trace_counts.m"
                              mdbcomp__trace_counts__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "read_trace_counts_from_cur_stream: ", mdbcomp__trace_counts__V_29_29);
                            }
#line 457 "trace_counts.m"
                            {
#line 457 "trace_counts.m"
                              mercury__require__error_1_p_0(mdbcomp__trace_counts__V_27_27);
#line 457 "trace_counts.m"
                              return;
                            }
#line 457 "trace_counts.m"
                          }
#line 456 "trace_counts.m"
                      }
#line 454 "trace_counts.m"
                  }
#line 449 "trace_counts.m"
              }
#line 448 "trace_counts.m"
            else
#line 446 "trace_counts.m"
              {
#line 446 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__TraceCounts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_9, (MR_Integer) 0)));

#line 447 "trace_counts.m"
                {
#line 447 "trace_counts.m"
                  MR_Word base;
#line 447 "trace_counts.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 447 "trace_counts.m"
                  *mdbcomp__trace_counts__ReadResult_4 = base;
#line 447 "trace_counts.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__trace_counts__FileType_7));
#line 447 "trace_counts.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__trace_counts__TraceCounts_10));
#line 447 "trace_counts.m"
                }
#line 446 "trace_counts.m"
              }
#line 444 "trace_counts.m"
          }
#line 461 "trace_counts.m"
        else
#line 462 "trace_counts.m"
          {
#line 462 "trace_counts.m"
            *mdbcomp__trace_counts__ReadResult_4 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_3[8]);
#line 462 "trace_counts.m"
          }
#line 441 "trace_counts.m"
      }
#line 464 "trace_counts.m"
    else
#line 467 "trace_counts.m"
      {
#line 468 "trace_counts.m"
        *mdbcomp__trace_counts__ReadResult_4 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_3[8]);
#line 467 "trace_counts.m"
      }
#line 438 "trace_counts.m"
  }
#line 435 "trace_counts.m"
}

#line 330 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_list_stream_8_p_0(
#line 330 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ShowProgress_9,
#line 330 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__FileType0_10,
#line 330 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCounts0_11,
#line 330 "trace_counts.m"
  MR_String mdbcomp__trace_counts__MainFileName_12,
#line 330 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__Stream_13,
#line 330 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__Result_14)
#line 330 "trace_counts.m"
{
#line 335 "trace_counts.m"
  while (MR_TRUE)
#line 335 "trace_counts.m"
    {
#line 335 "trace_counts.m"
      /* tailcall optimized into a loop */
#line 335 "trace_counts.m"
      {
#line 335 "trace_counts.m"
        MR_bool mdbcomp__trace_counts__succeeded;
#line 335 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__ReadResult_16;

#line 336 "trace_counts.m"
        {
#line 336 "trace_counts.m"
          mercury__io__read_line_as_string_4_p_0(mdbcomp__trace_counts__Stream_13, &mdbcomp__trace_counts__ReadResult_16);
        }
#line 383 "trace_counts.m"
        if ((mdbcomp__trace_counts__ReadResult_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "trace_counts.m"
          {
#line 389 "trace_counts.m"
            MR_Word base;
#line 389 "trace_counts.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "trace_counts.m"
            *mdbcomp__trace_counts__Result_14 = base;
#line 389 "trace_counts.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__trace_counts__FileType0_10));
#line 389 "trace_counts.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__trace_counts__TraceCounts0_11));
#line 389 "trace_counts.m"
          }
#line 383 "trace_counts.m"
        else
#line 383 "trace_counts.m"
          if (((MR_tag((MR_Word) mdbcomp__trace_counts__ReadResult_16)) == (MR_mktag((MR_Integer) 2))))
#line 384 "trace_counts.m"
            {
#line 384 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__Error_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__ReadResult_16, (MR_Integer) 0)));
#line 384 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_30_30;
#line 384 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_32_32;
#line 384 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_34_34;
#line 384 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_35_35;
#line 384 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_37_37;

#line 386 "trace_counts.m"
              {
#line 386 "trace_counts.m"
                mdbcomp__trace_counts__V_37_37 = mercury__string__string_1_f_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_26)));
              }
#line 386 "trace_counts.m"
              {
#line 386 "trace_counts.m"
                mdbcomp__trace_counts__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__V_37_37);
              }
#line 386 "trace_counts.m"
              {
#line 386 "trace_counts.m"
                mdbcomp__trace_counts__V_34_34 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__MainFileName_12, mdbcomp__trace_counts__V_35_35);
              }
#line 385 "trace_counts.m"
              {
#line 385 "trace_counts.m"
                mdbcomp__trace_counts__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_34_34);
              }
#line 385 "trace_counts.m"
              {
#line 385 "trace_counts.m"
                mdbcomp__trace_counts__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "IO error reading file ", mdbcomp__trace_counts__V_32_32);
              }
#line 385 "trace_counts.m"
              {
#line 385 "trace_counts.m"
                MR_Word base;
#line 385 "trace_counts.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 385 "trace_counts.m"
                *mdbcomp__trace_counts__Result_14 = base;
#line 385 "trace_counts.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_30_30));
#line 385 "trace_counts.m"
              }
#line 384 "trace_counts.m"
            }
#line 383 "trace_counts.m"
          else
#line 338 "trace_counts.m"
            {
#line 338 "trace_counts.m"
              MR_String mdbcomp__trace_counts__Line_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__ReadResult_16, (MR_Integer) 0)));
#line 338 "trace_counts.m"
              MR_String mdbcomp__trace_counts__FileName_18;

#line 340 "trace_counts.m"
              {
#line 340 "trace_counts.m"
                mdbcomp__trace_counts__FileName_18 = mercury__string__rstrip_1_f_0(mdbcomp__trace_counts__Line_17);
              }
#line 343 "trace_counts.m"
              mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__FileName_18, (MR_String) "") == 0);
#line 347 "trace_counts.m"
              if (mdbcomp__trace_counts__succeeded)
#line 345 "trace_counts.m"
                {
#line 345 "trace_counts.m"
                  /* direct tailcall eliminated */
#line 345 "trace_counts.m"
                  continue;
#line 345 "trace_counts.m"
                }
#line 347 "trace_counts.m"
              else
#line 354 "trace_counts.m"
                {
#line 354 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__ReadTCResult_19;

#line 352 "trace_counts.m"
                  if ((mdbcomp__trace_counts__ShowProgress_9 == (MR_Integer) 0))
#line 353 "trace_counts.m"
                    {
#line 353 "trace_counts.m"
                    }
#line 352 "trace_counts.m"
                  else
#line 349 "trace_counts.m"
                    {
#line 350 "trace_counts.m"
                      {
#line 350 "trace_counts.m"
                        mercury__io__write_string_3_p_0(mdbcomp__trace_counts__FileName_18);
                      }
#line 351 "trace_counts.m"
                      {
#line 351 "trace_counts.m"
                        mercury__io__nl_2_p_0();
                      }
#line 349 "trace_counts.m"
                    }
#line 355 "trace_counts.m"
                  {
#line 355 "trace_counts.m"
                    mdbcomp__trace_counts__read_trace_counts_4_p_0(mdbcomp__trace_counts__FileName_18, &mdbcomp__trace_counts__ReadTCResult_19);
                  }
#line 363 "trace_counts.m"
                  if (((MR_tag((MR_Word) mdbcomp__trace_counts__ReadTCResult_19)) == (MR_mktag((MR_Integer) 2))))
#line 378 "trace_counts.m"
                    {
#line 378 "trace_counts.m"
                      MR_String mdbcomp__trace_counts__V_42_42;
#line 378 "trace_counts.m"
                      MR_String mdbcomp__trace_counts__V_44_44;
#line 378 "trace_counts.m"
                      MR_String mdbcomp__trace_counts__V_46_46;
#line 378 "trace_counts.m"
                      MR_String mdbcomp__trace_counts__V_47_47;
#line 378 "trace_counts.m"
                      MR_String mdbcomp__trace_counts__ErrMsg_75 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 0)));

#line 380 "trace_counts.m"
                      {
#line 380 "trace_counts.m"
                        mdbcomp__trace_counts__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_75);
                      }
#line 380 "trace_counts.m"
                      {
#line 380 "trace_counts.m"
                        mdbcomp__trace_counts__V_46_46 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_18, mdbcomp__trace_counts__V_47_47);
                      }
#line 380 "trace_counts.m"
                      {
#line 380 "trace_counts.m"
                        mdbcomp__trace_counts__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "from file \140", mdbcomp__trace_counts__V_46_46);
                      }
#line 379 "trace_counts.m"
                      {
#line 379 "trace_counts.m"
                        mdbcomp__trace_counts__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading trace counts ", mdbcomp__trace_counts__V_44_44);
                      }
#line 379 "trace_counts.m"
                      {
#line 379 "trace_counts.m"
                        MR_Word base;
#line 379 "trace_counts.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 379 "trace_counts.m"
                        *mdbcomp__trace_counts__Result_14 = base;
#line 379 "trace_counts.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_42_42));
#line 379 "trace_counts.m"
                      }
#line 378 "trace_counts.m"
                    }
#line 363 "trace_counts.m"
                  else
#line 363 "trace_counts.m"
                    if (((MR_tag((MR_Word) mdbcomp__trace_counts__ReadTCResult_19)) == (MR_mktag((MR_Integer) 0))))
#line 357 "trace_counts.m"
                      {
#line 357 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__FileType1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 0)));
#line 357 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__TraceCounts1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 1)));
#line 357 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__TraceCounts_22;
#line 357 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__FileType_23;
#line 357 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__V_68_68;
#line 357 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__V_69_69;

#line 358 "trace_counts.m"
                        {
#line 358 "trace_counts.m"
                          mdbcomp__trace_counts__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "trace_counts.m"
                          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_69_69, 0) = ((MR_Box) (mdbcomp__trace_counts__TraceCounts1_21));
#line 358 "trace_counts.m"
                          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "trace_counts.m"
                        }
#line 358 "trace_counts.m"
                        {
#line 358 "trace_counts.m"
                          mdbcomp__trace_counts__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "trace_counts.m"
                          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, 0) = ((MR_Box) (mdbcomp__trace_counts__TraceCounts0_11));
#line 358 "trace_counts.m"
                          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, 1) = ((MR_Box) (mdbcomp__trace_counts__V_69_69));
#line 358 "trace_counts.m"
                        }
#line 358 "trace_counts.m"
                        {
#line 358 "trace_counts.m"
                          mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0(mdbcomp__trace_counts__V_68_68, &mdbcomp__trace_counts__TraceCounts_22);
                        }
#line 360 "trace_counts.m"
                        {
#line 360 "trace_counts.m"
                          mdbcomp__trace_counts__FileType_23 = mdbcomp__trace_counts__sum_trace_count_file_type_2_f_0(mdbcomp__trace_counts__FileType0_10, mdbcomp__trace_counts__FileType1_20);
                        }
#line 361 "trace_counts.m"
                        /* direct tailcall eliminated */
#line 361 "trace_counts.m"
                        {
#line 361 "trace_counts.m"
                          MR_Word mdbcomp__trace_counts__FileType0__tmp_copy_10 = mdbcomp__trace_counts__FileType_23;
#line 361 "trace_counts.m"
                          MR_Word mdbcomp__trace_counts__TraceCounts0__tmp_copy_11 = mdbcomp__trace_counts__TraceCounts_22;

#line 361 "trace_counts.m"
                          mdbcomp__trace_counts__TraceCounts0_11 = mdbcomp__trace_counts__TraceCounts0__tmp_copy_11;
#line 361 "trace_counts.m"
                          mdbcomp__trace_counts__FileType0_10 = mdbcomp__trace_counts__FileType0__tmp_copy_10;
#line 361 "trace_counts.m"
                        }
#line 361 "trace_counts.m"
                        continue;
#line 357 "trace_counts.m"
                      }
#line 363 "trace_counts.m"
                    else
#line 363 "trace_counts.m"
                      if (((MR_tag((MR_Word) mdbcomp__trace_counts__ReadTCResult_19)) == (MR_mktag((MR_Integer) 1))))
#line 374 "trace_counts.m"
                        {
#line 374 "trace_counts.m"
                          MR_String mdbcomp__trace_counts__V_49_49;
#line 374 "trace_counts.m"
                          MR_String mdbcomp__trace_counts__V_51_51;
#line 374 "trace_counts.m"
                          MR_String mdbcomp__trace_counts__V_52_52;
#line 374 "trace_counts.m"
                          MR_String mdbcomp__trace_counts__ErrMsg_74 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 0)));

#line 376 "trace_counts.m"
                          {
#line 376 "trace_counts.m"
                            mdbcomp__trace_counts__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_74);
                          }
#line 376 "trace_counts.m"
                          {
#line 376 "trace_counts.m"
                            mdbcomp__trace_counts__V_51_51 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_18, mdbcomp__trace_counts__V_52_52);
                          }
#line 375 "trace_counts.m"
                          {
#line 375 "trace_counts.m"
                            mdbcomp__trace_counts__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) "Syntax error in file \140", mdbcomp__trace_counts__V_51_51);
                          }
#line 375 "trace_counts.m"
                          {
#line 375 "trace_counts.m"
                            MR_Word base;
#line 375 "trace_counts.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 375 "trace_counts.m"
                            *mdbcomp__trace_counts__Result_14 = base;
#line 375 "trace_counts.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_49_49));
#line 375 "trace_counts.m"
                          }
#line 374 "trace_counts.m"
                        }
#line 363 "trace_counts.m"
                      else
#line 363 "trace_counts.m"
                        if (((((MR_tag((MR_Word) mdbcomp__trace_counts__ReadTCResult_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 364 "trace_counts.m"
                          {
#line 364 "trace_counts.m"
                            MR_Word mdbcomp__trace_counts__IOError_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 1)));
#line 364 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__ErrMsg_25;
#line 364 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_61_61;
#line 364 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_63_63;
#line 364 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_65_65;
#line 364 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_66_66;

#line 365 "trace_counts.m"
                            {
#line 365 "trace_counts.m"
                              mdbcomp__trace_counts__ErrMsg_25 = mercury__io__error_message_1_f_0(mdbcomp__trace_counts__IOError_24);
                            }
#line 367 "trace_counts.m"
                            {
#line 367 "trace_counts.m"
                              mdbcomp__trace_counts__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_25);
                            }
#line 367 "trace_counts.m"
                            {
#line 367 "trace_counts.m"
                              mdbcomp__trace_counts__V_65_65 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_18, mdbcomp__trace_counts__V_66_66);
                            }
#line 367 "trace_counts.m"
                            {
#line 367 "trace_counts.m"
                              mdbcomp__trace_counts__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_65_65);
                            }
#line 366 "trace_counts.m"
                            {
#line 366 "trace_counts.m"
                              mdbcomp__trace_counts__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error reading file ", mdbcomp__trace_counts__V_63_63);
                            }
#line 366 "trace_counts.m"
                            {
#line 366 "trace_counts.m"
                              MR_Word base;
#line 366 "trace_counts.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 366 "trace_counts.m"
                              *mdbcomp__trace_counts__Result_14 = base;
#line 366 "trace_counts.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_61_61));
#line 366 "trace_counts.m"
                            }
#line 364 "trace_counts.m"
                          }
#line 363 "trace_counts.m"
                        else
#line 369 "trace_counts.m"
                          {
#line 369 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_54_54;
#line 369 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_56_56;
#line 369 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_58_58;
#line 369 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_59_59;
#line 369 "trace_counts.m"
                            MR_Word mdbcomp__trace_counts__IOError_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 1)));
#line 369 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__ErrMsg_73;

#line 370 "trace_counts.m"
                            {
#line 370 "trace_counts.m"
                              mdbcomp__trace_counts__ErrMsg_73 = mercury__io__error_message_1_f_0(mdbcomp__trace_counts__IOError_72);
                            }
#line 372 "trace_counts.m"
                            {
#line 372 "trace_counts.m"
                              mdbcomp__trace_counts__V_59_59 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_73);
                            }
#line 372 "trace_counts.m"
                            {
#line 372 "trace_counts.m"
                              mdbcomp__trace_counts__V_58_58 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_18, mdbcomp__trace_counts__V_59_59);
                            }
#line 372 "trace_counts.m"
                            {
#line 372 "trace_counts.m"
                              mdbcomp__trace_counts__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_58_58);
                            }
#line 371 "trace_counts.m"
                            {
#line 371 "trace_counts.m"
                              mdbcomp__trace_counts__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error opening file ", mdbcomp__trace_counts__V_56_56);
                            }
#line 371 "trace_counts.m"
                            {
#line 371 "trace_counts.m"
                              MR_Word base;
#line 371 "trace_counts.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 371 "trace_counts.m"
                              *mdbcomp__trace_counts__Result_14 = base;
#line 371 "trace_counts.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_54_54));
#line 371 "trace_counts.m"
                            }
#line 369 "trace_counts.m"
                          }
#line 354 "trace_counts.m"
                }
#line 338 "trace_counts.m"
            }
#line 335 "trace_counts.m"
      }
#line 335 "trace_counts.m"
      break;
#line 335 "trace_counts.m"
    }
#line 330 "trace_counts.m"
}

#line 258 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_proc_counts_acc_5_p_0(
#line 258 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsB_6,
#line 258 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__PathPortA_7,
#line 258 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__LineNoCountA_8,
#line 258 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_0_12,
#line 258 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_13)
#line 258 "trace_counts.m"
{
#line 267 "trace_counts.m"
  {
#line 267 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 267 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__LineNoCountB_10;
#line 264 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__conv0_LineNoCountB_10;

#line 264 "trace_counts.m"
    {
#line 264 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__trace_counts__ProcTraceCountsB_6, ((MR_Box) (mdbcomp__trace_counts__PathPortA_7)), &mdbcomp__trace_counts__conv0_LineNoCountB_10);
    }
#line 264 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 264 "trace_counts.m"
      {
#line 264 "trace_counts.m"
        mdbcomp__trace_counts__LineNoCountB_10 = ((MR_Word) mdbcomp__trace_counts__conv0_LineNoCountB_10);
#line 264 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 264 "trace_counts.m"
      }
#line 267 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 265 "trace_counts.m"
      {
#line 265 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__LineNoCount_11;
#line 265 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__LineNumber1_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountA_8, (MR_Integer) 0)));
#line 265 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__Count1_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountA_8, (MR_Integer) 1)));
#line 265 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__Count2_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountB_10, (MR_Integer) 1)));
#line 265 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_31_31 = (mdbcomp__trace_counts__Count1_26 - mdbcomp__trace_counts__Count2_29);
#line 283 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts___NumTests1_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountA_8, (MR_Integer) 2)));
#line 284 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts___LineNumber_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountB_10, (MR_Integer) 0)));
#line 284 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts___NumTests2_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountB_10, (MR_Integer) 2)));

#line 285 "trace_counts.m"
        {
#line 285 "trace_counts.m"
          mdbcomp__trace_counts__LineNoCount_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 285 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCount_11, 0) = ((MR_Box) (mdbcomp__trace_counts__LineNumber1_25));
#line 285 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCount_11, 1) = ((MR_Box) (mdbcomp__trace_counts__V_31_31));
#line 285 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCount_11, 2) = ((MR_Box) ((MR_Integer) -1));
#line 285 "trace_counts.m"
        }
#line 266 "trace_counts.m"
        {
#line 266 "trace_counts.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, ((MR_Box) (mdbcomp__trace_counts__PathPortA_7)), ((MR_Box) (mdbcomp__trace_counts__LineNoCount_11)), mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_0_12, mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_13);
#line 266 "trace_counts.m"
          return;
        }
#line 265 "trace_counts.m"
      }
#line 267 "trace_counts.m"
    else
#line 268 "trace_counts.m"
      {
#line 268 "trace_counts.m"
        {
#line 268 "trace_counts.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, ((MR_Box) (mdbcomp__trace_counts__PathPortA_7)), ((MR_Box) (mdbcomp__trace_counts__LineNoCountA_8)), mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_0_12, mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_13);
#line 268 "trace_counts.m"
          return;
        }
#line 268 "trace_counts.m"
      }
#line 267 "trace_counts.m"
  }
#line 258 "trace_counts.m"
}

#line 255 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0_1(
#line 255 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 255 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 255 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 255 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 255 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4)
#line 255 "trace_counts.m"
{
#line 255 "trace_counts.m"
  {
#line 255 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 255 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv1_STATE_VARIABLE_ProcTraceCounts_13;

#line 255 "trace_counts.m"
    {
#line 255 "trace_counts.m"
      mdbcomp__trace_counts__diff_proc_counts_acc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3), &mdbcomp__trace_counts__conv1_STATE_VARIABLE_ProcTraceCounts_13);
    }
#line 255 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_4 = ((MR_Box) (mdbcomp__trace_counts__conv1_STATE_VARIABLE_ProcTraceCounts_13));
#line 255 "trace_counts.m"
  }
#line 255 "trace_counts.m"
}

#line 238 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0(
#line 238 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCountsB_6,
#line 238 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContextA_7,
#line 238 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsA_8,
#line 238 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_12,
#line 238 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_13)
#line 238 "trace_counts.m"
{
#line 247 "trace_counts.m"
  {
#line 247 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 247 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__ProcTraceCountsB_10;
#line 244 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__conv0_ProcTraceCountsB_10;

#line 244 "trace_counts.m"
    {
#line 244 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], mdbcomp__trace_counts__TraceCountsB_6, ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContextA_7)), &mdbcomp__trace_counts__conv0_ProcTraceCountsB_10);
    }
#line 244 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 244 "trace_counts.m"
      {
#line 244 "trace_counts.m"
        mdbcomp__trace_counts__ProcTraceCountsB_10 = ((MR_Word) mdbcomp__trace_counts__conv0_ProcTraceCountsB_10);
#line 244 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 244 "trace_counts.m"
      }
#line 247 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 245 "trace_counts.m"
      {
#line 245 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__TypeCtorInfo_13_31;
#line 245 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__TypeCtorInfo_14_32;
#line 245 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__ProcTraceCounts_11;
#line 245 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_25_25;
#line 245 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_26_26;
#line 255 "trace_counts.m"
        MR_Box mdbcomp__trace_counts__conv2_ProcTraceCounts_11;

#line 255 "trace_counts.m"
        {
#line 255 "trace_counts.m"
          mdbcomp__trace_counts__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 255 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_25_25, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_5[2]));
#line 255 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_25_25, 1) = ((MR_Box) (mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0_1));
#line 255 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 255 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_25_25, 3) = ((MR_Box) (mdbcomp__trace_counts__ProcTraceCountsB_10));
#line 255 "trace_counts.m"
        }
#line 8443 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__TypeCtorInfo_13_31 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
#line 8445 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__TypeCtorInfo_14_32 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;
#line 256 "trace_counts.m"
        {
#line 256 "trace_counts.m"
          mdbcomp__trace_counts__V_26_26 = mercury__map__init_0_f_0(mdbcomp__trace_counts__TypeCtorInfo_13_31, mdbcomp__trace_counts__TypeCtorInfo_14_32);
        }
#line 255 "trace_counts.m"
        {
#line 255 "trace_counts.m"
          mercury__map__foldl_4_p_0(mdbcomp__trace_counts__TypeCtorInfo_13_31, mdbcomp__trace_counts__TypeCtorInfo_14_32, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], mdbcomp__trace_counts__V_25_25, mdbcomp__trace_counts__ProcTraceCountsA_8, ((MR_Box) (mdbcomp__trace_counts__V_26_26)), &mdbcomp__trace_counts__conv2_ProcTraceCounts_11);
        }
#line 255 "trace_counts.m"
        mdbcomp__trace_counts__ProcTraceCounts_11 = ((MR_Word) mdbcomp__trace_counts__conv2_ProcTraceCounts_11);
#line 246 "trace_counts.m"
        {
#line 246 "trace_counts.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContextA_7)), ((MR_Box) (mdbcomp__trace_counts__ProcTraceCounts_11)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_12, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_13);
#line 246 "trace_counts.m"
          return;
        }
#line 245 "trace_counts.m"
      }
#line 247 "trace_counts.m"
    else
#line 248 "trace_counts.m"
      {
#line 248 "trace_counts.m"
        {
#line 248 "trace_counts.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContextA_7)), ((MR_Box) (mdbcomp__trace_counts__ProcTraceCountsA_8)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_12, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_13);
#line 248 "trace_counts.m"
          return;
        }
#line 248 "trace_counts.m"
      }
#line 247 "trace_counts.m"
  }
#line 238 "trace_counts.m"
}

#line 218 "trace_counts.m"
static MR_Word MR_CALL 
mdbcomp__trace_counts__sum_counts_on_line_2_f_0(
#line 218 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__LC1_4,
#line 218 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__LC2_5)
#line 218 "trace_counts.m"
{
#line 221 "trace_counts.m"
  {
#line 221 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 221 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__LC_6;
#line 221 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__LineNumber1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC1_4, (MR_Integer) 0)));
#line 221 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__Count1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC1_4, (MR_Integer) 1)));
#line 221 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__NumTests1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC1_4, (MR_Integer) 2)));
#line 221 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__Count2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC2_5, (MR_Integer) 1)));
#line 221 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__NumTests2_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC2_5, (MR_Integer) 2)));
#line 221 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__V_13_13 = (mdbcomp__trace_counts__Count1_8 + mdbcomp__trace_counts__Count2_11);
#line 221 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__V_14_14 = (mdbcomp__trace_counts__NumTests1_9 + mdbcomp__trace_counts__NumTests2_12);
#line 228 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts___LineNumber_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC2_5, (MR_Integer) 0)));

#line 229 "trace_counts.m"
    {
#line 229 "trace_counts.m"
      mdbcomp__trace_counts__LC_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 229 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC_6, 0) = ((MR_Box) (mdbcomp__trace_counts__LineNumber1_7));
#line 229 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_13_13));
#line 229 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC_6, 2) = ((MR_Box) (mdbcomp__trace_counts__V_14_14));
#line 229 "trace_counts.m"
    }
#line 221 "trace_counts.m"
    return mdbcomp__trace_counts__LC_6;
#line 221 "trace_counts.m"
  }
#line 218 "trace_counts.m"
}

#line 215 "trace_counts.m"
static MR_Box MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0_1(
#line 215 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 215 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 215 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 215 "trace_counts.m"
{
#line 215 "trace_counts.m"
  {
#line 215 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__wrapper_arg_3;
#line 215 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 215 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv0_LC_6;

#line 215 "trace_counts.m"
    {
#line 215 "trace_counts.m"
      mdbcomp__trace_counts__conv0_LC_6 = mdbcomp__trace_counts__sum_counts_on_line_2_f_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 215 "trace_counts.m"
    mdbcomp__trace_counts__wrapper_arg_3 = ((MR_Box) (mdbcomp__trace_counts__conv0_LC_6));
#line 215 "trace_counts.m"
    return mdbcomp__trace_counts__wrapper_arg_3;
#line 215 "trace_counts.m"
  }
#line 215 "trace_counts.m"
}

#line 211 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0(
#line 211 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsA_4,
#line 211 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsB_5,
#line 211 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__ProcTraceCounts_6)
#line 211 "trace_counts.m"
{
#line 214 "trace_counts.m"
  {
#line 214 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 215 "trace_counts.m"
    {
#line 215 "trace_counts.m"
      *mdbcomp__trace_counts__ProcTraceCounts_6 = mercury__map__union_3_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[6], mdbcomp__trace_counts__ProcTraceCountsA_4, mdbcomp__trace_counts__ProcTraceCountsB_5);
    }
#line 214 "trace_counts.m"
  }
#line 211 "trace_counts.m"
}

#line 182 "trace_counts.m"
MR_Integer MR_CALL 
mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(
#line 182 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1)
#line 182 "trace_counts.m"
{
#line 940 "trace_counts.m"
  {
#line 940 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 940 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__HeadVar__2_2;

#line 940 "trace_counts.m"
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 942 "trace_counts.m"
      mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) -1;
#line 940 "trace_counts.m"
    else
#line 940 "trace_counts.m"
      if (((MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 941 "trace_counts.m"
        mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 1;
#line 940 "trace_counts.m"
      else
#line 940 "trace_counts.m"
        {
#line 940 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_4_4;

#line 940 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 940 "trace_counts.m"
          mdbcomp__trace_counts__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 940 "trace_counts.m"
        }
#line 940 "trace_counts.m"
    return mdbcomp__trace_counts__HeadVar__2_2;
#line 940 "trace_counts.m"
  }
#line 182 "trace_counts.m"
}

#line 177 "trace_counts.m"
MR_Integer MR_CALL 
mdbcomp__trace_counts__calc_num_tests_1_f_0(
#line 177 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1)
#line 177 "trace_counts.m"
{
#line 936 "trace_counts.m"
  {
#line 936 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 936 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__HeadVar__2_2;

#line 936 "trace_counts.m"
    if ((mdbcomp__trace_counts__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 936 "trace_counts.m"
      mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 0;
#line 936 "trace_counts.m"
    else
#line 937 "trace_counts.m"
      {
#line 937 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__FileType_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 937 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 937 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_5_5;
#line 937 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_6_6;

#line 940 "trace_counts.m"
        if (((MR_tag((MR_Word) mdbcomp__trace_counts__FileType_3)) == (MR_mktag((MR_Integer) 2))))
#line 942 "trace_counts.m"
          mdbcomp__trace_counts__V_5_5 = (MR_Integer) -1;
#line 940 "trace_counts.m"
        else
#line 940 "trace_counts.m"
          if (((MR_tag((MR_Word) mdbcomp__trace_counts__FileType_3)) == (MR_mktag((MR_Integer) 0))))
#line 941 "trace_counts.m"
            mdbcomp__trace_counts__V_5_5 = (MR_Integer) 1;
#line 940 "trace_counts.m"
          else
#line 940 "trace_counts.m"
            {
#line 940 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_8_8;

#line 940 "trace_counts.m"
              mdbcomp__trace_counts__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileType_3, (MR_Integer) 0)));
#line 940 "trace_counts.m"
              mdbcomp__trace_counts__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileType_3, (MR_Integer) 1)));
#line 940 "trace_counts.m"
            }
#line 938 "trace_counts.m"
        {
#line 938 "trace_counts.m"
          mdbcomp__trace_counts__V_6_6 = mdbcomp__trace_counts__calc_num_tests_1_f_0(mdbcomp__trace_counts__Rest_4);
        }
#line 938 "trace_counts.m"
        mdbcomp__trace_counts__HeadVar__2_2 = (mdbcomp__trace_counts__V_5_5 + mdbcomp__trace_counts__V_6_6);
#line 937 "trace_counts.m"
      }
#line 936 "trace_counts.m"
    return mdbcomp__trace_counts__HeadVar__2_2;
#line 936 "trace_counts.m"
  }
#line 177 "trace_counts.m"
}

#line 919 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0_1(
#line 919 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 919 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 919 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 919 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 919 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4)
#line 919 "trace_counts.m"
{
#line 919 "trace_counts.m"
  {
#line 919 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 919 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_17;

#line 919 "trace_counts.m"
    {
#line 919 "trace_counts.m"
      mdbcomp__trace_counts__restrict_trace_counts_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_17);
    }
#line 919 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_4 = ((MR_Box) (mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_17));
#line 919 "trace_counts.m"
  }
#line 919 "trace_counts.m"
}

#line 171 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0(
#line 171 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ModuleName_4,
#line 171 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCounts0_5,
#line 171 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__TraceCounts_6)
#line 171 "trace_counts.m"
{
#line 918 "trace_counts.m"
  {
#line 918 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 918 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__TypeCtorInfo_13_13;
#line 918 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__TypeInfo_14_14;
#line 918 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_7_7;
#line 918 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_8_8;
#line 919 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__conv1_TraceCounts_6;

#line 919 "trace_counts.m"
    {
#line 919 "trace_counts.m"
      mdbcomp__trace_counts__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 919 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_5[1]));
#line 919 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 1) = ((MR_Box) (mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0_1));
#line 919 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 919 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 3) = ((MR_Box) (mdbcomp__trace_counts__ModuleName_4));
#line 919 "trace_counts.m"
    }
#line 8785 "mdbcomp.trace_counts.c"
    mdbcomp__trace_counts__TypeCtorInfo_13_13 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0;
#line 8787 "mdbcomp.trace_counts.c"
    mdbcomp__trace_counts__TypeInfo_14_14 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0];
#line 920 "trace_counts.m"
    {
#line 920 "trace_counts.m"
      mdbcomp__trace_counts__V_8_8 = mercury__map__init_0_f_0(mdbcomp__trace_counts__TypeCtorInfo_13_13, mdbcomp__trace_counts__TypeInfo_14_14);
    }
#line 919 "trace_counts.m"
    {
#line 919 "trace_counts.m"
      mercury__map__foldl_4_p_0(mdbcomp__trace_counts__TypeCtorInfo_13_13, mdbcomp__trace_counts__TypeInfo_14_14, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__V_7_7, mdbcomp__trace_counts__TraceCounts0_5, ((MR_Box) (mdbcomp__trace_counts__V_8_8)), &mdbcomp__trace_counts__conv1_TraceCounts_6);
    }
#line 919 "trace_counts.m"
    *mdbcomp__trace_counts__TraceCounts_6 = ((MR_Word) mdbcomp__trace_counts__conv1_TraceCounts_6);
#line 918 "trace_counts.m"
  }
#line 171 "trace_counts.m"
}

#line 169 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts__string_to_trace_port_2_p_1(
#line 169 "trace_counts.m"
  MR_String * mdbcomp__trace_counts__HeadVar__1_1,
#line 169 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 169 "trace_counts.m"
{
#line 689 "trace_counts.m"
  {
#line 689 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 689 "trace_counts.m"
    if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 0))
#line 689 "trace_counts.m"
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "CALL";
#line 689 "trace_counts.m"
    else
#line 689 "trace_counts.m"
      if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 12))
#line 701 "trace_counts.m"
        *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "DSJF";
#line 689 "trace_counts.m"
      else
#line 689 "trace_counts.m"
        if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 13))
#line 702 "trace_counts.m"
          *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "DSJL";
#line 689 "trace_counts.m"
        else
#line 689 "trace_counts.m"
          if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 5))
#line 694 "trace_counts.m"
            *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "EXCP";
#line 689 "trace_counts.m"
          else
#line 689 "trace_counts.m"
            if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 1))
#line 690 "trace_counts.m"
              *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "EXIT";
#line 689 "trace_counts.m"
            else
#line 689 "trace_counts.m"
              if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 3))
#line 692 "trace_counts.m"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "FAIL";
#line 689 "trace_counts.m"
              else
#line 689 "trace_counts.m"
                if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 6))
#line 695 "trace_counts.m"
                  *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "COND";
#line 689 "trace_counts.m"
                else
#line 689 "trace_counts.m"
                  if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 8))
#line 697 "trace_counts.m"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "ELSE";
#line 689 "trace_counts.m"
                  else
#line 689 "trace_counts.m"
                    if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 7))
#line 696 "trace_counts.m"
                      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "THEN";
#line 689 "trace_counts.m"
                    else
#line 689 "trace_counts.m"
                      if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 9))
#line 698 "trace_counts.m"
                        *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "NEGE";
#line 689 "trace_counts.m"
                      else
#line 689 "trace_counts.m"
                        if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 11))
#line 700 "trace_counts.m"
                          *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "NEGF";
#line 689 "trace_counts.m"
                        else
#line 689 "trace_counts.m"
                          if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 10))
#line 699 "trace_counts.m"
                            *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "NEGS";
#line 689 "trace_counts.m"
                          else
#line 689 "trace_counts.m"
                            if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 2))
#line 691 "trace_counts.m"
                              *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "REDO";
#line 689 "trace_counts.m"
                            else
#line 689 "trace_counts.m"
                              if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 14))
#line 703 "trace_counts.m"
                                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "SWTC";
#line 689 "trace_counts.m"
                              else
#line 689 "trace_counts.m"
                                if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 4))
#line 693 "trace_counts.m"
                                  *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "TAIL";
#line 689 "trace_counts.m"
                                else
#line 704 "trace_counts.m"
                                  *mdbcomp__trace_counts__HeadVar__1_1 = (MR_String) "USER";
#line 689 "trace_counts.m"
  }
#line 169 "trace_counts.m"
}

#line 168 "trace_counts.m"
MR_bool MR_CALL 
mdbcomp__trace_counts__string_to_trace_port_2_p_0(
#line 168 "trace_counts.m"
  MR_String mdbcomp__trace_counts__HeadVar__1_1,
#line 168 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__2_2)
#line 168 "trace_counts.m"
{
#line 689 "trace_counts.m"
  {
#line 689 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 689 "trace_counts.m"
    if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "CALL") == 0))
#line 689 "trace_counts.m"
      {
#line 689 "trace_counts.m"
        *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 0;
#line 689 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 689 "trace_counts.m"
      }
#line 689 "trace_counts.m"
    else
#line 689 "trace_counts.m"
      if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "COND") == 0))
#line 695 "trace_counts.m"
        {
#line 695 "trace_counts.m"
          *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 6;
#line 695 "trace_counts.m"
          mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 695 "trace_counts.m"
        }
#line 689 "trace_counts.m"
      else
#line 689 "trace_counts.m"
        if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "DSJF") == 0))
#line 701 "trace_counts.m"
          {
#line 701 "trace_counts.m"
            *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 12;
#line 701 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 701 "trace_counts.m"
          }
#line 689 "trace_counts.m"
        else
#line 689 "trace_counts.m"
          if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "DSJL") == 0))
#line 702 "trace_counts.m"
            {
#line 702 "trace_counts.m"
              *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 13;
#line 702 "trace_counts.m"
              mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 702 "trace_counts.m"
            }
#line 689 "trace_counts.m"
          else
#line 689 "trace_counts.m"
            if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "ELSE") == 0))
#line 697 "trace_counts.m"
              {
#line 697 "trace_counts.m"
                *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 8;
#line 697 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 697 "trace_counts.m"
              }
#line 689 "trace_counts.m"
            else
#line 689 "trace_counts.m"
              if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "EXCP") == 0))
#line 694 "trace_counts.m"
                {
#line 694 "trace_counts.m"
                  *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 5;
#line 694 "trace_counts.m"
                  mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 694 "trace_counts.m"
                }
#line 689 "trace_counts.m"
              else
#line 689 "trace_counts.m"
                if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "EXIT") == 0))
#line 690 "trace_counts.m"
                  {
#line 690 "trace_counts.m"
                    *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 1;
#line 690 "trace_counts.m"
                    mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 690 "trace_counts.m"
                  }
#line 689 "trace_counts.m"
                else
#line 689 "trace_counts.m"
                  if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "FAIL") == 0))
#line 692 "trace_counts.m"
                    {
#line 692 "trace_counts.m"
                      *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 3;
#line 692 "trace_counts.m"
                      mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 692 "trace_counts.m"
                    }
#line 689 "trace_counts.m"
                  else
#line 689 "trace_counts.m"
                    if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "NEGE") == 0))
#line 698 "trace_counts.m"
                      {
#line 698 "trace_counts.m"
                        *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 9;
#line 698 "trace_counts.m"
                        mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 698 "trace_counts.m"
                      }
#line 689 "trace_counts.m"
                    else
#line 689 "trace_counts.m"
                      if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "NEGF") == 0))
#line 700 "trace_counts.m"
                        {
#line 700 "trace_counts.m"
                          *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 11;
#line 700 "trace_counts.m"
                          mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 700 "trace_counts.m"
                        }
#line 689 "trace_counts.m"
                      else
#line 689 "trace_counts.m"
                        if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "NEGS") == 0))
#line 699 "trace_counts.m"
                          {
#line 699 "trace_counts.m"
                            *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 10;
#line 699 "trace_counts.m"
                            mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 699 "trace_counts.m"
                          }
#line 689 "trace_counts.m"
                        else
#line 689 "trace_counts.m"
                          if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "REDO") == 0))
#line 691 "trace_counts.m"
                            {
#line 691 "trace_counts.m"
                              *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 2;
#line 691 "trace_counts.m"
                              mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 691 "trace_counts.m"
                            }
#line 689 "trace_counts.m"
                          else
#line 689 "trace_counts.m"
                            if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "SWTC") == 0))
#line 703 "trace_counts.m"
                              {
#line 703 "trace_counts.m"
                                *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 14;
#line 703 "trace_counts.m"
                                mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 703 "trace_counts.m"
                              }
#line 689 "trace_counts.m"
                            else
#line 689 "trace_counts.m"
                              if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "TAIL") == 0))
#line 693 "trace_counts.m"
                                {
#line 693 "trace_counts.m"
                                  *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 4;
#line 693 "trace_counts.m"
                                  mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 693 "trace_counts.m"
                                }
#line 689 "trace_counts.m"
                              else
#line 689 "trace_counts.m"
                                if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "THEN") == 0))
#line 696 "trace_counts.m"
                                  {
#line 696 "trace_counts.m"
                                    *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 7;
#line 696 "trace_counts.m"
                                    mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 696 "trace_counts.m"
                                  }
#line 689 "trace_counts.m"
                                else
#line 689 "trace_counts.m"
                                  if ((strcmp(mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "USER") == 0))
#line 704 "trace_counts.m"
                                    {
#line 704 "trace_counts.m"
                                      *mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 15;
#line 704 "trace_counts.m"
                                      mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 704 "trace_counts.m"
                                    }
#line 689 "trace_counts.m"
                                  else
#line 689 "trace_counts.m"
                                    mdbcomp__trace_counts__succeeded = MR_FALSE;
#line 689 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 689 "trace_counts.m"
  }
#line 168 "trace_counts.m"
}

#line 165 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts__write_proc_label_3_p_0(
#line 165 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabel_4)
#line 165 "trace_counts.m"
{
#line 855 "trace_counts.m"
  {
#line 855 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 855 "trace_counts.m"
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__ProcLabel_4)) == (MR_mktag((MR_Integer) 0))))
#line 855 "trace_counts.m"
      {
#line 855 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__DefModuleSym_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 0)));
#line 855 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 1)));
#line 855 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__DeclModuleSym_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 2)));
#line 855 "trace_counts.m"
        MR_String mdbcomp__trace_counts__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 3)));
#line 855 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 4)));
#line 855 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__Mode_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 5)));

#line 866 "trace_counts.m"
        if ((mdbcomp__trace_counts__PredOrFunc_7 == (MR_Integer) 1))
#line 870 "trace_counts.m"
          {
#line 868 "trace_counts.m"
            {
#line 868 "trace_counts.m"
              mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__DeclModuleSym_8, mdbcomp__trace_counts__DefModuleSym_6);
            }
#line 870 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 869 "trace_counts.m"
              {
#line 869 "trace_counts.m"
                {
#line 869 "trace_counts.m"
                  mercury__io__write_string_3_p_0((MR_String) "fproc ");
                }
#line 869 "trace_counts.m"
              }
#line 870 "trace_counts.m"
            else
#line 871 "trace_counts.m"
              {
#line 871 "trace_counts.m"
                MR_String mdbcomp__trace_counts__DeclModule_44;

#line 871 "trace_counts.m"
                {
#line 871 "trace_counts.m"
                  mdbcomp__trace_counts__DeclModule_44 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdbcomp__trace_counts__DeclModuleSym_8);
                }
#line 872 "trace_counts.m"
                {
#line 872 "trace_counts.m"
                  mercury__io__write_string_3_p_0((MR_String) "fprocdecl ");
                }
#line 873 "trace_counts.m"
                {
#line 873 "trace_counts.m"
                  mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__DeclModule_44);
                }
#line 874 "trace_counts.m"
                {
#line 874 "trace_counts.m"
                  mercury__io__write_string_3_p_0((MR_String) " ");
                }
#line 871 "trace_counts.m"
              }
#line 870 "trace_counts.m"
          }
#line 866 "trace_counts.m"
        else
#line 860 "trace_counts.m"
          {
#line 858 "trace_counts.m"
            {
#line 858 "trace_counts.m"
              mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__DeclModuleSym_8, mdbcomp__trace_counts__DefModuleSym_6);
            }
#line 860 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 859 "trace_counts.m"
              {
#line 859 "trace_counts.m"
                {
#line 859 "trace_counts.m"
                  mercury__io__write_string_3_p_0((MR_String) "pproc ");
                }
#line 859 "trace_counts.m"
              }
#line 860 "trace_counts.m"
            else
#line 861 "trace_counts.m"
              {
#line 861 "trace_counts.m"
                MR_String mdbcomp__trace_counts__DeclModule_12;

#line 861 "trace_counts.m"
                {
#line 861 "trace_counts.m"
                  mdbcomp__trace_counts__DeclModule_12 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdbcomp__trace_counts__DeclModuleSym_8);
                }
#line 862 "trace_counts.m"
                {
#line 862 "trace_counts.m"
                  mercury__io__write_string_3_p_0((MR_String) "pprocdecl ");
                }
#line 863 "trace_counts.m"
                {
#line 863 "trace_counts.m"
                  mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__DeclModule_12);
                }
#line 864 "trace_counts.m"
                {
#line 864 "trace_counts.m"
                  mercury__io__write_string_3_p_0((MR_String) " ");
                }
#line 861 "trace_counts.m"
              }
#line 860 "trace_counts.m"
          }
#line 877 "trace_counts.m"
        {
#line 877 "trace_counts.m"
          mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__Name_9);
        }
#line 878 "trace_counts.m"
        {
#line 878 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 879 "trace_counts.m"
        {
#line 879 "trace_counts.m"
          mercury__io__write_int_3_p_0(mdbcomp__trace_counts__Arity_10);
        }
#line 880 "trace_counts.m"
        {
#line 880 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 881 "trace_counts.m"
        {
#line 881 "trace_counts.m"
          mercury__io__write_int_3_p_0(mdbcomp__trace_counts__Mode_11);
        }
#line 882 "trace_counts.m"
        {
#line 882 "trace_counts.m"
          mercury__io__nl_2_p_0();
#line 882 "trace_counts.m"
          return;
        }
#line 855 "trace_counts.m"
      }
#line 855 "trace_counts.m"
    else
#line 885 "trace_counts.m"
      {
#line 886 "trace_counts.m"
        {
#line 886 "trace_counts.m"
          mercury__require__error_1_p_0((MR_String) "write_proc_label: special_pred");
#line 886 "trace_counts.m"
          return;
        }
#line 885 "trace_counts.m"
      }
#line 855 "trace_counts.m"
  }
#line 165 "trace_counts.m"
}

#line 806 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0_1(
#line 806 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 806 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 806 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 806 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 806 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4,
#line 806 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_5,
#line 806 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_6,
#line 806 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_7,
#line 806 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_8)
#line 806 "trace_counts.m"
{
#line 806 "trace_counts.m"
  {
#line 806 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 806 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv1_STATE_VARIABLE_CurModuleNameSym_19;
#line 806 "trace_counts.m"
    MR_String mdbcomp__trace_counts__conv0_STATE_VARIABLE_CurFileName_21;

#line 806 "trace_counts.m"
    {
#line 806 "trace_counts.m"
      mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3), &mdbcomp__trace_counts__conv1_STATE_VARIABLE_CurModuleNameSym_19, ((MR_String) mdbcomp__trace_counts__wrapper_arg_5), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_CurFileName_21);
    }
#line 806 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_4 = ((MR_Box) (mdbcomp__trace_counts__conv1_STATE_VARIABLE_CurModuleNameSym_19));
#line 806 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_6 = ((MR_Box) (mdbcomp__trace_counts__conv0_STATE_VARIABLE_CurFileName_21));
#line 806 "trace_counts.m"
  }
#line 806 "trace_counts.m"
}

#line 160 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0(
#line 160 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__FileType_7,
#line 160 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCounts_8,
#line 160 "trace_counts.m"
  MR_String mdbcomp__trace_counts__FileName_9,
#line 160 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__Result_10)
#line 160 "trace_counts.m"
{
#line 785 "trace_counts.m"
  {
#line 785 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 785 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__TellResult_12;

#line 786 "trace_counts.m"
    {
#line 786 "trace_counts.m"
      mercury__io__tell_4_p_0(mdbcomp__trace_counts__FileName_9, &mdbcomp__trace_counts__TellResult_12);
    }
#line 794 "trace_counts.m"
    if ((mdbcomp__trace_counts__TellResult_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 788 "trace_counts.m"
      {
#line 806 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_27_27;
#line 806 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_28_28;
#line 806 "trace_counts.m"
        MR_Box mdbcomp__trace_counts__conv4_V_27_27;
#line 806 "trace_counts.m"
        MR_Box mdbcomp__trace_counts__conv3_V_28_28;
#line 806 "trace_counts.m"
        MR_Box mdbcomp__trace_counts__conv2_STATE_VARIABLE_IO_20_20;

#line 789 "trace_counts.m"
        *mdbcomp__trace_counts__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 790 "trace_counts.m"
        {
#line 790 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) "Mercury trace counts file");
        }
#line 791 "trace_counts.m"
        {
#line 791 "trace_counts.m"
          mercury__io__nl_2_p_0();
        }
#line 803 "trace_counts.m"
        {
#line 803 "trace_counts.m"
          mercury__io__write_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, ((MR_Box) (mdbcomp__trace_counts__FileType_7)));
        }
#line 804 "trace_counts.m"
        {
#line 804 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) ".");
        }
#line 805 "trace_counts.m"
        {
#line 805 "trace_counts.m"
          mercury__io__nl_2_p_0();
        }
#line 806 "trace_counts.m"
        {
#line 806 "trace_counts.m"
          mercury__map__foldl3_8_p_2((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[5], mdbcomp__trace_counts__TraceCounts_8, ((MR_Box) (&mdbcomp__trace_counts_scalar_common_3[7])), &mdbcomp__trace_counts__conv4_V_27_27, ((MR_Box) ((MR_String) "")), &mdbcomp__trace_counts__conv3_V_28_28, ((MR_Box) ((MR_Integer) 0)), &mdbcomp__trace_counts__conv2_STATE_VARIABLE_IO_20_20);
        }
#line 806 "trace_counts.m"
        mdbcomp__trace_counts__V_27_27 = ((MR_Word) mdbcomp__trace_counts__conv4_V_27_27);
#line 806 "trace_counts.m"
        mdbcomp__trace_counts__V_28_28 = ((MR_String) mdbcomp__trace_counts__conv3_V_28_28);
#line 793 "trace_counts.m"
        {
#line 793 "trace_counts.m"
          mercury__io__told_2_p_0();
#line 793 "trace_counts.m"
          return;
        }
#line 788 "trace_counts.m"
      }
#line 794 "trace_counts.m"
    else
#line 796 "trace_counts.m"
      *mdbcomp__trace_counts__Result_10 = mdbcomp__trace_counts__TellResult_12;
#line 785 "trace_counts.m"
  }
#line 160 "trace_counts.m"
}

#line 151 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts__read_and_union_trace_counts_8_p_0(
#line 151 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ShowProgress_9,
#line 151 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__Files_10,
#line 151 "trace_counts.m"
  MR_Integer * mdbcomp__trace_counts__NumTests_11,
#line 151 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__TestKinds_12,
#line 151 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__TraceCounts_13,
#line 151 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__MaybeError_14)
#line 151 "trace_counts.m"
{
#line 741 "trace_counts.m"
  {
#line 741 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 741 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__FileType_16;
#line 741 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_24_24;

#line 743 "trace_counts.m"
    {
#line 743 "trace_counts.m"
      mdbcomp__trace_counts__V_24_24 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0]);
    }
#line 742 "trace_counts.m"
    {
#line 742 "trace_counts.m"
      mdbcomp__trace_counts__read_and_union_trace_counts_2_9_p_0(mdbcomp__trace_counts__ShowProgress_9, mdbcomp__trace_counts__Files_10, (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[1]), &mdbcomp__trace_counts__FileType_16, mdbcomp__trace_counts__V_24_24, mdbcomp__trace_counts__TraceCounts_13, mdbcomp__trace_counts__MaybeError_14);
    }
#line 747 "trace_counts.m"
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__FileType_16)) == (MR_mktag((MR_Integer) 2))))
#line 751 "trace_counts.m"
      {
#line 752 "trace_counts.m"
        {
#line 752 "trace_counts.m"
          mercury__require__error_1_p_0((MR_String) "read_and_union_trace_counts: diff_file");
#line 752 "trace_counts.m"
          return;
        }
#line 751 "trace_counts.m"
      }
#line 747 "trace_counts.m"
    else
#line 747 "trace_counts.m"
      if (((MR_tag((MR_Word) mdbcomp__trace_counts__FileType_16)) == (MR_mktag((MR_Integer) 0))))
#line 748 "trace_counts.m"
        {
#line 749 "trace_counts.m"
          {
#line 749 "trace_counts.m"
            mercury__require__error_1_p_0((MR_String) "read_and_union_trace_counts: single_file");
#line 749 "trace_counts.m"
            return;
          }
#line 748 "trace_counts.m"
        }
#line 747 "trace_counts.m"
      else
#line 745 "trace_counts.m"
        {
#line 745 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__TestKindList_17;

#line 745 "trace_counts.m"
          *mdbcomp__trace_counts__NumTests_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileType_16, (MR_Integer) 0)));
#line 745 "trace_counts.m"
          mdbcomp__trace_counts__TestKindList_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileType_16, (MR_Integer) 1)));
#line 746 "trace_counts.m"
          {
#line 746 "trace_counts.m"
            mercury__set__list_to_set_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__TestKindList_17, mdbcomp__trace_counts__TestKinds_12);
#line 746 "trace_counts.m"
            return;
          }
#line 745 "trace_counts.m"
        }
#line 741 "trace_counts.m"
  }
#line 151 "trace_counts.m"
}

#line 134 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_source_4_p_0(
#line 134 "trace_counts.m"
  MR_String mdbcomp__trace_counts__FileName_5,
#line 134 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__Result_6)
#line 134 "trace_counts.m"
{
#line 289 "trace_counts.m"
  {
#line 289 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 289 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__ReadTCResult_8;

#line 290 "trace_counts.m"
    {
#line 290 "trace_counts.m"
      mdbcomp__trace_counts__read_trace_counts_4_p_0(mdbcomp__trace_counts__FileName_5, &mdbcomp__trace_counts__ReadTCResult_8);
    }
#line 294 "trace_counts.m"
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__ReadTCResult_8)) == (MR_mktag((MR_Integer) 2))))
#line 309 "trace_counts.m"
      {
#line 309 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_16_16;
#line 309 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_18_18;
#line 309 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_20_20;
#line 309 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_21_21;
#line 309 "trace_counts.m"
        MR_String mdbcomp__trace_counts__ErrMsg_45 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 0)));

#line 311 "trace_counts.m"
        {
#line 311 "trace_counts.m"
          mdbcomp__trace_counts__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_45);
        }
#line 311 "trace_counts.m"
        {
#line 311 "trace_counts.m"
          mdbcomp__trace_counts__V_20_20 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_5, mdbcomp__trace_counts__V_21_21);
        }
#line 311 "trace_counts.m"
        {
#line 311 "trace_counts.m"
          mdbcomp__trace_counts__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "from file \140", mdbcomp__trace_counts__V_20_20);
        }
#line 310 "trace_counts.m"
        {
#line 310 "trace_counts.m"
          mdbcomp__trace_counts__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading trace counts ", mdbcomp__trace_counts__V_18_18);
        }
#line 310 "trace_counts.m"
        {
#line 310 "trace_counts.m"
          MR_Word base;
#line 310 "trace_counts.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 310 "trace_counts.m"
          *mdbcomp__trace_counts__Result_6 = base;
#line 310 "trace_counts.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_16_16));
#line 310 "trace_counts.m"
        }
#line 309 "trace_counts.m"
      }
#line 294 "trace_counts.m"
    else
#line 294 "trace_counts.m"
      if (((MR_tag((MR_Word) mdbcomp__trace_counts__ReadTCResult_8)) == (MR_mktag((MR_Integer) 0))))
#line 292 "trace_counts.m"
        {
#line 292 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__FileType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 0)));
#line 292 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__TraceCount_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 1)));

#line 293 "trace_counts.m"
          {
#line 293 "trace_counts.m"
            MR_Word base;
#line 293 "trace_counts.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 293 "trace_counts.m"
            *mdbcomp__trace_counts__Result_6 = base;
#line 293 "trace_counts.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__trace_counts__FileType_9));
#line 293 "trace_counts.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__trace_counts__TraceCount_10));
#line 293 "trace_counts.m"
          }
#line 292 "trace_counts.m"
        }
#line 294 "trace_counts.m"
      else
#line 294 "trace_counts.m"
        if (((MR_tag((MR_Word) mdbcomp__trace_counts__ReadTCResult_8)) == (MR_mktag((MR_Integer) 1))))
#line 305 "trace_counts.m"
          {
#line 305 "trace_counts.m"
            MR_String mdbcomp__trace_counts__V_23_23;
#line 305 "trace_counts.m"
            MR_String mdbcomp__trace_counts__V_25_25;
#line 305 "trace_counts.m"
            MR_String mdbcomp__trace_counts__V_26_26;
#line 305 "trace_counts.m"
            MR_String mdbcomp__trace_counts__ErrMsg_44 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 0)));

#line 307 "trace_counts.m"
            {
#line 307 "trace_counts.m"
              mdbcomp__trace_counts__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_44);
            }
#line 307 "trace_counts.m"
            {
#line 307 "trace_counts.m"
              mdbcomp__trace_counts__V_25_25 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_5, mdbcomp__trace_counts__V_26_26);
            }
#line 306 "trace_counts.m"
            {
#line 306 "trace_counts.m"
              mdbcomp__trace_counts__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "Syntax error in file \140", mdbcomp__trace_counts__V_25_25);
            }
#line 306 "trace_counts.m"
            {
#line 306 "trace_counts.m"
              MR_Word base;
#line 306 "trace_counts.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 306 "trace_counts.m"
              *mdbcomp__trace_counts__Result_6 = base;
#line 306 "trace_counts.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_23_23));
#line 306 "trace_counts.m"
            }
#line 305 "trace_counts.m"
          }
#line 294 "trace_counts.m"
        else
#line 294 "trace_counts.m"
          if (((((MR_tag((MR_Word) mdbcomp__trace_counts__ReadTCResult_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 295 "trace_counts.m"
            {
#line 295 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__IOError_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 1)));
#line 295 "trace_counts.m"
              MR_String mdbcomp__trace_counts__ErrMsg_12;
#line 295 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_35_35;
#line 295 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_37_37;
#line 295 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_39_39;
#line 295 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_40_40;

#line 296 "trace_counts.m"
              {
#line 296 "trace_counts.m"
                mdbcomp__trace_counts__ErrMsg_12 = mercury__io__error_message_1_f_0(mdbcomp__trace_counts__IOError_11);
              }
#line 298 "trace_counts.m"
              {
#line 298 "trace_counts.m"
                mdbcomp__trace_counts__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_12);
              }
#line 298 "trace_counts.m"
              {
#line 298 "trace_counts.m"
                mdbcomp__trace_counts__V_39_39 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_5, mdbcomp__trace_counts__V_40_40);
              }
#line 298 "trace_counts.m"
              {
#line 298 "trace_counts.m"
                mdbcomp__trace_counts__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_39_39);
              }
#line 297 "trace_counts.m"
              {
#line 297 "trace_counts.m"
                mdbcomp__trace_counts__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) "IO error reading file ", mdbcomp__trace_counts__V_37_37);
              }
#line 297 "trace_counts.m"
              {
#line 297 "trace_counts.m"
                MR_Word base;
#line 297 "trace_counts.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 297 "trace_counts.m"
                *mdbcomp__trace_counts__Result_6 = base;
#line 297 "trace_counts.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_35_35));
#line 297 "trace_counts.m"
              }
#line 295 "trace_counts.m"
            }
#line 294 "trace_counts.m"
          else
#line 300 "trace_counts.m"
            {
#line 300 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_28_28;
#line 300 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_30_30;
#line 300 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_32_32;
#line 300 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_33_33;
#line 300 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__IOError_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 1)));
#line 300 "trace_counts.m"
              MR_String mdbcomp__trace_counts__ErrMsg_43;

#line 301 "trace_counts.m"
              {
#line 301 "trace_counts.m"
                mdbcomp__trace_counts__ErrMsg_43 = mercury__io__error_message_1_f_0(mdbcomp__trace_counts__IOError_42);
              }
#line 303 "trace_counts.m"
              {
#line 303 "trace_counts.m"
                mdbcomp__trace_counts__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_43);
              }
#line 303 "trace_counts.m"
              {
#line 303 "trace_counts.m"
                mdbcomp__trace_counts__V_32_32 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_5, mdbcomp__trace_counts__V_33_33);
              }
#line 303 "trace_counts.m"
              {
#line 303 "trace_counts.m"
                mdbcomp__trace_counts__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_32_32);
              }
#line 302 "trace_counts.m"
              {
#line 302 "trace_counts.m"
                mdbcomp__trace_counts__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "IO error opening file ", mdbcomp__trace_counts__V_30_30);
              }
#line 302 "trace_counts.m"
              {
#line 302 "trace_counts.m"
                MR_Word base;
#line 302 "trace_counts.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 302 "trace_counts.m"
                *mdbcomp__trace_counts__Result_6 = base;
#line 302 "trace_counts.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_28_28));
#line 302 "trace_counts.m"
              }
#line 300 "trace_counts.m"
            }
#line 289 "trace_counts.m"
  }
#line 134 "trace_counts.m"
}

#line 127 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_list_5_p_0(
#line 127 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ShowProgress_6,
#line 127 "trace_counts.m"
  MR_String mdbcomp__trace_counts__FileName_7,
#line 127 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__Result_8)
#line 127 "trace_counts.m"
{
#line 314 "trace_counts.m"
  {
#line 314 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 314 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__OpenResult_10;

#line 315 "trace_counts.m"
    {
#line 315 "trace_counts.m"
      mercury__io__open_input_4_p_0(mdbcomp__trace_counts__FileName_7, &mdbcomp__trace_counts__OpenResult_10);
    }
#line 320 "trace_counts.m"
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__OpenResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 321 "trace_counts.m"
      {
#line 321 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__IOError_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__OpenResult_10, (MR_Integer) 0)));
#line 321 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_16_16;
#line 321 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_18_18;
#line 321 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_19_19;
#line 321 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_21_21;

#line 323 "trace_counts.m"
        {
#line 323 "trace_counts.m"
          mdbcomp__trace_counts__V_21_21 = mercury__string__string_1_f_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__IOError_12)));
        }
#line 323 "trace_counts.m"
        {
#line 323 "trace_counts.m"
          mdbcomp__trace_counts__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__V_21_21);
        }
#line 322 "trace_counts.m"
        {
#line 322 "trace_counts.m"
          mdbcomp__trace_counts__V_18_18 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_7, mdbcomp__trace_counts__V_19_19);
        }
#line 322 "trace_counts.m"
        {
#line 322 "trace_counts.m"
          mdbcomp__trace_counts__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "Error opening file \140", mdbcomp__trace_counts__V_18_18);
        }
#line 322 "trace_counts.m"
        {
#line 322 "trace_counts.m"
          MR_Word base;
#line 322 "trace_counts.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 322 "trace_counts.m"
          *mdbcomp__trace_counts__Result_8 = base;
#line 322 "trace_counts.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_16_16));
#line 322 "trace_counts.m"
        }
#line 321 "trace_counts.m"
      }
#line 320 "trace_counts.m"
    else
#line 317 "trace_counts.m"
      {
#line 317 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__FileStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__OpenResult_10, (MR_Integer) 0)));
#line 317 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_23_23;

#line 319 "trace_counts.m"
        {
#line 319 "trace_counts.m"
          mdbcomp__trace_counts__V_23_23 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0]);
        }
#line 318 "trace_counts.m"
        {
#line 318 "trace_counts.m"
          mdbcomp__trace_counts__read_trace_counts_list_stream_8_p_0(mdbcomp__trace_counts__ShowProgress_6, (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[1]), mdbcomp__trace_counts__V_23_23, mdbcomp__trace_counts__FileName_7, mdbcomp__trace_counts__FileStream_11, mdbcomp__trace_counts__Result_8);
#line 318 "trace_counts.m"
          return;
        }
#line 317 "trace_counts.m"
      }
#line 314 "trace_counts.m"
  }
#line 127 "trace_counts.m"
}

#line 414 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_4_p_0_1(
#line 414 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 414 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 414 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 414 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3)
#line 414 "trace_counts.m"
{
#line 414 "trace_counts.m"
  {
#line 414 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 414 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv0_ReadResult_4;

#line 414 "trace_counts.m"
    {
#line 414 "trace_counts.m"
      mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_p_0(&mdbcomp__trace_counts__conv0_ReadResult_4);
    }
#line 414 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_ReadResult_4));
#line 414 "trace_counts.m"
  }
#line 414 "trace_counts.m"
}

#line 113 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_4_p_0(
#line 113 "trace_counts.m"
  MR_String mdbcomp__trace_counts__FileName_5,
#line 113 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__ReadResult_6)
#line 113 "trace_counts.m"
{
#line 392 "trace_counts.m"
  {
#line 392 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 392 "trace_counts.m"
    MR_String mdbcomp__trace_counts__ActualFileName_10;
#line 392 "trace_counts.m"
    MR_String mdbcomp__trace_counts__GzipCmd_11;
#line 392 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Result_12;
#line 401 "trace_counts.m"
    MR_String mdbcomp__trace_counts__BaseName_8;

#line 397 "trace_counts.m"
    {
#line 397 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = mercury__string__remove_suffix_3_p_0(mdbcomp__trace_counts__FileName_5, (MR_String) ".gz", &mdbcomp__trace_counts__BaseName_8);
    }
#line 401 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 398 "trace_counts.m"
      {
#line 398 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_23_23;
#line 398 "trace_counts.m"
        MR_Word mdbcomp__trace_counts___UnzipResult_9;

#line 398 "trace_counts.m"
        {
#line 398 "trace_counts.m"
          mdbcomp__trace_counts__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "gunzip ", mdbcomp__trace_counts__FileName_5);
        }
#line 398 "trace_counts.m"
        {
#line 398 "trace_counts.m"
          mercury__io__call_system_4_p_0(mdbcomp__trace_counts__V_23_23, &mdbcomp__trace_counts___UnzipResult_9);
        }
#line 399 "trace_counts.m"
        mdbcomp__trace_counts__ActualFileName_10 = mdbcomp__trace_counts__BaseName_8;
#line 400 "trace_counts.m"
        {
#line 400 "trace_counts.m"
          mdbcomp__trace_counts__GzipCmd_11 = mercury__string__f_43_43_2_f_0((MR_String) "gzip ", mdbcomp__trace_counts__BaseName_8);
        }
#line 398 "trace_counts.m"
      }
#line 401 "trace_counts.m"
    else
#line 402 "trace_counts.m"
      {
#line 402 "trace_counts.m"
        mdbcomp__trace_counts__ActualFileName_10 = mdbcomp__trace_counts__FileName_5;
#line 403 "trace_counts.m"
        mdbcomp__trace_counts__GzipCmd_11 = (MR_String) "";
#line 402 "trace_counts.m"
      }
#line 405 "trace_counts.m"
    {
#line 405 "trace_counts.m"
      mercury__io__open_input_4_p_0(mdbcomp__trace_counts__ActualFileName_10, &mdbcomp__trace_counts__Result_12);
    }
#line 421 "trace_counts.m"
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__Result_12)) == (MR_mktag((MR_Integer) 1))))
#line 422 "trace_counts.m"
      {
#line 422 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__IOError_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_12, (MR_Integer) 0)));

#line 423 "trace_counts.m"
        {
#line 423 "trace_counts.m"
          MR_Word base;
#line 423 "trace_counts.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "trace_counts.m"
          *mdbcomp__trace_counts__ReadResult_6 = base;
#line 423 "trace_counts.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 423 "trace_counts.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdbcomp__trace_counts__IOError_18));
#line 423 "trace_counts.m"
        }
#line 422 "trace_counts.m"
      }
#line 421 "trace_counts.m"
    else
#line 407 "trace_counts.m"
      {
#line 407 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__FileStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__Result_12, (MR_Integer) 0)));
#line 407 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__OldInputStream_14;
#line 407 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__IdReadResult_15;
#line 411 "trace_counts.m"
        MR_String mdbcomp__trace_counts__FirstLine_16;
#line 411 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_30_30;
#line 411 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_43_43;
#line 419 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_17_17;

#line 408 "trace_counts.m"
        {
#line 408 "trace_counts.m"
          mercury__io__set_input_stream_4_p_0(mdbcomp__trace_counts__FileStream_13, &mdbcomp__trace_counts__OldInputStream_14);
        }
#line 409 "trace_counts.m"
        {
#line 409 "trace_counts.m"
          mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__IdReadResult_15);
        }
#line 411 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__IdReadResult_15)) == (MR_mktag((MR_Integer) 1)));
#line 411 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 411 "trace_counts.m"
          {
#line 411 "trace_counts.m"
            mdbcomp__trace_counts__FirstLine_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__IdReadResult_15, (MR_Integer) 0)));
#line 412 "trace_counts.m"
            {
#line 412 "trace_counts.m"
              mdbcomp__trace_counts__V_30_30 = mercury__string__rstrip_1_f_0(mdbcomp__trace_counts__FirstLine_16);
            }
#line 433 "trace_counts.m"
            mdbcomp__trace_counts__V_43_43 = (MR_String) "Mercury trace counts file";
#line 412 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_30_30, mdbcomp__trace_counts__V_43_43) == 0);
#line 411 "trace_counts.m"
          }
#line 416 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 414 "trace_counts.m"
          {
#line 414 "trace_counts.m"
            MR_Box mdbcomp__trace_counts__conv2_ReadResult_6;
#line 414 "trace_counts.m"
            MR_Box mdbcomp__trace_counts__conv1_STATE_VARIABLE_IO_32_32;

#line 414 "trace_counts.m"
            {
#line 414 "trace_counts.m"
              mercury__builtin__promise_only_solution_io_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_read_trace_counts_result_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[4], &mdbcomp__trace_counts__conv2_ReadResult_6, ((MR_Box) ((MR_Integer) 0)), &mdbcomp__trace_counts__conv1_STATE_VARIABLE_IO_32_32);
            }
#line 414 "trace_counts.m"
            *mdbcomp__trace_counts__ReadResult_6 = ((MR_Word) mdbcomp__trace_counts__conv2_ReadResult_6);
#line 414 "trace_counts.m"
          }
#line 416 "trace_counts.m"
        else
#line 417 "trace_counts.m"
          {
#line 417 "trace_counts.m"
            *mdbcomp__trace_counts__ReadResult_6 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_3[6]);
#line 417 "trace_counts.m"
          }
#line 419 "trace_counts.m"
        {
#line 419 "trace_counts.m"
          mercury__io__set_input_stream_4_p_0(mdbcomp__trace_counts__OldInputStream_14, &mdbcomp__trace_counts__V_17_17);
        }
#line 420 "trace_counts.m"
        {
#line 420 "trace_counts.m"
          mercury__io__close_input_3_p_0(mdbcomp__trace_counts__FileStream_13);
        }
#line 407 "trace_counts.m"
      }
#line 425 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__GzipCmd_11, (MR_String) "") == 0);
#line 427 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 425 "trace_counts.m"
      {
#line 425 "trace_counts.m"
      }
#line 427 "trace_counts.m"
    else
#line 428 "trace_counts.m"
      {
#line 428 "trace_counts.m"
        MR_Word mdbcomp__trace_counts___ZipResult_19;

#line 428 "trace_counts.m"
        {
#line 428 "trace_counts.m"
          mercury__io__call_system_4_p_0(mdbcomp__trace_counts__GzipCmd_11, &mdbcomp__trace_counts___ZipResult_19);
        }
#line 428 "trace_counts.m"
      }
#line 392 "trace_counts.m"
  }
#line 113 "trace_counts.m"
}

#line 235 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_3_p_0_1(
#line 235 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 235 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 235 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 235 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 235 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4)
#line 235 "trace_counts.m"
{
#line 235 "trace_counts.m"
  {
#line 235 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 235 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_13;

#line 235 "trace_counts.m"
    {
#line 235 "trace_counts.m"
      mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_13);
    }
#line 235 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_4 = ((MR_Box) (mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_13));
#line 235 "trace_counts.m"
  }
#line 235 "trace_counts.m"
}

#line 97 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_3_p_0(
#line 97 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCountsA_4,
#line 97 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCountsB_5,
#line 97 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__TraceCounts_6)
#line 97 "trace_counts.m"
{
#line 234 "trace_counts.m"
  {
#line 234 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 234 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__TypeCtorInfo_13_13;
#line 234 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__TypeInfo_14_14;
#line 234 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_7_7;
#line 234 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_8_8;
#line 235 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__conv1_TraceCounts_6;

#line 235 "trace_counts.m"
    {
#line 235 "trace_counts.m"
      mdbcomp__trace_counts__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 235 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_5[0]));
#line 235 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 1) = ((MR_Box) (mdbcomp__trace_counts__diff_trace_counts_3_p_0_1));
#line 235 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 235 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 3) = ((MR_Box) (mdbcomp__trace_counts__TraceCountsB_5));
#line 235 "trace_counts.m"
    }
#line 10216 "mdbcomp.trace_counts.c"
    mdbcomp__trace_counts__TypeCtorInfo_13_13 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0;
#line 10218 "mdbcomp.trace_counts.c"
    mdbcomp__trace_counts__TypeInfo_14_14 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0];
#line 236 "trace_counts.m"
    {
#line 236 "trace_counts.m"
      mdbcomp__trace_counts__V_8_8 = mercury__map__init_0_f_0(mdbcomp__trace_counts__TypeCtorInfo_13_13, mdbcomp__trace_counts__TypeInfo_14_14);
    }
#line 235 "trace_counts.m"
    {
#line 235 "trace_counts.m"
      mercury__map__foldl_4_p_0(mdbcomp__trace_counts__TypeCtorInfo_13_13, mdbcomp__trace_counts__TypeInfo_14_14, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__V_7_7, mdbcomp__trace_counts__TraceCountsA_4, ((MR_Box) (mdbcomp__trace_counts__V_8_8)), &mdbcomp__trace_counts__conv1_TraceCounts_6);
    }
#line 235 "trace_counts.m"
    *mdbcomp__trace_counts__TraceCounts_6 = ((MR_Word) mdbcomp__trace_counts__conv1_TraceCounts_6);
#line 234 "trace_counts.m"
  }
#line 97 "trace_counts.m"
}

#line 209 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__sum_trace_counts_3_p_0_1(
#line 209 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 209 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 209 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 209 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3)
#line 209 "trace_counts.m"
{
#line 209 "trace_counts.m"
  {
#line 209 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 209 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv0_ProcTraceCounts_6;

#line 209 "trace_counts.m"
    {
#line 209 "trace_counts.m"
      mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), &mdbcomp__trace_counts__conv0_ProcTraceCounts_6);
    }
#line 209 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_3 = ((MR_Box) (mdbcomp__trace_counts__conv0_ProcTraceCounts_6));
#line 209 "trace_counts.m"
  }
#line 209 "trace_counts.m"
}

#line 94 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts__sum_trace_counts_3_p_0(
#line 94 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCountsA_4,
#line 94 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCountsB_5,
#line 94 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__TraceCounts_6)
#line 94 "trace_counts.m"
{
#line 208 "trace_counts.m"
  {
#line 208 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 209 "trace_counts.m"
    {
#line 209 "trace_counts.m"
      mercury__map__union_4_p_1((MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[3], mdbcomp__trace_counts__TraceCountsA_4, mdbcomp__trace_counts__TraceCountsB_5, mdbcomp__trace_counts__TraceCounts_6);
#line 209 "trace_counts.m"
      return;
    }
#line 208 "trace_counts.m"
  }
#line 94 "trace_counts.m"
}

#line 205 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0_1(
#line 205 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 205 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 205 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 205 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3)
#line 205 "trace_counts.m"
{
#line 205 "trace_counts.m"
  {
#line 205 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 205 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv0_TraceCounts_6;

#line 205 "trace_counts.m"
    {
#line 205 "trace_counts.m"
      mdbcomp__trace_counts__sum_trace_counts_3_p_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), &mdbcomp__trace_counts__conv0_TraceCounts_6);
    }
#line 205 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_3 = ((MR_Box) (mdbcomp__trace_counts__conv0_TraceCounts_6));
#line 205 "trace_counts.m"
  }
#line 205 "trace_counts.m"
}

#line 91 "trace_counts.m"
void MR_CALL 
mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0(
#line 91 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCountsList_3,
#line 91 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__TraceCounts_4)
#line 91 "trace_counts.m"
{
#line 204 "trace_counts.m"
  {
#line 204 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TraceCountsList_3)) == (MR_mktag((MR_Integer) 1)));
#line 204 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__TraceCountsPrime_5;
#line 201 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_6_6;

#line 201 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 201 "trace_counts.m"
      {
#line 201 "trace_counts.m"
        mdbcomp__trace_counts__TraceCountsPrime_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TraceCountsList_3, (MR_Integer) 0)));
#line 201 "trace_counts.m"
        mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TraceCountsList_3, (MR_Integer) 1)));
#line 201 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 201 "trace_counts.m"
      }
#line 204 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 203 "trace_counts.m"
      *mdbcomp__trace_counts__TraceCounts_4 = mdbcomp__trace_counts__TraceCountsPrime_5;
#line 204 "trace_counts.m"
    else
#line 205 "trace_counts.m"
      {
#line 205 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__TypeInfo_14_14;
#line 205 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_8_8;
#line 205 "trace_counts.m"
        MR_Box mdbcomp__trace_counts__conv1_TraceCounts_4;

#line 205 "trace_counts.m"
        {
#line 205 "trace_counts.m"
          mdbcomp__trace_counts__V_8_8 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0]);
        }
#line 10379 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__TypeInfo_14_14 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1];
#line 205 "trace_counts.m"
        {
#line 205 "trace_counts.m"
          mercury__list__foldl_4_p_0(mdbcomp__trace_counts__TypeInfo_14_14, mdbcomp__trace_counts__TypeInfo_14_14, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[2], mdbcomp__trace_counts__TraceCountsList_3, ((MR_Box) (mdbcomp__trace_counts__V_8_8)), &mdbcomp__trace_counts__conv1_TraceCounts_4);
        }
#line 205 "trace_counts.m"
        *mdbcomp__trace_counts__TraceCounts_4 = ((MR_Word) mdbcomp__trace_counts__conv1_TraceCounts_4);
#line 205 "trace_counts.m"
      }
#line 204 "trace_counts.m"
  }
#line 91 "trace_counts.m"
}

#line 89 "trace_counts.m"
MR_Word MR_CALL 
mdbcomp__trace_counts__make_path_port_2_f_0(
#line 89 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 89 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 89 "trace_counts.m"
{
#line 718 "trace_counts.m"
  {
#line 718 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 718 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__HeadVar__3_3;

#line 718 "trace_counts.m"
    if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 0))
#line 718 "trace_counts.m"
      {
#line 718 "trace_counts.m"
        mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[0];
#line 718 "trace_counts.m"
      }
#line 718 "trace_counts.m"
    else
#line 718 "trace_counts.m"
      if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 12))
#line 733 "trace_counts.m"
        {
#line 733 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 733 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 733 "trace_counts.m"
        }
#line 718 "trace_counts.m"
      else
#line 718 "trace_counts.m"
        if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 13))
#line 734 "trace_counts.m"
          {
#line 734 "trace_counts.m"
            mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 734 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 734 "trace_counts.m"
          }
#line 718 "trace_counts.m"
        else
#line 718 "trace_counts.m"
          if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 5))
#line 723 "trace_counts.m"
            {
#line 723 "trace_counts.m"
              mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[1];
#line 723 "trace_counts.m"
            }
#line 718 "trace_counts.m"
          else
#line 718 "trace_counts.m"
            if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 1))
#line 719 "trace_counts.m"
              {
#line 719 "trace_counts.m"
                mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[2];
#line 719 "trace_counts.m"
              }
#line 718 "trace_counts.m"
            else
#line 718 "trace_counts.m"
              if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 3))
#line 721 "trace_counts.m"
                {
#line 721 "trace_counts.m"
                  mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[3];
#line 721 "trace_counts.m"
                }
#line 718 "trace_counts.m"
              else
#line 718 "trace_counts.m"
                if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 6))
#line 724 "trace_counts.m"
                  {
#line 724 "trace_counts.m"
                    mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 724 "trace_counts.m"
                    MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 724 "trace_counts.m"
                  }
#line 718 "trace_counts.m"
                else
#line 718 "trace_counts.m"
                  if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 8))
#line 726 "trace_counts.m"
                    {
#line 726 "trace_counts.m"
                      mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 726 "trace_counts.m"
                      MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 726 "trace_counts.m"
                    }
#line 718 "trace_counts.m"
                  else
#line 718 "trace_counts.m"
                    if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 7))
#line 725 "trace_counts.m"
                      {
#line 725 "trace_counts.m"
                        mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 725 "trace_counts.m"
                        MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 725 "trace_counts.m"
                      }
#line 718 "trace_counts.m"
                    else
#line 718 "trace_counts.m"
                      if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 9))
#line 727 "trace_counts.m"
                        {
#line 728 "trace_counts.m"
                          {
#line 728 "trace_counts.m"
                            mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "trace_counts.m"
                            MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) ((MR_Integer) 9));
#line 728 "trace_counts.m"
                            MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 1) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 728 "trace_counts.m"
                          }
#line 727 "trace_counts.m"
                        }
#line 718 "trace_counts.m"
                      else
#line 718 "trace_counts.m"
                        if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 11))
#line 731 "trace_counts.m"
                          {
#line 732 "trace_counts.m"
                            {
#line 732 "trace_counts.m"
                              mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "trace_counts.m"
                              MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) ((MR_Integer) 11));
#line 732 "trace_counts.m"
                              MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 1) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 732 "trace_counts.m"
                            }
#line 731 "trace_counts.m"
                          }
#line 718 "trace_counts.m"
                        else
#line 718 "trace_counts.m"
                          if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 10))
#line 729 "trace_counts.m"
                            {
#line 730 "trace_counts.m"
                              {
#line 730 "trace_counts.m"
                                mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "trace_counts.m"
                                MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) ((MR_Integer) 10));
#line 730 "trace_counts.m"
                                MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 1) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 730 "trace_counts.m"
                              }
#line 729 "trace_counts.m"
                            }
#line 718 "trace_counts.m"
                          else
#line 718 "trace_counts.m"
                            if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 2))
#line 720 "trace_counts.m"
                              {
#line 720 "trace_counts.m"
                                mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[4];
#line 720 "trace_counts.m"
                              }
#line 718 "trace_counts.m"
                            else
#line 718 "trace_counts.m"
                              if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 14))
#line 735 "trace_counts.m"
                                {
#line 735 "trace_counts.m"
                                  mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 735 "trace_counts.m"
                                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 735 "trace_counts.m"
                                }
#line 718 "trace_counts.m"
                              else
#line 718 "trace_counts.m"
                                if ((mdbcomp__trace_counts__HeadVar__2_2 == (MR_Integer) 4))
#line 722 "trace_counts.m"
                                  {
#line 722 "trace_counts.m"
                                    mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 722 "trace_counts.m"
                                    MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 722 "trace_counts.m"
                                  }
#line 718 "trace_counts.m"
                                else
#line 736 "trace_counts.m"
                                  {
#line 736 "trace_counts.m"
                                    mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[5];
#line 736 "trace_counts.m"
                                  }
#line 718 "trace_counts.m"
    return mdbcomp__trace_counts__HeadVar__3_3;
#line 718 "trace_counts.m"
  }
#line 89 "trace_counts.m"
}

#line 63 "trace_counts.m"
MR_Word MR_CALL 
mdbcomp__trace_counts__sum_trace_count_file_type_2_f_0(
#line 63 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__Type1_4,
#line 63 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__Type2_5)
#line 63 "trace_counts.m"
{
#line 946 "trace_counts.m"
  {
#line 946 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 946 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__UnionType_6;

#line 946 "trace_counts.m"
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__Type1_4)) == (MR_mktag((MR_Integer) 2))))
#line 946 "trace_counts.m"
      if (((MR_tag((MR_Word) mdbcomp__trace_counts__Type2_5)) == (MR_mktag((MR_Integer) 2))))
#line 983 "trace_counts.m"
        {
#line 983 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_31_31;
#line 983 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_32_32;
#line 983 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_33_33;

#line 985 "trace_counts.m"
          {
#line 985 "trace_counts.m"
            mdbcomp__trace_counts__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_33_33, 0) = ((MR_Box) (mdbcomp__trace_counts__Type2_5));
#line 985 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 985 "trace_counts.m"
          }
#line 985 "trace_counts.m"
          {
#line 985 "trace_counts.m"
            mdbcomp__trace_counts__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_32_32, 0) = ((MR_Box) (mdbcomp__trace_counts__Type1_4));
#line 985 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_32_32, 1) = ((MR_Box) (mdbcomp__trace_counts__V_33_33));
#line 985 "trace_counts.m"
          }
#line 985 "trace_counts.m"
          {
#line 985 "trace_counts.m"
            mdbcomp__trace_counts__V_31_31 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_32_32);
          }
#line 985 "trace_counts.m"
          {
#line 985 "trace_counts.m"
            mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
#line 985 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_31_31));
#line 985 "trace_counts.m"
          }
#line 983 "trace_counts.m"
        }
#line 946 "trace_counts.m"
      else
#line 946 "trace_counts.m"
        if (((MR_tag((MR_Word) mdbcomp__trace_counts__Type2_5)) == (MR_mktag((MR_Integer) 0))))
#line 974 "trace_counts.m"
          {
#line 974 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_39_39;
#line 974 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_40_40;
#line 974 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_41_41;

#line 976 "trace_counts.m"
            {
#line 976 "trace_counts.m"
              mdbcomp__trace_counts__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "trace_counts.m"
              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_41_41, 0) = ((MR_Box) (mdbcomp__trace_counts__Type2_5));
#line 976 "trace_counts.m"
              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 976 "trace_counts.m"
            }
#line 976 "trace_counts.m"
            {
#line 976 "trace_counts.m"
              mdbcomp__trace_counts__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "trace_counts.m"
              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_40_40, 0) = ((MR_Box) (mdbcomp__trace_counts__Type1_4));
#line 976 "trace_counts.m"
              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_40_40, 1) = ((MR_Box) (mdbcomp__trace_counts__V_41_41));
#line 976 "trace_counts.m"
            }
#line 976 "trace_counts.m"
            {
#line 976 "trace_counts.m"
              mdbcomp__trace_counts__V_39_39 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_40_40);
            }
#line 976 "trace_counts.m"
            {
#line 976 "trace_counts.m"
              mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 976 "trace_counts.m"
              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
#line 976 "trace_counts.m"
              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_39_39));
#line 976 "trace_counts.m"
            }
#line 974 "trace_counts.m"
          }
#line 946 "trace_counts.m"
        else
#line 978 "trace_counts.m"
          {
#line 978 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__TypeCtorInfo_79_79;
#line 978 "trace_counts.m"
            MR_Integer mdbcomp__trace_counts__V_35_35;
#line 978 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_37_37;
#line 978 "trace_counts.m"
            MR_Integer mdbcomp__trace_counts__N_70 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 0)));
#line 978 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__IncludedTypes2_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 1)));
#line 978 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__Set0_89;
#line 978 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__Set_90;

#line 980 "trace_counts.m"
            mdbcomp__trace_counts__V_35_35 = (mdbcomp__trace_counts__N_70 + (MR_Integer) 1);
#line 10749 "mdbcomp.trace_counts.c"
            mdbcomp__trace_counts__TypeCtorInfo_79_79 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;
#line 991 "trace_counts.m"
            {
#line 991 "trace_counts.m"
              mercury__set__list_to_set_2_p_0(mdbcomp__trace_counts__TypeCtorInfo_79_79, mdbcomp__trace_counts__IncludedTypes2_71, &mdbcomp__trace_counts__Set0_89);
            }
#line 992 "trace_counts.m"
            {
#line 992 "trace_counts.m"
              mercury__set__insert_3_p_0(mdbcomp__trace_counts__TypeCtorInfo_79_79, ((MR_Box) (mdbcomp__trace_counts__Type1_4)), mdbcomp__trace_counts__Set0_89, &mdbcomp__trace_counts__Set_90);
            }
#line 993 "trace_counts.m"
            {
#line 993 "trace_counts.m"
              mercury__set__to_sorted_list_2_p_0(mdbcomp__trace_counts__TypeCtorInfo_79_79, mdbcomp__trace_counts__Set_90, &mdbcomp__trace_counts__V_37_37);
            }
#line 980 "trace_counts.m"
            {
#line 980 "trace_counts.m"
              mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "trace_counts.m"
              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_35_35));
#line 980 "trace_counts.m"
              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_37_37));
#line 980 "trace_counts.m"
            }
#line 978 "trace_counts.m"
          }
#line 946 "trace_counts.m"
    else
#line 946 "trace_counts.m"
      if (((MR_tag((MR_Word) mdbcomp__trace_counts__Type1_4)) == (MR_mktag((MR_Integer) 0))))
#line 946 "trace_counts.m"
        if (((MR_tag((MR_Word) mdbcomp__trace_counts__Type2_5)) == (MR_mktag((MR_Integer) 2))))
#line 955 "trace_counts.m"
          {
#line 955 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_53_53;
#line 955 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_54_54;
#line 955 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_55_55;

#line 957 "trace_counts.m"
            {
#line 957 "trace_counts.m"
              mdbcomp__trace_counts__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "trace_counts.m"
              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_55_55, 0) = ((MR_Box) (mdbcomp__trace_counts__Type2_5));
#line 957 "trace_counts.m"
              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 957 "trace_counts.m"
            }
#line 957 "trace_counts.m"
            {
#line 957 "trace_counts.m"
              mdbcomp__trace_counts__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "trace_counts.m"
              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_54_54, 0) = ((MR_Box) (mdbcomp__trace_counts__Type1_4));
#line 957 "trace_counts.m"
              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_54_54, 1) = ((MR_Box) (mdbcomp__trace_counts__V_55_55));
#line 957 "trace_counts.m"
            }
#line 957 "trace_counts.m"
            {
#line 957 "trace_counts.m"
              mdbcomp__trace_counts__V_53_53 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_54_54);
            }
#line 957 "trace_counts.m"
            {
#line 957 "trace_counts.m"
              mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "trace_counts.m"
              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
#line 957 "trace_counts.m"
              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_53_53));
#line 957 "trace_counts.m"
            }
#line 955 "trace_counts.m"
          }
#line 946 "trace_counts.m"
        else
#line 946 "trace_counts.m"
          if (((MR_tag((MR_Word) mdbcomp__trace_counts__Type2_5)) == (MR_mktag((MR_Integer) 0))))
#line 946 "trace_counts.m"
            {
#line 946 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_61_61;
#line 946 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_62_62;
#line 946 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_63_63;

#line 948 "trace_counts.m"
              {
#line 948 "trace_counts.m"
                mdbcomp__trace_counts__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_63_63, 0) = ((MR_Box) (mdbcomp__trace_counts__Type2_5));
#line 948 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 948 "trace_counts.m"
              }
#line 948 "trace_counts.m"
              {
#line 948 "trace_counts.m"
                mdbcomp__trace_counts__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_62_62, 0) = ((MR_Box) (mdbcomp__trace_counts__Type1_4));
#line 948 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_62_62, 1) = ((MR_Box) (mdbcomp__trace_counts__V_63_63));
#line 948 "trace_counts.m"
              }
#line 948 "trace_counts.m"
              {
#line 948 "trace_counts.m"
                mdbcomp__trace_counts__V_61_61 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_62_62);
              }
#line 948 "trace_counts.m"
              {
#line 948 "trace_counts.m"
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
#line 948 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_61_61));
#line 948 "trace_counts.m"
              }
#line 946 "trace_counts.m"
            }
#line 946 "trace_counts.m"
          else
#line 950 "trace_counts.m"
            {
#line 950 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__TypeCtorInfo_73_73 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;
#line 950 "trace_counts.m"
              MR_Integer mdbcomp__trace_counts__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 0)));
#line 950 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__IncludedTypes2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 1)));
#line 950 "trace_counts.m"
              MR_Integer mdbcomp__trace_counts__V_57_57 = (mdbcomp__trace_counts__N_10 + (MR_Integer) 1);
#line 950 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_59_59;
#line 950 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__Set0_94;
#line 950 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__Set_95;

#line 991 "trace_counts.m"
              {
#line 991 "trace_counts.m"
                mercury__set__list_to_set_2_p_0(mdbcomp__trace_counts__TypeCtorInfo_73_73, mdbcomp__trace_counts__IncludedTypes2_11, &mdbcomp__trace_counts__Set0_94);
              }
#line 992 "trace_counts.m"
              {
#line 992 "trace_counts.m"
                mercury__set__insert_3_p_0(mdbcomp__trace_counts__TypeCtorInfo_73_73, ((MR_Box) (mdbcomp__trace_counts__Type1_4)), mdbcomp__trace_counts__Set0_94, &mdbcomp__trace_counts__Set_95);
              }
#line 993 "trace_counts.m"
              {
#line 993 "trace_counts.m"
                mercury__set__to_sorted_list_2_p_0(mdbcomp__trace_counts__TypeCtorInfo_73_73, mdbcomp__trace_counts__Set_95, &mdbcomp__trace_counts__V_59_59);
              }
#line 952 "trace_counts.m"
              {
#line 952 "trace_counts.m"
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_57_57));
#line 952 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_59_59));
#line 952 "trace_counts.m"
              }
#line 950 "trace_counts.m"
            }
#line 946 "trace_counts.m"
      else
#line 946 "trace_counts.m"
        {
#line 946 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type1_4, (MR_Integer) 1)));
#line 946 "trace_counts.m"
          MR_Integer mdbcomp__trace_counts__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type1_4, (MR_Integer) 0)));

#line 946 "trace_counts.m"
          if (((MR_tag((MR_Word) mdbcomp__trace_counts__Type2_5)) == (MR_mktag((MR_Integer) 2))))
#line 969 "trace_counts.m"
            {
#line 969 "trace_counts.m"
              MR_Integer mdbcomp__trace_counts__V_43_43 = (mdbcomp__trace_counts__V_85_85 + (MR_Integer) 1);
#line 969 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_45_45;

#line 972 "trace_counts.m"
              {
#line 972 "trace_counts.m"
                mdbcomp__trace_counts__V_45_45 = mdbcomp__trace_counts__insert_into_list_as_set_2_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_84_84, ((MR_Box) (mdbcomp__trace_counts__Type2_5)));
              }
#line 971 "trace_counts.m"
              {
#line 971 "trace_counts.m"
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_43_43));
#line 971 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_45_45));
#line 971 "trace_counts.m"
              }
#line 969 "trace_counts.m"
            }
#line 946 "trace_counts.m"
          else
#line 946 "trace_counts.m"
            if (((MR_tag((MR_Word) mdbcomp__trace_counts__Type2_5)) == (MR_mktag((MR_Integer) 0))))
#line 959 "trace_counts.m"
              {
#line 959 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_49_49 = (mdbcomp__trace_counts__V_85_85 + (MR_Integer) 1);
#line 959 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_51_51;

#line 962 "trace_counts.m"
                {
#line 962 "trace_counts.m"
                  mdbcomp__trace_counts__V_51_51 = mdbcomp__trace_counts__insert_into_list_as_set_2_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_84_84, ((MR_Box) (mdbcomp__trace_counts__Type2_5)));
                }
#line 961 "trace_counts.m"
                {
#line 961 "trace_counts.m"
                  mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 961 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_49_49));
#line 961 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_51_51));
#line 961 "trace_counts.m"
                }
#line 959 "trace_counts.m"
              }
#line 946 "trace_counts.m"
            else
#line 964 "trace_counts.m"
              {
#line 964 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__TypeCtorInfo_76_76 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;
#line 964 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__N2_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 0)));
#line 964 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_46_46 = (mdbcomp__trace_counts__V_85_85 + mdbcomp__trace_counts__N2_18);
#line 964 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_47_47;
#line 964 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_48_48;
#line 964 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__IncludedTypes2_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 1)));

#line 967 "trace_counts.m"
                {
#line 967 "trace_counts.m"
                  mdbcomp__trace_counts__V_48_48 = mercury__list__f_43_43_2_f_0(mdbcomp__trace_counts__TypeCtorInfo_76_76, mdbcomp__trace_counts__V_84_84, mdbcomp__trace_counts__IncludedTypes2_66);
                }
#line 967 "trace_counts.m"
                {
#line 967 "trace_counts.m"
                  mdbcomp__trace_counts__V_47_47 = mercury__list__sort_and_remove_dups_1_f_0(mdbcomp__trace_counts__TypeCtorInfo_76_76, mdbcomp__trace_counts__V_48_48);
                }
#line 966 "trace_counts.m"
                {
#line 966 "trace_counts.m"
                  mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_46_46));
#line 966 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_47_47));
#line 966 "trace_counts.m"
                }
#line 964 "trace_counts.m"
              }
#line 946 "trace_counts.m"
        }
#line 946 "trace_counts.m"
    return mdbcomp__trace_counts__UnionType_6;
#line 946 "trace_counts.m"
  }
#line 63 "trace_counts.m"
}

void mercury__mdbcomp__trace_counts__init(void)
{
}

void mercury__mdbcomp__trace_counts__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0);
	MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0);
	MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0);
	MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0);
	MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0);
	MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_trace_counts_0);
	MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_read_trace_counts_list_result_0);
	MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_read_trace_counts_result_0);
	MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0);
	MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0);
	MR_register_type_ctor_info(&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_counts_0);
}

void mercury__mdbcomp__trace_counts__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdbcomp.trace_counts. */
