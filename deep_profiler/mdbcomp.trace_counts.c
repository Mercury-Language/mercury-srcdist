/*
** Automatically generated from `trace_counts.m'
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
#include "integer.mih"
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




#line 80 "mdbcomp.trace_counts.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 83 "mdbcomp.trace_counts.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 86 "mdbcomp.trace_counts.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 89 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0;

#line 92 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1;

#line 95 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_value_ordered_all_or_nonzero_0[2];

#line 98 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_name_ordered_all_or_nonzero_0[2];

#line 101 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_all_or_nonzero_0[2];

#line 104 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_base_count_file_type_0_0[2];

#line 107 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0;

#line 110 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_base_count_file_type_0_0[1];

#line 113 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_base_count_file_type_0[1];

#line 116 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_base_count_file_type_0[1];

#line 119 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_base_count_file_type_0[1];

#line 122 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_line_no_and_count_0_0[3];

#line 125 "mdbcomp.trace_counts.c"
static const MR_ConstString mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_line_no_and_count_0_0[3];

#line 128 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0;

#line 131 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_line_no_and_count_0_0[1];

#line 134 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_line_no_and_count_0[1];

#line 137 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_line_no_and_count_0[1];

#line 140 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_line_no_and_count_0[1];

#line 143 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_0[1];

#line 146 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_0;

#line 149 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_1[1];

#line 152 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_1;

#line 155 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_2[2];

#line 158 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_2;

#line 161 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_0[1];

#line 164 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_1[1];

#line 167 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_2[1];

#line 170 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_path_port_0[3];

#line 173 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_path_port_0[3];

#line 176 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_path_port_0[3];

#line 179 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_proc_label_in_context_0_0[3];

#line 182 "mdbcomp.trace_counts.c"
static const MR_ConstString mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_proc_label_in_context_0_0[3];

#line 185 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0;

#line 188 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_proc_label_in_context_0_0[1];

#line 191 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_proc_label_in_context_0[1];

#line 194 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_proc_label_in_context_0[1];

#line 197 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_proc_label_in_context_0[1];

#line 200 "mdbcomp.trace_counts.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 203 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_0[2];

#line 206 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0;

#line 209 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_1[1];

#line 212 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1;

#line 215 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_0[1];

#line 218 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_1[1];

#line 221 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_list_result_0[2];

#line 224 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_list_result_0[2];

#line 227 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_list_result_0[2];

#line 230 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_0[2];

#line 233 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0;

#line 236 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_1[1];

#line 239 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1;

#line 242 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_2[1];

#line 245 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2;

#line 248 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_3[1];

#line 251 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3;

#line 254 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_4[1];

#line 257 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4;

#line 260 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_0[1];

#line 263 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_1[1];

#line 266 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_2[1];

#line 269 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_3[2];

#line 272 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_result_0[4];

#line 275 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_result_0[5];

#line 278 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_result_0[5];

#line 281 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_0[1];

#line 284 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0;

#line 287 "mdbcomp.trace_counts.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__trace_counts__list__ti_list_1mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;

#line 290 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_1[2];

#line 293 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1;

#line 296 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_2[2];

#line 299 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2;

#line 302 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_0[1];

#line 305 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_1[1];

#line 308 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_2[1];

#line 311 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_trace_count_file_type_0[3];

#line 314 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_trace_count_file_type_0[3];

#line 317 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_file_type_0[3];

#line 320 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_syntax_error_0[1];

#line 323 "mdbcomp.trace_counts.c"
static const MR_NotagFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0;

#line 326 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____all_or_nonzero_0_0_10001(
#line 329 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 331 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 334 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____all_or_nonzero_0_0_10001(
#line 337 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 339 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 341 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 344 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____base_count_file_type_0_0_10001(
#line 347 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 349 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 352 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____base_count_file_type_0_0_10001(
#line 355 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 357 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 359 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 362 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____line_no_and_count_0_0_10001(
#line 365 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 367 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 370 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____line_no_and_count_0_0_10001(
#line 373 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 375 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 377 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 380 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____path_port_0_0_10001(
#line 383 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 385 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 388 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____path_port_0_0_10001(
#line 391 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 393 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 395 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 398 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_label_in_context_0_0_10001(
#line 401 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 403 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 406 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_label_in_context_0_0_10001(
#line 409 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 411 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 413 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 416 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_trace_counts_0_0_10001(
#line 419 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 421 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 424 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_trace_counts_0_0_10001(
#line 427 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 429 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 431 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 434 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0_10001(
#line 437 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 439 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 442 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0_10001(
#line 445 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 447 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 449 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 452 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0_10001(
#line 455 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 457 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 460 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0_10001(
#line 463 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 465 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 467 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 470 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_file_type_0_0_10001(
#line 473 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 475 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 478 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_file_type_0_0_10001(
#line 481 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 483 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 485 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 488 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0_10001(
#line 491 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 493 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 496 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0_10001(
#line 499 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 501 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 503 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 506 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_counts_0_0_10001(
#line 509 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 511 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 514 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_counts_0_0_10001(
#line 517 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 519 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 521 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3);

#line 842 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__842__1_2_p_0(
#line 842 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ModuleNameSym_5,
#line 842 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__DefModuleSym_8);

#line 492 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0(
#line 492 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
#line 492 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 492 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__3_3);

#line 492 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0(
#line 492 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 492 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2);

#line 987 "trace_counts.m"
static MR_Word MR_CALL 
mdbcomp__trace_counts__insert_into_list_as_set_2_f_0(
#line 987 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TypeInfo_for_T_9,
#line 987 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__List0_4,
#line 987 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__Item_5);

#line 921 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_2_5_p_0(
#line 921 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ModuleName_6,
#line 921 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_7,
#line 921 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcCounts_8,
#line 921 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_16,
#line 921 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_17);

#line 888 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_path_port_count_4_p_0(
#line 888 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 888 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2);

#line 834 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_2(
#line 834 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 834 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 834 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 834 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 834 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4);

#line 842 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_1(
#line 842 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg);

#line 808 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0(
#line 808 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_9,
#line 808 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__PathPortCounts_10,
#line 808 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_0_18,
#line 808 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_19,
#line 808 "trace_counts.m"
  MR_String mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_0_20,
#line 808 "trace_counts.m"
  MR_String * mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_21);

#line 754 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_and_union_trace_counts_2_9_p_0(
#line 754 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ShowProgress_1,
#line 754 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 754 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3,
#line 754 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_FileType_4,
#line 754 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5,
#line 754 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_6,
#line 754 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__7_7);

#line 641 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts__parse_path_port_line_5_p_0(
#line 641 "trace_counts.m"
  MR_String mdbcomp__trace_counts__Line_6,
#line 641 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__PathPort_7,
#line 641 "trace_counts.m"
  MR_Integer * mdbcomp__trace_counts__LineNumber_8,
#line 641 "trace_counts.m"
  MR_Integer * mdbcomp__trace_counts__ExecCount_9,
#line 641 "trace_counts.m"
  MR_Integer * mdbcomp__trace_counts__NumTests_10);

#line 608 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_2_6_p_0(
#line 608 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_7,
#line 608 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcCounts0_8,
#line 608 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_22,
#line 608 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_23);

#line 495 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_8_p_0(
#line 495 "trace_counts.m"
  MR_Integer mdbcomp__trace_counts__HeaderLineNumber_9,
#line 495 "trace_counts.m"
  MR_String mdbcomp__trace_counts__HeaderLine_10,
#line 495 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__CurModuleNameSym_11,
#line 495 "trace_counts.m"
  MR_String mdbcomp__trace_counts__CurFileName_12,
#line 495 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53,
#line 495 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54);

#line 470 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_setup_4_p_0(
#line 470 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_13,
#line 470 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_14);

#line 443 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_p_0_1(
#line 443 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 443 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 443 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 443 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3);

#line 434 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_p_0(
#line 434 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__ReadResult_4);

#line 329 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_list_stream_8_p_0(
#line 329 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ShowProgress_9,
#line 329 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__FileType0_10,
#line 329 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCounts0_11,
#line 329 "trace_counts.m"
  MR_String mdbcomp__trace_counts__MainFileName_12,
#line 329 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__Stream_13,
#line 329 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__Result_14);

#line 257 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_proc_counts_acc_5_p_0(
#line 257 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsB_6,
#line 257 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__PathPortA_7,
#line 257 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__LineNoCountA_8,
#line 257 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_0_12,
#line 257 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_13);

#line 254 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0_1(
#line 254 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 254 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 254 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 254 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 254 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4);

#line 237 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0(
#line 237 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCountsB_6,
#line 237 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContextA_7,
#line 237 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsA_8,
#line 237 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_12,
#line 237 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_13);

#line 217 "trace_counts.m"
static MR_Word MR_CALL 
mdbcomp__trace_counts__sum_counts_on_line_2_f_0(
#line 217 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__LC1_4,
#line 217 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__LC2_5);

#line 214 "trace_counts.m"
static MR_Box MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0_1(
#line 214 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 214 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 214 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2);

#line 210 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0(
#line 210 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsA_4,
#line 210 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsB_5,
#line 210 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__ProcTraceCounts_6);

#line 918 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0_1(
#line 918 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 918 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 918 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 918 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 918 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4);

#line 805 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0_1(
#line 805 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 805 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 805 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 805 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 805 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4,
#line 805 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_5,
#line 805 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_6,
#line 805 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_7,
#line 805 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_8);

#line 413 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_4_p_0_1(
#line 413 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 413 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 413 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 413 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3);

#line 234 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_3_p_0_1(
#line 234 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 234 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 234 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 234 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 234 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4);

#line 208 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__sum_trace_counts_3_p_0_1(
#line 208 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 208 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 208 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 208 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3);

#line 204 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0_1(
#line 204 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 204 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 204 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 204 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3);


static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_1[8][3];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_2[3][2];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_3[10][1];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_4[4][6];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_5[3][8];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_6[1][11];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_9[2][7];

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_11[1][5];


#line 688 "trace_counts.m"
/* sealed */ struct mdbcomp__trace_counts__vector_common_type_7_0_s {
#line 688 "trace_counts.m"
  const MR_Word mdbcomp__trace_counts__vector_common_type_7_0__vct_7_f_0;
#line 688 "trace_counts.m"
};

static /* final */ const struct mdbcomp__trace_counts__vector_common_type_7_0_s mdbcomp__trace_counts_vector_common_7[16];

#line 688 "trace_counts.m"
/* sealed */ struct mdbcomp__trace_counts__vector_common_type_8_0_s {
#line 688 "trace_counts.m"
  const MR_String mdbcomp__trace_counts__vector_common_type_8_0__vct_8_f_0;
#line 688 "trace_counts.m"
};

static /* final */ const struct mdbcomp__trace_counts__vector_common_type_8_0_s mdbcomp__trace_counts_vector_common_8[16];

#line 552 "trace_counts.m"
/* sealed */ struct mdbcomp__trace_counts__vector_common_type_10_0_s {
#line 552 "trace_counts.m"
  const MR_String mdbcomp__trace_counts__vector_common_type_10_0__vct_10_f_0;
#line 552 "trace_counts.m"
  const MR_Integer mdbcomp__trace_counts__vector_common_type_10_0__vct_10_f_1;
#line 552 "trace_counts.m"
};

static /* final */ const struct mdbcomp__trace_counts__vector_common_type_10_0_s mdbcomp__trace_counts_vector_common_10[4];



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
    ((MR_Box) (&mdbcomp__trace_counts_scalar_common_9[1])),
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

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_9[2][7] = {
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

static /* final */ const MR_Box mdbcomp__trace_counts_scalar_common_11[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};


static /* final */ const struct mdbcomp__trace_counts__vector_common_type_7_0_s mdbcomp__trace_counts_vector_common_7[16] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 6 },
  /* row 2 */   {     (MR_Integer) 12 },
  /* row 3 */   {     (MR_Integer) 13 },
  /* row 4 */   {     (MR_Integer) 8 },
  /* row 5 */   {     (MR_Integer) 5 },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 3 },
  /* row 8 */   {     (MR_Integer) 9 },
  /* row 9 */   {     (MR_Integer) 11 },
  /* row 10 */   {     (MR_Integer) 10 },
  /* row 11 */   {     (MR_Integer) 2 },
  /* row 12 */   {     (MR_Integer) 14 },
  /* row 13 */   {     (MR_Integer) 4 },
  /* row 14 */   {     (MR_Integer) 7 },
  /* row 15 */   {     (MR_Integer) 15 },
};

static /* final */ const struct mdbcomp__trace_counts__vector_common_type_8_0_s mdbcomp__trace_counts_vector_common_8[16] = {
  /* row 0 */   {     (MR_String) "CALL" },
  /* row 1 */   {     (MR_String) "EXIT" },
  /* row 2 */   {     (MR_String) "REDO" },
  /* row 3 */   {     (MR_String) "FAIL" },
  /* row 4 */   {     (MR_String) "TAIL" },
  /* row 5 */   {     (MR_String) "EXCP" },
  /* row 6 */   {     (MR_String) "COND" },
  /* row 7 */   {     (MR_String) "THEN" },
  /* row 8 */   {     (MR_String) "ELSE" },
  /* row 9 */   {     (MR_String) "NEGE" },
  /* row 10 */   {     (MR_String) "NEGS" },
  /* row 11 */   {     (MR_String) "NEGF" },
  /* row 12 */   {     (MR_String) "DSJF" },
  /* row 13 */   {     (MR_String) "DSJL" },
  /* row 14 */   {     (MR_String) "SWTC" },
  /* row 15 */   {     (MR_String) "USER" },
};

static /* final */ const struct mdbcomp__trace_counts__vector_common_type_10_0_s mdbcomp__trace_counts_vector_common_10[4] = {
  /* row 0 */
  {
    (MR_String) "fproc",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "fprocdecl",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "pproc",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "pprocdecl",
    (MR_Integer) 3
  },
};


#include "mdbcomp.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 1233 "mdbcomp.trace_counts.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1242 "mdbcomp.trace_counts.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1251 "mdbcomp.trace_counts.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__trace_counts__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1260 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0 = {
  (MR_String) "user_all",
  (MR_Integer) 0
};

#line 1266 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1 = {
  (MR_String) "user_nonzero",
  (MR_Integer) 1
};

#line 1272 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_value_ordered_all_or_nonzero_0[2] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1
};

#line 1278 "mdbcomp.trace_counts.c"
static const MR_EnumFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__enum_name_ordered_all_or_nonzero_0[2] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_0,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__enum_functor_desc_all_or_nonzero_0_1
};

#line 1284 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_all_or_nonzero_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1290 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__trace_counts____Unify____all_or_nonzero_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____all_or_nonzero_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "all_or_nonzero",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__enum_name_ordered_all_or_nonzero_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__enum_value_ordered_all_or_nonzero_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_all_or_nonzero_0
};

#line 1307 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_base_count_file_type_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_all_or_nonzero_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1313 "mdbcomp.trace_counts.c"
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

#line 1328 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_base_count_file_type_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0
};

#line 1333 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_base_count_file_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_base_count_file_type_0_0
  }
};

#line 1342 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_base_count_file_type_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_base_count_file_type_0_0
};

#line 1347 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_base_count_file_type_0[1] = {
  (MR_Integer) 0
};

#line 1352 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____base_count_file_type_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____base_count_file_type_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "base_count_file_type",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_base_count_file_type_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_base_count_file_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_base_count_file_type_0
};

#line 1369 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_line_no_and_count_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1376 "mdbcomp.trace_counts.c"
static const MR_ConstString mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_line_no_and_count_0_0[3] = {
  (MR_String) "line_number",
  (MR_String) "exec_count",
  (MR_String) "num_tests"
};

#line 1383 "mdbcomp.trace_counts.c"
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

#line 1398 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_line_no_and_count_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0
};

#line 1403 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_line_no_and_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_line_no_and_count_0_0
  }
};

#line 1412 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_line_no_and_count_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_line_no_and_count_0_0
};

#line 1417 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_line_no_and_count_0[1] = {
  (MR_Integer) 0
};

#line 1422 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____line_no_and_count_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____line_no_and_count_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "line_no_and_count",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_line_no_and_count_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_line_no_and_count_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_line_no_and_count_0
};

#line 1439 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0
};

#line 1444 "mdbcomp.trace_counts.c"
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

#line 1459 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 1464 "mdbcomp.trace_counts.c"
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

#line 1479 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_path_port_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 1485 "mdbcomp.trace_counts.c"
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

#line 1500 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_0
};

#line 1505 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_1[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_1
};

#line 1510 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_path_port_0_2[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_2
};

#line 1515 "mdbcomp.trace_counts.c"
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

#line 1534 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_path_port_0[3] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_1,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_2,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_path_port_0_0
};

#line 1541 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_path_port_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1548 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____path_port_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____path_port_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "path_port",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_path_port_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_path_port_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_path_port_0
};

#line 1565 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_proc_label_in_context_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0
};

#line 1572 "mdbcomp.trace_counts.c"
static const MR_ConstString mdbcomp__trace_counts__mdbcomp__trace_counts__field_names_proc_label_in_context_0_0[3] = {
  (MR_String) "context_module_symname",
  (MR_String) "context_filename",
  (MR_String) "proc_label"
};

#line 1579 "mdbcomp.trace_counts.c"
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

#line 1594 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_proc_label_in_context_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0
};

#line 1599 "mdbcomp.trace_counts.c"
static const MR_DuPtagLayout mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_proc_label_in_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_proc_label_in_context_0_0
  }
};

#line 1608 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_proc_label_in_context_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_proc_label_in_context_0_0
};

#line 1613 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_proc_label_in_context_0[1] = {
  (MR_Integer) 0
};

#line 1618 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____proc_label_in_context_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____proc_label_in_context_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "proc_label_in_context",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_proc_label_in_context_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_proc_label_in_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_proc_label_in_context_0
};

#line 1635 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_trace_counts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__trace_counts____Unify____proc_trace_counts_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____proc_trace_counts_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "proc_trace_counts",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1652 "mdbcomp.trace_counts.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0,
    (MR_TypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1661 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
};

#line 1667 "mdbcomp.trace_counts.c"
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

#line 1682 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_list_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1687 "mdbcomp.trace_counts.c"
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

#line 1702 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0
};

#line 1707 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_list_result_0_1[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1
};

#line 1712 "mdbcomp.trace_counts.c"
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

#line 1726 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_list_result_0[2] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_1,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_list_result_0_0
};

#line 1732 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_list_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1738 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_read_trace_counts_list_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "read_trace_counts_list_result",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_list_result_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_list_result_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_list_result_0
};

#line 1755 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
};

#line 1761 "mdbcomp.trace_counts.c"
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

#line 1776 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1781 "mdbcomp.trace_counts.c"
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

#line 1796 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1801 "mdbcomp.trace_counts.c"
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

#line 1816 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 1821 "mdbcomp.trace_counts.c"
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

#line 1836 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_read_trace_counts_result_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 1841 "mdbcomp.trace_counts.c"
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

#line 1856 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0
};

#line 1861 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_1[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1
};

#line 1866 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_2[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2
};

#line 1871 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_read_trace_counts_result_0_3[2] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4
};

#line 1877 "mdbcomp.trace_counts.c"
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

#line 1901 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_result_0[5] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_2,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_4,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_0,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_3,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_read_trace_counts_result_0_1
};

#line 1910 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_result_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 1919 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_read_trace_counts_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "read_trace_counts_result",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_read_trace_counts_result_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_read_trace_counts_result_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_read_trace_counts_result_0
};

#line 1936 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_base_count_file_type_0
};

#line 1941 "mdbcomp.trace_counts.c"
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

#line 1956 "mdbcomp.trace_counts.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__trace_counts__list__ti_list_1mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0
  }
};

#line 1964 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__list__ti_list_1mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0
};

#line 1970 "mdbcomp.trace_counts.c"
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

#line 1985 "mdbcomp.trace_counts.c"
static const MR_PseudoTypeInfo mdbcomp__trace_counts__mdbcomp__trace_counts__field_types_trace_count_file_type_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0
};

#line 1991 "mdbcomp.trace_counts.c"
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

#line 2006 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_0[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0
};

#line 2011 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_1[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1
};

#line 2016 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_stag_ordered_trace_count_file_type_0_2[1] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2
};

#line 2021 "mdbcomp.trace_counts.c"
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

#line 2040 "mdbcomp.trace_counts.c"
static const MR_DuFunctorDescPtr mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_trace_count_file_type_0[3] = {
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_2,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_0,
  &mdbcomp__trace_counts__mdbcomp__trace_counts__du_functor_desc_trace_count_file_type_0_1
};

#line 2047 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_file_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2054 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__trace_counts____Unify____trace_count_file_type_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____trace_count_file_type_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "trace_count_file_type",
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_name_ordered_trace_count_file_type_0 },
  {     mdbcomp__trace_counts__mdbcomp__trace_counts__du_ptag_ordered_trace_count_file_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_file_type_0
};

#line 2071 "mdbcomp.trace_counts.c"
static const MR_Integer mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_syntax_error_0[1] = {
  (MR_Integer) 0
};

