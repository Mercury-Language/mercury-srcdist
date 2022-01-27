/*
** Automatically generated from `browser_info.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module mdb.browser_info. */
/* :- implementation. */

/*
INIT mercury__mdb__browser_info__init
ENDINIT
*/

#include "mdb.browser_info.mih"
#include "mdb.browser_info.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browser_term.mih"
#include "mdb.parse.mih"
#include "mdb.term_rep.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
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
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 83 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0;

#line 86 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1;

#line 89 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2;

#line 92 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browse_caller_type_0[3];

#line 95 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browse_caller_type_0[3];

#line 98 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browse_caller_type_0[3];

#line 101 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_db_0[1];

#line 104 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct2 mdb__browser_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0io__type_ctor_info_stream_info_0;

#line 107 "mdb.browser_info.c"
static const MR_NotagFunctorDesc mdb__browser_info__mdb__browser_info__notag_functor_desc_browser_db_0;

#line 110 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0;

#line 113 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0;

#line 116 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_dir_0;

#line 119 "mdb.browser_info.c"
static const MR_VA_TypeInfo_Struct2 mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0;

#line 122 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0;

#line 125 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_info_0_0[7];

#line 128 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_info_0_0[7];

#line 131 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0;

#line 134 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_info_0_0[1];

#line 137 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_info_0[1];

#line 140 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_info_0[1];

#line 143 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_info_0[1];

#line 146 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 149 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_persistent_state_0_0[6];

#line 152 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_persistent_state_0_0[6];

#line 155 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0;

#line 158 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0[1];

#line 161 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_persistent_state_0[1];

#line 164 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_persistent_state_0[1];

#line 167 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_persistent_state_0[1];

#line 170 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0;

#line 173 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1;

#line 176 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2;

#line 179 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3;

#line 182 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browser_term_mode_0[4];

#line 185 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browser_term_mode_0[4];

#line 188 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_term_mode_0[4];

#line 191 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_caller_params_0_0[5];

#line 194 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_caller_params_0_0[5];

#line 197 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0;

#line 200 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_caller_params_0_0[1];

#line 203 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_caller_params_0[1];

#line 206 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_caller_params_0[1];

#line 209 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_caller_params_0[1];

#line 212 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0;

#line 215 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1;

#line 218 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_debugger_0[2];

#line 221 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_debugger_0[2];

#line 224 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_debugger_0[2];

#line 227 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_0;

#line 230 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_dir_0_1[1];

#line 233 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_1;

#line 236 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_dir_0_2[1];

#line 239 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_2;

#line 242 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_0[1];

#line 245 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_1[1];

#line 248 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_2[1];

#line 251 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_dir_0[3];

#line 254 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_dir_0[3];

#line 257 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_dir_0[3];

#line 260 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_format_params_0_0[4];

#line 263 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_format_params_0_0[4];

#line 266 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0;

#line 269 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_format_params_0_0[1];

#line 272 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_format_params_0[1];

#line 275 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_format_params_0[1];

#line 278 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_format_params_0[1];

#line 281 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0;

#line 284 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1;

#line 287 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_how_track_subterm_0[2];

#line 290 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_how_track_subterm_0[2];

#line 293 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_how_track_subterm_0[2];

#line 296 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0;

#line 299 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_maybe_track_subterm_1_1[3];

#line 302 "mdb.browser_info.c"
static const MR_DuArgLocn mdb__browser_info__mdb__browser_info__field_locns_maybe_track_subterm_1_1[3];

#line 305 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1;

#line 308 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_0[1];

#line 311 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_1[1];

#line 314 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_maybe_track_subterm_1[2];

#line 317 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_maybe_track_subterm_1[2];

#line 320 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_maybe_track_subterm_1[2];

#line 323 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0;

#line 326 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_0[2];

#line 329 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0;

#line 332 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_1[2];

#line 335 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1;

#line 338 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_2[1];

#line 341 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2;

#line 344 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3;

#line 347 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_0[1];

#line 350 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_1[1];

#line 353 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_2[1];

#line 356 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_3[1];

#line 359 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_param_cmd_0[4];

#line 362 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_param_cmd_0[4];

#line 365 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_param_cmd_0[4];

#line 368 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0;

#line 371 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1;

#line 374 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2;

#line 377 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3;

#line 380 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_portray_format_0[4];

#line 383 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_portray_format_0[4];

#line 386 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_portray_format_0[4];

#line 389 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_0[1];

#line 392 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0;

#line 395 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_1[1];

#line 398 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1;

#line 401 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_2[1];

#line 404 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2;

#line 407 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_3[1];

#line 410 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3;

#line 413 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_4[1];

#line 416 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4;

#line 419 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_0[1];

#line 422 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_1[1];

#line 425 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_2[1];

#line 428 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_3[2];

#line 431 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_setting_0[4];

#line 434 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_setting_0[5];

#line 437 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_setting_0[5];

#line 440 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0;

#line 443 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1;

#line 446 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_should_assert_invalid_0[2];

#line 449 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_should_assert_invalid_0[2];

#line 452 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_should_assert_invalid_0[2];

#line 455 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_0[1];

#line 458 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0;

#line 461 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_1[1];

#line 464 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1;

#line 467 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2;

#line 470 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3;

#line 473 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4;

#line 476 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_0[3];

#line 479 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_1[1];

#line 482 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_2[1];

#line 485 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_term_browser_response_0[3];

#line 488 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_term_browser_response_0[5];

#line 491 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_term_browser_response_0[5];

#line 494 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browse_caller_type_0_0_10001(
#line 497 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 499 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 502 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browse_caller_type_0_0_10001(
#line 505 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 507 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 509 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 512 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_db_0_0_10001(
#line 515 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 517 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 520 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_db_0_0_10001(
#line 523 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 525 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 527 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 530 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_info_0_0_10001(
#line 533 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 535 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 538 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_info_0_0_10001(
#line 541 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 543 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 545 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 548 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_mode_func_0_0_10001(
#line 551 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 553 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 556 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_mode_func_0_0_10001(
#line 559 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 561 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 563 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 566 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_persistent_state_0_0_10001(
#line 569 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 571 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 574 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_persistent_state_0_0_10001(
#line 577 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 579 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 581 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 584 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_term_mode_0_0_10001(
#line 587 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 589 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 592 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_term_mode_0_0_10001(
#line 595 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 597 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 599 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 602 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0_10001(
#line 605 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 607 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 610 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0_10001(
#line 613 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 615 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 617 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 620 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____debugger_0_0_10001(
#line 623 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 625 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 628 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____debugger_0_0_10001(
#line 631 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 633 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 635 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 638 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____dir_0_0_10001(
#line 641 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 643 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 646 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____dir_0_0_10001(
#line 649 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 651 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 653 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 656 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____format_params_0_0_10001(
#line 659 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 661 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 664 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____format_params_0_0_10001(
#line 667 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 669 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 671 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 674 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____how_track_subterm_0_0_10001(
#line 677 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 679 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 682 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____how_track_subterm_0_0_10001(
#line 685 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 687 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 689 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 692 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____maybe_track_subterm_1_0_10001(
#line 695 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 697 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 699 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 702 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____maybe_track_subterm_1_0_10001(
#line 705 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 707 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_2,
#line 709 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 711 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_4);

#line 714 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____param_cmd_0_0_10001(
#line 717 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 719 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 722 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____param_cmd_0_0_10001(
#line 725 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 727 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 729 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 732 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____portray_format_0_0_10001(
#line 735 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 737 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 740 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____portray_format_0_0_10001(
#line 743 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 745 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 747 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 750 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____setting_0_0_10001(
#line 753 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 755 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 758 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____setting_0_0_10001(
#line 761 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 763 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 765 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 768 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____should_assert_invalid_0_0_10001(
#line 771 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 773 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 776 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____should_assert_invalid_0_0_10001(
#line 779 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 781 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 783 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 786 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____term_browser_response_0_0_10001(
#line 789 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 791 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 794 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____term_browser_response_0_0_10001(
#line 797 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 799 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 801 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 804 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
#line 807 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 809 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 811 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 813 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 815 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4);

#line 818 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
#line 821 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 823 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 825 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 827 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 829 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4);

#line 832 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
#line 835 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 837 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 839 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_2,
#line 841 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 843 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4);

#line 846 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
#line 849 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 851 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 853 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 855 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_3);

#line 1037 "browser_info.m"
static void MR_CALL 
mdb__browser_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(
#line 1037 "browser_info.m"
  MR_String * mdb__browser_info__HeadVar__2_2);

#line 1051 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(
#line 1051 "browser_info.m"
  MR_Word mdb__browser_info__D_5,
#line 1051 "browser_info.m"
  MR_String mdb__browser_info__S_6);

#line 1057 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
#line 1057 "browser_info.m"
  MR_Word mdb__browser_info__D_5,
#line 1057 "browser_info.m"
  MR_Integer mdb__browser_info__I_6);

#line 1037 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0(
#line 1037 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_5,
#line 1037 "browser_info.m"
  MR_String * mdb__browser_info__HeadVar__2_2);

#line 1041 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0(
#line 1041 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1);

#line 565 "browser_info.m"
static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0(
#line 565 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 565 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 565 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3);

#line 565 "browser_info.m"
static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0(
#line 565 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 565 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2);

#line 1185 "browser_info.m"
static void MR_CALL 
mdb__browser_info__browser_persistent_state_type_1_p_0(
#line 1185 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1);

#line 1168 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__format_params_to_desc_1_f_0(
#line 1168 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1);

#line 1158 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__format_params_to_mdb_command_2_f_0(
#line 1158 "browser_info.m"
  MR_String mdb__browser_info__CmdCallerOpt_4,
#line 1158 "browser_info.m"
  MR_Word mdb__browser_info__FormatParams_5);

#line 1148 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__caller_params_to_desc_1_f_0(
#line 1148 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1);

#line 1134 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__caller_params_to_mdb_command_2_f_0(
#line 1134 "browser_info.m"
  MR_String mdb__browser_info__CallerOpt_4,
#line 1134 "browser_info.m"
  MR_Word mdb__browser_info__CallerParams_5);

#line 995 "browser_info.m"
static void MR_CALL 
mdb__browser_info__write_path_2_4_p_0(
#line 995 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_1,
#line 995 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2);

#line 909 "browser_info.m"
static void MR_CALL 
mdb__browser_info__show_settings_caller_format_8_p_0(
#line 909 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_9,
#line 909 "browser_info.m"
  MR_Word mdb__browser_info__Info_10,
#line 909 "browser_info.m"
  MR_Word mdb__browser_info__Caller_11,
#line 909 "browser_info.m"
  MR_String mdb__browser_info__CallerName_12,
#line 909 "browser_info.m"
  MR_Word mdb__browser_info__Format_13,
#line 909 "browser_info.m"
  MR_String mdb__browser_info__FormatName_14);

#line 882 "browser_info.m"
static void MR_CALL 
mdb__browser_info__show_settings_caller_6_p_0(
#line 882 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_7,
#line 882 "browser_info.m"
  MR_Word mdb__browser_info__Info_8,
#line 882 "browser_info.m"
  MR_Word mdb__browser_info__Caller_9,
#line 882 "browser_info.m"
  MR_String mdb__browser_info__CallerName_10);

#line 793 "browser_info.m"
static void MR_CALL 
mdb__browser_info__maybe_set_param_2_4_p_0(
#line 793 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 793 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 793 "browser_info.m"
  MR_Word mdb__browser_info__Params_3,
#line 793 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__4_4);

#line 766 "browser_info.m"
static void MR_CALL 
mdb__browser_info__maybe_set_param_8_p_0(
#line 766 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 766 "browser_info.m"
  MR_Word mdb__browser_info__F_2,
#line 766 "browser_info.m"
  MR_Word mdb__browser_info__Pr_3,
#line 766 "browser_info.m"
  MR_Word mdb__browser_info__V_4,
#line 766 "browser_info.m"
  MR_Word mdb__browser_info__NPr_5,
#line 766 "browser_info.m"
  MR_Word mdb__browser_info__Setting_6,
#line 766 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Params_0_7,
#line 766 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Params_8);

#line 518 "browser_info.m"
static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_no_0_f_0(void);

#line 512 "browser_info.m"
static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_yes_0_f_0(void);

#line 494 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0(
#line 494 "browser_info.m"
  MR_String mdb__browser_info__FileName_4,
#line 494 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 494 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7);

#line 479 "browser_info.m"
static void MR_CALL 
mdb__browser_info__get_xml_tmp_filename_from_mdb_2_p_0(
#line 479 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 479 "browser_info.m"
  MR_String * mdb__browser_info__FileName_4);

#line 466 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0(
#line 466 "browser_info.m"
  MR_String mdb__browser_info__Command_4,
#line 466 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 466 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7);

#line 451 "browser_info.m"
static void MR_CALL 
mdb__browser_info__get_xml_browser_cmd_from_mdb_2_p_0(
#line 451 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 451 "browser_info.m"
  MR_String * mdb__browser_info__Command_4);

#line 426 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_format_from_mdb_6_p_0(
#line 426 "browser_info.m"
  MR_Word mdb__browser_info__P_7,
#line 426 "browser_info.m"
  MR_Word mdb__browser_info__B_8,
#line 426 "browser_info.m"
  MR_Word mdb__browser_info__A_9,
#line 426 "browser_info.m"
  MR_Word mdb__browser_info__Format_10,
#line 426 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_12,
#line 426 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_13);

#line 393 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_lines_from_mdb_10_p_0(
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 393 "browser_info.m"
  MR_Integer mdb__browser_info__Lines_18,
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 393 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21);

#line 382 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_width_from_mdb_10_p_0(
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 382 "browser_info.m"
  MR_Integer mdb__browser_info__Width_18,
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 382 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21);

#line 371 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_size_from_mdb_10_p_0(
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__NPr_16,
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__V_17,
#line 371 "browser_info.m"
  MR_Integer mdb__browser_info__Size_18,
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 371 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21);

#line 360 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_depth_from_mdb_10_p_0(
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 360 "browser_info.m"
  MR_Integer mdb__browser_info__Depth_18,
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 360 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21);


static /* final */ const MR_Box mdb__browser_info_scalar_common_1[1][3];

static /* final */ const MR_Box mdb__browser_info_scalar_common_2[6][2];

static /* final */ const MR_Box mdb__browser_info_scalar_common_3[5][4];

static /* final */ const MR_Box mdb__browser_info_scalar_common_4[3][5];

static /* final */ const MR_Box mdb__browser_info_scalar_common_5[1][6];

static /* final */ const MR_Box mdb__browser_info_scalar_common_6[4][1];


#line 1178 "browser_info.m"
/* sealed */ struct mdb__browser_info__vector_common_type_7_0_s {
#line 1178 "browser_info.m"
  const MR_String mdb__browser_info__vector_common_type_7_0__vct_7_f_0;
#line 1178 "browser_info.m"
};

static /* final */ const struct mdb__browser_info__vector_common_type_7_0_s mdb__browser_info_vector_common_7[8];



static /* final */ const MR_Box mdb__browser_info_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_stream_info_0))
  },
};

static /* final */ const MR_Box mdb__browser_info_scalar_common_2[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_maybe_track_subterm_1)),
    ((MR_Box) (&mdb__browser_info_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_maybe_option_table_1)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0))
  },
};

static /* final */ const MR_Box mdb__browser_info_scalar_common_3[5][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_func_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__browser_info_scalar_common_2[0])),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Integer) 80)),
    ((MR_Box) ((MR_Integer) 25))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Integer) 30)),
    ((MR_Box) ((MR_Integer) 80)),
    ((MR_Box) ((MR_Integer) 25))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Integer) 80)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Integer) 80)),
    ((MR_Box) ((MR_Integer) 5))
  },
};

static /* final */ const MR_Box mdb__browser_info_scalar_common_4[3][5] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[1])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[1])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[1])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[1]))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[2])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[2])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[2])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[2]))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[3])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[3])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[4])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[3]))
  },
};

static /* final */ const MR_Box mdb__browser_info_scalar_common_5[1][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__browser_info_scalar_common_4[0])),
    ((MR_Box) (&mdb__browser_info_scalar_common_4[1])),
    ((MR_Box) (&mdb__browser_info_scalar_common_4[2])),
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mdb__browser_info_scalar_common_6[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "flat"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "pretty"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "raw_pretty"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "verbose"))
  },
};


static /* final */ const struct mdb__browser_info__vector_common_type_7_0_s mdb__browser_info_vector_common_7[8] = {
  /* row 0 */   {     (MR_String) "flat" },
  /* row 1 */   {     (MR_String) "raw_pretty" },
  /* row 2 */   {     (MR_String) "verbose" },
  /* row 3 */   {     (MR_String) "pretty" },
  /* row 4 */   {     (MR_String) "flat" },
  /* row 5 */   {     (MR_String) "raw_pretty" },
  /* row 6 */   {     (MR_String) "verbose" },
  /* row 7 */   {     (MR_String) "pretty" },
};


#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.browser_info.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"

#line 352 "browser_info.m"
void 
ML_BROWSE_init_persistent_state(
#line 352 "browser_info.m"
  MR_Word * mdb__browser_info__State_2)
#line 352 "browser_info.m"
{
#line 352 "browser_info.m"
	mdb__browser_info__init_persistent_state_1_p_0((MR_Word *) mdb__browser_info__State_2);
}

#line 363 "browser_info.m"
void 
ML_BROWSE_set_depth_from_mdb(
#line 363 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 363 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 363 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 363 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 363 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 363 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 363 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 363 "browser_info.m"
  MR_Integer mdb__browser_info__Depth_18,
#line 363 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 363 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 363 "browser_info.m"
{
#line 363 "browser_info.m"
	mdb__browser_info__set_depth_from_mdb_10_p_0((MR_Word) mdb__browser_info__P_11, (MR_Word) mdb__browser_info__B_12, (MR_Word) mdb__browser_info__A_13, (MR_Word) mdb__browser_info__F_14, (MR_Word) mdb__browser_info__Pr_15, (MR_Word) mdb__browser_info__V_16, (MR_Word) mdb__browser_info__NPr_17, (MR_Integer) mdb__browser_info__Depth_18, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_20, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_21);
}

#line 374 "browser_info.m"
void 
ML_BROWSE_set_size_from_mdb(
#line 374 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 374 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 374 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 374 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 374 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 374 "browser_info.m"
  MR_Word mdb__browser_info__NPr_16,
#line 374 "browser_info.m"
  MR_Word mdb__browser_info__V_17,
#line 374 "browser_info.m"
  MR_Integer mdb__browser_info__Size_18,
#line 374 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 374 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 374 "browser_info.m"
{
#line 374 "browser_info.m"
	mdb__browser_info__set_size_from_mdb_10_p_0((MR_Word) mdb__browser_info__P_11, (MR_Word) mdb__browser_info__B_12, (MR_Word) mdb__browser_info__A_13, (MR_Word) mdb__browser_info__F_14, (MR_Word) mdb__browser_info__Pr_15, (MR_Word) mdb__browser_info__NPr_16, (MR_Word) mdb__browser_info__V_17, (MR_Integer) mdb__browser_info__Size_18, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_20, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_21);
}

#line 385 "browser_info.m"
void 
ML_BROWSE_set_width_from_mdb(
#line 385 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 385 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 385 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 385 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 385 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 385 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 385 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 385 "browser_info.m"
  MR_Integer mdb__browser_info__Width_18,
#line 385 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 385 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 385 "browser_info.m"
{
#line 385 "browser_info.m"
	mdb__browser_info__set_width_from_mdb_10_p_0((MR_Word) mdb__browser_info__P_11, (MR_Word) mdb__browser_info__B_12, (MR_Word) mdb__browser_info__A_13, (MR_Word) mdb__browser_info__F_14, (MR_Word) mdb__browser_info__Pr_15, (MR_Word) mdb__browser_info__V_16, (MR_Word) mdb__browser_info__NPr_17, (MR_Integer) mdb__browser_info__Width_18, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_20, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_21);
}

#line 396 "browser_info.m"
void 
ML_BROWSE_set_lines_from_mdb(
#line 396 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 396 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 396 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 396 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 396 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 396 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 396 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 396 "browser_info.m"
  MR_Integer mdb__browser_info__Lines_18,
#line 396 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 396 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 396 "browser_info.m"
{
#line 396 "browser_info.m"
	mdb__browser_info__set_lines_from_mdb_10_p_0((MR_Word) mdb__browser_info__P_11, (MR_Word) mdb__browser_info__B_12, (MR_Word) mdb__browser_info__A_13, (MR_Word) mdb__browser_info__F_14, (MR_Word) mdb__browser_info__Pr_15, (MR_Word) mdb__browser_info__V_16, (MR_Word) mdb__browser_info__NPr_17, (MR_Integer) mdb__browser_info__Lines_18, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_20, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_21);
}

#line 428 "browser_info.m"
void 
ML_BROWSE_set_format_from_mdb(
#line 428 "browser_info.m"
  MR_Word mdb__browser_info__P_7,
#line 428 "browser_info.m"
  MR_Word mdb__browser_info__B_8,
#line 428 "browser_info.m"
  MR_Word mdb__browser_info__A_9,
#line 428 "browser_info.m"
  MR_Word mdb__browser_info__Format_10,
#line 428 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_12,
#line 428 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_13)
#line 428 "browser_info.m"
{
#line 428 "browser_info.m"
	mdb__browser_info__set_format_from_mdb_6_p_0((MR_Word) mdb__browser_info__P_7, (MR_Word) mdb__browser_info__B_8, (MR_Word) mdb__browser_info__A_9, (MR_Word) mdb__browser_info__Format_10, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_12, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_13);
}

#line 437 "browser_info.m"
void 
ML_BROWSE_get_num_io_actions(
#line 437 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 437 "browser_info.m"
  MR_Integer * mdb__browser_info__NumIOActions_4)
#line 437 "browser_info.m"
{
#line 437 "browser_info.m"
	mdb__browser_info__get_num_io_actions_2_p_0((MR_Word) mdb__browser_info__Browser_3, (MR_Integer *) mdb__browser_info__NumIOActions_4);
}

#line 444 "browser_info.m"
void 
ML_BROWSE_set_num_io_actions(
#line 444 "browser_info.m"
  MR_Integer mdb__browser_info__NumIOActions_4,
#line 444 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 444 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 444 "browser_info.m"
{
#line 444 "browser_info.m"
	mdb__browser_info__set_num_io_actions_3_p_0((MR_Integer) mdb__browser_info__NumIOActions_4, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_7);
}

#line 453 "browser_info.m"
void 
ML_BROWSE_get_xml_browser_cmd_from_mdb(
#line 453 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 453 "browser_info.m"
  MR_String * mdb__browser_info__Command_4)
#line 453 "browser_info.m"
{
#line 453 "browser_info.m"
	mdb__browser_info__get_xml_browser_cmd_from_mdb_2_p_0((MR_Word) mdb__browser_info__Browser_3, (MR_String *) mdb__browser_info__Command_4);
}

#line 468 "browser_info.m"
void 
ML_BROWSE_set_xml_browser_cmd_from_mdb(
#line 468 "browser_info.m"
  MR_String mdb__browser_info__Command_4,
#line 468 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 468 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 468 "browser_info.m"
{
#line 468 "browser_info.m"
	mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0((MR_String) mdb__browser_info__Command_4, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_7);
}

#line 481 "browser_info.m"
void 
ML_BROWSE_get_xml_tmp_filename_from_mdb(
#line 481 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 481 "browser_info.m"
  MR_String * mdb__browser_info__FileName_4)
#line 481 "browser_info.m"
{
#line 481 "browser_info.m"
	mdb__browser_info__get_xml_tmp_filename_from_mdb_2_p_0((MR_Word) mdb__browser_info__Browser_3, (MR_String *) mdb__browser_info__FileName_4);
}

#line 496 "browser_info.m"
void 
ML_BROWSE_set_xml_tmp_filename_from_mdb(
#line 496 "browser_info.m"
  MR_String mdb__browser_info__FileName_4,
#line 496 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 496 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 496 "browser_info.m"
{
#line 496 "browser_info.m"
	mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0((MR_String) mdb__browser_info__FileName_4, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_7);
}

#line 513 "browser_info.m"
MR_Word 
ML_BROWSE_mercury_bool_yes(void)
#line 513 "browser_info.m"
{
#line 513 "browser_info.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_info__mercury_bool_yes_0_f_0();
	return ret_value;
}

#line 519 "browser_info.m"
MR_Word 
ML_BROWSE_mercury_bool_no(void)
#line 519 "browser_info.m"
{
#line 519 "browser_info.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_info__mercury_bool_no_0_f_0();
	return ret_value;
}

#line 1064 "browser_info.m"
void 
ML_BROWSE_browser_params_to_string(
#line 1064 "browser_info.m"
  MR_Word mdb__browser_info__Browser_4,
#line 1064 "browser_info.m"
  MR_Word mdb__browser_info__MDBCommandFormat_5,
#line 1064 "browser_info.m"
  MR_String * mdb__browser_info__Desc_6)
#line 1064 "browser_info.m"
{
#line 1064 "browser_info.m"
	mdb__browser_info__browser_params_to_string_3_p_0((MR_Word) mdb__browser_info__Browser_4, (MR_Word) mdb__browser_info__MDBCommandFormat_5, (MR_String *) mdb__browser_info__Desc_6);
}

#line 1186 "browser_info.m"
void 
ML_BROWSE_browser_persistent_state_type(
#line 1186 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1)
#line 1186 "browser_info.m"
{
#line 1186 "browser_info.m"
	mdb__browser_info__browser_persistent_state_type_1_p_0((MR_Word *) mdb__browser_info__HeadVar__1_1);
}


#line 1635 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0 = {
  (MR_String) "print",
  (MR_Integer) 0
};

#line 1641 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1 = {
  (MR_String) "browse",
  (MR_Integer) 1
};

#line 1647 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2 = {
  (MR_String) "print_all",
  (MR_Integer) 2
};

#line 1653 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browse_caller_type_0[3] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2
};

#line 1660 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browse_caller_type_0[3] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2
};

#line 1667 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browse_caller_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1674 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browse_caller_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____browse_caller_type_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browse_caller_type_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browse_caller_type",
  {     mdb__browser_info__mdb__browser_info__enum_name_ordered_browse_caller_type_0 },
  {     mdb__browser_info__mdb__browser_info__enum_value_ordered_browse_caller_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_browse_caller_type_0
};

#line 1691 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_db_0[1] = {
  (MR_Integer) 0
};

#line 1696 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct2 mdb__browser_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0io__type_ctor_info_stream_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_stream_info_0
  }
};

#line 1705 "mdb.browser_info.c"
static const MR_NotagFunctorDesc mdb__browser_info__mdb__browser_info__notag_functor_desc_browser_db_0 = {
  (MR_String) "browser_db",
  (MR_PseudoTypeInfo) &mdb__browser_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0io__type_ctor_info_stream_info_0,
  (MR_String) "browser_stream_db"
};

#line 1712 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browser_db_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__browser_info____Unify____browser_db_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browser_db_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browser_db",
  {     &mdb__browser_info__mdb__browser_info__notag_functor_desc_browser_db_0 },
  {     &mdb__browser_info__mdb__browser_info__notag_functor_desc_browser_db_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_browser_db_0
};

#line 1729 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0
  }
};

#line 1737 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0
  }
};

#line 1745 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_dir_0 = {
  &mdb__browser_info__mdb__browser_info__type_ctor_info_maybe_track_subterm_1,
  {
    (MR_TypeInfo) &mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0
  }
};

#line 1753 "mdb.browser_info.c"
static const MR_VA_TypeInfo_Struct2 mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0,
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0
  }
};

#line 1763 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0
  }
};

#line 1771 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_info_0_0[7] = {
  (MR_PseudoTypeInfo) &mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browse_caller_type_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_dir_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0
};

#line 1782 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_info_0_0[7] = {
  (MR_String) "term",
  (MR_String) "dirs",
  (MR_String) "caller_type",
  (MR_String) "format",
  (MR_String) "state",
  (MR_String) "maybe_track",
  (MR_String) "maybe_mode_func"
};

#line 1793 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0 = {
  (MR_String) "browser_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browser_info__mdb__browser_info__field_types_browser_info_0_0,
  mdb__browser_info__mdb__browser_info__field_names_browser_info_0_0,
  NULL,
  NULL
};

#line 1808 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_info_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0
};

#line 1813 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_info_0_0
  }
};

#line 1822 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_info_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0
};

#line 1827 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_info_0[1] = {
  (MR_Integer) 0
};

#line 1832 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browser_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____browser_info_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browser_info_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browser_info",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_browser_info_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_browser_info_0
};

#line 1849 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browser_mode_func_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__browser_info____Unify____browser_mode_func_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browser_mode_func_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browser_mode_func",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1866 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1874 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_persistent_state_0_0[6] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 1884 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_persistent_state_0_0[6] = {
  (MR_String) "print_params",
  (MR_String) "browse_params",
  (MR_String) "print_all_params",
  (MR_String) "num_printed_io_actions",
  (MR_String) "xml_browser_cmd",
  (MR_String) "xml_tmp_filename"
};

#line 1894 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0 = {
  (MR_String) "browser_persistent_state",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browser_info__mdb__browser_info__field_types_browser_persistent_state_0_0,
  mdb__browser_info__mdb__browser_info__field_names_browser_persistent_state_0_0,
  NULL,
  NULL
};

#line 1909 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0
};

#line 1914 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_persistent_state_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0
  }
};

#line 1923 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_persistent_state_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0
};

#line 1928 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_persistent_state_0[1] = {
  (MR_Integer) 0
};

#line 1933 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____browser_persistent_state_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browser_persistent_state_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browser_persistent_state",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_browser_persistent_state_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_persistent_state_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_browser_persistent_state_0
};

#line 1950 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0 = {
  (MR_String) "input",
  (MR_Integer) 0
};

#line 1956 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1 = {
  (MR_String) "output",
  (MR_Integer) 1
};

#line 1962 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2 = {
  (MR_String) "unbound",
  (MR_Integer) 2
};

#line 1968 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3 = {
  (MR_String) "not_applicable",
  (MR_Integer) 3
};

#line 1974 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browser_term_mode_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3
};

#line 1982 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browser_term_mode_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2
};

#line 1990 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_term_mode_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 1998 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____browser_term_mode_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browser_term_mode_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browser_term_mode",
  {     mdb__browser_info__mdb__browser_info__enum_name_ordered_browser_term_mode_0 },
  {     mdb__browser_info__mdb__browser_info__enum_value_ordered_browser_term_mode_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_browser_term_mode_0
};

#line 2015 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_caller_params_0_0[5] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0
};

#line 2024 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_caller_params_0_0[5] = {
  (MR_String) "default_format",
  (MR_String) "flat_params",
  (MR_String) "raw_pretty_params",
  (MR_String) "verbose_params",
  (MR_String) "pretty_params"
};

#line 2033 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0 = {
  (MR_String) "caller_params",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browser_info__mdb__browser_info__field_types_caller_params_0_0,
  mdb__browser_info__mdb__browser_info__field_names_caller_params_0_0,
  NULL,
  NULL
};

#line 2048 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_caller_params_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0
};

#line 2053 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_caller_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_caller_params_0_0
  }
};

#line 2062 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_caller_params_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0
};

#line 2067 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_caller_params_0[1] = {
  (MR_Integer) 0
};

#line 2072 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____caller_params_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____caller_params_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "caller_params",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_caller_params_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_caller_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_caller_params_0
};

#line 2089 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0 = {
  (MR_String) "debugger_internal",
  (MR_Integer) 0
};

#line 2095 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1 = {
  (MR_String) "debugger_external",
  (MR_Integer) 1
};

#line 2101 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_debugger_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1
};

#line 2107 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_debugger_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0
};

#line 2113 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_debugger_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2119 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____debugger_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____debugger_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "debugger",
  {     mdb__browser_info__mdb__browser_info__enum_name_ordered_debugger_0 },
  {     mdb__browser_info__mdb__browser_info__enum_value_ordered_debugger_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_debugger_0
};

#line 2136 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_0 = {
  (MR_String) "parent",
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

#line 2151 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_dir_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2156 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_1 = {
  (MR_String) "child_num",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__browser_info__mdb__browser_info__field_types_dir_0_1,
  NULL,
  NULL,
  NULL
};

#line 2171 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_dir_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2176 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_2 = {
  (MR_String) "child_name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__browser_info__mdb__browser_info__field_types_dir_0_2,
  NULL,
  NULL,
  NULL
};

#line 2191 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_0
};

#line 2196 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_1
};

#line 2201 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_2
};

#line 2206 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_dir_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_2
  }
};

#line 2225 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_dir_0[3] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_0
};

#line 2232 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_dir_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2239 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____dir_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____dir_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "dir",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_dir_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_dir_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_dir_0
};

#line 2256 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_format_params_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2264 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_format_params_0_0[4] = {
  (MR_String) "depth",
  (MR_String) "size",
  (MR_String) "width",
  (MR_String) "lines"
};

#line 2272 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0 = {
  (MR_String) "format_params",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browser_info__mdb__browser_info__field_types_format_params_0_0,
  mdb__browser_info__mdb__browser_info__field_names_format_params_0_0,
  NULL,
  NULL
};

#line 2287 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_format_params_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0
};

#line 2292 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_format_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_format_params_0_0
  }
};

#line 2301 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_format_params_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0
};

#line 2306 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_format_params_0[1] = {
  (MR_Integer) 0
};

#line 2311 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____format_params_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____format_params_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "format_params",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_format_params_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_format_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_format_params_0
};

#line 2328 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0 = {
  (MR_String) "track_accurate",
  (MR_Integer) 0
};

#line 2334 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1 = {
  (MR_String) "track_fast",
  (MR_Integer) 1
};

#line 2340 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_how_track_subterm_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1
};

#line 2346 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_how_track_subterm_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1
};

#line 2352 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_how_track_subterm_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2358 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____how_track_subterm_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____how_track_subterm_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "how_track_subterm",
  {     mdb__browser_info__mdb__browser_info__enum_name_ordered_how_track_subterm_0 },
  {     mdb__browser_info__mdb__browser_info__enum_value_ordered_how_track_subterm_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_how_track_subterm_0
};

#line 2375 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0 = {
  (MR_String) "no_track",
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

#line 2390 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_maybe_track_subterm_1_1[3] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2397 "mdb.browser_info.c"
static const MR_DuArgLocn mdb__browser_info__mdb__browser_info__field_locns_maybe_track_subterm_1_1[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 2416 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1 = {
  (MR_String) "track",
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__browser_info__mdb__browser_info__field_types_maybe_track_subterm_1_1,
  NULL,
  mdb__browser_info__mdb__browser_info__field_locns_maybe_track_subterm_1_1,
  NULL
};

#line 2431 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0
};

#line 2436 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1
};

#line 2441 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_maybe_track_subterm_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_1
  }
};

#line 2455 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_maybe_track_subterm_1[2] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1
};

#line 2461 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_maybe_track_subterm_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2467 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_maybe_track_subterm_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____maybe_track_subterm_1_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____maybe_track_subterm_1_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "maybe_track_subterm",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_maybe_track_subterm_1 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_maybe_track_subterm_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_maybe_track_subterm_1
};

#line 2484 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_TypeInfo) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0
  }
};

#line 2492 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0
};

#line 2498 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0 = {
  (MR_String) "format",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_0,
  NULL,
  NULL,
  NULL
};

#line 2513 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_1[2] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0
};

#line 2519 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1 = {
  (MR_String) "format_param",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_1,
  NULL,
  NULL,
  NULL
};

#line 2534 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2539 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2 = {
  (MR_String) "num_io_actions",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_2,
  NULL,
  NULL,
  NULL
};

#line 2554 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3 = {
  (MR_String) "print_params",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2569 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3
};

#line 2574 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0
};

#line 2579 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1
};

#line 2584 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_3[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2
};

#line 2589 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_param_cmd_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_3
  }
};

#line 2613 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_param_cmd_0[4] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3
};

#line 2621 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_param_cmd_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2629 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_param_cmd_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____param_cmd_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____param_cmd_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "param_cmd",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_param_cmd_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_param_cmd_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_param_cmd_0
};

#line 2646 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0 = {
  (MR_String) "flat",
  (MR_Integer) 0
};

#line 2652 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1 = {
  (MR_String) "raw_pretty",
  (MR_Integer) 1
};

#line 2658 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2 = {
  (MR_String) "verbose",
  (MR_Integer) 2
};

#line 2664 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3 = {
  (MR_String) "pretty",
  (MR_Integer) 3
};

#line 2670 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_portray_format_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3
};

#line 2678 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_portray_format_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2
};

#line 2686 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_portray_format_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 2694 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____portray_format_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____portray_format_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "portray_format",
  {     mdb__browser_info__mdb__browser_info__enum_name_ordered_portray_format_0 },
  {     mdb__browser_info__mdb__browser_info__enum_value_ordered_portray_format_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_portray_format_0
};

#line 2711 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2716 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0 = {
  (MR_String) "setting_depth",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browser_info__mdb__browser_info__field_types_setting_0_0,
  NULL,
  NULL,
  NULL
};

#line 2731 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2736 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1 = {
  (MR_String) "setting_size",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__browser_info__mdb__browser_info__field_types_setting_0_1,
  NULL,
  NULL,
  NULL
};

#line 2751 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2756 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2 = {
  (MR_String) "setting_width",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__browser_info__mdb__browser_info__field_types_setting_0_2,
  NULL,
  NULL,
  NULL
};

#line 2771 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2776 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3 = {
  (MR_String) "setting_lines",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mdb__browser_info__mdb__browser_info__field_types_setting_0_3,
  NULL,
  NULL,
  NULL
};

#line 2791 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_4[1] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0
};

#line 2796 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4 = {
  (MR_String) "setting_format",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__field_types_setting_0_4,
  NULL,
  NULL,
  NULL
};

#line 2811 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0
};

#line 2816 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1
};

#line 2821 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2
};

#line 2826 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_3[2] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4
};

#line 2832 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_setting_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_3
  }
};

#line 2856 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_setting_0[5] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2
};

#line 2865 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_setting_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2874 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____setting_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____setting_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "setting",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_setting_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_setting_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_setting_0
};

#line 2891 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0 = {
  (MR_String) "assert_invalid",
  (MR_Integer) 0
};

#line 2897 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1 = {
  (MR_String) "no_assert_invalid",
  (MR_Integer) 1
};

#line 2903 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_should_assert_invalid_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1
};

#line 2909 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_should_assert_invalid_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1
};

#line 2915 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_should_assert_invalid_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2921 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____should_assert_invalid_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____should_assert_invalid_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "should_assert_invalid",
  {     mdb__browser_info__mdb__browser_info__enum_name_ordered_should_assert_invalid_0 },
  {     mdb__browser_info__mdb__browser_info__enum_value_ordered_should_assert_invalid_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_should_assert_invalid_0
};

#line 2938 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2943 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0 = {
  (MR_String) "browser_str",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_0,
  NULL,
  NULL,
  NULL
};

#line 2958 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2963 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1 = {
  (MR_String) "browser_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_1,
  NULL,
  NULL,
  NULL
};

#line 2978 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2 = {
  (MR_String) "browser_nl",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2993 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3 = {
  (MR_String) "browser_end_command",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3008 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4 = {
  (MR_String) "browser_quit",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3023 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_0[3] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4
};

#line 3030 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0
};

#line 3035 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1
};

#line 3040 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_term_browser_response_0[3] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_2
  }
};

#line 3059 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_term_browser_response_0[5] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0
};

#line 3068 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_term_browser_response_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 3077 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____term_browser_response_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____term_browser_response_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "term_browser_response",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_term_browser_response_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_term_browser_response_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_term_browser_response_0
};

#line 3094 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

#line 3104 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

#line 3114 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

#line 3124 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0_10001))
};

#line 3134 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browse_caller_type_0_0_10001(
#line 3137 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3139 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3141 "mdb.browser_info.c"
{
#line 3143 "mdb.browser_info.c"
  {
#line 3145 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3148 "mdb.browser_info.c"
    {
#line 3150 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browse_caller_type_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3153 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3155 "mdb.browser_info.c"
  }
#line 3157 "mdb.browser_info.c"
}

#line 3160 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browse_caller_type_0_0_10001(
#line 3163 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3165 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3167 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3169 "mdb.browser_info.c"
{
#line 3171 "mdb.browser_info.c"
  {
#line 3173 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3176 "mdb.browser_info.c"
    {
#line 3178 "mdb.browser_info.c"
      mdb__browser_info____Compare____browse_caller_type_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3181 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3183 "mdb.browser_info.c"
  }
#line 3185 "mdb.browser_info.c"
}

#line 3188 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_db_0_0_10001(
#line 3191 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3193 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3195 "mdb.browser_info.c"
{
#line 3197 "mdb.browser_info.c"
  {
#line 3199 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3202 "mdb.browser_info.c"
    {
#line 3204 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_db_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3207 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3209 "mdb.browser_info.c"
  }
#line 3211 "mdb.browser_info.c"
}

#line 3214 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_db_0_0_10001(
#line 3217 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3219 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3221 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3223 "mdb.browser_info.c"
{
#line 3225 "mdb.browser_info.c"
  {
#line 3227 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3230 "mdb.browser_info.c"
    {
#line 3232 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_db_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3235 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3237 "mdb.browser_info.c"
  }
#line 3239 "mdb.browser_info.c"
}

#line 3242 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_info_0_0_10001(
#line 3245 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3247 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3249 "mdb.browser_info.c"
{
#line 3251 "mdb.browser_info.c"
  {
#line 3253 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3256 "mdb.browser_info.c"
    {
#line 3258 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_info_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3261 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3263 "mdb.browser_info.c"
  }
#line 3265 "mdb.browser_info.c"
}

#line 3268 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_info_0_0_10001(
#line 3271 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3273 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3275 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3277 "mdb.browser_info.c"
{
#line 3279 "mdb.browser_info.c"
  {
#line 3281 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3284 "mdb.browser_info.c"
    {
#line 3286 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_info_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3289 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3291 "mdb.browser_info.c"
  }
#line 3293 "mdb.browser_info.c"
}

#line 3296 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_mode_func_0_0_10001(
#line 3299 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3301 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3303 "mdb.browser_info.c"
{
#line 3305 "mdb.browser_info.c"
  {
#line 3307 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3310 "mdb.browser_info.c"
    {
#line 3312 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_mode_func_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3315 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3317 "mdb.browser_info.c"
  }
#line 3319 "mdb.browser_info.c"
}

#line 3322 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_mode_func_0_0_10001(
#line 3325 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3327 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3329 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3331 "mdb.browser_info.c"
{
#line 3333 "mdb.browser_info.c"
  {
#line 3335 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3338 "mdb.browser_info.c"
    {
#line 3340 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_mode_func_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3343 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3345 "mdb.browser_info.c"
  }
#line 3347 "mdb.browser_info.c"
}

#line 3350 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_persistent_state_0_0_10001(
#line 3353 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3355 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3357 "mdb.browser_info.c"
{
#line 3359 "mdb.browser_info.c"
  {
#line 3361 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3364 "mdb.browser_info.c"
    {
#line 3366 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_persistent_state_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3369 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3371 "mdb.browser_info.c"
  }
#line 3373 "mdb.browser_info.c"
}

#line 3376 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_persistent_state_0_0_10001(
#line 3379 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3381 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3383 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3385 "mdb.browser_info.c"
{
#line 3387 "mdb.browser_info.c"
  {
#line 3389 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3392 "mdb.browser_info.c"
    {
#line 3394 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_persistent_state_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3397 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3399 "mdb.browser_info.c"
  }
#line 3401 "mdb.browser_info.c"
}

#line 3404 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_term_mode_0_0_10001(
#line 3407 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3409 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3411 "mdb.browser_info.c"
{
#line 3413 "mdb.browser_info.c"
  {
#line 3415 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3418 "mdb.browser_info.c"
    {
#line 3420 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_term_mode_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3423 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3425 "mdb.browser_info.c"
  }
#line 3427 "mdb.browser_info.c"
}

#line 3430 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_term_mode_0_0_10001(
#line 3433 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3435 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3437 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3439 "mdb.browser_info.c"
{
#line 3441 "mdb.browser_info.c"
  {
#line 3443 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3446 "mdb.browser_info.c"
    {
#line 3448 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_term_mode_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3451 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3453 "mdb.browser_info.c"
  }
#line 3455 "mdb.browser_info.c"
}

#line 3458 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0_10001(
#line 3461 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3463 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3465 "mdb.browser_info.c"
{
#line 3467 "mdb.browser_info.c"
  {
#line 3469 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3472 "mdb.browser_info.c"
    {
#line 3474 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____caller_params_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3477 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3479 "mdb.browser_info.c"
  }
#line 3481 "mdb.browser_info.c"
}

#line 3484 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0_10001(
#line 3487 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3489 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3491 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3493 "mdb.browser_info.c"
{
#line 3495 "mdb.browser_info.c"
  {
#line 3497 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3500 "mdb.browser_info.c"
    {
#line 3502 "mdb.browser_info.c"
      mdb__browser_info____Compare____caller_params_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3505 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3507 "mdb.browser_info.c"
  }
#line 3509 "mdb.browser_info.c"
}

#line 3512 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____debugger_0_0_10001(
#line 3515 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3517 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3519 "mdb.browser_info.c"
{
#line 3521 "mdb.browser_info.c"
  {
#line 3523 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3526 "mdb.browser_info.c"
    {
#line 3528 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____debugger_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3531 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3533 "mdb.browser_info.c"
  }
#line 3535 "mdb.browser_info.c"
}

#line 3538 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____debugger_0_0_10001(
#line 3541 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3543 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3545 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3547 "mdb.browser_info.c"
{
#line 3549 "mdb.browser_info.c"
  {
#line 3551 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3554 "mdb.browser_info.c"
    {
#line 3556 "mdb.browser_info.c"
      mdb__browser_info____Compare____debugger_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3559 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3561 "mdb.browser_info.c"
  }
#line 3563 "mdb.browser_info.c"
}

#line 3566 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____dir_0_0_10001(
#line 3569 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3571 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3573 "mdb.browser_info.c"
{
#line 3575 "mdb.browser_info.c"
  {
#line 3577 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3580 "mdb.browser_info.c"
    {
#line 3582 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____dir_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3585 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3587 "mdb.browser_info.c"
  }
#line 3589 "mdb.browser_info.c"
}

#line 3592 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____dir_0_0_10001(
#line 3595 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3597 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3599 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3601 "mdb.browser_info.c"
{
#line 3603 "mdb.browser_info.c"
  {
#line 3605 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3608 "mdb.browser_info.c"
    {
#line 3610 "mdb.browser_info.c"
      mdb__browser_info____Compare____dir_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3613 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3615 "mdb.browser_info.c"
  }
#line 3617 "mdb.browser_info.c"
}

#line 3620 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____format_params_0_0_10001(
#line 3623 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3625 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3627 "mdb.browser_info.c"
{
#line 3629 "mdb.browser_info.c"
  {
#line 3631 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3634 "mdb.browser_info.c"
    {
#line 3636 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3639 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3641 "mdb.browser_info.c"
  }
#line 3643 "mdb.browser_info.c"
}

#line 3646 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____format_params_0_0_10001(
#line 3649 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3651 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3653 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3655 "mdb.browser_info.c"
{
#line 3657 "mdb.browser_info.c"
  {
#line 3659 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3662 "mdb.browser_info.c"
    {
#line 3664 "mdb.browser_info.c"
      mdb__browser_info____Compare____format_params_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3667 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3669 "mdb.browser_info.c"
  }
#line 3671 "mdb.browser_info.c"
}

#line 3674 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____how_track_subterm_0_0_10001(
#line 3677 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3679 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3681 "mdb.browser_info.c"
{
#line 3683 "mdb.browser_info.c"
  {
#line 3685 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3688 "mdb.browser_info.c"
    {
#line 3690 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____how_track_subterm_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3693 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3695 "mdb.browser_info.c"
  }
#line 3697 "mdb.browser_info.c"
}

#line 3700 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____how_track_subterm_0_0_10001(
#line 3703 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3705 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3707 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3709 "mdb.browser_info.c"
{
#line 3711 "mdb.browser_info.c"
  {
#line 3713 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3716 "mdb.browser_info.c"
    {
#line 3718 "mdb.browser_info.c"
      mdb__browser_info____Compare____how_track_subterm_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3721 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3723 "mdb.browser_info.c"
  }
#line 3725 "mdb.browser_info.c"
}

#line 3728 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____maybe_track_subterm_1_0_10001(
#line 3731 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3733 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3735 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3737 "mdb.browser_info.c"
{
#line 3739 "mdb.browser_info.c"
  {
#line 3741 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3744 "mdb.browser_info.c"
    {
#line 3746 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____maybe_track_subterm_1_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3749 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3751 "mdb.browser_info.c"
  }
#line 3753 "mdb.browser_info.c"
}

#line 3756 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____maybe_track_subterm_1_0_10001(
#line 3759 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3761 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_2,
#line 3763 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 3765 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_4)
#line 3767 "mdb.browser_info.c"
{
#line 3769 "mdb.browser_info.c"
  {
#line 3771 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3774 "mdb.browser_info.c"
    {
#line 3776 "mdb.browser_info.c"
      mdb__browser_info____Compare____maybe_track_subterm_1_0(((MR_Word) mdb__browser_info__wrapper_arg_1), &mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_3), ((MR_Word) mdb__browser_info__wrapper_arg_4));
    }
#line 3779 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_2 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3781 "mdb.browser_info.c"
  }
#line 3783 "mdb.browser_info.c"
}

#line 3786 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____param_cmd_0_0_10001(
#line 3789 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3791 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3793 "mdb.browser_info.c"
{
#line 3795 "mdb.browser_info.c"
  {
#line 3797 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3800 "mdb.browser_info.c"
    {
#line 3802 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____param_cmd_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3805 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3807 "mdb.browser_info.c"
  }
#line 3809 "mdb.browser_info.c"
}

#line 3812 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____param_cmd_0_0_10001(
#line 3815 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3817 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3819 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3821 "mdb.browser_info.c"
{
#line 3823 "mdb.browser_info.c"
  {
#line 3825 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3828 "mdb.browser_info.c"
    {
#line 3830 "mdb.browser_info.c"
      mdb__browser_info____Compare____param_cmd_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3833 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3835 "mdb.browser_info.c"
  }
#line 3837 "mdb.browser_info.c"
}

#line 3840 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____portray_format_0_0_10001(
#line 3843 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3845 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3847 "mdb.browser_info.c"
{
#line 3849 "mdb.browser_info.c"
  {
#line 3851 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3854 "mdb.browser_info.c"
    {
#line 3856 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____portray_format_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3859 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3861 "mdb.browser_info.c"
  }
#line 3863 "mdb.browser_info.c"
}

#line 3866 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____portray_format_0_0_10001(
#line 3869 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3871 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3873 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3875 "mdb.browser_info.c"
{
#line 3877 "mdb.browser_info.c"
  {
#line 3879 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3882 "mdb.browser_info.c"
    {
#line 3884 "mdb.browser_info.c"
      mdb__browser_info____Compare____portray_format_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3887 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3889 "mdb.browser_info.c"
  }
#line 3891 "mdb.browser_info.c"
}

#line 3894 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____setting_0_0_10001(
#line 3897 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3899 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3901 "mdb.browser_info.c"
{
#line 3903 "mdb.browser_info.c"
  {
#line 3905 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3908 "mdb.browser_info.c"
    {
#line 3910 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____setting_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3913 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3915 "mdb.browser_info.c"
  }
#line 3917 "mdb.browser_info.c"
}

#line 3920 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____setting_0_0_10001(
#line 3923 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3925 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3927 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3929 "mdb.browser_info.c"
{
#line 3931 "mdb.browser_info.c"
  {
#line 3933 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3936 "mdb.browser_info.c"
    {
#line 3938 "mdb.browser_info.c"
      mdb__browser_info____Compare____setting_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3941 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3943 "mdb.browser_info.c"
  }
#line 3945 "mdb.browser_info.c"
}

#line 3948 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____should_assert_invalid_0_0_10001(
#line 3951 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3953 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3955 "mdb.browser_info.c"
{
#line 3957 "mdb.browser_info.c"
  {
#line 3959 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3962 "mdb.browser_info.c"
    {
#line 3964 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____should_assert_invalid_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3967 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3969 "mdb.browser_info.c"
  }
#line 3971 "mdb.browser_info.c"
}

#line 3974 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____should_assert_invalid_0_0_10001(
#line 3977 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3979 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3981 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3983 "mdb.browser_info.c"
{
#line 3985 "mdb.browser_info.c"
  {
#line 3987 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3990 "mdb.browser_info.c"
    {
#line 3992 "mdb.browser_info.c"
      mdb__browser_info____Compare____should_assert_invalid_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3995 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3997 "mdb.browser_info.c"
  }
#line 3999 "mdb.browser_info.c"
}

#line 4002 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____term_browser_response_0_0_10001(
#line 4005 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4007 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 4009 "mdb.browser_info.c"
{
#line 4011 "mdb.browser_info.c"
  {
#line 4013 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 4016 "mdb.browser_info.c"
    {
#line 4018 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____term_browser_response_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 4021 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 4023 "mdb.browser_info.c"
  }
#line 4025 "mdb.browser_info.c"
}

#line 4028 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____term_browser_response_0_0_10001(
#line 4031 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 4033 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4035 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 4037 "mdb.browser_info.c"
{
#line 4039 "mdb.browser_info.c"
  {
#line 4041 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 4044 "mdb.browser_info.c"
    {
#line 4046 "mdb.browser_info.c"
      mdb__browser_info____Compare____term_browser_response_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 4049 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 4051 "mdb.browser_info.c"
  }
#line 4053 "mdb.browser_info.c"
}

#line 4056 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
#line 4059 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4061 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4063 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4065 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 4067 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4)
#line 4069 "mdb.browser_info.c"
{
#line 4071 "mdb.browser_info.c"
  {
#line 4073 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;

#line 4076 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4078 "mdb.browser_info.c"
    {
#line 4080 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Integer) mdb__browser_info__wrapper_arg_2));
    }
#line 4083 "mdb.browser_info.c"
  }
#line 4085 "mdb.browser_info.c"
}

#line 4088 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
#line 4091 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4093 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4095 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4097 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 4099 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4)
#line 4101 "mdb.browser_info.c"
{
#line 4103 "mdb.browser_info.c"
  {
#line 4105 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;

#line 4108 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4110 "mdb.browser_info.c"
    {
#line 4112 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_String) mdb__browser_info__wrapper_arg_2));
    }
#line 4115 "mdb.browser_info.c"
  }
#line 4117 "mdb.browser_info.c"
}

#line 4120 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
#line 4123 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4125 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4127 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_2,
#line 4129 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 4131 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4)
#line 4133 "mdb.browser_info.c"
{
#line 4135 "mdb.browser_info.c"
  {
#line 4137 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;
#line 4139 "mdb.browser_info.c"
    MR_String mdb__browser_info__conv0_HeadVar__2_2;

#line 4142 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4144 "mdb.browser_info.c"
    {
#line 4146 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1), &mdb__browser_info__conv0_HeadVar__2_2);
    }
#line 4149 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_2 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__2_2));
#line 4151 "mdb.browser_info.c"
  }
#line 4153 "mdb.browser_info.c"
}

#line 4156 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
#line 4159 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4161 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4163 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4165 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_3)
#line 4167 "mdb.browser_info.c"
{
#line 4169 "mdb.browser_info.c"
  {
#line 4171 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;

#line 4174 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4176 "mdb.browser_info.c"
    {
#line 4178 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1));
    }
#line 4181 "mdb.browser_info.c"
  }
#line 4183 "mdb.browser_info.c"
}

#line 1037 "browser_info.m"
static void MR_CALL 
mdb__browser_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(
#line 1037 "browser_info.m"
  MR_String * mdb__browser_info__HeadVar__2_2)
#line 1037 "browser_info.m"
{
#line 1037 "browser_info.m"
  {
#line 1037 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1037 "browser_info.m"
    *mdb__browser_info__HeadVar__2_2 = (MR_String) "debugger";
#line 1037 "browser_info.m"
  }
#line 1037 "browser_info.m"
}

#line 1051 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(
#line 1051 "browser_info.m"
  MR_Word mdb__browser_info__D_5,
#line 1051 "browser_info.m"
  MR_String mdb__browser_info__S_6)
#line 1051 "browser_info.m"
{
#line 1052 "browser_info.m"
  {
#line 1052 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1052 "browser_info.m"
    {
#line 1052 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__D_5, mdb__browser_info__S_6);
#line 1052 "browser_info.m"
      return;
    }
#line 1052 "browser_info.m"
  }
#line 1051 "browser_info.m"
}

#line 1057 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
#line 1057 "browser_info.m"
  MR_Word mdb__browser_info__D_5,
#line 1057 "browser_info.m"
  MR_Integer mdb__browser_info__I_6)
#line 1057 "browser_info.m"
{
#line 1058 "browser_info.m"
  {
#line 1058 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1058 "browser_info.m"
    {
#line 1058 "browser_info.m"
      mdb__browser_info__write_int_debugger_4_p_0(mdb__browser_info__D_5, mdb__browser_info__I_6);
#line 1058 "browser_info.m"
      return;
    }
#line 1058 "browser_info.m"
  }
#line 1057 "browser_info.m"
}

#line 1037 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0(
#line 1037 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_5,
#line 1037 "browser_info.m"
  MR_String * mdb__browser_info__HeadVar__2_2)
#line 1037 "browser_info.m"
{
#line 1037 "browser_info.m"
  {
#line 1037 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1037 "browser_info.m"
    {
#line 1037 "browser_info.m"
      mdb__browser_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(mdb__browser_info__HeadVar__2_2);
#line 1037 "browser_info.m"
      return;
    }
#line 1037 "browser_info.m"
  }
#line 1037 "browser_info.m"
}

#line 1041 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0(
#line 1041 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 1041 "browser_info.m"
{
#line 1041 "browser_info.m"
  {
#line 1041 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1041 "browser_info.m"
#line 1041 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 1041 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1041 "browser_info.m"
      case (MR_Integer) 1:
#line 1044 "browser_info.m"
        {
#line 1044 "browser_info.m"
        }
#line 1041 "browser_info.m"
        break;
#line 1041 "browser_info.m"
      case (MR_Integer) 0:
#line 1042 "browser_info.m"
        {
#line 1042 "browser_info.m"
          mercury__io__flush_output_2_p_0();
#line 1042 "browser_info.m"
          return;
        }
#line 1041 "browser_info.m"
        break;
#line 1041 "browser_info.m"
    }
#line 1041 "browser_info.m"
  }
#line 1041 "browser_info.m"
}

#line 278 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____term_browser_response_0_0(
#line 278 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 278 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 278 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 278 "browser_info.m"
{
#line 278 "browser_info.m"
  {
#line 278 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 278 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_24 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 278 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_25 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 278 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_24 == mdb__browser_info__CastY_25);
#line 278 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 4350 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "browser_info.m"
    else
#line 278 "browser_info.m"
#line 278 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) {
#line 278 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 278 "browser_info.m"
        case (MR_Integer) 0:
#line 278 "browser_info.m"
#line 278 "browser_info.m"
          switch (MR_unmkbody(mdb__browser_info__HeadVar__2_2)) {
#line 278 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 278 "browser_info.m"
            case (MR_Integer) 0:
#line 278 "browser_info.m"
#line 278 "browser_info.m"
              switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 278 "browser_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 278 "browser_info.m"
                case (MR_Integer) 0:
#line 278 "browser_info.m"
#line 278 "browser_info.m"
                  switch (MR_unmkbody(mdb__browser_info__HeadVar__3_3)) {
#line 278 "browser_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 278 "browser_info.m"
                    case (MR_Integer) 0:
#line 278 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "browser_info.m"
                      break;
#line 278 "browser_info.m"
                    case (MR_Integer) 1:
#line 278 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "browser_info.m"
                      break;
#line 278 "browser_info.m"
                    case (MR_Integer) 2:
#line 278 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "browser_info.m"
                      break;
#line 278 "browser_info.m"
                  }
#line 278 "browser_info.m"
                  break;
#line 278 "browser_info.m"
                case (MR_Integer) 1:
#line 4404 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "browser_info.m"
                  break;
#line 278 "browser_info.m"
                case (MR_Integer) 2:
#line 4410 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "browser_info.m"
                  break;
#line 278 "browser_info.m"
              }
#line 278 "browser_info.m"
              break;
#line 278 "browser_info.m"
            case (MR_Integer) 1:
#line 278 "browser_info.m"
#line 278 "browser_info.m"
              switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 278 "browser_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 278 "browser_info.m"
                case (MR_Integer) 0:
#line 278 "browser_info.m"
#line 278 "browser_info.m"
                  switch (MR_unmkbody(mdb__browser_info__HeadVar__3_3)) {
#line 278 "browser_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 278 "browser_info.m"
                    case (MR_Integer) 0:
#line 278 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "browser_info.m"
                      break;
#line 278 "browser_info.m"
                    case (MR_Integer) 1:
#line 278 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "browser_info.m"
                      break;
#line 278 "browser_info.m"
                    case (MR_Integer) 2:
#line 278 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "browser_info.m"
                      break;
#line 278 "browser_info.m"
                  }
#line 278 "browser_info.m"
                  break;
#line 278 "browser_info.m"
                case (MR_Integer) 1:
#line 4456 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "browser_info.m"
                  break;
#line 278 "browser_info.m"
                case (MR_Integer) 2:
#line 4462 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "browser_info.m"
                  break;
#line 278 "browser_info.m"
              }
#line 278 "browser_info.m"
              break;
#line 278 "browser_info.m"
            case (MR_Integer) 2:
#line 278 "browser_info.m"
#line 278 "browser_info.m"
              switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 278 "browser_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 278 "browser_info.m"
                case (MR_Integer) 0:
#line 278 "browser_info.m"
#line 278 "browser_info.m"
                  switch (MR_unmkbody(mdb__browser_info__HeadVar__3_3)) {
#line 278 "browser_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 278 "browser_info.m"
                    case (MR_Integer) 0:
#line 278 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "browser_info.m"
                      break;
#line 278 "browser_info.m"
                    case (MR_Integer) 1:
#line 278 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "browser_info.m"
                      break;
#line 278 "browser_info.m"
                    case (MR_Integer) 2:
#line 278 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "browser_info.m"
                      break;
#line 278 "browser_info.m"
                  }
#line 278 "browser_info.m"
                  break;
#line 278 "browser_info.m"
                case (MR_Integer) 1:
#line 4508 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "browser_info.m"
                  break;
#line 278 "browser_info.m"
                case (MR_Integer) 2:
#line 4514 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "browser_info.m"
                  break;
#line 278 "browser_info.m"
              }
#line 278 "browser_info.m"
              break;
#line 278 "browser_info.m"
          }
#line 278 "browser_info.m"
          break;
#line 278 "browser_info.m"
        case (MR_Integer) 1:
#line 278 "browser_info.m"
          {
#line 278 "browser_info.m"
            MR_String mdb__browser_info__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 278 "browser_info.m"
#line 278 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 278 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 278 "browser_info.m"
              case (MR_Integer) 0:
#line 278 "browser_info.m"
#line 278 "browser_info.m"
                switch (MR_unmkbody(mdb__browser_info__HeadVar__3_3)) {
#line 278 "browser_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 278 "browser_info.m"
                  case (MR_Integer) 0:
#line 4547 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "browser_info.m"
                    break;
#line 278 "browser_info.m"
                  case (MR_Integer) 1:
#line 4553 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "browser_info.m"
                    break;
#line 278 "browser_info.m"
                  case (MR_Integer) 2:
#line 4559 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "browser_info.m"
                    break;
#line 278 "browser_info.m"
                }
#line 278 "browser_info.m"
                break;
#line 278 "browser_info.m"
              case (MR_Integer) 1:
#line 278 "browser_info.m"
                {
#line 278 "browser_info.m"
                  MR_String mdb__browser_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 278 "browser_info.m"
                  {
#line 278 "browser_info.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_29_29, mdb__browser_info__V_5_5);
#line 278 "browser_info.m"
                    return;
                  }
#line 278 "browser_info.m"
                }
#line 278 "browser_info.m"
                break;
#line 278 "browser_info.m"
              case (MR_Integer) 2:
#line 4587 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "browser_info.m"
                break;
#line 278 "browser_info.m"
            }
#line 278 "browser_info.m"
          }
#line 278 "browser_info.m"
          break;
#line 278 "browser_info.m"
        case (MR_Integer) 2:
#line 278 "browser_info.m"
          {
#line 278 "browser_info.m"
            MR_Integer mdb__browser_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 278 "browser_info.m"
#line 278 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 278 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 278 "browser_info.m"
              case (MR_Integer) 0:
#line 278 "browser_info.m"
#line 278 "browser_info.m"
                switch (MR_unmkbody(mdb__browser_info__HeadVar__3_3)) {
#line 278 "browser_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 278 "browser_info.m"
                  case (MR_Integer) 0:
#line 4618 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "browser_info.m"
                    break;
#line 278 "browser_info.m"
                  case (MR_Integer) 1:
#line 4624 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "browser_info.m"
                    break;
#line 278 "browser_info.m"
                  case (MR_Integer) 2:
#line 4630 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 278 "browser_info.m"
                    break;
#line 278 "browser_info.m"
                }
#line 278 "browser_info.m"
                break;
#line 278 "browser_info.m"
              case (MR_Integer) 1:
#line 4640 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 278 "browser_info.m"
                break;
#line 278 "browser_info.m"
              case (MR_Integer) 2:
#line 278 "browser_info.m"
                {
#line 278 "browser_info.m"
                  MR_Integer mdb__browser_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 278 "browser_info.m"
                  {
#line 278 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_28_28, mdb__browser_info__V_14_14);
#line 278 "browser_info.m"
                    return;
                  }
#line 278 "browser_info.m"
                }
#line 278 "browser_info.m"
                break;
#line 278 "browser_info.m"
            }
#line 278 "browser_info.m"
          }
#line 278 "browser_info.m"
          break;
#line 278 "browser_info.m"
      }
#line 278 "browser_info.m"
  }
#line 278 "browser_info.m"
}

#line 278 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____term_browser_response_0_0(
#line 278 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 278 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 278 "browser_info.m"
{
#line 278 "browser_info.m"
  {
#line 278 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 278 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_13 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 278 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_14 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 278 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_13 == mdb__browser_info__CastY_14);
#line 278 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 278 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 278 "browser_info.m"
    else
#line 278 "browser_info.m"
#line 278 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) {
#line 278 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 278 "browser_info.m"
        case (MR_Integer) 0:
#line 278 "browser_info.m"
#line 278 "browser_info.m"
          switch (MR_unmkbody(mdb__browser_info__HeadVar__1_1)) {
#line 278 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 278 "browser_info.m"
            case (MR_Integer) 0:
#line 278 "browser_info.m"
              {
#line 278 "browser_info.m"
                MR_Integer mdb__browser_info__CastX_7 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 278 "browser_info.m"
                MR_Integer mdb__browser_info__CastY_8 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 278 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__CastY_8 == mdb__browser_info__CastX_7);
#line 278 "browser_info.m"
              }
#line 278 "browser_info.m"
              break;
#line 278 "browser_info.m"
            case (MR_Integer) 1:
#line 278 "browser_info.m"
              {
#line 278 "browser_info.m"
                MR_Integer mdb__browser_info__CastX_9 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 278 "browser_info.m"
                MR_Integer mdb__browser_info__CastY_10 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 278 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__CastY_10 == mdb__browser_info__CastX_9);
#line 278 "browser_info.m"
              }
#line 278 "browser_info.m"
              break;
#line 278 "browser_info.m"
            case (MR_Integer) 2:
#line 278 "browser_info.m"
              {
#line 278 "browser_info.m"
                MR_Integer mdb__browser_info__CastX_11 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 278 "browser_info.m"
                MR_Integer mdb__browser_info__CastY_12 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 278 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__CastY_12 == mdb__browser_info__CastX_11);
#line 278 "browser_info.m"
              }
#line 278 "browser_info.m"
              break;
#line 278 "browser_info.m"
          }
#line 278 "browser_info.m"
          break;
#line 278 "browser_info.m"
        case (MR_Integer) 1:
#line 278 "browser_info.m"
          {
#line 278 "browser_info.m"
            MR_String mdb__browser_info__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 278 "browser_info.m"
            MR_String mdb__browser_info__V_4_4;

#line 278 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 278 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 278 "browser_info.m"
              {
#line 278 "browser_info.m"
                mdb__browser_info__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 4779 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (strcmp(mdb__browser_info__V_3_3, mdb__browser_info__V_4_4) == 0);
#line 278 "browser_info.m"
              }
#line 278 "browser_info.m"
          }
#line 278 "browser_info.m"
          break;
#line 278 "browser_info.m"
        case (MR_Integer) 2:
#line 278 "browser_info.m"
          {
#line 278 "browser_info.m"
            MR_Integer mdb__browser_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 278 "browser_info.m"
            MR_Integer mdb__browser_info__V_6_6;

#line 278 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 278 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 278 "browser_info.m"
              {
#line 278 "browser_info.m"
                mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 4804 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_6_6);
#line 278 "browser_info.m"
              }
#line 278 "browser_info.m"
          }
#line 278 "browser_info.m"
          break;
#line 278 "browser_info.m"
      }
#line 278 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 278 "browser_info.m"
  }
#line 278 "browser_info.m"
}

#line 74 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____should_assert_invalid_0_0(
#line 74 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 74 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 74 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 74 "browser_info.m"
{
#line 74 "browser_info.m"
  {
#line 74 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 74 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 74 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 74 "browser_info.m"
    {
#line 74 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
#line 74 "browser_info.m"
      return;
    }
#line 74 "browser_info.m"
  }
#line 74 "browser_info.m"
}

#line 74 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____should_assert_invalid_0_0(
#line 74 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 74 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 74 "browser_info.m"
{
#line 4862 "mdb.browser_info.c"
  {
#line 4864 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 4867 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 4869 "mdb.browser_info.c"
  }
#line 74 "browser_info.m"
}

#line 148 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____setting_0_0(
#line 148 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 148 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 148 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 148 "browser_info.m"
{
#line 148 "browser_info.m"
  {
#line 148 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 148 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_54 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 148 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_55 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 148 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_54 == mdb__browser_info__CastY_55);
#line 148 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 4898 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 148 "browser_info.m"
    else
#line 148 "browser_info.m"
#line 148 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) {
#line 148 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 148 "browser_info.m"
        case (MR_Integer) 0:
#line 148 "browser_info.m"
          {
#line 148 "browser_info.m"
            MR_Integer mdb__browser_info__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 148 "browser_info.m"
#line 148 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 148 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 148 "browser_info.m"
              case (MR_Integer) 0:
#line 148 "browser_info.m"
                {
#line 148 "browser_info.m"
                  MR_Integer mdb__browser_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 148 "browser_info.m"
                  {
#line 148 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_61_61, mdb__browser_info__V_5_5);
#line 148 "browser_info.m"
                    return;
                  }
#line 148 "browser_info.m"
                }
#line 148 "browser_info.m"
                break;
#line 148 "browser_info.m"
              case (MR_Integer) 1:
#line 4939 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "browser_info.m"
                break;
#line 148 "browser_info.m"
              case (MR_Integer) 2:
#line 4945 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "browser_info.m"
                break;
#line 148 "browser_info.m"
              case (MR_Integer) 3:
#line 148 "browser_info.m"
#line 148 "browser_info.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 148 "browser_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 148 "browser_info.m"
                  case (MR_Integer) 0:
#line 4958 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "browser_info.m"
                    break;
#line 148 "browser_info.m"
                  case (MR_Integer) 1:
#line 4964 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "browser_info.m"
                    break;
#line 148 "browser_info.m"
                }
#line 148 "browser_info.m"
                break;
#line 148 "browser_info.m"
            }
#line 148 "browser_info.m"
          }
#line 148 "browser_info.m"
          break;
#line 148 "browser_info.m"
        case (MR_Integer) 1:
#line 148 "browser_info.m"
          {
#line 148 "browser_info.m"
            MR_Integer mdb__browser_info__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 148 "browser_info.m"
#line 148 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 148 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 148 "browser_info.m"
              case (MR_Integer) 0:
#line 4992 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "browser_info.m"
                break;
#line 148 "browser_info.m"
              case (MR_Integer) 1:
#line 148 "browser_info.m"
                {
#line 148 "browser_info.m"
                  MR_Integer mdb__browser_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 148 "browser_info.m"
                  {
#line 148 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_64_64, mdb__browser_info__V_17_17);
#line 148 "browser_info.m"
                    return;
                  }
#line 148 "browser_info.m"
                }
#line 148 "browser_info.m"
                break;
#line 148 "browser_info.m"
              case (MR_Integer) 2:
#line 5016 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "browser_info.m"
                break;
#line 148 "browser_info.m"
              case (MR_Integer) 3:
#line 148 "browser_info.m"
#line 148 "browser_info.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 148 "browser_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 148 "browser_info.m"
                  case (MR_Integer) 0:
#line 5029 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "browser_info.m"
                    break;
#line 148 "browser_info.m"
                  case (MR_Integer) 1:
#line 5035 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "browser_info.m"
                    break;
#line 148 "browser_info.m"
                }
#line 148 "browser_info.m"
                break;
#line 148 "browser_info.m"
            }
#line 148 "browser_info.m"
          }
#line 148 "browser_info.m"
          break;
#line 148 "browser_info.m"
        case (MR_Integer) 2:
#line 148 "browser_info.m"
          {
#line 148 "browser_info.m"
            MR_Integer mdb__browser_info__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 148 "browser_info.m"
#line 148 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 148 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 148 "browser_info.m"
              case (MR_Integer) 0:
#line 5063 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "browser_info.m"
                break;
#line 148 "browser_info.m"
              case (MR_Integer) 1:
#line 5069 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "browser_info.m"
                break;
#line 148 "browser_info.m"
              case (MR_Integer) 2:
#line 148 "browser_info.m"
                {
#line 148 "browser_info.m"
                  MR_Integer mdb__browser_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 148 "browser_info.m"
                  {
#line 148 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_65_65, mdb__browser_info__V_29_29);
#line 148 "browser_info.m"
                    return;
                  }
#line 148 "browser_info.m"
                }
#line 148 "browser_info.m"
                break;
#line 148 "browser_info.m"
              case (MR_Integer) 3:
#line 148 "browser_info.m"
#line 148 "browser_info.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 148 "browser_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 148 "browser_info.m"
                  case (MR_Integer) 0:
#line 5100 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "browser_info.m"
                    break;
#line 148 "browser_info.m"
                  case (MR_Integer) 1:
#line 5106 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "browser_info.m"
                    break;
#line 148 "browser_info.m"
                }
#line 148 "browser_info.m"
                break;
#line 148 "browser_info.m"
            }
#line 148 "browser_info.m"
          }
#line 148 "browser_info.m"
          break;
#line 148 "browser_info.m"
        case (MR_Integer) 3:
#line 148 "browser_info.m"
#line 148 "browser_info.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) {
#line 148 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 148 "browser_info.m"
            case (MR_Integer) 0:
#line 148 "browser_info.m"
              {
#line 148 "browser_info.m"
                MR_Integer mdb__browser_info__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));

#line 148 "browser_info.m"
#line 148 "browser_info.m"
                switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 148 "browser_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 148 "browser_info.m"
                  case (MR_Integer) 0:
#line 5141 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "browser_info.m"
                    break;
#line 148 "browser_info.m"
                  case (MR_Integer) 1:
#line 5147 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "browser_info.m"
                    break;
#line 148 "browser_info.m"
                  case (MR_Integer) 2:
#line 5153 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "browser_info.m"
                    break;
#line 148 "browser_info.m"
                  case (MR_Integer) 3:
#line 148 "browser_info.m"
#line 148 "browser_info.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 148 "browser_info.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 148 "browser_info.m"
                      case (MR_Integer) 0:
#line 148 "browser_info.m"
                        {
#line 148 "browser_info.m"
                          MR_Integer mdb__browser_info__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));

#line 148 "browser_info.m"
                          {
#line 148 "browser_info.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_63_63, mdb__browser_info__V_41_41);
#line 148 "browser_info.m"
                            return;
                          }
#line 148 "browser_info.m"
                        }
#line 148 "browser_info.m"
                        break;
#line 148 "browser_info.m"
                      case (MR_Integer) 1:
#line 5184 "mdb.browser_info.c"
                        *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "browser_info.m"
                        break;
#line 148 "browser_info.m"
                    }
#line 148 "browser_info.m"
                    break;
#line 148 "browser_info.m"
                }
#line 148 "browser_info.m"
              }
#line 148 "browser_info.m"
              break;
#line 148 "browser_info.m"
            case (MR_Integer) 1:
#line 148 "browser_info.m"
              {
#line 148 "browser_info.m"
                MR_Word mdb__browser_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));

#line 148 "browser_info.m"
#line 148 "browser_info.m"
                switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 148 "browser_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 148 "browser_info.m"
                  case (MR_Integer) 0:
#line 5212 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "browser_info.m"
                    break;
#line 148 "browser_info.m"
                  case (MR_Integer) 1:
#line 5218 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "browser_info.m"
                    break;
#line 148 "browser_info.m"
                  case (MR_Integer) 2:
#line 5224 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "browser_info.m"
                    break;
#line 148 "browser_info.m"
                  case (MR_Integer) 3:
#line 148 "browser_info.m"
#line 148 "browser_info.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 148 "browser_info.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 148 "browser_info.m"
                      case (MR_Integer) 0:
#line 5237 "mdb.browser_info.c"
                        *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "browser_info.m"
                        break;
#line 148 "browser_info.m"
                      case (MR_Integer) 1:
#line 148 "browser_info.m"
                        {
#line 148 "browser_info.m"
                          MR_Word mdb__browser_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 148 "browser_info.m"
                          MR_Integer mdb__browser_info__V_66_66 = (MR_Integer) mdb__browser_info__V_62_62;
#line 148 "browser_info.m"
                          MR_Integer mdb__browser_info__V_67_67 = (MR_Integer) mdb__browser_info__V_53_53;

#line 148 "browser_info.m"
                          {
#line 148 "browser_info.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_66_66, mdb__browser_info__V_67_67);
#line 148 "browser_info.m"
                            return;
                          }
#line 148 "browser_info.m"
                        }
#line 148 "browser_info.m"
                        break;
#line 148 "browser_info.m"
                    }
#line 148 "browser_info.m"
                    break;
#line 148 "browser_info.m"
                }
#line 148 "browser_info.m"
              }
#line 148 "browser_info.m"
              break;
#line 148 "browser_info.m"
          }
#line 148 "browser_info.m"
          break;
#line 148 "browser_info.m"
      }
#line 148 "browser_info.m"
  }
#line 148 "browser_info.m"
}

#line 148 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____setting_0_0(
#line 148 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 148 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 148 "browser_info.m"
{
#line 148 "browser_info.m"
  {
#line 148 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 148 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_13 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 148 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_14 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 148 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_13 == mdb__browser_info__CastY_14);
#line 148 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 148 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 148 "browser_info.m"
    else
#line 148 "browser_info.m"
#line 148 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) {
#line 148 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 148 "browser_info.m"
        case (MR_Integer) 0:
#line 148 "browser_info.m"
          {
#line 148 "browser_info.m"
            MR_Integer mdb__browser_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "browser_info.m"
            MR_Integer mdb__browser_info__V_4_4;

#line 148 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 148 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 148 "browser_info.m"
              {
#line 148 "browser_info.m"
                mdb__browser_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 5332 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_3_3 == mdb__browser_info__V_4_4);
#line 148 "browser_info.m"
              }
#line 148 "browser_info.m"
          }
#line 148 "browser_info.m"
          break;
#line 148 "browser_info.m"
        case (MR_Integer) 1:
#line 148 "browser_info.m"
          {
#line 148 "browser_info.m"
            MR_Integer mdb__browser_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "browser_info.m"
            MR_Integer mdb__browser_info__V_6_6;

#line 148 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 148 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 148 "browser_info.m"
              {
#line 148 "browser_info.m"
                mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 5357 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_6_6);
#line 148 "browser_info.m"
              }
#line 148 "browser_info.m"
          }
#line 148 "browser_info.m"
          break;
#line 148 "browser_info.m"
        case (MR_Integer) 2:
#line 148 "browser_info.m"
          {
#line 148 "browser_info.m"
            MR_Integer mdb__browser_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "browser_info.m"
            MR_Integer mdb__browser_info__V_8_8;

#line 148 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 148 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 148 "browser_info.m"
              {
#line 148 "browser_info.m"
                mdb__browser_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 5382 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_7_7 == mdb__browser_info__V_8_8);
#line 148 "browser_info.m"
              }
#line 148 "browser_info.m"
          }
#line 148 "browser_info.m"
          break;
#line 148 "browser_info.m"
        case (MR_Integer) 3:
#line 148 "browser_info.m"
#line 148 "browser_info.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)))) {
#line 148 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 148 "browser_info.m"
            case (MR_Integer) 0:
#line 148 "browser_info.m"
              {
#line 148 "browser_info.m"
                MR_Integer mdb__browser_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "browser_info.m"
                MR_Integer mdb__browser_info__V_10_10;

#line 148 "browser_info.m"
                mdb__browser_info__succeeded = ((((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 148 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 148 "browser_info.m"
                  {
#line 148 "browser_info.m"
                    mdb__browser_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 5414 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_9_9 == mdb__browser_info__V_10_10);
#line 148 "browser_info.m"
                  }
#line 148 "browser_info.m"
              }
#line 148 "browser_info.m"
              break;
#line 148 "browser_info.m"
            case (MR_Integer) 1:
#line 148 "browser_info.m"
              {
#line 148 "browser_info.m"
                MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "browser_info.m"
                MR_Word mdb__browser_info__V_12_12;

#line 148 "browser_info.m"
                mdb__browser_info__succeeded = ((((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 148 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 148 "browser_info.m"
                  {
#line 148 "browser_info.m"
                    mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 5439 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_11_11 == mdb__browser_info__V_12_12);
#line 148 "browser_info.m"
                  }
#line 148 "browser_info.m"
              }
#line 148 "browser_info.m"
              break;
#line 148 "browser_info.m"
          }
#line 148 "browser_info.m"
          break;
#line 148 "browser_info.m"
      }
#line 148 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 148 "browser_info.m"
  }
#line 148 "browser_info.m"
}

#line 132 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____portray_format_0_0(
#line 132 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 132 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 132 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 132 "browser_info.m"
{
#line 132 "browser_info.m"
  {
#line 132 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 132 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 132 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 132 "browser_info.m"
    {
#line 132 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
#line 132 "browser_info.m"
      return;
    }
#line 132 "browser_info.m"
  }
#line 132 "browser_info.m"
}

#line 132 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____portray_format_0_0(
#line 132 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 132 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 132 "browser_info.m"
{
#line 5501 "mdb.browser_info.c"
  {
#line 5503 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 5506 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 5508 "mdb.browser_info.c"
  }
#line 132 "browser_info.m"
}

#line 252 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____param_cmd_0_0(
#line 252 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 252 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 252 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 252 "browser_info.m"
{
#line 252 "browser_info.m"
  {
#line 252 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 252 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_46 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 252 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_47 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 252 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_46 == mdb__browser_info__CastY_47);
#line 252 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 5537 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 252 "browser_info.m"
    else
#line 252 "browser_info.m"
#line 252 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) {
#line 252 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 252 "browser_info.m"
        case (MR_Integer) 0:
#line 252 "browser_info.m"
#line 252 "browser_info.m"
          switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 252 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 252 "browser_info.m"
            case (MR_Integer) 0:
#line 252 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 252 "browser_info.m"
              break;
#line 252 "browser_info.m"
            case (MR_Integer) 1:
#line 5561 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 252 "browser_info.m"
              break;
#line 252 "browser_info.m"
            case (MR_Integer) 2:
#line 5567 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 252 "browser_info.m"
              break;
#line 252 "browser_info.m"
            case (MR_Integer) 3:
#line 5573 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 252 "browser_info.m"
              break;
#line 252 "browser_info.m"
          }
#line 252 "browser_info.m"
          break;
#line 252 "browser_info.m"
        case (MR_Integer) 1:
#line 252 "browser_info.m"
          {
#line 252 "browser_info.m"
            MR_Word mdb__browser_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 252 "browser_info.m"
            MR_Word mdb__browser_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 252 "browser_info.m"
#line 252 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 252 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 252 "browser_info.m"
              case (MR_Integer) 0:
#line 5597 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 252 "browser_info.m"
                break;
#line 252 "browser_info.m"
              case (MR_Integer) 1:
#line 252 "browser_info.m"
                {
#line 252 "browser_info.m"
                  MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));
#line 252 "browser_info.m"
                  MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 252 "browser_info.m"
                  MR_Word mdb__browser_info__V_8_8;

#line 252 "browser_info.m"
                  {
#line 252 "browser_info.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[5], &mdb__browser_info__V_8_8, ((MR_Box) (mdb__browser_info__V_54_54)), ((MR_Box) (mdb__browser_info__V_6_6)));
                  }
#line 5617 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = (mdb__browser_info__V_8_8 == (MR_Integer) 0);
#line 252 "browser_info.m"
                  mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 252 "browser_info.m"
                  if (mdb__browser_info__succeeded)
#line 252 "browser_info.m"
                    *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_8_8;
#line 252 "browser_info.m"
                  else
#line 252 "browser_info.m"
                    {
#line 252 "browser_info.m"
                      mdb__browser_info____Compare____setting_0_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_53_53, mdb__browser_info__V_7_7);
#line 252 "browser_info.m"
                      return;
                    }
#line 252 "browser_info.m"
                }
#line 252 "browser_info.m"
                break;
#line 252 "browser_info.m"
              case (MR_Integer) 2:
#line 5640 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 252 "browser_info.m"
                break;
#line 252 "browser_info.m"
              case (MR_Integer) 3:
#line 5646 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 252 "browser_info.m"
                break;
#line 252 "browser_info.m"
            }
#line 252 "browser_info.m"
          }
#line 252 "browser_info.m"
          break;
#line 252 "browser_info.m"
        case (MR_Integer) 2:
#line 252 "browser_info.m"
          {
#line 252 "browser_info.m"
            MR_Word mdb__browser_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 252 "browser_info.m"
            MR_Word mdb__browser_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 252 "browser_info.m"
#line 252 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 252 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 252 "browser_info.m"
              case (MR_Integer) 0:
#line 5672 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 252 "browser_info.m"
                break;
#line 252 "browser_info.m"
              case (MR_Integer) 1:
#line 5678 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 252 "browser_info.m"
                break;
#line 252 "browser_info.m"
              case (MR_Integer) 2:
#line 252 "browser_info.m"
                {
#line 252 "browser_info.m"
                  MR_Word mdb__browser_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));
#line 252 "browser_info.m"
                  MR_Word mdb__browser_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 252 "browser_info.m"
                  MR_Word mdb__browser_info__V_26_26;

#line 252 "browser_info.m"
                  {
#line 252 "browser_info.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[5], &mdb__browser_info__V_26_26, ((MR_Box) (mdb__browser_info__V_56_56)), ((MR_Box) (mdb__browser_info__V_24_24)));
                  }
#line 5698 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = (mdb__browser_info__V_26_26 == (MR_Integer) 0);
#line 252 "browser_info.m"
                  mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 252 "browser_info.m"
                  if (mdb__browser_info__succeeded)
#line 252 "browser_info.m"
                    *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_26_26;
#line 252 "browser_info.m"
                  else
#line 252 "browser_info.m"
                    {
#line 252 "browser_info.m"
                      mdb__browser_info____Compare____setting_0_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_55_55, mdb__browser_info__V_25_25);
#line 252 "browser_info.m"
                      return;
                    }
#line 252 "browser_info.m"
                }
#line 252 "browser_info.m"
                break;
#line 252 "browser_info.m"
              case (MR_Integer) 3:
#line 5721 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 252 "browser_info.m"
                break;
#line 252 "browser_info.m"
            }
#line 252 "browser_info.m"
          }
#line 252 "browser_info.m"
          break;
#line 252 "browser_info.m"
        case (MR_Integer) 3:
#line 252 "browser_info.m"
          {
#line 252 "browser_info.m"
            MR_Integer mdb__browser_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 252 "browser_info.m"
#line 252 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 252 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 252 "browser_info.m"
              case (MR_Integer) 0:
#line 5745 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 252 "browser_info.m"
                break;
#line 252 "browser_info.m"
              case (MR_Integer) 1:
#line 5751 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 252 "browser_info.m"
                break;
#line 252 "browser_info.m"
              case (MR_Integer) 2:
#line 5757 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 252 "browser_info.m"
                break;
#line 252 "browser_info.m"
              case (MR_Integer) 3:
#line 252 "browser_info.m"
                {
#line 252 "browser_info.m"
                  MR_Integer mdb__browser_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 252 "browser_info.m"
                  {
#line 252 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_57_57, mdb__browser_info__V_39_39);
#line 252 "browser_info.m"
                    return;
                  }
#line 252 "browser_info.m"
                }
#line 252 "browser_info.m"
                break;
#line 252 "browser_info.m"
            }
#line 252 "browser_info.m"
          }
#line 252 "browser_info.m"
          break;
#line 252 "browser_info.m"
      }
#line 252 "browser_info.m"
  }
#line 252 "browser_info.m"
}

#line 252 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____param_cmd_0_0(
#line 252 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 252 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 252 "browser_info.m"
{
#line 252 "browser_info.m"
  {
#line 252 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 252 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_15 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 252 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_16 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 252 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_15 == mdb__browser_info__CastY_16);
#line 252 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 252 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 252 "browser_info.m"
    else
#line 252 "browser_info.m"
#line 252 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) {
#line 252 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 252 "browser_info.m"
        case (MR_Integer) 0:
#line 252 "browser_info.m"
          {
#line 252 "browser_info.m"
            MR_Integer mdb__browser_info__CastX_13 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 252 "browser_info.m"
            MR_Integer mdb__browser_info__CastY_14 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 252 "browser_info.m"
            mdb__browser_info__succeeded = (mdb__browser_info__CastY_14 == mdb__browser_info__CastX_13);
#line 252 "browser_info.m"
          }
#line 252 "browser_info.m"
          break;
#line 252 "browser_info.m"
        case (MR_Integer) 1:
#line 252 "browser_info.m"
          {
#line 252 "browser_info.m"
            MR_Word mdb__browser_info__TypeInfo_17_17;
#line 252 "browser_info.m"
            MR_Word mdb__browser_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "browser_info.m"
            MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 252 "browser_info.m"
            MR_Word mdb__browser_info__V_5_5;
#line 252 "browser_info.m"
            MR_Word mdb__browser_info__V_6_6;

#line 252 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 252 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 252 "browser_info.m"
              {
#line 252 "browser_info.m"
                mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 252 "browser_info.m"
                mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 5863 "mdb.browser_info.c"
                mdb__browser_info__TypeInfo_17_17 = (MR_Word) &mdb__browser_info_scalar_common_2[5];
#line 5865 "mdb.browser_info.c"
                {
#line 5867 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_17_17, ((MR_Box) (mdb__browser_info__V_3_3)), ((MR_Box) (mdb__browser_info__V_5_5)));
                }
#line 252 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 5872 "mdb.browser_info.c"
                  {
#line 5874 "mdb.browser_info.c"
                    return mdb__browser_info__succeeded = mdb__browser_info____Unify____setting_0_0(mdb__browser_info__V_4_4, mdb__browser_info__V_6_6);
                  }
#line 252 "browser_info.m"
              }
#line 252 "browser_info.m"
          }
#line 252 "browser_info.m"
          break;
#line 252 "browser_info.m"
        case (MR_Integer) 2:
#line 252 "browser_info.m"
          {
#line 252 "browser_info.m"
            MR_Word mdb__browser_info__TypeInfo_18_18;
#line 252 "browser_info.m"
            MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "browser_info.m"
            MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 252 "browser_info.m"
            MR_Word mdb__browser_info__V_9_9;
#line 252 "browser_info.m"
            MR_Word mdb__browser_info__V_10_10;

#line 252 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 252 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 252 "browser_info.m"
              {
#line 252 "browser_info.m"
                mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 252 "browser_info.m"
                mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 5908 "mdb.browser_info.c"
                mdb__browser_info__TypeInfo_18_18 = (MR_Word) &mdb__browser_info_scalar_common_2[5];
#line 5910 "mdb.browser_info.c"
                {
#line 5912 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_18_18, ((MR_Box) (mdb__browser_info__V_7_7)), ((MR_Box) (mdb__browser_info__V_9_9)));
                }
#line 252 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 5917 "mdb.browser_info.c"
                  {
#line 5919 "mdb.browser_info.c"
                    return mdb__browser_info__succeeded = mdb__browser_info____Unify____setting_0_0(mdb__browser_info__V_8_8, mdb__browser_info__V_10_10);
                  }
#line 252 "browser_info.m"
              }
#line 252 "browser_info.m"
          }
#line 252 "browser_info.m"
          break;
#line 252 "browser_info.m"
        case (MR_Integer) 3:
#line 252 "browser_info.m"
          {
#line 252 "browser_info.m"
            MR_Integer mdb__browser_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "browser_info.m"
            MR_Integer mdb__browser_info__V_12_12;

#line 252 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 252 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 252 "browser_info.m"
              {
#line 252 "browser_info.m"
                mdb__browser_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 5945 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_11_11 == mdb__browser_info__V_12_12);
#line 252 "browser_info.m"
              }
#line 252 "browser_info.m"
          }
#line 252 "browser_info.m"
          break;
#line 252 "browser_info.m"
      }
#line 252 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 252 "browser_info.m"
  }
#line 252 "browser_info.m"
}

#line 66 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____maybe_track_subterm_1_0(
#line 66 "browser_info.m"
  MR_Word mdb__browser_info__TypeInfo_for_P_20,
#line 66 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 66 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 66 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 66 "browser_info.m"
{
#line 66 "browser_info.m"
  {
#line 66 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 66 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_18 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 66 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_19 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 66 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_18 == mdb__browser_info__CastY_19);
#line 66 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 5988 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "browser_info.m"
    else
#line 66 "browser_info.m"
    if ((mdb__browser_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 66 "browser_info.m"
      if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 66 "browser_info.m"
        *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "browser_info.m"
      else
#line 6000 "mdb.browser_info.c"
        *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 66 "browser_info.m"
    else
#line 66 "browser_info.m"
      {
#line 66 "browser_info.m"
        MR_Box mdb__browser_info__V_23_23 = (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1));
#line 66 "browser_info.m"
        MR_Word mdb__browser_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 66 "browser_info.m"
        MR_Word mdb__browser_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 66 "browser_info.m"
        if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6015 "mdb.browser_info.c"
          *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 66 "browser_info.m"
        else
#line 66 "browser_info.m"
          {
#line 66 "browser_info.m"
            MR_Word mdb__browser_info__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 66 "browser_info.m"
            MR_Word mdb__browser_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 66 "browser_info.m"
            MR_Box mdb__browser_info__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1));
#line 66 "browser_info.m"
            MR_Word mdb__browser_info__V_16_16;
#line 66 "browser_info.m"
            MR_Integer mdb__browser_info__V_26_26 = (MR_Integer) mdb__browser_info__V_25_25;
#line 66 "browser_info.m"
            MR_Integer mdb__browser_info__V_27_27 = (MR_Integer) mdb__browser_info__V_13_13;

#line 66 "browser_info.m"
            {
#line 66 "browser_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_16_16, mdb__browser_info__V_26_26, mdb__browser_info__V_27_27);
            }
#line 6039 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_16_16 == (MR_Integer) 0);
#line 66 "browser_info.m"
            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 66 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 66 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_16_16;
#line 66 "browser_info.m"
            else
#line 66 "browser_info.m"
              {
#line 66 "browser_info.m"
                MR_Word mdb__browser_info__V_17_17;
#line 66 "browser_info.m"
                MR_Integer mdb__browser_info__V_28_28 = (MR_Integer) mdb__browser_info__V_24_24;
#line 66 "browser_info.m"
                MR_Integer mdb__browser_info__V_29_29 = (MR_Integer) mdb__browser_info__V_14_14;

#line 66 "browser_info.m"
                {
#line 66 "browser_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_17_17, mdb__browser_info__V_28_28, mdb__browser_info__V_29_29);
                }
#line 6063 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_17_17 == (MR_Integer) 0);
#line 66 "browser_info.m"
                mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 66 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 66 "browser_info.m"
                  *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_17_17;
#line 66 "browser_info.m"
                else
#line 66 "browser_info.m"
                  {
#line 66 "browser_info.m"
                    mercury__builtin__compare_3_p_0(mdb__browser_info__TypeInfo_for_P_20, mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_23_23, mdb__browser_info__V_15_15);
#line 66 "browser_info.m"
                    return;
                  }
#line 66 "browser_info.m"
              }
#line 66 "browser_info.m"
          }
#line 66 "browser_info.m"
      }
#line 66 "browser_info.m"
  }
#line 66 "browser_info.m"
}

#line 66 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____maybe_track_subterm_1_0(
#line 66 "browser_info.m"
  MR_Word mdb__browser_info__TypeInfo_for_P_13,
#line 66 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 66 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 66 "browser_info.m"
{
#line 66 "browser_info.m"
  {
#line 66 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 66 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_11 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 66 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_12 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 66 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_11 == mdb__browser_info__CastY_12);
#line 66 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 66 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 66 "browser_info.m"
    else
#line 66 "browser_info.m"
    if ((mdb__browser_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 66 "browser_info.m"
      {
#line 66 "browser_info.m"
        MR_Integer mdb__browser_info__CastX_3 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 66 "browser_info.m"
        MR_Integer mdb__browser_info__CastY_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 66 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__CastY_4 == mdb__browser_info__CastX_3);
#line 66 "browser_info.m"
      }
#line 66 "browser_info.m"
    else
#line 66 "browser_info.m"
      {
#line 66 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 66 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 66 "browser_info.m"
        MR_Box mdb__browser_info__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1));
#line 66 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8;
#line 66 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9;
#line 66 "browser_info.m"
        MR_Box mdb__browser_info__V_10_10;

#line 66 "browser_info.m"
        mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 66 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 66 "browser_info.m"
          {
#line 66 "browser_info.m"
            mdb__browser_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 66 "browser_info.m"
            mdb__browser_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 66 "browser_info.m"
            mdb__browser_info__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1));
#line 6161 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_8_8);
#line 66 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 66 "browser_info.m"
              {
#line 6167 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_6_6 == mdb__browser_info__V_9_9);
#line 66 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 6171 "mdb.browser_info.c"
                  {
#line 6173 "mdb.browser_info.c"
                    return mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_for_P_13, mdb__browser_info__V_7_7, mdb__browser_info__V_10_10);
                  }
#line 66 "browser_info.m"
              }
#line 66 "browser_info.m"
          }
#line 66 "browser_info.m"
      }
#line 66 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 66 "browser_info.m"
  }
#line 66 "browser_info.m"
}

#line 70 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____how_track_subterm_0_0(
#line 70 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 70 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 70 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 70 "browser_info.m"
{
#line 70 "browser_info.m"
  {
#line 70 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 70 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 70 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 70 "browser_info.m"
    {
#line 70 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
#line 70 "browser_info.m"
      return;
    }
#line 70 "browser_info.m"
  }
#line 70 "browser_info.m"
}

#line 70 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____how_track_subterm_0_0(
#line 70 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 70 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 70 "browser_info.m"
{
#line 6230 "mdb.browser_info.c"
  {
#line 6232 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 6235 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 6237 "mdb.browser_info.c"
  }
#line 70 "browser_info.m"
}

#line 140 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____format_params_0_0(
#line 140 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 140 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 140 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 140 "browser_info.m"
{
#line 140 "browser_info.m"
  {
#line 140 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 140 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_15 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 140 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_16 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 140 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_15 == mdb__browser_info__CastY_16);
#line 140 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 6266 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 140 "browser_info.m"
    else
#line 140 "browser_info.m"
      {
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 2)));
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 3)));
#line 140 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12;

#line 140 "browser_info.m"
        {
#line 140 "browser_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_12_12, mdb__browser_info__V_4_4, mdb__browser_info__V_8_8);
        }
#line 6296 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_12_12 == (MR_Integer) 0);
#line 140 "browser_info.m"
        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 140 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 140 "browser_info.m"
          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_12_12;
#line 140 "browser_info.m"
        else
#line 140 "browser_info.m"
          {
#line 140 "browser_info.m"
            MR_Word mdb__browser_info__V_13_13;

#line 140 "browser_info.m"
            {
#line 140 "browser_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_13_13, mdb__browser_info__V_5_5, mdb__browser_info__V_9_9);
            }
#line 6316 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_13_13 == (MR_Integer) 0);
#line 140 "browser_info.m"
            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 140 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 140 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_13_13;
#line 140 "browser_info.m"
            else
#line 140 "browser_info.m"
              {
#line 140 "browser_info.m"
                MR_Word mdb__browser_info__V_14_14;

#line 140 "browser_info.m"
                {
#line 140 "browser_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_14_14, mdb__browser_info__V_6_6, mdb__browser_info__V_10_10);
                }
#line 6336 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_14_14 == (MR_Integer) 0);
#line 140 "browser_info.m"
                mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 140 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 140 "browser_info.m"
                  *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_14_14;
#line 140 "browser_info.m"
                else
#line 140 "browser_info.m"
                  {
#line 140 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_7_7, mdb__browser_info__V_11_11);
#line 140 "browser_info.m"
                    return;
                  }
#line 140 "browser_info.m"
              }
#line 140 "browser_info.m"
          }
#line 140 "browser_info.m"
      }
#line 140 "browser_info.m"
  }
#line 140 "browser_info.m"
}

#line 140 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____format_params_0_0(
#line 140 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 140 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 140 "browser_info.m"
{
#line 140 "browser_info.m"
  {
#line 140 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 140 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_11 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 140 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_12 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 140 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_11 == mdb__browser_info__CastY_12);
#line 140 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 140 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 140 "browser_info.m"
    else
#line 140 "browser_info.m"
      {
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 140 "browser_info.m"
        MR_Integer mdb__browser_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));

#line 6409 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_3_3 == mdb__browser_info__V_7_7);
#line 140 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 140 "browser_info.m"
          {
#line 6415 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_4_4 == mdb__browser_info__V_8_8);
#line 140 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 140 "browser_info.m"
              {
#line 6421 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_9_9);
#line 140 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 6425 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = (mdb__browser_info__V_6_6 == mdb__browser_info__V_10_10);
#line 140 "browser_info.m"
              }
#line 140 "browser_info.m"
          }
#line 140 "browser_info.m"
      }
#line 140 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 140 "browser_info.m"
  }
#line 140 "browser_info.m"
}

#line 104 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____dir_0_0(
#line 104 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 104 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 104 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 104 "browser_info.m"
{
#line 104 "browser_info.m"
  {
#line 104 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 104 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_16 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 104 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_17 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 104 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_16 == mdb__browser_info__CastY_17);
#line 104 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 6464 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 104 "browser_info.m"
    else
#line 104 "browser_info.m"
#line 104 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) {
#line 104 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 104 "browser_info.m"
        case (MR_Integer) 0:
#line 104 "browser_info.m"
#line 104 "browser_info.m"
          switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 104 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 104 "browser_info.m"
            case (MR_Integer) 0:
#line 104 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 104 "browser_info.m"
              break;
#line 104 "browser_info.m"
            case (MR_Integer) 1:
#line 6488 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 104 "browser_info.m"
              break;
#line 104 "browser_info.m"
            case (MR_Integer) 2:
#line 6494 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 104 "browser_info.m"
              break;
#line 104 "browser_info.m"
          }
#line 104 "browser_info.m"
          break;
#line 104 "browser_info.m"
        case (MR_Integer) 1:
#line 104 "browser_info.m"
          {
#line 104 "browser_info.m"
            MR_Integer mdb__browser_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 104 "browser_info.m"
#line 104 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 104 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 104 "browser_info.m"
              case (MR_Integer) 0:
#line 6516 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 104 "browser_info.m"
                break;
#line 104 "browser_info.m"
              case (MR_Integer) 1:
#line 104 "browser_info.m"
                {
#line 104 "browser_info.m"
                  MR_Integer mdb__browser_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 104 "browser_info.m"
                  {
#line 104 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_21_21, mdb__browser_info__V_8_8);
#line 104 "browser_info.m"
                    return;
                  }
#line 104 "browser_info.m"
                }
#line 104 "browser_info.m"
                break;
#line 104 "browser_info.m"
              case (MR_Integer) 2:
#line 6540 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 104 "browser_info.m"
                break;
#line 104 "browser_info.m"
            }
#line 104 "browser_info.m"
          }
#line 104 "browser_info.m"
          break;
#line 104 "browser_info.m"
        case (MR_Integer) 2:
#line 104 "browser_info.m"
          {
#line 104 "browser_info.m"
            MR_String mdb__browser_info__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 104 "browser_info.m"
#line 104 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 104 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 104 "browser_info.m"
              case (MR_Integer) 0:
#line 6564 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 104 "browser_info.m"
                break;
#line 104 "browser_info.m"
              case (MR_Integer) 1:
#line 6570 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 104 "browser_info.m"
                break;
#line 104 "browser_info.m"
              case (MR_Integer) 2:
#line 104 "browser_info.m"
                {
#line 104 "browser_info.m"
                  MR_String mdb__browser_info__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 104 "browser_info.m"
                  {
#line 104 "browser_info.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_20_20, mdb__browser_info__V_15_15);
#line 104 "browser_info.m"
                    return;
                  }
#line 104 "browser_info.m"
                }
#line 104 "browser_info.m"
                break;
#line 104 "browser_info.m"
            }
#line 104 "browser_info.m"
          }
#line 104 "browser_info.m"
          break;
#line 104 "browser_info.m"
      }
#line 104 "browser_info.m"
  }
#line 104 "browser_info.m"
}

#line 104 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____dir_0_0(
#line 104 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 104 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 104 "browser_info.m"
{
#line 104 "browser_info.m"
  {
#line 104 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 104 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_9 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 104 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_10 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 104 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_9 == mdb__browser_info__CastY_10);
#line 104 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 104 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 104 "browser_info.m"
    else
#line 104 "browser_info.m"
#line 104 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) {
#line 104 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 104 "browser_info.m"
        case (MR_Integer) 0:
#line 104 "browser_info.m"
          {
#line 104 "browser_info.m"
            MR_Integer mdb__browser_info__CastX_3 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 104 "browser_info.m"
            MR_Integer mdb__browser_info__CastY_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 104 "browser_info.m"
            mdb__browser_info__succeeded = (mdb__browser_info__CastY_4 == mdb__browser_info__CastX_3);
#line 104 "browser_info.m"
          }
#line 104 "browser_info.m"
          break;
#line 104 "browser_info.m"
        case (MR_Integer) 1:
#line 104 "browser_info.m"
          {
#line 104 "browser_info.m"
            MR_Integer mdb__browser_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 104 "browser_info.m"
            MR_Integer mdb__browser_info__V_6_6;

#line 104 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 104 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 104 "browser_info.m"
              {
#line 104 "browser_info.m"
                mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 6668 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_6_6);
#line 104 "browser_info.m"
              }
#line 104 "browser_info.m"
          }
#line 104 "browser_info.m"
          break;
#line 104 "browser_info.m"
        case (MR_Integer) 2:
#line 104 "browser_info.m"
          {
#line 104 "browser_info.m"
            MR_String mdb__browser_info__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 104 "browser_info.m"
            MR_String mdb__browser_info__V_8_8;

#line 104 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 104 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 104 "browser_info.m"
              {
#line 104 "browser_info.m"
                mdb__browser_info__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 6693 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (strcmp(mdb__browser_info__V_7_7, mdb__browser_info__V_8_8) == 0);
#line 104 "browser_info.m"
              }
#line 104 "browser_info.m"
          }
#line 104 "browser_info.m"
          break;
#line 104 "browser_info.m"
      }
#line 104 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 104 "browser_info.m"
  }
#line 104 "browser_info.m"
}

#line 267 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____debugger_0_0(
#line 267 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 267 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 267 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 267 "browser_info.m"
{
#line 267 "browser_info.m"
  {
#line 267 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 267 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 267 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 267 "browser_info.m"
    {
#line 267 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
#line 267 "browser_info.m"
      return;
    }
#line 267 "browser_info.m"
  }
#line 267 "browser_info.m"
}

#line 267 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____debugger_0_0(
#line 267 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 267 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 267 "browser_info.m"
{
#line 6751 "mdb.browser_info.c"
  {
#line 6753 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 6756 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 6758 "mdb.browser_info.c"
  }
#line 267 "browser_info.m"
}

#line 565 "browser_info.m"
static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0(
#line 565 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 565 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 565 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 565 "browser_info.m"
{
#line 565 "browser_info.m"
  {
#line 565 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 565 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_18 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 565 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_19 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 565 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_18 == mdb__browser_info__CastY_19);
#line 565 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 6787 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 565 "browser_info.m"
    else
#line 565 "browser_info.m"
      {
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 2)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 3)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 4)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14;
#line 565 "browser_info.m"
        MR_Integer mdb__browser_info__V_25_25 = (MR_Integer) mdb__browser_info__V_4_4;
#line 565 "browser_info.m"
        MR_Integer mdb__browser_info__V_26_26 = (MR_Integer) mdb__browser_info__V_9_9;

#line 565 "browser_info.m"
        {
#line 565 "browser_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_14_14, mdb__browser_info__V_25_25, mdb__browser_info__V_26_26);
        }
#line 6825 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_14_14 == (MR_Integer) 0);
#line 565 "browser_info.m"
        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 565 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_14_14;
#line 565 "browser_info.m"
        else
#line 565 "browser_info.m"
          {
#line 565 "browser_info.m"
            MR_Word mdb__browser_info__V_15_15;

#line 565 "browser_info.m"
            {
#line 565 "browser_info.m"
              mdb__browser_info____Compare____format_params_0_0(&mdb__browser_info__V_15_15, mdb__browser_info__V_5_5, mdb__browser_info__V_10_10);
            }
#line 6845 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_15_15 == (MR_Integer) 0);
#line 565 "browser_info.m"
            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 565 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_15_15;
#line 565 "browser_info.m"
            else
#line 565 "browser_info.m"
              {
#line 565 "browser_info.m"
                MR_Word mdb__browser_info__V_16_16;

#line 565 "browser_info.m"
                {
#line 565 "browser_info.m"
                  mdb__browser_info____Compare____format_params_0_0(&mdb__browser_info__V_16_16, mdb__browser_info__V_6_6, mdb__browser_info__V_11_11);
                }
#line 6865 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_16_16 == (MR_Integer) 0);
#line 565 "browser_info.m"
                mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 565 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
                  *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_16_16;
#line 565 "browser_info.m"
                else
#line 565 "browser_info.m"
                  {
#line 565 "browser_info.m"
                    MR_Word mdb__browser_info__V_17_17;

#line 565 "browser_info.m"
                    {
#line 565 "browser_info.m"
                      mdb__browser_info____Compare____format_params_0_0(&mdb__browser_info__V_17_17, mdb__browser_info__V_7_7, mdb__browser_info__V_12_12);
                    }
#line 6885 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_17_17 == (MR_Integer) 0);
#line 565 "browser_info.m"
                    mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 565 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_17_17;
#line 565 "browser_info.m"
                    else
#line 565 "browser_info.m"
                      {
#line 565 "browser_info.m"
                        mdb__browser_info____Compare____format_params_0_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_8_8, mdb__browser_info__V_13_13);
#line 565 "browser_info.m"
                        return;
                      }
#line 565 "browser_info.m"
                  }
#line 565 "browser_info.m"
              }
#line 565 "browser_info.m"
          }
#line 565 "browser_info.m"
      }
#line 565 "browser_info.m"
  }
#line 565 "browser_info.m"
}

#line 565 "browser_info.m"
static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0(
#line 565 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 565 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 565 "browser_info.m"
{
#line 565 "browser_info.m"
  {
#line 565 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 565 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_13 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 565 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_14 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 565 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_13 == mdb__browser_info__CastY_14);
#line 565 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 565 "browser_info.m"
    else
#line 565 "browser_info.m"
      {
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 565 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));

#line 6964 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_3_3 == mdb__browser_info__V_8_8);
#line 565 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
          {
#line 6970 "mdb.browser_info.c"
            {
#line 6972 "mdb.browser_info.c"
              mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_4_4, mdb__browser_info__V_9_9);
            }
#line 565 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
              {
#line 6979 "mdb.browser_info.c"
                {
#line 6981 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_5_5, mdb__browser_info__V_10_10);
                }
#line 565 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
                  {
#line 6988 "mdb.browser_info.c"
                    {
#line 6990 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_6_6, mdb__browser_info__V_11_11);
                    }
#line 565 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 6995 "mdb.browser_info.c"
                      {
#line 6997 "mdb.browser_info.c"
                        return mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_7_7, mdb__browser_info__V_12_12);
                      }
#line 565 "browser_info.m"
                  }
#line 565 "browser_info.m"
              }
#line 565 "browser_info.m"
          }
#line 565 "browser_info.m"
      }
#line 565 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 565 "browser_info.m"
  }
#line 565 "browser_info.m"
}

#line 86 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browser_term_mode_0_0(
#line 86 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 86 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 86 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 86 "browser_info.m"
{
#line 86 "browser_info.m"
  {
#line 86 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 86 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 86 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 86 "browser_info.m"
    {
#line 86 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
#line 86 "browser_info.m"
      return;
    }
#line 86 "browser_info.m"
  }
#line 86 "browser_info.m"
}

#line 86 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browser_term_mode_0_0(
#line 86 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 86 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 86 "browser_info.m"
{
#line 7056 "mdb.browser_info.c"
  {
#line 7058 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 7061 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 7063 "mdb.browser_info.c"
  }
#line 86 "browser_info.m"
}

#line 551 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browser_persistent_state_0_0(
#line 551 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 551 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 551 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 551 "browser_info.m"
{
#line 551 "browser_info.m"
  {
#line 551 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 551 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_21 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 551 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_22 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 551 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_21 == mdb__browser_info__CastY_22);
#line 551 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 7092 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 551 "browser_info.m"
    else
#line 551 "browser_info.m"
      {
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 551 "browser_info.m"
        MR_Integer mdb__browser_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 5)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 2)));
#line 551 "browser_info.m"
        MR_Integer mdb__browser_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 3)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 4)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 5)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_16_16;

#line 551 "browser_info.m"
        {
#line 551 "browser_info.m"
          mdb__browser_info____Compare____caller_params_0_0(&mdb__browser_info__V_16_16, mdb__browser_info__V_4_4, mdb__browser_info__V_10_10);
        }
#line 7130 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_16_16 == (MR_Integer) 0);
#line 551 "browser_info.m"
        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 551 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 551 "browser_info.m"
          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_16_16;
#line 551 "browser_info.m"
        else
#line 551 "browser_info.m"
          {
#line 551 "browser_info.m"
            MR_Word mdb__browser_info__V_17_17;

#line 551 "browser_info.m"
            {
#line 551 "browser_info.m"
              mdb__browser_info____Compare____caller_params_0_0(&mdb__browser_info__V_17_17, mdb__browser_info__V_5_5, mdb__browser_info__V_11_11);
            }
#line 7150 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_17_17 == (MR_Integer) 0);
#line 551 "browser_info.m"
            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 551 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 551 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_17_17;
#line 551 "browser_info.m"
            else
#line 551 "browser_info.m"
              {
#line 551 "browser_info.m"
                MR_Word mdb__browser_info__V_18_18;

#line 551 "browser_info.m"
                {
#line 551 "browser_info.m"
                  mdb__browser_info____Compare____caller_params_0_0(&mdb__browser_info__V_18_18, mdb__browser_info__V_6_6, mdb__browser_info__V_12_12);
                }
#line 7170 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_18_18 == (MR_Integer) 0);
#line 551 "browser_info.m"
                mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 551 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 551 "browser_info.m"
                  *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_18_18;
#line 551 "browser_info.m"
                else
#line 551 "browser_info.m"
                  {
#line 551 "browser_info.m"
                    MR_Word mdb__browser_info__V_19_19;

#line 551 "browser_info.m"
                    {
#line 551 "browser_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_19_19, mdb__browser_info__V_7_7, mdb__browser_info__V_13_13);
                    }
#line 7190 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_19_19 == (MR_Integer) 0);
#line 551 "browser_info.m"
                    mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 551 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 551 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_19_19;
#line 551 "browser_info.m"
                    else
#line 551 "browser_info.m"
                      {
#line 551 "browser_info.m"
                        MR_Word mdb__browser_info__V_20_20;

#line 551 "browser_info.m"
                        {
#line 551 "browser_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[4], &mdb__browser_info__V_20_20, ((MR_Box) (mdb__browser_info__V_8_8)), ((MR_Box) (mdb__browser_info__V_14_14)));
                        }
#line 7210 "mdb.browser_info.c"
                        mdb__browser_info__succeeded = (mdb__browser_info__V_20_20 == (MR_Integer) 0);
#line 551 "browser_info.m"
                        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 551 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 551 "browser_info.m"
                          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_20_20;
#line 551 "browser_info.m"
                        else
#line 551 "browser_info.m"
                          {
#line 551 "browser_info.m"
                            {
#line 551 "browser_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[4], mdb__browser_info__HeadVar__1_1, ((MR_Box) (mdb__browser_info__V_9_9)), ((MR_Box) (mdb__browser_info__V_15_15)));
#line 551 "browser_info.m"
                              return;
                            }
#line 551 "browser_info.m"
                          }
#line 551 "browser_info.m"
                      }
#line 551 "browser_info.m"
                  }
#line 551 "browser_info.m"
              }
#line 551 "browser_info.m"
          }
#line 551 "browser_info.m"
      }
#line 551 "browser_info.m"
  }
#line 551 "browser_info.m"
}

#line 551 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browser_persistent_state_0_0(
#line 551 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 551 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 551 "browser_info.m"
{
#line 551 "browser_info.m"
  {
#line 551 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 551 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_15 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 551 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_16 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 551 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_15 == mdb__browser_info__CastY_16);
#line 551 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 551 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 551 "browser_info.m"
    else
#line 551 "browser_info.m"
      {
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_17_17;
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_18_18;
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 551 "browser_info.m"
        MR_Integer mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 5)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 551 "browser_info.m"
        MR_Integer mdb__browser_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 5)));
#line 565 "browser_info.m"
        MR_Integer mdb__browser_info__CastX_29 = (MR_Integer) mdb__browser_info__V_3_3;
#line 565 "browser_info.m"
        MR_Integer mdb__browser_info__CastY_30 = (MR_Integer) mdb__browser_info__V_9_9;
#line 565 "browser_info.m"
        MR_Integer mdb__browser_info__CastX_41;
#line 565 "browser_info.m"
        MR_Integer mdb__browser_info__CastY_42;
#line 565 "browser_info.m"
        MR_Integer mdb__browser_info__CastX_53;
#line 565 "browser_info.m"
        MR_Integer mdb__browser_info__CastY_54;

#line 565 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__CastX_29 == mdb__browser_info__CastY_30);
#line 565 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
          mdb__browser_info__succeeded = MR_TRUE;
#line 565 "browser_info.m"
        else
#line 565 "browser_info.m"
          {
#line 565 "browser_info.m"
            MR_Word mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 0)));
#line 565 "browser_info.m"
            MR_Word mdb__browser_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 1)));
#line 565 "browser_info.m"
            MR_Word mdb__browser_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 2)));
#line 565 "browser_info.m"
            MR_Word mdb__browser_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 3)));
#line 565 "browser_info.m"
            MR_Word mdb__browser_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 4)));
#line 565 "browser_info.m"
            MR_Word mdb__browser_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 0)));
#line 565 "browser_info.m"
            MR_Word mdb__browser_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 1)));
#line 565 "browser_info.m"
            MR_Word mdb__browser_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 2)));
#line 565 "browser_info.m"
            MR_Word mdb__browser_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 3)));
#line 565 "browser_info.m"
            MR_Word mdb__browser_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 4)));

#line 7346 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_19_19 == mdb__browser_info__V_24_24);
#line 565 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
              {
#line 7352 "mdb.browser_info.c"
                {
#line 7354 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_20_20, mdb__browser_info__V_25_25);
                }
#line 565 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
                  {
#line 7361 "mdb.browser_info.c"
                    {
#line 7363 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_21_21, mdb__browser_info__V_26_26);
                    }
#line 565 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
                      {
#line 7370 "mdb.browser_info.c"
                        {
#line 7372 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_22_22, mdb__browser_info__V_27_27);
                        }
#line 565 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 7377 "mdb.browser_info.c"
                          {
#line 7379 "mdb.browser_info.c"
                            mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_23_23, mdb__browser_info__V_28_28);
                          }
#line 565 "browser_info.m"
                      }
#line 565 "browser_info.m"
                  }
#line 565 "browser_info.m"
              }
#line 565 "browser_info.m"
          }
#line 551 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 551 "browser_info.m"
          {
#line 565 "browser_info.m"
            mdb__browser_info__CastX_41 = (MR_Integer) mdb__browser_info__V_4_4;
#line 565 "browser_info.m"
            mdb__browser_info__CastY_42 = (MR_Integer) mdb__browser_info__V_10_10;
#line 565 "browser_info.m"
            mdb__browser_info__succeeded = (mdb__browser_info__CastX_41 == mdb__browser_info__CastY_42);
#line 565 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
              mdb__browser_info__succeeded = MR_TRUE;
#line 565 "browser_info.m"
            else
#line 565 "browser_info.m"
              {
#line 565 "browser_info.m"
                MR_Word mdb__browser_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 0)));
#line 565 "browser_info.m"
                MR_Word mdb__browser_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 1)));
#line 565 "browser_info.m"
                MR_Word mdb__browser_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 2)));
#line 565 "browser_info.m"
                MR_Word mdb__browser_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 3)));
#line 565 "browser_info.m"
                MR_Word mdb__browser_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 4)));
#line 565 "browser_info.m"
                MR_Word mdb__browser_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 0)));
#line 565 "browser_info.m"
                MR_Word mdb__browser_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 1)));
#line 565 "browser_info.m"
                MR_Word mdb__browser_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 2)));
#line 565 "browser_info.m"
                MR_Word mdb__browser_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 3)));
#line 565 "browser_info.m"
                MR_Word mdb__browser_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 4)));

#line 7429 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_31_31 == mdb__browser_info__V_36_36);
#line 565 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
                  {
#line 7435 "mdb.browser_info.c"
                    {
#line 7437 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_32_32, mdb__browser_info__V_37_37);
                    }
#line 565 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
                      {
#line 7444 "mdb.browser_info.c"
                        {
#line 7446 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_33_33, mdb__browser_info__V_38_38);
                        }
#line 565 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
                          {
#line 7453 "mdb.browser_info.c"
                            {
#line 7455 "mdb.browser_info.c"
                              mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_34_34, mdb__browser_info__V_39_39);
                            }
#line 565 "browser_info.m"
                            if (mdb__browser_info__succeeded)
#line 7460 "mdb.browser_info.c"
                              {
#line 7462 "mdb.browser_info.c"
                                mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_35_35, mdb__browser_info__V_40_40);
                              }
#line 565 "browser_info.m"
                          }
#line 565 "browser_info.m"
                      }
#line 565 "browser_info.m"
                  }
#line 565 "browser_info.m"
              }
#line 551 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 551 "browser_info.m"
              {
#line 565 "browser_info.m"
                mdb__browser_info__CastX_53 = (MR_Integer) mdb__browser_info__V_5_5;
#line 565 "browser_info.m"
                mdb__browser_info__CastY_54 = (MR_Integer) mdb__browser_info__V_11_11;
#line 565 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__CastX_53 == mdb__browser_info__CastY_54);
#line 565 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
                  mdb__browser_info__succeeded = MR_TRUE;
#line 565 "browser_info.m"
                else
#line 565 "browser_info.m"
                  {
#line 565 "browser_info.m"
                    MR_Word mdb__browser_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 0)));
#line 565 "browser_info.m"
                    MR_Word mdb__browser_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 1)));
#line 565 "browser_info.m"
                    MR_Word mdb__browser_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 2)));
#line 565 "browser_info.m"
                    MR_Word mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 3)));
#line 565 "browser_info.m"
                    MR_Word mdb__browser_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 4)));
#line 565 "browser_info.m"
                    MR_Word mdb__browser_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 0)));
#line 565 "browser_info.m"
                    MR_Word mdb__browser_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 1)));
#line 565 "browser_info.m"
                    MR_Word mdb__browser_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 2)));
#line 565 "browser_info.m"
                    MR_Word mdb__browser_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 3)));
#line 565 "browser_info.m"
                    MR_Word mdb__browser_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 4)));

#line 7512 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_43_43 == mdb__browser_info__V_48_48);
#line 565 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
                      {
#line 7518 "mdb.browser_info.c"
                        {
#line 7520 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_44_44, mdb__browser_info__V_49_49);
                        }
#line 565 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
                          {
#line 7527 "mdb.browser_info.c"
                            {
#line 7529 "mdb.browser_info.c"
                              mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_45_45, mdb__browser_info__V_50_50);
                            }
#line 565 "browser_info.m"
                            if (mdb__browser_info__succeeded)
#line 565 "browser_info.m"
                              {
#line 7536 "mdb.browser_info.c"
                                {
#line 7538 "mdb.browser_info.c"
                                  mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_46_46, mdb__browser_info__V_51_51);
                                }
#line 565 "browser_info.m"
                                if (mdb__browser_info__succeeded)
#line 7543 "mdb.browser_info.c"
                                  {
#line 7545 "mdb.browser_info.c"
                                    mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_47_47, mdb__browser_info__V_52_52);
                                  }
#line 565 "browser_info.m"
                              }
#line 565 "browser_info.m"
                          }
#line 565 "browser_info.m"
                      }
#line 565 "browser_info.m"
                  }
#line 551 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 551 "browser_info.m"
                  {
#line 7560 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_6_6 == mdb__browser_info__V_12_12);
#line 551 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 551 "browser_info.m"
                      {
#line 7566 "mdb.browser_info.c"
                        mdb__browser_info__TypeInfo_17_17 = (MR_Word) &mdb__browser_info_scalar_common_2[4];
#line 7568 "mdb.browser_info.c"
                        {
#line 7570 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_17_17, ((MR_Box) (mdb__browser_info__V_7_7)), ((MR_Box) (mdb__browser_info__V_13_13)));
                        }
#line 551 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 551 "browser_info.m"
                          {
#line 7577 "mdb.browser_info.c"
                            mdb__browser_info__TypeInfo_18_18 = (MR_Word) &mdb__browser_info_scalar_common_2[4];
#line 7579 "mdb.browser_info.c"
                            {
#line 7581 "mdb.browser_info.c"
                              return mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_18_18, ((MR_Box) (mdb__browser_info__V_8_8)), ((MR_Box) (mdb__browser_info__V_14_14)));
                            }
#line 551 "browser_info.m"
                          }
#line 551 "browser_info.m"
                      }
#line 551 "browser_info.m"
                  }
#line 551 "browser_info.m"
              }
#line 551 "browser_info.m"
          }
#line 551 "browser_info.m"
      }
#line 551 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 551 "browser_info.m"
  }
#line 551 "browser_info.m"
}

#line 81 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browser_mode_func_0_0(
#line 81 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 81 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 81 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 81 "browser_info.m"
{
#line 81 "browser_info.m"
  {
#line 81 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 81 "browser_info.m"
    MR_Word mdb__browser_info__Cast_HeadVar1_4 = mdb__browser_info__HeadVar__2_2;
#line 81 "browser_info.m"
    MR_Word mdb__browser_info__Cast_HeadVar2_5 = mdb__browser_info__HeadVar__3_3;

#line 81 "browser_info.m"
    {
#line 81 "browser_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_3[0], mdb__browser_info__HeadVar__1_1, ((MR_Box) (mdb__browser_info__Cast_HeadVar1_4)), ((MR_Box) (mdb__browser_info__Cast_HeadVar2_5)));
#line 81 "browser_info.m"
      return;
    }
#line 81 "browser_info.m"
  }
#line 81 "browser_info.m"
}

#line 81 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browser_mode_func_0_0(
#line 81 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 81 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 81 "browser_info.m"
{
#line 81 "browser_info.m"
  {
#line 81 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 81 "browser_info.m"
    MR_Word mdb__browser_info__Cast_HeadVar1_3 = mdb__browser_info__HeadVar__1_1;
#line 81 "browser_info.m"
    MR_Word mdb__browser_info__Cast_HeadVar2_4 = mdb__browser_info__HeadVar__2_2;

#line 81 "browser_info.m"
    {
#line 81 "browser_info.m"
      return mdb__browser_info__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mdb__browser_info__Cast_HeadVar1_3, (MR_Word) mdb__browser_info__Cast_HeadVar2_4);
    }
#line 81 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 81 "browser_info.m"
  }
#line 81 "browser_info.m"
}

#line 39 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browser_info_0_0(
#line 39 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 39 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 39 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 39 "browser_info.m"
{
#line 39 "browser_info.m"
  {
#line 39 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 39 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_24 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 39 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_25 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 39 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_24 == mdb__browser_info__CastY_25);
#line 39 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 7689 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 39 "browser_info.m"
    else
#line 39 "browser_info.m"
      {
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 5)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 6)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 2)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 3)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 4)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 5)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 6)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_18_18;

#line 39 "browser_info.m"
        {
#line 39 "browser_info.m"
          mdb__browser_term____Compare____browser_term_0_0(&mdb__browser_info__V_18_18, mdb__browser_info__V_4_4, mdb__browser_info__V_11_11);
        }
#line 7731 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_18_18 == (MR_Integer) 0);
#line 39 "browser_info.m"
        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 39 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_18_18;
#line 39 "browser_info.m"
        else
#line 39 "browser_info.m"
          {
#line 39 "browser_info.m"
            MR_Word mdb__browser_info__V_19_19;

#line 39 "browser_info.m"
            {
#line 39 "browser_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[0], &mdb__browser_info__V_19_19, ((MR_Box) (mdb__browser_info__V_5_5)), ((MR_Box) (mdb__browser_info__V_12_12)));
            }
#line 7751 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_19_19 == (MR_Integer) 0);
#line 39 "browser_info.m"
            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 39 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_19_19;
#line 39 "browser_info.m"
            else
#line 39 "browser_info.m"
              {
#line 39 "browser_info.m"
                MR_Word mdb__browser_info__V_20_20;
#line 39 "browser_info.m"
                MR_Integer mdb__browser_info__V_33_33 = (MR_Integer) mdb__browser_info__V_6_6;
#line 39 "browser_info.m"
                MR_Integer mdb__browser_info__V_34_34 = (MR_Integer) mdb__browser_info__V_13_13;

#line 39 "browser_info.m"
                {
#line 39 "browser_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_20_20, mdb__browser_info__V_33_33, mdb__browser_info__V_34_34);
                }
#line 7775 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_20_20 == (MR_Integer) 0);
#line 39 "browser_info.m"
                mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 39 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                  *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_20_20;
#line 39 "browser_info.m"
                else
#line 39 "browser_info.m"
                  {
#line 39 "browser_info.m"
                    MR_Word mdb__browser_info__V_21_21;

#line 39 "browser_info.m"
                    {
#line 39 "browser_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[1], &mdb__browser_info__V_21_21, ((MR_Box) (mdb__browser_info__V_7_7)), ((MR_Box) (mdb__browser_info__V_14_14)));
                    }
#line 7795 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_21_21 == (MR_Integer) 0);
#line 39 "browser_info.m"
                    mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 39 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_21_21;
#line 39 "browser_info.m"
                    else
#line 39 "browser_info.m"
                      {
#line 39 "browser_info.m"
                        MR_Word mdb__browser_info__V_22_22;

#line 39 "browser_info.m"
                        {
#line 39 "browser_info.m"
                          mdb__browser_info____Compare____browser_persistent_state_0_0(&mdb__browser_info__V_22_22, mdb__browser_info__V_8_8, mdb__browser_info__V_15_15);
                        }
#line 7815 "mdb.browser_info.c"
                        mdb__browser_info__succeeded = (mdb__browser_info__V_22_22 == (MR_Integer) 0);
#line 39 "browser_info.m"
                        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 39 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_22_22;
#line 39 "browser_info.m"
                        else
#line 39 "browser_info.m"
                          {
#line 39 "browser_info.m"
                            MR_Word mdb__browser_info__V_23_23;

#line 39 "browser_info.m"
                            {
#line 39 "browser_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[2], &mdb__browser_info__V_23_23, ((MR_Box) (mdb__browser_info__V_9_9)), ((MR_Box) (mdb__browser_info__V_16_16)));
                            }
#line 7835 "mdb.browser_info.c"
                            mdb__browser_info__succeeded = (mdb__browser_info__V_23_23 == (MR_Integer) 0);
#line 39 "browser_info.m"
                            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 39 "browser_info.m"
                            if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_23_23;
#line 39 "browser_info.m"
                            else
#line 39 "browser_info.m"
                              {
#line 39 "browser_info.m"
                                {
#line 39 "browser_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[3], mdb__browser_info__HeadVar__1_1, ((MR_Box) (mdb__browser_info__V_10_10)), ((MR_Box) (mdb__browser_info__V_17_17)));
#line 39 "browser_info.m"
                                  return;
                                }
#line 39 "browser_info.m"
                              }
#line 39 "browser_info.m"
                          }
#line 39 "browser_info.m"
                      }
#line 39 "browser_info.m"
                  }
#line 39 "browser_info.m"
              }
#line 39 "browser_info.m"
          }
#line 39 "browser_info.m"
      }
#line 39 "browser_info.m"
  }
#line 39 "browser_info.m"
}

#line 39 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browser_info_0_0(
#line 39 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 39 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 39 "browser_info.m"
{
#line 39 "browser_info.m"
  {
#line 39 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 39 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_17 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 39 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_18 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 39 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_17 == mdb__browser_info__CastY_18);
#line 39 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 39 "browser_info.m"
    else
#line 39 "browser_info.m"
      {
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_20_20;
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_21_21;
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_22_22;
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_23_23;
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 5)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 6)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 5)));
#line 39 "browser_info.m"
        MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 6)));

#line 7938 "mdb.browser_info.c"
        {
#line 7940 "mdb.browser_info.c"
          mdb__browser_info__succeeded = mdb__browser_term____Unify____browser_term_0_0(mdb__browser_info__V_3_3, mdb__browser_info__V_10_10);
        }
#line 39 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
          {
#line 7947 "mdb.browser_info.c"
            mdb__browser_info__TypeInfo_20_20 = (MR_Word) &mdb__browser_info_scalar_common_2[0];
#line 7949 "mdb.browser_info.c"
            {
#line 7951 "mdb.browser_info.c"
              mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_20_20, ((MR_Box) (mdb__browser_info__V_4_4)), ((MR_Box) (mdb__browser_info__V_11_11)));
            }
#line 39 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
              {
#line 7958 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_12_12);
#line 39 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                  {
#line 7964 "mdb.browser_info.c"
                    mdb__browser_info__TypeInfo_21_21 = (MR_Word) &mdb__browser_info_scalar_common_2[1];
#line 7966 "mdb.browser_info.c"
                    {
#line 7968 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_21_21, ((MR_Box) (mdb__browser_info__V_6_6)), ((MR_Box) (mdb__browser_info__V_13_13)));
                    }
#line 39 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                      {
#line 7975 "mdb.browser_info.c"
                        {
#line 7977 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_persistent_state_0_0(mdb__browser_info__V_7_7, mdb__browser_info__V_14_14);
                        }
#line 39 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                          {
#line 7984 "mdb.browser_info.c"
                            mdb__browser_info__TypeInfo_22_22 = (MR_Word) &mdb__browser_info_scalar_common_2[0];
#line 7986 "mdb.browser_info.c"
                            {
#line 7988 "mdb.browser_info.c"
                              mdb__browser_info__succeeded = mdb__browser_info____Unify____maybe_track_subterm_1_0(mdb__browser_info__TypeInfo_22_22, mdb__browser_info__V_8_8, mdb__browser_info__V_15_15);
                            }
#line 39 "browser_info.m"
                            if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                              {
#line 7995 "mdb.browser_info.c"
                                mdb__browser_info__TypeInfo_23_23 = (MR_Word) &mdb__browser_info_scalar_common_2[3];
#line 7997 "mdb.browser_info.c"
                                {
#line 7999 "mdb.browser_info.c"
                                  return mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_23_23, ((MR_Box) (mdb__browser_info__V_9_9)), ((MR_Box) (mdb__browser_info__V_16_16)));
                                }
#line 39 "browser_info.m"
                              }
#line 39 "browser_info.m"
                          }
#line 39 "browser_info.m"
                      }
#line 39 "browser_info.m"
                  }
#line 39 "browser_info.m"
              }
#line 39 "browser_info.m"
          }
#line 39 "browser_info.m"
      }
#line 39 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 39 "browser_info.m"
  }
#line 39 "browser_info.m"
}

#line 325 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browser_db_0_0(
#line 325 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 325 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 325 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 325 "browser_info.m"
{
#line 325 "browser_info.m"
  {
#line 325 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 325 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_6 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 325 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_7 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 325 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_6 == mdb__browser_info__CastY_7);
#line 325 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 8047 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 325 "browser_info.m"
    else
#line 325 "browser_info.m"
      {
#line 325 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = (MR_Word) mdb__browser_info__HeadVar__2_2;
#line 325 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = (MR_Word) mdb__browser_info__HeadVar__3_3;

#line 325 "browser_info.m"
        {
#line 325 "browser_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_1[0], mdb__browser_info__HeadVar__1_1, ((MR_Box) (mdb__browser_info__V_4_4)), ((MR_Box) (mdb__browser_info__V_5_5)));
#line 325 "browser_info.m"
          return;
        }
#line 325 "browser_info.m"
      }
#line 325 "browser_info.m"
  }
#line 325 "browser_info.m"
}

#line 325 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browser_db_0_0(
#line 325 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 325 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 325 "browser_info.m"
{
#line 325 "browser_info.m"
  {
#line 325 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 325 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_5 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 325 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_6 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 325 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_5 == mdb__browser_info__CastY_6);
#line 325 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 325 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 325 "browser_info.m"
    else
#line 325 "browser_info.m"
      {
#line 325 "browser_info.m"
        MR_Word mdb__browser_info__V_3_3 = (MR_Word) mdb__browser_info__HeadVar__1_1;
#line 325 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = (MR_Word) mdb__browser_info__HeadVar__2_2;

#line 8105 "mdb.browser_info.c"
        {
#line 8107 "mdb.browser_info.c"
          return mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__browser_info_scalar_common_1[0], ((MR_Box) (mdb__browser_info__V_3_3)), ((MR_Box) (mdb__browser_info__V_4_4)));
        }
#line 325 "browser_info.m"
      }
#line 325 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 325 "browser_info.m"
  }
#line 325 "browser_info.m"
}

#line 118 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browse_caller_type_0_0(
#line 118 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 118 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 118 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 118 "browser_info.m"
{
#line 118 "browser_info.m"
  {
#line 118 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 118 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 118 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 118 "browser_info.m"
    {
#line 118 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
#line 118 "browser_info.m"
      return;
    }
#line 118 "browser_info.m"
  }
#line 118 "browser_info.m"
}

#line 118 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browse_caller_type_0_0(
#line 118 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 118 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 118 "browser_info.m"
{
#line 8160 "mdb.browser_info.c"
  {
#line 8162 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 8165 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 8167 "mdb.browser_info.c"
  }
#line 118 "browser_info.m"
}

#line 1185 "browser_info.m"
static void MR_CALL 
mdb__browser_info__browser_persistent_state_type_1_p_0(
#line 1185 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1)
#line 1185 "browser_info.m"
{
#line 1189 "browser_info.m"
  {
#line 1189 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1189 "browser_info.m"
    {
#line 1189 "browser_info.m"
      *mdb__browser_info__HeadVar__1_1 = mercury__type_desc__type_of_1_f_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0);
    }
#line 1189 "browser_info.m"
  }
#line 1185 "browser_info.m"
}

#line 1168 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__format_params_to_desc_1_f_0(
#line 1168 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 1168 "browser_info.m"
{
#line 1170 "browser_info.m"
  {
#line 1170 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__HeadVar__2_2;
#line 1170 "browser_info.m"
    MR_Integer mdb__browser_info__Depth_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 1170 "browser_info.m"
    MR_Integer mdb__browser_info__Size_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 1170 "browser_info.m"
    MR_Integer mdb__browser_info__Width_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 1170 "browser_info.m"
    MR_Integer mdb__browser_info__Lines_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_8_8;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_9_9;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_10_10;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_12_12;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_14_14;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_15_15;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_16_16;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_18_18;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_20_20;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_22_22;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_24_24;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_26_26;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_27_27;

#line 1171 "browser_info.m"
    {
#line 1171 "browser_info.m"
      mdb__browser_info__V_9_9 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Depth_3);
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_15_15 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Size_4);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_21_21 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Width_5);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_27_27 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Lines_6);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_26_26 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_27_27, (MR_String) "\n");
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "lines ", mdb__browser_info__V_26_26);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_24_24);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_20_20 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_21_21, mdb__browser_info__V_22_22);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "width ", mdb__browser_info__V_20_20);
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_18_18);
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_14_14 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_15_15, mdb__browser_info__V_16_16);
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "size ", mdb__browser_info__V_14_14);
    }
#line 1171 "browser_info.m"
    {
#line 1171 "browser_info.m"
      mdb__browser_info__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_12_12);
    }
#line 1171 "browser_info.m"
    {
#line 1171 "browser_info.m"
      mdb__browser_info__V_8_8 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_9_9, mdb__browser_info__V_10_10);
    }
#line 1171 "browser_info.m"
    {
#line 1171 "browser_info.m"
      return mdb__browser_info__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "depth ", mdb__browser_info__V_8_8);
    }
#line 1170 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 1170 "browser_info.m"
  }
#line 1168 "browser_info.m"
}

#line 1158 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__format_params_to_mdb_command_2_f_0(
#line 1158 "browser_info.m"
  MR_String mdb__browser_info__CmdCallerOpt_4,
#line 1158 "browser_info.m"
  MR_Word mdb__browser_info__FormatParams_5)
#line 1158 "browser_info.m"
{
#line 1160 "browser_info.m"
  {
#line 1160 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__Cmds_6;
#line 1160 "browser_info.m"
    MR_Integer mdb__browser_info__Depth_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FormatParams_5, (MR_Integer) 0)));
#line 1160 "browser_info.m"
    MR_Integer mdb__browser_info__Size_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FormatParams_5, (MR_Integer) 1)));
#line 1160 "browser_info.m"
    MR_Integer mdb__browser_info__Width_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FormatParams_5, (MR_Integer) 2)));
#line 1160 "browser_info.m"
    MR_Integer mdb__browser_info__Lines_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FormatParams_5, (MR_Integer) 3)));
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__DepthCmd_11;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__SizeCmd_12;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__WidthCmd_13;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__LinesCmd_14;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__V_15_15;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__V_17_17;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__V_18_18;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__V_20_20;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__V_22_22;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__V_23_23;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__V_25_25;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__V_27_27;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__V_28_28;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__V_30_30;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__V_32_32;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__V_33_33;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__V_35_35;
#line 1160 "browser_info.m"
    MR_String mdb__browser_info__V_36_36;

#line 1162 "browser_info.m"
    {
#line 1162 "browser_info.m"
      mdb__browser_info__V_18_18 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Depth_7);
    }
#line 1162 "browser_info.m"
    {
#line 1162 "browser_info.m"
      mdb__browser_info__V_17_17 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_18_18, (MR_String) "\n");
    }
#line 1162 "browser_info.m"
    {
#line 1162 "browser_info.m"
      mdb__browser_info__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "depth ", mdb__browser_info__V_17_17);
    }
#line 1162 "browser_info.m"
    {
#line 1162 "browser_info.m"
      mdb__browser_info__DepthCmd_11 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdCallerOpt_4, mdb__browser_info__V_15_15);
    }
#line 1163 "browser_info.m"
    {
#line 1163 "browser_info.m"
      mdb__browser_info__V_23_23 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Size_8);
    }
#line 1163 "browser_info.m"
    {
#line 1163 "browser_info.m"
      mdb__browser_info__V_22_22 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_23_23, (MR_String) "\n");
    }
#line 1163 "browser_info.m"
    {
#line 1163 "browser_info.m"
      mdb__browser_info__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "size ", mdb__browser_info__V_22_22);
    }
#line 1163 "browser_info.m"
    {
#line 1163 "browser_info.m"
      mdb__browser_info__SizeCmd_12 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdCallerOpt_4, mdb__browser_info__V_20_20);
    }
#line 1164 "browser_info.m"
    {
#line 1164 "browser_info.m"
      mdb__browser_info__V_28_28 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Width_9);
    }
#line 1164 "browser_info.m"
    {
#line 1164 "browser_info.m"
      mdb__browser_info__V_27_27 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_28_28, (MR_String) "\n");
    }
#line 1164 "browser_info.m"
    {
#line 1164 "browser_info.m"
      mdb__browser_info__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "width ", mdb__browser_info__V_27_27);
    }
#line 1164 "browser_info.m"
    {
#line 1164 "browser_info.m"
      mdb__browser_info__WidthCmd_13 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdCallerOpt_4, mdb__browser_info__V_25_25);
    }
#line 1165 "browser_info.m"
    {
#line 1165 "browser_info.m"
      mdb__browser_info__V_33_33 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Lines_10);
    }
#line 1165 "browser_info.m"
    {
#line 1165 "browser_info.m"
      mdb__browser_info__V_32_32 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_33_33, (MR_String) "\n");
    }
#line 1165 "browser_info.m"
    {
#line 1165 "browser_info.m"
      mdb__browser_info__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "lines ", mdb__browser_info__V_32_32);
    }
#line 1165 "browser_info.m"
    {
#line 1165 "browser_info.m"
      mdb__browser_info__LinesCmd_14 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdCallerOpt_4, mdb__browser_info__V_30_30);
    }
#line 1166 "browser_info.m"
    {
#line 1166 "browser_info.m"
      mdb__browser_info__V_36_36 = mercury__string__f_43_43_2_f_0(mdb__browser_info__WidthCmd_13, mdb__browser_info__LinesCmd_14);
    }
#line 1166 "browser_info.m"
    {
#line 1166 "browser_info.m"
      mdb__browser_info__V_35_35 = mercury__string__f_43_43_2_f_0(mdb__browser_info__SizeCmd_12, mdb__browser_info__V_36_36);
    }
#line 1166 "browser_info.m"
    {
#line 1166 "browser_info.m"
      return mdb__browser_info__Cmds_6 = mercury__string__f_43_43_2_f_0(mdb__browser_info__DepthCmd_11, mdb__browser_info__V_35_35);
    }
#line 1160 "browser_info.m"
    return mdb__browser_info__Cmds_6;
#line 1160 "browser_info.m"
  }
#line 1158 "browser_info.m"
}

#line 1148 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__caller_params_to_desc_1_f_0(
#line 1148 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 1148 "browser_info.m"
{
#line 1151 "browser_info.m"
  {
#line 1151 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__HeadVar__2_2;
#line 1151 "browser_info.m"
    MR_Word mdb__browser_info__Format_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 1151 "browser_info.m"
    MR_Word mdb__browser_info__FlatParams_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 1151 "browser_info.m"
    MR_Word mdb__browser_info__RawPrettyParams_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 1151 "browser_info.m"
    MR_Word mdb__browser_info__VerboseParams_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 1151 "browser_info.m"
    MR_Word mdb__browser_info__PrettyParams_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_9_9;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_10_10 = ((&mdb__browser_info_vector_common_7[4 + mdb__browser_info__Format_3]))->mdb__browser_info__vector_common_type_7_0__vct_7_f_0;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_11_11;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_13_13;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_15_15;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_16_16;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_17_17;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_19_19;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_20_20;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_23_23;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_24_24;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_25_25;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_27_27;
#line 1151 "browser_info.m"
    MR_Integer mdb__browser_info__Depth_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 0)));
#line 1151 "browser_info.m"
    MR_Integer mdb__browser_info__Size_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 1)));
#line 1151 "browser_info.m"
    MR_Integer mdb__browser_info__Width_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 2)));
#line 1151 "browser_info.m"
    MR_Integer mdb__browser_info__Lines_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 3)));
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_33_33;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_34_34;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_35_35;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_37_37;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_39_39;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_40_40;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_41_41;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_43_43;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_45_45;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_46_46;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_47_47;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_49_49;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_51_51;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_52_52;
#line 1151 "browser_info.m"
    MR_Integer mdb__browser_info__Depth_54;
#line 1151 "browser_info.m"
    MR_Integer mdb__browser_info__Size_55;
#line 1151 "browser_info.m"
    MR_Integer mdb__browser_info__Width_56;
#line 1151 "browser_info.m"
    MR_Integer mdb__browser_info__Lines_57;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_59_59;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_60_60;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_61_61;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_63_63;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_65_65;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_66_66;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_67_67;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_69_69;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_71_71;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_72_72;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_73_73;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_75_75;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_77_77;
#line 1151 "browser_info.m"
    MR_String mdb__browser_info__V_78_78;

#line 1171 "browser_info.m"
    {
#line 1171 "browser_info.m"
      mdb__browser_info__V_34_34 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Depth_28);
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_40_40 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Size_29);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_46_46 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Width_30);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_52_52 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Lines_31);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_51_51 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_52_52, (MR_String) "\n");
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) "lines ", mdb__browser_info__V_51_51);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_49_49);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_45_45 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_46_46, mdb__browser_info__V_47_47);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "width ", mdb__browser_info__V_45_45);
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_43_43);
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_39_39 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_40_40, mdb__browser_info__V_41_41);
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) "size ", mdb__browser_info__V_39_39);
    }
#line 1171 "browser_info.m"
    {
#line 1171 "browser_info.m"
      mdb__browser_info__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_37_37);
    }
#line 1171 "browser_info.m"
    {
#line 1171 "browser_info.m"
      mdb__browser_info__V_33_33 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_34_34, mdb__browser_info__V_35_35);
    }
#line 1171 "browser_info.m"
    {
#line 1171 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "depth ", mdb__browser_info__V_33_33);
    }
#line 1170 "browser_info.m"
    mdb__browser_info__Depth_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__RawPrettyParams_5, (MR_Integer) 0)));
#line 1170 "browser_info.m"
    mdb__browser_info__Size_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__RawPrettyParams_5, (MR_Integer) 1)));
#line 1170 "browser_info.m"
    mdb__browser_info__Width_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__RawPrettyParams_5, (MR_Integer) 2)));
#line 1170 "browser_info.m"
    mdb__browser_info__Lines_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__RawPrettyParams_5, (MR_Integer) 3)));
#line 1171 "browser_info.m"
    {
#line 1171 "browser_info.m"
      mdb__browser_info__V_60_60 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Depth_54);
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_66_66 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Size_55);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_72_72 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Width_56);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_78_78 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Lines_57);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_77_77 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_78_78, (MR_String) "\n");
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "lines ", mdb__browser_info__V_77_77);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_75_75);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_71_71 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_72_72, mdb__browser_info__V_73_73);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "width ", mdb__browser_info__V_71_71);
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_69_69);
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_65_65 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_66_66, mdb__browser_info__V_67_67);
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "size ", mdb__browser_info__V_65_65);
    }
#line 1171 "browser_info.m"
    {
#line 1171 "browser_info.m"
      mdb__browser_info__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_63_63);
    }
#line 1171 "browser_info.m"
    {
#line 1171 "browser_info.m"
      mdb__browser_info__V_59_59 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_60_60, mdb__browser_info__V_61_61);
    }
#line 1171 "browser_info.m"
    {
#line 1171 "browser_info.m"
      mdb__browser_info__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "depth ", mdb__browser_info__V_59_59);
    }
#line 1155 "browser_info.m"
    {
#line 1155 "browser_info.m"
      mdb__browser_info__V_24_24 = mdb__browser_info__format_params_to_desc_1_f_0(mdb__browser_info__VerboseParams_6);
    }
#line 1156 "browser_info.m"
    {
#line 1156 "browser_info.m"
      mdb__browser_info__V_27_27 = mdb__browser_info__format_params_to_desc_1_f_0(mdb__browser_info__PrettyParams_7);
    }
#line 1156 "browser_info.m"
    {
#line 1156 "browser_info.m"
      mdb__browser_info__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "pretty parameters:     ", mdb__browser_info__V_27_27);
    }
#line 1155 "browser_info.m"
    {
#line 1155 "browser_info.m"
      mdb__browser_info__V_23_23 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_24_24, mdb__browser_info__V_25_25);
    }
#line 1155 "browser_info.m"
    {
#line 1155 "browser_info.m"
      mdb__browser_info__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "verbose parameters:    ", mdb__browser_info__V_23_23);
    }
#line 1154 "browser_info.m"
    {
#line 1154 "browser_info.m"
      mdb__browser_info__V_19_19 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_20_20, mdb__browser_info__V_21_21);
    }
#line 1154 "browser_info.m"
    {
#line 1154 "browser_info.m"
      mdb__browser_info__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "raw_pretty parameters: ", mdb__browser_info__V_19_19);
    }
#line 1153 "browser_info.m"
    {
#line 1153 "browser_info.m"
      mdb__browser_info__V_15_15 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_16_16, mdb__browser_info__V_17_17);
    }
#line 1153 "browser_info.m"
    {
#line 1153 "browser_info.m"
      mdb__browser_info__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "flat parameters:       ", mdb__browser_info__V_15_15);
    }
#line 1152 "browser_info.m"
    {
#line 1152 "browser_info.m"
      mdb__browser_info__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mdb__browser_info__V_13_13);
    }
#line 1152 "browser_info.m"
    {
#line 1152 "browser_info.m"
      mdb__browser_info__V_9_9 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_10_10, mdb__browser_info__V_11_11);
    }
#line 1152 "browser_info.m"
    {
#line 1152 "browser_info.m"
      return mdb__browser_info__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "default format ", mdb__browser_info__V_9_9);
    }
#line 1151 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 1151 "browser_info.m"
  }
#line 1148 "browser_info.m"
}

#line 1134 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__caller_params_to_mdb_command_2_f_0(
#line 1134 "browser_info.m"
  MR_String mdb__browser_info__CallerOpt_4,
#line 1134 "browser_info.m"
  MR_Word mdb__browser_info__CallerParams_5)
#line 1134 "browser_info.m"
{
#line 1136 "browser_info.m"
  {
#line 1136 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__Cmds_6;
#line 1136 "browser_info.m"
    MR_Word mdb__browser_info__Format_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 0)));
#line 1136 "browser_info.m"
    MR_Word mdb__browser_info__FlatParams_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 1)));
#line 1136 "browser_info.m"
    MR_Word mdb__browser_info__RawPrettyParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 2)));
#line 1136 "browser_info.m"
    MR_Word mdb__browser_info__VerboseParams_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 3)));
#line 1136 "browser_info.m"
    MR_Word mdb__browser_info__PrettyParams_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 4)));
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__FormatCmd_12;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__CmdPrefix_13;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__FormatParamCmds_14;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__V_16_16;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__V_17_17;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__V_18_18 = ((&mdb__browser_info_vector_common_7[0 + mdb__browser_info__Format_7]))->mdb__browser_info__vector_common_type_7_0__vct_7_f_0;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__V_22_22;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__V_24_24;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__V_25_25;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__V_26_26;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__V_28_28;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__V_29_29;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__V_30_30;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__V_32_32;
#line 1136 "browser_info.m"
    MR_String mdb__browser_info__V_33_33;

#line 1139 "browser_info.m"
    {
#line 1139 "browser_info.m"
      mdb__browser_info__V_17_17 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_18_18, (MR_String) "\n");
    }
#line 1139 "browser_info.m"
    {
#line 1139 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CallerOpt_4, mdb__browser_info__V_17_17);
    }
#line 1139 "browser_info.m"
    {
#line 1139 "browser_info.m"
      mdb__browser_info__FormatCmd_12 = mercury__string__f_43_43_2_f_0((MR_String) "format ", mdb__browser_info__V_16_16);
    }
#line 1140 "browser_info.m"
    {
#line 1140 "browser_info.m"
      mdb__browser_info__CmdPrefix_13 = mercury__string__f_43_43_2_f_0((MR_String) "format_param ", mdb__browser_info__CallerOpt_4);
    }
#line 1142 "browser_info.m"
    {
#line 1142 "browser_info.m"
      mdb__browser_info__V_22_22 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdPrefix_13, (MR_String) "-f ");
    }
#line 1142 "browser_info.m"
    {
#line 1142 "browser_info.m"
      mdb__browser_info__V_21_21 = mdb__browser_info__format_params_to_mdb_command_2_f_0(mdb__browser_info__V_22_22, mdb__browser_info__FlatParams_8);
    }
#line 1143 "browser_info.m"
    {
#line 1143 "browser_info.m"
      mdb__browser_info__V_26_26 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdPrefix_13, (MR_String) "-r ");
    }
#line 1143 "browser_info.m"
    {
#line 1143 "browser_info.m"
      mdb__browser_info__V_25_25 = mdb__browser_info__format_params_to_mdb_command_2_f_0(mdb__browser_info__V_26_26, mdb__browser_info__RawPrettyParams_9);
    }
#line 1144 "browser_info.m"
    {
#line 1144 "browser_info.m"
      mdb__browser_info__V_30_30 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdPrefix_13, (MR_String) "-v ");
    }
#line 1144 "browser_info.m"
    {
#line 1144 "browser_info.m"
      mdb__browser_info__V_29_29 = mdb__browser_info__format_params_to_mdb_command_2_f_0(mdb__browser_info__V_30_30, mdb__browser_info__VerboseParams_10);
    }
#line 1145 "browser_info.m"
    {
#line 1145 "browser_info.m"
      mdb__browser_info__V_33_33 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdPrefix_13, (MR_String) "-p ");
    }
#line 1145 "browser_info.m"
    {
#line 1145 "browser_info.m"
      mdb__browser_info__V_32_32 = mdb__browser_info__format_params_to_mdb_command_2_f_0(mdb__browser_info__V_33_33, mdb__browser_info__PrettyParams_11);
    }
#line 1144 "browser_info.m"
    {
#line 1144 "browser_info.m"
      mdb__browser_info__V_28_28 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_29_29, mdb__browser_info__V_32_32);
    }
#line 1143 "browser_info.m"
    {
#line 1143 "browser_info.m"
      mdb__browser_info__V_24_24 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_25_25, mdb__browser_info__V_28_28);
    }
#line 1142 "browser_info.m"
    {
#line 1142 "browser_info.m"
      mdb__browser_info__FormatParamCmds_14 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_21_21, mdb__browser_info__V_24_24);
    }
#line 1146 "browser_info.m"
    {
#line 1146 "browser_info.m"
      return mdb__browser_info__Cmds_6 = mercury__string__f_43_43_2_f_0(mdb__browser_info__FormatCmd_12, mdb__browser_info__FormatParamCmds_14);
    }
#line 1136 "browser_info.m"
    return mdb__browser_info__Cmds_6;
#line 1136 "browser_info.m"
  }
#line 1134 "browser_info.m"
}

#line 995 "browser_info.m"
static void MR_CALL 
mdb__browser_info__write_path_2_4_p_0(
#line 995 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_1,
#line 995 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 995 "browser_info.m"
{
#line 997 "browser_info.m"
  while (MR_TRUE)
#line 997 "browser_info.m"
    {
#line 997 "browser_info.m"
      /* tailcall optimized into a loop */
#line 997 "browser_info.m"
      {
#line 997 "browser_info.m"
        MR_bool mdb__browser_info__succeeded;

#line 997 "browser_info.m"
        if ((mdb__browser_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 997 "browser_info.m"
          {
#line 998 "browser_info.m"
            {
#line 998 "browser_info.m"
              mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
#line 998 "browser_info.m"
              return;
            }
#line 997 "browser_info.m"
          }
#line 997 "browser_info.m"
        else
#line 997 "browser_info.m"
          {
#line 997 "browser_info.m"
            MR_Word mdb__browser_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 997 "browser_info.m"
            MR_Word mdb__browser_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 997 "browser_info.m"
            if ((mdb__browser_info__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1003 "browser_info.m"
#line 1003 "browser_info.m"
              switch (MR_tag((MR_Word) mdb__browser_info__V_52_52)) {
#line 1003 "browser_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1003 "browser_info.m"
                case (MR_Integer) 0:
#line 1001 "browser_info.m"
                  {
#line 1002 "browser_info.m"
                    {
#line 1002 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/..");
#line 1002 "browser_info.m"
                      return;
                    }
#line 1001 "browser_info.m"
                  }
#line 1003 "browser_info.m"
                  break;
#line 1003 "browser_info.m"
                case (MR_Integer) 1:
#line 1004 "browser_info.m"
                  {
#line 1004 "browser_info.m"
                    MR_Integer mdb__browser_info__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__V_52_52, (MR_Integer) 0)));

#line 1005 "browser_info.m"
                    {
#line 1005 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
                    }
#line 1006 "browser_info.m"
                    {
#line 1006 "browser_info.m"
                      mdb__browser_info__write_int_debugger_4_p_0(mdb__browser_info__Debugger_1, mdb__browser_info__N_14);
#line 1006 "browser_info.m"
                      return;
                    }
#line 1004 "browser_info.m"
                  }
#line 1003 "browser_info.m"
                  break;
#line 1003 "browser_info.m"
                case (MR_Integer) 2:
#line 1008 "browser_info.m"
                  {
#line 1008 "browser_info.m"
                    MR_String mdb__browser_info__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__V_52_52, (MR_Integer) 0)));

#line 1009 "browser_info.m"
                    {
#line 1009 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
                    }
#line 1010 "browser_info.m"
                    {
#line 1010 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, mdb__browser_info__Name_15);
#line 1010 "browser_info.m"
                      return;
                    }
#line 1008 "browser_info.m"
                  }
#line 1003 "browser_info.m"
                  break;
#line 1003 "browser_info.m"
              }
#line 997 "browser_info.m"
            else
#line 1017 "browser_info.m"
#line 1017 "browser_info.m"
              switch (MR_tag((MR_Word) mdb__browser_info__V_52_52)) {
#line 1017 "browser_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1017 "browser_info.m"
                case (MR_Integer) 0:
#line 1014 "browser_info.m"
                  {
#line 1015 "browser_info.m"
                    {
#line 1015 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/..");
                    }
#line 1016 "browser_info.m"
                    /* direct tailcall eliminated */
#line 1016 "browser_info.m"
                    {
#line 1016 "browser_info.m"
                      MR_Word mdb__browser_info__HeadVar__2__tmp_copy_2 = mdb__browser_info__V_51_51;

#line 1016 "browser_info.m"
                      mdb__browser_info__HeadVar__2_2 = mdb__browser_info__HeadVar__2__tmp_copy_2;
#line 1016 "browser_info.m"
                    }
#line 1016 "browser_info.m"
                    continue;
#line 1014 "browser_info.m"
                  }
#line 1017 "browser_info.m"
                  break;
#line 1017 "browser_info.m"
                case (MR_Integer) 1:
#line 1018 "browser_info.m"
                  {
#line 1018 "browser_info.m"
                    MR_Integer mdb__browser_info__N_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__V_52_52, (MR_Integer) 0)));

#line 1019 "browser_info.m"
                    {
#line 1019 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
                    }
#line 1020 "browser_info.m"
                    {
#line 1020 "browser_info.m"
                      mdb__browser_info__write_int_debugger_4_p_0(mdb__browser_info__Debugger_1, mdb__browser_info__N_32);
                    }
#line 1021 "browser_info.m"
                    /* direct tailcall eliminated */
#line 1021 "browser_info.m"
                    {
#line 1021 "browser_info.m"
                      MR_Word mdb__browser_info__HeadVar__2__tmp_copy_2 = mdb__browser_info__V_51_51;

#line 1021 "browser_info.m"
                      mdb__browser_info__HeadVar__2_2 = mdb__browser_info__HeadVar__2__tmp_copy_2;
#line 1021 "browser_info.m"
                    }
#line 1021 "browser_info.m"
                    continue;
#line 1018 "browser_info.m"
                  }
#line 1017 "browser_info.m"
                  break;
#line 1017 "browser_info.m"
                case (MR_Integer) 2:
#line 1023 "browser_info.m"
                  {
#line 1023 "browser_info.m"
                    MR_String mdb__browser_info__Name_33 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__V_52_52, (MR_Integer) 0)));

#line 1024 "browser_info.m"
                    {
#line 1024 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
                    }
#line 1025 "browser_info.m"
                    {
#line 1025 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, mdb__browser_info__Name_33);
                    }
#line 1026 "browser_info.m"
                    /* direct tailcall eliminated */
#line 1026 "browser_info.m"
                    {
#line 1026 "browser_info.m"
                      MR_Word mdb__browser_info__HeadVar__2__tmp_copy_2 = mdb__browser_info__V_51_51;

#line 1026 "browser_info.m"
                      mdb__browser_info__HeadVar__2_2 = mdb__browser_info__HeadVar__2__tmp_copy_2;
#line 1026 "browser_info.m"
                    }
#line 1026 "browser_info.m"
                    continue;
#line 1023 "browser_info.m"
                  }
#line 1017 "browser_info.m"
                  break;
#line 1017 "browser_info.m"
              }
#line 997 "browser_info.m"
          }
#line 997 "browser_info.m"
      }
#line 997 "browser_info.m"
      break;
#line 997 "browser_info.m"
    }
#line 995 "browser_info.m"
}

#line 909 "browser_info.m"
static void MR_CALL 
mdb__browser_info__show_settings_caller_format_8_p_0(
#line 909 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_9,
#line 909 "browser_info.m"
  MR_Word mdb__browser_info__Info_10,
#line 909 "browser_info.m"
  MR_Word mdb__browser_info__Caller_11,
#line 909 "browser_info.m"
  MR_String mdb__browser_info__CallerName_12,
#line 909 "browser_info.m"
  MR_Word mdb__browser_info__Format_13,
#line 909 "browser_info.m"
  MR_String mdb__browser_info__FormatName_14)
#line 909 "browser_info.m"
{
#line 914 "browser_info.m"
  {
#line 914 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 914 "browser_info.m"
    MR_Word mdb__browser_info__Params_16;
#line 914 "browser_info.m"
    MR_String mdb__browser_info__V_19_19;
#line 914 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 914 "browser_info.m"
    MR_String mdb__browser_info__V_22_22;
#line 914 "browser_info.m"
    MR_String mdb__browser_info__V_24_24;
#line 914 "browser_info.m"
    MR_String mdb__browser_info__V_28_28;
#line 914 "browser_info.m"
    MR_String mdb__browser_info__V_33_33;
#line 914 "browser_info.m"
    MR_String mdb__browser_info__V_35_35;
#line 914 "browser_info.m"
    MR_Integer mdb__browser_info__V_36_36;
#line 914 "browser_info.m"
    MR_String mdb__browser_info__V_39_39;
#line 914 "browser_info.m"
    MR_String mdb__browser_info__V_41_41;
#line 914 "browser_info.m"
    MR_Integer mdb__browser_info__V_42_42;
#line 914 "browser_info.m"
    MR_String mdb__browser_info__V_45_45;
#line 914 "browser_info.m"
    MR_String mdb__browser_info__V_47_47;
#line 914 "browser_info.m"
    MR_Integer mdb__browser_info__V_48_48;
#line 914 "browser_info.m"
    MR_String mdb__browser_info__V_51_51;
#line 914 "browser_info.m"
    MR_String mdb__browser_info__V_53_53;
#line 914 "browser_info.m"
    MR_Integer mdb__browser_info__V_54_54;
#line 922 "browser_info.m"
    MR_Integer mdb__browser_info__V_58_58;
#line 922 "browser_info.m"
    MR_Integer mdb__browser_info__V_59_59;
#line 922 "browser_info.m"
    MR_Integer mdb__browser_info__V_60_60;
#line 924 "browser_info.m"
    MR_Integer mdb__browser_info__V_61_61;
#line 924 "browser_info.m"
    MR_Integer mdb__browser_info__V_62_62;
#line 924 "browser_info.m"
    MR_Integer mdb__browser_info__V_63_63;
#line 926 "browser_info.m"
    MR_Integer mdb__browser_info__V_64_64;
#line 926 "browser_info.m"
    MR_Integer mdb__browser_info__V_65_65;
#line 926 "browser_info.m"
    MR_Integer mdb__browser_info__V_66_66;
#line 928 "browser_info.m"
    MR_Integer mdb__browser_info__V_67_67;
#line 928 "browser_info.m"
    MR_Integer mdb__browser_info__V_68_68;
#line 928 "browser_info.m"
    MR_Integer mdb__browser_info__V_69_69;

#line 915 "browser_info.m"
    {
#line 915 "browser_info.m"
      mdb__browser_info__get_format_params_4_p_0(mdb__browser_info__Info_10, mdb__browser_info__Caller_11, mdb__browser_info__Format_13, &mdb__browser_info__Params_16);
    }
#line 917 "browser_info.m"
    {
#line 917 "browser_info.m"
      mdb__browser_info__V_24_24 = mercury__string__f_43_43_2_f_0(mdb__browser_info__FormatName_14, (MR_String) ":");
    }
#line 917 "browser_info.m"
    {
#line 917 "browser_info.m"
      mdb__browser_info__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) " ", mdb__browser_info__V_24_24);
    }
#line 917 "browser_info.m"
    {
#line 917 "browser_info.m"
      mdb__browser_info__V_21_21 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CallerName_12, mdb__browser_info__V_22_22);
    }
#line 917 "browser_info.m"
    {
#line 917 "browser_info.m"
      mdb__browser_info__V_19_19 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_21_21, (MR_Char) 32, (MR_Integer) 30);
    }
#line 916 "browser_info.m"
    {
#line 916 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_19_19);
    }
#line 920 "browser_info.m"
    {
#line 920 "browser_info.m"
      mdb__browser_info__V_28_28 = mercury__string__pad_right_3_f_0((MR_String) " ", (MR_Char) 32, (MR_Integer) 3);
    }
#line 919 "browser_info.m"
    {
#line 919 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_28_28);
    }
#line 922 "browser_info.m"
    mdb__browser_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 0)));
#line 922 "browser_info.m"
    mdb__browser_info__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 1)));
#line 922 "browser_info.m"
    mdb__browser_info__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 2)));
#line 922 "browser_info.m"
    mdb__browser_info__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 3)));
#line 922 "browser_info.m"
    {
#line 922 "browser_info.m"
      mdb__browser_info__V_35_35 = mercury__string__int_to_string_1_f_0(mdb__browser_info__V_36_36);
    }
#line 922 "browser_info.m"
    {
#line 922 "browser_info.m"
      mdb__browser_info__V_33_33 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_35_35, (MR_Char) 32, (MR_Integer) 10);
    }
#line 921 "browser_info.m"
    {
#line 921 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_33_33);
    }
#line 924 "browser_info.m"
    mdb__browser_info__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 0)));
#line 924 "browser_info.m"
    mdb__browser_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 1)));
#line 924 "browser_info.m"
    mdb__browser_info__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 2)));
#line 924 "browser_info.m"
    mdb__browser_info__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 3)));
#line 924 "browser_info.m"
    {
#line 924 "browser_info.m"
      mdb__browser_info__V_41_41 = mercury__string__int_to_string_1_f_0(mdb__browser_info__V_42_42);
    }
#line 924 "browser_info.m"
    {
#line 924 "browser_info.m"
      mdb__browser_info__V_39_39 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_41_41, (MR_Char) 32, (MR_Integer) 10);
    }
#line 923 "browser_info.m"
    {
#line 923 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_39_39);
    }
#line 926 "browser_info.m"
    mdb__browser_info__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 0)));
#line 926 "browser_info.m"
    mdb__browser_info__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 1)));
#line 926 "browser_info.m"
    mdb__browser_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 2)));
#line 926 "browser_info.m"
    mdb__browser_info__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 3)));
#line 926 "browser_info.m"
    {
#line 926 "browser_info.m"
      mdb__browser_info__V_47_47 = mercury__string__int_to_string_1_f_0(mdb__browser_info__V_48_48);
    }
#line 926 "browser_info.m"
    {
#line 926 "browser_info.m"
      mdb__browser_info__V_45_45 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_47_47, (MR_Char) 32, (MR_Integer) 10);
    }
#line 925 "browser_info.m"
    {
#line 925 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_45_45);
    }
#line 928 "browser_info.m"
    mdb__browser_info__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 0)));
#line 928 "browser_info.m"
    mdb__browser_info__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 1)));
#line 928 "browser_info.m"
    mdb__browser_info__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 2)));
#line 928 "browser_info.m"
    mdb__browser_info__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 3)));
#line 928 "browser_info.m"
    {
#line 928 "browser_info.m"
      mdb__browser_info__V_53_53 = mercury__string__int_to_string_1_f_0(mdb__browser_info__V_54_54);
    }
#line 928 "browser_info.m"
    {
#line 928 "browser_info.m"
      mdb__browser_info__V_51_51 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_53_53, (MR_Char) 32, (MR_Integer) 10);
    }
#line 927 "browser_info.m"
    {
#line 927 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_51_51);
    }
#line 929 "browser_info.m"
    {
#line 929 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_9);
#line 929 "browser_info.m"
      return;
    }
#line 914 "browser_info.m"
  }
#line 909 "browser_info.m"
}

#line 882 "browser_info.m"
static void MR_CALL 
mdb__browser_info__show_settings_caller_6_p_0(
#line 882 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_7,
#line 882 "browser_info.m"
  MR_Word mdb__browser_info__Info_8,
#line 882 "browser_info.m"
  MR_Word mdb__browser_info__Caller_9,
#line 882 "browser_info.m"
  MR_String mdb__browser_info__CallerName_10)
#line 882 "browser_info.m"
{
#line 885 "browser_info.m"
  {
#line 885 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 885 "browser_info.m"
    MR_Word mdb__browser_info__Format_12;
#line 885 "browser_info.m"
    MR_String mdb__browser_info__V_16_16;
#line 885 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 885 "browser_info.m"
    MR_String mdb__browser_info__V_26_26;
#line 885 "browser_info.m"
    MR_String mdb__browser_info__V_31_31;
#line 885 "browser_info.m"
    MR_String mdb__browser_info__V_36_36;
#line 885 "browser_info.m"
    MR_String mdb__browser_info__V_41_41;
#line 885 "browser_info.m"
    MR_String mdb__browser_info__V_46_46;
#line 885 "browser_info.m"
    MR_Word mdb__browser_info__MdbFormatOption_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 3)));
#line 885 "browser_info.m"
    MR_Word mdb__browser_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 4)));
#line 535 "browser_info.m"
    MR_Word mdb__browser_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 0)));
#line 535 "browser_info.m"
    MR_Word mdb__browser_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 1)));
#line 535 "browser_info.m"
    MR_Word mdb__browser_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 2)));
#line 535 "browser_info.m"
    MR_Word mdb__browser_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 5)));
#line 535 "browser_info.m"
    MR_Word mdb__browser_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 6)));

#line 538 "browser_info.m"
    if ((mdb__browser_info__MdbFormatOption_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 539 "browser_info.m"
      {
#line 539 "browser_info.m"
        MR_Word mdb__browser_info__Params_70;
#line 539 "browser_info.m"
        MR_Word mdb__browser_info__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 2)));
#line 539 "browser_info.m"
        MR_Word mdb__browser_info__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 1)));
#line 539 "browser_info.m"
        MR_Word mdb__browser_info__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 0)));
#line 807 "browser_info.m"
        MR_Word mdb__browser_info__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 5)));
#line 807 "browser_info.m"
        MR_Word mdb__browser_info__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 4)));
#line 807 "browser_info.m"
        MR_Integer mdb__browser_info__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 3)));
#line 541 "browser_info.m"
        MR_Word mdb__browser_info__V_84_84;
#line 541 "browser_info.m"
        MR_Word mdb__browser_info__V_85_85;
#line 541 "browser_info.m"
        MR_Word mdb__browser_info__V_86_86;
#line 541 "browser_info.m"
        MR_Word mdb__browser_info__V_87_87;

#line 807 "browser_info.m"
#line 807 "browser_info.m"
        switch (mdb__browser_info__Caller_9) {
#line 807 "browser_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 807 "browser_info.m"
          case (MR_Integer) 1:
#line 808 "browser_info.m"
            mdb__browser_info__Params_70 = mdb__browser_info__V_110_110;
#line 807 "browser_info.m"
            break;
#line 807 "browser_info.m"
          case (MR_Integer) 0:
#line 807 "browser_info.m"
            mdb__browser_info__Params_70 = mdb__browser_info__V_111_111;
#line 807 "browser_info.m"
            break;
#line 807 "browser_info.m"
          case (MR_Integer) 2:
#line 809 "browser_info.m"
            mdb__browser_info__Params_70 = mdb__browser_info__V_109_109;
#line 807 "browser_info.m"
            break;
#line 807 "browser_info.m"
        }
#line 541 "browser_info.m"
        mdb__browser_info__Format_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 0)));
#line 541 "browser_info.m"
        mdb__browser_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 1)));
#line 541 "browser_info.m"
        mdb__browser_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 2)));
#line 541 "browser_info.m"
        mdb__browser_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 3)));
#line 541 "browser_info.m"
        mdb__browser_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 4)));
#line 539 "browser_info.m"
      }
#line 538 "browser_info.m"
    else
#line 537 "browser_info.m"
      mdb__browser_info__Format_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__MdbFormatOption_69, (MR_Integer) 0)));
#line 887 "browser_info.m"
    {
#line 887 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CallerName_10, (MR_String) " default format: ");
    }
#line 887 "browser_info.m"
    {
#line 887 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_16_16);
    }
#line 888 "browser_info.m"
    {
#line 888 "browser_info.m"
      mdb__browser_info__print_format_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Format_12);
    }
#line 889 "browser_info.m"
    {
#line 889 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_7);
    }
#line 891 "browser_info.m"
    {
#line 891 "browser_info.m"
      mdb__browser_info__V_21_21 = mercury__string__pad_right_3_f_0((MR_String) "", (MR_Char) 32, (MR_Integer) 30);
    }
#line 891 "browser_info.m"
    {
#line 891 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_21_21);
    }
#line 892 "browser_info.m"
    {
#line 892 "browser_info.m"
      mdb__browser_info__V_26_26 = mercury__string__pad_right_3_f_0((MR_String) " ", (MR_Char) 32, (MR_Integer) 3);
    }
#line 892 "browser_info.m"
    {
#line 892 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_26_26);
    }
#line 893 "browser_info.m"
    {
#line 893 "browser_info.m"
      mdb__browser_info__V_31_31 = mercury__string__pad_right_3_f_0((MR_String) "depth", (MR_Char) 32, (MR_Integer) 10);
    }
#line 893 "browser_info.m"
    {
#line 893 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_31_31);
    }
#line 894 "browser_info.m"
    {
#line 894 "browser_info.m"
      mdb__browser_info__V_36_36 = mercury__string__pad_right_3_f_0((MR_String) "size", (MR_Char) 32, (MR_Integer) 10);
    }
#line 894 "browser_info.m"
    {
#line 894 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_36_36);
    }
#line 895 "browser_info.m"
    {
#line 895 "browser_info.m"
      mdb__browser_info__V_41_41 = mercury__string__pad_right_3_f_0((MR_String) "width", (MR_Char) 32, (MR_Integer) 10);
    }
#line 895 "browser_info.m"
    {
#line 895 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_41_41);
    }
#line 896 "browser_info.m"
    {
#line 896 "browser_info.m"
      mdb__browser_info__V_46_46 = mercury__string__pad_right_3_f_0((MR_String) "lines", (MR_Char) 32, (MR_Integer) 10);
    }
#line 896 "browser_info.m"
    {
#line 896 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_46_46);
    }
#line 897 "browser_info.m"
    {
#line 897 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_7);
    }
#line 899 "browser_info.m"
    {
#line 899 "browser_info.m"
      mdb__browser_info__show_settings_caller_format_8_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Info_8, mdb__browser_info__Caller_9, mdb__browser_info__CallerName_10, (MR_Integer) 0, (MR_String) "flat");
    }
#line 901 "browser_info.m"
    {
#line 901 "browser_info.m"
      mdb__browser_info__show_settings_caller_format_8_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Info_8, mdb__browser_info__Caller_9, mdb__browser_info__CallerName_10, (MR_Integer) 2, (MR_String) "verbose");
    }
#line 903 "browser_info.m"
    {
#line 903 "browser_info.m"
      mdb__browser_info__show_settings_caller_format_8_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Info_8, mdb__browser_info__Caller_9, mdb__browser_info__CallerName_10, (MR_Integer) 3, (MR_String) "pretty");
    }
#line 905 "browser_info.m"
    {
#line 905 "browser_info.m"
      mdb__browser_info__show_settings_caller_format_8_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Info_8, mdb__browser_info__Caller_9, mdb__browser_info__CallerName_10, (MR_Integer) 1, (MR_String) "raw_pretty");
    }
#line 907 "browser_info.m"
    {
#line 907 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_7);
#line 907 "browser_info.m"
      return;
    }
#line 885 "browser_info.m"
  }
#line 882 "browser_info.m"
}

#line 793 "browser_info.m"
static void MR_CALL 
mdb__browser_info__maybe_set_param_2_4_p_0(
#line 793 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 793 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 793 "browser_info.m"
  MR_Word mdb__browser_info__Params_3,
#line 793 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__4_4)
#line 793 "browser_info.m"
{
#line 796 "browser_info.m"
  {
#line 796 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 796 "browser_info.m"
#line 796 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 796 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 796 "browser_info.m"
      case (MR_Integer) 0:
#line 796 "browser_info.m"
        *mdb__browser_info__HeadVar__4_4 = mdb__browser_info__Params_3;
#line 796 "browser_info.m"
        break;
#line 796 "browser_info.m"
      case (MR_Integer) 1:
#line 796 "browser_info.m"
#line 796 "browser_info.m"
        switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) {
#line 796 "browser_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 796 "browser_info.m"
          case (MR_Integer) 0:
#line 797 "browser_info.m"
            {
#line 797 "browser_info.m"
              MR_Integer mdb__browser_info__D_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 797 "browser_info.m"
              MR_Integer mdb__browser_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 1)));
#line 797 "browser_info.m"
              MR_Integer mdb__browser_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 2)));
#line 797 "browser_info.m"
              MR_Integer mdb__browser_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 3)));
#line 797 "browser_info.m"
              MR_Integer mdb__browser_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 0)));

#line 797 "browser_info.m"
              {
#line 797 "browser_info.m"
                MR_Word base;
#line 797 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 797 "browser_info.m"
                *mdb__browser_info__HeadVar__4_4 = base;
#line 797 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__D_7));
#line 797 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_22_22));
#line 797 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_23_23));
#line 797 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_24_24));
#line 797 "browser_info.m"
              }
#line 797 "browser_info.m"
            }
#line 796 "browser_info.m"
            break;
#line 796 "browser_info.m"
          case (MR_Integer) 1:
#line 798 "browser_info.m"
            {
#line 798 "browser_info.m"
              MR_Integer mdb__browser_info__S_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 798 "browser_info.m"
              MR_Integer mdb__browser_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 0)));
#line 798 "browser_info.m"
              MR_Integer mdb__browser_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 2)));
#line 798 "browser_info.m"
              MR_Integer mdb__browser_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 3)));
#line 798 "browser_info.m"
              MR_Integer mdb__browser_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 1)));

#line 798 "browser_info.m"
              {
#line 798 "browser_info.m"
                MR_Word base;
#line 798 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 798 "browser_info.m"
                *mdb__browser_info__HeadVar__4_4 = base;
#line 798 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_25_25));
#line 798 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__S_9));
#line 798 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_27_27));
#line 798 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_28_28));
#line 798 "browser_info.m"
              }
#line 798 "browser_info.m"
            }
#line 796 "browser_info.m"
            break;
#line 796 "browser_info.m"
          case (MR_Integer) 2:
#line 801 "browser_info.m"
            {
#line 801 "browser_info.m"
              MR_Integer mdb__browser_info__W_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 801 "browser_info.m"
              MR_Integer mdb__browser_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 0)));
#line 801 "browser_info.m"
              MR_Integer mdb__browser_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 1)));
#line 801 "browser_info.m"
              MR_Integer mdb__browser_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 3)));
#line 801 "browser_info.m"
              MR_Integer mdb__browser_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 2)));

#line 801 "browser_info.m"
              {
#line 801 "browser_info.m"
                MR_Word base;
#line 801 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 801 "browser_info.m"
                *mdb__browser_info__HeadVar__4_4 = base;
#line 801 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_29_29));
#line 801 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_30_30));
#line 801 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__W_17));
#line 801 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_32_32));
#line 801 "browser_info.m"
              }
#line 801 "browser_info.m"
            }
#line 796 "browser_info.m"
            break;
#line 796 "browser_info.m"
          case (MR_Integer) 3:
#line 796 "browser_info.m"
#line 796 "browser_info.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) {
#line 796 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 796 "browser_info.m"
              case (MR_Integer) 0:
#line 802 "browser_info.m"
                {
#line 802 "browser_info.m"
                  MR_Integer mdb__browser_info__L_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 802 "browser_info.m"
                  MR_Integer mdb__browser_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 0)));
#line 802 "browser_info.m"
                  MR_Integer mdb__browser_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 1)));
#line 802 "browser_info.m"
                  MR_Integer mdb__browser_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 2)));
#line 802 "browser_info.m"
                  MR_Integer mdb__browser_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 3)));

#line 802 "browser_info.m"
                  {
#line 802 "browser_info.m"
                    MR_Word base;
#line 802 "browser_info.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 802 "browser_info.m"
                    *mdb__browser_info__HeadVar__4_4 = base;
#line 802 "browser_info.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_33_33));
#line 802 "browser_info.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_34_34));
#line 802 "browser_info.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_35_35));
#line 802 "browser_info.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__L_19));
#line 802 "browser_info.m"
                  }
#line 802 "browser_info.m"
                }
#line 796 "browser_info.m"
                break;
#line 796 "browser_info.m"
              case (MR_Integer) 1:
#line 799 "browser_info.m"
                {
#line 800 "browser_info.m"
                  {
#line 800 "browser_info.m"
                    mercury__require__unexpected_3_p_0((MR_String) "mdb.browser_info", (MR_String) "predicate \140mdb.browser_info.maybe_set_param_2\'/4", (MR_String) "cannot set format here");
#line 800 "browser_info.m"
                    return;
                  }
#line 799 "browser_info.m"
                }
#line 796 "browser_info.m"
                break;
#line 796 "browser_info.m"
            }
#line 796 "browser_info.m"
            break;
#line 796 "browser_info.m"
        }
#line 796 "browser_info.m"
        break;
#line 796 "browser_info.m"
    }
#line 796 "browser_info.m"
  }
#line 793 "browser_info.m"
}

#line 766 "browser_info.m"
static void MR_CALL 
mdb__browser_info__maybe_set_param_8_p_0(
#line 766 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 766 "browser_info.m"
  MR_Word mdb__browser_info__F_2,
#line 766 "browser_info.m"
  MR_Word mdb__browser_info__Pr_3,
#line 766 "browser_info.m"
  MR_Word mdb__browser_info__V_4,
#line 766 "browser_info.m"
  MR_Word mdb__browser_info__NPr_5,
#line 766 "browser_info.m"
  MR_Word mdb__browser_info__Setting_6,
#line 766 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Params_0_7,
#line 766 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Params_8)
#line 766 "browser_info.m"
{
#line 769 "browser_info.m"
  {
#line 769 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 769 "browser_info.m"
#line 769 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 769 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 769 "browser_info.m"
      case (MR_Integer) 0:
#line 769 "browser_info.m"
        *mdb__browser_info__STATE_VARIABLE_Params_8 = mdb__browser_info__STATE_VARIABLE_Params_0_7;
#line 769 "browser_info.m"
        break;
#line 769 "browser_info.m"
      case (MR_Integer) 1:
#line 770 "browser_info.m"
        {
#line 770 "browser_info.m"
          MR_Word mdb__browser_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 4)));
#line 770 "browser_info.m"
          MR_Word mdb__browser_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 3)));
#line 770 "browser_info.m"
          MR_Word mdb__browser_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 2)));
#line 770 "browser_info.m"
          MR_Word mdb__browser_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 1)));
#line 770 "browser_info.m"
          MR_Word mdb__browser_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 0)));

#line 774 "browser_info.m"
#line 774 "browser_info.m"
          switch (MR_tag((MR_Word) mdb__browser_info__Setting_6)) {
#line 774 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 774 "browser_info.m"
            case (MR_Integer) 0:
#line 774 "browser_info.m"
            case (MR_Integer) 1:
#line 774 "browser_info.m"
            case (MR_Integer) 2:
#line 779 "browser_info.m"
              {
#line 779 "browser_info.m"
                MR_Word mdb__browser_info__FParams_33;
#line 779 "browser_info.m"
                MR_Word mdb__browser_info__PrParams_34;
#line 779 "browser_info.m"
                MR_Word mdb__browser_info__VParams_35;
#line 779 "browser_info.m"
                MR_Word mdb__browser_info__NPrParams_36;

#line 785 "browser_info.m"
                {
#line 785 "browser_info.m"
                  mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__F_2, mdb__browser_info__Setting_6, mdb__browser_info__V_69_69, &mdb__browser_info__FParams_33);
                }
#line 786 "browser_info.m"
                {
#line 786 "browser_info.m"
                  mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__Pr_3, mdb__browser_info__Setting_6, mdb__browser_info__V_68_68, &mdb__browser_info__PrParams_34);
                }
#line 787 "browser_info.m"
                {
#line 787 "browser_info.m"
                  mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__V_4, mdb__browser_info__Setting_6, mdb__browser_info__V_67_67, &mdb__browser_info__VParams_35);
                }
#line 788 "browser_info.m"
                {
#line 788 "browser_info.m"
                  mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__NPr_5, mdb__browser_info__Setting_6, mdb__browser_info__V_66_66, &mdb__browser_info__NPrParams_36);
                }
#line 789 "browser_info.m"
                {
#line 789 "browser_info.m"
                  MR_Word base;
#line 789 "browser_info.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 789 "browser_info.m"
                  *mdb__browser_info__STATE_VARIABLE_Params_8 = base;
#line 789 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_70_70));
#line 789 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__FParams_33));
#line 789 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__PrParams_34));
#line 789 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__VParams_35));
#line 789 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__NPrParams_36));
#line 789 "browser_info.m"
                }
#line 779 "browser_info.m"
              }
#line 774 "browser_info.m"
              break;
#line 774 "browser_info.m"
            case (MR_Integer) 3:
#line 774 "browser_info.m"
#line 774 "browser_info.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__Setting_6, (MR_Integer) 0)))) {
#line 774 "browser_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 774 "browser_info.m"
                case (MR_Integer) 0:
#line 779 "browser_info.m"
                  {
#line 779 "browser_info.m"
                    MR_Word mdb__browser_info__FParams_33;
#line 779 "browser_info.m"
                    MR_Word mdb__browser_info__PrParams_34;
#line 779 "browser_info.m"
                    MR_Word mdb__browser_info__VParams_35;
#line 779 "browser_info.m"
                    MR_Word mdb__browser_info__NPrParams_36;

#line 785 "browser_info.m"
                    {
#line 785 "browser_info.m"
                      mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__F_2, mdb__browser_info__Setting_6, mdb__browser_info__V_69_69, &mdb__browser_info__FParams_33);
                    }
#line 786 "browser_info.m"
                    {
#line 786 "browser_info.m"
                      mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__Pr_3, mdb__browser_info__Setting_6, mdb__browser_info__V_68_68, &mdb__browser_info__PrParams_34);
                    }
#line 787 "browser_info.m"
                    {
#line 787 "browser_info.m"
                      mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__V_4, mdb__browser_info__Setting_6, mdb__browser_info__V_67_67, &mdb__browser_info__VParams_35);
                    }
#line 788 "browser_info.m"
                    {
#line 788 "browser_info.m"
                      mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__NPr_5, mdb__browser_info__Setting_6, mdb__browser_info__V_66_66, &mdb__browser_info__NPrParams_36);
                    }
#line 789 "browser_info.m"
                    {
#line 789 "browser_info.m"
                      MR_Word base;
#line 789 "browser_info.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 789 "browser_info.m"
                      *mdb__browser_info__STATE_VARIABLE_Params_8 = base;
#line 789 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_70_70));
#line 789 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__FParams_33));
#line 789 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__PrParams_34));
#line 789 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__VParams_35));
#line 789 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__NPrParams_36));
#line 789 "browser_info.m"
                    }
#line 779 "browser_info.m"
                  }
#line 774 "browser_info.m"
                  break;
#line 774 "browser_info.m"
                case (MR_Integer) 1:
#line 772 "browser_info.m"
                  {
#line 772 "browser_info.m"
                    MR_Word mdb__browser_info__NewFormat_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__Setting_6, (MR_Integer) 1)));

#line 773 "browser_info.m"
                    {
#line 773 "browser_info.m"
                      MR_Word base;
#line 773 "browser_info.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 773 "browser_info.m"
                      *mdb__browser_info__STATE_VARIABLE_Params_8 = base;
#line 773 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__NewFormat_23));
#line 773 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_69_69));
#line 773 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_68_68));
#line 773 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_67_67));
#line 773 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_66_66));
#line 773 "browser_info.m"
                    }
#line 772 "browser_info.m"
                  }
#line 774 "browser_info.m"
                  break;
#line 774 "browser_info.m"
              }
#line 774 "browser_info.m"
              break;
#line 774 "browser_info.m"
          }
#line 770 "browser_info.m"
        }
#line 769 "browser_info.m"
        break;
#line 769 "browser_info.m"
    }
#line 769 "browser_info.m"
  }
#line 766 "browser_info.m"
}

#line 518 "browser_info.m"
static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_no_0_f_0(void)
#line 518 "browser_info.m"
{
#line 522 "browser_info.m"
  {
#line 522 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 522 "browser_info.m"
    return (MR_Integer) 0;
#line 522 "browser_info.m"
  }
#line 518 "browser_info.m"
}

#line 512 "browser_info.m"
static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_yes_0_f_0(void)
#line 512 "browser_info.m"
{
#line 516 "browser_info.m"
  {
#line 516 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 516 "browser_info.m"
    return (MR_Integer) 1;
#line 516 "browser_info.m"
  }
#line 512 "browser_info.m"
}

#line 494 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0(
#line 494 "browser_info.m"
  MR_String mdb__browser_info__FileName_4,
#line 494 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 494 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 494 "browser_info.m"
{
#line 503 "browser_info.m"
  {
#line 503 "browser_info.m"
    MR_bool mdb__browser_info__succeeded = (strcmp(mdb__browser_info__FileName_4, (MR_String) "") == 0);

#line 503 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 502 "browser_info.m"
      {
#line 191 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 0)));
#line 191 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 1)));
#line 191 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 2)));
#line 191 "browser_info.m"
        MR_Integer mdb__browser_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 3)));
#line 191 "browser_info.m"
        MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 4)));
#line 191 "browser_info.m"
        MR_Word mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 5)));

#line 191 "browser_info.m"
        {
#line 191 "browser_info.m"
          MR_Word base;
#line 191 "browser_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 191 "browser_info.m"
          *mdb__browser_info__STATE_VARIABLE_Browser_7 = base;
#line 191 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_12_12));
#line 191 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_13_13));
#line 191 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_14_14));
#line 191 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_15_15));
#line 191 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_16_16));
#line 191 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "browser_info.m"
        }
#line 502 "browser_info.m"
      }
#line 503 "browser_info.m"
    else
#line 504 "browser_info.m"
      {
#line 504 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11;
#line 191 "browser_info.m"
        MR_Word mdb__browser_info__V_18_18;
#line 191 "browser_info.m"
        MR_Word mdb__browser_info__V_19_19;
#line 191 "browser_info.m"
        MR_Word mdb__browser_info__V_20_20;
#line 191 "browser_info.m"
        MR_Integer mdb__browser_info__V_21_21;
#line 191 "browser_info.m"
        MR_Word mdb__browser_info__V_22_22;
#line 191 "browser_info.m"
        MR_Word mdb__browser_info__V_23_23;

#line 504 "browser_info.m"
        {
#line 504 "browser_info.m"
          mdb__browser_info__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 504 "browser_info.m"
          MR_hl_field(MR_mktag(1), mdb__browser_info__V_11_11, 0) = ((MR_Box) (mdb__browser_info__FileName_4));
#line 504 "browser_info.m"
        }
#line 191 "browser_info.m"
        mdb__browser_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 0)));
#line 191 "browser_info.m"
        mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 1)));
#line 191 "browser_info.m"
        mdb__browser_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 2)));
#line 191 "browser_info.m"
        mdb__browser_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 3)));
#line 191 "browser_info.m"
        mdb__browser_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 4)));
#line 191 "browser_info.m"
        mdb__browser_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 5)));
#line 191 "browser_info.m"
        {
#line 191 "browser_info.m"
          MR_Word base;
#line 191 "browser_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 191 "browser_info.m"
          *mdb__browser_info__STATE_VARIABLE_Browser_7 = base;
#line 191 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_18_18));
#line 191 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_19_19));
#line 191 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_20_20));
#line 191 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_21_21));
#line 191 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_22_22));
#line 191 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_11_11));
#line 191 "browser_info.m"
        }
#line 504 "browser_info.m"
      }
#line 503 "browser_info.m"
  }
#line 494 "browser_info.m"
}

#line 479 "browser_info.m"
static void MR_CALL 
mdb__browser_info__get_xml_tmp_filename_from_mdb_2_p_0(
#line 479 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 479 "browser_info.m"
  MR_String * mdb__browser_info__FileName_4)
#line 479 "browser_info.m"
{
#line 485 "browser_info.m"
  {
#line 485 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 485 "browser_info.m"
    MR_Word mdb__browser_info__MaybeFileName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 5)));
#line 190 "browser_info.m"
    MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 0)));
#line 190 "browser_info.m"
    MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 1)));
#line 190 "browser_info.m"
    MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 2)));
#line 190 "browser_info.m"
    MR_Integer mdb__browser_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 3)));
#line 190 "browser_info.m"
    MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 4)));

#line 490 "browser_info.m"
    if ((mdb__browser_info__MaybeFileName_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "browser_info.m"
      *mdb__browser_info__FileName_4 = (MR_String) "";
#line 490 "browser_info.m"
    else
#line 491 "browser_info.m"
      *mdb__browser_info__FileName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeFileName_5, (MR_Integer) 0)));
#line 485 "browser_info.m"
  }
#line 479 "browser_info.m"
}

#line 466 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0(
#line 466 "browser_info.m"
  MR_String mdb__browser_info__Command_4,
#line 466 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 466 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 466 "browser_info.m"
{
#line 475 "browser_info.m"
  {
#line 475 "browser_info.m"
    MR_bool mdb__browser_info__succeeded = (strcmp(mdb__browser_info__Command_4, (MR_String) "") == 0);

#line 475 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 474 "browser_info.m"
      {
#line 187 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 0)));
#line 187 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 1)));
#line 187 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 2)));
#line 187 "browser_info.m"
        MR_Integer mdb__browser_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 3)));
#line 187 "browser_info.m"
        MR_Word mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 5)));
#line 187 "browser_info.m"
        MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 4)));

#line 187 "browser_info.m"
        {
#line 187 "browser_info.m"
          MR_Word base;
#line 187 "browser_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 187 "browser_info.m"
          *mdb__browser_info__STATE_VARIABLE_Browser_7 = base;
#line 187 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_12_12));
#line 187 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_13_13));
#line 187 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_14_14));
#line 187 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_15_15));
#line 187 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_17_17));
#line 187 "browser_info.m"
        }
#line 474 "browser_info.m"
      }
#line 475 "browser_info.m"
    else
#line 476 "browser_info.m"
      {
#line 476 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11;
#line 187 "browser_info.m"
        MR_Word mdb__browser_info__V_18_18;
#line 187 "browser_info.m"
        MR_Word mdb__browser_info__V_19_19;
#line 187 "browser_info.m"
        MR_Word mdb__browser_info__V_20_20;
#line 187 "browser_info.m"
        MR_Integer mdb__browser_info__V_21_21;
#line 187 "browser_info.m"
        MR_Word mdb__browser_info__V_23_23;
#line 187 "browser_info.m"
        MR_Word mdb__browser_info__V_22_22;

#line 476 "browser_info.m"
        {
#line 476 "browser_info.m"
          mdb__browser_info__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 476 "browser_info.m"
          MR_hl_field(MR_mktag(1), mdb__browser_info__V_11_11, 0) = ((MR_Box) (mdb__browser_info__Command_4));
#line 476 "browser_info.m"
        }
#line 187 "browser_info.m"
        mdb__browser_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 0)));
#line 187 "browser_info.m"
        mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 1)));
#line 187 "browser_info.m"
        mdb__browser_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 2)));
#line 187 "browser_info.m"
        mdb__browser_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 3)));
#line 187 "browser_info.m"
        mdb__browser_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 4)));
#line 187 "browser_info.m"
        mdb__browser_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 5)));
#line 187 "browser_info.m"
        {
#line 187 "browser_info.m"
          MR_Word base;
#line 187 "browser_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 187 "browser_info.m"
          *mdb__browser_info__STATE_VARIABLE_Browser_7 = base;
#line 187 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_18_18));
#line 187 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_19_19));
#line 187 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_20_20));
#line 187 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_21_21));
#line 187 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_11_11));
#line 187 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_23_23));
#line 187 "browser_info.m"
        }
#line 476 "browser_info.m"
      }
#line 475 "browser_info.m"
  }
#line 466 "browser_info.m"
}

#line 451 "browser_info.m"
static void MR_CALL 
mdb__browser_info__get_xml_browser_cmd_from_mdb_2_p_0(
#line 451 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 451 "browser_info.m"
  MR_String * mdb__browser_info__Command_4)
#line 451 "browser_info.m"
{
#line 457 "browser_info.m"
  {
#line 457 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 457 "browser_info.m"
    MR_Word mdb__browser_info__MaybeCommand_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 4)));
#line 186 "browser_info.m"
    MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 0)));
#line 186 "browser_info.m"
    MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 1)));
#line 186 "browser_info.m"
    MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 2)));
#line 186 "browser_info.m"
    MR_Integer mdb__browser_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 3)));
#line 186 "browser_info.m"
    MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 5)));

#line 462 "browser_info.m"
    if ((mdb__browser_info__MaybeCommand_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "browser_info.m"
      *mdb__browser_info__Command_4 = (MR_String) "";
#line 462 "browser_info.m"
    else
#line 463 "browser_info.m"
      *mdb__browser_info__Command_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeCommand_5, (MR_Integer) 0)));
#line 457 "browser_info.m"
  }
#line 451 "browser_info.m"
}

#line 426 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_format_from_mdb_6_p_0(
#line 426 "browser_info.m"
  MR_Word mdb__browser_info__P_7,
#line 426 "browser_info.m"
  MR_Word mdb__browser_info__B_8,
#line 426 "browser_info.m"
  MR_Word mdb__browser_info__A_9,
#line 426 "browser_info.m"
  MR_Word mdb__browser_info__Format_10,
#line 426 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_12,
#line 426 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_13)
#line 426 "browser_info.m"
{
#line 432 "browser_info.m"
  {
#line 432 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 432 "browser_info.m"
    MR_Word mdb__browser_info__V_19_19;

#line 434 "browser_info.m"
    {
#line 434 "browser_info.m"
      mdb__browser_info__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "browser_info.m"
      MR_hl_field(MR_mktag(3), mdb__browser_info__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 434 "browser_info.m"
      MR_hl_field(MR_mktag(3), mdb__browser_info__V_19_19, 1) = ((MR_Box) (mdb__browser_info__Format_10));
#line 434 "browser_info.m"
    }
#line 434 "browser_info.m"
    {
#line 434 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_7, mdb__browser_info__B_8, mdb__browser_info__A_9, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, mdb__browser_info__V_19_19, mdb__browser_info__STATE_VARIABLE_Browser_0_12, mdb__browser_info__STATE_VARIABLE_Browser_13);
#line 434 "browser_info.m"
      return;
    }
#line 432 "browser_info.m"
  }
#line 426 "browser_info.m"
}

#line 393 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_lines_from_mdb_10_p_0(
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 393 "browser_info.m"
  MR_Integer mdb__browser_info__Lines_18,
#line 393 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 393 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 393 "browser_info.m"
{
#line 400 "browser_info.m"
  {
#line 400 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 400 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;

#line 401 "browser_info.m"
    {
#line 401 "browser_info.m"
      mdb__browser_info__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "browser_info.m"
      MR_hl_field(MR_mktag(3), mdb__browser_info__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 401 "browser_info.m"
      MR_hl_field(MR_mktag(3), mdb__browser_info__V_23_23, 1) = ((MR_Box) (mdb__browser_info__Lines_18));
#line 401 "browser_info.m"
    }
#line 401 "browser_info.m"
    {
#line 401 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_11, mdb__browser_info__B_12, mdb__browser_info__A_13, mdb__browser_info__F_14, mdb__browser_info__Pr_15, mdb__browser_info__V_16, mdb__browser_info__NPr_17, mdb__browser_info__V_23_23, mdb__browser_info__STATE_VARIABLE_Browser_0_20, mdb__browser_info__STATE_VARIABLE_Browser_21);
#line 401 "browser_info.m"
      return;
    }
#line 400 "browser_info.m"
  }
#line 393 "browser_info.m"
}

#line 382 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_width_from_mdb_10_p_0(
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 382 "browser_info.m"
  MR_Integer mdb__browser_info__Width_18,
#line 382 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 382 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 382 "browser_info.m"
{
#line 389 "browser_info.m"
  {
#line 389 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 389 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;

#line 390 "browser_info.m"
    {
#line 390 "browser_info.m"
      mdb__browser_info__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 390 "browser_info.m"
      MR_hl_field(MR_mktag(2), mdb__browser_info__V_23_23, 0) = ((MR_Box) (mdb__browser_info__Width_18));
#line 390 "browser_info.m"
    }
#line 390 "browser_info.m"
    {
#line 390 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_11, mdb__browser_info__B_12, mdb__browser_info__A_13, mdb__browser_info__F_14, mdb__browser_info__Pr_15, mdb__browser_info__V_16, mdb__browser_info__NPr_17, mdb__browser_info__V_23_23, mdb__browser_info__STATE_VARIABLE_Browser_0_20, mdb__browser_info__STATE_VARIABLE_Browser_21);
#line 390 "browser_info.m"
      return;
    }
#line 389 "browser_info.m"
  }
#line 382 "browser_info.m"
}

#line 371 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_size_from_mdb_10_p_0(
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__NPr_16,
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__V_17,
#line 371 "browser_info.m"
  MR_Integer mdb__browser_info__Size_18,
#line 371 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 371 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 371 "browser_info.m"
{
#line 378 "browser_info.m"
  {
#line 378 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 378 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;

#line 379 "browser_info.m"
    {
#line 379 "browser_info.m"
      mdb__browser_info__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 379 "browser_info.m"
      MR_hl_field(MR_mktag(1), mdb__browser_info__V_23_23, 0) = ((MR_Box) (mdb__browser_info__Size_18));
#line 379 "browser_info.m"
    }
#line 379 "browser_info.m"
    {
#line 379 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_11, mdb__browser_info__B_12, mdb__browser_info__A_13, mdb__browser_info__F_14, mdb__browser_info__Pr_15, mdb__browser_info__V_17, mdb__browser_info__NPr_16, mdb__browser_info__V_23_23, mdb__browser_info__STATE_VARIABLE_Browser_0_20, mdb__browser_info__STATE_VARIABLE_Browser_21);
#line 379 "browser_info.m"
      return;
    }
#line 378 "browser_info.m"
  }
#line 371 "browser_info.m"
}

#line 360 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_depth_from_mdb_10_p_0(
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 360 "browser_info.m"
  MR_Integer mdb__browser_info__Depth_18,
#line 360 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 360 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 360 "browser_info.m"
{
#line 367 "browser_info.m"
  {
#line 367 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 367 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;

#line 368 "browser_info.m"
    {
#line 368 "browser_info.m"
      mdb__browser_info__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 368 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__V_23_23, 0) = ((MR_Box) (mdb__browser_info__Depth_18));
#line 368 "browser_info.m"
    }
#line 368 "browser_info.m"
    {
#line 368 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_11, mdb__browser_info__B_12, mdb__browser_info__A_13, mdb__browser_info__F_14, mdb__browser_info__Pr_15, mdb__browser_info__V_16, mdb__browser_info__NPr_17, mdb__browser_info__V_23_23, mdb__browser_info__STATE_VARIABLE_Browser_0_20, mdb__browser_info__STATE_VARIABLE_Browser_21);
#line 368 "browser_info.m"
      return;
    }
#line 367 "browser_info.m"
  }
#line 360 "browser_info.m"
}

#line 337 "browser_info.m"
void MR_CALL 
mdb__browser_info__functor_browser_term_cc_5_p_0(
#line 337 "browser_info.m"
  MR_Word mdb__browser_info__BrowserDb_6,
#line 337 "browser_info.m"
  MR_Word mdb__browser_info__BrowserTerm_7,
#line 337 "browser_info.m"
  MR_String * mdb__browser_info__Functor_8,
#line 337 "browser_info.m"
  MR_Integer * mdb__browser_info__Arity_9,
#line 337 "browser_info.m"
  MR_Word * mdb__browser_info__IsFunc_10)
#line 337 "browser_info.m"
{
#line 1221 "browser_info.m"
  {
#line 1221 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1221 "browser_info.m"
    if (((MR_tag((MR_Word) mdb__browser_info__BrowserTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 1221 "browser_info.m"
      {
#line 1221 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_17_17;
#line 1221 "browser_info.m"
        MR_Word mdb__browser_info__Univ_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__BrowserTerm_7, (MR_Integer) 0)));
#line 1221 "browser_info.m"
        MR_Box mdb__browser_info__V_15_15;
#line 1221 "browser_info.m"
        MR_Word mdb__browser_info__Univ_24;
#line 1244 "browser_info.m"
        MR_Word mdb__browser_info__InputStream_22;
#line 1240 "browser_info.m"
        MR_Box mdb__browser_info__conv0_InputStream_22;

#line 1240 "browser_info.m"
        {
#line 1240 "browser_info.m"
          mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_input_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv0_InputStream_22);
        }
#line 1240 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1240 "browser_info.m"
          {
#line 1240 "browser_info.m"
            mdb__browser_info__InputStream_22 = ((MR_Word) mdb__browser_info__conv0_InputStream_22);
#line 1240 "browser_info.m"
            mdb__browser_info__succeeded = MR_TRUE;
#line 1240 "browser_info.m"
          }
#line 1244 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1242 "browser_info.m"
          {
#line 1242 "browser_info.m"
            MR_Word mdb__browser_info__InputStreamInfo_23;
#line 1242 "browser_info.m"
            MR_Word mdb__browser_info__V_31_31 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1241 "browser_info.m"
            {
#line 1241 "browser_info.m"
              mdb__browser_info__InputStreamInfo_23 = mercury__io__input_stream_info_2_f_0(mdb__browser_info__V_31_31, mdb__browser_info__InputStream_22);
            }
#line 1243 "browser_info.m"
            {
#line 1243 "browser_info.m"
              mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__InputStreamInfo_23)), &mdb__browser_info__Univ_24);
            }
#line 1242 "browser_info.m"
          }
#line 1244 "browser_info.m"
        else
#line 1248 "browser_info.m"
          {
#line 1248 "browser_info.m"
            MR_Word mdb__browser_info__OutputStream_25;
#line 1244 "browser_info.m"
            MR_Box mdb__browser_info__conv1_OutputStream_25;

#line 1244 "browser_info.m"
            {
#line 1244 "browser_info.m"
              mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_output_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv1_OutputStream_25);
            }
#line 1244 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1244 "browser_info.m"
              {
#line 1244 "browser_info.m"
                mdb__browser_info__OutputStream_25 = ((MR_Word) mdb__browser_info__conv1_OutputStream_25);
#line 1244 "browser_info.m"
                mdb__browser_info__succeeded = MR_TRUE;
#line 1244 "browser_info.m"
              }
#line 1248 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1246 "browser_info.m"
              {
#line 1246 "browser_info.m"
                MR_Word mdb__browser_info__OutputStreamInfo_26;
#line 1246 "browser_info.m"
                MR_Word mdb__browser_info__V_32_32 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1245 "browser_info.m"
                {
#line 1245 "browser_info.m"
                  mdb__browser_info__OutputStreamInfo_26 = mercury__io__output_stream_info_2_f_0(mdb__browser_info__V_32_32, mdb__browser_info__OutputStream_25);
                }
#line 1247 "browser_info.m"
                {
#line 1247 "browser_info.m"
                  mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__OutputStreamInfo_26)), &mdb__browser_info__Univ_24);
                }
#line 1246 "browser_info.m"
              }
#line 1248 "browser_info.m"
            else
#line 1252 "browser_info.m"
              {
#line 1252 "browser_info.m"
                MR_Word mdb__browser_info__BinaryInputStream_27;
#line 1248 "browser_info.m"
                MR_Box mdb__browser_info__conv2_BinaryInputStream_27;

#line 1248 "browser_info.m"
                {
#line 1248 "browser_info.m"
                  mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_input_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv2_BinaryInputStream_27);
                }
#line 1248 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1248 "browser_info.m"
                  {
#line 1248 "browser_info.m"
                    mdb__browser_info__BinaryInputStream_27 = ((MR_Word) mdb__browser_info__conv2_BinaryInputStream_27);
#line 1248 "browser_info.m"
                    mdb__browser_info__succeeded = MR_TRUE;
#line 1248 "browser_info.m"
                  }
#line 1252 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1250 "browser_info.m"
                  {
#line 1250 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryInputStreamInfo_28;
#line 1250 "browser_info.m"
                    MR_Word mdb__browser_info__V_33_33 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1249 "browser_info.m"
                    {
#line 1249 "browser_info.m"
                      mdb__browser_info__BinaryInputStreamInfo_28 = mercury__io__binary_input_stream_info_2_f_0(mdb__browser_info__V_33_33, mdb__browser_info__BinaryInputStream_27);
                    }
#line 1251 "browser_info.m"
                    {
#line 1251 "browser_info.m"
                      mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryInputStreamInfo_28)), &mdb__browser_info__Univ_24);
                    }
#line 1250 "browser_info.m"
                  }
#line 1252 "browser_info.m"
                else
#line 1256 "browser_info.m"
                  {
#line 1256 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryOutputStream_29;
#line 1252 "browser_info.m"
                    MR_Box mdb__browser_info__conv3_BinaryOutputStream_29;

#line 1252 "browser_info.m"
                    {
#line 1252 "browser_info.m"
                      mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_output_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv3_BinaryOutputStream_29);
                    }
#line 1252 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1252 "browser_info.m"
                      {
#line 1252 "browser_info.m"
                        mdb__browser_info__BinaryOutputStream_29 = ((MR_Word) mdb__browser_info__conv3_BinaryOutputStream_29);
#line 1252 "browser_info.m"
                        mdb__browser_info__succeeded = MR_TRUE;
#line 1252 "browser_info.m"
                      }
#line 1256 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1254 "browser_info.m"
                      {
#line 1254 "browser_info.m"
                        MR_Word mdb__browser_info__BinaryOutputStreamInfo_30;
#line 1254 "browser_info.m"
                        MR_Word mdb__browser_info__V_34_34 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1253 "browser_info.m"
                        {
#line 1253 "browser_info.m"
                          mdb__browser_info__BinaryOutputStreamInfo_30 = mercury__io__binary_output_stream_info_2_f_0(mdb__browser_info__V_34_34, mdb__browser_info__BinaryOutputStream_29);
                        }
#line 1255 "browser_info.m"
                        {
#line 1255 "browser_info.m"
                          mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryOutputStreamInfo_30)), &mdb__browser_info__Univ_24);
                        }
#line 1254 "browser_info.m"
                      }
#line 1256 "browser_info.m"
                    else
#line 1257 "browser_info.m"
                      mdb__browser_info__Univ_24 = mdb__browser_info__Univ_11;
#line 1256 "browser_info.m"
                  }
#line 1252 "browser_info.m"
              }
#line 1248 "browser_info.m"
          }
#line 1259 "browser_info.m"
        {
#line 1259 "browser_info.m"
          mdb__browser_info__V_15_15 = mercury__univ__univ_value_1_f_0(&mdb__browser_info__TypeInfo_17_17, mdb__browser_info__Univ_24);
        }
#line 1222 "browser_info.m"
        {
#line 1222 "browser_info.m"
          mercury__deconstruct__functor_4_p_2(mdb__browser_info__TypeInfo_17_17, mdb__browser_info__V_15_15, (MR_Integer) 2, mdb__browser_info__Functor_8, mdb__browser_info__Arity_9);
        }
#line 1224 "browser_info.m"
        *mdb__browser_info__IsFunc_10 = (MR_Integer) 0;
#line 1221 "browser_info.m"
      }
#line 1221 "browser_info.m"
    else
#line 1226 "browser_info.m"
      {
#line 1226 "browser_info.m"
        MR_Word mdb__browser_info__Args_12;
#line 1226 "browser_info.m"
        MR_Word mdb__browser_info__MaybeReturn_13;

#line 1226 "browser_info.m"
        *mdb__browser_info__Functor_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 0)));
#line 1226 "browser_info.m"
        mdb__browser_info__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 1)));
#line 1226 "browser_info.m"
        mdb__browser_info__MaybeReturn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 2)));
#line 1227 "browser_info.m"
        {
#line 1227 "browser_info.m"
          mercury__list__length_2_p_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browser_info__Args_12, mdb__browser_info__Arity_9);
        }
#line 1231 "browser_info.m"
        if ((mdb__browser_info__MaybeReturn_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1233 "browser_info.m"
          *mdb__browser_info__IsFunc_10 = (MR_Integer) 0;
#line 1231 "browser_info.m"
        else
#line 1230 "browser_info.m"
          *mdb__browser_info__IsFunc_10 = (MR_Integer) 1;
#line 1226 "browser_info.m"
      }
#line 1221 "browser_info.m"
  }
#line 337 "browser_info.m"
}

#line 333 "browser_info.m"
void MR_CALL 
mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(
#line 333 "browser_info.m"
  MR_Word mdb__browser_info__BrowserDb_6,
#line 333 "browser_info.m"
  MR_Word mdb__browser_info__BrowserTerm_7,
#line 333 "browser_info.m"
  MR_Integer mdb__browser_info__Limit_8,
#line 333 "browser_info.m"
  MR_Word * mdb__browser_info__MaybeFunctorArityArgs_9,
#line 333 "browser_info.m"
  MR_Word * mdb__browser_info__MaybeReturn_10)
#line 333 "browser_info.m"
{
#line 1209 "browser_info.m"
  {
#line 1209 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1209 "browser_info.m"
    if (((MR_tag((MR_Word) mdb__browser_info__BrowserTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 1209 "browser_info.m"
      {
#line 1209 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_17_17;
#line 1209 "browser_info.m"
        MR_Word mdb__browser_info__Univ_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__BrowserTerm_7, (MR_Integer) 0)));
#line 1209 "browser_info.m"
        MR_Box mdb__browser_info__V_16_16;
#line 1209 "browser_info.m"
        MR_Word mdb__browser_info__Univ_24;
#line 1244 "browser_info.m"
        MR_Word mdb__browser_info__InputStream_22;
#line 1240 "browser_info.m"
        MR_Box mdb__browser_info__conv0_InputStream_22;

#line 1240 "browser_info.m"
        {
#line 1240 "browser_info.m"
          mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_input_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv0_InputStream_22);
        }
#line 1240 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1240 "browser_info.m"
          {
#line 1240 "browser_info.m"
            mdb__browser_info__InputStream_22 = ((MR_Word) mdb__browser_info__conv0_InputStream_22);
#line 1240 "browser_info.m"
            mdb__browser_info__succeeded = MR_TRUE;
#line 1240 "browser_info.m"
          }
#line 1244 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1242 "browser_info.m"
          {
#line 1242 "browser_info.m"
            MR_Word mdb__browser_info__InputStreamInfo_23;
#line 1242 "browser_info.m"
            MR_Word mdb__browser_info__V_31_31 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1241 "browser_info.m"
            {
#line 1241 "browser_info.m"
              mdb__browser_info__InputStreamInfo_23 = mercury__io__input_stream_info_2_f_0(mdb__browser_info__V_31_31, mdb__browser_info__InputStream_22);
            }
#line 1243 "browser_info.m"
            {
#line 1243 "browser_info.m"
              mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__InputStreamInfo_23)), &mdb__browser_info__Univ_24);
            }
#line 1242 "browser_info.m"
          }
#line 1244 "browser_info.m"
        else
#line 1248 "browser_info.m"
          {
#line 1248 "browser_info.m"
            MR_Word mdb__browser_info__OutputStream_25;
#line 1244 "browser_info.m"
            MR_Box mdb__browser_info__conv1_OutputStream_25;

#line 1244 "browser_info.m"
            {
#line 1244 "browser_info.m"
              mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_output_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv1_OutputStream_25);
            }
#line 1244 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1244 "browser_info.m"
              {
#line 1244 "browser_info.m"
                mdb__browser_info__OutputStream_25 = ((MR_Word) mdb__browser_info__conv1_OutputStream_25);
#line 1244 "browser_info.m"
                mdb__browser_info__succeeded = MR_TRUE;
#line 1244 "browser_info.m"
              }
#line 1248 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1246 "browser_info.m"
              {
#line 1246 "browser_info.m"
                MR_Word mdb__browser_info__OutputStreamInfo_26;
#line 1246 "browser_info.m"
                MR_Word mdb__browser_info__V_32_32 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1245 "browser_info.m"
                {
#line 1245 "browser_info.m"
                  mdb__browser_info__OutputStreamInfo_26 = mercury__io__output_stream_info_2_f_0(mdb__browser_info__V_32_32, mdb__browser_info__OutputStream_25);
                }
#line 1247 "browser_info.m"
                {
#line 1247 "browser_info.m"
                  mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__OutputStreamInfo_26)), &mdb__browser_info__Univ_24);
                }
#line 1246 "browser_info.m"
              }
#line 1248 "browser_info.m"
            else
#line 1252 "browser_info.m"
              {
#line 1252 "browser_info.m"
                MR_Word mdb__browser_info__BinaryInputStream_27;
#line 1248 "browser_info.m"
                MR_Box mdb__browser_info__conv2_BinaryInputStream_27;

#line 1248 "browser_info.m"
                {
#line 1248 "browser_info.m"
                  mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_input_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv2_BinaryInputStream_27);
                }
#line 1248 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1248 "browser_info.m"
                  {
#line 1248 "browser_info.m"
                    mdb__browser_info__BinaryInputStream_27 = ((MR_Word) mdb__browser_info__conv2_BinaryInputStream_27);
#line 1248 "browser_info.m"
                    mdb__browser_info__succeeded = MR_TRUE;
#line 1248 "browser_info.m"
                  }
#line 1252 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1250 "browser_info.m"
                  {
#line 1250 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryInputStreamInfo_28;
#line 1250 "browser_info.m"
                    MR_Word mdb__browser_info__V_33_33 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1249 "browser_info.m"
                    {
#line 1249 "browser_info.m"
                      mdb__browser_info__BinaryInputStreamInfo_28 = mercury__io__binary_input_stream_info_2_f_0(mdb__browser_info__V_33_33, mdb__browser_info__BinaryInputStream_27);
                    }
#line 1251 "browser_info.m"
                    {
#line 1251 "browser_info.m"
                      mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryInputStreamInfo_28)), &mdb__browser_info__Univ_24);
                    }
#line 1250 "browser_info.m"
                  }
#line 1252 "browser_info.m"
                else
#line 1256 "browser_info.m"
                  {
#line 1256 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryOutputStream_29;
#line 1252 "browser_info.m"
                    MR_Box mdb__browser_info__conv3_BinaryOutputStream_29;

#line 1252 "browser_info.m"
                    {
#line 1252 "browser_info.m"
                      mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_output_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv3_BinaryOutputStream_29);
                    }
#line 1252 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1252 "browser_info.m"
                      {
#line 1252 "browser_info.m"
                        mdb__browser_info__BinaryOutputStream_29 = ((MR_Word) mdb__browser_info__conv3_BinaryOutputStream_29);
#line 1252 "browser_info.m"
                        mdb__browser_info__succeeded = MR_TRUE;
#line 1252 "browser_info.m"
                      }
#line 1256 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1254 "browser_info.m"
                      {
#line 1254 "browser_info.m"
                        MR_Word mdb__browser_info__BinaryOutputStreamInfo_30;
#line 1254 "browser_info.m"
                        MR_Word mdb__browser_info__V_34_34 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1253 "browser_info.m"
                        {
#line 1253 "browser_info.m"
                          mdb__browser_info__BinaryOutputStreamInfo_30 = mercury__io__binary_output_stream_info_2_f_0(mdb__browser_info__V_34_34, mdb__browser_info__BinaryOutputStream_29);
                        }
#line 1255 "browser_info.m"
                        {
#line 1255 "browser_info.m"
                          mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryOutputStreamInfo_30)), &mdb__browser_info__Univ_24);
                        }
#line 1254 "browser_info.m"
                      }
#line 1256 "browser_info.m"
                    else
#line 1257 "browser_info.m"
                      mdb__browser_info__Univ_24 = mdb__browser_info__Univ_11;
#line 1256 "browser_info.m"
                  }
#line 1252 "browser_info.m"
              }
#line 1248 "browser_info.m"
          }
#line 1259 "browser_info.m"
        {
#line 1259 "browser_info.m"
          mdb__browser_info__V_16_16 = mercury__univ__univ_value_1_f_0(&mdb__browser_info__TypeInfo_17_17, mdb__browser_info__Univ_24);
        }
#line 1210 "browser_info.m"
        {
#line 1210 "browser_info.m"
          mercury__deconstruct__limited_deconstruct_cc_3_p_0(mdb__browser_info__TypeInfo_17_17, mdb__browser_info__V_16_16, mdb__browser_info__Limit_8, mdb__browser_info__MaybeFunctorArityArgs_9);
        }
#line 1212 "browser_info.m"
        *mdb__browser_info__MaybeReturn_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "browser_info.m"
      }
#line 1209 "browser_info.m"
    else
#line 1214 "browser_info.m"
      {
#line 1214 "browser_info.m"
        MR_String mdb__browser_info__Functor_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 0)));
#line 1214 "browser_info.m"
        MR_Word mdb__browser_info__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 1)));
#line 1214 "browser_info.m"
        MR_Integer mdb__browser_info__Arity_14;
#line 1214 "browser_info.m"
        MR_Tuple mdb__browser_info__V_15_15;

#line 1214 "browser_info.m"
        *mdb__browser_info__MaybeReturn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 2)));
#line 1215 "browser_info.m"
        {
#line 1215 "browser_info.m"
          mercury__list__length_2_p_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browser_info__Args_13, &mdb__browser_info__Arity_14);
        }
#line 1216 "browser_info.m"
        {
#line 1216 "browser_info.m"
          mdb__browser_info__V_15_15 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "browser_info.m"
          MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, 0) = ((MR_Box) (mdb__browser_info__Functor_12));
#line 1216 "browser_info.m"
          MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, 1) = ((MR_Box) (mdb__browser_info__Arity_14));
#line 1216 "browser_info.m"
          MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, 2) = ((MR_Box) (mdb__browser_info__Args_13));
#line 1216 "browser_info.m"
        }
#line 1216 "browser_info.m"
        {
#line 1216 "browser_info.m"
          MR_Word base;
#line 1216 "browser_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1216 "browser_info.m"
          *mdb__browser_info__MaybeFunctorArityArgs_9 = base;
#line 1216 "browser_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browser_info__V_15_15));
#line 1216 "browser_info.m"
        }
#line 1214 "browser_info.m"
      }
#line 1209 "browser_info.m"
  }
#line 333 "browser_info.m"
}

#line 330 "browser_info.m"
void MR_CALL 
mdb__browser_info__deconstruct_browser_term_cc_6_p_0(
#line 330 "browser_info.m"
  MR_Word mdb__browser_info__BrowserDb_7,
#line 330 "browser_info.m"
  MR_Word mdb__browser_info__BrowserTerm_8,
#line 330 "browser_info.m"
  MR_String * mdb__browser_info__Functor_9,
#line 330 "browser_info.m"
  MR_Integer * mdb__browser_info__Arity_10,
#line 330 "browser_info.m"
  MR_Word * mdb__browser_info__Args_11,
#line 330 "browser_info.m"
  MR_Word * mdb__browser_info__MaybeReturn_12)
#line 330 "browser_info.m"
{
#line 1197 "browser_info.m"
  {
#line 1197 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1197 "browser_info.m"
    if (((MR_tag((MR_Word) mdb__browser_info__BrowserTerm_8)) == (MR_mktag((MR_Integer) 0))))
#line 1197 "browser_info.m"
      {
#line 1197 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_16_16;
#line 1197 "browser_info.m"
        MR_Word mdb__browser_info__Univ_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__BrowserTerm_8, (MR_Integer) 0)));
#line 1197 "browser_info.m"
        MR_Box mdb__browser_info__V_14_14;
#line 1197 "browser_info.m"
        MR_Word mdb__browser_info__Univ_23;
#line 1244 "browser_info.m"
        MR_Word mdb__browser_info__InputStream_21;
#line 1240 "browser_info.m"
        MR_Box mdb__browser_info__conv0_InputStream_21;

#line 1240 "browser_info.m"
        {
#line 1240 "browser_info.m"
          mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_input_stream_0, mdb__browser_info__Univ_13, &mdb__browser_info__conv0_InputStream_21);
        }
#line 1240 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1240 "browser_info.m"
          {
#line 1240 "browser_info.m"
            mdb__browser_info__InputStream_21 = ((MR_Word) mdb__browser_info__conv0_InputStream_21);
#line 1240 "browser_info.m"
            mdb__browser_info__succeeded = MR_TRUE;
#line 1240 "browser_info.m"
          }
#line 1244 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1242 "browser_info.m"
          {
#line 1242 "browser_info.m"
            MR_Word mdb__browser_info__InputStreamInfo_22;
#line 1242 "browser_info.m"
            MR_Word mdb__browser_info__V_30_30 = (MR_Word) mdb__browser_info__BrowserDb_7;

#line 1241 "browser_info.m"
            {
#line 1241 "browser_info.m"
              mdb__browser_info__InputStreamInfo_22 = mercury__io__input_stream_info_2_f_0(mdb__browser_info__V_30_30, mdb__browser_info__InputStream_21);
            }
#line 1243 "browser_info.m"
            {
#line 1243 "browser_info.m"
              mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__InputStreamInfo_22)), &mdb__browser_info__Univ_23);
            }
#line 1242 "browser_info.m"
          }
#line 1244 "browser_info.m"
        else
#line 1248 "browser_info.m"
          {
#line 1248 "browser_info.m"
            MR_Word mdb__browser_info__OutputStream_24;
#line 1244 "browser_info.m"
            MR_Box mdb__browser_info__conv1_OutputStream_24;

#line 1244 "browser_info.m"
            {
#line 1244 "browser_info.m"
              mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_output_stream_0, mdb__browser_info__Univ_13, &mdb__browser_info__conv1_OutputStream_24);
            }
#line 1244 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1244 "browser_info.m"
              {
#line 1244 "browser_info.m"
                mdb__browser_info__OutputStream_24 = ((MR_Word) mdb__browser_info__conv1_OutputStream_24);
#line 1244 "browser_info.m"
                mdb__browser_info__succeeded = MR_TRUE;
#line 1244 "browser_info.m"
              }
#line 1248 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1246 "browser_info.m"
              {
#line 1246 "browser_info.m"
                MR_Word mdb__browser_info__OutputStreamInfo_25;
#line 1246 "browser_info.m"
                MR_Word mdb__browser_info__V_31_31 = (MR_Word) mdb__browser_info__BrowserDb_7;

#line 1245 "browser_info.m"
                {
#line 1245 "browser_info.m"
                  mdb__browser_info__OutputStreamInfo_25 = mercury__io__output_stream_info_2_f_0(mdb__browser_info__V_31_31, mdb__browser_info__OutputStream_24);
                }
#line 1247 "browser_info.m"
                {
#line 1247 "browser_info.m"
                  mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__OutputStreamInfo_25)), &mdb__browser_info__Univ_23);
                }
#line 1246 "browser_info.m"
              }
#line 1248 "browser_info.m"
            else
#line 1252 "browser_info.m"
              {
#line 1252 "browser_info.m"
                MR_Word mdb__browser_info__BinaryInputStream_26;
#line 1248 "browser_info.m"
                MR_Box mdb__browser_info__conv2_BinaryInputStream_26;

#line 1248 "browser_info.m"
                {
#line 1248 "browser_info.m"
                  mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_input_stream_0, mdb__browser_info__Univ_13, &mdb__browser_info__conv2_BinaryInputStream_26);
                }
#line 1248 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1248 "browser_info.m"
                  {
#line 1248 "browser_info.m"
                    mdb__browser_info__BinaryInputStream_26 = ((MR_Word) mdb__browser_info__conv2_BinaryInputStream_26);
#line 1248 "browser_info.m"
                    mdb__browser_info__succeeded = MR_TRUE;
#line 1248 "browser_info.m"
                  }
#line 1252 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1250 "browser_info.m"
                  {
#line 1250 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryInputStreamInfo_27;
#line 1250 "browser_info.m"
                    MR_Word mdb__browser_info__V_32_32 = (MR_Word) mdb__browser_info__BrowserDb_7;

#line 1249 "browser_info.m"
                    {
#line 1249 "browser_info.m"
                      mdb__browser_info__BinaryInputStreamInfo_27 = mercury__io__binary_input_stream_info_2_f_0(mdb__browser_info__V_32_32, mdb__browser_info__BinaryInputStream_26);
                    }
#line 1251 "browser_info.m"
                    {
#line 1251 "browser_info.m"
                      mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryInputStreamInfo_27)), &mdb__browser_info__Univ_23);
                    }
#line 1250 "browser_info.m"
                  }
#line 1252 "browser_info.m"
                else
#line 1256 "browser_info.m"
                  {
#line 1256 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryOutputStream_28;
#line 1252 "browser_info.m"
                    MR_Box mdb__browser_info__conv3_BinaryOutputStream_28;

#line 1252 "browser_info.m"
                    {
#line 1252 "browser_info.m"
                      mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_output_stream_0, mdb__browser_info__Univ_13, &mdb__browser_info__conv3_BinaryOutputStream_28);
                    }
#line 1252 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1252 "browser_info.m"
                      {
#line 1252 "browser_info.m"
                        mdb__browser_info__BinaryOutputStream_28 = ((MR_Word) mdb__browser_info__conv3_BinaryOutputStream_28);
#line 1252 "browser_info.m"
                        mdb__browser_info__succeeded = MR_TRUE;
#line 1252 "browser_info.m"
                      }
#line 1256 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1254 "browser_info.m"
                      {
#line 1254 "browser_info.m"
                        MR_Word mdb__browser_info__BinaryOutputStreamInfo_29;
#line 1254 "browser_info.m"
                        MR_Word mdb__browser_info__V_33_33 = (MR_Word) mdb__browser_info__BrowserDb_7;

#line 1253 "browser_info.m"
                        {
#line 1253 "browser_info.m"
                          mdb__browser_info__BinaryOutputStreamInfo_29 = mercury__io__binary_output_stream_info_2_f_0(mdb__browser_info__V_33_33, mdb__browser_info__BinaryOutputStream_28);
                        }
#line 1255 "browser_info.m"
                        {
#line 1255 "browser_info.m"
                          mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryOutputStreamInfo_29)), &mdb__browser_info__Univ_23);
                        }
#line 1254 "browser_info.m"
                      }
#line 1256 "browser_info.m"
                    else
#line 1257 "browser_info.m"
                      mdb__browser_info__Univ_23 = mdb__browser_info__Univ_13;
#line 1256 "browser_info.m"
                  }
#line 1252 "browser_info.m"
              }
#line 1248 "browser_info.m"
          }
#line 1259 "browser_info.m"
        {
#line 1259 "browser_info.m"
          mdb__browser_info__V_14_14 = mercury__univ__univ_value_1_f_0(&mdb__browser_info__TypeInfo_16_16, mdb__browser_info__Univ_23);
        }
#line 1198 "browser_info.m"
        {
#line 1198 "browser_info.m"
          mercury__deconstruct__deconstruct_5_p_2(mdb__browser_info__TypeInfo_16_16, mdb__browser_info__V_14_14, (MR_Integer) 2, mdb__browser_info__Functor_9, mdb__browser_info__Arity_10, mdb__browser_info__Args_11);
        }
#line 1200 "browser_info.m"
        *mdb__browser_info__MaybeReturn_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1197 "browser_info.m"
      }
#line 1197 "browser_info.m"
    else
#line 1202 "browser_info.m"
      {
#line 1202 "browser_info.m"
        *mdb__browser_info__Functor_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_8, (MR_Integer) 0)));
#line 1202 "browser_info.m"
        *mdb__browser_info__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_8, (MR_Integer) 1)));
#line 1202 "browser_info.m"
        *mdb__browser_info__MaybeReturn_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_8, (MR_Integer) 2)));
#line 1203 "browser_info.m"
        {
#line 1203 "browser_info.m"
          mercury__list__length_2_p_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, *mdb__browser_info__Args_11, mdb__browser_info__Arity_10);
#line 1203 "browser_info.m"
          return;
        }
#line 1202 "browser_info.m"
      }
#line 1197 "browser_info.m"
  }
#line 330 "browser_info.m"
}

#line 309 "browser_info.m"
void MR_CALL 
mdb__browser_info__browser_params_to_string_3_p_0(
#line 309 "browser_info.m"
  MR_Word mdb__browser_info__Browser_4,
#line 309 "browser_info.m"
  MR_Word mdb__browser_info__MDBCommandFormat_5,
#line 309 "browser_info.m"
  MR_String * mdb__browser_info__Desc_6)
#line 309 "browser_info.m"
{
#line 1067 "browser_info.m"
  {
#line 1067 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1067 "browser_info.m"
    MR_Word mdb__browser_info__PrintParams_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 0)));
#line 1067 "browser_info.m"
    MR_Word mdb__browser_info__BrowseParams_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 1)));
#line 1067 "browser_info.m"
    MR_Word mdb__browser_info__PrintAllParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 2)));
#line 1067 "browser_info.m"
    MR_Integer mdb__browser_info__NumIOActions_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 3)));
#line 1067 "browser_info.m"
    MR_Word mdb__browser_info__MaybeXMLBrowserCmd_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 4)));
#line 1067 "browser_info.m"
    MR_Word mdb__browser_info__MaybeXMLTmpFileName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 5)));

#line 1102 "browser_info.m"
#line 1102 "browser_info.m"
    switch (mdb__browser_info__MDBCommandFormat_5) {
#line 1102 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "browser_info.m"
      case (MR_Integer) 0:
#line 1103 "browser_info.m"
        {
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__ParamDesc_19;
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__NumIOActionDesc_20;
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__XMLBrowserCmdDesc_21;
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__XMLTmpFileNameDesc_22;
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__V_24_24;
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__V_25_25;
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__V_26_26;
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__V_28_28;
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__V_29_29;
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__V_30_30;
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__V_32_32;
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__V_34_34;
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__V_35_35;
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__V_43_43;
#line 1103 "browser_info.m"
          MR_String mdb__browser_info__V_44_44;

#line 1106 "browser_info.m"
          {
#line 1106 "browser_info.m"
            mdb__browser_info__V_25_25 = mdb__browser_info__caller_params_to_desc_1_f_0(mdb__browser_info__PrintParams_7);
          }
#line 1108 "browser_info.m"
          {
#line 1108 "browser_info.m"
            mdb__browser_info__V_29_29 = mdb__browser_info__caller_params_to_desc_1_f_0(mdb__browser_info__BrowseParams_8);
          }
#line 1110 "browser_info.m"
          {
#line 1110 "browser_info.m"
            mdb__browser_info__V_32_32 = mdb__browser_info__caller_params_to_desc_1_f_0(mdb__browser_info__PrintAllParams_9);
          }
#line 1109 "browser_info.m"
          {
#line 1109 "browser_info.m"
            mdb__browser_info__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "Print all parameters:\n", mdb__browser_info__V_32_32);
          }
#line 1108 "browser_info.m"
          {
#line 1108 "browser_info.m"
            mdb__browser_info__V_28_28 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_29_29, mdb__browser_info__V_30_30);
          }
#line 1107 "browser_info.m"
          {
#line 1107 "browser_info.m"
            mdb__browser_info__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "Browse parameters:\n", mdb__browser_info__V_28_28);
          }
#line 1106 "browser_info.m"
          {
#line 1106 "browser_info.m"
            mdb__browser_info__V_24_24 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_25_25, mdb__browser_info__V_26_26);
          }
#line 1105 "browser_info.m"
          {
#line 1105 "browser_info.m"
            mdb__browser_info__ParamDesc_19 = mercury__string__f_43_43_2_f_0((MR_String) "Print parameters:\n", mdb__browser_info__V_24_24);
          }
#line 1113 "browser_info.m"
          {
#line 1113 "browser_info.m"
            mdb__browser_info__V_35_35 = mercury__string__int_to_string_1_f_0(mdb__browser_info__NumIOActions_10);
          }
#line 1113 "browser_info.m"
          {
#line 1113 "browser_info.m"
            mdb__browser_info__V_34_34 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_35_35, (MR_String) "\n");
          }
#line 1112 "browser_info.m"
          {
#line 1112 "browser_info.m"
            mdb__browser_info__NumIOActionDesc_20 = mercury__string__f_43_43_2_f_0((MR_String) "Maximum number of I/O actions printed: ", mdb__browser_info__V_34_34);
          }
#line 1118 "browser_info.m"
          if ((mdb__browser_info__MaybeXMLBrowserCmd_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1120 "browser_info.m"
            mdb__browser_info__XMLBrowserCmdDesc_21 = (MR_String) "";
#line 1118 "browser_info.m"
          else
#line 1115 "browser_info.m"
            {
#line 1115 "browser_info.m"
              MR_String mdb__browser_info__V_38_38;
#line 1115 "browser_info.m"
              MR_String mdb__browser_info__XMLBrowserCmd_64 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeXMLBrowserCmd_11, (MR_Integer) 0)));

#line 1117 "browser_info.m"
              {
#line 1117 "browser_info.m"
                mdb__browser_info__V_38_38 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLBrowserCmd_64, (MR_String) "\n");
              }
#line 1117 "browser_info.m"
              {
#line 1117 "browser_info.m"
                mdb__browser_info__XMLBrowserCmdDesc_21 = mercury__string__f_43_43_2_f_0((MR_String) "XML browser command:    ", mdb__browser_info__V_38_38);
              }
#line 1115 "browser_info.m"
            }
#line 1126 "browser_info.m"
          if ((mdb__browser_info__MaybeXMLTmpFileName_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1128 "browser_info.m"
            mdb__browser_info__XMLTmpFileNameDesc_22 = (MR_String) "";
#line 1126 "browser_info.m"
          else
#line 1123 "browser_info.m"
            {
#line 1123 "browser_info.m"
              MR_String mdb__browser_info__V_41_41;
#line 1123 "browser_info.m"
              MR_String mdb__browser_info__XMLTmpFileName_66 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeXMLTmpFileName_12, (MR_Integer) 0)));

#line 1125 "browser_info.m"
              {
#line 1125 "browser_info.m"
                mdb__browser_info__V_41_41 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLTmpFileName_66, (MR_String) "\n");
              }
#line 1125 "browser_info.m"
              {
#line 1125 "browser_info.m"
                mdb__browser_info__XMLTmpFileNameDesc_22 = mercury__string__f_43_43_2_f_0((MR_String) "XML temporary filename: ", mdb__browser_info__V_41_41);
              }
#line 1123 "browser_info.m"
            }
#line 1131 "browser_info.m"
          {
#line 1131 "browser_info.m"
            mdb__browser_info__V_44_44 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLBrowserCmdDesc_21, mdb__browser_info__XMLTmpFileNameDesc_22);
          }
#line 1130 "browser_info.m"
          {
#line 1130 "browser_info.m"
            mdb__browser_info__V_43_43 = mercury__string__f_43_43_2_f_0(mdb__browser_info__NumIOActionDesc_20, mdb__browser_info__V_44_44);
          }
#line 1130 "browser_info.m"
          {
#line 1130 "browser_info.m"
            *mdb__browser_info__Desc_6 = mercury__string__f_43_43_2_f_0(mdb__browser_info__ParamDesc_19, mdb__browser_info__V_43_43);
          }
#line 1103 "browser_info.m"
        }
#line 1102 "browser_info.m"
        break;
#line 1102 "browser_info.m"
      case (MR_Integer) 1:
#line 1071 "browser_info.m"
        {
#line 1071 "browser_info.m"
          MR_String mdb__browser_info__ParamCmds_13;
#line 1071 "browser_info.m"
          MR_String mdb__browser_info__NumIOActionCmd_14;
#line 1071 "browser_info.m"
          MR_String mdb__browser_info__XMLBrowserCmdCmd_16;
#line 1071 "browser_info.m"
          MR_String mdb__browser_info__XMLTmpFileNameCmd_18;
#line 1071 "browser_info.m"
          MR_String mdb__browser_info__V_45_45;
#line 1071 "browser_info.m"
          MR_String mdb__browser_info__V_47_47;
#line 1071 "browser_info.m"
          MR_String mdb__browser_info__V_48_48;
#line 1071 "browser_info.m"
          MR_String mdb__browser_info__V_50_50;
#line 1071 "browser_info.m"
          MR_String mdb__browser_info__V_53_53;
#line 1071 "browser_info.m"
          MR_String mdb__browser_info__V_54_54;
#line 1071 "browser_info.m"
          MR_String mdb__browser_info__V_62_62;
#line 1071 "browser_info.m"
          MR_String mdb__browser_info__V_63_63;
#line 1086 "browser_info.m"
          MR_String mdb__browser_info__XMLBrowserCmd_15;
#line 1097 "browser_info.m"
          MR_String mdb__browser_info__XMLTmpFileName_17;

#line 1073 "browser_info.m"
          {
#line 1073 "browser_info.m"
            mdb__browser_info__V_45_45 = mdb__browser_info__caller_params_to_mdb_command_2_f_0((MR_String) "-P ", mdb__browser_info__PrintParams_7);
          }
#line 1074 "browser_info.m"
          {
#line 1074 "browser_info.m"
            mdb__browser_info__V_48_48 = mdb__browser_info__caller_params_to_mdb_command_2_f_0((MR_String) "-B ", mdb__browser_info__BrowseParams_8);
          }
#line 1075 "browser_info.m"
          {
#line 1075 "browser_info.m"
            mdb__browser_info__V_50_50 = mdb__browser_info__caller_params_to_mdb_command_2_f_0((MR_String) "-A ", mdb__browser_info__PrintAllParams_9);
          }
#line 1074 "browser_info.m"
          {
#line 1074 "browser_info.m"
            mdb__browser_info__V_47_47 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_48_48, mdb__browser_info__V_50_50);
          }
#line 1073 "browser_info.m"
          {
#line 1073 "browser_info.m"
            mdb__browser_info__ParamCmds_13 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_45_45, mdb__browser_info__V_47_47);
          }
#line 1077 "browser_info.m"
          {
#line 1077 "browser_info.m"
            mdb__browser_info__V_54_54 = mercury__string__int_to_string_1_f_0(mdb__browser_info__NumIOActions_10);
          }
#line 1077 "browser_info.m"
          {
#line 1077 "browser_info.m"
            mdb__browser_info__V_53_53 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_54_54, (MR_String) "\n");
          }
#line 1077 "browser_info.m"
          {
#line 1077 "browser_info.m"
            mdb__browser_info__NumIOActionCmd_14 = mercury__string__f_43_43_2_f_0((MR_String) "max_io_actions ", mdb__browser_info__V_53_53);
          }
#line 1079 "browser_info.m"
          mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__MaybeXMLBrowserCmd_11)) == (MR_mktag((MR_Integer) 1)));
#line 1079 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 1079 "browser_info.m"
            {
#line 1079 "browser_info.m"
              mdb__browser_info__XMLBrowserCmd_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeXMLBrowserCmd_11, (MR_Integer) 0)));
#line 1082 "browser_info.m"
              mdb__browser_info__succeeded = (strcmp(mdb__browser_info__XMLBrowserCmd_15, (MR_String) "") == 0);
#line 1082 "browser_info.m"
              mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 1079 "browser_info.m"
            }
#line 1086 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 1084 "browser_info.m"
            {
#line 1084 "browser_info.m"
              MR_String mdb__browser_info__V_57_57;

#line 1085 "browser_info.m"
              {
#line 1085 "browser_info.m"
                mdb__browser_info__V_57_57 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLBrowserCmd_15, (MR_String) "\n");
              }
#line 1085 "browser_info.m"
              {
#line 1085 "browser_info.m"
                mdb__browser_info__XMLBrowserCmdCmd_16 = mercury__string__f_43_43_2_f_0((MR_String) "xml_browser_cmd ", mdb__browser_info__V_57_57);
              }
#line 1084 "browser_info.m"
            }
#line 1086 "browser_info.m"
          else
#line 1087 "browser_info.m"
            mdb__browser_info__XMLBrowserCmdCmd_16 = (MR_String) "";
#line 1090 "browser_info.m"
          mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__MaybeXMLTmpFileName_12)) == (MR_mktag((MR_Integer) 1)));
#line 1090 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 1090 "browser_info.m"
            {
#line 1090 "browser_info.m"
              mdb__browser_info__XMLTmpFileName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeXMLTmpFileName_12, (MR_Integer) 0)));
#line 1093 "browser_info.m"
              mdb__browser_info__succeeded = (strcmp(mdb__browser_info__XMLTmpFileName_17, (MR_String) "") == 0);
#line 1093 "browser_info.m"
              mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 1090 "browser_info.m"
            }
#line 1097 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 1095 "browser_info.m"
            {
#line 1095 "browser_info.m"
              MR_String mdb__browser_info__V_60_60;

#line 1096 "browser_info.m"
              {
#line 1096 "browser_info.m"
                mdb__browser_info__V_60_60 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLTmpFileName_17, (MR_String) "\n");
              }
#line 1096 "browser_info.m"
              {
#line 1096 "browser_info.m"
                mdb__browser_info__XMLTmpFileNameCmd_18 = mercury__string__f_43_43_2_f_0((MR_String) "xml_tmp_filename ", mdb__browser_info__V_60_60);
              }
#line 1095 "browser_info.m"
            }
#line 1097 "browser_info.m"
          else
#line 1098 "browser_info.m"
            mdb__browser_info__XMLTmpFileNameCmd_18 = (MR_String) "";
#line 1101 "browser_info.m"
          {
#line 1101 "browser_info.m"
            mdb__browser_info__V_63_63 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLBrowserCmdCmd_16, mdb__browser_info__XMLTmpFileNameCmd_18);
          }
#line 1100 "browser_info.m"
          {
#line 1100 "browser_info.m"
            mdb__browser_info__V_62_62 = mercury__string__f_43_43_2_f_0(mdb__browser_info__NumIOActionCmd_14, mdb__browser_info__V_63_63);
          }
#line 1100 "browser_info.m"
          {
#line 1100 "browser_info.m"
            *mdb__browser_info__Desc_6 = mercury__string__f_43_43_2_f_0(mdb__browser_info__ParamCmds_13, mdb__browser_info__V_62_62);
          }
#line 1071 "browser_info.m"
        }
#line 1102 "browser_info.m"
        break;
#line 1102 "browser_info.m"
    }
#line 1067 "browser_info.m"
  }
#line 309 "browser_info.m"
}

#line 307 "browser_info.m"
void MR_CALL 
mdb__browser_info__send_term_to_socket_3_p_0(
#line 307 "browser_info.m"
  MR_Word mdb__browser_info__Term_4)
#line 307 "browser_info.m"
{
#line 1029 "browser_info.m"
  {
#line 1029 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1030 "browser_info.m"
    {
#line 1030 "browser_info.m"
      mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (mdb__browser_info__Term_4)));
    }
#line 1031 "browser_info.m"
    {
#line 1031 "browser_info.m"
      mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
    }
#line 1032 "browser_info.m"
    {
#line 1032 "browser_info.m"
      mercury__io__flush_output_2_p_0();
#line 1032 "browser_info.m"
      return;
    }
#line 1029 "browser_info.m"
  }
#line 307 "browser_info.m"
}

#line 305 "browser_info.m"
void MR_CALL 
mdb__browser_info__write_path_4_p_0(
#line 305 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_1,
#line 305 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 305 "browser_info.m"
{
#line 977 "browser_info.m"
  {
#line 977 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 977 "browser_info.m"
    if ((mdb__browser_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 977 "browser_info.m"
      {
#line 978 "browser_info.m"
        {
#line 978 "browser_info.m"
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
#line 978 "browser_info.m"
          return;
        }
#line 977 "browser_info.m"
      }
#line 977 "browser_info.m"
    else
#line 977 "browser_info.m"
      {
#line 977 "browser_info.m"
        MR_Word mdb__browser_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 977 "browser_info.m"
        MR_Word mdb__browser_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 977 "browser_info.m"
        if ((mdb__browser_info__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 983 "browser_info.m"
#line 983 "browser_info.m"
          switch (MR_tag((MR_Word) mdb__browser_info__V_39_39)) {
#line 983 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 983 "browser_info.m"
            case (MR_Integer) 0:
#line 981 "browser_info.m"
              {
#line 982 "browser_info.m"
                {
#line 982 "browser_info.m"
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
#line 982 "browser_info.m"
                  return;
                }
#line 981 "browser_info.m"
              }
#line 983 "browser_info.m"
              break;
#line 983 "browser_info.m"
            case (MR_Integer) 1:
#line 984 "browser_info.m"
              {
#line 984 "browser_info.m"
                MR_Integer mdb__browser_info__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__V_39_39, (MR_Integer) 0)));

#line 985 "browser_info.m"
                {
#line 985 "browser_info.m"
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
                }
#line 986 "browser_info.m"
                {
#line 986 "browser_info.m"
                  mdb__browser_info__write_int_debugger_4_p_0(mdb__browser_info__Debugger_1, mdb__browser_info__N_14);
#line 986 "browser_info.m"
                  return;
                }
#line 984 "browser_info.m"
              }
#line 983 "browser_info.m"
              break;
#line 983 "browser_info.m"
            case (MR_Integer) 2:
#line 988 "browser_info.m"
              {
#line 988 "browser_info.m"
                MR_String mdb__browser_info__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__V_39_39, (MR_Integer) 0)));

#line 989 "browser_info.m"
                {
#line 989 "browser_info.m"
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
                }
#line 990 "browser_info.m"
                {
#line 990 "browser_info.m"
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, mdb__browser_info__Name_15);
#line 990 "browser_info.m"
                  return;
                }
#line 988 "browser_info.m"
              }
#line 983 "browser_info.m"
              break;
#line 983 "browser_info.m"
          }
#line 977 "browser_info.m"
        else
#line 993 "browser_info.m"
          {
#line 993 "browser_info.m"
            mdb__browser_info__write_path_2_4_p_0(mdb__browser_info__Debugger_1, mdb__browser_info__HeadVar__2_2);
#line 993 "browser_info.m"
            return;
          }
#line 977 "browser_info.m"
      }
#line 977 "browser_info.m"
  }
#line 305 "browser_info.m"
}

#line 302 "browser_info.m"
void MR_CALL 
mdb__browser_info__print_format_debugger_4_p_0(
#line 302 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 302 "browser_info.m"
  MR_Word mdb__browser_info__X_2)
#line 302 "browser_info.m"
{
#line 960 "browser_info.m"
  {
#line 960 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 960 "browser_info.m"
#line 960 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 960 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 960 "browser_info.m"
      case (MR_Integer) 1:
#line 966 "browser_info.m"
#line 966 "browser_info.m"
        switch (mdb__browser_info__X_2) {
#line 966 "browser_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 966 "browser_info.m"
          case (MR_Integer) 0:
#line 964 "browser_info.m"
            {
#line 1030 "browser_info.m"
              {
#line 1030 "browser_info.m"
                mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[0]))));
              }
#line 1031 "browser_info.m"
              {
#line 1031 "browser_info.m"
                mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
              }
#line 1032 "browser_info.m"
              {
#line 1032 "browser_info.m"
                mercury__io__flush_output_2_p_0();
#line 1032 "browser_info.m"
                return;
              }
#line 964 "browser_info.m"
            }
#line 966 "browser_info.m"
            break;
#line 966 "browser_info.m"
          case (MR_Integer) 3:
#line 973 "browser_info.m"
            {
#line 1030 "browser_info.m"
              {
#line 1030 "browser_info.m"
                mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[1]))));
              }
#line 1031 "browser_info.m"
              {
#line 1031 "browser_info.m"
                mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
              }
#line 1032 "browser_info.m"
              {
#line 1032 "browser_info.m"
                mercury__io__flush_output_2_p_0();
#line 1032 "browser_info.m"
                return;
              }
#line 973 "browser_info.m"
            }
#line 966 "browser_info.m"
            break;
#line 966 "browser_info.m"
          case (MR_Integer) 1:
#line 967 "browser_info.m"
            {
#line 1030 "browser_info.m"
              {
#line 1030 "browser_info.m"
                mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[2]))));
              }
#line 1031 "browser_info.m"
              {
#line 1031 "browser_info.m"
                mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
              }
#line 1032 "browser_info.m"
              {
#line 1032 "browser_info.m"
                mercury__io__flush_output_2_p_0();
#line 1032 "browser_info.m"
                return;
              }
#line 967 "browser_info.m"
            }
#line 966 "browser_info.m"
            break;
#line 966 "browser_info.m"
          case (MR_Integer) 2:
#line 970 "browser_info.m"
            {
#line 1030 "browser_info.m"
              {
#line 1030 "browser_info.m"
                mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[3]))));
              }
#line 1031 "browser_info.m"
              {
#line 1031 "browser_info.m"
                mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
              }
#line 1032 "browser_info.m"
              {
#line 1032 "browser_info.m"
                mercury__io__flush_output_2_p_0();
#line 1032 "browser_info.m"
                return;
              }
#line 970 "browser_info.m"
            }
#line 966 "browser_info.m"
            break;
#line 966 "browser_info.m"
        }
#line 960 "browser_info.m"
        break;
#line 960 "browser_info.m"
      case (MR_Integer) 0:
#line 960 "browser_info.m"
        {
#line 961 "browser_info.m"
          {
#line 961 "browser_info.m"
            mercury__io__print_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0, ((MR_Box) (mdb__browser_info__X_2)));
#line 961 "browser_info.m"
            return;
          }
#line 960 "browser_info.m"
        }
#line 960 "browser_info.m"
        break;
#line 960 "browser_info.m"
    }
#line 960 "browser_info.m"
  }
#line 302 "browser_info.m"
}

#line 300 "browser_info.m"
void MR_CALL 
mdb__browser_info__write_int_debugger_4_p_0(
#line 300 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 300 "browser_info.m"
  MR_Integer mdb__browser_info__Int_2)
#line 300 "browser_info.m"
{
#line 955 "browser_info.m"
  {
#line 955 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 955 "browser_info.m"
#line 955 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 955 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 955 "browser_info.m"
      case (MR_Integer) 1:
#line 957 "browser_info.m"
        {
#line 957 "browser_info.m"
          MR_Word mdb__browser_info__V_14_14;

#line 958 "browser_info.m"
          {
#line 958 "browser_info.m"
            mdb__browser_info__V_14_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 958 "browser_info.m"
            MR_hl_field(MR_mktag(2), mdb__browser_info__V_14_14, 0) = ((MR_Box) (mdb__browser_info__Int_2));
#line 958 "browser_info.m"
          }
#line 1030 "browser_info.m"
          {
#line 1030 "browser_info.m"
            mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (mdb__browser_info__V_14_14)));
          }
#line 1031 "browser_info.m"
          {
#line 1031 "browser_info.m"
            mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
          }
#line 1032 "browser_info.m"
          {
#line 1032 "browser_info.m"
            mercury__io__flush_output_2_p_0();
#line 1032 "browser_info.m"
            return;
          }
#line 957 "browser_info.m"
        }
#line 955 "browser_info.m"
        break;
#line 955 "browser_info.m"
      case (MR_Integer) 0:
#line 956 "browser_info.m"
        {
#line 956 "browser_info.m"
          mercury__io__write_int_3_p_0(mdb__browser_info__Int_2);
#line 956 "browser_info.m"
          return;
        }
#line 955 "browser_info.m"
        break;
#line 955 "browser_info.m"
    }
#line 955 "browser_info.m"
  }
#line 300 "browser_info.m"
}

#line 298 "browser_info.m"
void MR_CALL 
mdb__browser_info__write_string_debugger_4_p_0(
#line 298 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 298 "browser_info.m"
  MR_String mdb__browser_info__String_2)
#line 298 "browser_info.m"
{
#line 950 "browser_info.m"
  {
#line 950 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 950 "browser_info.m"
#line 950 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 950 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 950 "browser_info.m"
      case (MR_Integer) 1:
#line 952 "browser_info.m"
        {
#line 952 "browser_info.m"
          MR_Word mdb__browser_info__V_14_14;

#line 953 "browser_info.m"
          {
#line 953 "browser_info.m"
            mdb__browser_info__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 953 "browser_info.m"
            MR_hl_field(MR_mktag(1), mdb__browser_info__V_14_14, 0) = ((MR_Box) (mdb__browser_info__String_2));
#line 953 "browser_info.m"
          }
#line 1030 "browser_info.m"
          {
#line 1030 "browser_info.m"
            mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (mdb__browser_info__V_14_14)));
          }
#line 1031 "browser_info.m"
          {
#line 1031 "browser_info.m"
            mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
          }
#line 1032 "browser_info.m"
          {
#line 1032 "browser_info.m"
            mercury__io__flush_output_2_p_0();
#line 1032 "browser_info.m"
            return;
          }
#line 952 "browser_info.m"
        }
#line 950 "browser_info.m"
        break;
#line 950 "browser_info.m"
      case (MR_Integer) 0:
#line 951 "browser_info.m"
        {
#line 951 "browser_info.m"
          mercury__io__write_string_3_p_0(mdb__browser_info__String_2);
#line 951 "browser_info.m"
          return;
        }
#line 950 "browser_info.m"
        break;
#line 950 "browser_info.m"
    }
#line 950 "browser_info.m"
  }
#line 298 "browser_info.m"
}

#line 296 "browser_info.m"
void MR_CALL 
mdb__browser_info__nl_debugger_3_p_0(
#line 296 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 296 "browser_info.m"
{
#line 945 "browser_info.m"
  {
#line 945 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 945 "browser_info.m"
#line 945 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 945 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 945 "browser_info.m"
      case (MR_Integer) 1:
#line 947 "browser_info.m"
        {
#line 1030 "browser_info.m"
          {
#line 1030 "browser_info.m"
            mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          }
#line 1031 "browser_info.m"
          {
#line 1031 "browser_info.m"
            mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
          }
#line 1032 "browser_info.m"
          {
#line 1032 "browser_info.m"
            mercury__io__flush_output_2_p_0();
#line 1032 "browser_info.m"
            return;
          }
#line 947 "browser_info.m"
        }
#line 945 "browser_info.m"
        break;
#line 945 "browser_info.m"
      case (MR_Integer) 0:
#line 946 "browser_info.m"
        {
#line 946 "browser_info.m"
          mercury__io__nl_2_p_0();
#line 946 "browser_info.m"
          return;
        }
#line 945 "browser_info.m"
        break;
#line 945 "browser_info.m"
    }
#line 945 "browser_info.m"
  }
#line 296 "browser_info.m"
}

#line 293 "browser_info.m"
void MR_CALL 
mdb__browser_info__show_settings_5_p_0(
#line 293 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_6,
#line 293 "browser_info.m"
  MR_Word mdb__browser_info__ShowPath_7,
#line 293 "browser_info.m"
  MR_Word mdb__browser_info__Info_8)
#line 293 "browser_info.m"
{
#line 862 "browser_info.m"
  {
#line 862 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 862 "browser_info.m"
    MR_Integer mdb__browser_info__V_23_23;
#line 862 "browser_info.m"
    MR_Word mdb__browser_info__V_25_25;
#line 870 "browser_info.m"
    MR_Word mdb__browser_info__V_32_32;
#line 870 "browser_info.m"
    MR_Word mdb__browser_info__V_33_33;
#line 870 "browser_info.m"
    MR_Word mdb__browser_info__V_34_34;
#line 870 "browser_info.m"
    MR_Word mdb__browser_info__V_35_35;
#line 870 "browser_info.m"
    MR_Word mdb__browser_info__V_36_36;
#line 870 "browser_info.m"
    MR_Word mdb__browser_info__V_37_37;
#line 819 "browser_info.m"
    MR_Word mdb__browser_info__V_45_45;
#line 819 "browser_info.m"
    MR_Word mdb__browser_info__V_46_46;
#line 819 "browser_info.m"
    MR_Word mdb__browser_info__V_47_47;
#line 819 "browser_info.m"
    MR_Word mdb__browser_info__V_48_48;
#line 819 "browser_info.m"
    MR_Word mdb__browser_info__V_49_49;

#line 863 "browser_info.m"
    {
#line 863 "browser_info.m"
      mdb__browser_info__show_settings_caller_6_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__Info_8, (MR_Integer) 1, (MR_String) "Browser");
    }
#line 864 "browser_info.m"
    {
#line 864 "browser_info.m"
      mdb__browser_info__show_settings_caller_6_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__Info_8, (MR_Integer) 0, (MR_String) "Print");
    }
#line 865 "browser_info.m"
    {
#line 865 "browser_info.m"
      mdb__browser_info__show_settings_caller_6_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__Info_8, (MR_Integer) 2, (MR_String) "Printall");
    }
#line 867 "browser_info.m"
    {
#line 867 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_6, (MR_String) "Number of I/O actions printed is: ");
    }
#line 870 "browser_info.m"
    mdb__browser_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 0)));
#line 870 "browser_info.m"
    mdb__browser_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 1)));
#line 870 "browser_info.m"
    mdb__browser_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 2)));
#line 870 "browser_info.m"
    mdb__browser_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 3)));
#line 870 "browser_info.m"
    mdb__browser_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 4)));
#line 870 "browser_info.m"
    mdb__browser_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 5)));
#line 870 "browser_info.m"
    mdb__browser_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 6)));
#line 819 "browser_info.m"
    mdb__browser_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 0)));
#line 819 "browser_info.m"
    mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 1)));
#line 819 "browser_info.m"
    mdb__browser_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 2)));
#line 819 "browser_info.m"
    mdb__browser_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 3)));
#line 819 "browser_info.m"
    mdb__browser_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 4)));
#line 819 "browser_info.m"
    mdb__browser_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 5)));
#line 869 "browser_info.m"
    {
#line 869 "browser_info.m"
      mdb__browser_info__write_int_debugger_4_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__V_23_23);
    }
#line 871 "browser_info.m"
    {
#line 871 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_6);
    }
#line 878 "browser_info.m"
#line 878 "browser_info.m"
    switch (mdb__browser_info__ShowPath_7) {
#line 878 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 878 "browser_info.m"
      case (MR_Integer) 0:
#line 879 "browser_info.m"
        {
#line 879 "browser_info.m"
        }
#line 878 "browser_info.m"
        break;
#line 878 "browser_info.m"
      case (MR_Integer) 1:
#line 874 "browser_info.m"
        {
#line 874 "browser_info.m"
          MR_Word mdb__browser_info__V_29_29;
#line 876 "browser_info.m"
          MR_Word mdb__browser_info__V_38_38;
#line 876 "browser_info.m"
          MR_Word mdb__browser_info__V_39_39;
#line 876 "browser_info.m"
          MR_Word mdb__browser_info__V_40_40;
#line 876 "browser_info.m"
          MR_Word mdb__browser_info__V_41_41;
#line 876 "browser_info.m"
          MR_Word mdb__browser_info__V_42_42;
#line 876 "browser_info.m"
          MR_Word mdb__browser_info__V_43_43;

#line 875 "browser_info.m"
          {
#line 875 "browser_info.m"
            mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_6, (MR_String) "Current path is: ");
          }
#line 876 "browser_info.m"
          mdb__browser_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 0)));
#line 876 "browser_info.m"
          mdb__browser_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 1)));
#line 876 "browser_info.m"
          mdb__browser_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 2)));
#line 876 "browser_info.m"
          mdb__browser_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 3)));
#line 876 "browser_info.m"
          mdb__browser_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 4)));
#line 876 "browser_info.m"
          mdb__browser_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 5)));
#line 876 "browser_info.m"
          mdb__browser_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 6)));
#line 876 "browser_info.m"
          {
#line 876 "browser_info.m"
            mdb__browser_info__write_path_4_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__V_29_29);
          }
#line 877 "browser_info.m"
          {
#line 877 "browser_info.m"
            mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_6);
#line 877 "browser_info.m"
            return;
          }
#line 874 "browser_info.m"
        }
#line 878 "browser_info.m"
        break;
#line 878 "browser_info.m"
    }
#line 862 "browser_info.m"
  }
#line 293 "browser_info.m"
}

#line 290 "browser_info.m"
void MR_CALL 
mdb__browser_info__run_param_command_7_p_0(
#line 290 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_8,
#line 290 "browser_info.m"
  MR_Word mdb__browser_info__ParamCmd_9,
#line 290 "browser_info.m"
  MR_Word mdb__browser_info__ShowPath_10,
#line 290 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_PersistentState_0_18,
#line 290 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_PersistentState_19)
#line 290 "browser_info.m"
{
#line 826 "browser_info.m"
  {
#line 826 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 826 "browser_info.m"
#line 826 "browser_info.m"
    switch (MR_tag((MR_Word) mdb__browser_info__ParamCmd_9)) {
#line 826 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 826 "browser_info.m"
      case (MR_Integer) 0:
#line 847 "browser_info.m"
        {
#line 848 "browser_info.m"
          {
#line 848 "browser_info.m"
            mdb__browser_info__show_settings_5_p_0(mdb__browser_info__Debugger_8, mdb__browser_info__ShowPath_10, mdb__browser_info__STATE_VARIABLE_PersistentState_0_18);
          }
#line 847 "browser_info.m"
          *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = mdb__browser_info__STATE_VARIABLE_PersistentState_0_18;
#line 847 "browser_info.m"
        }
#line 826 "browser_info.m"
        break;
#line 826 "browser_info.m"
      case (MR_Integer) 1:
#line 826 "browser_info.m"
        {
#line 826 "browser_info.m"
          MR_Word mdb__browser_info__MaybeOptionTable_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__ParamCmd_9, (MR_Integer) 0)));
#line 826 "browser_info.m"
          MR_Word mdb__browser_info__Setting_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__ParamCmd_9, (MR_Integer) 1)));

#line 830 "browser_info.m"
          if (((MR_tag((MR_Word) mdb__browser_info__MaybeOptionTable_13)) == (MR_mktag((MR_Integer) 1))))
#line 831 "browser_info.m"
            {
#line 831 "browser_info.m"
              MR_String mdb__browser_info__Msg_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeOptionTable_13, (MR_Integer) 0)));

#line 832 "browser_info.m"
              {
#line 832 "browser_info.m"
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_8, mdb__browser_info__Msg_16);
              }
#line 831 "browser_info.m"
              *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = mdb__browser_info__STATE_VARIABLE_PersistentState_0_18;
#line 831 "browser_info.m"
            }
#line 830 "browser_info.m"
          else
#line 828 "browser_info.m"
            {
#line 828 "browser_info.m"
              MR_Word mdb__browser_info__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__MaybeOptionTable_13, (MR_Integer) 0)));
#line 828 "browser_info.m"
              MR_Word mdb__browser_info__PersistentState0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 4)));
#line 828 "browser_info.m"
              MR_Word mdb__browser_info__CallerType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2)));
#line 828 "browser_info.m"
              MR_Word mdb__browser_info__PersistentState_43;
#line 405 "browser_info.m"
              MR_Word mdb__browser_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 0)));
#line 405 "browser_info.m"
              MR_Word mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 1)));
#line 405 "browser_info.m"
              MR_Word mdb__browser_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 3)));
#line 405 "browser_info.m"
              MR_Word mdb__browser_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 5)));
#line 405 "browser_info.m"
              MR_Word mdb__browser_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 6)));
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_57_57;
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_58_58;
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_59_59;
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_60_60;
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_62_62;
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_63_63;
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_61_61;

#line 407 "browser_info.m"
              {
#line 407 "browser_info.m"
                mdb__browser_info__set_browser_param_from_option_table_5_p_0(mdb__browser_info__CallerType_42, mdb__browser_info__OptionTable_15, mdb__browser_info__Setting_14, mdb__browser_info__PersistentState0_41, &mdb__browser_info__PersistentState_43);
              }
#line 409 "browser_info.m"
              mdb__browser_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 0)));
#line 409 "browser_info.m"
              mdb__browser_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 1)));
#line 409 "browser_info.m"
              mdb__browser_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2)));
#line 409 "browser_info.m"
              mdb__browser_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 3)));
#line 409 "browser_info.m"
              mdb__browser_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 4)));
#line 409 "browser_info.m"
              mdb__browser_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 5)));
#line 409 "browser_info.m"
              mdb__browser_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 6)));
#line 409 "browser_info.m"
              {
#line 409 "browser_info.m"
                MR_Word base;
#line 409 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 409 "browser_info.m"
                *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = base;
#line 409 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_57_57));
#line 409 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_58_58));
#line 409 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_59_59));
#line 409 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_60_60));
#line 409 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_43));
#line 409 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_62_62));
#line 409 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_63_63));
#line 409 "browser_info.m"
              }
#line 828 "browser_info.m"
            }
#line 826 "browser_info.m"
        }
#line 826 "browser_info.m"
        break;
#line 826 "browser_info.m"
      case (MR_Integer) 2:
#line 835 "browser_info.m"
        {
#line 835 "browser_info.m"
          MR_Word mdb__browser_info__MaybeOptionTable_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__ParamCmd_9, (MR_Integer) 0)));
#line 835 "browser_info.m"
          MR_Word mdb__browser_info__Setting_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__ParamCmd_9, (MR_Integer) 1)));

#line 839 "browser_info.m"
          if (((MR_tag((MR_Word) mdb__browser_info__MaybeOptionTable_32)) == (MR_mktag((MR_Integer) 1))))
#line 840 "browser_info.m"
            {
#line 840 "browser_info.m"
              MR_String mdb__browser_info__Msg_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeOptionTable_32, (MR_Integer) 0)));

#line 841 "browser_info.m"
              {
#line 841 "browser_info.m"
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_8, mdb__browser_info__Msg_29);
              }
#line 840 "browser_info.m"
              *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = mdb__browser_info__STATE_VARIABLE_PersistentState_0_18;
#line 840 "browser_info.m"
            }
#line 839 "browser_info.m"
          else
#line 837 "browser_info.m"
            {
#line 837 "browser_info.m"
              MR_Word mdb__browser_info__OptionTable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__MaybeOptionTable_32, (MR_Integer) 0)));
#line 837 "browser_info.m"
              MR_Word mdb__browser_info__PersistentState0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 4)));
#line 837 "browser_info.m"
              MR_Word mdb__browser_info__CallerType_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2)));
#line 837 "browser_info.m"
              MR_Word mdb__browser_info__PersistentState_71;
#line 405 "browser_info.m"
              MR_Word mdb__browser_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 0)));
#line 405 "browser_info.m"
              MR_Word mdb__browser_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 1)));
#line 405 "browser_info.m"
              MR_Word mdb__browser_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 3)));
#line 405 "browser_info.m"
              MR_Word mdb__browser_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 5)));
#line 405 "browser_info.m"
              MR_Word mdb__browser_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 6)));
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_85_85;
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_86_86;
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_87_87;
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_88_88;
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_90_90;
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_91_91;
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_89_89;

#line 407 "browser_info.m"
              {
#line 407 "browser_info.m"
                mdb__browser_info__set_browser_param_from_option_table_5_p_0(mdb__browser_info__CallerType_70, mdb__browser_info__OptionTable_28, mdb__browser_info__Setting_33, mdb__browser_info__PersistentState0_69, &mdb__browser_info__PersistentState_71);
              }
#line 409 "browser_info.m"
              mdb__browser_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 0)));
#line 409 "browser_info.m"
              mdb__browser_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 1)));
#line 409 "browser_info.m"
              mdb__browser_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2)));
#line 409 "browser_info.m"
              mdb__browser_info__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 3)));
#line 409 "browser_info.m"
              mdb__browser_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 4)));
#line 409 "browser_info.m"
              mdb__browser_info__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 5)));
#line 409 "browser_info.m"
              mdb__browser_info__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 6)));
#line 409 "browser_info.m"
              {
#line 409 "browser_info.m"
                MR_Word base;
#line 409 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 409 "browser_info.m"
                *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = base;
#line 409 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_85_85));
#line 409 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_86_86));
#line 409 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_87_87));
#line 409 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_88_88));
#line 409 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_71));
#line 409 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_90_90));
#line 409 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_91_91));
#line 409 "browser_info.m"
              }
#line 837 "browser_info.m"
            }
#line 835 "browser_info.m"
        }
#line 826 "browser_info.m"
        break;
#line 826 "browser_info.m"
      case (MR_Integer) 3:
#line 844 "browser_info.m"
        {
#line 844 "browser_info.m"
          MR_Integer mdb__browser_info__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__ParamCmd_9, (MR_Integer) 0)));

#line 845 "browser_info.m"
          {
#line 845 "browser_info.m"
            mdb__browser_info__info_set_num_io_actions_3_p_0(mdb__browser_info__N_17, mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, mdb__browser_info__STATE_VARIABLE_PersistentState_19);
#line 845 "browser_info.m"
            return;
          }
#line 844 "browser_info.m"
        }
#line 826 "browser_info.m"
        break;
#line 826 "browser_info.m"
    }
#line 826 "browser_info.m"
  }
#line 290 "browser_info.m"
}

#line 249 "browser_info.m"
void MR_CALL 
mdb__browser_info__set_num_io_actions_3_p_0(
#line 249 "browser_info.m"
  MR_Integer mdb__browser_info__NumIOActions_4,
#line 249 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 249 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 249 "browser_info.m"
{
#line 449 "browser_info.m"
  {
#line 449 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 449 "browser_info.m"
    MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 0)));
#line 449 "browser_info.m"
    MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 1)));
#line 449 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 2)));
#line 449 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 4)));
#line 449 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 5)));
#line 449 "browser_info.m"
    MR_Integer mdb__browser_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 3)));

#line 449 "browser_info.m"
    {
#line 449 "browser_info.m"
      MR_Word base;
#line 449 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 449 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Browser_7 = base;
#line 449 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_9_9));
#line 449 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_10_10));
#line 449 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_11_11));
#line 449 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__NumIOActions_4));
#line 449 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_13_13));
#line 449 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_14_14));
#line 449 "browser_info.m"
    }
#line 449 "browser_info.m"
  }
#line 249 "browser_info.m"
}

#line 248 "browser_info.m"
void MR_CALL 
mdb__browser_info__get_num_io_actions_2_p_0(
#line 248 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 248 "browser_info.m"
  MR_Integer * mdb__browser_info__NumIOActions_4)
#line 248 "browser_info.m"
{
#line 442 "browser_info.m"
  {
#line 442 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 442 "browser_info.m"
    MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 0)));
#line 442 "browser_info.m"
    MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 1)));
#line 442 "browser_info.m"
    MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 2)));
#line 442 "browser_info.m"
    MR_Word mdb__browser_info__V_8_8;
#line 442 "browser_info.m"
    MR_Word mdb__browser_info__V_9_9;

#line 442 "browser_info.m"
    *mdb__browser_info__NumIOActions_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 3)));
#line 442 "browser_info.m"
    mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 4)));
#line 442 "browser_info.m"
    mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 5)));
#line 442 "browser_info.m"
  }
#line 248 "browser_info.m"
}

#line 245 "browser_info.m"
void MR_CALL 
mdb__browser_info__info_set_xml_tmp_filename_3_p_0(
#line 245 "browser_info.m"
  MR_String mdb__browser_info__FileName_4,
#line 245 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Info_0_8,
#line 245 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Info_9)
#line 245 "browser_info.m"
{
#line 421 "browser_info.m"
  {
#line 421 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 421 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 421 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState_7;
#line 422 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 422 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 422 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 422 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 422 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 422 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 424 "browser_info.m"
    MR_Word mdb__browser_info__V_17_17;
#line 424 "browser_info.m"
    MR_Word mdb__browser_info__V_18_18;
#line 424 "browser_info.m"
    MR_Word mdb__browser_info__V_19_19;
#line 424 "browser_info.m"
    MR_Word mdb__browser_info__V_20_20;
#line 424 "browser_info.m"
    MR_Word mdb__browser_info__V_22_22;
#line 424 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;
#line 424 "browser_info.m"
    MR_Word mdb__browser_info__V_21_21;

#line 423 "browser_info.m"
    {
#line 423 "browser_info.m"
      mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0(mdb__browser_info__FileName_4, mdb__browser_info__PersistentState0_6, &mdb__browser_info__PersistentState_7);
    }
#line 424 "browser_info.m"
    mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 424 "browser_info.m"
    mdb__browser_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 424 "browser_info.m"
    mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 424 "browser_info.m"
    mdb__browser_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 424 "browser_info.m"
    mdb__browser_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 424 "browser_info.m"
    mdb__browser_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 424 "browser_info.m"
    mdb__browser_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 424 "browser_info.m"
    {
#line 424 "browser_info.m"
      MR_Word base;
#line 424 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 424 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Info_9 = base;
#line 424 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_17_17));
#line 424 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_18_18));
#line 424 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_19_19));
#line 424 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_20_20));
#line 424 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_7));
#line 424 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_22_22));
#line 424 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_23_23));
#line 424 "browser_info.m"
    }
#line 421 "browser_info.m"
  }
#line 245 "browser_info.m"
}

#line 242 "browser_info.m"
void MR_CALL 
mdb__browser_info__info_set_xml_browser_cmd_3_p_0(
#line 242 "browser_info.m"
  MR_String mdb__browser_info__Cmd_4,
#line 242 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Info_0_8,
#line 242 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Info_9)
#line 242 "browser_info.m"
{
#line 416 "browser_info.m"
  {
#line 416 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 416 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 416 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState_7;
#line 417 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 417 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 417 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 417 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 417 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 417 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 419 "browser_info.m"
    MR_Word mdb__browser_info__V_17_17;
#line 419 "browser_info.m"
    MR_Word mdb__browser_info__V_18_18;
#line 419 "browser_info.m"
    MR_Word mdb__browser_info__V_19_19;
#line 419 "browser_info.m"
    MR_Word mdb__browser_info__V_20_20;
#line 419 "browser_info.m"
    MR_Word mdb__browser_info__V_22_22;
#line 419 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;
#line 419 "browser_info.m"
    MR_Word mdb__browser_info__V_21_21;

#line 418 "browser_info.m"
    {
#line 418 "browser_info.m"
      mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0(mdb__browser_info__Cmd_4, mdb__browser_info__PersistentState0_6, &mdb__browser_info__PersistentState_7);
    }
#line 419 "browser_info.m"
    mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 419 "browser_info.m"
    mdb__browser_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 419 "browser_info.m"
    mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 419 "browser_info.m"
    mdb__browser_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 419 "browser_info.m"
    mdb__browser_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 419 "browser_info.m"
    mdb__browser_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 419 "browser_info.m"
    mdb__browser_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 419 "browser_info.m"
    {
#line 419 "browser_info.m"
      MR_Word base;
#line 419 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 419 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Info_9 = base;
#line 419 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_17_17));
#line 419 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_18_18));
#line 419 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_19_19));
#line 419 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_20_20));
#line 419 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_7));
#line 419 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_22_22));
#line 419 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_23_23));
#line 419 "browser_info.m"
    }
#line 416 "browser_info.m"
  }
#line 242 "browser_info.m"
}

#line 239 "browser_info.m"
void MR_CALL 
mdb__browser_info__info_set_num_io_actions_3_p_0(
#line 239 "browser_info.m"
  MR_Integer mdb__browser_info__N_4,
#line 239 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Info_0_8,
#line 239 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Info_9)
#line 239 "browser_info.m"
{
#line 411 "browser_info.m"
  {
#line 411 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 411 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 411 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState_7;
#line 411 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 411 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 411 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 411 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 411 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 411 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 449 "browser_info.m"
    MR_Word mdb__browser_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 0)));
#line 449 "browser_info.m"
    MR_Word mdb__browser_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 1)));
#line 449 "browser_info.m"
    MR_Word mdb__browser_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 2)));
#line 449 "browser_info.m"
    MR_Word mdb__browser_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 4)));
#line 449 "browser_info.m"
    MR_Word mdb__browser_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 5)));
#line 449 "browser_info.m"
    MR_Integer mdb__browser_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 3)));

#line 449 "browser_info.m"
    {
#line 449 "browser_info.m"
      mdb__browser_info__PersistentState_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 449 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 0) = ((MR_Box) (mdb__browser_info__V_29_29));
#line 449 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 1) = ((MR_Box) (mdb__browser_info__V_30_30));
#line 449 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 2) = ((MR_Box) (mdb__browser_info__V_31_31));
#line 449 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 3) = ((MR_Box) (mdb__browser_info__N_4));
#line 449 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 4) = ((MR_Box) (mdb__browser_info__V_33_33));
#line 449 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 5) = ((MR_Box) (mdb__browser_info__V_34_34));
#line 449 "browser_info.m"
    }
#line 414 "browser_info.m"
    {
#line 414 "browser_info.m"
      MR_Word base;
#line 414 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 414 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Info_9 = base;
#line 414 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_11_11));
#line 414 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_12_12));
#line 414 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_13_13));
#line 414 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_14_14));
#line 414 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_7));
#line 414 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_15_15));
#line 414 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_16_16));
#line 414 "browser_info.m"
    }
#line 411 "browser_info.m"
  }
#line 239 "browser_info.m"
}

#line 236 "browser_info.m"
void MR_CALL 
mdb__browser_info__info_set_browse_param_4_p_0(
#line 236 "browser_info.m"
  MR_Word mdb__browser_info__OptionTable_5,
#line 236 "browser_info.m"
  MR_Word mdb__browser_info__Setting_6,
#line 236 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Info_0_11,
#line 236 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Info_12)
#line 236 "browser_info.m"
{
#line 404 "browser_info.m"
  {
#line 404 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 404 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 404 "browser_info.m"
    MR_Word mdb__browser_info__CallerType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 404 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState_10;
#line 405 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 405 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 405 "browser_info.m"
    MR_Word mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 405 "browser_info.m"
    MR_Word mdb__browser_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 405 "browser_info.m"
    MR_Word mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 409 "browser_info.m"
    MR_Word mdb__browser_info__V_26_26;
#line 409 "browser_info.m"
    MR_Word mdb__browser_info__V_27_27;
#line 409 "browser_info.m"
    MR_Word mdb__browser_info__V_28_28;
#line 409 "browser_info.m"
    MR_Word mdb__browser_info__V_29_29;
#line 409 "browser_info.m"
    MR_Word mdb__browser_info__V_31_31;
#line 409 "browser_info.m"
    MR_Word mdb__browser_info__V_32_32;
#line 409 "browser_info.m"
    MR_Word mdb__browser_info__V_30_30;

#line 407 "browser_info.m"
    {
#line 407 "browser_info.m"
      mdb__browser_info__set_browser_param_from_option_table_5_p_0(mdb__browser_info__CallerType_9, mdb__browser_info__OptionTable_5, mdb__browser_info__Setting_6, mdb__browser_info__PersistentState0_8, &mdb__browser_info__PersistentState_10);
    }
#line 409 "browser_info.m"
    mdb__browser_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 409 "browser_info.m"
    mdb__browser_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 409 "browser_info.m"
    mdb__browser_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 409 "browser_info.m"
    mdb__browser_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 409 "browser_info.m"
    mdb__browser_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 409 "browser_info.m"
    mdb__browser_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 409 "browser_info.m"
    mdb__browser_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 409 "browser_info.m"
    {
#line 409 "browser_info.m"
      MR_Word base;
#line 409 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 409 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Info_12 = base;
#line 409 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_26_26));
#line 409 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_27_27));
#line 409 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_28_28));
#line 409 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_29_29));
#line 409 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_10));
#line 409 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_31_31));
#line 409 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_32_32));
#line 409 "browser_info.m"
    }
#line 404 "browser_info.m"
  }
#line 236 "browser_info.m"
}

#line 232 "browser_info.m"
void MR_CALL 
mdb__browser_info__set_browser_param_from_option_table_5_p_0(
#line 232 "browser_info.m"
  MR_Word mdb__browser_info__CallerType_6,
#line 232 "browser_info.m"
  MR_Word mdb__browser_info__OptionTable_7,
#line 232 "browser_info.m"
  MR_Word mdb__browser_info__Setting_8,
#line 232 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_State_0_10,
#line 232 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_State_11)
#line 232 "browser_info.m"
{
#line 700 "browser_info.m"
  {
#line 700 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 700 "browser_info.m"
    MR_Word mdb__browser_info__TypeCtorInfo_27_27 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0;
#line 700 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12;
#line 700 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13;
#line 700 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14;
#line 700 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15;
#line 700 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16;
#line 700 "browser_info.m"
    MR_Word mdb__browser_info__V_17_17;
#line 700 "browser_info.m"
    MR_Word mdb__browser_info__V_18_18;

#line 702 "browser_info.m"
    {
#line 702 "browser_info.m"
      mdb__browser_info__V_12_12 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 0)));
    }
#line 703 "browser_info.m"
    {
#line 703 "browser_info.m"
      mdb__browser_info__V_13_13 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 1)));
    }
#line 704 "browser_info.m"
    {
#line 704 "browser_info.m"
      mdb__browser_info__V_14_14 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 2)));
    }
#line 705 "browser_info.m"
    {
#line 705 "browser_info.m"
      mdb__browser_info__V_15_15 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 3)));
    }
#line 706 "browser_info.m"
    {
#line 706 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 4)));
    }
#line 707 "browser_info.m"
    {
#line 707 "browser_info.m"
      mdb__browser_info__V_17_17 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 5)));
    }
#line 708 "browser_info.m"
    {
#line 708 "browser_info.m"
      mdb__browser_info__V_18_18 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 6)));
    }
#line 701 "browser_info.m"
    {
#line 701 "browser_info.m"
      mdb__browser_info__set_browser_param_with_caller_type_11_p_0(mdb__browser_info__CallerType_6, mdb__browser_info__V_12_12, mdb__browser_info__V_13_13, mdb__browser_info__V_14_14, mdb__browser_info__V_15_15, mdb__browser_info__V_16_16, mdb__browser_info__V_17_17, mdb__browser_info__V_18_18, mdb__browser_info__Setting_8, mdb__browser_info__STATE_VARIABLE_State_0_10, mdb__browser_info__STATE_VARIABLE_State_11);
#line 701 "browser_info.m"
      return;
    }
#line 700 "browser_info.m"
  }
#line 232 "browser_info.m"
}

#line 222 "browser_info.m"
void MR_CALL 
mdb__browser_info__set_browser_param_maybe_caller_type_9_p_0(
#line 222 "browser_info.m"
  MR_Word mdb__browser_info__FromBrowser_10,
#line 222 "browser_info.m"
  MR_Word mdb__browser_info__MaybeCallerType_11,
#line 222 "browser_info.m"
  MR_Word mdb__browser_info__F0_12,
#line 222 "browser_info.m"
  MR_Word mdb__browser_info__Pr0_13,
#line 222 "browser_info.m"
  MR_Word mdb__browser_info__V0_14,
#line 222 "browser_info.m"
  MR_Word mdb__browser_info__NPr0_15,
#line 222 "browser_info.m"
  MR_Word mdb__browser_info__Setting_16,
#line 222 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_State_0_21,
#line 222 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_State_22)
#line 222 "browser_info.m"
{
#line 694 "browser_info.m"
  {
#line 694 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 694 "browser_info.m"
    MR_Word mdb__browser_info__P_18;
#line 694 "browser_info.m"
    MR_Word mdb__browser_info__B_19;
#line 694 "browser_info.m"
    MR_Word mdb__browser_info__A_20;

#line 717 "browser_info.m"
    if ((mdb__browser_info__MaybeCallerType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 717 "browser_info.m"
#line 717 "browser_info.m"
      switch (mdb__browser_info__FromBrowser_10) {
#line 717 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 717 "browser_info.m"
        case (MR_Integer) 0:
#line 717 "browser_info.m"
          {
#line 717 "browser_info.m"
            mdb__browser_info__P_18 = (MR_Integer) 1;
#line 717 "browser_info.m"
            mdb__browser_info__B_19 = (MR_Integer) 1;
#line 717 "browser_info.m"
            mdb__browser_info__A_20 = (MR_Integer) 1;
#line 717 "browser_info.m"
          }
#line 717 "browser_info.m"
          break;
#line 717 "browser_info.m"
        case (MR_Integer) 1:
#line 718 "browser_info.m"
          {
#line 718 "browser_info.m"
            mdb__browser_info__P_18 = (MR_Integer) 0;
#line 718 "browser_info.m"
            mdb__browser_info__B_19 = (MR_Integer) 1;
#line 718 "browser_info.m"
            mdb__browser_info__A_20 = (MR_Integer) 0;
#line 718 "browser_info.m"
          }
#line 717 "browser_info.m"
          break;
#line 717 "browser_info.m"
      }
#line 717 "browser_info.m"
    else
#line 717 "browser_info.m"
      {
#line 717 "browser_info.m"
        MR_Word mdb__browser_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeCallerType_11, (MR_Integer) 0)));

#line 717 "browser_info.m"
#line 717 "browser_info.m"
        switch (mdb__browser_info__V_30_30) {
#line 717 "browser_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 717 "browser_info.m"
          case (MR_Integer) 1:
#line 720 "browser_info.m"
            {
#line 720 "browser_info.m"
              mdb__browser_info__P_18 = (MR_Integer) 0;
#line 720 "browser_info.m"
              mdb__browser_info__B_19 = (MR_Integer) 1;
#line 720 "browser_info.m"
              mdb__browser_info__A_20 = (MR_Integer) 0;
#line 720 "browser_info.m"
            }
#line 717 "browser_info.m"
            break;
#line 717 "browser_info.m"
          case (MR_Integer) 0:
#line 719 "browser_info.m"
            {
#line 719 "browser_info.m"
              mdb__browser_info__P_18 = (MR_Integer) 1;
#line 719 "browser_info.m"
              mdb__browser_info__B_19 = (MR_Integer) 0;
#line 719 "browser_info.m"
              mdb__browser_info__A_20 = (MR_Integer) 0;
#line 719 "browser_info.m"
            }
#line 717 "browser_info.m"
            break;
#line 717 "browser_info.m"
          case (MR_Integer) 2:
#line 721 "browser_info.m"
            {
#line 721 "browser_info.m"
              mdb__browser_info__P_18 = (MR_Integer) 0;
#line 721 "browser_info.m"
              mdb__browser_info__B_19 = (MR_Integer) 0;
#line 721 "browser_info.m"
              mdb__browser_info__A_20 = (MR_Integer) 1;
#line 721 "browser_info.m"
            }
#line 717 "browser_info.m"
            break;
#line 717 "browser_info.m"
        }
#line 717 "browser_info.m"
      }
#line 696 "browser_info.m"
    {
#line 696 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0(mdb__browser_info__FromBrowser_10, mdb__browser_info__P_18, mdb__browser_info__B_19, mdb__browser_info__A_20, mdb__browser_info__F0_12, mdb__browser_info__Pr0_13, mdb__browser_info__V0_14, mdb__browser_info__NPr0_15, mdb__browser_info__Setting_16, mdb__browser_info__STATE_VARIABLE_State_0_21, mdb__browser_info__STATE_VARIABLE_State_22);
#line 696 "browser_info.m"
      return;
    }
#line 694 "browser_info.m"
  }
#line 222 "browser_info.m"
}

#line 211 "browser_info.m"
void MR_CALL 
mdb__browser_info__set_browser_param_with_caller_type_11_p_0(
#line 211 "browser_info.m"
  MR_Word mdb__browser_info__CallerType_12,
#line 211 "browser_info.m"
  MR_Word mdb__browser_info__P0_13,
#line 211 "browser_info.m"
  MR_Word mdb__browser_info__B0_14,
#line 211 "browser_info.m"
  MR_Word mdb__browser_info__A0_15,
#line 211 "browser_info.m"
  MR_Word mdb__browser_info__F0_16,
#line 211 "browser_info.m"
  MR_Word mdb__browser_info__Pr0_17,
#line 211 "browser_info.m"
  MR_Word mdb__browser_info__V0_18,
#line 211 "browser_info.m"
  MR_Word mdb__browser_info__NPr0_19,
#line 211 "browser_info.m"
  MR_Word mdb__browser_info__Setting_20,
#line 211 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_State_0_36,
#line 211 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_State_37)
#line 211 "browser_info.m"
{
#line 667 "browser_info.m"
  {
#line 667 "browser_info.m"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__P0_13 == (MR_Integer) 0);
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__P_23;
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__B_24;
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__A_25;
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__F_26;
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__Pr_27;
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__V_28;
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__NPr_29;
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__PParams0_30;
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__BParams0_31;
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__AParams0_32;
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__PParams_33;
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__BParams_34;
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__AParams_35;
#line 667 "browser_info.m"
    MR_Integer mdb__browser_info__V_40_40;
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__V_61_61;
#line 667 "browser_info.m"
    MR_Word mdb__browser_info__V_62_62;
#line 683 "browser_info.m"
    MR_Integer mdb__browser_info__V_45_45;
#line 683 "browser_info.m"
    MR_Word mdb__browser_info__V_46_46;
#line 683 "browser_info.m"
    MR_Word mdb__browser_info__V_47_47;
#line 689 "browser_info.m"
    MR_Word mdb__browser_info__V_58_58;
#line 689 "browser_info.m"
    MR_Word mdb__browser_info__V_59_59;
#line 689 "browser_info.m"
    MR_Word mdb__browser_info__V_60_60;

#line 669 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 669 "browser_info.m"
      {
#line 670 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__B0_14 == (MR_Integer) 0);
#line 669 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 671 "browser_info.m"
          mdb__browser_info__succeeded = (mdb__browser_info__A0_15 == (MR_Integer) 0);
#line 669 "browser_info.m"
      }
#line 677 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 717 "browser_info.m"
#line 717 "browser_info.m"
      switch (mdb__browser_info__CallerType_12) {
#line 717 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 717 "browser_info.m"
        case (MR_Integer) 1:
#line 720 "browser_info.m"
          {
#line 720 "browser_info.m"
            mdb__browser_info__P_23 = (MR_Integer) 0;
#line 720 "browser_info.m"
            mdb__browser_info__B_24 = (MR_Integer) 1;
#line 720 "browser_info.m"
            mdb__browser_info__A_25 = (MR_Integer) 0;
#line 720 "browser_info.m"
          }
#line 717 "browser_info.m"
          break;
#line 717 "browser_info.m"
        case (MR_Integer) 0:
#line 719 "browser_info.m"
          {
#line 719 "browser_info.m"
            mdb__browser_info__P_23 = (MR_Integer) 1;
#line 719 "browser_info.m"
            mdb__browser_info__B_24 = (MR_Integer) 0;
#line 719 "browser_info.m"
            mdb__browser_info__A_25 = (MR_Integer) 0;
#line 719 "browser_info.m"
          }
#line 717 "browser_info.m"
          break;
#line 717 "browser_info.m"
        case (MR_Integer) 2:
#line 721 "browser_info.m"
          {
#line 721 "browser_info.m"
            mdb__browser_info__P_23 = (MR_Integer) 0;
#line 721 "browser_info.m"
            mdb__browser_info__B_24 = (MR_Integer) 0;
#line 721 "browser_info.m"
            mdb__browser_info__A_25 = (MR_Integer) 1;
#line 721 "browser_info.m"
          }
#line 717 "browser_info.m"
          break;
#line 717 "browser_info.m"
      }
#line 677 "browser_info.m"
    else
#line 678 "browser_info.m"
      {
#line 678 "browser_info.m"
        mdb__browser_info__P_23 = mdb__browser_info__P0_13;
#line 679 "browser_info.m"
        mdb__browser_info__B_24 = mdb__browser_info__B0_14;
#line 680 "browser_info.m"
        mdb__browser_info__A_25 = mdb__browser_info__A0_15;
#line 678 "browser_info.m"
      }
#line 750 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__F0_16 == (MR_Integer) 0);
#line 750 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 750 "browser_info.m"
      {
#line 751 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__Pr0_17 == (MR_Integer) 0);
#line 750 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 750 "browser_info.m"
          {
#line 752 "browser_info.m"
            mdb__browser_info__succeeded = (mdb__browser_info__V0_18 == (MR_Integer) 0);
#line 750 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 753 "browser_info.m"
              mdb__browser_info__succeeded = (mdb__browser_info__NPr0_19 == (MR_Integer) 0);
#line 750 "browser_info.m"
          }
#line 750 "browser_info.m"
      }
#line 759 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 755 "browser_info.m"
      {
#line 755 "browser_info.m"
        mdb__browser_info__F_26 = (MR_Integer) 1;
#line 756 "browser_info.m"
        mdb__browser_info__Pr_27 = (MR_Integer) 1;
#line 757 "browser_info.m"
        mdb__browser_info__V_28 = (MR_Integer) 1;
#line 758 "browser_info.m"
        mdb__browser_info__NPr_29 = (MR_Integer) 1;
#line 755 "browser_info.m"
      }
#line 759 "browser_info.m"
    else
#line 760 "browser_info.m"
      {
#line 760 "browser_info.m"
        mdb__browser_info__F_26 = mdb__browser_info__F0_16;
#line 761 "browser_info.m"
        mdb__browser_info__Pr_27 = mdb__browser_info__Pr0_17;
#line 762 "browser_info.m"
        mdb__browser_info__V_28 = mdb__browser_info__V0_18;
#line 763 "browser_info.m"
        mdb__browser_info__NPr_29 = mdb__browser_info__NPr0_19;
#line 760 "browser_info.m"
      }
#line 683 "browser_info.m"
    mdb__browser_info__PParams0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 0)));
#line 683 "browser_info.m"
    mdb__browser_info__BParams0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 1)));
#line 683 "browser_info.m"
    mdb__browser_info__AParams0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 2)));
#line 683 "browser_info.m"
    mdb__browser_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 3)));
#line 683 "browser_info.m"
    mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 4)));
#line 683 "browser_info.m"
    mdb__browser_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 5)));
#line 686 "browser_info.m"
    {
#line 686 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__P_23, mdb__browser_info__F_26, mdb__browser_info__Pr_27, mdb__browser_info__V_28, mdb__browser_info__NPr_29, mdb__browser_info__Setting_20, mdb__browser_info__PParams0_30, &mdb__browser_info__PParams_33);
    }
#line 687 "browser_info.m"
    {
#line 687 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__B_24, mdb__browser_info__F_26, mdb__browser_info__Pr_27, mdb__browser_info__V_28, mdb__browser_info__NPr_29, mdb__browser_info__Setting_20, mdb__browser_info__BParams0_31, &mdb__browser_info__BParams_34);
    }
#line 688 "browser_info.m"
    {
#line 688 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__A_25, mdb__browser_info__F_26, mdb__browser_info__Pr_27, mdb__browser_info__V_28, mdb__browser_info__NPr_29, mdb__browser_info__Setting_20, mdb__browser_info__AParams0_32, &mdb__browser_info__AParams_35);
    }
#line 689 "browser_info.m"
    mdb__browser_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 0)));
#line 689 "browser_info.m"
    mdb__browser_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 1)));
#line 689 "browser_info.m"
    mdb__browser_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 2)));
#line 689 "browser_info.m"
    mdb__browser_info__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 3)));
#line 689 "browser_info.m"
    mdb__browser_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 4)));
#line 689 "browser_info.m"
    mdb__browser_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 5)));
#line 689 "browser_info.m"
    {
#line 689 "browser_info.m"
      MR_Word base;
#line 689 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 689 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_State_37 = base;
#line 689 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__PParams_33));
#line 689 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__BParams_34));
#line 689 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__AParams_35));
#line 689 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_40_40));
#line 689 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_61_61));
#line 689 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_62_62));
#line 689 "browser_info.m"
    }
#line 667 "browser_info.m"
  }
#line 211 "browser_info.m"
}

#line 204 "browser_info.m"
void MR_CALL 
mdb__browser_info__set_browser_param_11_p_0(
#line 204 "browser_info.m"
  MR_Word mdb__browser_info__FromBrowser_12,
#line 204 "browser_info.m"
  MR_Word mdb__browser_info__P0_13,
#line 204 "browser_info.m"
  MR_Word mdb__browser_info__B0_14,
#line 204 "browser_info.m"
  MR_Word mdb__browser_info__A0_15,
#line 204 "browser_info.m"
  MR_Word mdb__browser_info__F0_16,
#line 204 "browser_info.m"
  MR_Word mdb__browser_info__Pr0_17,
#line 204 "browser_info.m"
  MR_Word mdb__browser_info__V0_18,
#line 204 "browser_info.m"
  MR_Word mdb__browser_info__NPr0_19,
#line 204 "browser_info.m"
  MR_Word mdb__browser_info__Setting_20,
#line 204 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_State_0_35,
#line 204 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_State_36)
#line 204 "browser_info.m"
{
#line 637 "browser_info.m"
  {
#line 637 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__P_22;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__B_23;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__A_24;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__F_25;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__Pr_26;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__V_27;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__NPr_28;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__PParams0_29;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__BParams0_30;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__AParams0_31;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__PParams_32;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__BParams_33;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__AParams_34;
#line 637 "browser_info.m"
    MR_Integer mdb__browser_info__V_39_39;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__V_60_60;
#line 637 "browser_info.m"
    MR_Word mdb__browser_info__V_61_61;
#line 656 "browser_info.m"
    MR_Integer mdb__browser_info__V_44_44;
#line 656 "browser_info.m"
    MR_Word mdb__browser_info__V_45_45;
#line 656 "browser_info.m"
    MR_Word mdb__browser_info__V_46_46;
#line 662 "browser_info.m"
    MR_Word mdb__browser_info__V_57_57;
#line 662 "browser_info.m"
    MR_Word mdb__browser_info__V_58_58;
#line 662 "browser_info.m"
    MR_Word mdb__browser_info__V_59_59;

#line 641 "browser_info.m"
#line 641 "browser_info.m"
    switch (mdb__browser_info__FromBrowser_12) {
#line 641 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 641 "browser_info.m"
      case (MR_Integer) 0:
#line 737 "browser_info.m"
        {
#line 730 "browser_info.m"
          mdb__browser_info__succeeded = (mdb__browser_info__P0_13 == (MR_Integer) 0);
#line 730 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 730 "browser_info.m"
            {
#line 731 "browser_info.m"
              mdb__browser_info__succeeded = (mdb__browser_info__B0_14 == (MR_Integer) 0);
#line 730 "browser_info.m"
              if (mdb__browser_info__succeeded)
#line 732 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__A0_15 == (MR_Integer) 0);
#line 730 "browser_info.m"
            }
#line 737 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 734 "browser_info.m"
            {
#line 734 "browser_info.m"
              mdb__browser_info__P_22 = (MR_Integer) 1;
#line 735 "browser_info.m"
              mdb__browser_info__B_23 = (MR_Integer) 1;
#line 736 "browser_info.m"
              mdb__browser_info__A_24 = (MR_Integer) 1;
#line 734 "browser_info.m"
            }
#line 737 "browser_info.m"
          else
#line 738 "browser_info.m"
            {
#line 738 "browser_info.m"
              mdb__browser_info__P_22 = mdb__browser_info__P0_13;
#line 739 "browser_info.m"
              mdb__browser_info__B_23 = mdb__browser_info__B0_14;
#line 740 "browser_info.m"
              mdb__browser_info__A_24 = mdb__browser_info__A0_15;
#line 738 "browser_info.m"
            }
#line 737 "browser_info.m"
        }
#line 641 "browser_info.m"
        break;
#line 641 "browser_info.m"
      case (MR_Integer) 1:
#line 649 "browser_info.m"
        {
#line 644 "browser_info.m"
          mdb__browser_info__succeeded = (mdb__browser_info__P0_13 == (MR_Integer) 0);
#line 644 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 644 "browser_info.m"
            {
#line 645 "browser_info.m"
              mdb__browser_info__succeeded = (mdb__browser_info__B0_14 == (MR_Integer) 0);
#line 644 "browser_info.m"
              if (mdb__browser_info__succeeded)
#line 646 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__A0_15 == (MR_Integer) 0);
#line 644 "browser_info.m"
            }
#line 649 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 648 "browser_info.m"
            {
#line 718 "browser_info.m"
              mdb__browser_info__P_22 = (MR_Integer) 0;
#line 718 "browser_info.m"
              mdb__browser_info__B_23 = (MR_Integer) 1;
#line 718 "browser_info.m"
              mdb__browser_info__A_24 = (MR_Integer) 0;
#line 648 "browser_info.m"
            }
#line 649 "browser_info.m"
          else
#line 650 "browser_info.m"
            {
#line 650 "browser_info.m"
              mdb__browser_info__P_22 = mdb__browser_info__P0_13;
#line 651 "browser_info.m"
              mdb__browser_info__B_23 = mdb__browser_info__B0_14;
#line 652 "browser_info.m"
              mdb__browser_info__A_24 = mdb__browser_info__A0_15;
#line 650 "browser_info.m"
            }
#line 649 "browser_info.m"
        }
#line 641 "browser_info.m"
        break;
#line 641 "browser_info.m"
    }
#line 750 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__F0_16 == (MR_Integer) 0);
#line 750 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 750 "browser_info.m"
      {
#line 751 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__Pr0_17 == (MR_Integer) 0);
#line 750 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 750 "browser_info.m"
          {
#line 752 "browser_info.m"
            mdb__browser_info__succeeded = (mdb__browser_info__V0_18 == (MR_Integer) 0);
#line 750 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 753 "browser_info.m"
              mdb__browser_info__succeeded = (mdb__browser_info__NPr0_19 == (MR_Integer) 0);
#line 750 "browser_info.m"
          }
#line 750 "browser_info.m"
      }
#line 759 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 755 "browser_info.m"
      {
#line 755 "browser_info.m"
        mdb__browser_info__F_25 = (MR_Integer) 1;
#line 756 "browser_info.m"
        mdb__browser_info__Pr_26 = (MR_Integer) 1;
#line 757 "browser_info.m"
        mdb__browser_info__V_27 = (MR_Integer) 1;
#line 758 "browser_info.m"
        mdb__browser_info__NPr_28 = (MR_Integer) 1;
#line 755 "browser_info.m"
      }
#line 759 "browser_info.m"
    else
#line 760 "browser_info.m"
      {
#line 760 "browser_info.m"
        mdb__browser_info__F_25 = mdb__browser_info__F0_16;
#line 761 "browser_info.m"
        mdb__browser_info__Pr_26 = mdb__browser_info__Pr0_17;
#line 762 "browser_info.m"
        mdb__browser_info__V_27 = mdb__browser_info__V0_18;
#line 763 "browser_info.m"
        mdb__browser_info__NPr_28 = mdb__browser_info__NPr0_19;
#line 760 "browser_info.m"
      }
#line 656 "browser_info.m"
    mdb__browser_info__PParams0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 0)));
#line 656 "browser_info.m"
    mdb__browser_info__BParams0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 1)));
#line 656 "browser_info.m"
    mdb__browser_info__AParams0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 2)));
#line 656 "browser_info.m"
    mdb__browser_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 3)));
#line 656 "browser_info.m"
    mdb__browser_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 4)));
#line 656 "browser_info.m"
    mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 5)));
#line 659 "browser_info.m"
    {
#line 659 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__P_22, mdb__browser_info__F_25, mdb__browser_info__Pr_26, mdb__browser_info__V_27, mdb__browser_info__NPr_28, mdb__browser_info__Setting_20, mdb__browser_info__PParams0_29, &mdb__browser_info__PParams_32);
    }
#line 660 "browser_info.m"
    {
#line 660 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__B_23, mdb__browser_info__F_25, mdb__browser_info__Pr_26, mdb__browser_info__V_27, mdb__browser_info__NPr_28, mdb__browser_info__Setting_20, mdb__browser_info__BParams0_30, &mdb__browser_info__BParams_33);
    }
#line 661 "browser_info.m"
    {
#line 661 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__A_24, mdb__browser_info__F_25, mdb__browser_info__Pr_26, mdb__browser_info__V_27, mdb__browser_info__NPr_28, mdb__browser_info__Setting_20, mdb__browser_info__AParams0_31, &mdb__browser_info__AParams_34);
    }
#line 662 "browser_info.m"
    mdb__browser_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 0)));
#line 662 "browser_info.m"
    mdb__browser_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 1)));
#line 662 "browser_info.m"
    mdb__browser_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 2)));
#line 662 "browser_info.m"
    mdb__browser_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 3)));
#line 662 "browser_info.m"
    mdb__browser_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 4)));
#line 662 "browser_info.m"
    mdb__browser_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 5)));
#line 662 "browser_info.m"
    {
#line 662 "browser_info.m"
      MR_Word base;
#line 662 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 662 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_State_36 = base;
#line 662 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__PParams_32));
#line 662 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__BParams_33));
#line 662 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__AParams_34));
#line 662 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_39_39));
#line 662 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_60_60));
#line 662 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_61_61));
#line 662 "browser_info.m"
    }
#line 637 "browser_info.m"
  }
#line 204 "browser_info.m"
}

#line 197 "browser_info.m"
void MR_CALL 
mdb__browser_info__init_persistent_state_1_p_0(
#line 197 "browser_info.m"
  MR_Word * mdb__browser_info__State_2)
#line 197 "browser_info.m"
{
#line 592 "browser_info.m"
  {
#line 592 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 596 "browser_info.m"
    *mdb__browser_info__State_2 = (MR_Word) &mdb__browser_info_scalar_common_5[0];
#line 592 "browser_info.m"
  }
#line 197 "browser_info.m"
}

#line 191 "browser_info.m"
MR_Word MR_CALL 
mdb__browser_info__f_120_109_108_95_116_109_112_95_102_105_108_101_110_97_109_101_32_58_61_2_f_0(
#line 191 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 191 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 191 "browser_info.m"
{
#line 191 "browser_info.m"
  {
#line 191 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 191 "browser_info.m"
    MR_Word mdb__browser_info__HeadVar__3_3;
#line 191 "browser_info.m"
    MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 191 "browser_info.m"
    MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 191 "browser_info.m"
    MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 191 "browser_info.m"
    MR_Integer mdb__browser_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 191 "browser_info.m"
    MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 191 "browser_info.m"
    MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 5)));

#line 191 "browser_info.m"
    {
#line 191 "browser_info.m"
      mdb__browser_info__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 191 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 0) = ((MR_Box) (mdb__browser_info__V_4_4));
#line 191 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 1) = ((MR_Box) (mdb__browser_info__V_5_5));
#line 191 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 2) = ((MR_Box) (mdb__browser_info__V_6_6));
#line 191 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 3) = ((MR_Box) (mdb__browser_info__V_7_7));
#line 191 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 4) = ((MR_Box) (mdb__browser_info__V_8_8));
#line 191 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 5) = ((MR_Box) (mdb__browser_info__HeadVar__2_2));
#line 191 "browser_info.m"
    }
#line 191 "browser_info.m"
    return mdb__browser_info__HeadVar__3_3;
#line 191 "browser_info.m"
  }
#line 191 "browser_info.m"
}

#line 190 "browser_info.m"
MR_Word MR_CALL 
mdb__browser_info__xml_tmp_filename_1_f_0(
#line 190 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 190 "browser_info.m"
{
#line 190 "browser_info.m"
  {
#line 190 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 190 "browser_info.m"
    MR_Word mdb__browser_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 5)));
#line 190 "browser_info.m"
    MR_Word mdb__browser_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 190 "browser_info.m"
    MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 190 "browser_info.m"
    MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 190 "browser_info.m"
    MR_Integer mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 190 "browser_info.m"
    MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));

#line 190 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 190 "browser_info.m"
  }
#line 190 "browser_info.m"
}

#line 187 "browser_info.m"
MR_Word MR_CALL 
mdb__browser_info__f_120_109_108_95_98_114_111_119_115_101_114_95_99_109_100_32_58_61_2_f_0(
#line 187 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 187 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 187 "browser_info.m"
{
#line 187 "browser_info.m"
  {
#line 187 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 187 "browser_info.m"
    MR_Word mdb__browser_info__HeadVar__3_3;
#line 187 "browser_info.m"
    MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 187 "browser_info.m"
    MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 187 "browser_info.m"
    MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 187 "browser_info.m"
    MR_Integer mdb__browser_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 187 "browser_info.m"
    MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 5)));
#line 187 "browser_info.m"
    MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));

#line 187 "browser_info.m"
    {
#line 187 "browser_info.m"
      mdb__browser_info__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 187 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 0) = ((MR_Box) (mdb__browser_info__V_4_4));
#line 187 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 1) = ((MR_Box) (mdb__browser_info__V_5_5));
#line 187 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 2) = ((MR_Box) (mdb__browser_info__V_6_6));
#line 187 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 3) = ((MR_Box) (mdb__browser_info__V_7_7));
#line 187 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 4) = ((MR_Box) (mdb__browser_info__HeadVar__2_2));
#line 187 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 5) = ((MR_Box) (mdb__browser_info__V_9_9));
#line 187 "browser_info.m"
    }
#line 187 "browser_info.m"
    return mdb__browser_info__HeadVar__3_3;
#line 187 "browser_info.m"
  }
#line 187 "browser_info.m"
}

#line 186 "browser_info.m"
MR_Word MR_CALL 
mdb__browser_info__xml_browser_cmd_1_f_0(
#line 186 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 186 "browser_info.m"
{
#line 186 "browser_info.m"
  {
#line 186 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 186 "browser_info.m"
    MR_Word mdb__browser_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 186 "browser_info.m"
    MR_Word mdb__browser_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 186 "browser_info.m"
    MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 186 "browser_info.m"
    MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 186 "browser_info.m"
    MR_Integer mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 186 "browser_info.m"
    MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 5)));

#line 186 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 186 "browser_info.m"
  }
#line 186 "browser_info.m"
}

#line 175 "browser_info.m"
void MR_CALL 
mdb__browser_info__convert_dirs_to_term_path_3_p_0(
#line 175 "browser_info.m"
  MR_Word mdb__browser_info__Term_1,
#line 175 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 175 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__3_3)
#line 175 "browser_info.m"
{
#line 1263 "browser_info.m"
  {
#line 1263 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1263 "browser_info.m"
    if ((mdb__browser_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1263 "browser_info.m"
      *mdb__browser_info__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1263 "browser_info.m"
    else
#line 1263 "browser_info.m"
      {
#line 1263 "browser_info.m"
        MR_Word mdb__browser_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 1263 "browser_info.m"
        MR_Word mdb__browser_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 1263 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__V_26_26)) == (MR_mktag((MR_Integer) 2))))
#line 1272 "browser_info.m"
          {
#line 1272 "browser_info.m"
            MR_String mdb__browser_info__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__V_26_26, (MR_Integer) 0)));
#line 1272 "browser_info.m"
            MR_Integer mdb__browser_info__N_17;
#line 1272 "browser_info.m"
            MR_Word mdb__browser_info__TermPath_18;
#line 1279 "browser_info.m"
            MR_Integer mdb__browser_info__Pos_19;
#line 1279 "browser_info.m"
            MR_Word mdb__browser_info__Subterm_20;

#line 1274 "browser_info.m"
            {
#line 1274 "browser_info.m"
              mdb__browser_info__succeeded = mdb__term_rep__field_pos_3_p_0(mdb__browser_info__Name_15, mdb__browser_info__Term_1, &mdb__browser_info__Pos_19);
            }
#line 1274 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1275 "browser_info.m"
              {
#line 1275 "browser_info.m"
                mdb__browser_info__succeeded = mdb__term_rep__argument_3_p_0(mdb__browser_info__Term_1, mdb__browser_info__Pos_19, &mdb__browser_info__Subterm_20);
              }
#line 1279 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1277 "browser_info.m"
              {
#line 1277 "browser_info.m"
                {
#line 1277 "browser_info.m"
                  mdb__browser_info__convert_dirs_to_term_path_3_p_0(mdb__browser_info__Subterm_20, mdb__browser_info__V_25_25, &mdb__browser_info__TermPath_18);
                }
#line 1278 "browser_info.m"
                mdb__browser_info__N_17 = mdb__browser_info__Pos_19;
#line 1277 "browser_info.m"
              }
#line 1279 "browser_info.m"
            else
#line 1280 "browser_info.m"
              {
#line 1280 "browser_info.m"
                {
#line 1280 "browser_info.m"
                  mercury__require__unexpected_3_p_0((MR_String) "mdb.browser_info", (MR_String) "predicate \140mdb.browser_info.convert_dirs_to_term_path\'/3", (MR_String) "invalid field name");
#line 1280 "browser_info.m"
                  return;
                }
#line 1280 "browser_info.m"
              }
#line 1272 "browser_info.m"
            {
#line 1272 "browser_info.m"
              MR_Word base;
#line 1272 "browser_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1272 "browser_info.m"
              *mdb__browser_info__HeadVar__3_3 = base;
#line 1272 "browser_info.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browser_info__N_17));
#line 1272 "browser_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browser_info__TermPath_18));
#line 1272 "browser_info.m"
            }
#line 1272 "browser_info.m"
          }
#line 1263 "browser_info.m"
        else
#line 1264 "browser_info.m"
          {
#line 1264 "browser_info.m"
            MR_Integer mdb__browser_info__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__V_26_26, (MR_Integer) 0)));
#line 1264 "browser_info.m"
            MR_Word mdb__browser_info__TermPath_8;
#line 1269 "browser_info.m"
            MR_Word mdb__browser_info__Subterm_9;

#line 1266 "browser_info.m"
            {
#line 1266 "browser_info.m"
              mdb__browser_info__succeeded = mdb__term_rep__argument_3_p_0(mdb__browser_info__Term_1, mdb__browser_info__N_6, &mdb__browser_info__Subterm_9);
            }
#line 1269 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1268 "browser_info.m"
              {
#line 1268 "browser_info.m"
                mdb__browser_info__convert_dirs_to_term_path_3_p_0(mdb__browser_info__Subterm_9, mdb__browser_info__V_25_25, &mdb__browser_info__TermPath_8);
              }
#line 1269 "browser_info.m"
            else
#line 1270 "browser_info.m"
              {
#line 1270 "browser_info.m"
                {
#line 1270 "browser_info.m"
                  mercury__require__unexpected_3_p_0((MR_String) "mdb.browser_info", (MR_String) "predicate \140mdb.browser_info.convert_dirs_to_term_path\'/3", (MR_String) "invalid argument");
#line 1270 "browser_info.m"
                  return;
                }
#line 1270 "browser_info.m"
              }
#line 1264 "browser_info.m"
            {
#line 1264 "browser_info.m"
              MR_Word base;
#line 1264 "browser_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "browser_info.m"
              *mdb__browser_info__HeadVar__3_3 = base;
#line 1264 "browser_info.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browser_info__N_6));
#line 1264 "browser_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browser_info__TermPath_8));
#line 1264 "browser_info.m"
            }
#line 1264 "browser_info.m"
          }
#line 1263 "browser_info.m"
      }
#line 1263 "browser_info.m"
  }
#line 175 "browser_info.m"
}

#line 173 "browser_info.m"
MR_Integer MR_CALL 
mdb__browser_info__get_num_printed_io_actions_1_f_0(
#line 173 "browser_info.m"
  MR_Word mdb__browser_info__State_3)
#line 173 "browser_info.m"
{
#line 819 "browser_info.m"
  {
#line 819 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 819 "browser_info.m"
    MR_Integer mdb__browser_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 3)));
#line 819 "browser_info.m"
    MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 0)));
#line 819 "browser_info.m"
    MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 1)));
#line 819 "browser_info.m"
    MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 2)));
#line 819 "browser_info.m"
    MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 4)));
#line 819 "browser_info.m"
    MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 5)));

#line 819 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 819 "browser_info.m"
  }
#line 173 "browser_info.m"
}

#line 170 "browser_info.m"
void MR_CALL 
mdb__browser_info__get_format_params_4_p_0(
#line 170 "browser_info.m"
  MR_Word mdb__browser_info__Info_5,
#line 170 "browser_info.m"
  MR_Word mdb__browser_info__Caller_6,
#line 170 "browser_info.m"
  MR_Word mdb__browser_info__Format_7,
#line 170 "browser_info.m"
  MR_Word * mdb__browser_info__Params_8)
#line 170 "browser_info.m"
{
#line 545 "browser_info.m"
  {
#line 545 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 545 "browser_info.m"
    MR_Word mdb__browser_info__CallerParams_9;
#line 545 "browser_info.m"
    MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 4)));
#line 545 "browser_info.m"
    MR_Word mdb__browser_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 2)));
#line 545 "browser_info.m"
    MR_Word mdb__browser_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 1)));
#line 545 "browser_info.m"
    MR_Word mdb__browser_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 0)));
#line 545 "browser_info.m"
    MR_Word mdb__browser_info__V_61_61;
#line 545 "browser_info.m"
    MR_Word mdb__browser_info__V_62_62;
#line 545 "browser_info.m"
    MR_Word mdb__browser_info__V_63_63;
#line 545 "browser_info.m"
    MR_Word mdb__browser_info__V_64_64;
#line 546 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 0)));
#line 546 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 1)));
#line 546 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 2)));
#line 546 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 3)));
#line 546 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 5)));
#line 546 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 6)));
#line 807 "browser_info.m"
    MR_Word mdb__browser_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 5)));
#line 807 "browser_info.m"
    MR_Word mdb__browser_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 4)));
#line 807 "browser_info.m"
    MR_Integer mdb__browser_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 3)));
#line 814 "browser_info.m"
    MR_Word mdb__browser_info__V_65_65;

#line 807 "browser_info.m"
#line 807 "browser_info.m"
    switch (mdb__browser_info__Caller_6) {
#line 807 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 807 "browser_info.m"
      case (MR_Integer) 1:
#line 808 "browser_info.m"
        mdb__browser_info__CallerParams_9 = mdb__browser_info__V_39_39;
#line 807 "browser_info.m"
        break;
#line 807 "browser_info.m"
      case (MR_Integer) 0:
#line 807 "browser_info.m"
        mdb__browser_info__CallerParams_9 = mdb__browser_info__V_40_40;
#line 807 "browser_info.m"
        break;
#line 807 "browser_info.m"
      case (MR_Integer) 2:
#line 809 "browser_info.m"
        mdb__browser_info__CallerParams_9 = mdb__browser_info__V_38_38;
#line 807 "browser_info.m"
        break;
#line 807 "browser_info.m"
    }
#line 814 "browser_info.m"
    mdb__browser_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 0)));
#line 814 "browser_info.m"
    mdb__browser_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 1)));
#line 814 "browser_info.m"
    mdb__browser_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 2)));
#line 814 "browser_info.m"
    mdb__browser_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 3)));
#line 814 "browser_info.m"
    mdb__browser_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 4)));
#line 814 "browser_info.m"
#line 814 "browser_info.m"
    switch (mdb__browser_info__Format_7) {
#line 814 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 814 "browser_info.m"
      case (MR_Integer) 0:
#line 814 "browser_info.m"
        *mdb__browser_info__Params_8 = mdb__browser_info__V_64_64;
#line 814 "browser_info.m"
        break;
#line 814 "browser_info.m"
      case (MR_Integer) 3:
#line 817 "browser_info.m"
        *mdb__browser_info__Params_8 = mdb__browser_info__V_61_61;
#line 814 "browser_info.m"
        break;
#line 814 "browser_info.m"
      case (MR_Integer) 1:
#line 815 "browser_info.m"
        *mdb__browser_info__Params_8 = mdb__browser_info__V_63_63;
#line 814 "browser_info.m"
        break;
#line 814 "browser_info.m"
      case (MR_Integer) 2:
#line 816 "browser_info.m"
        *mdb__browser_info__Params_8 = mdb__browser_info__V_62_62;
#line 814 "browser_info.m"
        break;
#line 814 "browser_info.m"
    }
#line 545 "browser_info.m"
  }
#line 170 "browser_info.m"
}

#line 165 "browser_info.m"
void MR_CALL 
mdb__browser_info__get_format_4_p_0(
#line 165 "browser_info.m"
  MR_Word mdb__browser_info__Info_5,
#line 165 "browser_info.m"
  MR_Word mdb__browser_info__Caller_6,
#line 165 "browser_info.m"
  MR_Word mdb__browser_info__MaybeFormat_7,
#line 165 "browser_info.m"
  MR_Word * mdb__browser_info__Format_8)
#line 165 "browser_info.m"
{
#line 532 "browser_info.m"
  {
#line 532 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 532 "browser_info.m"
    if ((mdb__browser_info__MaybeFormat_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 534 "browser_info.m"
      {
#line 534 "browser_info.m"
        MR_Word mdb__browser_info__MdbFormatOption_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 3)));
#line 534 "browser_info.m"
        MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 4)));
#line 535 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 0)));
#line 535 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 1)));
#line 535 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 2)));
#line 535 "browser_info.m"
        MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 5)));
#line 535 "browser_info.m"
        MR_Word mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 6)));

#line 538 "browser_info.m"
        if ((mdb__browser_info__MdbFormatOption_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 539 "browser_info.m"
          {
#line 539 "browser_info.m"
            MR_Word mdb__browser_info__Params_10;
#line 539 "browser_info.m"
            MR_Word mdb__browser_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 2)));
#line 539 "browser_info.m"
            MR_Word mdb__browser_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 1)));
#line 539 "browser_info.m"
            MR_Word mdb__browser_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 0)));
#line 807 "browser_info.m"
            MR_Word mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 5)));
#line 807 "browser_info.m"
            MR_Word mdb__browser_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 4)));
#line 807 "browser_info.m"
            MR_Integer mdb__browser_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 3)));
#line 541 "browser_info.m"
            MR_Word mdb__browser_info__V_24_24;
#line 541 "browser_info.m"
            MR_Word mdb__browser_info__V_25_25;
#line 541 "browser_info.m"
            MR_Word mdb__browser_info__V_26_26;
#line 541 "browser_info.m"
            MR_Word mdb__browser_info__V_27_27;

#line 807 "browser_info.m"
#line 807 "browser_info.m"
            switch (mdb__browser_info__Caller_6) {
#line 807 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 807 "browser_info.m"
              case (MR_Integer) 1:
#line 808 "browser_info.m"
                mdb__browser_info__Params_10 = mdb__browser_info__V_50_50;
#line 807 "browser_info.m"
                break;
#line 807 "browser_info.m"
              case (MR_Integer) 0:
#line 807 "browser_info.m"
                mdb__browser_info__Params_10 = mdb__browser_info__V_51_51;
#line 807 "browser_info.m"
                break;
#line 807 "browser_info.m"
              case (MR_Integer) 2:
#line 809 "browser_info.m"
                mdb__browser_info__Params_10 = mdb__browser_info__V_49_49;
#line 807 "browser_info.m"
                break;
#line 807 "browser_info.m"
            }
#line 541 "browser_info.m"
            *mdb__browser_info__Format_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 0)));
#line 541 "browser_info.m"
            mdb__browser_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 1)));
#line 541 "browser_info.m"
            mdb__browser_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 2)));
#line 541 "browser_info.m"
            mdb__browser_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 3)));
#line 541 "browser_info.m"
            mdb__browser_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 4)));
#line 539 "browser_info.m"
          }
#line 538 "browser_info.m"
        else
#line 537 "browser_info.m"
          *mdb__browser_info__Format_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__MdbFormatOption_9, (MR_Integer) 0)));
#line 534 "browser_info.m"
      }
#line 532 "browser_info.m"
    else
#line 532 "browser_info.m"
      *mdb__browser_info__Format_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeFormat_7, (MR_Integer) 0)));
#line 532 "browser_info.m"
  }
#line 165 "browser_info.m"
}

#line 158 "browser_info.m"
MR_Word MR_CALL 
mdb__browser_info__init_5_f_0(
#line 158 "browser_info.m"
  MR_Word mdb__browser_info__BrowserTerm_7,
#line 158 "browser_info.m"
  MR_Word mdb__browser_info__CallerType_8,
#line 158 "browser_info.m"
  MR_Word mdb__browser_info__MaybeFormat_9,
#line 158 "browser_info.m"
  MR_Word mdb__browser_info__MaybeModeFunc_10,
#line 158 "browser_info.m"
  MR_Word mdb__browser_info__State_11)
#line 158 "browser_info.m"
{
#line 526 "browser_info.m"
  {
#line 526 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 526 "browser_info.m"
    MR_Word mdb__browser_info__HeadVar__6_6;

#line 527 "browser_info.m"
    {
#line 527 "browser_info.m"
      mdb__browser_info__HeadVar__6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 527 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 0) = ((MR_Box) (mdb__browser_info__BrowserTerm_7));
#line 527 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 2) = ((MR_Box) (mdb__browser_info__CallerType_8));
#line 527 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 3) = ((MR_Box) (mdb__browser_info__MaybeFormat_9));
#line 527 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 4) = ((MR_Box) (mdb__browser_info__State_11));
#line 527 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 527 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 6) = ((MR_Box) (mdb__browser_info__MaybeModeFunc_10));
#line 527 "browser_info.m"
    }
#line 526 "browser_info.m"
    return mdb__browser_info__HeadVar__6_6;
#line 526 "browser_info.m"
  }
#line 158 "browser_info.m"
}

void mercury__mdb__browser_info__init(void)
{
}

void mercury__mdb__browser_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_browse_caller_type_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_db_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_info_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_mode_func_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_maybe_track_subterm_1);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_param_cmd_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0);
}

void mercury__mdb__browser_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.browser_info. */