#line 2076 "mdbcomp.trace_counts.c"
static const MR_NotagFunctorDesc mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0 = {
  (MR_String) "trace_count_syntax_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 2083 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "trace_count_syntax_error",
  {     &mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0 },
  {     &mdbcomp__trace_counts__mdbcomp__trace_counts__notag_functor_desc_trace_count_syntax_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__trace_counts__mdbcomp__trace_counts__functor_number_map_trace_count_syntax_error_0
};

#line 2100 "mdbcomp.trace_counts.c"
const MR_TypeCtorInfo_Struct mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_counts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__trace_counts____Unify____trace_counts_0_0_10001)),
  ((MR_Box) (mdbcomp__trace_counts____Compare____trace_counts_0_0_10001)),
  (MR_String) "mdbcomp.trace_counts",
  (MR_String) "trace_counts",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__trace_counts__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2117 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____all_or_nonzero_0_0_10001(
#line 2120 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2122 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2124 "mdbcomp.trace_counts.c"
{
#line 2126 "mdbcomp.trace_counts.c"
  {
#line 2128 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2131 "mdbcomp.trace_counts.c"
    {
#line 2133 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____all_or_nonzero_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2136 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2138 "mdbcomp.trace_counts.c"
  }
#line 2140 "mdbcomp.trace_counts.c"
}

#line 2143 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____all_or_nonzero_0_0_10001(
#line 2146 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2148 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2150 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2152 "mdbcomp.trace_counts.c"
{
#line 2154 "mdbcomp.trace_counts.c"
  {
#line 2156 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2159 "mdbcomp.trace_counts.c"
    {
#line 2161 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____all_or_nonzero_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2164 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2166 "mdbcomp.trace_counts.c"
  }
#line 2168 "mdbcomp.trace_counts.c"
}

#line 2171 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____base_count_file_type_0_0_10001(
#line 2174 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2176 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2178 "mdbcomp.trace_counts.c"
{
#line 2180 "mdbcomp.trace_counts.c"
  {
#line 2182 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2185 "mdbcomp.trace_counts.c"
    {
#line 2187 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____base_count_file_type_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2190 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2192 "mdbcomp.trace_counts.c"
  }
#line 2194 "mdbcomp.trace_counts.c"
}

#line 2197 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____base_count_file_type_0_0_10001(
#line 2200 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2202 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2204 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2206 "mdbcomp.trace_counts.c"
{
#line 2208 "mdbcomp.trace_counts.c"
  {
#line 2210 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2213 "mdbcomp.trace_counts.c"
    {
#line 2215 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____base_count_file_type_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2218 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2220 "mdbcomp.trace_counts.c"
  }
#line 2222 "mdbcomp.trace_counts.c"
}

#line 2225 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____line_no_and_count_0_0_10001(
#line 2228 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2230 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2232 "mdbcomp.trace_counts.c"
{
#line 2234 "mdbcomp.trace_counts.c"
  {
#line 2236 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2239 "mdbcomp.trace_counts.c"
    {
#line 2241 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____line_no_and_count_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2244 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2246 "mdbcomp.trace_counts.c"
  }
#line 2248 "mdbcomp.trace_counts.c"
}

#line 2251 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____line_no_and_count_0_0_10001(
#line 2254 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2256 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2258 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2260 "mdbcomp.trace_counts.c"
{
#line 2262 "mdbcomp.trace_counts.c"
  {
#line 2264 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2267 "mdbcomp.trace_counts.c"
    {
#line 2269 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____line_no_and_count_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2272 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2274 "mdbcomp.trace_counts.c"
  }
#line 2276 "mdbcomp.trace_counts.c"
}

#line 2279 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____path_port_0_0_10001(
#line 2282 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2284 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2286 "mdbcomp.trace_counts.c"
{
#line 2288 "mdbcomp.trace_counts.c"
  {
#line 2290 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2293 "mdbcomp.trace_counts.c"
    {
#line 2295 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2298 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2300 "mdbcomp.trace_counts.c"
  }
#line 2302 "mdbcomp.trace_counts.c"
}

#line 2305 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____path_port_0_0_10001(
#line 2308 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2310 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2312 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2314 "mdbcomp.trace_counts.c"
{
#line 2316 "mdbcomp.trace_counts.c"
  {
#line 2318 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2321 "mdbcomp.trace_counts.c"
    {
#line 2323 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2326 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2328 "mdbcomp.trace_counts.c"
  }
#line 2330 "mdbcomp.trace_counts.c"
}

#line 2333 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_label_in_context_0_0_10001(
#line 2336 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2338 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2340 "mdbcomp.trace_counts.c"
{
#line 2342 "mdbcomp.trace_counts.c"
  {
#line 2344 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2347 "mdbcomp.trace_counts.c"
    {
#line 2349 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____proc_label_in_context_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2352 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2354 "mdbcomp.trace_counts.c"
  }
#line 2356 "mdbcomp.trace_counts.c"
}

#line 2359 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_label_in_context_0_0_10001(
#line 2362 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2364 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2366 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2368 "mdbcomp.trace_counts.c"
{
#line 2370 "mdbcomp.trace_counts.c"
  {
#line 2372 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2375 "mdbcomp.trace_counts.c"
    {
#line 2377 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____proc_label_in_context_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2380 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2382 "mdbcomp.trace_counts.c"
  }
#line 2384 "mdbcomp.trace_counts.c"
}

#line 2387 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____proc_trace_counts_0_0_10001(
#line 2390 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2392 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2394 "mdbcomp.trace_counts.c"
{
#line 2396 "mdbcomp.trace_counts.c"
  {
#line 2398 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2401 "mdbcomp.trace_counts.c"
    {
#line 2403 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____proc_trace_counts_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2406 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2408 "mdbcomp.trace_counts.c"
  }
#line 2410 "mdbcomp.trace_counts.c"
}

#line 2413 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____proc_trace_counts_0_0_10001(
#line 2416 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2418 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2420 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2422 "mdbcomp.trace_counts.c"
{
#line 2424 "mdbcomp.trace_counts.c"
  {
#line 2426 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2429 "mdbcomp.trace_counts.c"
    {
#line 2431 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____proc_trace_counts_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2434 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2436 "mdbcomp.trace_counts.c"
  }
#line 2438 "mdbcomp.trace_counts.c"
}

#line 2441 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0_10001(
#line 2444 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2446 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2448 "mdbcomp.trace_counts.c"
{
#line 2450 "mdbcomp.trace_counts.c"
  {
#line 2452 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2455 "mdbcomp.trace_counts.c"
    {
#line 2457 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____read_trace_counts_list_result_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2460 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2462 "mdbcomp.trace_counts.c"
  }
#line 2464 "mdbcomp.trace_counts.c"
}

#line 2467 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0_10001(
#line 2470 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2472 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2474 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2476 "mdbcomp.trace_counts.c"
{
#line 2478 "mdbcomp.trace_counts.c"
  {
#line 2480 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2483 "mdbcomp.trace_counts.c"
    {
#line 2485 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____read_trace_counts_list_result_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2488 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2490 "mdbcomp.trace_counts.c"
  }
#line 2492 "mdbcomp.trace_counts.c"
}

#line 2495 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0_10001(
#line 2498 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2500 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2502 "mdbcomp.trace_counts.c"
{
#line 2504 "mdbcomp.trace_counts.c"
  {
#line 2506 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2509 "mdbcomp.trace_counts.c"
    {
#line 2511 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____read_trace_counts_result_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2514 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2516 "mdbcomp.trace_counts.c"
  }
#line 2518 "mdbcomp.trace_counts.c"
}

#line 2521 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0_10001(
#line 2524 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2526 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2528 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2530 "mdbcomp.trace_counts.c"
{
#line 2532 "mdbcomp.trace_counts.c"
  {
#line 2534 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2537 "mdbcomp.trace_counts.c"
    {
#line 2539 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____read_trace_counts_result_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2542 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2544 "mdbcomp.trace_counts.c"
  }
#line 2546 "mdbcomp.trace_counts.c"
}

#line 2549 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_file_type_0_0_10001(
#line 2552 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2554 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2556 "mdbcomp.trace_counts.c"
{
#line 2558 "mdbcomp.trace_counts.c"
  {
#line 2560 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2563 "mdbcomp.trace_counts.c"
    {
#line 2565 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2568 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2570 "mdbcomp.trace_counts.c"
  }
#line 2572 "mdbcomp.trace_counts.c"
}

#line 2575 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_file_type_0_0_10001(
#line 2578 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2580 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2582 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2584 "mdbcomp.trace_counts.c"
{
#line 2586 "mdbcomp.trace_counts.c"
  {
#line 2588 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2591 "mdbcomp.trace_counts.c"
    {
#line 2593 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____trace_count_file_type_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2596 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2598 "mdbcomp.trace_counts.c"
  }
#line 2600 "mdbcomp.trace_counts.c"
}

#line 2603 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0_10001(
#line 2606 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2608 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2610 "mdbcomp.trace_counts.c"
{
#line 2612 "mdbcomp.trace_counts.c"
  {
#line 2614 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2617 "mdbcomp.trace_counts.c"
    {
#line 2619 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2622 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2624 "mdbcomp.trace_counts.c"
  }
#line 2626 "mdbcomp.trace_counts.c"
}

#line 2629 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0_10001(
#line 2632 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2634 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2636 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2638 "mdbcomp.trace_counts.c"
{
#line 2640 "mdbcomp.trace_counts.c"
  {
#line 2642 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2645 "mdbcomp.trace_counts.c"
    {
#line 2647 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2650 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2652 "mdbcomp.trace_counts.c"
  }
#line 2654 "mdbcomp.trace_counts.c"
}

#line 2657 "mdbcomp.trace_counts.c"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_counts_0_0_10001(
#line 2660 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 2662 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 2664 "mdbcomp.trace_counts.c"
{
#line 2666 "mdbcomp.trace_counts.c"
  {
#line 2668 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 2671 "mdbcomp.trace_counts.c"
    {
#line 2673 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_counts_0_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 2676 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 2678 "mdbcomp.trace_counts.c"
  }
#line 2680 "mdbcomp.trace_counts.c"
}

#line 2683 "mdbcomp.trace_counts.c"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_counts_0_0_10001(
#line 2686 "mdbcomp.trace_counts.c"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 2688 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 2690 "mdbcomp.trace_counts.c"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3)
#line 2692 "mdbcomp.trace_counts.c"
{
#line 2694 "mdbcomp.trace_counts.c"
  {
#line 2696 "mdbcomp.trace_counts.c"
    MR_Word mdbcomp__trace_counts__conv0_HeadVar__1_1;

#line 2699 "mdbcomp.trace_counts.c"
    {
#line 2701 "mdbcomp.trace_counts.c"
      mdbcomp__trace_counts____Compare____trace_counts_0_0(&mdbcomp__trace_counts__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3));
    }
#line 2704 "mdbcomp.trace_counts.c"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_HeadVar__1_1));
#line 2706 "mdbcomp.trace_counts.c"
  }
#line 2708 "mdbcomp.trace_counts.c"
}

#line 842 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__842__1_2_p_0(
#line 842 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ModuleNameSym_5,
#line 842 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__DefModuleSym_8)
#line 842 "trace_counts.m"
{
#line 842 "trace_counts.m"
  {
#line 842 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 842 "trace_counts.m"
    {
#line 842 "trace_counts.m"
      return mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__ModuleNameSym_5, mdbcomp__trace_counts__DefModuleSym_8);
    }
#line 842 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 842 "trace_counts.m"
  }
#line 842 "trace_counts.m"
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

#line 492 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts____Compare____trace_count_syntax_error_0_0(
#line 492 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__1_1,
#line 492 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 492 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__3_3)
#line 492 "trace_counts.m"
{
#line 492 "trace_counts.m"
  {
#line 492 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 492 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_6 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;
#line 492 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_7 = (MR_Integer) mdbcomp__trace_counts__HeadVar__3_3;

#line 492 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_6 == mdbcomp__trace_counts__CastY_7);
#line 492 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 2823 "mdbcomp.trace_counts.c"
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
#line 492 "trace_counts.m"
    else
#line 492 "trace_counts.m"
      {
#line 492 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_4_4 = (MR_String) mdbcomp__trace_counts__HeadVar__2_2;
#line 492 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_5_5 = (MR_String) mdbcomp__trace_counts__HeadVar__3_3;

#line 492 "trace_counts.m"
        {
#line 492 "trace_counts.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__trace_counts__HeadVar__1_1, mdbcomp__trace_counts__V_4_4, mdbcomp__trace_counts__V_5_5);
#line 492 "trace_counts.m"
          return;
        }
#line 492 "trace_counts.m"
      }
#line 492 "trace_counts.m"
  }
#line 492 "trace_counts.m"
}

#line 492 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts____Unify____trace_count_syntax_error_0_0(
#line 492 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 492 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 492 "trace_counts.m"
{
#line 492 "trace_counts.m"
  {
#line 492 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 492 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastX_5 = (MR_Integer) mdbcomp__trace_counts__HeadVar__1_1;
#line 492 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__CastY_6 = (MR_Integer) mdbcomp__trace_counts__HeadVar__2_2;

#line 492 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__CastX_5 == mdbcomp__trace_counts__CastY_6);
#line 492 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 492 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 492 "trace_counts.m"
    else
#line 492 "trace_counts.m"
      {
#line 492 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_3_3 = (MR_String) mdbcomp__trace_counts__HeadVar__1_1;
#line 492 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_4_4 = (MR_String) mdbcomp__trace_counts__HeadVar__2_2;

#line 2881 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_4_4) == 0);
#line 492 "trace_counts.m"
      }
#line 492 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 492 "trace_counts.m"
  }
#line 492 "trace_counts.m"
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
#line 2922 "mdbcomp.trace_counts.c"
          *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
#line 48 "trace_counts.m"
        else
#line 48 "trace_counts.m"
#line 48 "trace_counts.m"
          switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) {
#line 48 "trace_counts.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 48 "trace_counts.m"
            case (MR_Integer) 0:
#line 48 "trace_counts.m"
              {
#line 48 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_45_45 = (MR_Word) MR_body(((MR_Word) mdbcomp__trace_counts__HeadVar__2_2), (MR_Integer) 0);

#line 48 "trace_counts.m"
#line 48 "trace_counts.m"
                switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
#line 48 "trace_counts.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 48 "trace_counts.m"
                  case (MR_Integer) 0:
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
                    break;
#line 48 "trace_counts.m"
                  case (MR_Integer) 1:
#line 2963 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "trace_counts.m"
                    break;
#line 48 "trace_counts.m"
                  case (MR_Integer) 2:
#line 2969 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "trace_counts.m"
                    break;
#line 48 "trace_counts.m"
                }
#line 48 "trace_counts.m"
              }
#line 48 "trace_counts.m"
              break;
#line 48 "trace_counts.m"
            case (MR_Integer) 1:
#line 48 "trace_counts.m"
              {
#line 48 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 48 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 48 "trace_counts.m"
#line 48 "trace_counts.m"
                switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
#line 48 "trace_counts.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 48 "trace_counts.m"
                  case (MR_Integer) 0:
#line 2995 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "trace_counts.m"
                    break;
#line 48 "trace_counts.m"
                  case (MR_Integer) 1:
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
#line 3015 "mdbcomp.trace_counts.c"
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
                    break;
#line 48 "trace_counts.m"
                  case (MR_Integer) 2:
#line 3042 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "trace_counts.m"
                    break;
#line 48 "trace_counts.m"
                }
#line 48 "trace_counts.m"
              }
#line 48 "trace_counts.m"
              break;
#line 48 "trace_counts.m"
            case (MR_Integer) 2:
#line 48 "trace_counts.m"
              {
#line 48 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 48 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 48 "trace_counts.m"
#line 48 "trace_counts.m"
                switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
#line 48 "trace_counts.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 48 "trace_counts.m"
                  case (MR_Integer) 0:
#line 3068 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "trace_counts.m"
                    break;
#line 48 "trace_counts.m"
                  case (MR_Integer) 1:
#line 3074 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "trace_counts.m"
                    break;
#line 48 "trace_counts.m"
                  case (MR_Integer) 2:
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
#line 3094 "mdbcomp.trace_counts.c"
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
                    break;
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
#line 48 "trace_counts.m"
          switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) {
#line 48 "trace_counts.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 48 "trace_counts.m"
            case (MR_Integer) 0:
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
#line 3200 "mdbcomp.trace_counts.c"
                    {
#line 3202 "mdbcomp.trace_counts.c"
                      return mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____base_count_file_type_0_0(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_4_4);
                    }
#line 48 "trace_counts.m"
                  }
#line 48 "trace_counts.m"
              }
#line 48 "trace_counts.m"
              break;
#line 48 "trace_counts.m"
            case (MR_Integer) 1:
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
#line 3236 "mdbcomp.trace_counts.c"
                    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_5_5 == mdbcomp__trace_counts__V_7_7);
#line 48 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 48 "trace_counts.m"
                      {
#line 3242 "mdbcomp.trace_counts.c"
                        mdbcomp__trace_counts__TypeInfo_15_15 = (MR_Word) &mdbcomp__trace_counts_scalar_common_2[0];
#line 3244 "mdbcomp.trace_counts.c"
                        {
#line 3246 "mdbcomp.trace_counts.c"
                          return mdbcomp__trace_counts__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__trace_counts__TypeInfo_15_15, ((MR_Box) (mdbcomp__trace_counts__V_6_6)), ((MR_Box) (mdbcomp__trace_counts__V_8_8)));
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
            case (MR_Integer) 2:
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
#line 3280 "mdbcomp.trace_counts.c"
                    {
#line 3282 "mdbcomp.trace_counts.c"
                      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(mdbcomp__trace_counts__V_9_9, mdbcomp__trace_counts__V_11_11);
                    }
#line 48 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 3287 "mdbcomp.trace_counts.c"
                      {
#line 3289 "mdbcomp.trace_counts.c"
                        /* direct tailcall eliminated */
#line 3291 "mdbcomp.trace_counts.c"
                        {
#line 3293 "mdbcomp.trace_counts.c"
                          MR_Word mdbcomp__trace_counts__HeadVar__1__tmp_copy_1 = mdbcomp__trace_counts__V_10_10;
#line 3295 "mdbcomp.trace_counts.c"
                          MR_Word mdbcomp__trace_counts__HeadVar__2__tmp_copy_2 = mdbcomp__trace_counts__V_12_12;

#line 3298 "mdbcomp.trace_counts.c"
                          mdbcomp__trace_counts__HeadVar__2_2 = mdbcomp__trace_counts__HeadVar__2__tmp_copy_2;
#line 3300 "mdbcomp.trace_counts.c"
                          mdbcomp__trace_counts__HeadVar__1_1 = mdbcomp__trace_counts__HeadVar__1__tmp_copy_1;
#line 3302 "mdbcomp.trace_counts.c"
                        }
#line 3304 "mdbcomp.trace_counts.c"
                        continue;
#line 3306 "mdbcomp.trace_counts.c"
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
#line 3351 "mdbcomp.trace_counts.c"
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
#line 102 "trace_counts.m"
    else
#line 102 "trace_counts.m"
#line 102 "trace_counts.m"
      switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) {
#line 102 "trace_counts.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 102 "trace_counts.m"
        case (MR_Integer) 0:
#line 102 "trace_counts.m"
          {
#line 102 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 102 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 102 "trace_counts.m"
#line 102 "trace_counts.m"
            switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
#line 102 "trace_counts.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 102 "trace_counts.m"
              case (MR_Integer) 0:
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
#line 3390 "mdbcomp.trace_counts.c"
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
                break;
#line 102 "trace_counts.m"
              case (MR_Integer) 1:
#line 3417 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                break;
#line 102 "trace_counts.m"
              case (MR_Integer) 2:
#line 3423 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                break;
#line 102 "trace_counts.m"
              case (MR_Integer) 3:
#line 102 "trace_counts.m"
#line 102 "trace_counts.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) {
#line 102 "trace_counts.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 102 "trace_counts.m"
                  case (MR_Integer) 0:
#line 3436 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                    break;
#line 102 "trace_counts.m"
                  case (MR_Integer) 1:
#line 3442 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                    break;
#line 102 "trace_counts.m"
                }
#line 102 "trace_counts.m"
                break;
#line 102 "trace_counts.m"
            }
#line 102 "trace_counts.m"
          }
#line 102 "trace_counts.m"
          break;
#line 102 "trace_counts.m"
        case (MR_Integer) 1:
#line 102 "trace_counts.m"
          {
#line 102 "trace_counts.m"
            MR_String mdbcomp__trace_counts__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 102 "trace_counts.m"
#line 102 "trace_counts.m"
            switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
#line 102 "trace_counts.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 102 "trace_counts.m"
              case (MR_Integer) 0:
#line 3470 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                break;
#line 102 "trace_counts.m"
              case (MR_Integer) 1:
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
                break;
#line 102 "trace_counts.m"
              case (MR_Integer) 2:
#line 3494 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                break;
#line 102 "trace_counts.m"
              case (MR_Integer) 3:
#line 102 "trace_counts.m"
#line 102 "trace_counts.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) {
#line 102 "trace_counts.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 102 "trace_counts.m"
                  case (MR_Integer) 0:
#line 3507 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                    break;
#line 102 "trace_counts.m"
                  case (MR_Integer) 1:
#line 3513 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                    break;
#line 102 "trace_counts.m"
                }
#line 102 "trace_counts.m"
                break;
#line 102 "trace_counts.m"
            }
#line 102 "trace_counts.m"
          }
#line 102 "trace_counts.m"
          break;
#line 102 "trace_counts.m"
        case (MR_Integer) 2:
#line 102 "trace_counts.m"
          {
#line 102 "trace_counts.m"
            MR_String mdbcomp__trace_counts__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 102 "trace_counts.m"
#line 102 "trace_counts.m"
            switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
#line 102 "trace_counts.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 102 "trace_counts.m"
              case (MR_Integer) 0:
#line 3541 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                break;
#line 102 "trace_counts.m"
              case (MR_Integer) 1:
#line 3547 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                break;
#line 102 "trace_counts.m"
              case (MR_Integer) 2:
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
                break;
#line 102 "trace_counts.m"
              case (MR_Integer) 3:
#line 102 "trace_counts.m"
#line 102 "trace_counts.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) {
#line 102 "trace_counts.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 102 "trace_counts.m"
                  case (MR_Integer) 0:
#line 3578 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                    break;
#line 102 "trace_counts.m"
                  case (MR_Integer) 1:
#line 3584 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                    break;
#line 102 "trace_counts.m"
                }
#line 102 "trace_counts.m"
                break;
#line 102 "trace_counts.m"
            }
#line 102 "trace_counts.m"
          }
#line 102 "trace_counts.m"
          break;
#line 102 "trace_counts.m"
        case (MR_Integer) 3:
#line 102 "trace_counts.m"
#line 102 "trace_counts.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)))) {
#line 102 "trace_counts.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 102 "trace_counts.m"
            case (MR_Integer) 0:
#line 102 "trace_counts.m"
              {
#line 102 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));

#line 102 "trace_counts.m"
#line 102 "trace_counts.m"
                switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
#line 102 "trace_counts.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 102 "trace_counts.m"
                  case (MR_Integer) 0:
#line 3619 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                    break;
#line 102 "trace_counts.m"
                  case (MR_Integer) 1:
#line 3625 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                    break;
#line 102 "trace_counts.m"
                  case (MR_Integer) 2:
#line 3631 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                    break;
#line 102 "trace_counts.m"
                  case (MR_Integer) 3:
#line 102 "trace_counts.m"
#line 102 "trace_counts.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) {
#line 102 "trace_counts.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 102 "trace_counts.m"
                      case (MR_Integer) 0:
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
                        break;
#line 102 "trace_counts.m"
                      case (MR_Integer) 1:
#line 3662 "mdbcomp.trace_counts.c"
                        *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 102 "trace_counts.m"
                        break;
#line 102 "trace_counts.m"
                    }
#line 102 "trace_counts.m"
                    break;
#line 102 "trace_counts.m"
                }
#line 102 "trace_counts.m"
              }
#line 102 "trace_counts.m"
              break;
#line 102 "trace_counts.m"
            case (MR_Integer) 1:
#line 102 "trace_counts.m"
              {
#line 102 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));

#line 102 "trace_counts.m"
#line 102 "trace_counts.m"
                switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
#line 102 "trace_counts.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 102 "trace_counts.m"
                  case (MR_Integer) 0:
#line 3690 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                    break;
#line 102 "trace_counts.m"
                  case (MR_Integer) 1:
#line 3696 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                    break;
#line 102 "trace_counts.m"
                  case (MR_Integer) 2:
#line 3702 "mdbcomp.trace_counts.c"
                    *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                    break;
#line 102 "trace_counts.m"
                  case (MR_Integer) 3:
#line 102 "trace_counts.m"
#line 102 "trace_counts.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__3_3, (MR_Integer) 0)))) {
#line 102 "trace_counts.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 102 "trace_counts.m"
                      case (MR_Integer) 0:
#line 3715 "mdbcomp.trace_counts.c"
                        *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 102 "trace_counts.m"
                        break;
#line 102 "trace_counts.m"
                      case (MR_Integer) 1:
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
                        break;
#line 102 "trace_counts.m"
                    }
#line 102 "trace_counts.m"
                    break;
#line 102 "trace_counts.m"
                }
#line 102 "trace_counts.m"
              }
#line 102 "trace_counts.m"
              break;
#line 102 "trace_counts.m"
          }
#line 102 "trace_counts.m"
          break;
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
#line 102 "trace_counts.m"
      switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) {
#line 102 "trace_counts.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 102 "trace_counts.m"
        case (MR_Integer) 0:
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
#line 3814 "mdbcomp.trace_counts.c"
                {
#line 3816 "mdbcomp.trace_counts.c"
                  mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_5_5);
                }
#line 102 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 102 "trace_counts.m"
                  {
#line 3823 "mdbcomp.trace_counts.c"
                    mdbcomp__trace_counts__TypeInfo_18_18 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1];
#line 3825 "mdbcomp.trace_counts.c"
                    {
#line 3827 "mdbcomp.trace_counts.c"
                      return mdbcomp__trace_counts__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__trace_counts__TypeInfo_18_18, ((MR_Box) (mdbcomp__trace_counts__V_4_4)), ((MR_Box) (mdbcomp__trace_counts__V_6_6)));
                    }
#line 102 "trace_counts.m"
                  }
#line 102 "trace_counts.m"
              }
#line 102 "trace_counts.m"
          }
#line 102 "trace_counts.m"
          break;
#line 102 "trace_counts.m"
        case (MR_Integer) 1:
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
#line 3855 "mdbcomp.trace_counts.c"
                mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_7_7, mdbcomp__trace_counts__V_8_8) == 0);
#line 102 "trace_counts.m"
              }
#line 102 "trace_counts.m"
          }
#line 102 "trace_counts.m"
          break;
#line 102 "trace_counts.m"
        case (MR_Integer) 2:
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
#line 3880 "mdbcomp.trace_counts.c"
                mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_9_9, mdbcomp__trace_counts__V_10_10) == 0);
#line 102 "trace_counts.m"
              }
#line 102 "trace_counts.m"
          }
#line 102 "trace_counts.m"
          break;
#line 102 "trace_counts.m"
        case (MR_Integer) 3:
#line 102 "trace_counts.m"
#line 102 "trace_counts.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)))) {
#line 102 "trace_counts.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 102 "trace_counts.m"
            case (MR_Integer) 0:
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
#line 3912 "mdbcomp.trace_counts.c"
                    {
#line 3914 "mdbcomp.trace_counts.c"
                      return mdbcomp__trace_counts__succeeded = mercury__io____Unify____error_0_0(mdbcomp__trace_counts__V_11_11, mdbcomp__trace_counts__V_12_12);
                    }
#line 102 "trace_counts.m"
                  }
#line 102 "trace_counts.m"
              }
#line 102 "trace_counts.m"
              break;
#line 102 "trace_counts.m"
            case (MR_Integer) 1:
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
#line 3940 "mdbcomp.trace_counts.c"
                    {
#line 3942 "mdbcomp.trace_counts.c"
                      return mdbcomp__trace_counts__succeeded = mercury__io____Unify____error_0_0(mdbcomp__trace_counts__V_13_13, mdbcomp__trace_counts__V_14_14);
                    }
#line 102 "trace_counts.m"
                  }
#line 102 "trace_counts.m"
              }
#line 102 "trace_counts.m"
              break;
#line 102 "trace_counts.m"
          }
#line 102 "trace_counts.m"
          break;
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
#line 3988 "mdbcomp.trace_counts.c"
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
#line 4017 "mdbcomp.trace_counts.c"
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
#line 4032 "mdbcomp.trace_counts.c"
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
#line 4050 "mdbcomp.trace_counts.c"
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
#line 4123 "mdbcomp.trace_counts.c"
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
#line 4154 "mdbcomp.trace_counts.c"
            {
#line 4156 "mdbcomp.trace_counts.c"
              mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts____Unify____trace_count_file_type_0_0(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_5_5);
            }
#line 116 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 116 "trace_counts.m"
              {
#line 4163 "mdbcomp.trace_counts.c"
                mdbcomp__trace_counts__TypeInfo_11_11 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1];
#line 4165 "mdbcomp.trace_counts.c"
                {
#line 4167 "mdbcomp.trace_counts.c"
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
#line 4269 "mdbcomp.trace_counts.c"
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
#line 4295 "mdbcomp.trace_counts.c"
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
#line 4315 "mdbcomp.trace_counts.c"
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

#line 4382 "mdbcomp.trace_counts.c"
        {
#line 4384 "mdbcomp.trace_counts.c"
          mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__V_3_3, mdbcomp__trace_counts__V_6_6);
        }
#line 68 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 68 "trace_counts.m"
          {
#line 4391 "mdbcomp.trace_counts.c"
            mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_4_4, mdbcomp__trace_counts__V_7_7) == 0);
#line 68 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 4395 "mdbcomp.trace_counts.c"
              {
#line 4397 "mdbcomp.trace_counts.c"
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
#line 4435 "mdbcomp.trace_counts.c"
      *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "trace_counts.m"
    else
#line 77 "trace_counts.m"
#line 77 "trace_counts.m"
      switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__2_2)) {
#line 77 "trace_counts.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 77 "trace_counts.m"
        case (MR_Integer) 0:
#line 77 "trace_counts.m"
          {
#line 77 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "trace_counts.m"
#line 77 "trace_counts.m"
            switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
#line 77 "trace_counts.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 77 "trace_counts.m"
              case (MR_Integer) 0:
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
                break;
#line 77 "trace_counts.m"
              case (MR_Integer) 1:
#line 4480 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "trace_counts.m"
                break;
#line 77 "trace_counts.m"
              case (MR_Integer) 2:
#line 4486 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "trace_counts.m"
                break;
#line 77 "trace_counts.m"
            }
#line 77 "trace_counts.m"
          }
#line 77 "trace_counts.m"
          break;
#line 77 "trace_counts.m"
        case (MR_Integer) 1:
#line 77 "trace_counts.m"
          {
#line 77 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "trace_counts.m"
#line 77 "trace_counts.m"
            switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
#line 77 "trace_counts.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 77 "trace_counts.m"
              case (MR_Integer) 0:
#line 4510 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "trace_counts.m"
                break;
#line 77 "trace_counts.m"
              case (MR_Integer) 1:
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
                break;
#line 77 "trace_counts.m"
              case (MR_Integer) 2:
#line 4534 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "trace_counts.m"
                break;
#line 77 "trace_counts.m"
            }
#line 77 "trace_counts.m"
          }
#line 77 "trace_counts.m"
          break;
#line 77 "trace_counts.m"
        case (MR_Integer) 2:
#line 77 "trace_counts.m"
          {
#line 77 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 77 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "trace_counts.m"
#line 77 "trace_counts.m"
            switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__3_3)) {
#line 77 "trace_counts.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 77 "trace_counts.m"
              case (MR_Integer) 0:
#line 4560 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "trace_counts.m"
                break;
#line 77 "trace_counts.m"
              case (MR_Integer) 1:
#line 4566 "mdbcomp.trace_counts.c"
                *mdbcomp__trace_counts__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "trace_counts.m"
                break;
#line 77 "trace_counts.m"
              case (MR_Integer) 2:
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
#line 4590 "mdbcomp.trace_counts.c"
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
                break;
#line 77 "trace_counts.m"
            }
#line 77 "trace_counts.m"
          }
#line 77 "trace_counts.m"
          break;
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
#line 77 "trace_counts.m"
      switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) {
#line 77 "trace_counts.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 77 "trace_counts.m"
        case (MR_Integer) 0:
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
#line 4672 "mdbcomp.trace_counts.c"
                mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_3_3 == mdbcomp__trace_counts__V_4_4);
#line 77 "trace_counts.m"
              }
#line 77 "trace_counts.m"
          }
#line 77 "trace_counts.m"
          break;
#line 77 "trace_counts.m"
        case (MR_Integer) 1:
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
#line 4697 "mdbcomp.trace_counts.c"
                {
#line 4699 "mdbcomp.trace_counts.c"
                  return mdbcomp__trace_counts__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdbcomp__trace_counts__V_5_5, mdbcomp__trace_counts__V_6_6);
                }
#line 77 "trace_counts.m"
              }
#line 77 "trace_counts.m"
          }
#line 77 "trace_counts.m"
          break;
#line 77 "trace_counts.m"
        case (MR_Integer) 2:
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
#line 4731 "mdbcomp.trace_counts.c"
                mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_7_7 == mdbcomp__trace_counts__V_9_9);
#line 77 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 4735 "mdbcomp.trace_counts.c"
                  {
#line 4737 "mdbcomp.trace_counts.c"
                    return mdbcomp__trace_counts__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdbcomp__trace_counts__V_8_8, mdbcomp__trace_counts__V_10_10);
                  }
#line 77 "trace_counts.m"
              }
#line 77 "trace_counts.m"
          }
#line 77 "trace_counts.m"
          break;
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
#line 4779 "mdbcomp.trace_counts.c"
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
#line 4805 "mdbcomp.trace_counts.c"
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
#line 4825 "mdbcomp.trace_counts.c"
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

#line 4892 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_3_3 == mdbcomp__trace_counts__V_6_6);
#line 82 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 82 "trace_counts.m"
          {
#line 4898 "mdbcomp.trace_counts.c"
            mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_4_4 == mdbcomp__trace_counts__V_7_7);
#line 82 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 4902 "mdbcomp.trace_counts.c"
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
#line 4939 "mdbcomp.trace_counts.c"
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
#line 4965 "mdbcomp.trace_counts.c"
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

#line 5026 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_3_3 == mdbcomp__trace_counts__V_5_5);
#line 43 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 5030 "mdbcomp.trace_counts.c"
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
#line 5082 "mdbcomp.trace_counts.c"
  {
#line 5084 "mdbcomp.trace_counts.c"
    MR_bool mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__HeadVar__2_1 == mdbcomp__trace_counts__HeadVar__2_2);

#line 5087 "mdbcomp.trace_counts.c"
    return mdbcomp__trace_counts__succeeded;
#line 5089 "mdbcomp.trace_counts.c"
  }
#line 34 "trace_counts.m"
}

#line 987 "trace_counts.m"
static MR_Word MR_CALL 
mdbcomp__trace_counts__insert_into_list_as_set_2_f_0(
#line 987 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TypeInfo_for_T_9,
#line 987 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__List0_4,
#line 987 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__Item_5)
#line 987 "trace_counts.m"
{
#line 989 "trace_counts.m"
  {
#line 989 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 989 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__List_6;
#line 989 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Set0_7;
#line 989 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Set_8;

#line 990 "trace_counts.m"
    {
#line 990 "trace_counts.m"
      mercury__set__list_to_set_2_p_0(mdbcomp__trace_counts__TypeInfo_for_T_9, mdbcomp__trace_counts__List0_4, &mdbcomp__trace_counts__Set0_7);
    }
#line 991 "trace_counts.m"
    {
#line 991 "trace_counts.m"
      mercury__set__insert_3_p_0(mdbcomp__trace_counts__TypeInfo_for_T_9, mdbcomp__trace_counts__Item_5, mdbcomp__trace_counts__Set0_7, &mdbcomp__trace_counts__Set_8);
    }
#line 992 "trace_counts.m"
    {
#line 992 "trace_counts.m"
      mercury__set__to_sorted_list_2_p_0(mdbcomp__trace_counts__TypeInfo_for_T_9, mdbcomp__trace_counts__Set_8, &mdbcomp__trace_counts__List_6);
    }
#line 989 "trace_counts.m"
    return mdbcomp__trace_counts__List_6;
#line 989 "trace_counts.m"
  }
#line 987 "trace_counts.m"
}

#line 921 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_2_5_p_0(
#line 921 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ModuleName_6,
#line 921 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_7,
#line 921 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcCounts_8,
#line 921 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_16,
#line 921 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_17)
#line 921 "trace_counts.m"
{
#line 925 "trace_counts.m"
  {
#line 925 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 925 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__ProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 2)));
#line 926 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 0)));
#line 926 "trace_counts.m"
    MR_String mdbcomp__trace_counts__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 1)));
#line 927 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_23_23;
#line 927 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_11_11;
#line 927 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_12_12;
#line 927 "trace_counts.m"
    MR_String mdbcomp__trace_counts__V_13_13;
#line 927 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__V_14_14;
#line 927 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__V_15_15;

#line 927 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__ProcLabel_10)) == (MR_mktag((MR_Integer) 0)));
#line 927 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 927 "trace_counts.m"
      {
#line 927 "trace_counts.m"
        mdbcomp__trace_counts__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 0)));
#line 927 "trace_counts.m"
        mdbcomp__trace_counts__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 1)));
#line 927 "trace_counts.m"
        mdbcomp__trace_counts__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 2)));
#line 927 "trace_counts.m"
        mdbcomp__trace_counts__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 3)));
#line 927 "trace_counts.m"
        mdbcomp__trace_counts__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 4)));
#line 927 "trace_counts.m"
        mdbcomp__trace_counts__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_10, (MR_Integer) 5)));
#line 927 "trace_counts.m"
        {
#line 927 "trace_counts.m"
          mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__ModuleName_6, mdbcomp__trace_counts__V_23_23);
        }
#line 927 "trace_counts.m"
      }
#line 929 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 928 "trace_counts.m"
      {
#line 928 "trace_counts.m"
        {
#line 928 "trace_counts.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContext_7)), ((MR_Box) (mdbcomp__trace_counts__ProcCounts_8)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_16, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_17);
#line 928 "trace_counts.m"
          return;
        }
#line 928 "trace_counts.m"
      }
#line 929 "trace_counts.m"
    else
#line 929 "trace_counts.m"
      *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_17 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_16;
#line 925 "trace_counts.m"
  }
#line 921 "trace_counts.m"
}

#line 888 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_path_port_count_4_p_0(
#line 888 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1,
#line 888 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2)
#line 888 "trace_counts.m"
{
#line 892 "trace_counts.m"
  {
#line 892 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 892 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 2)));
#line 892 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 892 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));

#line 892 "trace_counts.m"
#line 892 "trace_counts.m"
    switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) {
#line 892 "trace_counts.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 892 "trace_counts.m"
      case (MR_Integer) 0:
#line 892 "trace_counts.m"
        {
#line 892 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__Port_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 892 "trace_counts.m"
          MR_String mdbcomp__trace_counts__PortStr_10;
#line 892 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_13_13;
#line 892 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_15_15;
#line 892 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_17_17;
#line 892 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_18_18;
#line 892 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_19_19;
#line 892 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_21_21;
#line 892 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_22_22;
#line 892 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_23_23;
#line 892 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_25_25;
#line 892 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_26_26;

#line 893 "trace_counts.m"
          {
#line 893 "trace_counts.m"
            mdbcomp__trace_counts__string_to_trace_port_2_p_1(&mdbcomp__trace_counts__PortStr_10, mdbcomp__trace_counts__Port_5);
          }
#line 896 "trace_counts.m"
          {
#line 896 "trace_counts.m"
            mdbcomp__trace_counts__V_18_18 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_89_89);
          }
#line 897 "trace_counts.m"
          {
#line 897 "trace_counts.m"
            mdbcomp__trace_counts__V_22_22 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_88_88);
          }
#line 898 "trace_counts.m"
          {
#line 898 "trace_counts.m"
            mdbcomp__trace_counts__V_26_26 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_87_87);
          }
#line 898 "trace_counts.m"
          {
#line 898 "trace_counts.m"
            mdbcomp__trace_counts__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_25_25, 0) = ((MR_Box) (mdbcomp__trace_counts__V_26_26));
#line 898 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[2])));
#line 898 "trace_counts.m"
          }
#line 897 "trace_counts.m"
          {
#line 897 "trace_counts.m"
            mdbcomp__trace_counts__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_23_23, 0) = ((MR_Box) ((MR_String) " "));
#line 897 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_23_23, 1) = ((MR_Box) (mdbcomp__trace_counts__V_25_25));
#line 897 "trace_counts.m"
          }
#line 897 "trace_counts.m"
          {
#line 897 "trace_counts.m"
            mdbcomp__trace_counts__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_21_21, 0) = ((MR_Box) (mdbcomp__trace_counts__V_22_22));
#line 897 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_21_21, 1) = ((MR_Box) (mdbcomp__trace_counts__V_23_23));
#line 897 "trace_counts.m"
          }
#line 896 "trace_counts.m"
          {
#line 896 "trace_counts.m"
            mdbcomp__trace_counts__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_19_19, 0) = ((MR_Box) ((MR_String) " "));
#line 896 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_19_19, 1) = ((MR_Box) (mdbcomp__trace_counts__V_21_21));
#line 896 "trace_counts.m"
          }
#line 896 "trace_counts.m"
          {
#line 896 "trace_counts.m"
            mdbcomp__trace_counts__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_17_17, 0) = ((MR_Box) (mdbcomp__trace_counts__V_18_18));
#line 896 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_17_17, 1) = ((MR_Box) (mdbcomp__trace_counts__V_19_19));
#line 896 "trace_counts.m"
          }
#line 895 "trace_counts.m"
          {
#line 895 "trace_counts.m"
            mdbcomp__trace_counts__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_15_15, 0) = ((MR_Box) ((MR_String) " "));
#line 895 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_15_15, 1) = ((MR_Box) (mdbcomp__trace_counts__V_17_17));
#line 895 "trace_counts.m"
          }
#line 895 "trace_counts.m"
          {
#line 895 "trace_counts.m"
            mdbcomp__trace_counts__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_13_13, 0) = ((MR_Box) (mdbcomp__trace_counts__PortStr_10));
#line 895 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_13_13, 1) = ((MR_Box) (mdbcomp__trace_counts__V_15_15));
#line 895 "trace_counts.m"
          }
#line 894 "trace_counts.m"
          {
#line 894 "trace_counts.m"
            mercury__io__write_strings_3_p_0(mdbcomp__trace_counts__V_13_13);
#line 894 "trace_counts.m"
            return;
          }
#line 892 "trace_counts.m"
        }
#line 892 "trace_counts.m"
        break;
#line 892 "trace_counts.m"
      case (MR_Integer) 1:
#line 900 "trace_counts.m"
        {
#line 900 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__Path_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 900 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_37_37;
#line 900 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_40_40;
#line 900 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_41_41;
#line 900 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_42_42;
#line 900 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_44_44;
#line 900 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_45_45;
#line 900 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_46_46;
#line 900 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_48_48;
#line 900 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_49_49;
#line 900 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_50_50;
#line 900 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_52_52;
#line 900 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_53_53;

#line 902 "trace_counts.m"
          {
#line 902 "trace_counts.m"
            mdbcomp__trace_counts__V_41_41 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mdbcomp__trace_counts__Path_30);
          }
#line 903 "trace_counts.m"
          {
#line 903 "trace_counts.m"
            mdbcomp__trace_counts__V_45_45 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_89_89);
          }
#line 904 "trace_counts.m"
          {
#line 904 "trace_counts.m"
            mdbcomp__trace_counts__V_49_49 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_88_88);
          }
#line 905 "trace_counts.m"
          {
#line 905 "trace_counts.m"
            mdbcomp__trace_counts__V_53_53 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_87_87);
          }
#line 905 "trace_counts.m"
          {
#line 905 "trace_counts.m"
            mdbcomp__trace_counts__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_52_52, 0) = ((MR_Box) (mdbcomp__trace_counts__V_53_53));
#line 905 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[2])));
#line 905 "trace_counts.m"
          }
#line 904 "trace_counts.m"
          {
#line 904 "trace_counts.m"
            mdbcomp__trace_counts__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_50_50, 0) = ((MR_Box) ((MR_String) " "));
#line 904 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_50_50, 1) = ((MR_Box) (mdbcomp__trace_counts__V_52_52));
#line 904 "trace_counts.m"
          }
#line 904 "trace_counts.m"
          {
#line 904 "trace_counts.m"
            mdbcomp__trace_counts__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_48_48, 0) = ((MR_Box) (mdbcomp__trace_counts__V_49_49));
#line 904 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_48_48, 1) = ((MR_Box) (mdbcomp__trace_counts__V_50_50));
#line 904 "trace_counts.m"
          }
#line 903 "trace_counts.m"
          {
#line 903 "trace_counts.m"
            mdbcomp__trace_counts__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_46_46, 0) = ((MR_Box) ((MR_String) " "));
#line 903 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_46_46, 1) = ((MR_Box) (mdbcomp__trace_counts__V_48_48));
#line 903 "trace_counts.m"
          }
#line 903 "trace_counts.m"
          {
#line 903 "trace_counts.m"
            mdbcomp__trace_counts__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_44_44, 0) = ((MR_Box) (mdbcomp__trace_counts__V_45_45));
#line 903 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_44_44, 1) = ((MR_Box) (mdbcomp__trace_counts__V_46_46));
#line 903 "trace_counts.m"
          }
#line 902 "trace_counts.m"
          {
#line 902 "trace_counts.m"
            mdbcomp__trace_counts__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_42_42, 0) = ((MR_Box) ((MR_String) "> "));
#line 902 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_42_42, 1) = ((MR_Box) (mdbcomp__trace_counts__V_44_44));
#line 902 "trace_counts.m"
          }
#line 902 "trace_counts.m"
          {
#line 902 "trace_counts.m"
            mdbcomp__trace_counts__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_40_40, 0) = ((MR_Box) (mdbcomp__trace_counts__V_41_41));
#line 902 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_40_40, 1) = ((MR_Box) (mdbcomp__trace_counts__V_42_42));
#line 902 "trace_counts.m"
          }
#line 902 "trace_counts.m"
          {
#line 902 "trace_counts.m"
            mdbcomp__trace_counts__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_37_37, 0) = ((MR_Box) ((MR_String) "<"));
#line 902 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_37_37, 1) = ((MR_Box) (mdbcomp__trace_counts__V_40_40));
#line 902 "trace_counts.m"
          }
#line 901 "trace_counts.m"
          {
#line 901 "trace_counts.m"
            mercury__io__write_strings_3_p_0(mdbcomp__trace_counts__V_37_37);
#line 901 "trace_counts.m"
            return;
          }
#line 900 "trace_counts.m"
        }
#line 892 "trace_counts.m"
        break;
#line 892 "trace_counts.m"
      case (MR_Integer) 2:
#line 907 "trace_counts.m"
        {
#line 907 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__Port_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 907 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__Path_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 907 "trace_counts.m"
          MR_String mdbcomp__trace_counts__PortStr_63;
#line 907 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_66_66;
#line 907 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_68_68;
#line 907 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_70_70;
#line 907 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_71_71;
#line 907 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_72_72;
#line 907 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_74_74;
#line 907 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_75_75;
#line 907 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_76_76;
#line 907 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_78_78;
#line 907 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_79_79;
#line 907 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_80_80;
#line 907 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_82_82;
#line 907 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_83_83;

#line 908 "trace_counts.m"
          {
#line 908 "trace_counts.m"
            mdbcomp__trace_counts__string_to_trace_port_2_p_1(&mdbcomp__trace_counts__PortStr_63, mdbcomp__trace_counts__Port_57);
          }
#line 910 "trace_counts.m"
          {
#line 910 "trace_counts.m"
            mdbcomp__trace_counts__V_71_71 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mdbcomp__trace_counts__Path_58);
          }
#line 911 "trace_counts.m"
          {
#line 911 "trace_counts.m"
            mdbcomp__trace_counts__V_75_75 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_89_89);
          }
#line 912 "trace_counts.m"
          {
#line 912 "trace_counts.m"
            mdbcomp__trace_counts__V_79_79 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_88_88);
          }
#line 913 "trace_counts.m"
          {
#line 913 "trace_counts.m"
            mdbcomp__trace_counts__V_83_83 = mercury__string__int_to_string_1_f_0(mdbcomp__trace_counts__V_87_87);
          }
#line 913 "trace_counts.m"
          {
#line 913 "trace_counts.m"
            mdbcomp__trace_counts__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_82_82, 0) = ((MR_Box) (mdbcomp__trace_counts__V_83_83));
#line 913 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[2])));
#line 913 "trace_counts.m"
          }
#line 912 "trace_counts.m"
          {
#line 912 "trace_counts.m"
            mdbcomp__trace_counts__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_80_80, 0) = ((MR_Box) ((MR_String) " "));
#line 912 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_80_80, 1) = ((MR_Box) (mdbcomp__trace_counts__V_82_82));
#line 912 "trace_counts.m"
          }
#line 912 "trace_counts.m"
          {
#line 912 "trace_counts.m"
            mdbcomp__trace_counts__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_78_78, 0) = ((MR_Box) (mdbcomp__trace_counts__V_79_79));
#line 912 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_78_78, 1) = ((MR_Box) (mdbcomp__trace_counts__V_80_80));
#line 912 "trace_counts.m"
          }
#line 911 "trace_counts.m"
          {
#line 911 "trace_counts.m"
            mdbcomp__trace_counts__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_76_76, 0) = ((MR_Box) ((MR_String) " "));
#line 911 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_76_76, 1) = ((MR_Box) (mdbcomp__trace_counts__V_78_78));
#line 911 "trace_counts.m"
          }
#line 911 "trace_counts.m"
          {
#line 911 "trace_counts.m"
            mdbcomp__trace_counts__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_74_74, 0) = ((MR_Box) (mdbcomp__trace_counts__V_75_75));
#line 911 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_74_74, 1) = ((MR_Box) (mdbcomp__trace_counts__V_76_76));
#line 911 "trace_counts.m"
          }
#line 910 "trace_counts.m"
          {
#line 910 "trace_counts.m"
            mdbcomp__trace_counts__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_72_72, 0) = ((MR_Box) ((MR_String) "> "));
#line 910 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_72_72, 1) = ((MR_Box) (mdbcomp__trace_counts__V_74_74));
#line 910 "trace_counts.m"
          }
#line 910 "trace_counts.m"
          {
#line 910 "trace_counts.m"
            mdbcomp__trace_counts__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_70_70, 0) = ((MR_Box) (mdbcomp__trace_counts__V_71_71));
#line 910 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_70_70, 1) = ((MR_Box) (mdbcomp__trace_counts__V_72_72));
#line 910 "trace_counts.m"
          }
#line 910 "trace_counts.m"
          {
#line 910 "trace_counts.m"
            mdbcomp__trace_counts__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, 0) = ((MR_Box) ((MR_String) " <"));
#line 910 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, 1) = ((MR_Box) (mdbcomp__trace_counts__V_70_70));
#line 910 "trace_counts.m"
          }
#line 910 "trace_counts.m"
          {
#line 910 "trace_counts.m"
            mdbcomp__trace_counts__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_66_66, 0) = ((MR_Box) (mdbcomp__trace_counts__PortStr_63));
#line 910 "trace_counts.m"
            MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_66_66, 1) = ((MR_Box) (mdbcomp__trace_counts__V_68_68));
#line 910 "trace_counts.m"
          }
#line 909 "trace_counts.m"
          {
#line 909 "trace_counts.m"
            mercury__io__write_strings_3_p_0(mdbcomp__trace_counts__V_66_66);
#line 909 "trace_counts.m"
            return;
          }
#line 907 "trace_counts.m"
        }
#line 892 "trace_counts.m"
        break;
#line 892 "trace_counts.m"
    }
#line 892 "trace_counts.m"
  }
#line 888 "trace_counts.m"
}

#line 834 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_2(
#line 834 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 834 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 834 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 834 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 834 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4)
#line 834 "trace_counts.m"
{
#line 834 "trace_counts.m"
  {
#line 834 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;

#line 834 "trace_counts.m"
    {
#line 834 "trace_counts.m"
      mdbcomp__trace_counts__write_path_port_count_4_p_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
#line 834 "trace_counts.m"
      return;
    }
#line 834 "trace_counts.m"
  }
#line 834 "trace_counts.m"
}

#line 842 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_1(
#line 842 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg)
#line 842 "trace_counts.m"
{
#line 842 "trace_counts.m"
  {
#line 842 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 842 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;

#line 842 "trace_counts.m"
    {
#line 842 "trace_counts.m"
      return mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts__IntroducedFrom__pred__write_proc_label_and_check__842__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 4))));
    }
#line 842 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 842 "trace_counts.m"
  }
#line 842 "trace_counts.m"
}

#line 808 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0(
#line 808 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_9,
#line 808 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__PathPortCounts_10,
#line 808 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_0_18,
#line 808 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_19,
#line 808 "trace_counts.m"
  MR_String mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_0_20,
#line 808 "trace_counts.m"
  MR_String * mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_21)
#line 808 "trace_counts.m"
{
#line 813 "trace_counts.m"
  {
#line 813 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 813 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__ModuleNameSym_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_9, (MR_Integer) 0)));
#line 813 "trace_counts.m"
    MR_String mdbcomp__trace_counts__FileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_9, (MR_Integer) 1)));
#line 813 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__ProcLabel_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_9, (MR_Integer) 2)));
#line 834 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__conv0_STATE_VARIABLE_IO_23;

#line 816 "trace_counts.m"
    {
#line 816 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__ModuleNameSym_14, mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_0_18);
    }
#line 818 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 817 "trace_counts.m"
      *mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_19 = mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_0_18;
#line 818 "trace_counts.m"
    else
#line 819 "trace_counts.m"
      {
#line 819 "trace_counts.m"
        MR_String mdbcomp__trace_counts__ModuleName_17;

#line 819 "trace_counts.m"
        {
#line 819 "trace_counts.m"
          mdbcomp__trace_counts__ModuleName_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdbcomp__trace_counts__ModuleNameSym_14);
        }
#line 820 "trace_counts.m"
        {
#line 820 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) "module ");
        }
#line 821 "trace_counts.m"
        {
#line 821 "trace_counts.m"
          mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__ModuleName_17);
        }
#line 822 "trace_counts.m"
        {
#line 822 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 823 "trace_counts.m"
        *mdbcomp__trace_counts__STATE_VARIABLE_CurModuleNameSym_19 = mdbcomp__trace_counts__ModuleNameSym_14;
#line 819 "trace_counts.m"
      }
#line 825 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__FileName_15, mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_0_20) == 0);
#line 827 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 826 "trace_counts.m"
      *mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_21 = mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_0_20;
#line 827 "trace_counts.m"
    else
#line 828 "trace_counts.m"
      {
#line 828 "trace_counts.m"
        {
#line 828 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) "file ");
        }
#line 829 "trace_counts.m"
        {
#line 829 "trace_counts.m"
          mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__FileName_15);
        }
#line 830 "trace_counts.m"
        {
#line 830 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 831 "trace_counts.m"
        *mdbcomp__trace_counts__STATE_VARIABLE_CurFileName_21 = mdbcomp__trace_counts__FileName_15;
#line 828 "trace_counts.m"
      }
#line 844 "trace_counts.m"
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__ProcLabel_16)) == (MR_mktag((MR_Integer) 0))))
#line 841 "trace_counts.m"
      {
#line 841 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__DefModuleSym_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 0)));
#line 841 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_65_65;
#line 841 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 1)));
#line 841 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 2)));
#line 841 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 3)));
#line 841 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 4)));
#line 841 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_16, (MR_Integer) 5)));

#line 842 "trace_counts.m"
        {
#line 842 "trace_counts.m"
          mdbcomp__trace_counts__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 842 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_11[0]));
#line 842 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 1) = ((MR_Box) (mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0_1));
#line 842 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 842 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 3) = ((MR_Box) (mdbcomp__trace_counts__ModuleNameSym_14));
#line 842 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_65_65, 4) = ((MR_Box) (mdbcomp__trace_counts__DefModuleSym_52));
#line 842 "trace_counts.m"
        }
#line 842 "trace_counts.m"
        {
#line 842 "trace_counts.m"
          mercury__require__require_2_p_0(mdbcomp__trace_counts__V_65_65, (MR_String) "write_proc_label_and_check: module mismatch");
        }
#line 841 "trace_counts.m"
      }
#line 844 "trace_counts.m"
    else
#line 846 "trace_counts.m"
      {
#line 847 "trace_counts.m"
        {
#line 847 "trace_counts.m"
          mercury__require__error_1_p_0((MR_String) "write_proc_label: special_pred");
#line 847 "trace_counts.m"
          return;
        }
#line 846 "trace_counts.m"
      }
#line 849 "trace_counts.m"
    {
#line 849 "trace_counts.m"
      mdbcomp__trace_counts__write_proc_label_3_p_0(mdbcomp__trace_counts__ProcLabel_16);
    }
#line 834 "trace_counts.m"
    {
#line 834 "trace_counts.m"
      mercury__map__foldl_4_p_2((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[7], mdbcomp__trace_counts__PathPortCounts_10, ((MR_Box) ((MR_Integer) 0)), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_IO_23);
    }
#line 813 "trace_counts.m"
  }
#line 808 "trace_counts.m"
}

#line 754 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_and_union_trace_counts_2_9_p_0(
#line 754 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ShowProgress_1,
#line 754 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__2_2,
#line 754 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3,
#line 754 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_FileType_4,
#line 754 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5,
#line 754 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_6,
#line 754 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__HeadVar__7_7)
#line 754 "trace_counts.m"
{
#line 759 "trace_counts.m"
  while (MR_TRUE)
#line 759 "trace_counts.m"
    {
#line 759 "trace_counts.m"
      /* tailcall optimized into a loop */
#line 759 "trace_counts.m"
      {
#line 759 "trace_counts.m"
        MR_bool mdbcomp__trace_counts__succeeded;

#line 759 "trace_counts.m"
        if ((mdbcomp__trace_counts__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "trace_counts.m"
          {
#line 759 "trace_counts.m"
            *mdbcomp__trace_counts__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 759 "trace_counts.m"
            *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_6 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5;
#line 759 "trace_counts.m"
            *mdbcomp__trace_counts__STATE_VARIABLE_FileType_4 = mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3;
#line 759 "trace_counts.m"
          }
#line 759 "trace_counts.m"
        else
#line 761 "trace_counts.m"
          {
#line 761 "trace_counts.m"
            MR_String mdbcomp__trace_counts__FileName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 0)));
#line 761 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__FileNames_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__2_2, (MR_Integer) 1)));
#line 761 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__TCResult_27;

#line 766 "trace_counts.m"
#line 766 "trace_counts.m"
            switch (mdbcomp__trace_counts__ShowProgress_1) {
#line 766 "trace_counts.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 766 "trace_counts.m"
              case (MR_Integer) 0:
#line 767 "trace_counts.m"
                {
#line 767 "trace_counts.m"
                }
#line 766 "trace_counts.m"
                break;
#line 766 "trace_counts.m"
              case (MR_Integer) 1:
#line 763 "trace_counts.m"
                {
#line 764 "trace_counts.m"
                  {
#line 764 "trace_counts.m"
                    mercury__io__write_string_3_p_0(mdbcomp__trace_counts__FileName_21);
                  }
#line 765 "trace_counts.m"
                  {
#line 765 "trace_counts.m"
                    mercury__io__nl_2_p_0();
                  }
#line 763 "trace_counts.m"
                }
#line 766 "trace_counts.m"
                break;
#line 766 "trace_counts.m"
            }
#line 769 "trace_counts.m"
            {
#line 769 "trace_counts.m"
              mdbcomp__trace_counts__read_trace_counts_source_4_p_0(mdbcomp__trace_counts__FileName_21, &mdbcomp__trace_counts__TCResult_27);
            }
#line 777 "trace_counts.m"
            if (((MR_tag((MR_Word) mdbcomp__trace_counts__TCResult_27)) == (MR_mktag((MR_Integer) 1))))
#line 778 "trace_counts.m"
              {
#line 778 "trace_counts.m"
                MR_String mdbcomp__trace_counts__Message_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TCResult_27, (MR_Integer) 0)));

#line 779 "trace_counts.m"
                {
#line 779 "trace_counts.m"
                  MR_Word base;
#line 779 "trace_counts.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 779 "trace_counts.m"
                  *mdbcomp__trace_counts__HeadVar__7_7 = base;
#line 779 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__Message_29));
#line 779 "trace_counts.m"
                }
#line 778 "trace_counts.m"
                *mdbcomp__trace_counts__STATE_VARIABLE_FileType_4 = mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3;
#line 778 "trace_counts.m"
                *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_6 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5;
#line 778 "trace_counts.m"
              }
#line 777 "trace_counts.m"
            else
#line 771 "trace_counts.m"
              {
#line 771 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__FileType_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__TCResult_27, (MR_Integer) 0)));
#line 771 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__NewTraceCounts_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__TCResult_27, (MR_Integer) 1)));
#line 771 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_39_39;
#line 771 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_40_40;
#line 771 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_41_41;
#line 771 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__STATE_VARIABLE_FileType_43_43;

#line 772 "trace_counts.m"
                {
#line 772 "trace_counts.m"
                  mdbcomp__trace_counts__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_41_41, 0) = ((MR_Box) (mdbcomp__trace_counts__NewTraceCounts_28));
#line 772 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "trace_counts.m"
                }
#line 772 "trace_counts.m"
                {
#line 772 "trace_counts.m"
                  mdbcomp__trace_counts__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_39_39, 0) = ((MR_Box) (mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5));
#line 772 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_39_39, 1) = ((MR_Box) (mdbcomp__trace_counts__V_41_41));
#line 772 "trace_counts.m"
                }
#line 772 "trace_counts.m"
                {
#line 772 "trace_counts.m"
                  mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0(mdbcomp__trace_counts__V_39_39, &mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_40_40);
                }
#line 774 "trace_counts.m"
                {
#line 774 "trace_counts.m"
                  mdbcomp__trace_counts__STATE_VARIABLE_FileType_43_43 = mdbcomp__trace_counts__sum_trace_count_file_type_2_f_0(mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3, mdbcomp__trace_counts__FileType_23);
                }
#line 775 "trace_counts.m"
                /* direct tailcall eliminated */
#line 775 "trace_counts.m"
                {
#line 775 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__HeadVar__2__tmp_copy_2 = mdbcomp__trace_counts__FileNames_22;
#line 775 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_FileType_0__tmp_copy_3 = mdbcomp__trace_counts__STATE_VARIABLE_FileType_43_43;
#line 775 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0__tmp_copy_5 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_40_40;

#line 775 "trace_counts.m"
                  mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_5 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0__tmp_copy_5;
#line 775 "trace_counts.m"
                  mdbcomp__trace_counts__STATE_VARIABLE_FileType_0_3 = mdbcomp__trace_counts__STATE_VARIABLE_FileType_0__tmp_copy_3;
#line 775 "trace_counts.m"
                  mdbcomp__trace_counts__HeadVar__2_2 = mdbcomp__trace_counts__HeadVar__2__tmp_copy_2;
#line 775 "trace_counts.m"
                }
#line 775 "trace_counts.m"
                continue;
#line 771 "trace_counts.m"
              }
#line 761 "trace_counts.m"
          }
#line 759 "trace_counts.m"
      }
#line 759 "trace_counts.m"
      break;
#line 759 "trace_counts.m"
    }
#line 754 "trace_counts.m"
}

#line 641 "trace_counts.m"
static MR_bool MR_CALL 
mdbcomp__trace_counts__parse_path_port_line_5_p_0(
#line 641 "trace_counts.m"
  MR_String mdbcomp__trace_counts__Line_6,
#line 641 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__PathPort_7,
#line 641 "trace_counts.m"
  MR_Integer * mdbcomp__trace_counts__LineNumber_8,
#line 641 "trace_counts.m"
  MR_Integer * mdbcomp__trace_counts__ExecCount_9,
#line 641 "trace_counts.m"
  MR_Integer * mdbcomp__trace_counts__NumTests_10)
#line 641 "trace_counts.m"
{
#line 644 "trace_counts.m"
  {
#line 644 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 644 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Words_11;
#line 662 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__PathPortPrime_16;
#line 662 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__LineNumberPrime_18;
#line 662 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__ExecCountPrime_19;
#line 662 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__NumTestsPrime_20;
#line 647 "trace_counts.m"
    MR_String mdbcomp__trace_counts__Word1_12;
#line 647 "trace_counts.m"
    MR_String mdbcomp__trace_counts__LineNumberStr_13;
#line 647 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Rest_14;
#line 647 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_23_23;
#line 650 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Port_15;

#line 645 "trace_counts.m"
    {
#line 645 "trace_counts.m"
      mdbcomp__trace_counts__Words_11 = mercury__string__words_1_f_0(mdbcomp__trace_counts__Line_6);
    }
#line 647 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__Words_11)) == (MR_mktag((MR_Integer) 1)));
#line 647 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 647 "trace_counts.m"
      {
#line 647 "trace_counts.m"
        mdbcomp__trace_counts__Word1_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Words_11, (MR_Integer) 0)));
#line 647 "trace_counts.m"
        mdbcomp__trace_counts__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Words_11, (MR_Integer) 1)));
#line 647 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 647 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 647 "trace_counts.m"
          {
#line 647 "trace_counts.m"
            mdbcomp__trace_counts__LineNumberStr_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_23_23, (MR_Integer) 0)));
#line 647 "trace_counts.m"
            mdbcomp__trace_counts__Rest_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_23_23, (MR_Integer) 1)));
#line 648 "trace_counts.m"
            {
#line 648 "trace_counts.m"
              mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts__string_to_trace_port_2_p_0(mdbcomp__trace_counts__Word1_12, &mdbcomp__trace_counts__Port_15);
            }
#line 650 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 649 "trace_counts.m"
              {
#line 649 "trace_counts.m"
                {
#line 649 "trace_counts.m"
                  mdbcomp__trace_counts__PathPortPrime_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 649 "trace_counts.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__PathPortPrime_16, 0) = ((MR_Box) (mdbcomp__trace_counts__Port_15));
#line 649 "trace_counts.m"
                }
#line 649 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 649 "trace_counts.m"
              }
#line 650 "trace_counts.m"
            else
#line 652 "trace_counts.m"
              {
#line 652 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__Path_17;
#line 652 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__Length_32;
#line 652 "trace_counts.m"
                MR_String mdbcomp__trace_counts__SubString_33;
#line 652 "trace_counts.m"
                MR_String mdbcomp__trace_counts__V_35_35;
#line 652 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_36_36;
#line 652 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_37_37;
#line 652 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_38_38;

#line 708 "trace_counts.m"
                {
#line 708 "trace_counts.m"
                  mdbcomp__trace_counts__succeeded = mercury__string__prefix_2_p_0(mdbcomp__trace_counts__Word1_12, (MR_String) "<");
                }
#line 652 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 652 "trace_counts.m"
                  {
#line 709 "trace_counts.m"
                    mdbcomp__trace_counts__V_35_35 = (MR_String) ">";
#line 709 "trace_counts.m"
                    {
#line 709 "trace_counts.m"
                      mdbcomp__trace_counts__succeeded = mercury__string__suffix_2_p_0(mdbcomp__trace_counts__Word1_12, mdbcomp__trace_counts__V_35_35);
                    }
#line 652 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 652 "trace_counts.m"
                      {
#line 710 "trace_counts.m"
                        {
#line 710 "trace_counts.m"
                          mercury__string__length_2_p_0(mdbcomp__trace_counts__Word1_12, &mdbcomp__trace_counts__Length_32);
                        }
#line 711 "trace_counts.m"
                        mdbcomp__trace_counts__V_36_36 = (MR_Integer) 1;
#line 711 "trace_counts.m"
                        mdbcomp__trace_counts__V_38_38 = (MR_Integer) 1;
#line 711 "trace_counts.m"
                        mdbcomp__trace_counts__V_37_37 = (mdbcomp__trace_counts__Length_32 - mdbcomp__trace_counts__V_38_38);
#line 711 "trace_counts.m"
                        {
#line 711 "trace_counts.m"
                          mercury__string__between_4_p_0(mdbcomp__trace_counts__Word1_12, mdbcomp__trace_counts__V_36_36, mdbcomp__trace_counts__V_37_37, &mdbcomp__trace_counts__SubString_33);
                        }
#line 712 "trace_counts.m"
                        {
#line 712 "trace_counts.m"
                          mdbcomp__trace_counts__succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(mdbcomp__trace_counts__SubString_33, &mdbcomp__trace_counts__Path_17);
                        }
#line 652 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 652 "trace_counts.m"
                          {
#line 651 "trace_counts.m"
                            {
#line 651 "trace_counts.m"
                              mdbcomp__trace_counts__PathPortPrime_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 651 "trace_counts.m"
                              MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__PathPortPrime_16, 0) = ((MR_Box) (mdbcomp__trace_counts__Path_17));
#line 651 "trace_counts.m"
                            }
#line 651 "trace_counts.m"
                            mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 652 "trace_counts.m"
                          }
#line 652 "trace_counts.m"
                      }
#line 652 "trace_counts.m"
                  }
#line 652 "trace_counts.m"
              }
#line 647 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 647 "trace_counts.m"
              {
#line 655 "trace_counts.m"
                {
#line 655 "trace_counts.m"
                  mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__LineNumberStr_13, &mdbcomp__trace_counts__LineNumberPrime_18);
                }
#line 647 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 675 "trace_counts.m"
                  {
#line 675 "trace_counts.m"
                    if ((mdbcomp__trace_counts__Rest_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 675 "trace_counts.m"
                      {
#line 676 "trace_counts.m"
                        mdbcomp__trace_counts__ExecCountPrime_19 = (MR_Integer) 0;
#line 677 "trace_counts.m"
                        mdbcomp__trace_counts__NumTestsPrime_20 = (MR_Integer) 1;
#line 675 "trace_counts.m"
                        mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 675 "trace_counts.m"
                      }
#line 675 "trace_counts.m"
                    else
#line 675 "trace_counts.m"
                      {
#line 675 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Rest_14, (MR_Integer) 1)));
#line 675 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Rest_14, (MR_Integer) 0)));

#line 675 "trace_counts.m"
                        if ((mdbcomp__trace_counts__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 679 "trace_counts.m"
                          {
#line 680 "trace_counts.m"
                            {
#line 680 "trace_counts.m"
                              mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__V_49_49, &mdbcomp__trace_counts__ExecCountPrime_19);
                            }
#line 679 "trace_counts.m"
                            if (mdbcomp__trace_counts__succeeded)
#line 679 "trace_counts.m"
                              {
#line 681 "trace_counts.m"
                                mdbcomp__trace_counts__NumTestsPrime_20 = (MR_Integer) 1;
#line 681 "trace_counts.m"
                                mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 679 "trace_counts.m"
                              }
#line 679 "trace_counts.m"
                          }
#line 675 "trace_counts.m"
                        else
#line 683 "trace_counts.m"
                          {
#line 683 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__NumTestsStr_43 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_48_48, (MR_Integer) 0)));
#line 683 "trace_counts.m"
                            MR_Word mdbcomp__trace_counts__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_48_48, (MR_Integer) 1)));

#line 683 "trace_counts.m"
                            mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "trace_counts.m"
                            if (mdbcomp__trace_counts__succeeded)
#line 683 "trace_counts.m"
                              {
#line 684 "trace_counts.m"
                                {
#line 684 "trace_counts.m"
                                  mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__V_49_49, &mdbcomp__trace_counts__ExecCountPrime_19);
                                }
#line 683 "trace_counts.m"
                                if (mdbcomp__trace_counts__succeeded)
#line 685 "trace_counts.m"
                                  {
#line 685 "trace_counts.m"
                                    mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__NumTestsStr_43, &mdbcomp__trace_counts__NumTestsPrime_20);
                                  }
#line 683 "trace_counts.m"
                              }
#line 683 "trace_counts.m"
                          }
#line 675 "trace_counts.m"
                      }
#line 675 "trace_counts.m"
                  }
#line 647 "trace_counts.m"
              }
#line 647 "trace_counts.m"
          }
#line 647 "trace_counts.m"
      }
#line 662 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 658 "trace_counts.m"
      {
#line 658 "trace_counts.m"
        *mdbcomp__trace_counts__PathPort_7 = mdbcomp__trace_counts__PathPortPrime_16;
#line 659 "trace_counts.m"
        *mdbcomp__trace_counts__LineNumber_8 = mdbcomp__trace_counts__LineNumberPrime_18;
#line 660 "trace_counts.m"
        *mdbcomp__trace_counts__ExecCount_9 = mdbcomp__trace_counts__ExecCountPrime_19;
#line 661 "trace_counts.m"
        *mdbcomp__trace_counts__NumTests_10 = mdbcomp__trace_counts__NumTestsPrime_20;
#line 658 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 658 "trace_counts.m"
      }
#line 662 "trace_counts.m"
    else
#line 663 "trace_counts.m"
      {
#line 663 "trace_counts.m"
        MR_String mdbcomp__trace_counts__PortStr_21;
#line 663 "trace_counts.m"
        MR_String mdbcomp__trace_counts__PathStr_22;
#line 663 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_24_24;
#line 663 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_25_25;
#line 663 "trace_counts.m"
        MR_String mdbcomp__trace_counts__LineNumberStr_26;
#line 663 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__Rest_27;
#line 663 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__Port_28;
#line 663 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__Path_29;
#line 663 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__Length_52;
#line 663 "trace_counts.m"
        MR_String mdbcomp__trace_counts__SubString_53;
#line 663 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_54_54;
#line 663 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_55_55;
#line 663 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_56_56;
#line 663 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_57_57;
#line 663 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_58_58;

#line 663 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__Words_11)) == (MR_mktag((MR_Integer) 1)));
#line 663 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 663 "trace_counts.m"
          {
#line 663 "trace_counts.m"
            mdbcomp__trace_counts__PortStr_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Words_11, (MR_Integer) 0)));
#line 663 "trace_counts.m"
            mdbcomp__trace_counts__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Words_11, (MR_Integer) 1)));
#line 663 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 663 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 663 "trace_counts.m"
              {
#line 663 "trace_counts.m"
                mdbcomp__trace_counts__PathStr_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_24_24, (MR_Integer) 0)));
#line 663 "trace_counts.m"
                mdbcomp__trace_counts__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_24_24, (MR_Integer) 1)));
#line 663 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 663 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 663 "trace_counts.m"
                  {
#line 663 "trace_counts.m"
                    mdbcomp__trace_counts__LineNumberStr_26 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_25_25, (MR_Integer) 0)));
#line 663 "trace_counts.m"
                    mdbcomp__trace_counts__Rest_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_25_25, (MR_Integer) 1)));
#line 664 "trace_counts.m"
                    {
#line 664 "trace_counts.m"
                      mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts__string_to_trace_port_2_p_0(mdbcomp__trace_counts__PortStr_21, &mdbcomp__trace_counts__Port_28);
                    }
#line 663 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 663 "trace_counts.m"
                      {
#line 708 "trace_counts.m"
                        mdbcomp__trace_counts__V_54_54 = (MR_String) "<";
#line 708 "trace_counts.m"
                        {
#line 708 "trace_counts.m"
                          mdbcomp__trace_counts__succeeded = mercury__string__prefix_2_p_0(mdbcomp__trace_counts__PathStr_22, mdbcomp__trace_counts__V_54_54);
                        }
#line 663 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 663 "trace_counts.m"
                          {
#line 709 "trace_counts.m"
                            mdbcomp__trace_counts__V_55_55 = (MR_String) ">";
#line 709 "trace_counts.m"
                            {
#line 709 "trace_counts.m"
                              mdbcomp__trace_counts__succeeded = mercury__string__suffix_2_p_0(mdbcomp__trace_counts__PathStr_22, mdbcomp__trace_counts__V_55_55);
                            }
#line 663 "trace_counts.m"
                            if (mdbcomp__trace_counts__succeeded)
#line 663 "trace_counts.m"
                              {
#line 710 "trace_counts.m"
                                {
#line 710 "trace_counts.m"
                                  mercury__string__length_2_p_0(mdbcomp__trace_counts__PathStr_22, &mdbcomp__trace_counts__Length_52);
                                }
#line 711 "trace_counts.m"
                                mdbcomp__trace_counts__V_56_56 = (MR_Integer) 1;
#line 711 "trace_counts.m"
                                mdbcomp__trace_counts__V_58_58 = (MR_Integer) 1;
#line 711 "trace_counts.m"
                                mdbcomp__trace_counts__V_57_57 = (mdbcomp__trace_counts__Length_52 - mdbcomp__trace_counts__V_58_58);
#line 711 "trace_counts.m"
                                {
#line 711 "trace_counts.m"
                                  mercury__string__between_4_p_0(mdbcomp__trace_counts__PathStr_22, mdbcomp__trace_counts__V_56_56, mdbcomp__trace_counts__V_57_57, &mdbcomp__trace_counts__SubString_53);
                                }
#line 712 "trace_counts.m"
                                {
#line 712 "trace_counts.m"
                                  mdbcomp__trace_counts__succeeded = mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(mdbcomp__trace_counts__SubString_53, &mdbcomp__trace_counts__Path_29);
                                }
#line 663 "trace_counts.m"
                                if (mdbcomp__trace_counts__succeeded)
#line 663 "trace_counts.m"
                                  {
#line 666 "trace_counts.m"
                                    {
#line 666 "trace_counts.m"
                                      MR_Word base;
#line 666 "trace_counts.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "trace_counts.m"
                                      *mdbcomp__trace_counts__PathPort_7 = base;
#line 666 "trace_counts.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdbcomp__trace_counts__Port_28));
#line 666 "trace_counts.m"
                                      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdbcomp__trace_counts__Path_29));
#line 666 "trace_counts.m"
                                    }
#line 667 "trace_counts.m"
                                    {
#line 667 "trace_counts.m"
                                      mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__LineNumberStr_26, mdbcomp__trace_counts__LineNumber_8);
                                    }
#line 663 "trace_counts.m"
                                    if (mdbcomp__trace_counts__succeeded)
#line 675 "trace_counts.m"
                                      {
#line 675 "trace_counts.m"
                                        if ((mdbcomp__trace_counts__Rest_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 675 "trace_counts.m"
                                          {
#line 676 "trace_counts.m"
                                            *mdbcomp__trace_counts__ExecCount_9 = (MR_Integer) 0;
#line 677 "trace_counts.m"
                                            *mdbcomp__trace_counts__NumTests_10 = (MR_Integer) 1;
#line 675 "trace_counts.m"
                                            mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 675 "trace_counts.m"
                                          }
#line 675 "trace_counts.m"
                                        else
#line 675 "trace_counts.m"
                                          {
#line 675 "trace_counts.m"
                                            MR_Word mdbcomp__trace_counts__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Rest_27, (MR_Integer) 1)));
#line 675 "trace_counts.m"
                                            MR_String mdbcomp__trace_counts__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Rest_27, (MR_Integer) 0)));

#line 675 "trace_counts.m"
                                            if ((mdbcomp__trace_counts__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 679 "trace_counts.m"
                                              {
#line 680 "trace_counts.m"
                                                {
#line 680 "trace_counts.m"
                                                  mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__V_69_69, mdbcomp__trace_counts__ExecCount_9);
                                                }
#line 679 "trace_counts.m"
                                                if (mdbcomp__trace_counts__succeeded)
#line 679 "trace_counts.m"
                                                  {
#line 681 "trace_counts.m"
                                                    *mdbcomp__trace_counts__NumTests_10 = (MR_Integer) 1;
#line 681 "trace_counts.m"
                                                    mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 679 "trace_counts.m"
                                                  }
#line 679 "trace_counts.m"
                                              }
#line 675 "trace_counts.m"
                                            else
#line 683 "trace_counts.m"
                                              {
#line 683 "trace_counts.m"
                                                MR_String mdbcomp__trace_counts__NumTestsStr_63 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, (MR_Integer) 0)));
#line 683 "trace_counts.m"
                                                MR_Word mdbcomp__trace_counts__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, (MR_Integer) 1)));

#line 683 "trace_counts.m"
                                                mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "trace_counts.m"
                                                if (mdbcomp__trace_counts__succeeded)
#line 683 "trace_counts.m"
                                                  {
#line 684 "trace_counts.m"
                                                    {
#line 684 "trace_counts.m"
                                                      mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__V_69_69, mdbcomp__trace_counts__ExecCount_9);
                                                    }
#line 683 "trace_counts.m"
                                                    if (mdbcomp__trace_counts__succeeded)
#line 685 "trace_counts.m"
                                                      {
#line 685 "trace_counts.m"
                                                        return mdbcomp__trace_counts__succeeded = mercury__string__to_int_2_p_0(mdbcomp__trace_counts__NumTestsStr_63, mdbcomp__trace_counts__NumTests_10);
                                                      }
#line 683 "trace_counts.m"
                                                  }
#line 683 "trace_counts.m"
                                              }
#line 675 "trace_counts.m"
                                          }
#line 675 "trace_counts.m"
                                      }
#line 663 "trace_counts.m"
                                  }
#line 663 "trace_counts.m"
                              }
#line 663 "trace_counts.m"
                          }
#line 663 "trace_counts.m"
                      }
#line 663 "trace_counts.m"
                  }
#line 663 "trace_counts.m"
              }
#line 663 "trace_counts.m"
          }
#line 663 "trace_counts.m"
      }
#line 644 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 644 "trace_counts.m"
  }
#line 641 "trace_counts.m"
}

#line 608 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_2_6_p_0(
#line 608 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContext_7,
#line 608 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcCounts0_8,
#line 608 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_22,
#line 608 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_23)
#line 608 "trace_counts.m"
{
#line 612 "trace_counts.m"
  while (MR_TRUE)
#line 612 "trace_counts.m"
    {
#line 612 "trace_counts.m"
      /* tailcall optimized into a loop */
#line 612 "trace_counts.m"
      {
#line 612 "trace_counts.m"
        MR_bool mdbcomp__trace_counts__succeeded;
#line 612 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__Result_11;

#line 613 "trace_counts.m"
        {
#line 613 "trace_counts.m"
          mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__Result_11);
        }
#line 633 "trace_counts.m"
#line 633 "trace_counts.m"
        switch (MR_tag((MR_Word) mdbcomp__trace_counts__Result_11)) {
#line 633 "trace_counts.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 633 "trace_counts.m"
          case (MR_Integer) 0:
#line 634 "trace_counts.m"
            {
#line 635 "trace_counts.m"
              {
#line 635 "trace_counts.m"
                mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContext_7)), ((MR_Box) (mdbcomp__trace_counts__ProcCounts0_8)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_22, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_23);
#line 635 "trace_counts.m"
                return;
              }
#line 634 "trace_counts.m"
            }
#line 633 "trace_counts.m"
            break;
#line 633 "trace_counts.m"
          case (MR_Integer) 1:
#line 615 "trace_counts.m"
            {
#line 615 "trace_counts.m"
              MR_String mdbcomp__trace_counts__Line_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_11, (MR_Integer) 0)));
#line 625 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__PathPort_13;
#line 625 "trace_counts.m"
              MR_Integer mdbcomp__trace_counts__LineNumber_14;
#line 625 "trace_counts.m"
              MR_Integer mdbcomp__trace_counts__ExecCount_15;
#line 625 "trace_counts.m"
              MR_Integer mdbcomp__trace_counts__NumTests_16;

#line 617 "trace_counts.m"
              {
#line 617 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = mdbcomp__trace_counts__parse_path_port_line_5_p_0(mdbcomp__trace_counts__Line_12, &mdbcomp__trace_counts__PathPort_13, &mdbcomp__trace_counts__LineNumber_14, &mdbcomp__trace_counts__ExecCount_15, &mdbcomp__trace_counts__NumTests_16);
              }
#line 625 "trace_counts.m"
              if (mdbcomp__trace_counts__succeeded)
#line 621 "trace_counts.m"
                {
#line 621 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__LineNoAndCount_17;
#line 621 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__ProcCounts_18;

#line 620 "trace_counts.m"
                  {
#line 620 "trace_counts.m"
                    mdbcomp__trace_counts__LineNoAndCount_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "trace_counts.m"
                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoAndCount_17, 0) = ((MR_Box) (mdbcomp__trace_counts__LineNumber_14));
#line 620 "trace_counts.m"
                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoAndCount_17, 1) = ((MR_Box) (mdbcomp__trace_counts__ExecCount_15));
#line 620 "trace_counts.m"
                    MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoAndCount_17, 2) = ((MR_Box) (mdbcomp__trace_counts__NumTests_16));
#line 620 "trace_counts.m"
                  }
#line 622 "trace_counts.m"
                  {
#line 622 "trace_counts.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, ((MR_Box) (mdbcomp__trace_counts__PathPort_13)), ((MR_Box) (mdbcomp__trace_counts__LineNoAndCount_17)), mdbcomp__trace_counts__ProcCounts0_8, &mdbcomp__trace_counts__ProcCounts_18);
                  }
#line 623 "trace_counts.m"
                  /* direct tailcall eliminated */
#line 623 "trace_counts.m"
                  {
#line 623 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__ProcCounts0__tmp_copy_8 = mdbcomp__trace_counts__ProcCounts_18;

#line 623 "trace_counts.m"
                    mdbcomp__trace_counts__ProcCounts0_8 = mdbcomp__trace_counts__ProcCounts0__tmp_copy_8;
#line 623 "trace_counts.m"
                  }
#line 623 "trace_counts.m"
                  continue;
#line 621 "trace_counts.m"
                }
#line 625 "trace_counts.m"
              else
#line 626 "trace_counts.m"
                {
#line 626 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__CurModuleNameSym_19;
#line 626 "trace_counts.m"
                  MR_String mdbcomp__trace_counts__CurFileName_20;
#line 626 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_30_30;
#line 626 "trace_counts.m"
                  MR_Integer mdbcomp__trace_counts__LineNumber_34;
#line 628 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__V_36_36;

#line 626 "trace_counts.m"
                  {
#line 626 "trace_counts.m"
                    mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContext_7)), ((MR_Box) (mdbcomp__trace_counts__ProcCounts0_8)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_22, &mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_30_30);
                  }
#line 627 "trace_counts.m"
                  {
#line 627 "trace_counts.m"
                    mercury__io__get_line_number_3_p_0(&mdbcomp__trace_counts__LineNumber_34);
                  }
#line 628 "trace_counts.m"
                  mdbcomp__trace_counts__CurModuleNameSym_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 0)));
#line 628 "trace_counts.m"
                  mdbcomp__trace_counts__CurFileName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 1)));
#line 628 "trace_counts.m"
                  mdbcomp__trace_counts__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_7, (MR_Integer) 2)));
#line 630 "trace_counts.m"
                  {
#line 630 "trace_counts.m"
                    mdbcomp__trace_counts__read_proc_trace_counts_8_p_0(mdbcomp__trace_counts__LineNumber_34, mdbcomp__trace_counts__Line_12, mdbcomp__trace_counts__CurModuleNameSym_19, mdbcomp__trace_counts__CurFileName_20, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_30_30, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_23);
#line 630 "trace_counts.m"
                    return;
                  }
#line 626 "trace_counts.m"
                }
#line 615 "trace_counts.m"
            }
#line 633 "trace_counts.m"
            break;
#line 633 "trace_counts.m"
          case (MR_Integer) 2:
#line 637 "trace_counts.m"
            {
#line 637 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__Error_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_11, (MR_Integer) 0)));

#line 638 "trace_counts.m"
              {
#line 638 "trace_counts.m"
                mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_21)));
#line 638 "trace_counts.m"
                return;
              }
#line 637 "trace_counts.m"
            }
#line 633 "trace_counts.m"
            break;
#line 633 "trace_counts.m"
        }
#line 612 "trace_counts.m"
      }
#line 612 "trace_counts.m"
      break;
#line 612 "trace_counts.m"
    }
#line 608 "trace_counts.m"
}

#line 495 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_proc_trace_counts_8_p_0(
#line 495 "trace_counts.m"
  MR_Integer mdbcomp__trace_counts__HeaderLineNumber_9,
#line 495 "trace_counts.m"
  MR_String mdbcomp__trace_counts__HeaderLine_10,
#line 495 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__CurModuleNameSym_11,
#line 495 "trace_counts.m"
  MR_String mdbcomp__trace_counts__CurFileName_12,
#line 495 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53,
#line 495 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54)
#line 495 "trace_counts.m"
{
#line 499 "trace_counts.m"
  while (MR_TRUE)
#line 499 "trace_counts.m"
    {
#line 499 "trace_counts.m"
      /* tailcall optimized into a loop */
#line 499 "trace_counts.m"
      {
#line 499 "trace_counts.m"
        MR_bool mdbcomp__trace_counts__succeeded;
#line 499 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__TokenList_15;
#line 499 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_57_57;
#line 499 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_58_58;
#line 500 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_16_16;
#line 602 "trace_counts.m"
        MR_String mdbcomp__trace_counts__TokenName_17;
#line 602 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__TokenListRest_19;
#line 502 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_61_61;
#line 502 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_18_18;

#line 500 "trace_counts.m"
        {
#line 500 "trace_counts.m"
          mdbcomp__trace_counts__V_57_57 = mercury__string__length_1_f_0(mdbcomp__trace_counts__HeaderLine_10);
        }
#line 501 "trace_counts.m"
        {
#line 501 "trace_counts.m"
          mdbcomp__trace_counts__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 501 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_58_58, 0) = ((MR_Box) (mdbcomp__trace_counts__HeaderLineNumber_9));
#line 501 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_58_58, 1) = ((MR_Box) ((MR_Integer) 1));
#line 501 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_58_58, 2) = ((MR_Box) ((MR_Integer) 0));
#line 501 "trace_counts.m"
        }
#line 500 "trace_counts.m"
        {
#line 500 "trace_counts.m"
          mercury__lexer__string_get_token_list_max_5_p_0(mdbcomp__trace_counts__HeaderLine_10, mdbcomp__trace_counts__V_57_57, &mdbcomp__trace_counts__TokenList_15, mdbcomp__trace_counts__V_58_58, &mdbcomp__trace_counts__V_16_16);
        }
#line 502 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TokenList_15)) == (MR_mktag((MR_Integer) 1)));
#line 502 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 502 "trace_counts.m"
          {
#line 502 "trace_counts.m"
            mdbcomp__trace_counts__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenList_15, (MR_Integer) 0)));
#line 502 "trace_counts.m"
            mdbcomp__trace_counts__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenList_15, (MR_Integer) 1)));
#line 502 "trace_counts.m"
            mdbcomp__trace_counts__TokenListRest_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenList_15, (MR_Integer) 2)));
#line 502 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 502 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 502 "trace_counts.m"
              mdbcomp__trace_counts__TokenName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_61_61, (MR_Integer) 0)));
#line 502 "trace_counts.m"
          }
#line 602 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 522 "trace_counts.m"
          {
#line 522 "trace_counts.m"
            MR_String mdbcomp__trace_counts__NextModuleName_20;
#line 504 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_62_62;
#line 504 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_63_63;
#line 506 "trace_counts.m"
            MR_Integer mdbcomp__trace_counts__V_21_21;

#line 504 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__TokenName_17, (MR_String) "module") == 0);
#line 504 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 504 "trace_counts.m"
              {
#line 506 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TokenListRest_19)) == (MR_mktag((MR_Integer) 1)));
#line 506 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 506 "trace_counts.m"
                  {
#line 506 "trace_counts.m"
                    mdbcomp__trace_counts__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 0)));
#line 506 "trace_counts.m"
                    mdbcomp__trace_counts__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 1)));
#line 506 "trace_counts.m"
                    mdbcomp__trace_counts__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 2)));
#line 507 "trace_counts.m"
                    mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 504 "trace_counts.m"
                      {
#line 506 "trace_counts.m"
                        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 506 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 506 "trace_counts.m"
                          mdbcomp__trace_counts__NextModuleName_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_62_62, (MR_Integer) 0)));
#line 504 "trace_counts.m"
                      }
#line 506 "trace_counts.m"
                  }
#line 504 "trace_counts.m"
              }
#line 522 "trace_counts.m"
            if (mdbcomp__trace_counts__succeeded)
#line 509 "trace_counts.m"
              {
#line 509 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__NextModuleNameSym_22;
#line 509 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__Result_23;

#line 509 "trace_counts.m"
                {
#line 509 "trace_counts.m"
                  mdbcomp__trace_counts__NextModuleNameSym_22 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__trace_counts__NextModuleName_20);
                }
#line 510 "trace_counts.m"
                {
#line 510 "trace_counts.m"
                  mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__Result_23);
                }
#line 516 "trace_counts.m"
#line 516 "trace_counts.m"
                switch (MR_tag((MR_Word) mdbcomp__trace_counts__Result_23)) {
#line 516 "trace_counts.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 516 "trace_counts.m"
                  case (MR_Integer) 0:
#line 517 "trace_counts.m"
                    *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53;
#line 516 "trace_counts.m"
                    break;
#line 516 "trace_counts.m"
                  case (MR_Integer) 1:
#line 512 "trace_counts.m"
                    {
#line 512 "trace_counts.m"
                      MR_String mdbcomp__trace_counts__Line_24 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_23, (MR_Integer) 0)));
#line 512 "trace_counts.m"
                      MR_Integer mdbcomp__trace_counts__LineNumber_25;

#line 513 "trace_counts.m"
                      {
#line 513 "trace_counts.m"
                        mercury__io__get_line_number_3_p_0(&mdbcomp__trace_counts__LineNumber_25);
                      }
#line 514 "trace_counts.m"
                      /* direct tailcall eliminated */
#line 514 "trace_counts.m"
                      {
#line 514 "trace_counts.m"
                        MR_Integer mdbcomp__trace_counts__HeaderLineNumber__tmp_copy_9 = mdbcomp__trace_counts__LineNumber_25;
#line 514 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__HeaderLine__tmp_copy_10 = mdbcomp__trace_counts__Line_24;
#line 514 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__CurModuleNameSym__tmp_copy_11 = mdbcomp__trace_counts__NextModuleNameSym_22;

#line 514 "trace_counts.m"
                        mdbcomp__trace_counts__CurModuleNameSym_11 = mdbcomp__trace_counts__CurModuleNameSym__tmp_copy_11;
#line 514 "trace_counts.m"
                        mdbcomp__trace_counts__HeaderLine_10 = mdbcomp__trace_counts__HeaderLine__tmp_copy_10;
#line 514 "trace_counts.m"
                        mdbcomp__trace_counts__HeaderLineNumber_9 = mdbcomp__trace_counts__HeaderLineNumber__tmp_copy_9;
#line 514 "trace_counts.m"
                      }
#line 514 "trace_counts.m"
                      continue;
#line 512 "trace_counts.m"
                    }
#line 516 "trace_counts.m"
                    break;
#line 516 "trace_counts.m"
                  case (MR_Integer) 2:
#line 519 "trace_counts.m"
                    {
#line 519 "trace_counts.m"
                      MR_Word mdbcomp__trace_counts__Error_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_23, (MR_Integer) 0)));

#line 520 "trace_counts.m"
                      {
#line 520 "trace_counts.m"
                        mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_26)));
#line 520 "trace_counts.m"
                        return;
                      }
#line 519 "trace_counts.m"
                    }
#line 516 "trace_counts.m"
                    break;
#line 516 "trace_counts.m"
                }
#line 509 "trace_counts.m"
              }
#line 522 "trace_counts.m"
            else
#line 540 "trace_counts.m"
              {
#line 540 "trace_counts.m"
                MR_String mdbcomp__trace_counts__NextFileName_27;
#line 523 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_68_68;
#line 523 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_69_69;
#line 525 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_28_28;

#line 523 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__TokenName_17, (MR_String) "file") == 0);
#line 523 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 523 "trace_counts.m"
                  {
#line 525 "trace_counts.m"
                    mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TokenListRest_19)) == (MR_mktag((MR_Integer) 1)));
#line 525 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 525 "trace_counts.m"
                      {
#line 525 "trace_counts.m"
                        mdbcomp__trace_counts__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 0)));
#line 525 "trace_counts.m"
                        mdbcomp__trace_counts__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 1)));
#line 525 "trace_counts.m"
                        mdbcomp__trace_counts__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 2)));
#line 526 "trace_counts.m"
                        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 523 "trace_counts.m"
                          {
#line 525 "trace_counts.m"
                            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_68_68)) == (MR_mktag((MR_Integer) 1)));
#line 525 "trace_counts.m"
                            if (mdbcomp__trace_counts__succeeded)
#line 525 "trace_counts.m"
                              mdbcomp__trace_counts__NextFileName_27 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, (MR_Integer) 0)));
#line 523 "trace_counts.m"
                          }
#line 525 "trace_counts.m"
                      }
#line 523 "trace_counts.m"
                  }
#line 540 "trace_counts.m"
                if (mdbcomp__trace_counts__succeeded)
#line 528 "trace_counts.m"
                  {
#line 528 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__Result_128;

#line 528 "trace_counts.m"
                    {
#line 528 "trace_counts.m"
                      mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__Result_128);
                    }
#line 534 "trace_counts.m"
#line 534 "trace_counts.m"
                    switch (MR_tag((MR_Word) mdbcomp__trace_counts__Result_128)) {
#line 534 "trace_counts.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 534 "trace_counts.m"
                      case (MR_Integer) 0:
#line 535 "trace_counts.m"
                        *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53;
#line 534 "trace_counts.m"
                        break;
#line 534 "trace_counts.m"
                      case (MR_Integer) 1:
#line 530 "trace_counts.m"
                        {
#line 530 "trace_counts.m"
                          MR_String mdbcomp__trace_counts__Line_122 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_128, (MR_Integer) 0)));
#line 530 "trace_counts.m"
                          MR_Integer mdbcomp__trace_counts__LineNumber_123;

#line 531 "trace_counts.m"
                          {
#line 531 "trace_counts.m"
                            mercury__io__get_line_number_3_p_0(&mdbcomp__trace_counts__LineNumber_123);
                          }
#line 532 "trace_counts.m"
                          /* direct tailcall eliminated */
#line 532 "trace_counts.m"
                          {
#line 532 "trace_counts.m"
                            MR_Integer mdbcomp__trace_counts__HeaderLineNumber__tmp_copy_9 = mdbcomp__trace_counts__LineNumber_123;
#line 532 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__HeaderLine__tmp_copy_10 = mdbcomp__trace_counts__Line_122;
#line 532 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__CurFileName__tmp_copy_12 = mdbcomp__trace_counts__NextFileName_27;

#line 532 "trace_counts.m"
                            mdbcomp__trace_counts__CurFileName_12 = mdbcomp__trace_counts__CurFileName__tmp_copy_12;
#line 532 "trace_counts.m"
                            mdbcomp__trace_counts__HeaderLine_10 = mdbcomp__trace_counts__HeaderLine__tmp_copy_10;
#line 532 "trace_counts.m"
                            mdbcomp__trace_counts__HeaderLineNumber_9 = mdbcomp__trace_counts__HeaderLineNumber__tmp_copy_9;
#line 532 "trace_counts.m"
                          }
#line 532 "trace_counts.m"
                          continue;
#line 530 "trace_counts.m"
                        }
#line 534 "trace_counts.m"
                        break;
#line 534 "trace_counts.m"
                      case (MR_Integer) 2:
#line 537 "trace_counts.m"
                        {
#line 537 "trace_counts.m"
                          MR_Word mdbcomp__trace_counts__Error_124 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_128, (MR_Integer) 0)));

#line 538 "trace_counts.m"
                          {
#line 538 "trace_counts.m"
                            mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_124)));
#line 538 "trace_counts.m"
                            return;
                          }
#line 537 "trace_counts.m"
                        }
#line 534 "trace_counts.m"
                        break;
#line 534 "trace_counts.m"
                    }
#line 528 "trace_counts.m"
                  }
#line 540 "trace_counts.m"
                else
#line 597 "trace_counts.m"
                  {
#line 597 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__ProcLabel_35;
#line 552 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__V_156_156;
#line 552 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__V_158_158;
#line 552 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__V_159_159;
#line 552 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__V_161_161;
#line 552 "trace_counts.m"
                    MR_String mdbcomp__trace_counts__V_162_162;
#line 552 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__V_163_163;
#line 552 "trace_counts.m"
                    MR_Word mdbcomp__trace_counts__V_165_165;
#line 552 "trace_counts.m"
                    MR_Integer mdbcomp__trace_counts__V_166_166;
#line 555 "trace_counts.m"
                    MR_Integer mdbcomp__trace_counts__V_157_157;
#line 556 "trace_counts.m"
                    MR_Integer mdbcomp__trace_counts__V_160_160;
#line 557 "trace_counts.m"
                    MR_Integer mdbcomp__trace_counts__V_164_164;
#line 552 "trace_counts.m"
                    MR_Integer mdbcomp__trace_counts__lo_0;
#line 552 "trace_counts.m"
                    MR_Integer mdbcomp__trace_counts__hi_1;
#line 552 "trace_counts.m"
                    MR_Integer mdbcomp__trace_counts__mid_2;
#line 552 "trace_counts.m"
                    MR_Integer mdbcomp__trace_counts__result_3;

#line 555 "trace_counts.m"
                    mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TokenListRest_19)) == (MR_mktag((MR_Integer) 1)));
#line 555 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 555 "trace_counts.m"
                      {
#line 555 "trace_counts.m"
                        mdbcomp__trace_counts__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 0)));
#line 555 "trace_counts.m"
                        mdbcomp__trace_counts__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 1)));
#line 555 "trace_counts.m"
                        mdbcomp__trace_counts__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TokenListRest_19, (MR_Integer) 2)));
#line 556 "trace_counts.m"
                        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_156_156)) == (MR_mktag((MR_Integer) 1)));
#line 556 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 556 "trace_counts.m"
                          {
#line 556 "trace_counts.m"
                            mdbcomp__trace_counts__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_156_156, (MR_Integer) 0)));
#line 556 "trace_counts.m"
                            mdbcomp__trace_counts__V_160_160 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_156_156, (MR_Integer) 1)));
#line 556 "trace_counts.m"
                            mdbcomp__trace_counts__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_156_156, (MR_Integer) 2)));
#line 555 "trace_counts.m"
                            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_158_158)) == (MR_mktag((MR_Integer) 1)));
#line 555 "trace_counts.m"
                            if (mdbcomp__trace_counts__succeeded)
#line 555 "trace_counts.m"
                              {
#line 555 "trace_counts.m"
                                mdbcomp__trace_counts__V_162_162 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_158_158, (MR_Integer) 0)));
#line 557 "trace_counts.m"
                                mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_159_159)) == (MR_mktag((MR_Integer) 1)));
#line 557 "trace_counts.m"
                                if (mdbcomp__trace_counts__succeeded)
#line 557 "trace_counts.m"
                                  {
#line 557 "trace_counts.m"
                                    mdbcomp__trace_counts__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_159_159, (MR_Integer) 0)));
#line 557 "trace_counts.m"
                                    mdbcomp__trace_counts__V_164_164 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_159_159, (MR_Integer) 1)));
#line 557 "trace_counts.m"
                                    mdbcomp__trace_counts__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_159_159, (MR_Integer) 2)));
#line 557 "trace_counts.m"
                                    mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_165_165)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_165_165, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 557 "trace_counts.m"
                                    if (mdbcomp__trace_counts__succeeded)
#line 557 "trace_counts.m"
                                      {
#line 557 "trace_counts.m"
                                        mdbcomp__trace_counts__V_166_166 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_165_165, (MR_Integer) 1)));
#line 552 "trace_counts.m"
                                        /* binary string jump switch */
#line 552 "trace_counts.m"
                                        mdbcomp__trace_counts__lo_0 = (MR_Integer) 0;
#line 552 "trace_counts.m"
                                        mdbcomp__trace_counts__hi_1 = (MR_Integer) 3;
#line 552 "trace_counts.m"
                                        do
#line 552 "trace_counts.m"
                                          {
#line 552 "trace_counts.m"
                                            mdbcomp__trace_counts__mid_2 = (((mdbcomp__trace_counts__lo_0 + mdbcomp__trace_counts__hi_1)) / (MR_Integer) 2);
#line 552 "trace_counts.m"
                                            mdbcomp__trace_counts__result_3 = MR_strcmp(mdbcomp__trace_counts__TokenName_17, ((&mdbcomp__trace_counts_vector_common_10[0 + mdbcomp__trace_counts__mid_2]))->mdbcomp__trace_counts__vector_common_type_10_0__vct_10_f_0);
#line 552 "trace_counts.m"
                                            if ((mdbcomp__trace_counts__result_3 == (MR_Integer) 0))
#line 552 "trace_counts.m"
                                              {
#line 552 "trace_counts.m"
#line 552 "trace_counts.m"
                                                switch (((&mdbcomp__trace_counts_vector_common_10[0 + mdbcomp__trace_counts__mid_2]))->mdbcomp__trace_counts__vector_common_type_10_0__vct_10_f_1) {
#line 552 "trace_counts.m"
                                                  default: /*NOTREACHED*/ MR_assert(0);
#line 552 "trace_counts.m"
                                                  case (MR_Integer) 0:
#line 553 "trace_counts.m"
                                                    {
#line 553 "trace_counts.m"
                                                      /* case "fproc" */
#line 553 "trace_counts.m"
                                                      {
#line 553 "trace_counts.m"
                                                        MR_Word mdbcomp__trace_counts__V_98_98;
#line 553 "trace_counts.m"
                                                        MR_Integer mdbcomp__trace_counts__Arity_133;

#line 558 "trace_counts.m"
                                                        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "trace_counts.m"
                                                        if (mdbcomp__trace_counts__succeeded)
#line 553 "trace_counts.m"
                                                          {
#line 556 "trace_counts.m"
                                                            mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_161_161)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_161_161, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 556 "trace_counts.m"
                                                            if (mdbcomp__trace_counts__succeeded)
#line 556 "trace_counts.m"
                                                              {
#line 556 "trace_counts.m"
                                                                mdbcomp__trace_counts__Arity_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_161_161, (MR_Integer) 1)));
#line 559 "trace_counts.m"
                                                                mdbcomp__trace_counts__V_98_98 = (MR_Integer) 1;
#line 559 "trace_counts.m"
                                                                {
#line 559 "trace_counts.m"
                                                                  mdbcomp__trace_counts__ProcLabel_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 559 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
#line 559 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 1) = ((MR_Box) (mdbcomp__trace_counts__V_98_98));
#line 559 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 2) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
#line 559 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 3) = ((MR_Box) (mdbcomp__trace_counts__V_162_162));
#line 559 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 4) = ((MR_Box) (mdbcomp__trace_counts__Arity_133));
#line 559 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 5) = ((MR_Box) (mdbcomp__trace_counts__V_166_166));
#line 559 "trace_counts.m"
                                                                }
#line 559 "trace_counts.m"
                                                                mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 556 "trace_counts.m"
                                                              }
#line 553 "trace_counts.m"
                                                          }
#line 553 "trace_counts.m"
                                                      }
#line 553 "trace_counts.m"
                                                    }
#line 552 "trace_counts.m"
                                                    break;
#line 552 "trace_counts.m"
                                                  case (MR_Integer) 1:
#line 573 "trace_counts.m"
                                                    {
#line 573 "trace_counts.m"
                                                      /* case "fprocdecl" */
#line 573 "trace_counts.m"
                                                      {
#line 573 "trace_counts.m"
                                                        MR_Word mdbcomp__trace_counts__V_80_80;
#line 573 "trace_counts.m"
                                                        MR_Word mdbcomp__trace_counts__V_81_81;
#line 573 "trace_counts.m"
                                                        MR_Word mdbcomp__trace_counts__V_82_82;
#line 573 "trace_counts.m"
                                                        MR_String mdbcomp__trace_counts__Name_138;
#line 573 "trace_counts.m"
                                                        MR_Integer mdbcomp__trace_counts__Mode_140;
#line 573 "trace_counts.m"
                                                        MR_Word mdbcomp__trace_counts__DeclModuleNameSym_142;
#line 578 "trace_counts.m"
                                                        MR_Integer mdbcomp__trace_counts__V_48_48;

#line 576 "trace_counts.m"
                                                        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_161_161)) == (MR_mktag((MR_Integer) 1)));
#line 576 "trace_counts.m"
                                                        if (mdbcomp__trace_counts__succeeded)
#line 576 "trace_counts.m"
                                                          {
#line 576 "trace_counts.m"
                                                            mdbcomp__trace_counts__Name_138 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_161_161, (MR_Integer) 0)));
#line 578 "trace_counts.m"
                                                            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_163_163)) == (MR_mktag((MR_Integer) 1)));
#line 578 "trace_counts.m"
                                                            if (mdbcomp__trace_counts__succeeded)
#line 578 "trace_counts.m"
                                                              {
#line 578 "trace_counts.m"
                                                                mdbcomp__trace_counts__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 0)));
#line 578 "trace_counts.m"
                                                                mdbcomp__trace_counts__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 1)));
#line 578 "trace_counts.m"
                                                                mdbcomp__trace_counts__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 2)));
#line 579 "trace_counts.m"
                                                                mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "trace_counts.m"
                                                                if (mdbcomp__trace_counts__succeeded)
#line 573 "trace_counts.m"
                                                                  {
#line 578 "trace_counts.m"
                                                                    mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_80_80)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_80_80, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 578 "trace_counts.m"
                                                                    if (mdbcomp__trace_counts__succeeded)
#line 578 "trace_counts.m"
                                                                      {
#line 578 "trace_counts.m"
                                                                        mdbcomp__trace_counts__Mode_140 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_80_80, (MR_Integer) 1)));
#line 580 "trace_counts.m"
                                                                        {
#line 580 "trace_counts.m"
                                                                          mdbcomp__trace_counts__DeclModuleNameSym_142 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__trace_counts__V_162_162);
                                                                        }
#line 581 "trace_counts.m"
                                                                        mdbcomp__trace_counts__V_82_82 = (MR_Integer) 1;
#line 581 "trace_counts.m"
                                                                        {
#line 581 "trace_counts.m"
                                                                          mdbcomp__trace_counts__ProcLabel_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 581 "trace_counts.m"
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
#line 581 "trace_counts.m"
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 1) = ((MR_Box) (mdbcomp__trace_counts__V_82_82));
#line 581 "trace_counts.m"
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 2) = ((MR_Box) (mdbcomp__trace_counts__DeclModuleNameSym_142));
#line 581 "trace_counts.m"
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 3) = ((MR_Box) (mdbcomp__trace_counts__Name_138));
#line 581 "trace_counts.m"
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 4) = ((MR_Box) (mdbcomp__trace_counts__V_166_166));
#line 581 "trace_counts.m"
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 5) = ((MR_Box) (mdbcomp__trace_counts__Mode_140));
#line 581 "trace_counts.m"
                                                                        }
#line 581 "trace_counts.m"
                                                                        mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 578 "trace_counts.m"
                                                                      }
#line 573 "trace_counts.m"
                                                                  }
#line 578 "trace_counts.m"
                                                              }
#line 576 "trace_counts.m"
                                                          }
#line 573 "trace_counts.m"
                                                      }
#line 573 "trace_counts.m"
                                                    }
#line 552 "trace_counts.m"
                                                    break;
#line 552 "trace_counts.m"
                                                  case (MR_Integer) 2:
#line 544 "trace_counts.m"
                                                    {
#line 544 "trace_counts.m"
                                                      /* case "pproc" */
#line 544 "trace_counts.m"
                                                      {
#line 544 "trace_counts.m"
                                                        MR_Integer mdbcomp__trace_counts__Arity_31;
#line 544 "trace_counts.m"
                                                        MR_Word mdbcomp__trace_counts__V_106_106;

#line 549 "trace_counts.m"
                                                        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "trace_counts.m"
                                                        if (mdbcomp__trace_counts__succeeded)
#line 544 "trace_counts.m"
                                                          {
#line 547 "trace_counts.m"
                                                            mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_161_161)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_161_161, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 547 "trace_counts.m"
                                                            if (mdbcomp__trace_counts__succeeded)
#line 547 "trace_counts.m"
                                                              {
#line 547 "trace_counts.m"
                                                                mdbcomp__trace_counts__Arity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_161_161, (MR_Integer) 1)));
#line 550 "trace_counts.m"
                                                                mdbcomp__trace_counts__V_106_106 = (MR_Integer) 0;
#line 550 "trace_counts.m"
                                                                {
#line 550 "trace_counts.m"
                                                                  mdbcomp__trace_counts__ProcLabel_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 550 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
#line 550 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 1) = ((MR_Box) (mdbcomp__trace_counts__V_106_106));
#line 550 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 2) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
#line 550 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 3) = ((MR_Box) (mdbcomp__trace_counts__V_162_162));
#line 550 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 4) = ((MR_Box) (mdbcomp__trace_counts__Arity_31));
#line 550 "trace_counts.m"
                                                                  MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 5) = ((MR_Box) (mdbcomp__trace_counts__V_166_166));
#line 550 "trace_counts.m"
                                                                }
#line 550 "trace_counts.m"
                                                                mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 547 "trace_counts.m"
                                                              }
#line 544 "trace_counts.m"
                                                          }
#line 544 "trace_counts.m"
                                                      }
#line 544 "trace_counts.m"
                                                    }
#line 552 "trace_counts.m"
                                                    break;
#line 552 "trace_counts.m"
                                                  case (MR_Integer) 3:
#line 562 "trace_counts.m"
                                                    {
#line 562 "trace_counts.m"
                                                      /* case "pprocdecl" */
#line 562 "trace_counts.m"
                                                      {
#line 562 "trace_counts.m"
                                                        MR_Word mdbcomp__trace_counts__DeclModuleNameSym_44;
#line 562 "trace_counts.m"
                                                        MR_Word mdbcomp__trace_counts__V_89_89;
#line 562 "trace_counts.m"
                                                        MR_Word mdbcomp__trace_counts__V_90_90;
#line 562 "trace_counts.m"
                                                        MR_Word mdbcomp__trace_counts__V_91_91;
#line 562 "trace_counts.m"
                                                        MR_String mdbcomp__trace_counts__Name_135;
#line 562 "trace_counts.m"
                                                        MR_Integer mdbcomp__trace_counts__Mode_137;
#line 567 "trace_counts.m"
                                                        MR_Integer mdbcomp__trace_counts__V_43_43;

#line 565 "trace_counts.m"
                                                        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_161_161)) == (MR_mktag((MR_Integer) 1)));
#line 565 "trace_counts.m"
                                                        if (mdbcomp__trace_counts__succeeded)
#line 565 "trace_counts.m"
                                                          {
#line 565 "trace_counts.m"
                                                            mdbcomp__trace_counts__Name_135 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_161_161, (MR_Integer) 0)));
#line 567 "trace_counts.m"
                                                            mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__V_163_163)) == (MR_mktag((MR_Integer) 1)));
#line 567 "trace_counts.m"
                                                            if (mdbcomp__trace_counts__succeeded)
#line 567 "trace_counts.m"
                                                              {
#line 567 "trace_counts.m"
                                                                mdbcomp__trace_counts__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 0)));
#line 567 "trace_counts.m"
                                                                mdbcomp__trace_counts__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 1)));
#line 567 "trace_counts.m"
                                                                mdbcomp__trace_counts__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_163_163, (MR_Integer) 2)));
#line 568 "trace_counts.m"
                                                                mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 562 "trace_counts.m"
                                                                if (mdbcomp__trace_counts__succeeded)
#line 562 "trace_counts.m"
                                                                  {
#line 567 "trace_counts.m"
                                                                    mdbcomp__trace_counts__succeeded = ((((MR_tag((MR_Word) mdbcomp__trace_counts__V_89_89)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_89_89, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 567 "trace_counts.m"
                                                                    if (mdbcomp__trace_counts__succeeded)
#line 567 "trace_counts.m"
                                                                      {
#line 567 "trace_counts.m"
                                                                        mdbcomp__trace_counts__Mode_137 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__V_89_89, (MR_Integer) 1)));
#line 569 "trace_counts.m"
                                                                        {
#line 569 "trace_counts.m"
                                                                          mdbcomp__trace_counts__DeclModuleNameSym_44 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__trace_counts__V_162_162);
                                                                        }
#line 570 "trace_counts.m"
                                                                        mdbcomp__trace_counts__V_91_91 = (MR_Integer) 0;
#line 570 "trace_counts.m"
                                                                        {
#line 570 "trace_counts.m"
                                                                          mdbcomp__trace_counts__ProcLabel_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 570 "trace_counts.m"
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
#line 570 "trace_counts.m"
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 1) = ((MR_Box) (mdbcomp__trace_counts__V_91_91));
#line 570 "trace_counts.m"
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 2) = ((MR_Box) (mdbcomp__trace_counts__DeclModuleNameSym_44));
#line 570 "trace_counts.m"
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 3) = ((MR_Box) (mdbcomp__trace_counts__Name_135));
#line 570 "trace_counts.m"
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 4) = ((MR_Box) (mdbcomp__trace_counts__V_166_166));
#line 570 "trace_counts.m"
                                                                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_35, 5) = ((MR_Box) (mdbcomp__trace_counts__Mode_137));
#line 570 "trace_counts.m"
                                                                        }
#line 570 "trace_counts.m"
                                                                        mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 567 "trace_counts.m"
                                                                      }
#line 562 "trace_counts.m"
                                                                  }
#line 567 "trace_counts.m"
                                                              }
#line 565 "trace_counts.m"
                                                          }
#line 562 "trace_counts.m"
                                                      }
#line 562 "trace_counts.m"
                                                    }
#line 552 "trace_counts.m"
                                                    break;
#line 552 "trace_counts.m"
                                                }
#line 552 "trace_counts.m"
                                                /* jump out of search loop */
#line 552 "trace_counts.m"
                                                goto label_0;
#line 552 "trace_counts.m"
                                              }
#line 552 "trace_counts.m"
                                            else
#line 552 "trace_counts.m"
                                            if ((mdbcomp__trace_counts__result_3 < (MR_Integer) 0))
#line 552 "trace_counts.m"
                                              mdbcomp__trace_counts__hi_1 = (mdbcomp__trace_counts__mid_2 - (MR_Integer) 1);
#line 552 "trace_counts.m"
                                            else
#line 552 "trace_counts.m"
                                              mdbcomp__trace_counts__lo_0 = (mdbcomp__trace_counts__mid_2 + (MR_Integer) 1);
#line 552 "trace_counts.m"
                                          }
#line 552 "trace_counts.m"
                                        while ((mdbcomp__trace_counts__lo_0 <= mdbcomp__trace_counts__hi_1));
#line 552 "trace_counts.m"
                                        mdbcomp__trace_counts__succeeded = MR_FALSE;
#line 552 "trace_counts.m"
                                      label_0:;
#line 557 "trace_counts.m"
                                      }
#line 557 "trace_counts.m"
                                  }
#line 555 "trace_counts.m"
                              }
#line 556 "trace_counts.m"
                          }
#line 555 "trace_counts.m"
                      }
#line 597 "trace_counts.m"
                    if (mdbcomp__trace_counts__succeeded)
#line 586 "trace_counts.m"
                      {
#line 586 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__ProcLabelInContext_49;
#line 586 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__StartCounts_51;
#line 586 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_109_109;
#line 592 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__ProbeCounts_50;
#line 592 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_108_108;
#line 590 "trace_counts.m"
                        MR_Box mdbcomp__trace_counts__conv0_ProbeCounts_50;

#line 585 "trace_counts.m"
                        {
#line 585 "trace_counts.m"
                          mdbcomp__trace_counts__ProcLabelInContext_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 585 "trace_counts.m"
                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_49, 0) = ((MR_Box) (mdbcomp__trace_counts__CurModuleNameSym_11));
#line 585 "trace_counts.m"
                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_49, 1) = ((MR_Box) (mdbcomp__trace_counts__CurFileName_12));
#line 585 "trace_counts.m"
                          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabelInContext_49, 2) = ((MR_Box) (mdbcomp__trace_counts__ProcLabel_35));
#line 585 "trace_counts.m"
                        }
#line 590 "trace_counts.m"
                        {
#line 590 "trace_counts.m"
                          mdbcomp__trace_counts__succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContext_49)), &mdbcomp__trace_counts__conv0_ProbeCounts_50, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53, &mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_108_108);
                        }
#line 590 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 590 "trace_counts.m"
                          {
#line 590 "trace_counts.m"
                            mdbcomp__trace_counts__ProbeCounts_50 = ((MR_Word) mdbcomp__trace_counts__conv0_ProbeCounts_50);
#line 590 "trace_counts.m"
                            mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 590 "trace_counts.m"
                          }
#line 592 "trace_counts.m"
                        if (mdbcomp__trace_counts__succeeded)
#line 591 "trace_counts.m"
                          {
#line 591 "trace_counts.m"
                            mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_109_109 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_108_108;
#line 591 "trace_counts.m"
                            mdbcomp__trace_counts__StartCounts_51 = mdbcomp__trace_counts__ProbeCounts_50;
#line 591 "trace_counts.m"
                          }
#line 592 "trace_counts.m"
                        else
#line 593 "trace_counts.m"
                          {
#line 593 "trace_counts.m"
                            {
#line 593 "trace_counts.m"
                              mdbcomp__trace_counts__StartCounts_51 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0);
                            }
#line 593 "trace_counts.m"
                            mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_109_109 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_53;
#line 593 "trace_counts.m"
                          }
#line 595 "trace_counts.m"
                        {
#line 595 "trace_counts.m"
                          mdbcomp__trace_counts__read_proc_trace_counts_2_6_p_0(mdbcomp__trace_counts__ProcLabelInContext_49, mdbcomp__trace_counts__StartCounts_51, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_109_109, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_54);
#line 595 "trace_counts.m"
                          return;
                        }
#line 586 "trace_counts.m"
                      }
#line 597 "trace_counts.m"
                    else
#line 599 "trace_counts.m"
                      {
#line 599 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__Message_52;
#line 599 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__V_116_116;
#line 599 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__V_168_168;
#line 599 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__V_175_175;

#line 599 "trace_counts.m"
                        {
#line 599 "trace_counts.m"
                          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_3[9], mdbcomp__trace_counts__HeaderLineNumber_9, &mdbcomp__trace_counts__V_168_168);
                        }
#line 598 "trace_counts.m"
                        {
#line 598 "trace_counts.m"
                          mdbcomp__trace_counts__V_175_175 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__V_168_168, (MR_String) " of execution trace");
                        }
#line 598 "trace_counts.m"
                        {
#line 598 "trace_counts.m"
                          mdbcomp__trace_counts__Message_52 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", mdbcomp__trace_counts__V_175_175);
                        }
#line 600 "trace_counts.m"
                        mdbcomp__trace_counts__V_116_116 = (MR_Word) mdbcomp__trace_counts__Message_52;
#line 600 "trace_counts.m"
                        {
#line 600 "trace_counts.m"
                          mercury__exception__throw_1_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0, ((MR_Box) (mdbcomp__trace_counts__V_116_116)));
#line 600 "trace_counts.m"
                          return;
                        }
#line 599 "trace_counts.m"
                      }
#line 597 "trace_counts.m"
                  }
#line 540 "trace_counts.m"
              }
#line 522 "trace_counts.m"
          }
#line 602 "trace_counts.m"
        else
#line 604 "trace_counts.m"
          {
#line 604 "trace_counts.m"
            MR_Word mdbcomp__trace_counts__V_121_121;
#line 604 "trace_counts.m"
            MR_String mdbcomp__trace_counts__Message_147;
#line 604 "trace_counts.m"
            MR_String mdbcomp__trace_counts__V_178_178;
#line 604 "trace_counts.m"
            MR_String mdbcomp__trace_counts__V_185_185;

#line 604 "trace_counts.m"
            {
#line 604 "trace_counts.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_3[9], mdbcomp__trace_counts__HeaderLineNumber_9, &mdbcomp__trace_counts__V_178_178);
            }
#line 603 "trace_counts.m"
            {
#line 603 "trace_counts.m"
              mdbcomp__trace_counts__V_185_185 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__V_178_178, (MR_String) " of execution trace");
            }
#line 603 "trace_counts.m"
            {
#line 603 "trace_counts.m"
              mdbcomp__trace_counts__Message_147 = mercury__string__f_43_43_2_f_0((MR_String) "parse error on line ", mdbcomp__trace_counts__V_185_185);
            }
#line 605 "trace_counts.m"
            mdbcomp__trace_counts__V_121_121 = (MR_Word) mdbcomp__trace_counts__Message_147;
#line 605 "trace_counts.m"
            {
#line 605 "trace_counts.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0, ((MR_Box) (mdbcomp__trace_counts__V_121_121)));
#line 605 "trace_counts.m"
              return;
            }
#line 604 "trace_counts.m"
          }
#line 499 "trace_counts.m"
      }
#line 499 "trace_counts.m"
      break;
#line 499 "trace_counts.m"
    }
#line 495 "trace_counts.m"
}

#line 470 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_setup_4_p_0(
#line 470 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_13,
#line 470 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_14)
#line 470 "trace_counts.m"
{
#line 473 "trace_counts.m"
  {
#line 473 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 473 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__LineNumber_7;
#line 473 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Result_8;

#line 474 "trace_counts.m"
    {
#line 474 "trace_counts.m"
      mercury__io__get_line_number_3_p_0(&mdbcomp__trace_counts__LineNumber_7);
    }
#line 475 "trace_counts.m"
    {
#line 475 "trace_counts.m"
      mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__Result_8);
    }
#line 485 "trace_counts.m"
#line 485 "trace_counts.m"
    switch (MR_tag((MR_Word) mdbcomp__trace_counts__Result_8)) {
#line 485 "trace_counts.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 485 "trace_counts.m"
      case (MR_Integer) 0:
#line 486 "trace_counts.m"
        *mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_14 = mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_13;
#line 485 "trace_counts.m"
        break;
#line 485 "trace_counts.m"
      case (MR_Integer) 1:
#line 477 "trace_counts.m"
        {
#line 477 "trace_counts.m"
          MR_String mdbcomp__trace_counts__Line_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_8, (MR_Integer) 0)));

#line 483 "trace_counts.m"
          {
#line 483 "trace_counts.m"
            mdbcomp__trace_counts__read_proc_trace_counts_8_p_0(mdbcomp__trace_counts__LineNumber_7, mdbcomp__trace_counts__Line_9, (MR_Word) &mdbcomp__trace_counts_scalar_common_3[7], (MR_String) "", mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_13, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_14);
#line 483 "trace_counts.m"
            return;
          }
#line 477 "trace_counts.m"
        }
#line 485 "trace_counts.m"
        break;
#line 485 "trace_counts.m"
      case (MR_Integer) 2:
#line 488 "trace_counts.m"
        {
#line 488 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_8, (MR_Integer) 0)));

#line 489 "trace_counts.m"
          {
#line 489 "trace_counts.m"
            mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_12)));
#line 489 "trace_counts.m"
            return;
          }
#line 488 "trace_counts.m"
        }
#line 485 "trace_counts.m"
        break;
#line 485 "trace_counts.m"
    }
#line 473 "trace_counts.m"
  }
#line 470 "trace_counts.m"
}

#line 443 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_p_0_1(
#line 443 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 443 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 443 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 443 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3)
#line 443 "trace_counts.m"
{
#line 443 "trace_counts.m"
  {
#line 443 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 443 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_14;

#line 443 "trace_counts.m"
    {
#line 443 "trace_counts.m"
      mdbcomp__trace_counts__read_trace_counts_setup_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_14);
    }
#line 443 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_14));
#line 443 "trace_counts.m"
  }
#line 443 "trace_counts.m"
}

#line 434 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_p_0(
#line 434 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__ReadResult_4)
#line 434 "trace_counts.m"
{
#line 437 "trace_counts.m"
  {
#line 437 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 437 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__FileTypeResult_6;

#line 438 "trace_counts.m"
    {
#line 438 "trace_counts.m"
      mercury__io__read_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, &mdbcomp__trace_counts__FileTypeResult_6);
    }
#line 463 "trace_counts.m"
#line 463 "trace_counts.m"
    switch (MR_tag((MR_Word) mdbcomp__trace_counts__FileTypeResult_6)) {
#line 463 "trace_counts.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 463 "trace_counts.m"
      case (MR_Integer) 0:
#line 466 "trace_counts.m"
        {
#line 467 "trace_counts.m"
          *mdbcomp__trace_counts__ReadResult_4 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_3[8]);
#line 466 "trace_counts.m"
        }
#line 463 "trace_counts.m"
        break;
#line 463 "trace_counts.m"
      case (MR_Integer) 1:
#line 440 "trace_counts.m"
        {
#line 440 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__FileType_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileTypeResult_6, (MR_Integer) 0)));
#line 440 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__NewlineResult_8;
#line 442 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_22_22;

#line 441 "trace_counts.m"
          {
#line 441 "trace_counts.m"
            mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__NewlineResult_8);
          }
#line 442 "trace_counts.m"
          mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__NewlineResult_8)) == (MR_mktag((MR_Integer) 1)));
#line 442 "trace_counts.m"
          if (mdbcomp__trace_counts__succeeded)
#line 442 "trace_counts.m"
            {
#line 442 "trace_counts.m"
              mdbcomp__trace_counts__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__NewlineResult_8, (MR_Integer) 0)));
#line 442 "trace_counts.m"
              mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_22_22, (MR_String) "\n") == 0);
#line 442 "trace_counts.m"
            }
#line 460 "trace_counts.m"
          if (mdbcomp__trace_counts__succeeded)
#line 443 "trace_counts.m"
            {
#line 443 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__Result_9;
#line 443 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_23_23;
#line 443 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_25_25;

#line 443 "trace_counts.m"
              {
#line 443 "trace_counts.m"
                mdbcomp__trace_counts__V_25_25 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0]);
              }
#line 443 "trace_counts.m"
              {
#line 443 "trace_counts.m"
                mdbcomp__trace_counts__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 443 "trace_counts.m"
                MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_23_23, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_9[0]));
#line 443 "trace_counts.m"
                MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_23_23, 1) = ((MR_Box) (mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_p_0_1));
#line 443 "trace_counts.m"
                MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 443 "trace_counts.m"
                MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_23_23, 3) = ((MR_Box) (mdbcomp__trace_counts__V_25_25));
#line 443 "trace_counts.m"
              }
#line 443 "trace_counts.m"
              {
#line 443 "trace_counts.m"
                mercury__exception__try_io_4_p_0((MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__V_23_23, &mdbcomp__trace_counts__Result_9);
              }
#line 447 "trace_counts.m"
              if (((MR_tag((MR_Word) mdbcomp__trace_counts__Result_9)) == (MR_mktag((MR_Integer) 2))))
#line 448 "trace_counts.m"
                {
#line 448 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__Exception_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__Result_9, (MR_Integer) 0)));
#line 451 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__IOError_12;
#line 449 "trace_counts.m"
                  MR_Box mdbcomp__trace_counts__conv1_IOError_12;

#line 449 "trace_counts.m"
                  {
#line 449 "trace_counts.m"
                    mdbcomp__trace_counts__succeeded = mercury__univ__univ_1_f_2((MR_Word) &mercury__io__io__type_ctor_info_error_0, &mdbcomp__trace_counts__conv1_IOError_12, mdbcomp__trace_counts__Exception_11);
                  }
#line 449 "trace_counts.m"
                  if (mdbcomp__trace_counts__succeeded)
#line 449 "trace_counts.m"
                    {
#line 449 "trace_counts.m"
                      mdbcomp__trace_counts__IOError_12 = ((MR_Word) mdbcomp__trace_counts__conv1_IOError_12);
#line 449 "trace_counts.m"
                      mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 449 "trace_counts.m"
                    }
#line 451 "trace_counts.m"
                  if (mdbcomp__trace_counts__succeeded)
#line 450 "trace_counts.m"
                    {
#line 450 "trace_counts.m"
                      MR_Word base;
#line 450 "trace_counts.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "trace_counts.m"
                      *mdbcomp__trace_counts__ReadResult_4 = base;
#line 450 "trace_counts.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 450 "trace_counts.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdbcomp__trace_counts__IOError_12));
#line 450 "trace_counts.m"
                    }
#line 451 "trace_counts.m"
                  else
#line 453 "trace_counts.m"
                    {
#line 453 "trace_counts.m"
                      MR_String mdbcomp__trace_counts__Message_13;
#line 451 "trace_counts.m"
                      MR_Box mdbcomp__trace_counts__conv2_Message_13;

#line 451 "trace_counts.m"
                      {
#line 451 "trace_counts.m"
                        mdbcomp__trace_counts__succeeded = mercury__univ__univ_1_f_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &mdbcomp__trace_counts__conv2_Message_13, mdbcomp__trace_counts__Exception_11);
                      }
#line 451 "trace_counts.m"
                      if (mdbcomp__trace_counts__succeeded)
#line 451 "trace_counts.m"
                        {
#line 451 "trace_counts.m"
                          mdbcomp__trace_counts__Message_13 = ((MR_String) mdbcomp__trace_counts__conv2_Message_13);
#line 451 "trace_counts.m"
                          mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 451 "trace_counts.m"
                        }
#line 453 "trace_counts.m"
                      if (mdbcomp__trace_counts__succeeded)
#line 452 "trace_counts.m"
                        {
#line 452 "trace_counts.m"
                          MR_Word base;
#line 452 "trace_counts.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 452 "trace_counts.m"
                          *mdbcomp__trace_counts__ReadResult_4 = base;
#line 452 "trace_counts.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdbcomp__trace_counts__Message_13));
#line 452 "trace_counts.m"
                        }
#line 453 "trace_counts.m"
                      else
#line 455 "trace_counts.m"
                        {
#line 455 "trace_counts.m"
                          MR_String mdbcomp__trace_counts__Error_14;
#line 453 "trace_counts.m"
                          MR_Word mdbcomp__trace_counts__V_26_26;
#line 453 "trace_counts.m"
                          MR_Box mdbcomp__trace_counts__conv3_V_26_26;

#line 453 "trace_counts.m"
                          {
#line 453 "trace_counts.m"
                            mdbcomp__trace_counts__succeeded = mercury__univ__univ_1_f_2((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_syntax_error_0, &mdbcomp__trace_counts__conv3_V_26_26, mdbcomp__trace_counts__Exception_11);
                          }
#line 453 "trace_counts.m"
                          if (mdbcomp__trace_counts__succeeded)
#line 453 "trace_counts.m"
                            {
#line 453 "trace_counts.m"
                              mdbcomp__trace_counts__V_26_26 = ((MR_Word) mdbcomp__trace_counts__conv3_V_26_26);
#line 453 "trace_counts.m"
                              mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 453 "trace_counts.m"
                            }
#line 453 "trace_counts.m"
                          if (mdbcomp__trace_counts__succeeded)
#line 453 "trace_counts.m"
                            {
#line 453 "trace_counts.m"
                              mdbcomp__trace_counts__Error_14 = (MR_String) mdbcomp__trace_counts__V_26_26;
#line 453 "trace_counts.m"
                              mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 453 "trace_counts.m"
                            }
#line 455 "trace_counts.m"
                          if (mdbcomp__trace_counts__succeeded)
#line 454 "trace_counts.m"
                            {
#line 454 "trace_counts.m"
                              MR_Word base;
#line 454 "trace_counts.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 454 "trace_counts.m"
                              *mdbcomp__trace_counts__ReadResult_4 = base;
#line 454 "trace_counts.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__Error_14));
#line 454 "trace_counts.m"
                            }
#line 455 "trace_counts.m"
                          else
#line 456 "trace_counts.m"
                            {
#line 456 "trace_counts.m"
                              MR_String mdbcomp__trace_counts__V_27_27;
#line 456 "trace_counts.m"
                              MR_String mdbcomp__trace_counts__V_29_29;
#line 456 "trace_counts.m"
                              MR_String mdbcomp__trace_counts__V_31_31;

#line 457 "trace_counts.m"
                              {
#line 457 "trace_counts.m"
                                mdbcomp__trace_counts__V_31_31 = mercury__string__string_1_f_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, ((MR_Box) (mdbcomp__trace_counts__Exception_11)));
                              }
#line 457 "trace_counts.m"
                              {
#line 457 "trace_counts.m"
                                mdbcomp__trace_counts__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected exception type: ", mdbcomp__trace_counts__V_31_31);
                              }
#line 456 "trace_counts.m"
                              {
#line 456 "trace_counts.m"
                                mdbcomp__trace_counts__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "read_trace_counts_from_cur_stream: ", mdbcomp__trace_counts__V_29_29);
                              }
#line 456 "trace_counts.m"
                              {
#line 456 "trace_counts.m"
                                mercury__require__error_1_p_0(mdbcomp__trace_counts__V_27_27);
#line 456 "trace_counts.m"
                                return;
                              }
#line 456 "trace_counts.m"
                            }
#line 455 "trace_counts.m"
                        }
#line 453 "trace_counts.m"
                    }
#line 448 "trace_counts.m"
                }
#line 447 "trace_counts.m"
              else
#line 445 "trace_counts.m"
                {
#line 445 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__TraceCounts_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_9, (MR_Integer) 0)));

#line 446 "trace_counts.m"
                  {
#line 446 "trace_counts.m"
                    MR_Word base;
#line 446 "trace_counts.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 446 "trace_counts.m"
                    *mdbcomp__trace_counts__ReadResult_4 = base;
#line 446 "trace_counts.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__trace_counts__FileType_7));
#line 446 "trace_counts.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__trace_counts__TraceCounts_10));
#line 446 "trace_counts.m"
                  }
#line 445 "trace_counts.m"
                }
#line 443 "trace_counts.m"
            }
#line 460 "trace_counts.m"
          else
#line 461 "trace_counts.m"
            {
#line 461 "trace_counts.m"
              *mdbcomp__trace_counts__ReadResult_4 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_3[8]);
#line 461 "trace_counts.m"
            }
#line 440 "trace_counts.m"
        }
#line 463 "trace_counts.m"
        break;
#line 463 "trace_counts.m"
      case (MR_Integer) 2:
#line 466 "trace_counts.m"
        {
#line 467 "trace_counts.m"
          *mdbcomp__trace_counts__ReadResult_4 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_3[8]);
#line 466 "trace_counts.m"
        }
#line 463 "trace_counts.m"
        break;
#line 463 "trace_counts.m"
    }
#line 437 "trace_counts.m"
  }
#line 434 "trace_counts.m"
}

#line 329 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_list_stream_8_p_0(
#line 329 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ShowProgress_9,
#line 329 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__FileType0_10,
#line 329 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCounts0_11,
#line 329 "trace_counts.m"
  MR_String mdbcomp__trace_counts__MainFileName_12,
#line 329 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__Stream_13,
#line 329 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__Result_14)
#line 329 "trace_counts.m"
{
#line 334 "trace_counts.m"
  while (MR_TRUE)
#line 334 "trace_counts.m"
    {
#line 334 "trace_counts.m"
      /* tailcall optimized into a loop */
#line 334 "trace_counts.m"
      {
#line 334 "trace_counts.m"
        MR_bool mdbcomp__trace_counts__succeeded;
#line 334 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__ReadResult_16;

#line 335 "trace_counts.m"
        {
#line 335 "trace_counts.m"
          mercury__io__read_line_as_string_4_p_0(mdbcomp__trace_counts__Stream_13, &mdbcomp__trace_counts__ReadResult_16);
        }
#line 382 "trace_counts.m"
#line 382 "trace_counts.m"
        switch (MR_tag((MR_Word) mdbcomp__trace_counts__ReadResult_16)) {
#line 382 "trace_counts.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 382 "trace_counts.m"
          case (MR_Integer) 0:
#line 388 "trace_counts.m"
            {
#line 388 "trace_counts.m"
              MR_Word base;
#line 388 "trace_counts.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 388 "trace_counts.m"
              *mdbcomp__trace_counts__Result_14 = base;
#line 388 "trace_counts.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__trace_counts__FileType0_10));
#line 388 "trace_counts.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__trace_counts__TraceCounts0_11));
#line 388 "trace_counts.m"
            }
#line 382 "trace_counts.m"
            break;
#line 382 "trace_counts.m"
          case (MR_Integer) 1:
#line 337 "trace_counts.m"
            {
#line 337 "trace_counts.m"
              MR_String mdbcomp__trace_counts__Line_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__ReadResult_16, (MR_Integer) 0)));
#line 337 "trace_counts.m"
              MR_String mdbcomp__trace_counts__FileName_18;

#line 339 "trace_counts.m"
              {
#line 339 "trace_counts.m"
                mdbcomp__trace_counts__FileName_18 = mercury__string__rstrip_1_f_0(mdbcomp__trace_counts__Line_17);
              }
#line 342 "trace_counts.m"
              mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__FileName_18, (MR_String) "") == 0);
#line 346 "trace_counts.m"
              if (mdbcomp__trace_counts__succeeded)
#line 344 "trace_counts.m"
                {
#line 344 "trace_counts.m"
                  /* direct tailcall eliminated */
#line 344 "trace_counts.m"
                  continue;
#line 344 "trace_counts.m"
                }
#line 346 "trace_counts.m"
              else
#line 353 "trace_counts.m"
                {
#line 353 "trace_counts.m"
                  MR_Word mdbcomp__trace_counts__ReadTCResult_19;

#line 351 "trace_counts.m"
#line 351 "trace_counts.m"
                  switch (mdbcomp__trace_counts__ShowProgress_9) {
#line 351 "trace_counts.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 351 "trace_counts.m"
                    case (MR_Integer) 0:
#line 352 "trace_counts.m"
                      {
#line 352 "trace_counts.m"
                      }
#line 351 "trace_counts.m"
                      break;
#line 351 "trace_counts.m"
                    case (MR_Integer) 1:
#line 348 "trace_counts.m"
                      {
#line 349 "trace_counts.m"
                        {
#line 349 "trace_counts.m"
                          mercury__io__write_string_3_p_0(mdbcomp__trace_counts__FileName_18);
                        }
#line 350 "trace_counts.m"
                        {
#line 350 "trace_counts.m"
                          mercury__io__nl_2_p_0();
                        }
#line 348 "trace_counts.m"
                      }
#line 351 "trace_counts.m"
                      break;
#line 351 "trace_counts.m"
                  }
#line 354 "trace_counts.m"
                  {
#line 354 "trace_counts.m"
                    mdbcomp__trace_counts__read_trace_counts_4_p_0(mdbcomp__trace_counts__FileName_18, &mdbcomp__trace_counts__ReadTCResult_19);
                  }
#line 362 "trace_counts.m"
#line 362 "trace_counts.m"
                  switch (MR_tag((MR_Word) mdbcomp__trace_counts__ReadTCResult_19)) {
#line 362 "trace_counts.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 362 "trace_counts.m"
                    case (MR_Integer) 0:
#line 356 "trace_counts.m"
                      {
#line 356 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__FileType1_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 0)));
#line 356 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__TraceCounts1_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 1)));
#line 356 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__TraceCounts_22;
#line 356 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__FileType_23;
#line 356 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__V_68_68;
#line 356 "trace_counts.m"
                        MR_Word mdbcomp__trace_counts__V_69_69;

#line 357 "trace_counts.m"
                        {
#line 357 "trace_counts.m"
                          mdbcomp__trace_counts__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "trace_counts.m"
                          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_69_69, 0) = ((MR_Box) (mdbcomp__trace_counts__TraceCounts1_21));
#line 357 "trace_counts.m"
                          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "trace_counts.m"
                        }
#line 357 "trace_counts.m"
                        {
#line 357 "trace_counts.m"
                          mdbcomp__trace_counts__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "trace_counts.m"
                          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, 0) = ((MR_Box) (mdbcomp__trace_counts__TraceCounts0_11));
#line 357 "trace_counts.m"
                          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_68_68, 1) = ((MR_Box) (mdbcomp__trace_counts__V_69_69));
#line 357 "trace_counts.m"
                        }
#line 357 "trace_counts.m"
                        {
#line 357 "trace_counts.m"
                          mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0(mdbcomp__trace_counts__V_68_68, &mdbcomp__trace_counts__TraceCounts_22);
                        }
#line 359 "trace_counts.m"
                        {
#line 359 "trace_counts.m"
                          mdbcomp__trace_counts__FileType_23 = mdbcomp__trace_counts__sum_trace_count_file_type_2_f_0(mdbcomp__trace_counts__FileType0_10, mdbcomp__trace_counts__FileType1_20);
                        }
#line 360 "trace_counts.m"
                        /* direct tailcall eliminated */
#line 360 "trace_counts.m"
                        {
#line 360 "trace_counts.m"
                          MR_Word mdbcomp__trace_counts__FileType0__tmp_copy_10 = mdbcomp__trace_counts__FileType_23;
#line 360 "trace_counts.m"
                          MR_Word mdbcomp__trace_counts__TraceCounts0__tmp_copy_11 = mdbcomp__trace_counts__TraceCounts_22;

#line 360 "trace_counts.m"
                          mdbcomp__trace_counts__TraceCounts0_11 = mdbcomp__trace_counts__TraceCounts0__tmp_copy_11;
#line 360 "trace_counts.m"
                          mdbcomp__trace_counts__FileType0_10 = mdbcomp__trace_counts__FileType0__tmp_copy_10;
#line 360 "trace_counts.m"
                        }
#line 360 "trace_counts.m"
                        continue;
#line 356 "trace_counts.m"
                      }
#line 362 "trace_counts.m"
                      break;
#line 362 "trace_counts.m"
                    case (MR_Integer) 1:
#line 373 "trace_counts.m"
                      {
#line 373 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__V_49_49;
#line 373 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__V_51_51;
#line 373 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__V_52_52;
#line 373 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__ErrMsg_74 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 0)));

#line 375 "trace_counts.m"
                        {
#line 375 "trace_counts.m"
                          mdbcomp__trace_counts__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_74);
                        }
#line 375 "trace_counts.m"
                        {
#line 375 "trace_counts.m"
                          mdbcomp__trace_counts__V_51_51 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_18, mdbcomp__trace_counts__V_52_52);
                        }
#line 374 "trace_counts.m"
                        {
#line 374 "trace_counts.m"
                          mdbcomp__trace_counts__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) "Syntax error in file \140", mdbcomp__trace_counts__V_51_51);
                        }
#line 374 "trace_counts.m"
                        {
#line 374 "trace_counts.m"
                          MR_Word base;
#line 374 "trace_counts.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 374 "trace_counts.m"
                          *mdbcomp__trace_counts__Result_14 = base;
#line 374 "trace_counts.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_49_49));
#line 374 "trace_counts.m"
                        }
#line 373 "trace_counts.m"
                      }
#line 362 "trace_counts.m"
                      break;
#line 362 "trace_counts.m"
                    case (MR_Integer) 2:
#line 377 "trace_counts.m"
                      {
#line 377 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__V_42_42;
#line 377 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__V_44_44;
#line 377 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__V_46_46;
#line 377 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__V_47_47;
#line 377 "trace_counts.m"
                        MR_String mdbcomp__trace_counts__ErrMsg_75 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 0)));

#line 379 "trace_counts.m"
                        {
#line 379 "trace_counts.m"
                          mdbcomp__trace_counts__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_75);
                        }
#line 379 "trace_counts.m"
                        {
#line 379 "trace_counts.m"
                          mdbcomp__trace_counts__V_46_46 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_18, mdbcomp__trace_counts__V_47_47);
                        }
#line 379 "trace_counts.m"
                        {
#line 379 "trace_counts.m"
                          mdbcomp__trace_counts__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "from file \140", mdbcomp__trace_counts__V_46_46);
                        }
#line 378 "trace_counts.m"
                        {
#line 378 "trace_counts.m"
                          mdbcomp__trace_counts__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading trace counts ", mdbcomp__trace_counts__V_44_44);
                        }
#line 378 "trace_counts.m"
                        {
#line 378 "trace_counts.m"
                          MR_Word base;
#line 378 "trace_counts.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 378 "trace_counts.m"
                          *mdbcomp__trace_counts__Result_14 = base;
#line 378 "trace_counts.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_42_42));
#line 378 "trace_counts.m"
                        }
#line 377 "trace_counts.m"
                      }
#line 362 "trace_counts.m"
                      break;
#line 362 "trace_counts.m"
                    case (MR_Integer) 3:
#line 362 "trace_counts.m"
#line 362 "trace_counts.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 0)))) {
#line 362 "trace_counts.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 362 "trace_counts.m"
                        case (MR_Integer) 0:
#line 368 "trace_counts.m"
                          {
#line 368 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_54_54;
#line 368 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_56_56;
#line 368 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_58_58;
#line 368 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_59_59;
#line 368 "trace_counts.m"
                            MR_Word mdbcomp__trace_counts__IOError_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 1)));
#line 368 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__ErrMsg_73;

#line 369 "trace_counts.m"
                            {
#line 369 "trace_counts.m"
                              mdbcomp__trace_counts__ErrMsg_73 = mercury__io__error_message_1_f_0(mdbcomp__trace_counts__IOError_72);
                            }
#line 371 "trace_counts.m"
                            {
#line 371 "trace_counts.m"
                              mdbcomp__trace_counts__V_59_59 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_73);
                            }
#line 371 "trace_counts.m"
                            {
#line 371 "trace_counts.m"
                              mdbcomp__trace_counts__V_58_58 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_18, mdbcomp__trace_counts__V_59_59);
                            }
#line 371 "trace_counts.m"
                            {
#line 371 "trace_counts.m"
                              mdbcomp__trace_counts__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_58_58);
                            }
#line 370 "trace_counts.m"
                            {
#line 370 "trace_counts.m"
                              mdbcomp__trace_counts__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error opening file ", mdbcomp__trace_counts__V_56_56);
                            }
#line 370 "trace_counts.m"
                            {
#line 370 "trace_counts.m"
                              MR_Word base;
#line 370 "trace_counts.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 370 "trace_counts.m"
                              *mdbcomp__trace_counts__Result_14 = base;
#line 370 "trace_counts.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_54_54));
#line 370 "trace_counts.m"
                            }
#line 368 "trace_counts.m"
                          }
#line 362 "trace_counts.m"
                          break;
#line 362 "trace_counts.m"
                        case (MR_Integer) 1:
#line 363 "trace_counts.m"
                          {
#line 363 "trace_counts.m"
                            MR_Word mdbcomp__trace_counts__IOError_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_19, (MR_Integer) 1)));
#line 363 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__ErrMsg_25;
#line 363 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_61_61;
#line 363 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_63_63;
#line 363 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_65_65;
#line 363 "trace_counts.m"
                            MR_String mdbcomp__trace_counts__V_66_66;

#line 364 "trace_counts.m"
                            {
#line 364 "trace_counts.m"
                              mdbcomp__trace_counts__ErrMsg_25 = mercury__io__error_message_1_f_0(mdbcomp__trace_counts__IOError_24);
                            }
#line 366 "trace_counts.m"
                            {
#line 366 "trace_counts.m"
                              mdbcomp__trace_counts__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_25);
                            }
#line 366 "trace_counts.m"
                            {
#line 366 "trace_counts.m"
                              mdbcomp__trace_counts__V_65_65 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_18, mdbcomp__trace_counts__V_66_66);
                            }
#line 366 "trace_counts.m"
                            {
#line 366 "trace_counts.m"
                              mdbcomp__trace_counts__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_65_65);
                            }
#line 365 "trace_counts.m"
                            {
#line 365 "trace_counts.m"
                              mdbcomp__trace_counts__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error reading file ", mdbcomp__trace_counts__V_63_63);
                            }
#line 365 "trace_counts.m"
                            {
#line 365 "trace_counts.m"
                              MR_Word base;
#line 365 "trace_counts.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 365 "trace_counts.m"
                              *mdbcomp__trace_counts__Result_14 = base;
#line 365 "trace_counts.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_61_61));
#line 365 "trace_counts.m"
                            }
#line 363 "trace_counts.m"
                          }
#line 362 "trace_counts.m"
                          break;
#line 362 "trace_counts.m"
                      }
#line 362 "trace_counts.m"
                      break;
#line 362 "trace_counts.m"
                  }
#line 353 "trace_counts.m"
                }
#line 337 "trace_counts.m"
            }
#line 382 "trace_counts.m"
            break;
#line 382 "trace_counts.m"
          case (MR_Integer) 2:
#line 383 "trace_counts.m"
            {
#line 383 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__Error_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__ReadResult_16, (MR_Integer) 0)));
#line 383 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_30_30;
#line 383 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_32_32;
#line 383 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_34_34;
#line 383 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_35_35;
#line 383 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_37_37;

#line 385 "trace_counts.m"
              {
#line 385 "trace_counts.m"
                mdbcomp__trace_counts__V_37_37 = mercury__string__string_1_f_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__Error_26)));
              }
#line 385 "trace_counts.m"
              {
#line 385 "trace_counts.m"
                mdbcomp__trace_counts__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__V_37_37);
              }
#line 385 "trace_counts.m"
              {
#line 385 "trace_counts.m"
                mdbcomp__trace_counts__V_34_34 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__MainFileName_12, mdbcomp__trace_counts__V_35_35);
              }
#line 384 "trace_counts.m"
              {
#line 384 "trace_counts.m"
                mdbcomp__trace_counts__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_34_34);
              }
#line 384 "trace_counts.m"
              {
#line 384 "trace_counts.m"
                mdbcomp__trace_counts__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "IO error reading file ", mdbcomp__trace_counts__V_32_32);
              }
#line 384 "trace_counts.m"
              {
#line 384 "trace_counts.m"
                MR_Word base;
#line 384 "trace_counts.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 384 "trace_counts.m"
                *mdbcomp__trace_counts__Result_14 = base;
#line 384 "trace_counts.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_30_30));
#line 384 "trace_counts.m"
              }
#line 383 "trace_counts.m"
            }
#line 382 "trace_counts.m"
            break;
#line 382 "trace_counts.m"
        }
#line 334 "trace_counts.m"
      }
#line 334 "trace_counts.m"
      break;
#line 334 "trace_counts.m"
    }
#line 329 "trace_counts.m"
}

#line 257 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_proc_counts_acc_5_p_0(
#line 257 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsB_6,
#line 257 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__PathPortA_7,
#line 257 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__LineNoCountA_8,
#line 257 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_0_12,
#line 257 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_13)
#line 257 "trace_counts.m"
{
#line 266 "trace_counts.m"
  {
#line 266 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 266 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__LineNoCountB_10;
#line 263 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__conv0_LineNoCountB_10;

#line 263 "trace_counts.m"
    {
#line 263 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__trace_counts__ProcTraceCountsB_6, ((MR_Box) (mdbcomp__trace_counts__PathPortA_7)), &mdbcomp__trace_counts__conv0_LineNoCountB_10);
    }
#line 263 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 263 "trace_counts.m"
      {
#line 263 "trace_counts.m"
        mdbcomp__trace_counts__LineNoCountB_10 = ((MR_Word) mdbcomp__trace_counts__conv0_LineNoCountB_10);
#line 263 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 263 "trace_counts.m"
      }
#line 266 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 264 "trace_counts.m"
      {
#line 264 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__LineNoCount_11;
#line 264 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__LineNumber1_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountA_8, (MR_Integer) 0)));
#line 264 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__Count1_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountA_8, (MR_Integer) 1)));
#line 264 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__Count2_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountB_10, (MR_Integer) 1)));
#line 264 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_31_31 = (mdbcomp__trace_counts__Count1_26 - mdbcomp__trace_counts__Count2_29);
#line 282 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts___NumTests1_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountA_8, (MR_Integer) 2)));
#line 283 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts___LineNumber_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountB_10, (MR_Integer) 0)));
#line 283 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts___NumTests2_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCountB_10, (MR_Integer) 2)));

#line 284 "trace_counts.m"
        {
#line 284 "trace_counts.m"
          mdbcomp__trace_counts__LineNoCount_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 284 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCount_11, 0) = ((MR_Box) (mdbcomp__trace_counts__LineNumber1_25));
#line 284 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCount_11, 1) = ((MR_Box) (mdbcomp__trace_counts__V_31_31));
#line 284 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LineNoCount_11, 2) = ((MR_Box) ((MR_Integer) -1));
#line 284 "trace_counts.m"
        }
#line 265 "trace_counts.m"
        {
#line 265 "trace_counts.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, ((MR_Box) (mdbcomp__trace_counts__PathPortA_7)), ((MR_Box) (mdbcomp__trace_counts__LineNoCount_11)), mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_0_12, mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_13);
#line 265 "trace_counts.m"
          return;
        }
#line 264 "trace_counts.m"
      }
#line 266 "trace_counts.m"
    else
#line 267 "trace_counts.m"
      {
#line 267 "trace_counts.m"
        {
#line 267 "trace_counts.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, ((MR_Box) (mdbcomp__trace_counts__PathPortA_7)), ((MR_Box) (mdbcomp__trace_counts__LineNoCountA_8)), mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_0_12, mdbcomp__trace_counts__STATE_VARIABLE_ProcTraceCounts_13);
#line 267 "trace_counts.m"
          return;
        }
#line 267 "trace_counts.m"
      }
#line 266 "trace_counts.m"
  }
#line 257 "trace_counts.m"
}

#line 254 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0_1(
#line 254 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 254 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 254 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 254 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 254 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4)
#line 254 "trace_counts.m"
{
#line 254 "trace_counts.m"
  {
#line 254 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 254 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv1_STATE_VARIABLE_ProcTraceCounts_13;

#line 254 "trace_counts.m"
    {
#line 254 "trace_counts.m"
      mdbcomp__trace_counts__diff_proc_counts_acc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3), &mdbcomp__trace_counts__conv1_STATE_VARIABLE_ProcTraceCounts_13);
    }
#line 254 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_4 = ((MR_Box) (mdbcomp__trace_counts__conv1_STATE_VARIABLE_ProcTraceCounts_13));
#line 254 "trace_counts.m"
  }
#line 254 "trace_counts.m"
}

#line 237 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0(
#line 237 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__TraceCountsB_6,
#line 237 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcLabelInContextA_7,
#line 237 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsA_8,
#line 237 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_12,
#line 237 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_13)
#line 237 "trace_counts.m"
{
#line 246 "trace_counts.m"
  {
#line 246 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 246 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__ProcTraceCountsB_10;
#line 243 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__conv0_ProcTraceCountsB_10;

#line 243 "trace_counts.m"
    {
#line 243 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], mdbcomp__trace_counts__TraceCountsB_6, ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContextA_7)), &mdbcomp__trace_counts__conv0_ProcTraceCountsB_10);
    }
#line 243 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 243 "trace_counts.m"
      {
#line 243 "trace_counts.m"
        mdbcomp__trace_counts__ProcTraceCountsB_10 = ((MR_Word) mdbcomp__trace_counts__conv0_ProcTraceCountsB_10);
#line 243 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 243 "trace_counts.m"
      }
#line 246 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 244 "trace_counts.m"
      {
#line 244 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__TypeCtorInfo_13_31;
#line 244 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__TypeCtorInfo_14_32;
#line 244 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__ProcTraceCounts_11;
#line 244 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_25_25;
#line 244 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_26_26;
#line 254 "trace_counts.m"
        MR_Box mdbcomp__trace_counts__conv2_ProcTraceCounts_11;

#line 254 "trace_counts.m"
        {
#line 254 "trace_counts.m"
          mdbcomp__trace_counts__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 254 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_25_25, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_5[2]));
#line 254 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_25_25, 1) = ((MR_Box) (mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0_1));
#line 254 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 254 "trace_counts.m"
          MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_25_25, 3) = ((MR_Box) (mdbcomp__trace_counts__ProcTraceCountsB_10));
#line 254 "trace_counts.m"
        }
#line 8953 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__TypeCtorInfo_13_31 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
#line 8955 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__TypeCtorInfo_14_32 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;
#line 255 "trace_counts.m"
        {
#line 255 "trace_counts.m"
          mdbcomp__trace_counts__V_26_26 = mercury__map__init_0_f_0(mdbcomp__trace_counts__TypeCtorInfo_13_31, mdbcomp__trace_counts__TypeCtorInfo_14_32);
        }
#line 254 "trace_counts.m"
        {
#line 254 "trace_counts.m"
          mercury__map__foldl_4_p_0(mdbcomp__trace_counts__TypeCtorInfo_13_31, mdbcomp__trace_counts__TypeCtorInfo_14_32, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], mdbcomp__trace_counts__V_25_25, mdbcomp__trace_counts__ProcTraceCountsA_8, ((MR_Box) (mdbcomp__trace_counts__V_26_26)), &mdbcomp__trace_counts__conv2_ProcTraceCounts_11);
        }
#line 254 "trace_counts.m"
        mdbcomp__trace_counts__ProcTraceCounts_11 = ((MR_Word) mdbcomp__trace_counts__conv2_ProcTraceCounts_11);
#line 245 "trace_counts.m"
        {
#line 245 "trace_counts.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContextA_7)), ((MR_Box) (mdbcomp__trace_counts__ProcTraceCounts_11)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_12, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_13);
#line 245 "trace_counts.m"
          return;
        }
#line 244 "trace_counts.m"
      }
#line 246 "trace_counts.m"
    else
#line 247 "trace_counts.m"
      {
#line 247 "trace_counts.m"
        {
#line 247 "trace_counts.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], ((MR_Box) (mdbcomp__trace_counts__ProcLabelInContextA_7)), ((MR_Box) (mdbcomp__trace_counts__ProcTraceCountsA_8)), mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_0_12, mdbcomp__trace_counts__STATE_VARIABLE_TraceCounts_13);
#line 247 "trace_counts.m"
          return;
        }
#line 247 "trace_counts.m"
      }
#line 246 "trace_counts.m"
  }
#line 237 "trace_counts.m"
}

#line 217 "trace_counts.m"
static MR_Word MR_CALL 
mdbcomp__trace_counts__sum_counts_on_line_2_f_0(
#line 217 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__LC1_4,
#line 217 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__LC2_5)
#line 217 "trace_counts.m"
{
#line 220 "trace_counts.m"
  {
#line 220 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 220 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__LC_6;
#line 220 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__LineNumber1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC1_4, (MR_Integer) 0)));
#line 220 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__Count1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC1_4, (MR_Integer) 1)));
#line 220 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__NumTests1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC1_4, (MR_Integer) 2)));
#line 220 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__Count2_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC2_5, (MR_Integer) 1)));
#line 220 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__NumTests2_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC2_5, (MR_Integer) 2)));
#line 220 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__V_13_13 = (mdbcomp__trace_counts__Count1_8 + mdbcomp__trace_counts__Count2_11);
#line 220 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__V_14_14 = (mdbcomp__trace_counts__NumTests1_9 + mdbcomp__trace_counts__NumTests2_12);
#line 227 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts___LineNumber_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC2_5, (MR_Integer) 0)));

#line 228 "trace_counts.m"
    {
#line 228 "trace_counts.m"
      mdbcomp__trace_counts__LC_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 228 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC_6, 0) = ((MR_Box) (mdbcomp__trace_counts__LineNumber1_7));
#line 228 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_13_13));
#line 228 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__LC_6, 2) = ((MR_Box) (mdbcomp__trace_counts__V_14_14));
#line 228 "trace_counts.m"
    }
#line 220 "trace_counts.m"
    return mdbcomp__trace_counts__LC_6;
#line 220 "trace_counts.m"
  }
#line 217 "trace_counts.m"
}

#line 214 "trace_counts.m"
static MR_Box MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0_1(
#line 214 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 214 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 214 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2)
#line 214 "trace_counts.m"
{
#line 214 "trace_counts.m"
  {
#line 214 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__wrapper_arg_3;
#line 214 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 214 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv0_LC_6;

#line 214 "trace_counts.m"
    {
#line 214 "trace_counts.m"
      mdbcomp__trace_counts__conv0_LC_6 = mdbcomp__trace_counts__sum_counts_on_line_2_f_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2));
    }
#line 214 "trace_counts.m"
    mdbcomp__trace_counts__wrapper_arg_3 = ((MR_Box) (mdbcomp__trace_counts__conv0_LC_6));
#line 214 "trace_counts.m"
    return mdbcomp__trace_counts__wrapper_arg_3;
#line 214 "trace_counts.m"
  }
#line 214 "trace_counts.m"
}

#line 210 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0(
#line 210 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsA_4,
#line 210 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__ProcTraceCountsB_5,
#line 210 "trace_counts.m"
  MR_Word * mdbcomp__trace_counts__ProcTraceCounts_6)
#line 210 "trace_counts.m"
{
#line 213 "trace_counts.m"
  {
#line 213 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 214 "trace_counts.m"
    {
#line 214 "trace_counts.m"
      *mdbcomp__trace_counts__ProcTraceCounts_6 = mercury__map__union_3_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[6], mdbcomp__trace_counts__ProcTraceCountsA_4, mdbcomp__trace_counts__ProcTraceCountsB_5);
    }
#line 213 "trace_counts.m"
  }
#line 210 "trace_counts.m"
}

#line 182 "trace_counts.m"
MR_Integer MR_CALL 
mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(
#line 182 "trace_counts.m"
  MR_Word mdbcomp__trace_counts__HeadVar__1_1)
#line 182 "trace_counts.m"
{
#line 939 "trace_counts.m"
  {
#line 939 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 939 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__HeadVar__2_2;

#line 939 "trace_counts.m"
#line 939 "trace_counts.m"
    switch (MR_tag((MR_Word) mdbcomp__trace_counts__HeadVar__1_1)) {
#line 939 "trace_counts.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 939 "trace_counts.m"
      case (MR_Integer) 0:
#line 940 "trace_counts.m"
        mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 1;
#line 939 "trace_counts.m"
        break;
#line 939 "trace_counts.m"
      case (MR_Integer) 1:
#line 939 "trace_counts.m"
        {
#line 939 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_4_4;

#line 939 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 939 "trace_counts.m"
          mdbcomp__trace_counts__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 939 "trace_counts.m"
        }
#line 939 "trace_counts.m"
        break;
#line 939 "trace_counts.m"
      case (MR_Integer) 2:
#line 941 "trace_counts.m"
        mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) -1;
#line 939 "trace_counts.m"
        break;
#line 939 "trace_counts.m"
    }
#line 939 "trace_counts.m"
    return mdbcomp__trace_counts__HeadVar__2_2;
#line 939 "trace_counts.m"
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
#line 935 "trace_counts.m"
  {
#line 935 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 935 "trace_counts.m"
    MR_Integer mdbcomp__trace_counts__HeadVar__2_2;

#line 935 "trace_counts.m"
    if ((mdbcomp__trace_counts__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 935 "trace_counts.m"
      mdbcomp__trace_counts__HeadVar__2_2 = (MR_Integer) 0;
#line 935 "trace_counts.m"
    else
#line 936 "trace_counts.m"
      {
#line 936 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__FileType_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 0)));
#line 936 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__1_1, (MR_Integer) 1)));
#line 936 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_5_5;
#line 936 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__V_6_6;

#line 939 "trace_counts.m"
#line 939 "trace_counts.m"
        switch (MR_tag((MR_Word) mdbcomp__trace_counts__FileType_3)) {
#line 939 "trace_counts.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 939 "trace_counts.m"
          case (MR_Integer) 0:
#line 940 "trace_counts.m"
            mdbcomp__trace_counts__V_5_5 = (MR_Integer) 1;
#line 939 "trace_counts.m"
            break;
#line 939 "trace_counts.m"
          case (MR_Integer) 1:
#line 939 "trace_counts.m"
            {
#line 939 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_8_8;

#line 939 "trace_counts.m"
              mdbcomp__trace_counts__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileType_3, (MR_Integer) 0)));
#line 939 "trace_counts.m"
              mdbcomp__trace_counts__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileType_3, (MR_Integer) 1)));
#line 939 "trace_counts.m"
            }
#line 939 "trace_counts.m"
            break;
#line 939 "trace_counts.m"
          case (MR_Integer) 2:
#line 941 "trace_counts.m"
            mdbcomp__trace_counts__V_5_5 = (MR_Integer) -1;
#line 939 "trace_counts.m"
            break;
#line 939 "trace_counts.m"
        }
#line 937 "trace_counts.m"
        {
#line 937 "trace_counts.m"
          mdbcomp__trace_counts__V_6_6 = mdbcomp__trace_counts__calc_num_tests_1_f_0(mdbcomp__trace_counts__Rest_4);
        }
#line 937 "trace_counts.m"
        mdbcomp__trace_counts__HeadVar__2_2 = (mdbcomp__trace_counts__V_5_5 + mdbcomp__trace_counts__V_6_6);
#line 936 "trace_counts.m"
      }
#line 935 "trace_counts.m"
    return mdbcomp__trace_counts__HeadVar__2_2;
#line 935 "trace_counts.m"
  }
#line 177 "trace_counts.m"
}

#line 918 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0_1(
#line 918 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 918 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 918 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 918 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 918 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4)
#line 918 "trace_counts.m"
{
#line 918 "trace_counts.m"
  {
#line 918 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 918 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_17;

#line 918 "trace_counts.m"
    {
#line 918 "trace_counts.m"
      mdbcomp__trace_counts__restrict_trace_counts_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_17);
    }
#line 918 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_4 = ((MR_Box) (mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_17));
#line 918 "trace_counts.m"
  }
#line 918 "trace_counts.m"
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
#line 917 "trace_counts.m"
  {
#line 917 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 917 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__TypeCtorInfo_13_13;
#line 917 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__TypeInfo_14_14;
#line 917 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_7_7;
#line 917 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_8_8;
#line 918 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__conv1_TraceCounts_6;

#line 918 "trace_counts.m"
    {
#line 918 "trace_counts.m"
      mdbcomp__trace_counts__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 918 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_5[1]));
#line 918 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 1) = ((MR_Box) (mdbcomp__trace_counts__restrict_trace_counts_to_module_3_p_0_1));
#line 918 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 918 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 3) = ((MR_Box) (mdbcomp__trace_counts__ModuleName_4));
#line 918 "trace_counts.m"
    }
#line 9317 "mdbcomp.trace_counts.c"
    mdbcomp__trace_counts__TypeCtorInfo_13_13 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0;
#line 9319 "mdbcomp.trace_counts.c"
    mdbcomp__trace_counts__TypeInfo_14_14 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0];
#line 919 "trace_counts.m"
    {
#line 919 "trace_counts.m"
      mdbcomp__trace_counts__V_8_8 = mercury__map__init_0_f_0(mdbcomp__trace_counts__TypeCtorInfo_13_13, mdbcomp__trace_counts__TypeInfo_14_14);
    }
#line 918 "trace_counts.m"
    {
#line 918 "trace_counts.m"
      mercury__map__foldl_4_p_0(mdbcomp__trace_counts__TypeCtorInfo_13_13, mdbcomp__trace_counts__TypeInfo_14_14, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__V_7_7, mdbcomp__trace_counts__TraceCounts0_5, ((MR_Box) (mdbcomp__trace_counts__V_8_8)), &mdbcomp__trace_counts__conv1_TraceCounts_6);
    }
#line 918 "trace_counts.m"
    *mdbcomp__trace_counts__TraceCounts_6 = ((MR_Word) mdbcomp__trace_counts__conv1_TraceCounts_6);
#line 917 "trace_counts.m"
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
#line 688 "trace_counts.m"
  {
#line 688 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 688 "trace_counts.m"
    *mdbcomp__trace_counts__HeadVar__1_1 = ((&mdbcomp__trace_counts_vector_common_8[0 + mdbcomp__trace_counts__HeadVar__2_2]))->mdbcomp__trace_counts__vector_common_type_8_0__vct_8_f_0;
#line 688 "trace_counts.m"
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
#line 688 "trace_counts.m"
  {
#line 688 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 688 "trace_counts.m"
    {
#line 688 "trace_counts.m"
      MR_Integer mdbcomp__trace_counts__case_num_0 = (MR_Integer) -1;

#line 688 "trace_counts.m"
#line 688 "trace_counts.m"
      switch (MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 0)) {
#line 688 "trace_counts.m"
        case (MR_Integer) 67:
#line 688 "trace_counts.m"
#line 688 "trace_counts.m"
          switch (MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 1)) {
#line 688 "trace_counts.m"
            case (MR_Integer) 65:
#line 688 "trace_counts.m"
              if (MR_offset_streq(2, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "CALL"))
#line 688 "trace_counts.m"
                mdbcomp__trace_counts__case_num_0 = (MR_Integer) 0;
#line 688 "trace_counts.m"
              break;
#line 688 "trace_counts.m"
            case (MR_Integer) 79:
#line 688 "trace_counts.m"
              if (MR_offset_streq(2, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "COND"))
#line 688 "trace_counts.m"
                mdbcomp__trace_counts__case_num_0 = (MR_Integer) 1;
#line 688 "trace_counts.m"
              break;
#line 688 "trace_counts.m"
          }
#line 688 "trace_counts.m"
          break;
#line 688 "trace_counts.m"
        case (MR_Integer) 68:
#line 688 "trace_counts.m"
          if (((((MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 1)) == (MR_Integer) 83)) && (((MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 2)) == (MR_Integer) 74))))
#line 688 "trace_counts.m"
#line 688 "trace_counts.m"
            switch (MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 3)) {
#line 688 "trace_counts.m"
              case (MR_Integer) 70:
#line 688 "trace_counts.m"
                if (MR_offset_streq(4, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "DSJF"))
#line 688 "trace_counts.m"
                  mdbcomp__trace_counts__case_num_0 = (MR_Integer) 2;
#line 688 "trace_counts.m"
                break;
#line 688 "trace_counts.m"
              case (MR_Integer) 76:
#line 688 "trace_counts.m"
                if (MR_offset_streq(4, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "DSJL"))
#line 688 "trace_counts.m"
                  mdbcomp__trace_counts__case_num_0 = (MR_Integer) 3;
#line 688 "trace_counts.m"
                break;
#line 688 "trace_counts.m"
            }
#line 688 "trace_counts.m"
          break;
#line 688 "trace_counts.m"
        case (MR_Integer) 69:
#line 688 "trace_counts.m"
#line 688 "trace_counts.m"
          switch (MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 1)) {
#line 688 "trace_counts.m"
            case (MR_Integer) 76:
#line 688 "trace_counts.m"
              if (MR_offset_streq(2, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "ELSE"))
#line 688 "trace_counts.m"
                mdbcomp__trace_counts__case_num_0 = (MR_Integer) 4;
#line 688 "trace_counts.m"
              break;
#line 688 "trace_counts.m"
            case (MR_Integer) 88:
#line 688 "trace_counts.m"
#line 688 "trace_counts.m"
              switch (MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 2)) {
#line 688 "trace_counts.m"
                case (MR_Integer) 67:
#line 688 "trace_counts.m"
                  if (MR_offset_streq(3, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "EXCP"))
#line 688 "trace_counts.m"
                    mdbcomp__trace_counts__case_num_0 = (MR_Integer) 5;
#line 688 "trace_counts.m"
                  break;
#line 688 "trace_counts.m"
                case (MR_Integer) 73:
#line 688 "trace_counts.m"
                  if (MR_offset_streq(3, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "EXIT"))
#line 688 "trace_counts.m"
                    mdbcomp__trace_counts__case_num_0 = (MR_Integer) 6;
#line 688 "trace_counts.m"
                  break;
#line 688 "trace_counts.m"
              }
#line 688 "trace_counts.m"
              break;
#line 688 "trace_counts.m"
          }
#line 688 "trace_counts.m"
          break;
#line 688 "trace_counts.m"
        case (MR_Integer) 70:
#line 688 "trace_counts.m"
          if (MR_offset_streq(1, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "FAIL"))
#line 688 "trace_counts.m"
            mdbcomp__trace_counts__case_num_0 = (MR_Integer) 7;
#line 688 "trace_counts.m"
          break;
#line 688 "trace_counts.m"
        case (MR_Integer) 78:
#line 688 "trace_counts.m"
          if (((((MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 1)) == (MR_Integer) 69)) && (((MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 2)) == (MR_Integer) 71))))
#line 688 "trace_counts.m"
#line 688 "trace_counts.m"
            switch (MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 3)) {
#line 688 "trace_counts.m"
              case (MR_Integer) 69:
#line 688 "trace_counts.m"
                if (MR_offset_streq(4, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "NEGE"))
#line 688 "trace_counts.m"
                  mdbcomp__trace_counts__case_num_0 = (MR_Integer) 8;
#line 688 "trace_counts.m"
                break;
#line 688 "trace_counts.m"
              case (MR_Integer) 70:
#line 688 "trace_counts.m"
                if (MR_offset_streq(4, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "NEGF"))
#line 688 "trace_counts.m"
                  mdbcomp__trace_counts__case_num_0 = (MR_Integer) 9;
#line 688 "trace_counts.m"
                break;
#line 688 "trace_counts.m"
              case (MR_Integer) 83:
#line 688 "trace_counts.m"
                if (MR_offset_streq(4, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "NEGS"))
#line 688 "trace_counts.m"
                  mdbcomp__trace_counts__case_num_0 = (MR_Integer) 10;
#line 688 "trace_counts.m"
                break;
#line 688 "trace_counts.m"
            }
#line 688 "trace_counts.m"
          break;
#line 688 "trace_counts.m"
        case (MR_Integer) 82:
#line 688 "trace_counts.m"
          if (MR_offset_streq(1, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "REDO"))
#line 688 "trace_counts.m"
            mdbcomp__trace_counts__case_num_0 = (MR_Integer) 11;
#line 688 "trace_counts.m"
          break;
#line 688 "trace_counts.m"
        case (MR_Integer) 83:
#line 688 "trace_counts.m"
          if (MR_offset_streq(1, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "SWTC"))
#line 688 "trace_counts.m"
            mdbcomp__trace_counts__case_num_0 = (MR_Integer) 12;
#line 688 "trace_counts.m"
          break;
#line 688 "trace_counts.m"
        case (MR_Integer) 84:
#line 688 "trace_counts.m"
#line 688 "trace_counts.m"
          switch (MR_nth_code_unit(mdbcomp__trace_counts__HeadVar__1_1, 1)) {
#line 688 "trace_counts.m"
            case (MR_Integer) 65:
#line 688 "trace_counts.m"
              if (MR_offset_streq(2, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "TAIL"))
#line 688 "trace_counts.m"
                mdbcomp__trace_counts__case_num_0 = (MR_Integer) 13;
#line 688 "trace_counts.m"
              break;
#line 688 "trace_counts.m"
            case (MR_Integer) 72:
#line 688 "trace_counts.m"
              if (MR_offset_streq(2, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "THEN"))
#line 688 "trace_counts.m"
                mdbcomp__trace_counts__case_num_0 = (MR_Integer) 14;
#line 688 "trace_counts.m"
              break;
#line 688 "trace_counts.m"
          }
#line 688 "trace_counts.m"
          break;
#line 688 "trace_counts.m"
        case (MR_Integer) 85:
#line 688 "trace_counts.m"
          if (MR_offset_streq(1, mdbcomp__trace_counts__HeadVar__1_1, (MR_String) "USER"))
#line 688 "trace_counts.m"
            mdbcomp__trace_counts__case_num_0 = (MR_Integer) 15;
#line 688 "trace_counts.m"
          break;
#line 688 "trace_counts.m"
      }
#line 688 "trace_counts.m"
      if ((mdbcomp__trace_counts__case_num_0 < (MR_Integer) 0))
#line 688 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = MR_FALSE;
#line 688 "trace_counts.m"
      else
#line 688 "trace_counts.m"
        {
#line 688 "trace_counts.m"
          /* we found a match; look up the results */
#line 688 "trace_counts.m"
          *mdbcomp__trace_counts__HeadVar__2_2 = ((&mdbcomp__trace_counts_vector_common_7[0 + mdbcomp__trace_counts__case_num_0]))->mdbcomp__trace_counts__vector_common_type_7_0__vct_7_f_0;
#line 688 "trace_counts.m"
          mdbcomp__trace_counts__succeeded = MR_TRUE;
#line 688 "trace_counts.m"
        }
#line 688 "trace_counts.m"
    }
#line 688 "trace_counts.m"
    return mdbcomp__trace_counts__succeeded;
#line 688 "trace_counts.m"
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
#line 854 "trace_counts.m"
  {
#line 854 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 854 "trace_counts.m"
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__ProcLabel_4)) == (MR_mktag((MR_Integer) 0))))
#line 854 "trace_counts.m"
      {
#line 854 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__DefModuleSym_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 0)));
#line 854 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__PredOrFunc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 1)));
#line 854 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__DeclModuleSym_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 2)));
#line 854 "trace_counts.m"
        MR_String mdbcomp__trace_counts__Name_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 3)));
#line 854 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__Arity_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 4)));
#line 854 "trace_counts.m"
        MR_Integer mdbcomp__trace_counts__Mode_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ProcLabel_4, (MR_Integer) 5)));

#line 865 "trace_counts.m"
#line 865 "trace_counts.m"
        switch (mdbcomp__trace_counts__PredOrFunc_7) {
#line 865 "trace_counts.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 865 "trace_counts.m"
          case (MR_Integer) 1:
#line 869 "trace_counts.m"
            {
#line 867 "trace_counts.m"
              {
#line 867 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__DeclModuleSym_8, mdbcomp__trace_counts__DefModuleSym_6);
              }
#line 869 "trace_counts.m"
              if (mdbcomp__trace_counts__succeeded)
#line 868 "trace_counts.m"
                {
#line 868 "trace_counts.m"
                  {
#line 868 "trace_counts.m"
                    mercury__io__write_string_3_p_0((MR_String) "fproc ");
                  }
#line 868 "trace_counts.m"
                }
#line 869 "trace_counts.m"
              else
#line 870 "trace_counts.m"
                {
#line 870 "trace_counts.m"
                  MR_String mdbcomp__trace_counts__DeclModule_44;

#line 870 "trace_counts.m"
                  {
#line 870 "trace_counts.m"
                    mdbcomp__trace_counts__DeclModule_44 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdbcomp__trace_counts__DeclModuleSym_8);
                  }
#line 871 "trace_counts.m"
                  {
#line 871 "trace_counts.m"
                    mercury__io__write_string_3_p_0((MR_String) "fprocdecl ");
                  }
#line 872 "trace_counts.m"
                  {
#line 872 "trace_counts.m"
                    mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__DeclModule_44);
                  }
#line 873 "trace_counts.m"
                  {
#line 873 "trace_counts.m"
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
#line 870 "trace_counts.m"
                }
#line 869 "trace_counts.m"
            }
#line 865 "trace_counts.m"
            break;
#line 865 "trace_counts.m"
          case (MR_Integer) 0:
#line 859 "trace_counts.m"
            {
#line 857 "trace_counts.m"
              {
#line 857 "trace_counts.m"
                mdbcomp__trace_counts__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdbcomp__trace_counts__DeclModuleSym_8, mdbcomp__trace_counts__DefModuleSym_6);
              }
#line 859 "trace_counts.m"
              if (mdbcomp__trace_counts__succeeded)
#line 858 "trace_counts.m"
                {
#line 858 "trace_counts.m"
                  {
#line 858 "trace_counts.m"
                    mercury__io__write_string_3_p_0((MR_String) "pproc ");
                  }
#line 858 "trace_counts.m"
                }
#line 859 "trace_counts.m"
              else
#line 860 "trace_counts.m"
                {
#line 860 "trace_counts.m"
                  MR_String mdbcomp__trace_counts__DeclModule_12;

#line 860 "trace_counts.m"
                  {
#line 860 "trace_counts.m"
                    mdbcomp__trace_counts__DeclModule_12 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdbcomp__trace_counts__DeclModuleSym_8);
                  }
#line 861 "trace_counts.m"
                  {
#line 861 "trace_counts.m"
                    mercury__io__write_string_3_p_0((MR_String) "pprocdecl ");
                  }
#line 862 "trace_counts.m"
                  {
#line 862 "trace_counts.m"
                    mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__DeclModule_12);
                  }
#line 863 "trace_counts.m"
                  {
#line 863 "trace_counts.m"
                    mercury__io__write_string_3_p_0((MR_String) " ");
                  }
#line 860 "trace_counts.m"
                }
#line 859 "trace_counts.m"
            }
#line 865 "trace_counts.m"
            break;
#line 865 "trace_counts.m"
        }
#line 876 "trace_counts.m"
        {
#line 876 "trace_counts.m"
          mercury__term_io__quote_atom_3_p_0(mdbcomp__trace_counts__Name_9);
        }
#line 877 "trace_counts.m"
        {
#line 877 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 878 "trace_counts.m"
        {
#line 878 "trace_counts.m"
          mercury__io__write_int_3_p_0(mdbcomp__trace_counts__Arity_10);
        }
#line 879 "trace_counts.m"
        {
#line 879 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) " ");
        }
#line 880 "trace_counts.m"
        {
#line 880 "trace_counts.m"
          mercury__io__write_int_3_p_0(mdbcomp__trace_counts__Mode_11);
        }
#line 881 "trace_counts.m"
        {
#line 881 "trace_counts.m"
          mercury__io__nl_2_p_0();
#line 881 "trace_counts.m"
          return;
        }
#line 854 "trace_counts.m"
      }
#line 854 "trace_counts.m"
    else
#line 884 "trace_counts.m"
      {
#line 885 "trace_counts.m"
        {
#line 885 "trace_counts.m"
          mercury__require__error_1_p_0((MR_String) "write_proc_label: special_pred");
#line 885 "trace_counts.m"
          return;
        }
#line 884 "trace_counts.m"
      }
#line 854 "trace_counts.m"
  }
#line 165 "trace_counts.m"
}

#line 805 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0_1(
#line 805 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 805 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 805 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 805 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 805 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4,
#line 805 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_5,
#line 805 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_6,
#line 805 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_7,
#line 805 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_8)
#line 805 "trace_counts.m"
{
#line 805 "trace_counts.m"
  {
#line 805 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 805 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv1_STATE_VARIABLE_CurModuleNameSym_19;
#line 805 "trace_counts.m"
    MR_String mdbcomp__trace_counts__conv0_STATE_VARIABLE_CurFileName_21;

#line 805 "trace_counts.m"
    {
#line 805 "trace_counts.m"
      mdbcomp__trace_counts__write_proc_label_and_file_trace_counts_8_p_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3), &mdbcomp__trace_counts__conv1_STATE_VARIABLE_CurModuleNameSym_19, ((MR_String) mdbcomp__trace_counts__wrapper_arg_5), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_CurFileName_21);
    }
#line 805 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_4 = ((MR_Box) (mdbcomp__trace_counts__conv1_STATE_VARIABLE_CurModuleNameSym_19));
#line 805 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_6 = ((MR_Box) (mdbcomp__trace_counts__conv0_STATE_VARIABLE_CurFileName_21));
#line 805 "trace_counts.m"
  }
#line 805 "trace_counts.m"
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
#line 784 "trace_counts.m"
  {
#line 784 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 784 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__TellResult_12;

#line 785 "trace_counts.m"
    {
#line 785 "trace_counts.m"
      mercury__io__tell_4_p_0(mdbcomp__trace_counts__FileName_9, &mdbcomp__trace_counts__TellResult_12);
    }
#line 793 "trace_counts.m"
    if ((mdbcomp__trace_counts__TellResult_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "trace_counts.m"
      {
#line 805 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_27_27;
#line 805 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_28_28;
#line 805 "trace_counts.m"
        MR_Box mdbcomp__trace_counts__conv4_V_27_27;
#line 805 "trace_counts.m"
        MR_Box mdbcomp__trace_counts__conv3_V_28_28;
#line 805 "trace_counts.m"
        MR_Box mdbcomp__trace_counts__conv2_STATE_VARIABLE_IO_20_20;

#line 788 "trace_counts.m"
        *mdbcomp__trace_counts__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 789 "trace_counts.m"
        {
#line 789 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) "Mercury trace counts file");
        }
#line 790 "trace_counts.m"
        {
#line 790 "trace_counts.m"
          mercury__io__nl_2_p_0();
        }
#line 802 "trace_counts.m"
        {
#line 802 "trace_counts.m"
          mercury__io__write_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, ((MR_Box) (mdbcomp__trace_counts__FileType_7)));
        }
#line 803 "trace_counts.m"
        {
#line 803 "trace_counts.m"
          mercury__io__write_string_3_p_0((MR_String) ".");
        }
#line 804 "trace_counts.m"
        {
#line 804 "trace_counts.m"
          mercury__io__nl_2_p_0();
        }
#line 805 "trace_counts.m"
        {
#line 805 "trace_counts.m"
          mercury__map__foldl3_8_p_2((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[5], mdbcomp__trace_counts__TraceCounts_8, ((MR_Box) (&mdbcomp__trace_counts_scalar_common_3[7])), &mdbcomp__trace_counts__conv4_V_27_27, ((MR_Box) ((MR_String) "")), &mdbcomp__trace_counts__conv3_V_28_28, ((MR_Box) ((MR_Integer) 0)), &mdbcomp__trace_counts__conv2_STATE_VARIABLE_IO_20_20);
        }
#line 805 "trace_counts.m"
        mdbcomp__trace_counts__V_27_27 = ((MR_Word) mdbcomp__trace_counts__conv4_V_27_27);
#line 805 "trace_counts.m"
        mdbcomp__trace_counts__V_28_28 = ((MR_String) mdbcomp__trace_counts__conv3_V_28_28);
#line 792 "trace_counts.m"
        {
#line 792 "trace_counts.m"
          mercury__io__told_2_p_0();
#line 792 "trace_counts.m"
          return;
        }
#line 787 "trace_counts.m"
      }
#line 793 "trace_counts.m"
    else
#line 795 "trace_counts.m"
      *mdbcomp__trace_counts__Result_10 = mdbcomp__trace_counts__TellResult_12;
#line 784 "trace_counts.m"
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
#line 740 "trace_counts.m"
  {
#line 740 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 740 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__FileType_16;
#line 740 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_24_24;

#line 742 "trace_counts.m"
    {
#line 742 "trace_counts.m"
      mdbcomp__trace_counts__V_24_24 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0]);
    }
#line 741 "trace_counts.m"
    {
#line 741 "trace_counts.m"
      mdbcomp__trace_counts__read_and_union_trace_counts_2_9_p_0(mdbcomp__trace_counts__ShowProgress_9, mdbcomp__trace_counts__Files_10, (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[1]), &mdbcomp__trace_counts__FileType_16, mdbcomp__trace_counts__V_24_24, mdbcomp__trace_counts__TraceCounts_13, mdbcomp__trace_counts__MaybeError_14);
    }
#line 746 "trace_counts.m"
#line 746 "trace_counts.m"
    switch (MR_tag((MR_Word) mdbcomp__trace_counts__FileType_16)) {
#line 746 "trace_counts.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 746 "trace_counts.m"
      case (MR_Integer) 0:
#line 747 "trace_counts.m"
        {
#line 748 "trace_counts.m"
          {
#line 748 "trace_counts.m"
            mercury__require__error_1_p_0((MR_String) "read_and_union_trace_counts: single_file");
#line 748 "trace_counts.m"
            return;
          }
#line 747 "trace_counts.m"
        }
#line 746 "trace_counts.m"
        break;
#line 746 "trace_counts.m"
      case (MR_Integer) 1:
#line 744 "trace_counts.m"
        {
#line 744 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__TestKindList_17;

#line 744 "trace_counts.m"
          *mdbcomp__trace_counts__NumTests_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileType_16, (MR_Integer) 0)));
#line 744 "trace_counts.m"
          mdbcomp__trace_counts__TestKindList_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__FileType_16, (MR_Integer) 1)));
#line 745 "trace_counts.m"
          {
#line 745 "trace_counts.m"
            mercury__set__list_to_set_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__TestKindList_17, mdbcomp__trace_counts__TestKinds_12);
#line 745 "trace_counts.m"
            return;
          }
#line 744 "trace_counts.m"
        }
#line 746 "trace_counts.m"
        break;
#line 746 "trace_counts.m"
      case (MR_Integer) 2:
#line 750 "trace_counts.m"
        {
#line 751 "trace_counts.m"
          {
#line 751 "trace_counts.m"
            mercury__require__error_1_p_0((MR_String) "read_and_union_trace_counts: diff_file");
#line 751 "trace_counts.m"
            return;
          }
#line 750 "trace_counts.m"
        }
#line 746 "trace_counts.m"
        break;
#line 746 "trace_counts.m"
    }
#line 740 "trace_counts.m"
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
#line 288 "trace_counts.m"
  {
#line 288 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 288 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__ReadTCResult_8;

#line 289 "trace_counts.m"
    {
#line 289 "trace_counts.m"
      mdbcomp__trace_counts__read_trace_counts_4_p_0(mdbcomp__trace_counts__FileName_5, &mdbcomp__trace_counts__ReadTCResult_8);
    }
#line 293 "trace_counts.m"
#line 293 "trace_counts.m"
    switch (MR_tag((MR_Word) mdbcomp__trace_counts__ReadTCResult_8)) {
#line 293 "trace_counts.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 293 "trace_counts.m"
      case (MR_Integer) 0:
#line 291 "trace_counts.m"
        {
#line 291 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__FileType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 0)));
#line 291 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__TraceCount_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 1)));

#line 292 "trace_counts.m"
          {
#line 292 "trace_counts.m"
            MR_Word base;
#line 292 "trace_counts.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 292 "trace_counts.m"
            *mdbcomp__trace_counts__Result_6 = base;
#line 292 "trace_counts.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__trace_counts__FileType_9));
#line 292 "trace_counts.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__trace_counts__TraceCount_10));
#line 292 "trace_counts.m"
          }
#line 291 "trace_counts.m"
        }
#line 293 "trace_counts.m"
        break;
#line 293 "trace_counts.m"
      case (MR_Integer) 1:
#line 304 "trace_counts.m"
        {
#line 304 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_23_23;
#line 304 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_25_25;
#line 304 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_26_26;
#line 304 "trace_counts.m"
          MR_String mdbcomp__trace_counts__ErrMsg_44 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 0)));

#line 306 "trace_counts.m"
          {
#line 306 "trace_counts.m"
            mdbcomp__trace_counts__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_44);
          }
#line 306 "trace_counts.m"
          {
#line 306 "trace_counts.m"
            mdbcomp__trace_counts__V_25_25 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_5, mdbcomp__trace_counts__V_26_26);
          }
#line 305 "trace_counts.m"
          {
#line 305 "trace_counts.m"
            mdbcomp__trace_counts__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "Syntax error in file \140", mdbcomp__trace_counts__V_25_25);
          }
#line 305 "trace_counts.m"
          {
#line 305 "trace_counts.m"
            MR_Word base;
#line 305 "trace_counts.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 305 "trace_counts.m"
            *mdbcomp__trace_counts__Result_6 = base;
#line 305 "trace_counts.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_23_23));
#line 305 "trace_counts.m"
          }
#line 304 "trace_counts.m"
        }
#line 293 "trace_counts.m"
        break;
#line 293 "trace_counts.m"
      case (MR_Integer) 2:
#line 308 "trace_counts.m"
        {
#line 308 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_16_16;
#line 308 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_18_18;
#line 308 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_20_20;
#line 308 "trace_counts.m"
          MR_String mdbcomp__trace_counts__V_21_21;
#line 308 "trace_counts.m"
          MR_String mdbcomp__trace_counts__ErrMsg_45 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 0)));

#line 310 "trace_counts.m"
          {
#line 310 "trace_counts.m"
            mdbcomp__trace_counts__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_45);
          }
#line 310 "trace_counts.m"
          {
#line 310 "trace_counts.m"
            mdbcomp__trace_counts__V_20_20 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_5, mdbcomp__trace_counts__V_21_21);
          }
#line 310 "trace_counts.m"
          {
#line 310 "trace_counts.m"
            mdbcomp__trace_counts__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "from file \140", mdbcomp__trace_counts__V_20_20);
          }
#line 309 "trace_counts.m"
          {
#line 309 "trace_counts.m"
            mdbcomp__trace_counts__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading trace counts ", mdbcomp__trace_counts__V_18_18);
          }
#line 309 "trace_counts.m"
          {
#line 309 "trace_counts.m"
            MR_Word base;
#line 309 "trace_counts.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 309 "trace_counts.m"
            *mdbcomp__trace_counts__Result_6 = base;
#line 309 "trace_counts.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_16_16));
#line 309 "trace_counts.m"
          }
#line 308 "trace_counts.m"
        }
#line 293 "trace_counts.m"
        break;
#line 293 "trace_counts.m"
      case (MR_Integer) 3:
#line 293 "trace_counts.m"
#line 293 "trace_counts.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 0)))) {
#line 293 "trace_counts.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 293 "trace_counts.m"
          case (MR_Integer) 0:
#line 299 "trace_counts.m"
            {
#line 299 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_28_28;
#line 299 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_30_30;
#line 299 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_32_32;
#line 299 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_33_33;
#line 299 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__IOError_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 1)));
#line 299 "trace_counts.m"
              MR_String mdbcomp__trace_counts__ErrMsg_43;

#line 300 "trace_counts.m"
              {
#line 300 "trace_counts.m"
                mdbcomp__trace_counts__ErrMsg_43 = mercury__io__error_message_1_f_0(mdbcomp__trace_counts__IOError_42);
              }
#line 302 "trace_counts.m"
              {
#line 302 "trace_counts.m"
                mdbcomp__trace_counts__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_43);
              }
#line 302 "trace_counts.m"
              {
#line 302 "trace_counts.m"
                mdbcomp__trace_counts__V_32_32 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_5, mdbcomp__trace_counts__V_33_33);
              }
#line 302 "trace_counts.m"
              {
#line 302 "trace_counts.m"
                mdbcomp__trace_counts__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_32_32);
              }
#line 301 "trace_counts.m"
              {
#line 301 "trace_counts.m"
                mdbcomp__trace_counts__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "IO error opening file ", mdbcomp__trace_counts__V_30_30);
              }
#line 301 "trace_counts.m"
              {
#line 301 "trace_counts.m"
                MR_Word base;
#line 301 "trace_counts.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 301 "trace_counts.m"
                *mdbcomp__trace_counts__Result_6 = base;
#line 301 "trace_counts.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_28_28));
#line 301 "trace_counts.m"
              }
#line 299 "trace_counts.m"
            }
#line 293 "trace_counts.m"
            break;
#line 293 "trace_counts.m"
          case (MR_Integer) 1:
#line 294 "trace_counts.m"
            {
#line 294 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__IOError_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__trace_counts__ReadTCResult_8, (MR_Integer) 1)));
#line 294 "trace_counts.m"
              MR_String mdbcomp__trace_counts__ErrMsg_12;
#line 294 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_35_35;
#line 294 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_37_37;
#line 294 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_39_39;
#line 294 "trace_counts.m"
              MR_String mdbcomp__trace_counts__V_40_40;

#line 295 "trace_counts.m"
              {
#line 295 "trace_counts.m"
                mdbcomp__trace_counts__ErrMsg_12 = mercury__io__error_message_1_f_0(mdbcomp__trace_counts__IOError_11);
              }
#line 297 "trace_counts.m"
              {
#line 297 "trace_counts.m"
                mdbcomp__trace_counts__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__ErrMsg_12);
              }
#line 297 "trace_counts.m"
              {
#line 297 "trace_counts.m"
                mdbcomp__trace_counts__V_39_39 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_5, mdbcomp__trace_counts__V_40_40);
              }
#line 297 "trace_counts.m"
              {
#line 297 "trace_counts.m"
                mdbcomp__trace_counts__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) "\140", mdbcomp__trace_counts__V_39_39);
              }
#line 296 "trace_counts.m"
              {
#line 296 "trace_counts.m"
                mdbcomp__trace_counts__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) "IO error reading file ", mdbcomp__trace_counts__V_37_37);
              }
#line 296 "trace_counts.m"
              {
#line 296 "trace_counts.m"
                MR_Word base;
#line 296 "trace_counts.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 296 "trace_counts.m"
                *mdbcomp__trace_counts__Result_6 = base;
#line 296 "trace_counts.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_35_35));
#line 296 "trace_counts.m"
              }
#line 294 "trace_counts.m"
            }
#line 293 "trace_counts.m"
            break;
#line 293 "trace_counts.m"
        }
#line 293 "trace_counts.m"
        break;
#line 293 "trace_counts.m"
    }
#line 288 "trace_counts.m"
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
#line 313 "trace_counts.m"
  {
#line 313 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 313 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__OpenResult_10;

#line 314 "trace_counts.m"
    {
#line 314 "trace_counts.m"
      mercury__io__open_input_4_p_0(mdbcomp__trace_counts__FileName_7, &mdbcomp__trace_counts__OpenResult_10);
    }
#line 319 "trace_counts.m"
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__OpenResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 320 "trace_counts.m"
      {
#line 320 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__IOError_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__OpenResult_10, (MR_Integer) 0)));
#line 320 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_16_16;
#line 320 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_18_18;
#line 320 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_19_19;
#line 320 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_21_21;

#line 322 "trace_counts.m"
        {
#line 322 "trace_counts.m"
          mdbcomp__trace_counts__V_21_21 = mercury__string__string_1_f_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mdbcomp__trace_counts__IOError_12)));
        }
#line 322 "trace_counts.m"
        {
#line 322 "trace_counts.m"
          mdbcomp__trace_counts__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", mdbcomp__trace_counts__V_21_21);
        }
#line 321 "trace_counts.m"
        {
#line 321 "trace_counts.m"
          mdbcomp__trace_counts__V_18_18 = mercury__string__f_43_43_2_f_0(mdbcomp__trace_counts__FileName_7, mdbcomp__trace_counts__V_19_19);
        }
#line 321 "trace_counts.m"
        {
#line 321 "trace_counts.m"
          mdbcomp__trace_counts__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "Error opening file \140", mdbcomp__trace_counts__V_18_18);
        }
#line 321 "trace_counts.m"
        {
#line 321 "trace_counts.m"
          MR_Word base;
#line 321 "trace_counts.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 321 "trace_counts.m"
          *mdbcomp__trace_counts__Result_8 = base;
#line 321 "trace_counts.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__trace_counts__V_16_16));
#line 321 "trace_counts.m"
        }
#line 320 "trace_counts.m"
      }
#line 319 "trace_counts.m"
    else
#line 316 "trace_counts.m"
      {
#line 316 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__FileStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__OpenResult_10, (MR_Integer) 0)));
#line 316 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_23_23;

#line 318 "trace_counts.m"
        {
#line 318 "trace_counts.m"
          mdbcomp__trace_counts__V_23_23 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0]);
        }
#line 317 "trace_counts.m"
        {
#line 317 "trace_counts.m"
          mdbcomp__trace_counts__read_trace_counts_list_stream_8_p_0(mdbcomp__trace_counts__ShowProgress_6, (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_2[1]), mdbcomp__trace_counts__V_23_23, mdbcomp__trace_counts__FileName_7, mdbcomp__trace_counts__FileStream_11, mdbcomp__trace_counts__Result_8);
#line 317 "trace_counts.m"
          return;
        }
#line 316 "trace_counts.m"
      }
#line 313 "trace_counts.m"
  }
#line 127 "trace_counts.m"
}

#line 413 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__read_trace_counts_4_p_0_1(
#line 413 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 413 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_1,
#line 413 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 413 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3)
#line 413 "trace_counts.m"
{
#line 413 "trace_counts.m"
  {
#line 413 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 413 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv0_ReadResult_4;

#line 413 "trace_counts.m"
    {
#line 413 "trace_counts.m"
      mdbcomp__trace_counts__read_trace_counts_from_cur_stream_3_p_0(&mdbcomp__trace_counts__conv0_ReadResult_4);
    }
#line 413 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_1 = ((MR_Box) (mdbcomp__trace_counts__conv0_ReadResult_4));
#line 413 "trace_counts.m"
  }
#line 413 "trace_counts.m"
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
#line 391 "trace_counts.m"
  {
#line 391 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 391 "trace_counts.m"
    MR_String mdbcomp__trace_counts__ActualFileName_10;
#line 391 "trace_counts.m"
    MR_String mdbcomp__trace_counts__GzipCmd_11;
#line 391 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__Result_12;
#line 400 "trace_counts.m"
    MR_String mdbcomp__trace_counts__BaseName_8;

#line 396 "trace_counts.m"
    {
#line 396 "trace_counts.m"
      mdbcomp__trace_counts__succeeded = mercury__string__remove_suffix_3_p_0(mdbcomp__trace_counts__FileName_5, (MR_String) ".gz", &mdbcomp__trace_counts__BaseName_8);
    }
#line 400 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 397 "trace_counts.m"
      {
#line 397 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_23_23;
#line 397 "trace_counts.m"
        MR_Word mdbcomp__trace_counts___UnzipResult_9;

#line 397 "trace_counts.m"
        {
#line 397 "trace_counts.m"
          mdbcomp__trace_counts__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "gunzip ", mdbcomp__trace_counts__FileName_5);
        }
#line 397 "trace_counts.m"
        {
#line 397 "trace_counts.m"
          mercury__io__call_system_4_p_0(mdbcomp__trace_counts__V_23_23, &mdbcomp__trace_counts___UnzipResult_9);
        }
#line 398 "trace_counts.m"
        mdbcomp__trace_counts__ActualFileName_10 = mdbcomp__trace_counts__BaseName_8;
#line 399 "trace_counts.m"
        {
#line 399 "trace_counts.m"
          mdbcomp__trace_counts__GzipCmd_11 = mercury__string__f_43_43_2_f_0((MR_String) "gzip ", mdbcomp__trace_counts__BaseName_8);
        }
#line 397 "trace_counts.m"
      }
#line 400 "trace_counts.m"
    else
#line 401 "trace_counts.m"
      {
#line 401 "trace_counts.m"
        mdbcomp__trace_counts__ActualFileName_10 = mdbcomp__trace_counts__FileName_5;
#line 402 "trace_counts.m"
        mdbcomp__trace_counts__GzipCmd_11 = (MR_String) "";
#line 401 "trace_counts.m"
      }
#line 404 "trace_counts.m"
    {
#line 404 "trace_counts.m"
      mercury__io__open_input_4_p_0(mdbcomp__trace_counts__ActualFileName_10, &mdbcomp__trace_counts__Result_12);
    }
#line 420 "trace_counts.m"
    if (((MR_tag((MR_Word) mdbcomp__trace_counts__Result_12)) == (MR_mktag((MR_Integer) 1))))
#line 421 "trace_counts.m"
      {
#line 421 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__IOError_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Result_12, (MR_Integer) 0)));

#line 422 "trace_counts.m"
        {
#line 422 "trace_counts.m"
          MR_Word base;
#line 422 "trace_counts.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "trace_counts.m"
          *mdbcomp__trace_counts__ReadResult_6 = base;
#line 422 "trace_counts.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 422 "trace_counts.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdbcomp__trace_counts__IOError_18));
#line 422 "trace_counts.m"
        }
#line 421 "trace_counts.m"
      }
#line 420 "trace_counts.m"
    else
#line 406 "trace_counts.m"
      {
#line 406 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__FileStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__Result_12, (MR_Integer) 0)));
#line 406 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__OldInputStream_14;
#line 406 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__IdReadResult_15;
#line 410 "trace_counts.m"
        MR_String mdbcomp__trace_counts__FirstLine_16;
#line 410 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_30_30;
#line 410 "trace_counts.m"
        MR_String mdbcomp__trace_counts__V_43_43;
#line 418 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_17_17;

#line 407 "trace_counts.m"
        {
#line 407 "trace_counts.m"
          mercury__io__set_input_stream_4_p_0(mdbcomp__trace_counts__FileStream_13, &mdbcomp__trace_counts__OldInputStream_14);
        }
#line 408 "trace_counts.m"
        {
#line 408 "trace_counts.m"
          mercury__io__read_line_as_string_3_p_0(&mdbcomp__trace_counts__IdReadResult_15);
        }
#line 410 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__IdReadResult_15)) == (MR_mktag((MR_Integer) 1)));
#line 410 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 410 "trace_counts.m"
          {
#line 410 "trace_counts.m"
            mdbcomp__trace_counts__FirstLine_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__IdReadResult_15, (MR_Integer) 0)));
#line 411 "trace_counts.m"
            {
#line 411 "trace_counts.m"
              mdbcomp__trace_counts__V_30_30 = mercury__string__rstrip_1_f_0(mdbcomp__trace_counts__FirstLine_16);
            }
#line 432 "trace_counts.m"
            mdbcomp__trace_counts__V_43_43 = (MR_String) "Mercury trace counts file";
#line 411 "trace_counts.m"
            mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__V_30_30, mdbcomp__trace_counts__V_43_43) == 0);
#line 410 "trace_counts.m"
          }
#line 415 "trace_counts.m"
        if (mdbcomp__trace_counts__succeeded)
#line 413 "trace_counts.m"
          {
#line 413 "trace_counts.m"
            MR_Box mdbcomp__trace_counts__conv2_ReadResult_6;
#line 413 "trace_counts.m"
            MR_Box mdbcomp__trace_counts__conv1_STATE_VARIABLE_IO_32_32;

#line 413 "trace_counts.m"
            {
#line 413 "trace_counts.m"
              mercury__builtin__promise_only_solution_io_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_read_trace_counts_result_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[4], &mdbcomp__trace_counts__conv2_ReadResult_6, ((MR_Box) ((MR_Integer) 0)), &mdbcomp__trace_counts__conv1_STATE_VARIABLE_IO_32_32);
            }
#line 413 "trace_counts.m"
            *mdbcomp__trace_counts__ReadResult_6 = ((MR_Word) mdbcomp__trace_counts__conv2_ReadResult_6);
#line 413 "trace_counts.m"
          }
#line 415 "trace_counts.m"
        else
#line 416 "trace_counts.m"
          {
#line 416 "trace_counts.m"
            *mdbcomp__trace_counts__ReadResult_6 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__trace_counts_scalar_common_3[6]);
#line 416 "trace_counts.m"
          }
#line 418 "trace_counts.m"
        {
#line 418 "trace_counts.m"
          mercury__io__set_input_stream_4_p_0(mdbcomp__trace_counts__OldInputStream_14, &mdbcomp__trace_counts__V_17_17);
        }
#line 419 "trace_counts.m"
        {
#line 419 "trace_counts.m"
          mercury__io__close_input_3_p_0(mdbcomp__trace_counts__FileStream_13);
        }
#line 406 "trace_counts.m"
      }
#line 424 "trace_counts.m"
    mdbcomp__trace_counts__succeeded = (strcmp(mdbcomp__trace_counts__GzipCmd_11, (MR_String) "") == 0);
#line 426 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 426 "trace_counts.m"
      {
#line 426 "trace_counts.m"
      }
#line 426 "trace_counts.m"
    else
#line 427 "trace_counts.m"
      {
#line 427 "trace_counts.m"
        MR_Word mdbcomp__trace_counts___ZipResult_19;

#line 427 "trace_counts.m"
        {
#line 427 "trace_counts.m"
          mercury__io__call_system_4_p_0(mdbcomp__trace_counts__GzipCmd_11, &mdbcomp__trace_counts___ZipResult_19);
        }
#line 427 "trace_counts.m"
      }
#line 391 "trace_counts.m"
  }
#line 113 "trace_counts.m"
}

#line 234 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__diff_trace_counts_3_p_0_1(
#line 234 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 234 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 234 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 234 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_3,
#line 234 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_4)
#line 234 "trace_counts.m"
{
#line 234 "trace_counts.m"
  {
#line 234 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 234 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_13;

#line 234 "trace_counts.m"
    {
#line 234 "trace_counts.m"
      mdbcomp__trace_counts__diff_trace_counts_acc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_3), &mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_13);
    }
#line 234 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_4 = ((MR_Box) (mdbcomp__trace_counts__conv0_STATE_VARIABLE_TraceCounts_13));
#line 234 "trace_counts.m"
  }
#line 234 "trace_counts.m"
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
#line 233 "trace_counts.m"
  {
#line 233 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 233 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__TypeCtorInfo_13_13;
#line 233 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__TypeInfo_14_14;
#line 233 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_7_7;
#line 233 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_8_8;
#line 234 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__conv1_TraceCounts_6;

#line 234 "trace_counts.m"
    {
#line 234 "trace_counts.m"
      mdbcomp__trace_counts__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 234 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 0) = ((MR_Box) (&mdbcomp__trace_counts_scalar_common_5[0]));
#line 234 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 1) = ((MR_Box) (mdbcomp__trace_counts__diff_trace_counts_3_p_0_1));
#line 234 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 234 "trace_counts.m"
      MR_hl_field(MR_mktag(0), mdbcomp__trace_counts__V_7_7, 3) = ((MR_Box) (mdbcomp__trace_counts__TraceCountsB_5));
#line 234 "trace_counts.m"
    }
#line 10722 "mdbcomp.trace_counts.c"
    mdbcomp__trace_counts__TypeCtorInfo_13_13 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0;
#line 10724 "mdbcomp.trace_counts.c"
    mdbcomp__trace_counts__TypeInfo_14_14 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0];
#line 235 "trace_counts.m"
    {
#line 235 "trace_counts.m"
      mdbcomp__trace_counts__V_8_8 = mercury__map__init_0_f_0(mdbcomp__trace_counts__TypeCtorInfo_13_13, mdbcomp__trace_counts__TypeInfo_14_14);
    }
#line 234 "trace_counts.m"
    {
#line 234 "trace_counts.m"
      mercury__map__foldl_4_p_0(mdbcomp__trace_counts__TypeCtorInfo_13_13, mdbcomp__trace_counts__TypeInfo_14_14, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1], mdbcomp__trace_counts__V_7_7, mdbcomp__trace_counts__TraceCountsA_4, ((MR_Box) (mdbcomp__trace_counts__V_8_8)), &mdbcomp__trace_counts__conv1_TraceCounts_6);
    }
#line 234 "trace_counts.m"
    *mdbcomp__trace_counts__TraceCounts_6 = ((MR_Word) mdbcomp__trace_counts__conv1_TraceCounts_6);
#line 233 "trace_counts.m"
  }
#line 97 "trace_counts.m"
}

#line 208 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__sum_trace_counts_3_p_0_1(
#line 208 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 208 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 208 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 208 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3)
#line 208 "trace_counts.m"
{
#line 208 "trace_counts.m"
  {
#line 208 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 208 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv0_ProcTraceCounts_6;

#line 208 "trace_counts.m"
    {
#line 208 "trace_counts.m"
      mdbcomp__trace_counts__sum_proc_trace_counts_3_p_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), &mdbcomp__trace_counts__conv0_ProcTraceCounts_6);
    }
#line 208 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_3 = ((MR_Box) (mdbcomp__trace_counts__conv0_ProcTraceCounts_6));
#line 208 "trace_counts.m"
  }
#line 208 "trace_counts.m"
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
#line 207 "trace_counts.m"
  {
#line 207 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;

#line 208 "trace_counts.m"
    {
#line 208 "trace_counts.m"
      mercury__map__union_4_p_1((MR_Word) &mdbcomp__trace_counts_scalar_common_1[0], (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[3], mdbcomp__trace_counts__TraceCountsA_4, mdbcomp__trace_counts__TraceCountsB_5, mdbcomp__trace_counts__TraceCounts_6);
#line 208 "trace_counts.m"
      return;
    }
#line 207 "trace_counts.m"
  }
#line 94 "trace_counts.m"
}

#line 204 "trace_counts.m"
static void MR_CALL 
mdbcomp__trace_counts__summarize_trace_counts_list_2_p_0_1(
#line 204 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__closure_arg,
#line 204 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_1,
#line 204 "trace_counts.m"
  MR_Box mdbcomp__trace_counts__wrapper_arg_2,
#line 204 "trace_counts.m"
  MR_Box * mdbcomp__trace_counts__wrapper_arg_3)
#line 204 "trace_counts.m"
{
#line 204 "trace_counts.m"
  {
#line 204 "trace_counts.m"
    MR_Box mdbcomp__trace_counts__closure = mdbcomp__trace_counts__closure_arg;
#line 204 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__conv0_TraceCounts_6;

#line 204 "trace_counts.m"
    {
#line 204 "trace_counts.m"
      mdbcomp__trace_counts__sum_trace_counts_3_p_0(((MR_Word) mdbcomp__trace_counts__wrapper_arg_1), ((MR_Word) mdbcomp__trace_counts__wrapper_arg_2), &mdbcomp__trace_counts__conv0_TraceCounts_6);
    }
#line 204 "trace_counts.m"
    *mdbcomp__trace_counts__wrapper_arg_3 = ((MR_Box) (mdbcomp__trace_counts__conv0_TraceCounts_6));
#line 204 "trace_counts.m"
  }
#line 204 "trace_counts.m"
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
#line 203 "trace_counts.m"
  {
#line 203 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded = ((MR_tag((MR_Word) mdbcomp__trace_counts__TraceCountsList_3)) == (MR_mktag((MR_Integer) 1)));
#line 203 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__TraceCountsPrime_5;
#line 200 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__V_6_6;

#line 200 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 200 "trace_counts.m"
      {
#line 200 "trace_counts.m"
        mdbcomp__trace_counts__TraceCountsPrime_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TraceCountsList_3, (MR_Integer) 0)));
#line 200 "trace_counts.m"
        mdbcomp__trace_counts__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__TraceCountsList_3, (MR_Integer) 1)));
#line 200 "trace_counts.m"
        mdbcomp__trace_counts__succeeded = (mdbcomp__trace_counts__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "trace_counts.m"
      }
#line 203 "trace_counts.m"
    if (mdbcomp__trace_counts__succeeded)
#line 202 "trace_counts.m"
      *mdbcomp__trace_counts__TraceCounts_4 = mdbcomp__trace_counts__TraceCountsPrime_5;
#line 203 "trace_counts.m"
    else
#line 204 "trace_counts.m"
      {
#line 204 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__TypeInfo_14_14;
#line 204 "trace_counts.m"
        MR_Word mdbcomp__trace_counts__V_8_8;
#line 204 "trace_counts.m"
        MR_Box mdbcomp__trace_counts__conv1_TraceCounts_4;

#line 204 "trace_counts.m"
        {
#line 204 "trace_counts.m"
          mdbcomp__trace_counts__V_8_8 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[0]);
        }
#line 10885 "mdbcomp.trace_counts.c"
        mdbcomp__trace_counts__TypeInfo_14_14 = (MR_Word) &mdbcomp__trace_counts_scalar_common_1[1];
#line 204 "trace_counts.m"
        {
#line 204 "trace_counts.m"
          mercury__list__foldl_4_p_0(mdbcomp__trace_counts__TypeInfo_14_14, mdbcomp__trace_counts__TypeInfo_14_14, (MR_Word) &mdbcomp__trace_counts_scalar_common_1[2], mdbcomp__trace_counts__TraceCountsList_3, ((MR_Box) (mdbcomp__trace_counts__V_8_8)), &mdbcomp__trace_counts__conv1_TraceCounts_4);
        }
#line 204 "trace_counts.m"
        *mdbcomp__trace_counts__TraceCounts_4 = ((MR_Word) mdbcomp__trace_counts__conv1_TraceCounts_4);
#line 204 "trace_counts.m"
      }
#line 203 "trace_counts.m"
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
#line 717 "trace_counts.m"
  {
#line 717 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 717 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__HeadVar__3_3;

#line 717 "trace_counts.m"
#line 717 "trace_counts.m"
    switch (mdbcomp__trace_counts__HeadVar__2_2) {
#line 717 "trace_counts.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 717 "trace_counts.m"
      case (MR_Integer) 0:
#line 717 "trace_counts.m"
        {
#line 717 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[0];
#line 717 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 12:
#line 732 "trace_counts.m"
        {
#line 732 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 732 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 732 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 13:
#line 733 "trace_counts.m"
        {
#line 733 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 733 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 733 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 5:
#line 722 "trace_counts.m"
        {
#line 722 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[1];
#line 722 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 1:
#line 718 "trace_counts.m"
        {
#line 718 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[2];
#line 718 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 3:
#line 720 "trace_counts.m"
        {
#line 720 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[3];
#line 720 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 6:
#line 723 "trace_counts.m"
        {
#line 723 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 723 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 723 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 8:
#line 725 "trace_counts.m"
        {
#line 725 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 725 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 725 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 7:
#line 724 "trace_counts.m"
        {
#line 724 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 724 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 724 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 9:
#line 726 "trace_counts.m"
        {
#line 727 "trace_counts.m"
          {
#line 727 "trace_counts.m"
            mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "trace_counts.m"
            MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) ((MR_Integer) 9));
#line 727 "trace_counts.m"
            MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 1) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 727 "trace_counts.m"
          }
#line 726 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 11:
#line 730 "trace_counts.m"
        {
#line 731 "trace_counts.m"
          {
#line 731 "trace_counts.m"
            mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "trace_counts.m"
            MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) ((MR_Integer) 11));
#line 731 "trace_counts.m"
            MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 1) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 731 "trace_counts.m"
          }
#line 730 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 10:
#line 728 "trace_counts.m"
        {
#line 729 "trace_counts.m"
          {
#line 729 "trace_counts.m"
            mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "trace_counts.m"
            MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) ((MR_Integer) 10));
#line 729 "trace_counts.m"
            MR_hl_field(MR_mktag(2), mdbcomp__trace_counts__HeadVar__3_3, 1) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 729 "trace_counts.m"
          }
#line 728 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 2:
#line 719 "trace_counts.m"
        {
#line 719 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[4];
#line 719 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 14:
#line 734 "trace_counts.m"
        {
#line 734 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 734 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 734 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 4:
#line 721 "trace_counts.m"
        {
#line 721 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 721 "trace_counts.m"
          MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__trace_counts__HeadVar__1_1));
#line 721 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
      case (MR_Integer) 15:
#line 735 "trace_counts.m"
        {
#line 735 "trace_counts.m"
          mdbcomp__trace_counts__HeadVar__3_3 = (MR_Word) &mdbcomp__trace_counts_scalar_common_3[5];
#line 735 "trace_counts.m"
        }
#line 717 "trace_counts.m"
        break;
#line 717 "trace_counts.m"
    }
#line 717 "trace_counts.m"
    return mdbcomp__trace_counts__HeadVar__3_3;
#line 717 "trace_counts.m"
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
#line 945 "trace_counts.m"
  {
#line 945 "trace_counts.m"
    MR_bool mdbcomp__trace_counts__succeeded;
#line 945 "trace_counts.m"
    MR_Word mdbcomp__trace_counts__UnionType_6;

#line 945 "trace_counts.m"
#line 945 "trace_counts.m"
    switch (MR_tag((MR_Word) mdbcomp__trace_counts__Type1_4)) {
#line 945 "trace_counts.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 945 "trace_counts.m"
      case (MR_Integer) 0:
#line 945 "trace_counts.m"
#line 945 "trace_counts.m"
        switch (MR_tag((MR_Word) mdbcomp__trace_counts__Type2_5)) {
#line 945 "trace_counts.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 945 "trace_counts.m"
          case (MR_Integer) 0:
#line 945 "trace_counts.m"
            {
#line 945 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_61_61;
#line 945 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_62_62;
#line 945 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_63_63;

#line 947 "trace_counts.m"
              {
#line 947 "trace_counts.m"
                mdbcomp__trace_counts__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_63_63, 0) = ((MR_Box) (mdbcomp__trace_counts__Type2_5));
#line 947 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "trace_counts.m"
              }
#line 947 "trace_counts.m"
              {
#line 947 "trace_counts.m"
                mdbcomp__trace_counts__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_62_62, 0) = ((MR_Box) (mdbcomp__trace_counts__Type1_4));
#line 947 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_62_62, 1) = ((MR_Box) (mdbcomp__trace_counts__V_63_63));
#line 947 "trace_counts.m"
              }
#line 947 "trace_counts.m"
              {
#line 947 "trace_counts.m"
                mdbcomp__trace_counts__V_61_61 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_62_62);
              }
#line 947 "trace_counts.m"
              {
#line 947 "trace_counts.m"
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
#line 947 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_61_61));
#line 947 "trace_counts.m"
              }
#line 945 "trace_counts.m"
            }
#line 945 "trace_counts.m"
            break;
#line 945 "trace_counts.m"
          case (MR_Integer) 1:
#line 949 "trace_counts.m"
            {
#line 949 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__TypeCtorInfo_73_73 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;
#line 949 "trace_counts.m"
              MR_Integer mdbcomp__trace_counts__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 0)));
#line 949 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__IncludedTypes2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 1)));
#line 949 "trace_counts.m"
              MR_Integer mdbcomp__trace_counts__V_57_57 = (mdbcomp__trace_counts__N_10 + (MR_Integer) 1);
#line 949 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_59_59;
#line 949 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__Set0_94;
#line 949 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__Set_95;

#line 990 "trace_counts.m"
              {
#line 990 "trace_counts.m"
                mercury__set__list_to_set_2_p_0(mdbcomp__trace_counts__TypeCtorInfo_73_73, mdbcomp__trace_counts__IncludedTypes2_11, &mdbcomp__trace_counts__Set0_94);
              }
#line 991 "trace_counts.m"
              {
#line 991 "trace_counts.m"
                mercury__set__insert_3_p_0(mdbcomp__trace_counts__TypeCtorInfo_73_73, ((MR_Box) (mdbcomp__trace_counts__Type1_4)), mdbcomp__trace_counts__Set0_94, &mdbcomp__trace_counts__Set_95);
              }
#line 992 "trace_counts.m"
              {
#line 992 "trace_counts.m"
                mercury__set__to_sorted_list_2_p_0(mdbcomp__trace_counts__TypeCtorInfo_73_73, mdbcomp__trace_counts__Set_95, &mdbcomp__trace_counts__V_59_59);
              }
#line 951 "trace_counts.m"
              {
#line 951 "trace_counts.m"
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_57_57));
#line 951 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_59_59));
#line 951 "trace_counts.m"
              }
#line 949 "trace_counts.m"
            }
#line 945 "trace_counts.m"
            break;
#line 945 "trace_counts.m"
          case (MR_Integer) 2:
#line 954 "trace_counts.m"
            {
#line 954 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_53_53;
#line 954 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_54_54;
#line 954 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_55_55;

#line 956 "trace_counts.m"
              {
#line 956 "trace_counts.m"
                mdbcomp__trace_counts__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 956 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_55_55, 0) = ((MR_Box) (mdbcomp__trace_counts__Type2_5));
#line 956 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 956 "trace_counts.m"
              }
#line 956 "trace_counts.m"
              {
#line 956 "trace_counts.m"
                mdbcomp__trace_counts__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 956 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_54_54, 0) = ((MR_Box) (mdbcomp__trace_counts__Type1_4));
#line 956 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_54_54, 1) = ((MR_Box) (mdbcomp__trace_counts__V_55_55));
#line 956 "trace_counts.m"
              }
#line 956 "trace_counts.m"
              {
#line 956 "trace_counts.m"
                mdbcomp__trace_counts__V_53_53 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_54_54);
              }
#line 956 "trace_counts.m"
              {
#line 956 "trace_counts.m"
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 956 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
#line 956 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_53_53));
#line 956 "trace_counts.m"
              }
#line 954 "trace_counts.m"
            }
#line 945 "trace_counts.m"
            break;
#line 945 "trace_counts.m"
        }
#line 945 "trace_counts.m"
        break;
#line 945 "trace_counts.m"
      case (MR_Integer) 1:
#line 945 "trace_counts.m"
        {
#line 945 "trace_counts.m"
          MR_Word mdbcomp__trace_counts__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type1_4, (MR_Integer) 1)));
#line 945 "trace_counts.m"
          MR_Integer mdbcomp__trace_counts__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type1_4, (MR_Integer) 0)));

#line 945 "trace_counts.m"
#line 945 "trace_counts.m"
          switch (MR_tag((MR_Word) mdbcomp__trace_counts__Type2_5)) {
#line 945 "trace_counts.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 945 "trace_counts.m"
            case (MR_Integer) 0:
#line 958 "trace_counts.m"
              {
#line 958 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_49_49 = (mdbcomp__trace_counts__V_85_85 + (MR_Integer) 1);
#line 958 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_51_51;

#line 961 "trace_counts.m"
                {
#line 961 "trace_counts.m"
                  mdbcomp__trace_counts__V_51_51 = mdbcomp__trace_counts__insert_into_list_as_set_2_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_84_84, ((MR_Box) (mdbcomp__trace_counts__Type2_5)));
                }
#line 960 "trace_counts.m"
                {
#line 960 "trace_counts.m"
                  mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 960 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_49_49));
#line 960 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_51_51));
#line 960 "trace_counts.m"
                }
#line 958 "trace_counts.m"
              }
#line 945 "trace_counts.m"
              break;
#line 945 "trace_counts.m"
            case (MR_Integer) 1:
#line 963 "trace_counts.m"
              {
#line 963 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__TypeCtorInfo_76_76 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;
#line 963 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__N2_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 0)));
#line 963 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_46_46 = (mdbcomp__trace_counts__V_85_85 + mdbcomp__trace_counts__N2_18);
#line 963 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_47_47;
#line 963 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_48_48;
#line 963 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__IncludedTypes2_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 1)));

#line 966 "trace_counts.m"
                {
#line 966 "trace_counts.m"
                  mdbcomp__trace_counts__V_48_48 = mercury__list__f_43_43_2_f_0(mdbcomp__trace_counts__TypeCtorInfo_76_76, mdbcomp__trace_counts__V_84_84, mdbcomp__trace_counts__IncludedTypes2_66);
                }
#line 966 "trace_counts.m"
                {
#line 966 "trace_counts.m"
                  mdbcomp__trace_counts__V_47_47 = mercury__list__sort_and_remove_dups_1_f_0(mdbcomp__trace_counts__TypeCtorInfo_76_76, mdbcomp__trace_counts__V_48_48);
                }
#line 965 "trace_counts.m"
                {
#line 965 "trace_counts.m"
                  mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_46_46));
#line 965 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_47_47));
#line 965 "trace_counts.m"
                }
#line 963 "trace_counts.m"
              }
#line 945 "trace_counts.m"
              break;
#line 945 "trace_counts.m"
            case (MR_Integer) 2:
#line 968 "trace_counts.m"
              {
#line 968 "trace_counts.m"
                MR_Integer mdbcomp__trace_counts__V_43_43 = (mdbcomp__trace_counts__V_85_85 + (MR_Integer) 1);
#line 968 "trace_counts.m"
                MR_Word mdbcomp__trace_counts__V_45_45;

#line 971 "trace_counts.m"
                {
#line 971 "trace_counts.m"
                  mdbcomp__trace_counts__V_45_45 = mdbcomp__trace_counts__insert_into_list_as_set_2_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_84_84, ((MR_Box) (mdbcomp__trace_counts__Type2_5)));
                }
#line 970 "trace_counts.m"
                {
#line 970 "trace_counts.m"
                  mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_43_43));
#line 970 "trace_counts.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_45_45));
#line 970 "trace_counts.m"
                }
#line 968 "trace_counts.m"
              }
#line 945 "trace_counts.m"
              break;
#line 945 "trace_counts.m"
          }
#line 945 "trace_counts.m"
        }
#line 945 "trace_counts.m"
        break;
#line 945 "trace_counts.m"
      case (MR_Integer) 2:
#line 945 "trace_counts.m"
#line 945 "trace_counts.m"
        switch (MR_tag((MR_Word) mdbcomp__trace_counts__Type2_5)) {
#line 945 "trace_counts.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 945 "trace_counts.m"
          case (MR_Integer) 0:
#line 973 "trace_counts.m"
            {
#line 973 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_39_39;
#line 973 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_40_40;
#line 973 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_41_41;

#line 975 "trace_counts.m"
              {
#line 975 "trace_counts.m"
                mdbcomp__trace_counts__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 975 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_41_41, 0) = ((MR_Box) (mdbcomp__trace_counts__Type2_5));
#line 975 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 975 "trace_counts.m"
              }
#line 975 "trace_counts.m"
              {
#line 975 "trace_counts.m"
                mdbcomp__trace_counts__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 975 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_40_40, 0) = ((MR_Box) (mdbcomp__trace_counts__Type1_4));
#line 975 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_40_40, 1) = ((MR_Box) (mdbcomp__trace_counts__V_41_41));
#line 975 "trace_counts.m"
              }
#line 975 "trace_counts.m"
              {
#line 975 "trace_counts.m"
                mdbcomp__trace_counts__V_39_39 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_40_40);
              }
#line 975 "trace_counts.m"
              {
#line 975 "trace_counts.m"
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 975 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
#line 975 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_39_39));
#line 975 "trace_counts.m"
              }
#line 973 "trace_counts.m"
            }
#line 945 "trace_counts.m"
            break;
#line 945 "trace_counts.m"
          case (MR_Integer) 1:
#line 977 "trace_counts.m"
            {
#line 977 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__TypeCtorInfo_79_79;
#line 977 "trace_counts.m"
              MR_Integer mdbcomp__trace_counts__V_35_35;
#line 977 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_37_37;
#line 977 "trace_counts.m"
              MR_Integer mdbcomp__trace_counts__N_70 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 0)));
#line 977 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__IncludedTypes2_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__Type2_5, (MR_Integer) 1)));
#line 977 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__Set0_89;
#line 977 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__Set_90;

#line 979 "trace_counts.m"
              mdbcomp__trace_counts__V_35_35 = (mdbcomp__trace_counts__N_70 + (MR_Integer) 1);
#line 11504 "mdbcomp.trace_counts.c"
              mdbcomp__trace_counts__TypeCtorInfo_79_79 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0;
#line 990 "trace_counts.m"
              {
#line 990 "trace_counts.m"
                mercury__set__list_to_set_2_p_0(mdbcomp__trace_counts__TypeCtorInfo_79_79, mdbcomp__trace_counts__IncludedTypes2_71, &mdbcomp__trace_counts__Set0_89);
              }
#line 991 "trace_counts.m"
              {
#line 991 "trace_counts.m"
                mercury__set__insert_3_p_0(mdbcomp__trace_counts__TypeCtorInfo_79_79, ((MR_Box) (mdbcomp__trace_counts__Type1_4)), mdbcomp__trace_counts__Set0_89, &mdbcomp__trace_counts__Set_90);
              }
#line 992 "trace_counts.m"
              {
#line 992 "trace_counts.m"
                mercury__set__to_sorted_list_2_p_0(mdbcomp__trace_counts__TypeCtorInfo_79_79, mdbcomp__trace_counts__Set_90, &mdbcomp__trace_counts__V_37_37);
              }
#line 979 "trace_counts.m"
              {
#line 979 "trace_counts.m"
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 979 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) (mdbcomp__trace_counts__V_35_35));
#line 979 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_37_37));
#line 979 "trace_counts.m"
              }
#line 977 "trace_counts.m"
            }
#line 945 "trace_counts.m"
            break;
#line 945 "trace_counts.m"
          case (MR_Integer) 2:
#line 982 "trace_counts.m"
            {
#line 982 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_31_31;
#line 982 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_32_32;
#line 982 "trace_counts.m"
              MR_Word mdbcomp__trace_counts__V_33_33;

#line 984 "trace_counts.m"
              {
#line 984 "trace_counts.m"
                mdbcomp__trace_counts__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_33_33, 0) = ((MR_Box) (mdbcomp__trace_counts__Type2_5));
#line 984 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 984 "trace_counts.m"
              }
#line 984 "trace_counts.m"
              {
#line 984 "trace_counts.m"
                mdbcomp__trace_counts__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_32_32, 0) = ((MR_Box) (mdbcomp__trace_counts__Type1_4));
#line 984 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__V_32_32, 1) = ((MR_Box) (mdbcomp__trace_counts__V_33_33));
#line 984 "trace_counts.m"
              }
#line 984 "trace_counts.m"
              {
#line 984 "trace_counts.m"
                mdbcomp__trace_counts__V_31_31 = mercury__list__sort_and_remove_dups_1_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mdbcomp__trace_counts__V_32_32);
              }
#line 984 "trace_counts.m"
              {
#line 984 "trace_counts.m"
                mdbcomp__trace_counts__UnionType_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 0) = ((MR_Box) ((MR_Integer) 2));
#line 984 "trace_counts.m"
                MR_hl_field(MR_mktag(1), mdbcomp__trace_counts__UnionType_6, 1) = ((MR_Box) (mdbcomp__trace_counts__V_31_31));
#line 984 "trace_counts.m"
              }
#line 982 "trace_counts.m"
            }
#line 945 "trace_counts.m"
            break;
#line 945 "trace_counts.m"
        }
#line 945 "trace_counts.m"
        break;
#line 945 "trace_counts.m"
    }
#line 945 "trace_counts.m"
    return mdbcomp__trace_counts__UnionType_6;
#line 945 "trace_counts.m"
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
