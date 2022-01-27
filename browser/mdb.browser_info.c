/*
** Automatically generated from `browser_info.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "mdb.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdb.browser_term.mih"
#include "mdb.parse.mih"
#include "mdb.term_rep.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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

#line 1047 "browser_info.m"
static void MR_CALL 
mdb__browser_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(
#line 1047 "browser_info.m"
  MR_String * mdb__browser_info__HeadVar__2_2);

#line 1061 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(
#line 1061 "browser_info.m"
  MR_Word mdb__browser_info__D_5,
#line 1061 "browser_info.m"
  MR_String mdb__browser_info__S_6);

#line 1067 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
#line 1067 "browser_info.m"
  MR_Word mdb__browser_info__D_5,
#line 1067 "browser_info.m"
  MR_Integer mdb__browser_info__I_6);

#line 1047 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0(
#line 1047 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_5,
#line 1047 "browser_info.m"
  MR_String * mdb__browser_info__HeadVar__2_2);

#line 1051 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0(
#line 1051 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1);

#line 571 "browser_info.m"
static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0(
#line 571 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 571 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 571 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3);

#line 571 "browser_info.m"
static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0(
#line 571 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 571 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2);

#line 1195 "browser_info.m"
static void MR_CALL 
mdb__browser_info__browser_persistent_state_type_1_p_0(
#line 1195 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1);

#line 1178 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__format_params_to_desc_1_f_0(
#line 1178 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1);

#line 1168 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__format_params_to_mdb_command_2_f_0(
#line 1168 "browser_info.m"
  MR_String mdb__browser_info__CmdCallerOpt_4,
#line 1168 "browser_info.m"
  MR_Word mdb__browser_info__FormatParams_5);

#line 1158 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__caller_params_to_desc_1_f_0(
#line 1158 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1);

#line 1144 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__caller_params_to_mdb_command_2_f_0(
#line 1144 "browser_info.m"
  MR_String mdb__browser_info__CallerOpt_4,
#line 1144 "browser_info.m"
  MR_Word mdb__browser_info__CallerParams_5);

#line 1005 "browser_info.m"
static void MR_CALL 
mdb__browser_info__write_path_2_4_p_0(
#line 1005 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_1,
#line 1005 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2);

#line 919 "browser_info.m"
static void MR_CALL 
mdb__browser_info__show_settings_caller_format_8_p_0(
#line 919 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_9,
#line 919 "browser_info.m"
  MR_Word mdb__browser_info__Info_10,
#line 919 "browser_info.m"
  MR_Word mdb__browser_info__Caller_11,
#line 919 "browser_info.m"
  MR_String mdb__browser_info__CallerName_12,
#line 919 "browser_info.m"
  MR_Word mdb__browser_info__Format_13,
#line 919 "browser_info.m"
  MR_String mdb__browser_info__FormatName_14);

#line 892 "browser_info.m"
static void MR_CALL 
mdb__browser_info__show_settings_caller_6_p_0(
#line 892 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_7,
#line 892 "browser_info.m"
  MR_Word mdb__browser_info__Info_8,
#line 892 "browser_info.m"
  MR_Word mdb__browser_info__Caller_9,
#line 892 "browser_info.m"
  MR_String mdb__browser_info__CallerName_10);

#line 803 "browser_info.m"
static void MR_CALL 
mdb__browser_info__maybe_set_param_2_4_p_0(
#line 803 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 803 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 803 "browser_info.m"
  MR_Word mdb__browser_info__Params_3,
#line 803 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__4_4);

#line 776 "browser_info.m"
static void MR_CALL 
mdb__browser_info__maybe_set_param_8_p_0(
#line 776 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 776 "browser_info.m"
  MR_Word mdb__browser_info__F_2,
#line 776 "browser_info.m"
  MR_Word mdb__browser_info__Pr_3,
#line 776 "browser_info.m"
  MR_Word mdb__browser_info__V_4,
#line 776 "browser_info.m"
  MR_Word mdb__browser_info__NPr_5,
#line 776 "browser_info.m"
  MR_Word mdb__browser_info__Setting_6,
#line 776 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Params_0_7,
#line 776 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Params_8);

#line 522 "browser_info.m"
static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_no_0_f_0(void);

#line 516 "browser_info.m"
static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_yes_0_f_0(void);

#line 498 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0(
#line 498 "browser_info.m"
  MR_String mdb__browser_info__FileName_4,
#line 498 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 498 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7);

#line 483 "browser_info.m"
static void MR_CALL 
mdb__browser_info__get_xml_tmp_filename_from_mdb_2_p_0(
#line 483 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 483 "browser_info.m"
  MR_String * mdb__browser_info__FileName_4);

#line 470 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0(
#line 470 "browser_info.m"
  MR_String mdb__browser_info__Command_4,
#line 470 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 470 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7);

#line 455 "browser_info.m"
static void MR_CALL 
mdb__browser_info__get_xml_browser_cmd_from_mdb_2_p_0(
#line 455 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 455 "browser_info.m"
  MR_String * mdb__browser_info__Command_4);

#line 430 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_format_from_mdb_6_p_0(
#line 430 "browser_info.m"
  MR_Word mdb__browser_info__P_7,
#line 430 "browser_info.m"
  MR_Word mdb__browser_info__B_8,
#line 430 "browser_info.m"
  MR_Word mdb__browser_info__A_9,
#line 430 "browser_info.m"
  MR_Word mdb__browser_info__Format_10,
#line 430 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_12,
#line 430 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_13);

#line 397 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_lines_from_mdb_10_p_0(
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 397 "browser_info.m"
  MR_Integer mdb__browser_info__Lines_18,
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 397 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21);

#line 386 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_width_from_mdb_10_p_0(
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 386 "browser_info.m"
  MR_Integer mdb__browser_info__Width_18,
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 386 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21);

#line 375 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_size_from_mdb_10_p_0(
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__NPr_16,
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__V_17,
#line 375 "browser_info.m"
  MR_Integer mdb__browser_info__Size_18,
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 375 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21);

#line 364 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_depth_from_mdb_10_p_0(
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 364 "browser_info.m"
  MR_Integer mdb__browser_info__Depth_18,
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 364 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21);


static /* final */ const MR_Box mdb__browser_info_scalar_common_1[1][3];

static /* final */ const MR_Box mdb__browser_info_scalar_common_2[6][2];

static /* final */ const MR_Box mdb__browser_info_scalar_common_3[5][4];

static /* final */ const MR_Box mdb__browser_info_scalar_common_4[3][5];

static /* final */ const MR_Box mdb__browser_info_scalar_common_5[1][6];

static /* final */ const MR_Box mdb__browser_info_scalar_common_6[4][1];


#line 1188 "browser_info.m"
/* sealed */ struct mdb__browser_info__vector_common_type_7_0_s {
#line 1188 "browser_info.m"
  const MR_String mdb__browser_info__vector_common_type_7_0__vct_7_f_0;
#line 1188 "browser_info.m"
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


#include "mdb.browser_info.mh"
#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"

#line 356 "browser_info.m"
void 
ML_BROWSE_init_persistent_state(
#line 356 "browser_info.m"
  MR_Word * mdb__browser_info__State_2)
#line 356 "browser_info.m"
{
#line 356 "browser_info.m"
	mdb__browser_info__init_persistent_state_1_p_0((MR_Word *) mdb__browser_info__State_2);
}

#line 367 "browser_info.m"
void 
ML_BROWSE_set_depth_from_mdb(
#line 367 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 367 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 367 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 367 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 367 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 367 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 367 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 367 "browser_info.m"
  MR_Integer mdb__browser_info__Depth_18,
#line 367 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 367 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 367 "browser_info.m"
{
#line 367 "browser_info.m"
	mdb__browser_info__set_depth_from_mdb_10_p_0((MR_Word) mdb__browser_info__P_11, (MR_Word) mdb__browser_info__B_12, (MR_Word) mdb__browser_info__A_13, (MR_Word) mdb__browser_info__F_14, (MR_Word) mdb__browser_info__Pr_15, (MR_Word) mdb__browser_info__V_16, (MR_Word) mdb__browser_info__NPr_17, (MR_Integer) mdb__browser_info__Depth_18, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_20, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_21);
}

#line 378 "browser_info.m"
void 
ML_BROWSE_set_size_from_mdb(
#line 378 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 378 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 378 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 378 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 378 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 378 "browser_info.m"
  MR_Word mdb__browser_info__NPr_16,
#line 378 "browser_info.m"
  MR_Word mdb__browser_info__V_17,
#line 378 "browser_info.m"
  MR_Integer mdb__browser_info__Size_18,
#line 378 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 378 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 378 "browser_info.m"
{
#line 378 "browser_info.m"
	mdb__browser_info__set_size_from_mdb_10_p_0((MR_Word) mdb__browser_info__P_11, (MR_Word) mdb__browser_info__B_12, (MR_Word) mdb__browser_info__A_13, (MR_Word) mdb__browser_info__F_14, (MR_Word) mdb__browser_info__Pr_15, (MR_Word) mdb__browser_info__NPr_16, (MR_Word) mdb__browser_info__V_17, (MR_Integer) mdb__browser_info__Size_18, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_20, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_21);
}

#line 389 "browser_info.m"
void 
ML_BROWSE_set_width_from_mdb(
#line 389 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 389 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 389 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 389 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 389 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 389 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 389 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 389 "browser_info.m"
  MR_Integer mdb__browser_info__Width_18,
#line 389 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 389 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 389 "browser_info.m"
{
#line 389 "browser_info.m"
	mdb__browser_info__set_width_from_mdb_10_p_0((MR_Word) mdb__browser_info__P_11, (MR_Word) mdb__browser_info__B_12, (MR_Word) mdb__browser_info__A_13, (MR_Word) mdb__browser_info__F_14, (MR_Word) mdb__browser_info__Pr_15, (MR_Word) mdb__browser_info__V_16, (MR_Word) mdb__browser_info__NPr_17, (MR_Integer) mdb__browser_info__Width_18, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_20, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_21);
}

#line 400 "browser_info.m"
void 
ML_BROWSE_set_lines_from_mdb(
#line 400 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 400 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 400 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 400 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 400 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 400 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 400 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 400 "browser_info.m"
  MR_Integer mdb__browser_info__Lines_18,
#line 400 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 400 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 400 "browser_info.m"
{
#line 400 "browser_info.m"
	mdb__browser_info__set_lines_from_mdb_10_p_0((MR_Word) mdb__browser_info__P_11, (MR_Word) mdb__browser_info__B_12, (MR_Word) mdb__browser_info__A_13, (MR_Word) mdb__browser_info__F_14, (MR_Word) mdb__browser_info__Pr_15, (MR_Word) mdb__browser_info__V_16, (MR_Word) mdb__browser_info__NPr_17, (MR_Integer) mdb__browser_info__Lines_18, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_20, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_21);
}

#line 432 "browser_info.m"
void 
ML_BROWSE_set_format_from_mdb(
#line 432 "browser_info.m"
  MR_Word mdb__browser_info__P_7,
#line 432 "browser_info.m"
  MR_Word mdb__browser_info__B_8,
#line 432 "browser_info.m"
  MR_Word mdb__browser_info__A_9,
#line 432 "browser_info.m"
  MR_Word mdb__browser_info__Format_10,
#line 432 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_12,
#line 432 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_13)
#line 432 "browser_info.m"
{
#line 432 "browser_info.m"
	mdb__browser_info__set_format_from_mdb_6_p_0((MR_Word) mdb__browser_info__P_7, (MR_Word) mdb__browser_info__B_8, (MR_Word) mdb__browser_info__A_9, (MR_Word) mdb__browser_info__Format_10, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_12, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_13);
}

#line 441 "browser_info.m"
void 
ML_BROWSE_get_num_io_actions(
#line 441 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 441 "browser_info.m"
  MR_Integer * mdb__browser_info__NumIOActions_4)
#line 441 "browser_info.m"
{
#line 441 "browser_info.m"
	mdb__browser_info__get_num_io_actions_2_p_0((MR_Word) mdb__browser_info__Browser_3, (MR_Integer *) mdb__browser_info__NumIOActions_4);
}

#line 448 "browser_info.m"
void 
ML_BROWSE_set_num_io_actions(
#line 448 "browser_info.m"
  MR_Integer mdb__browser_info__NumIOActions_4,
#line 448 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 448 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 448 "browser_info.m"
{
#line 448 "browser_info.m"
	mdb__browser_info__set_num_io_actions_3_p_0((MR_Integer) mdb__browser_info__NumIOActions_4, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_7);
}

#line 457 "browser_info.m"
void 
ML_BROWSE_get_xml_browser_cmd_from_mdb(
#line 457 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 457 "browser_info.m"
  MR_String * mdb__browser_info__Command_4)
#line 457 "browser_info.m"
{
#line 457 "browser_info.m"
	mdb__browser_info__get_xml_browser_cmd_from_mdb_2_p_0((MR_Word) mdb__browser_info__Browser_3, (MR_String *) mdb__browser_info__Command_4);
}

#line 472 "browser_info.m"
void 
ML_BROWSE_set_xml_browser_cmd_from_mdb(
#line 472 "browser_info.m"
  MR_String mdb__browser_info__Command_4,
#line 472 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 472 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 472 "browser_info.m"
{
#line 472 "browser_info.m"
	mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0((MR_String) mdb__browser_info__Command_4, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_7);
}

#line 485 "browser_info.m"
void 
ML_BROWSE_get_xml_tmp_filename_from_mdb(
#line 485 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 485 "browser_info.m"
  MR_String * mdb__browser_info__FileName_4)
#line 485 "browser_info.m"
{
#line 485 "browser_info.m"
	mdb__browser_info__get_xml_tmp_filename_from_mdb_2_p_0((MR_Word) mdb__browser_info__Browser_3, (MR_String *) mdb__browser_info__FileName_4);
}

#line 500 "browser_info.m"
void 
ML_BROWSE_set_xml_tmp_filename_from_mdb(
#line 500 "browser_info.m"
  MR_String mdb__browser_info__FileName_4,
#line 500 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 500 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 500 "browser_info.m"
{
#line 500 "browser_info.m"
	mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0((MR_String) mdb__browser_info__FileName_4, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_7);
}

#line 517 "browser_info.m"
MR_Word 
ML_BROWSE_mercury_bool_yes(void)
#line 517 "browser_info.m"
{
#line 517 "browser_info.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_info__mercury_bool_yes_0_f_0();
	return ret_value;
}

#line 523 "browser_info.m"
MR_Word 
ML_BROWSE_mercury_bool_no(void)
#line 523 "browser_info.m"
{
#line 523 "browser_info.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_info__mercury_bool_no_0_f_0();
	return ret_value;
}

#line 1074 "browser_info.m"
void 
ML_BROWSE_browser_params_to_string(
#line 1074 "browser_info.m"
  MR_Word mdb__browser_info__Browser_4,
#line 1074 "browser_info.m"
  MR_Word mdb__browser_info__MDBCommandFormat_5,
#line 1074 "browser_info.m"
  MR_String * mdb__browser_info__Desc_6)
#line 1074 "browser_info.m"
{
#line 1074 "browser_info.m"
	mdb__browser_info__browser_params_to_string_3_p_0((MR_Word) mdb__browser_info__Browser_4, (MR_Word) mdb__browser_info__MDBCommandFormat_5, (MR_String *) mdb__browser_info__Desc_6);
}

#line 1196 "browser_info.m"
void 
ML_BROWSE_browser_persistent_state_type(
#line 1196 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1)
#line 1196 "browser_info.m"
{
#line 1196 "browser_info.m"
	mdb__browser_info__browser_persistent_state_type_1_p_0((MR_Word *) mdb__browser_info__HeadVar__1_1);
}


#line 1638 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0 = {
  (MR_String) "print",
  (MR_Integer) 0
};

#line 1644 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1 = {
  (MR_String) "browse",
  (MR_Integer) 1
};

#line 1650 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2 = {
  (MR_String) "print_all",
  (MR_Integer) 2
};

#line 1656 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browse_caller_type_0[3] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2
};

#line 1663 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browse_caller_type_0[3] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2
};

#line 1670 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browse_caller_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1677 "mdb.browser_info.c"
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

#line 1694 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_db_0[1] = {
  (MR_Integer) 0
};

#line 1699 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct2 mdb__browser_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0io__type_ctor_info_stream_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_stream_info_0
  }
};

#line 1708 "mdb.browser_info.c"
static const MR_NotagFunctorDesc mdb__browser_info__mdb__browser_info__notag_functor_desc_browser_db_0 = {
  (MR_String) "browser_db",
  (MR_PseudoTypeInfo) &mdb__browser_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0io__type_ctor_info_stream_info_0,
  (MR_String) "browser_stream_db"
};

#line 1715 "mdb.browser_info.c"
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

#line 1732 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0
  }
};

#line 1740 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0
  }
};

#line 1748 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_dir_0 = {
  &mdb__browser_info__mdb__browser_info__type_ctor_info_maybe_track_subterm_1,
  {
    (MR_TypeInfo) &mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0
  }
};

#line 1756 "mdb.browser_info.c"
static const MR_VA_TypeInfo_Struct2 mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0,
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0
  }
};

#line 1766 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0
  }
};

#line 1774 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_info_0_0[7] = {
  (MR_PseudoTypeInfo) &mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browse_caller_type_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_dir_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0
};

#line 1785 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_info_0_0[7] = {
  (MR_String) "term",
  (MR_String) "dirs",
  (MR_String) "caller_type",
  (MR_String) "format",
  (MR_String) "state",
  (MR_String) "maybe_track",
  (MR_String) "maybe_mode_func"
};

#line 1796 "mdb.browser_info.c"
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

#line 1811 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_info_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0
};

#line 1816 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_info_0_0
  }
};

#line 1825 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_info_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0
};

#line 1830 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_info_0[1] = {
  (MR_Integer) 0
};

#line 1835 "mdb.browser_info.c"
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

#line 1852 "mdb.browser_info.c"
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

#line 1869 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1877 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_persistent_state_0_0[6] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 1887 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_persistent_state_0_0[6] = {
  (MR_String) "print_params",
  (MR_String) "browse_params",
  (MR_String) "print_all_params",
  (MR_String) "num_printed_io_actions",
  (MR_String) "xml_browser_cmd",
  (MR_String) "xml_tmp_filename"
};

#line 1897 "mdb.browser_info.c"
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

#line 1912 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0
};

#line 1917 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_persistent_state_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0
  }
};

#line 1926 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_persistent_state_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0
};

#line 1931 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_persistent_state_0[1] = {
  (MR_Integer) 0
};

#line 1936 "mdb.browser_info.c"
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

#line 1953 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0 = {
  (MR_String) "input",
  (MR_Integer) 0
};

#line 1959 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1 = {
  (MR_String) "output",
  (MR_Integer) 1
};

#line 1965 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2 = {
  (MR_String) "unbound",
  (MR_Integer) 2
};

#line 1971 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3 = {
  (MR_String) "not_applicable",
  (MR_Integer) 3
};

#line 1977 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browser_term_mode_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3
};

#line 1985 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browser_term_mode_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2
};

#line 1993 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_term_mode_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 2001 "mdb.browser_info.c"
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

#line 2018 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_caller_params_0_0[5] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0
};

#line 2027 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_caller_params_0_0[5] = {
  (MR_String) "default_format",
  (MR_String) "flat_params",
  (MR_String) "raw_pretty_params",
  (MR_String) "verbose_params",
  (MR_String) "pretty_params"
};

#line 2036 "mdb.browser_info.c"
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

#line 2051 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_caller_params_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0
};

#line 2056 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_caller_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_caller_params_0_0
  }
};

#line 2065 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_caller_params_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0
};

#line 2070 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_caller_params_0[1] = {
  (MR_Integer) 0
};

#line 2075 "mdb.browser_info.c"
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

#line 2092 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0 = {
  (MR_String) "debugger_internal",
  (MR_Integer) 0
};

#line 2098 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1 = {
  (MR_String) "debugger_external",
  (MR_Integer) 1
};

#line 2104 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_debugger_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1
};

#line 2110 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_debugger_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0
};

#line 2116 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_debugger_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2122 "mdb.browser_info.c"
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

#line 2139 "mdb.browser_info.c"
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

#line 2154 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_dir_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2159 "mdb.browser_info.c"
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

#line 2174 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_dir_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2179 "mdb.browser_info.c"
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

#line 2194 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_0
};

#line 2199 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_1
};

#line 2204 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_2
};

#line 2209 "mdb.browser_info.c"
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

#line 2228 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_dir_0[3] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_0
};

#line 2235 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_dir_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2242 "mdb.browser_info.c"
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

#line 2259 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_format_params_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2267 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_format_params_0_0[4] = {
  (MR_String) "depth",
  (MR_String) "size",
  (MR_String) "width",
  (MR_String) "lines"
};

#line 2275 "mdb.browser_info.c"
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

#line 2290 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_format_params_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0
};

#line 2295 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_format_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_format_params_0_0
  }
};

#line 2304 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_format_params_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0
};

#line 2309 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_format_params_0[1] = {
  (MR_Integer) 0
};

#line 2314 "mdb.browser_info.c"
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

#line 2331 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0 = {
  (MR_String) "track_accurate",
  (MR_Integer) 0
};

#line 2337 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1 = {
  (MR_String) "track_fast",
  (MR_Integer) 1
};

#line 2343 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_how_track_subterm_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1
};

#line 2349 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_how_track_subterm_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1
};

#line 2355 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_how_track_subterm_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2361 "mdb.browser_info.c"
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

#line 2378 "mdb.browser_info.c"
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

#line 2393 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_maybe_track_subterm_1_1[3] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2400 "mdb.browser_info.c"
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

#line 2419 "mdb.browser_info.c"
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

#line 2434 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0
};

#line 2439 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1
};

#line 2444 "mdb.browser_info.c"
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

#line 2458 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_maybe_track_subterm_1[2] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1
};

#line 2464 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_maybe_track_subterm_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2470 "mdb.browser_info.c"
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

#line 2487 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_TypeInfo) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0
  }
};

#line 2495 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0
};

#line 2501 "mdb.browser_info.c"
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

#line 2516 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_1[2] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0
};

#line 2522 "mdb.browser_info.c"
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

#line 2537 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2542 "mdb.browser_info.c"
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

#line 2557 "mdb.browser_info.c"
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

#line 2572 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3
};

#line 2577 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0
};

#line 2582 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1
};

#line 2587 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_3[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2
};

#line 2592 "mdb.browser_info.c"
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

#line 2616 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_param_cmd_0[4] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3
};

#line 2624 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_param_cmd_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2632 "mdb.browser_info.c"
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

#line 2649 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0 = {
  (MR_String) "flat",
  (MR_Integer) 0
};

#line 2655 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1 = {
  (MR_String) "raw_pretty",
  (MR_Integer) 1
};

#line 2661 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2 = {
  (MR_String) "verbose",
  (MR_Integer) 2
};

#line 2667 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3 = {
  (MR_String) "pretty",
  (MR_Integer) 3
};

#line 2673 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_portray_format_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3
};

#line 2681 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_portray_format_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2
};

#line 2689 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_portray_format_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 2697 "mdb.browser_info.c"
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

#line 2714 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2719 "mdb.browser_info.c"
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

#line 2734 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2739 "mdb.browser_info.c"
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

#line 2754 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2759 "mdb.browser_info.c"
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

#line 2774 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2779 "mdb.browser_info.c"
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

#line 2794 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_4[1] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0
};

#line 2799 "mdb.browser_info.c"
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

#line 2814 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0
};

#line 2819 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1
};

#line 2824 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2
};

#line 2829 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_3[2] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4
};

#line 2835 "mdb.browser_info.c"
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

#line 2859 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_setting_0[5] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2
};

#line 2868 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_setting_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2877 "mdb.browser_info.c"
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

#line 2894 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0 = {
  (MR_String) "assert_invalid",
  (MR_Integer) 0
};

#line 2900 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1 = {
  (MR_String) "no_assert_invalid",
  (MR_Integer) 1
};

#line 2906 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_should_assert_invalid_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1
};

#line 2912 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_should_assert_invalid_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1
};

#line 2918 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_should_assert_invalid_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2924 "mdb.browser_info.c"
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

#line 2941 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2946 "mdb.browser_info.c"
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

#line 2961 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2966 "mdb.browser_info.c"
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

#line 2981 "mdb.browser_info.c"
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

#line 2996 "mdb.browser_info.c"
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

#line 3011 "mdb.browser_info.c"
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

#line 3026 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_0[3] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4
};

#line 3033 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0
};

#line 3038 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1
};

#line 3043 "mdb.browser_info.c"
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

#line 3062 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_term_browser_response_0[5] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0
};

#line 3071 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_term_browser_response_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 3080 "mdb.browser_info.c"
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

#line 3097 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

#line 3107 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

#line 3117 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

#line 3127 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0_10001))
};

#line 3137 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browse_caller_type_0_0_10001(
#line 3140 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3142 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3144 "mdb.browser_info.c"
{
#line 3146 "mdb.browser_info.c"
  {
#line 3148 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3151 "mdb.browser_info.c"
    {
#line 3153 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browse_caller_type_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3156 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3158 "mdb.browser_info.c"
  }
#line 3160 "mdb.browser_info.c"
}

#line 3163 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browse_caller_type_0_0_10001(
#line 3166 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3168 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3170 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3172 "mdb.browser_info.c"
{
#line 3174 "mdb.browser_info.c"
  {
#line 3176 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3179 "mdb.browser_info.c"
    {
#line 3181 "mdb.browser_info.c"
      mdb__browser_info____Compare____browse_caller_type_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3184 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3186 "mdb.browser_info.c"
  }
#line 3188 "mdb.browser_info.c"
}

#line 3191 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_db_0_0_10001(
#line 3194 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3196 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3198 "mdb.browser_info.c"
{
#line 3200 "mdb.browser_info.c"
  {
#line 3202 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3205 "mdb.browser_info.c"
    {
#line 3207 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_db_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3210 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3212 "mdb.browser_info.c"
  }
#line 3214 "mdb.browser_info.c"
}

#line 3217 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_db_0_0_10001(
#line 3220 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3222 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3224 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3226 "mdb.browser_info.c"
{
#line 3228 "mdb.browser_info.c"
  {
#line 3230 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3233 "mdb.browser_info.c"
    {
#line 3235 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_db_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3238 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3240 "mdb.browser_info.c"
  }
#line 3242 "mdb.browser_info.c"
}

#line 3245 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_info_0_0_10001(
#line 3248 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3250 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3252 "mdb.browser_info.c"
{
#line 3254 "mdb.browser_info.c"
  {
#line 3256 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3259 "mdb.browser_info.c"
    {
#line 3261 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_info_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3264 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3266 "mdb.browser_info.c"
  }
#line 3268 "mdb.browser_info.c"
}

#line 3271 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_info_0_0_10001(
#line 3274 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3276 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3278 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3280 "mdb.browser_info.c"
{
#line 3282 "mdb.browser_info.c"
  {
#line 3284 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3287 "mdb.browser_info.c"
    {
#line 3289 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_info_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3292 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3294 "mdb.browser_info.c"
  }
#line 3296 "mdb.browser_info.c"
}

#line 3299 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_mode_func_0_0_10001(
#line 3302 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3304 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3306 "mdb.browser_info.c"
{
#line 3308 "mdb.browser_info.c"
  {
#line 3310 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3313 "mdb.browser_info.c"
    {
#line 3315 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_mode_func_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3318 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3320 "mdb.browser_info.c"
  }
#line 3322 "mdb.browser_info.c"
}

#line 3325 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_mode_func_0_0_10001(
#line 3328 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3330 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3332 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3334 "mdb.browser_info.c"
{
#line 3336 "mdb.browser_info.c"
  {
#line 3338 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3341 "mdb.browser_info.c"
    {
#line 3343 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_mode_func_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3346 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3348 "mdb.browser_info.c"
  }
#line 3350 "mdb.browser_info.c"
}

#line 3353 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_persistent_state_0_0_10001(
#line 3356 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3358 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3360 "mdb.browser_info.c"
{
#line 3362 "mdb.browser_info.c"
  {
#line 3364 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3367 "mdb.browser_info.c"
    {
#line 3369 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_persistent_state_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3372 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3374 "mdb.browser_info.c"
  }
#line 3376 "mdb.browser_info.c"
}

#line 3379 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_persistent_state_0_0_10001(
#line 3382 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3384 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3386 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3388 "mdb.browser_info.c"
{
#line 3390 "mdb.browser_info.c"
  {
#line 3392 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3395 "mdb.browser_info.c"
    {
#line 3397 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_persistent_state_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3400 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3402 "mdb.browser_info.c"
  }
#line 3404 "mdb.browser_info.c"
}

#line 3407 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_term_mode_0_0_10001(
#line 3410 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3412 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3414 "mdb.browser_info.c"
{
#line 3416 "mdb.browser_info.c"
  {
#line 3418 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3421 "mdb.browser_info.c"
    {
#line 3423 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_term_mode_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3426 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3428 "mdb.browser_info.c"
  }
#line 3430 "mdb.browser_info.c"
}

#line 3433 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_term_mode_0_0_10001(
#line 3436 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3438 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3440 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3442 "mdb.browser_info.c"
{
#line 3444 "mdb.browser_info.c"
  {
#line 3446 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3449 "mdb.browser_info.c"
    {
#line 3451 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_term_mode_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3454 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3456 "mdb.browser_info.c"
  }
#line 3458 "mdb.browser_info.c"
}

#line 3461 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0_10001(
#line 3464 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3466 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3468 "mdb.browser_info.c"
{
#line 3470 "mdb.browser_info.c"
  {
#line 3472 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3475 "mdb.browser_info.c"
    {
#line 3477 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____caller_params_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3480 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3482 "mdb.browser_info.c"
  }
#line 3484 "mdb.browser_info.c"
}

#line 3487 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0_10001(
#line 3490 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3492 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3494 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3496 "mdb.browser_info.c"
{
#line 3498 "mdb.browser_info.c"
  {
#line 3500 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3503 "mdb.browser_info.c"
    {
#line 3505 "mdb.browser_info.c"
      mdb__browser_info____Compare____caller_params_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3508 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3510 "mdb.browser_info.c"
  }
#line 3512 "mdb.browser_info.c"
}

#line 3515 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____debugger_0_0_10001(
#line 3518 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3520 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3522 "mdb.browser_info.c"
{
#line 3524 "mdb.browser_info.c"
  {
#line 3526 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3529 "mdb.browser_info.c"
    {
#line 3531 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____debugger_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3534 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3536 "mdb.browser_info.c"
  }
#line 3538 "mdb.browser_info.c"
}

#line 3541 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____debugger_0_0_10001(
#line 3544 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3546 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3548 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3550 "mdb.browser_info.c"
{
#line 3552 "mdb.browser_info.c"
  {
#line 3554 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3557 "mdb.browser_info.c"
    {
#line 3559 "mdb.browser_info.c"
      mdb__browser_info____Compare____debugger_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3562 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3564 "mdb.browser_info.c"
  }
#line 3566 "mdb.browser_info.c"
}

#line 3569 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____dir_0_0_10001(
#line 3572 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3574 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3576 "mdb.browser_info.c"
{
#line 3578 "mdb.browser_info.c"
  {
#line 3580 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3583 "mdb.browser_info.c"
    {
#line 3585 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____dir_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3588 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3590 "mdb.browser_info.c"
  }
#line 3592 "mdb.browser_info.c"
}

#line 3595 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____dir_0_0_10001(
#line 3598 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3600 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3602 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3604 "mdb.browser_info.c"
{
#line 3606 "mdb.browser_info.c"
  {
#line 3608 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3611 "mdb.browser_info.c"
    {
#line 3613 "mdb.browser_info.c"
      mdb__browser_info____Compare____dir_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3616 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3618 "mdb.browser_info.c"
  }
#line 3620 "mdb.browser_info.c"
}

#line 3623 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____format_params_0_0_10001(
#line 3626 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3628 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3630 "mdb.browser_info.c"
{
#line 3632 "mdb.browser_info.c"
  {
#line 3634 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3637 "mdb.browser_info.c"
    {
#line 3639 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3642 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3644 "mdb.browser_info.c"
  }
#line 3646 "mdb.browser_info.c"
}

#line 3649 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____format_params_0_0_10001(
#line 3652 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3654 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3656 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3658 "mdb.browser_info.c"
{
#line 3660 "mdb.browser_info.c"
  {
#line 3662 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3665 "mdb.browser_info.c"
    {
#line 3667 "mdb.browser_info.c"
      mdb__browser_info____Compare____format_params_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3670 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3672 "mdb.browser_info.c"
  }
#line 3674 "mdb.browser_info.c"
}

#line 3677 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____how_track_subterm_0_0_10001(
#line 3680 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3682 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3684 "mdb.browser_info.c"
{
#line 3686 "mdb.browser_info.c"
  {
#line 3688 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3691 "mdb.browser_info.c"
    {
#line 3693 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____how_track_subterm_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3696 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3698 "mdb.browser_info.c"
  }
#line 3700 "mdb.browser_info.c"
}

#line 3703 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____how_track_subterm_0_0_10001(
#line 3706 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3708 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3710 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3712 "mdb.browser_info.c"
{
#line 3714 "mdb.browser_info.c"
  {
#line 3716 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3719 "mdb.browser_info.c"
    {
#line 3721 "mdb.browser_info.c"
      mdb__browser_info____Compare____how_track_subterm_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3724 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3726 "mdb.browser_info.c"
  }
#line 3728 "mdb.browser_info.c"
}

#line 3731 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____maybe_track_subterm_1_0_10001(
#line 3734 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3736 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3738 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3740 "mdb.browser_info.c"
{
#line 3742 "mdb.browser_info.c"
  {
#line 3744 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3747 "mdb.browser_info.c"
    {
#line 3749 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____maybe_track_subterm_1_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3752 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3754 "mdb.browser_info.c"
  }
#line 3756 "mdb.browser_info.c"
}

#line 3759 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____maybe_track_subterm_1_0_10001(
#line 3762 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3764 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_2,
#line 3766 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 3768 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_4)
#line 3770 "mdb.browser_info.c"
{
#line 3772 "mdb.browser_info.c"
  {
#line 3774 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3777 "mdb.browser_info.c"
    {
#line 3779 "mdb.browser_info.c"
      mdb__browser_info____Compare____maybe_track_subterm_1_0(((MR_Word) mdb__browser_info__wrapper_arg_1), &mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_3), ((MR_Word) mdb__browser_info__wrapper_arg_4));
    }
#line 3782 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_2 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3784 "mdb.browser_info.c"
  }
#line 3786 "mdb.browser_info.c"
}

#line 3789 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____param_cmd_0_0_10001(
#line 3792 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3794 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3796 "mdb.browser_info.c"
{
#line 3798 "mdb.browser_info.c"
  {
#line 3800 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3803 "mdb.browser_info.c"
    {
#line 3805 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____param_cmd_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3808 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3810 "mdb.browser_info.c"
  }
#line 3812 "mdb.browser_info.c"
}

#line 3815 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____param_cmd_0_0_10001(
#line 3818 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3820 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3822 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3824 "mdb.browser_info.c"
{
#line 3826 "mdb.browser_info.c"
  {
#line 3828 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3831 "mdb.browser_info.c"
    {
#line 3833 "mdb.browser_info.c"
      mdb__browser_info____Compare____param_cmd_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3836 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3838 "mdb.browser_info.c"
  }
#line 3840 "mdb.browser_info.c"
}

#line 3843 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____portray_format_0_0_10001(
#line 3846 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3848 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3850 "mdb.browser_info.c"
{
#line 3852 "mdb.browser_info.c"
  {
#line 3854 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3857 "mdb.browser_info.c"
    {
#line 3859 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____portray_format_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3862 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3864 "mdb.browser_info.c"
  }
#line 3866 "mdb.browser_info.c"
}

#line 3869 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____portray_format_0_0_10001(
#line 3872 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3874 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3876 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3878 "mdb.browser_info.c"
{
#line 3880 "mdb.browser_info.c"
  {
#line 3882 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3885 "mdb.browser_info.c"
    {
#line 3887 "mdb.browser_info.c"
      mdb__browser_info____Compare____portray_format_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3890 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3892 "mdb.browser_info.c"
  }
#line 3894 "mdb.browser_info.c"
}

#line 3897 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____setting_0_0_10001(
#line 3900 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3902 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3904 "mdb.browser_info.c"
{
#line 3906 "mdb.browser_info.c"
  {
#line 3908 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3911 "mdb.browser_info.c"
    {
#line 3913 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____setting_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3916 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3918 "mdb.browser_info.c"
  }
#line 3920 "mdb.browser_info.c"
}

#line 3923 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____setting_0_0_10001(
#line 3926 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3928 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3930 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3932 "mdb.browser_info.c"
{
#line 3934 "mdb.browser_info.c"
  {
#line 3936 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3939 "mdb.browser_info.c"
    {
#line 3941 "mdb.browser_info.c"
      mdb__browser_info____Compare____setting_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3944 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3946 "mdb.browser_info.c"
  }
#line 3948 "mdb.browser_info.c"
}

#line 3951 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____should_assert_invalid_0_0_10001(
#line 3954 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3956 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3958 "mdb.browser_info.c"
{
#line 3960 "mdb.browser_info.c"
  {
#line 3962 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3965 "mdb.browser_info.c"
    {
#line 3967 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____should_assert_invalid_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3970 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3972 "mdb.browser_info.c"
  }
#line 3974 "mdb.browser_info.c"
}

#line 3977 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____should_assert_invalid_0_0_10001(
#line 3980 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3982 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3984 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3986 "mdb.browser_info.c"
{
#line 3988 "mdb.browser_info.c"
  {
#line 3990 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3993 "mdb.browser_info.c"
    {
#line 3995 "mdb.browser_info.c"
      mdb__browser_info____Compare____should_assert_invalid_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3998 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 4000 "mdb.browser_info.c"
  }
#line 4002 "mdb.browser_info.c"
}

#line 4005 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____term_browser_response_0_0_10001(
#line 4008 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4010 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 4012 "mdb.browser_info.c"
{
#line 4014 "mdb.browser_info.c"
  {
#line 4016 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 4019 "mdb.browser_info.c"
    {
#line 4021 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____term_browser_response_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 4024 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 4026 "mdb.browser_info.c"
  }
#line 4028 "mdb.browser_info.c"
}

#line 4031 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____term_browser_response_0_0_10001(
#line 4034 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 4036 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4038 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 4040 "mdb.browser_info.c"
{
#line 4042 "mdb.browser_info.c"
  {
#line 4044 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 4047 "mdb.browser_info.c"
    {
#line 4049 "mdb.browser_info.c"
      mdb__browser_info____Compare____term_browser_response_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 4052 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 4054 "mdb.browser_info.c"
  }
#line 4056 "mdb.browser_info.c"
}

#line 4059 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
#line 4062 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4064 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4066 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4068 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 4070 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4)
#line 4072 "mdb.browser_info.c"
{
#line 4074 "mdb.browser_info.c"
  {
#line 4076 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;

#line 4079 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4081 "mdb.browser_info.c"
    {
#line 4083 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Integer) mdb__browser_info__wrapper_arg_2));
    }
#line 4086 "mdb.browser_info.c"
  }
#line 4088 "mdb.browser_info.c"
}

#line 4091 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
#line 4094 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4096 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4098 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4100 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 4102 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4)
#line 4104 "mdb.browser_info.c"
{
#line 4106 "mdb.browser_info.c"
  {
#line 4108 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;

#line 4111 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4113 "mdb.browser_info.c"
    {
#line 4115 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_String) mdb__browser_info__wrapper_arg_2));
    }
#line 4118 "mdb.browser_info.c"
  }
#line 4120 "mdb.browser_info.c"
}

#line 4123 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
#line 4126 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4128 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4130 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_2,
#line 4132 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 4134 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4)
#line 4136 "mdb.browser_info.c"
{
#line 4138 "mdb.browser_info.c"
  {
#line 4140 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;
#line 4142 "mdb.browser_info.c"
    MR_String mdb__browser_info__conv0_HeadVar__2_2;

#line 4145 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4147 "mdb.browser_info.c"
    {
#line 4149 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1), &mdb__browser_info__conv0_HeadVar__2_2);
    }
#line 4152 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_2 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__2_2));
#line 4154 "mdb.browser_info.c"
  }
#line 4156 "mdb.browser_info.c"
}

#line 4159 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
#line 4162 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4164 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4166 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4168 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_3)
#line 4170 "mdb.browser_info.c"
{
#line 4172 "mdb.browser_info.c"
  {
#line 4174 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;

#line 4177 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4179 "mdb.browser_info.c"
    {
#line 4181 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1));
    }
#line 4184 "mdb.browser_info.c"
  }
#line 4186 "mdb.browser_info.c"
}

#line 1047 "browser_info.m"
static void MR_CALL 
mdb__browser_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(
#line 1047 "browser_info.m"
  MR_String * mdb__browser_info__HeadVar__2_2)
#line 1047 "browser_info.m"
{
#line 1047 "browser_info.m"
  {
#line 1047 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1047 "browser_info.m"
    *mdb__browser_info__HeadVar__2_2 = (MR_String) "debugger";
#line 1047 "browser_info.m"
  }
#line 1047 "browser_info.m"
}

#line 1061 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(
#line 1061 "browser_info.m"
  MR_Word mdb__browser_info__D_5,
#line 1061 "browser_info.m"
  MR_String mdb__browser_info__S_6)
#line 1061 "browser_info.m"
{
#line 1062 "browser_info.m"
  {
#line 1062 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1062 "browser_info.m"
    {
#line 1062 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__D_5, mdb__browser_info__S_6);
#line 1062 "browser_info.m"
      return;
    }
#line 1062 "browser_info.m"
  }
#line 1061 "browser_info.m"
}

#line 1067 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
#line 1067 "browser_info.m"
  MR_Word mdb__browser_info__D_5,
#line 1067 "browser_info.m"
  MR_Integer mdb__browser_info__I_6)
#line 1067 "browser_info.m"
{
#line 1068 "browser_info.m"
  {
#line 1068 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1068 "browser_info.m"
    {
#line 1068 "browser_info.m"
      mdb__browser_info__write_int_debugger_4_p_0(mdb__browser_info__D_5, mdb__browser_info__I_6);
#line 1068 "browser_info.m"
      return;
    }
#line 1068 "browser_info.m"
  }
#line 1067 "browser_info.m"
}

#line 1047 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0(
#line 1047 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_5,
#line 1047 "browser_info.m"
  MR_String * mdb__browser_info__HeadVar__2_2)
#line 1047 "browser_info.m"
{
#line 1047 "browser_info.m"
  {
#line 1047 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1047 "browser_info.m"
    {
#line 1047 "browser_info.m"
      mdb__browser_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(mdb__browser_info__HeadVar__2_2);
#line 1047 "browser_info.m"
      return;
    }
#line 1047 "browser_info.m"
  }
#line 1047 "browser_info.m"
}

#line 1051 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0(
#line 1051 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 1051 "browser_info.m"
{
#line 1051 "browser_info.m"
  {
#line 1051 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1051 "browser_info.m"
#line 1051 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 1051 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1051 "browser_info.m"
      case (MR_Integer) 1:
#line 1054 "browser_info.m"
        {
#line 1054 "browser_info.m"
        }
#line 1051 "browser_info.m"
        break;
#line 1051 "browser_info.m"
      case (MR_Integer) 0:
#line 1052 "browser_info.m"
        {
#line 1052 "browser_info.m"
          mercury__io__flush_output_2_p_0();
#line 1052 "browser_info.m"
          return;
        }
#line 1051 "browser_info.m"
        break;
#line 1051 "browser_info.m"
    }
#line 1051 "browser_info.m"
  }
#line 1051 "browser_info.m"
}

#line 280 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____term_browser_response_0_0(
#line 280 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 280 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 280 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 280 "browser_info.m"
{
#line 280 "browser_info.m"
  {
#line 280 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 280 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_24 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 280 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_25 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 280 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_24 == mdb__browser_info__CastY_25);
#line 280 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 4353 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "browser_info.m"
    else
#line 280 "browser_info.m"
#line 280 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) {
#line 280 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 280 "browser_info.m"
        case (MR_Integer) 0:
#line 280 "browser_info.m"
#line 280 "browser_info.m"
          switch (MR_unmkbody(mdb__browser_info__HeadVar__2_2)) {
#line 280 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 280 "browser_info.m"
            case (MR_Integer) 0:
#line 280 "browser_info.m"
#line 280 "browser_info.m"
              switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 280 "browser_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 280 "browser_info.m"
                case (MR_Integer) 0:
#line 280 "browser_info.m"
#line 280 "browser_info.m"
                  switch (MR_unmkbody(mdb__browser_info__HeadVar__3_3)) {
#line 280 "browser_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 280 "browser_info.m"
                    case (MR_Integer) 0:
#line 280 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "browser_info.m"
                      break;
#line 280 "browser_info.m"
                    case (MR_Integer) 1:
#line 280 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                      break;
#line 280 "browser_info.m"
                    case (MR_Integer) 2:
#line 280 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                      break;
#line 280 "browser_info.m"
                  }
#line 280 "browser_info.m"
                  break;
#line 280 "browser_info.m"
                case (MR_Integer) 1:
#line 4407 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                  break;
#line 280 "browser_info.m"
                case (MR_Integer) 2:
#line 4413 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                  break;
#line 280 "browser_info.m"
              }
#line 280 "browser_info.m"
              break;
#line 280 "browser_info.m"
            case (MR_Integer) 1:
#line 280 "browser_info.m"
#line 280 "browser_info.m"
              switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 280 "browser_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 280 "browser_info.m"
                case (MR_Integer) 0:
#line 280 "browser_info.m"
#line 280 "browser_info.m"
                  switch (MR_unmkbody(mdb__browser_info__HeadVar__3_3)) {
#line 280 "browser_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 280 "browser_info.m"
                    case (MR_Integer) 0:
#line 280 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                      break;
#line 280 "browser_info.m"
                    case (MR_Integer) 1:
#line 280 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "browser_info.m"
                      break;
#line 280 "browser_info.m"
                    case (MR_Integer) 2:
#line 280 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                      break;
#line 280 "browser_info.m"
                  }
#line 280 "browser_info.m"
                  break;
#line 280 "browser_info.m"
                case (MR_Integer) 1:
#line 4459 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                  break;
#line 280 "browser_info.m"
                case (MR_Integer) 2:
#line 4465 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                  break;
#line 280 "browser_info.m"
              }
#line 280 "browser_info.m"
              break;
#line 280 "browser_info.m"
            case (MR_Integer) 2:
#line 280 "browser_info.m"
#line 280 "browser_info.m"
              switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 280 "browser_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 280 "browser_info.m"
                case (MR_Integer) 0:
#line 280 "browser_info.m"
#line 280 "browser_info.m"
                  switch (MR_unmkbody(mdb__browser_info__HeadVar__3_3)) {
#line 280 "browser_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 280 "browser_info.m"
                    case (MR_Integer) 0:
#line 280 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                      break;
#line 280 "browser_info.m"
                    case (MR_Integer) 1:
#line 280 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                      break;
#line 280 "browser_info.m"
                    case (MR_Integer) 2:
#line 280 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "browser_info.m"
                      break;
#line 280 "browser_info.m"
                  }
#line 280 "browser_info.m"
                  break;
#line 280 "browser_info.m"
                case (MR_Integer) 1:
#line 4511 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                  break;
#line 280 "browser_info.m"
                case (MR_Integer) 2:
#line 4517 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                  break;
#line 280 "browser_info.m"
              }
#line 280 "browser_info.m"
              break;
#line 280 "browser_info.m"
          }
#line 280 "browser_info.m"
          break;
#line 280 "browser_info.m"
        case (MR_Integer) 1:
#line 280 "browser_info.m"
          {
#line 280 "browser_info.m"
            MR_String mdb__browser_info__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 280 "browser_info.m"
#line 280 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 280 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 280 "browser_info.m"
              case (MR_Integer) 0:
#line 280 "browser_info.m"
#line 280 "browser_info.m"
                switch (MR_unmkbody(mdb__browser_info__HeadVar__3_3)) {
#line 280 "browser_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 280 "browser_info.m"
                  case (MR_Integer) 0:
#line 4550 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                    break;
#line 280 "browser_info.m"
                  case (MR_Integer) 1:
#line 4556 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                    break;
#line 280 "browser_info.m"
                  case (MR_Integer) 2:
#line 4562 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                    break;
#line 280 "browser_info.m"
                }
#line 280 "browser_info.m"
                break;
#line 280 "browser_info.m"
              case (MR_Integer) 1:
#line 280 "browser_info.m"
                {
#line 280 "browser_info.m"
                  MR_String mdb__browser_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 280 "browser_info.m"
                  {
#line 280 "browser_info.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_29_29, mdb__browser_info__V_5_5);
#line 280 "browser_info.m"
                    return;
                  }
#line 280 "browser_info.m"
                }
#line 280 "browser_info.m"
                break;
#line 280 "browser_info.m"
              case (MR_Integer) 2:
#line 4590 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                break;
#line 280 "browser_info.m"
            }
#line 280 "browser_info.m"
          }
#line 280 "browser_info.m"
          break;
#line 280 "browser_info.m"
        case (MR_Integer) 2:
#line 280 "browser_info.m"
          {
#line 280 "browser_info.m"
            MR_Integer mdb__browser_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 280 "browser_info.m"
#line 280 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 280 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 280 "browser_info.m"
              case (MR_Integer) 0:
#line 280 "browser_info.m"
#line 280 "browser_info.m"
                switch (MR_unmkbody(mdb__browser_info__HeadVar__3_3)) {
#line 280 "browser_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 280 "browser_info.m"
                  case (MR_Integer) 0:
#line 4621 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                    break;
#line 280 "browser_info.m"
                  case (MR_Integer) 1:
#line 4627 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                    break;
#line 280 "browser_info.m"
                  case (MR_Integer) 2:
#line 4633 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                    break;
#line 280 "browser_info.m"
                }
#line 280 "browser_info.m"
                break;
#line 280 "browser_info.m"
              case (MR_Integer) 1:
#line 4643 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                break;
#line 280 "browser_info.m"
              case (MR_Integer) 2:
#line 280 "browser_info.m"
                {
#line 280 "browser_info.m"
                  MR_Integer mdb__browser_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 280 "browser_info.m"
                  {
#line 280 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_28_28, mdb__browser_info__V_14_14);
#line 280 "browser_info.m"
                    return;
                  }
#line 280 "browser_info.m"
                }
#line 280 "browser_info.m"
                break;
#line 280 "browser_info.m"
            }
#line 280 "browser_info.m"
          }
#line 280 "browser_info.m"
          break;
#line 280 "browser_info.m"
      }
#line 280 "browser_info.m"
  }
#line 280 "browser_info.m"
}

#line 280 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____term_browser_response_0_0(
#line 280 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 280 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 280 "browser_info.m"
{
#line 280 "browser_info.m"
  {
#line 280 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 280 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_13 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 280 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_14 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 280 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_13 == mdb__browser_info__CastY_14);
#line 280 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 280 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 280 "browser_info.m"
    else
#line 280 "browser_info.m"
#line 280 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) {
#line 280 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 280 "browser_info.m"
        case (MR_Integer) 0:
#line 280 "browser_info.m"
#line 280 "browser_info.m"
          switch (MR_unmkbody(mdb__browser_info__HeadVar__1_1)) {
#line 280 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 280 "browser_info.m"
            case (MR_Integer) 0:
#line 280 "browser_info.m"
              {
#line 280 "browser_info.m"
                MR_Integer mdb__browser_info__CastX_7 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 280 "browser_info.m"
                MR_Integer mdb__browser_info__CastY_8 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 280 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__CastY_8 == mdb__browser_info__CastX_7);
#line 280 "browser_info.m"
              }
#line 280 "browser_info.m"
              break;
#line 280 "browser_info.m"
            case (MR_Integer) 1:
#line 280 "browser_info.m"
              {
#line 280 "browser_info.m"
                MR_Integer mdb__browser_info__CastX_9 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 280 "browser_info.m"
                MR_Integer mdb__browser_info__CastY_10 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 280 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__CastY_10 == mdb__browser_info__CastX_9);
#line 280 "browser_info.m"
              }
#line 280 "browser_info.m"
              break;
#line 280 "browser_info.m"
            case (MR_Integer) 2:
#line 280 "browser_info.m"
              {
#line 280 "browser_info.m"
                MR_Integer mdb__browser_info__CastX_11 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 280 "browser_info.m"
                MR_Integer mdb__browser_info__CastY_12 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 280 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__CastY_12 == mdb__browser_info__CastX_11);
#line 280 "browser_info.m"
              }
#line 280 "browser_info.m"
              break;
#line 280 "browser_info.m"
          }
#line 280 "browser_info.m"
          break;
#line 280 "browser_info.m"
        case (MR_Integer) 1:
#line 280 "browser_info.m"
          {
#line 280 "browser_info.m"
            MR_String mdb__browser_info__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 280 "browser_info.m"
            MR_String mdb__browser_info__V_4_4;

#line 280 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 280 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 280 "browser_info.m"
              {
#line 280 "browser_info.m"
                mdb__browser_info__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 4782 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (strcmp(mdb__browser_info__V_3_3, mdb__browser_info__V_4_4) == 0);
#line 280 "browser_info.m"
              }
#line 280 "browser_info.m"
          }
#line 280 "browser_info.m"
          break;
#line 280 "browser_info.m"
        case (MR_Integer) 2:
#line 280 "browser_info.m"
          {
#line 280 "browser_info.m"
            MR_Integer mdb__browser_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 280 "browser_info.m"
            MR_Integer mdb__browser_info__V_6_6;

#line 280 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 280 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 280 "browser_info.m"
              {
#line 280 "browser_info.m"
                mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 4807 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_6_6);
#line 280 "browser_info.m"
              }
#line 280 "browser_info.m"
          }
#line 280 "browser_info.m"
          break;
#line 280 "browser_info.m"
      }
#line 280 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 280 "browser_info.m"
  }
#line 280 "browser_info.m"
}

#line 77 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____should_assert_invalid_0_0(
#line 77 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 77 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 77 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 77 "browser_info.m"
{
#line 77 "browser_info.m"
  {
#line 77 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 77 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 77 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 77 "browser_info.m"
    {
#line 77 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
#line 77 "browser_info.m"
      return;
    }
#line 77 "browser_info.m"
  }
#line 77 "browser_info.m"
}

#line 77 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____should_assert_invalid_0_0(
#line 77 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 77 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 77 "browser_info.m"
{
#line 4865 "mdb.browser_info.c"
  {
#line 4867 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 4870 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 4872 "mdb.browser_info.c"
  }
#line 77 "browser_info.m"
}

#line 150 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____setting_0_0(
#line 150 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 150 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 150 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 150 "browser_info.m"
{
#line 150 "browser_info.m"
  {
#line 150 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 150 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_54 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 150 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_55 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 150 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_54 == mdb__browser_info__CastY_55);
#line 150 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 4901 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "browser_info.m"
    else
#line 150 "browser_info.m"
#line 150 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) {
#line 150 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 150 "browser_info.m"
        case (MR_Integer) 0:
#line 150 "browser_info.m"
          {
#line 150 "browser_info.m"
            MR_Integer mdb__browser_info__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "browser_info.m"
#line 150 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 150 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 150 "browser_info.m"
              case (MR_Integer) 0:
#line 150 "browser_info.m"
                {
#line 150 "browser_info.m"
                  MR_Integer mdb__browser_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 150 "browser_info.m"
                  {
#line 150 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_61_61, mdb__browser_info__V_5_5);
#line 150 "browser_info.m"
                    return;
                  }
#line 150 "browser_info.m"
                }
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
              case (MR_Integer) 1:
#line 4942 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
              case (MR_Integer) 2:
#line 4948 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
              case (MR_Integer) 3:
#line 150 "browser_info.m"
#line 150 "browser_info.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 150 "browser_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 150 "browser_info.m"
                  case (MR_Integer) 0:
#line 4961 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 1:
#line 4967 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                }
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
            }
#line 150 "browser_info.m"
          }
#line 150 "browser_info.m"
          break;
#line 150 "browser_info.m"
        case (MR_Integer) 1:
#line 150 "browser_info.m"
          {
#line 150 "browser_info.m"
            MR_Integer mdb__browser_info__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "browser_info.m"
#line 150 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 150 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 150 "browser_info.m"
              case (MR_Integer) 0:
#line 4995 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
              case (MR_Integer) 1:
#line 150 "browser_info.m"
                {
#line 150 "browser_info.m"
                  MR_Integer mdb__browser_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 150 "browser_info.m"
                  {
#line 150 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_64_64, mdb__browser_info__V_17_17);
#line 150 "browser_info.m"
                    return;
                  }
#line 150 "browser_info.m"
                }
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
              case (MR_Integer) 2:
#line 5019 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
              case (MR_Integer) 3:
#line 150 "browser_info.m"
#line 150 "browser_info.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 150 "browser_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 150 "browser_info.m"
                  case (MR_Integer) 0:
#line 5032 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 1:
#line 5038 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                }
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
            }
#line 150 "browser_info.m"
          }
#line 150 "browser_info.m"
          break;
#line 150 "browser_info.m"
        case (MR_Integer) 2:
#line 150 "browser_info.m"
          {
#line 150 "browser_info.m"
            MR_Integer mdb__browser_info__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "browser_info.m"
#line 150 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 150 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 150 "browser_info.m"
              case (MR_Integer) 0:
#line 5066 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
              case (MR_Integer) 1:
#line 5072 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
              case (MR_Integer) 2:
#line 150 "browser_info.m"
                {
#line 150 "browser_info.m"
                  MR_Integer mdb__browser_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 150 "browser_info.m"
                  {
#line 150 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_65_65, mdb__browser_info__V_29_29);
#line 150 "browser_info.m"
                    return;
                  }
#line 150 "browser_info.m"
                }
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
              case (MR_Integer) 3:
#line 150 "browser_info.m"
#line 150 "browser_info.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 150 "browser_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 150 "browser_info.m"
                  case (MR_Integer) 0:
#line 5103 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 1:
#line 5109 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                }
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
            }
#line 150 "browser_info.m"
          }
#line 150 "browser_info.m"
          break;
#line 150 "browser_info.m"
        case (MR_Integer) 3:
#line 150 "browser_info.m"
#line 150 "browser_info.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) {
#line 150 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 150 "browser_info.m"
            case (MR_Integer) 0:
#line 150 "browser_info.m"
              {
#line 150 "browser_info.m"
                MR_Integer mdb__browser_info__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));

#line 150 "browser_info.m"
#line 150 "browser_info.m"
                switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 150 "browser_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 150 "browser_info.m"
                  case (MR_Integer) 0:
#line 5144 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 1:
#line 5150 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 2:
#line 5156 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 3:
#line 150 "browser_info.m"
#line 150 "browser_info.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 150 "browser_info.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 150 "browser_info.m"
                      case (MR_Integer) 0:
#line 150 "browser_info.m"
                        {
#line 150 "browser_info.m"
                          MR_Integer mdb__browser_info__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));

#line 150 "browser_info.m"
                          {
#line 150 "browser_info.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_63_63, mdb__browser_info__V_41_41);
#line 150 "browser_info.m"
                            return;
                          }
#line 150 "browser_info.m"
                        }
#line 150 "browser_info.m"
                        break;
#line 150 "browser_info.m"
                      case (MR_Integer) 1:
#line 5187 "mdb.browser_info.c"
                        *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                        break;
#line 150 "browser_info.m"
                    }
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                }
#line 150 "browser_info.m"
              }
#line 150 "browser_info.m"
              break;
#line 150 "browser_info.m"
            case (MR_Integer) 1:
#line 150 "browser_info.m"
              {
#line 150 "browser_info.m"
                MR_Word mdb__browser_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));

#line 150 "browser_info.m"
#line 150 "browser_info.m"
                switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 150 "browser_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 150 "browser_info.m"
                  case (MR_Integer) 0:
#line 5215 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 1:
#line 5221 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 2:
#line 5227 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 3:
#line 150 "browser_info.m"
#line 150 "browser_info.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) {
#line 150 "browser_info.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 150 "browser_info.m"
                      case (MR_Integer) 0:
#line 5240 "mdb.browser_info.c"
                        *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                        break;
#line 150 "browser_info.m"
                      case (MR_Integer) 1:
#line 150 "browser_info.m"
                        {
#line 150 "browser_info.m"
                          MR_Word mdb__browser_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 150 "browser_info.m"
                          MR_Integer mdb__browser_info__V_66_66 = (MR_Integer) mdb__browser_info__V_62_62;
#line 150 "browser_info.m"
                          MR_Integer mdb__browser_info__V_67_67 = (MR_Integer) mdb__browser_info__V_53_53;

#line 150 "browser_info.m"
                          {
#line 150 "browser_info.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_66_66, mdb__browser_info__V_67_67);
#line 150 "browser_info.m"
                            return;
                          }
#line 150 "browser_info.m"
                        }
#line 150 "browser_info.m"
                        break;
#line 150 "browser_info.m"
                    }
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                }
#line 150 "browser_info.m"
              }
#line 150 "browser_info.m"
              break;
#line 150 "browser_info.m"
          }
#line 150 "browser_info.m"
          break;
#line 150 "browser_info.m"
      }
#line 150 "browser_info.m"
  }
#line 150 "browser_info.m"
}

#line 150 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____setting_0_0(
#line 150 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 150 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 150 "browser_info.m"
{
#line 150 "browser_info.m"
  {
#line 150 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 150 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_13 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 150 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_14 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 150 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_13 == mdb__browser_info__CastY_14);
#line 150 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 150 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 150 "browser_info.m"
    else
#line 150 "browser_info.m"
#line 150 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) {
#line 150 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 150 "browser_info.m"
        case (MR_Integer) 0:
#line 150 "browser_info.m"
          {
#line 150 "browser_info.m"
            MR_Integer mdb__browser_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "browser_info.m"
            MR_Integer mdb__browser_info__V_4_4;

#line 150 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 150 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 150 "browser_info.m"
              {
#line 150 "browser_info.m"
                mdb__browser_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 5335 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_3_3 == mdb__browser_info__V_4_4);
#line 150 "browser_info.m"
              }
#line 150 "browser_info.m"
          }
#line 150 "browser_info.m"
          break;
#line 150 "browser_info.m"
        case (MR_Integer) 1:
#line 150 "browser_info.m"
          {
#line 150 "browser_info.m"
            MR_Integer mdb__browser_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "browser_info.m"
            MR_Integer mdb__browser_info__V_6_6;

#line 150 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 150 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 150 "browser_info.m"
              {
#line 150 "browser_info.m"
                mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 5360 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_6_6);
#line 150 "browser_info.m"
              }
#line 150 "browser_info.m"
          }
#line 150 "browser_info.m"
          break;
#line 150 "browser_info.m"
        case (MR_Integer) 2:
#line 150 "browser_info.m"
          {
#line 150 "browser_info.m"
            MR_Integer mdb__browser_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "browser_info.m"
            MR_Integer mdb__browser_info__V_8_8;

#line 150 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 150 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 150 "browser_info.m"
              {
#line 150 "browser_info.m"
                mdb__browser_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 5385 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_7_7 == mdb__browser_info__V_8_8);
#line 150 "browser_info.m"
              }
#line 150 "browser_info.m"
          }
#line 150 "browser_info.m"
          break;
#line 150 "browser_info.m"
        case (MR_Integer) 3:
#line 150 "browser_info.m"
#line 150 "browser_info.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)))) {
#line 150 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 150 "browser_info.m"
            case (MR_Integer) 0:
#line 150 "browser_info.m"
              {
#line 150 "browser_info.m"
                MR_Integer mdb__browser_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "browser_info.m"
                MR_Integer mdb__browser_info__V_10_10;

#line 150 "browser_info.m"
                mdb__browser_info__succeeded = ((((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 150 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 150 "browser_info.m"
                  {
#line 150 "browser_info.m"
                    mdb__browser_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 5417 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_9_9 == mdb__browser_info__V_10_10);
#line 150 "browser_info.m"
                  }
#line 150 "browser_info.m"
              }
#line 150 "browser_info.m"
              break;
#line 150 "browser_info.m"
            case (MR_Integer) 1:
#line 150 "browser_info.m"
              {
#line 150 "browser_info.m"
                MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "browser_info.m"
                MR_Word mdb__browser_info__V_12_12;

#line 150 "browser_info.m"
                mdb__browser_info__succeeded = ((((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 150 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 150 "browser_info.m"
                  {
#line 150 "browser_info.m"
                    mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 5442 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_11_11 == mdb__browser_info__V_12_12);
#line 150 "browser_info.m"
                  }
#line 150 "browser_info.m"
              }
#line 150 "browser_info.m"
              break;
#line 150 "browser_info.m"
          }
#line 150 "browser_info.m"
          break;
#line 150 "browser_info.m"
      }
#line 150 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 150 "browser_info.m"
  }
#line 150 "browser_info.m"
}

#line 134 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____portray_format_0_0(
#line 134 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 134 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 134 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 134 "browser_info.m"
{
#line 134 "browser_info.m"
  {
#line 134 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 134 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 134 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 134 "browser_info.m"
    {
#line 134 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
#line 134 "browser_info.m"
      return;
    }
#line 134 "browser_info.m"
  }
#line 134 "browser_info.m"
}

#line 134 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____portray_format_0_0(
#line 134 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 134 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 134 "browser_info.m"
{
#line 5504 "mdb.browser_info.c"
  {
#line 5506 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 5509 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 5511 "mdb.browser_info.c"
  }
#line 134 "browser_info.m"
}

#line 254 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____param_cmd_0_0(
#line 254 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 254 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 254 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 254 "browser_info.m"
{
#line 254 "browser_info.m"
  {
#line 254 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 254 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_46 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 254 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_47 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 254 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_46 == mdb__browser_info__CastY_47);
#line 254 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 5540 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 254 "browser_info.m"
    else
#line 254 "browser_info.m"
#line 254 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) {
#line 254 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 254 "browser_info.m"
        case (MR_Integer) 0:
#line 254 "browser_info.m"
#line 254 "browser_info.m"
          switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 254 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 254 "browser_info.m"
            case (MR_Integer) 0:
#line 254 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 254 "browser_info.m"
              break;
#line 254 "browser_info.m"
            case (MR_Integer) 1:
#line 5564 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
              break;
#line 254 "browser_info.m"
            case (MR_Integer) 2:
#line 5570 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
              break;
#line 254 "browser_info.m"
            case (MR_Integer) 3:
#line 5576 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
              break;
#line 254 "browser_info.m"
          }
#line 254 "browser_info.m"
          break;
#line 254 "browser_info.m"
        case (MR_Integer) 1:
#line 254 "browser_info.m"
          {
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 254 "browser_info.m"
#line 254 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 254 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 254 "browser_info.m"
              case (MR_Integer) 0:
#line 5600 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 1:
#line 254 "browser_info.m"
                {
#line 254 "browser_info.m"
                  MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));
#line 254 "browser_info.m"
                  MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 254 "browser_info.m"
                  MR_Word mdb__browser_info__V_8_8;

#line 254 "browser_info.m"
                  {
#line 254 "browser_info.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[5], &mdb__browser_info__V_8_8, ((MR_Box) (mdb__browser_info__V_54_54)), ((MR_Box) (mdb__browser_info__V_6_6)));
                  }
#line 5620 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = (mdb__browser_info__V_8_8 == (MR_Integer) 0);
#line 254 "browser_info.m"
                  mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 254 "browser_info.m"
                  if (mdb__browser_info__succeeded)
#line 254 "browser_info.m"
                    *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_8_8;
#line 254 "browser_info.m"
                  else
#line 254 "browser_info.m"
                    {
#line 254 "browser_info.m"
                      mdb__browser_info____Compare____setting_0_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_53_53, mdb__browser_info__V_7_7);
#line 254 "browser_info.m"
                      return;
                    }
#line 254 "browser_info.m"
                }
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 2:
#line 5643 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 3:
#line 5649 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
            }
#line 254 "browser_info.m"
          }
#line 254 "browser_info.m"
          break;
#line 254 "browser_info.m"
        case (MR_Integer) 2:
#line 254 "browser_info.m"
          {
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 254 "browser_info.m"
#line 254 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 254 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 254 "browser_info.m"
              case (MR_Integer) 0:
#line 5675 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 1:
#line 5681 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 2:
#line 254 "browser_info.m"
                {
#line 254 "browser_info.m"
                  MR_Word mdb__browser_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));
#line 254 "browser_info.m"
                  MR_Word mdb__browser_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 254 "browser_info.m"
                  MR_Word mdb__browser_info__V_26_26;

#line 254 "browser_info.m"
                  {
#line 254 "browser_info.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[5], &mdb__browser_info__V_26_26, ((MR_Box) (mdb__browser_info__V_56_56)), ((MR_Box) (mdb__browser_info__V_24_24)));
                  }
#line 5701 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = (mdb__browser_info__V_26_26 == (MR_Integer) 0);
#line 254 "browser_info.m"
                  mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 254 "browser_info.m"
                  if (mdb__browser_info__succeeded)
#line 254 "browser_info.m"
                    *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_26_26;
#line 254 "browser_info.m"
                  else
#line 254 "browser_info.m"
                    {
#line 254 "browser_info.m"
                      mdb__browser_info____Compare____setting_0_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_55_55, mdb__browser_info__V_25_25);
#line 254 "browser_info.m"
                      return;
                    }
#line 254 "browser_info.m"
                }
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 3:
#line 5724 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
            }
#line 254 "browser_info.m"
          }
#line 254 "browser_info.m"
          break;
#line 254 "browser_info.m"
        case (MR_Integer) 3:
#line 254 "browser_info.m"
          {
#line 254 "browser_info.m"
            MR_Integer mdb__browser_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 254 "browser_info.m"
#line 254 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 254 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 254 "browser_info.m"
              case (MR_Integer) 0:
#line 5748 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 1:
#line 5754 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 2:
#line 5760 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 3:
#line 254 "browser_info.m"
                {
#line 254 "browser_info.m"
                  MR_Integer mdb__browser_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 254 "browser_info.m"
                  {
#line 254 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_57_57, mdb__browser_info__V_39_39);
#line 254 "browser_info.m"
                    return;
                  }
#line 254 "browser_info.m"
                }
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
            }
#line 254 "browser_info.m"
          }
#line 254 "browser_info.m"
          break;
#line 254 "browser_info.m"
      }
#line 254 "browser_info.m"
  }
#line 254 "browser_info.m"
}

#line 254 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____param_cmd_0_0(
#line 254 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 254 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 254 "browser_info.m"
{
#line 254 "browser_info.m"
  {
#line 254 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 254 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_15 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 254 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_16 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 254 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_15 == mdb__browser_info__CastY_16);
#line 254 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 254 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 254 "browser_info.m"
    else
#line 254 "browser_info.m"
#line 254 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) {
#line 254 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 254 "browser_info.m"
        case (MR_Integer) 0:
#line 254 "browser_info.m"
          {
#line 254 "browser_info.m"
            MR_Integer mdb__browser_info__CastX_13 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 254 "browser_info.m"
            MR_Integer mdb__browser_info__CastY_14 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 254 "browser_info.m"
            mdb__browser_info__succeeded = (mdb__browser_info__CastY_14 == mdb__browser_info__CastX_13);
#line 254 "browser_info.m"
          }
#line 254 "browser_info.m"
          break;
#line 254 "browser_info.m"
        case (MR_Integer) 1:
#line 254 "browser_info.m"
          {
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__TypeInfo_17_17;
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__V_5_5;
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__V_6_6;

#line 254 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 254 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 254 "browser_info.m"
              {
#line 254 "browser_info.m"
                mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 254 "browser_info.m"
                mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 5866 "mdb.browser_info.c"
                mdb__browser_info__TypeInfo_17_17 = (MR_Word) &mdb__browser_info_scalar_common_2[5];
#line 5868 "mdb.browser_info.c"
                {
#line 5870 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_17_17, ((MR_Box) (mdb__browser_info__V_3_3)), ((MR_Box) (mdb__browser_info__V_5_5)));
                }
#line 254 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 5875 "mdb.browser_info.c"
                  {
#line 5877 "mdb.browser_info.c"
                    return mdb__browser_info__succeeded = mdb__browser_info____Unify____setting_0_0(mdb__browser_info__V_4_4, mdb__browser_info__V_6_6);
                  }
#line 254 "browser_info.m"
              }
#line 254 "browser_info.m"
          }
#line 254 "browser_info.m"
          break;
#line 254 "browser_info.m"
        case (MR_Integer) 2:
#line 254 "browser_info.m"
          {
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__TypeInfo_18_18;
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__V_9_9;
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__V_10_10;

#line 254 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 254 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 254 "browser_info.m"
              {
#line 254 "browser_info.m"
                mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 254 "browser_info.m"
                mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 5911 "mdb.browser_info.c"
                mdb__browser_info__TypeInfo_18_18 = (MR_Word) &mdb__browser_info_scalar_common_2[5];
#line 5913 "mdb.browser_info.c"
                {
#line 5915 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_18_18, ((MR_Box) (mdb__browser_info__V_7_7)), ((MR_Box) (mdb__browser_info__V_9_9)));
                }
#line 254 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 5920 "mdb.browser_info.c"
                  {
#line 5922 "mdb.browser_info.c"
                    return mdb__browser_info__succeeded = mdb__browser_info____Unify____setting_0_0(mdb__browser_info__V_8_8, mdb__browser_info__V_10_10);
                  }
#line 254 "browser_info.m"
              }
#line 254 "browser_info.m"
          }
#line 254 "browser_info.m"
          break;
#line 254 "browser_info.m"
        case (MR_Integer) 3:
#line 254 "browser_info.m"
          {
#line 254 "browser_info.m"
            MR_Integer mdb__browser_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "browser_info.m"
            MR_Integer mdb__browser_info__V_12_12;

#line 254 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 254 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 254 "browser_info.m"
              {
#line 254 "browser_info.m"
                mdb__browser_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 5948 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_11_11 == mdb__browser_info__V_12_12);
#line 254 "browser_info.m"
              }
#line 254 "browser_info.m"
          }
#line 254 "browser_info.m"
          break;
#line 254 "browser_info.m"
      }
#line 254 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 254 "browser_info.m"
  }
#line 254 "browser_info.m"
}

#line 69 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____maybe_track_subterm_1_0(
#line 69 "browser_info.m"
  MR_Word mdb__browser_info__TypeInfo_for_P_20,
#line 69 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 69 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 69 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 69 "browser_info.m"
{
#line 69 "browser_info.m"
  {
#line 69 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 69 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_18 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 69 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_19 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 69 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_18 == mdb__browser_info__CastY_19);
#line 69 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 5991 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 69 "browser_info.m"
    else
#line 69 "browser_info.m"
    if ((mdb__browser_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 69 "browser_info.m"
      if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 69 "browser_info.m"
        *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 69 "browser_info.m"
      else
#line 6003 "mdb.browser_info.c"
        *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "browser_info.m"
    else
#line 69 "browser_info.m"
      {
#line 69 "browser_info.m"
        MR_Box mdb__browser_info__V_23_23 = (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1));
#line 69 "browser_info.m"
        MR_Word mdb__browser_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 69 "browser_info.m"
        MR_Word mdb__browser_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 69 "browser_info.m"
        if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6018 "mdb.browser_info.c"
          *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 69 "browser_info.m"
        else
#line 69 "browser_info.m"
          {
#line 69 "browser_info.m"
            MR_Word mdb__browser_info__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 69 "browser_info.m"
            MR_Word mdb__browser_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 69 "browser_info.m"
            MR_Box mdb__browser_info__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1));
#line 69 "browser_info.m"
            MR_Word mdb__browser_info__V_16_16;
#line 69 "browser_info.m"
            MR_Integer mdb__browser_info__V_26_26 = (MR_Integer) mdb__browser_info__V_25_25;
#line 69 "browser_info.m"
            MR_Integer mdb__browser_info__V_27_27 = (MR_Integer) mdb__browser_info__V_13_13;

#line 69 "browser_info.m"
            {
#line 69 "browser_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_16_16, mdb__browser_info__V_26_26, mdb__browser_info__V_27_27);
            }
#line 6042 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_16_16 == (MR_Integer) 0);
#line 69 "browser_info.m"
            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 69 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 69 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_16_16;
#line 69 "browser_info.m"
            else
#line 69 "browser_info.m"
              {
#line 69 "browser_info.m"
                MR_Word mdb__browser_info__V_17_17;
#line 69 "browser_info.m"
                MR_Integer mdb__browser_info__V_28_28 = (MR_Integer) mdb__browser_info__V_24_24;
#line 69 "browser_info.m"
                MR_Integer mdb__browser_info__V_29_29 = (MR_Integer) mdb__browser_info__V_14_14;

#line 69 "browser_info.m"
                {
#line 69 "browser_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_17_17, mdb__browser_info__V_28_28, mdb__browser_info__V_29_29);
                }
#line 6066 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_17_17 == (MR_Integer) 0);
#line 69 "browser_info.m"
                mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 69 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 69 "browser_info.m"
                  *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_17_17;
#line 69 "browser_info.m"
                else
#line 69 "browser_info.m"
                  {
#line 69 "browser_info.m"
                    mercury__builtin__compare_3_p_0(mdb__browser_info__TypeInfo_for_P_20, mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_23_23, mdb__browser_info__V_15_15);
#line 69 "browser_info.m"
                    return;
                  }
#line 69 "browser_info.m"
              }
#line 69 "browser_info.m"
          }
#line 69 "browser_info.m"
      }
#line 69 "browser_info.m"
  }
#line 69 "browser_info.m"
}

#line 69 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____maybe_track_subterm_1_0(
#line 69 "browser_info.m"
  MR_Word mdb__browser_info__TypeInfo_for_P_13,
#line 69 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 69 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 69 "browser_info.m"
{
#line 69 "browser_info.m"
  {
#line 69 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 69 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_11 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 69 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_12 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 69 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_11 == mdb__browser_info__CastY_12);
#line 69 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 69 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 69 "browser_info.m"
    else
#line 69 "browser_info.m"
    if ((mdb__browser_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 69 "browser_info.m"
      {
#line 69 "browser_info.m"
        MR_Integer mdb__browser_info__CastX_3 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 69 "browser_info.m"
        MR_Integer mdb__browser_info__CastY_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 69 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__CastY_4 == mdb__browser_info__CastX_3);
#line 69 "browser_info.m"
      }
#line 69 "browser_info.m"
    else
#line 69 "browser_info.m"
      {
#line 69 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 69 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 69 "browser_info.m"
        MR_Box mdb__browser_info__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1));
#line 69 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8;
#line 69 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9;
#line 69 "browser_info.m"
        MR_Box mdb__browser_info__V_10_10;

#line 69 "browser_info.m"
        mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 69 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 69 "browser_info.m"
          {
#line 69 "browser_info.m"
            mdb__browser_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 69 "browser_info.m"
            mdb__browser_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 69 "browser_info.m"
            mdb__browser_info__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1));
#line 6164 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_8_8);
#line 69 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 69 "browser_info.m"
              {
#line 6170 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_6_6 == mdb__browser_info__V_9_9);
#line 69 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 6174 "mdb.browser_info.c"
                  {
#line 6176 "mdb.browser_info.c"
                    return mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_for_P_13, mdb__browser_info__V_7_7, mdb__browser_info__V_10_10);
                  }
#line 69 "browser_info.m"
              }
#line 69 "browser_info.m"
          }
#line 69 "browser_info.m"
      }
#line 69 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 69 "browser_info.m"
  }
#line 69 "browser_info.m"
}

#line 73 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____how_track_subterm_0_0(
#line 73 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 73 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 73 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 73 "browser_info.m"
{
#line 73 "browser_info.m"
  {
#line 73 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 73 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 73 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 73 "browser_info.m"
    {
#line 73 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
#line 73 "browser_info.m"
      return;
    }
#line 73 "browser_info.m"
  }
#line 73 "browser_info.m"
}

#line 73 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____how_track_subterm_0_0(
#line 73 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 73 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 73 "browser_info.m"
{
#line 6233 "mdb.browser_info.c"
  {
#line 6235 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 6238 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 6240 "mdb.browser_info.c"
  }
#line 73 "browser_info.m"
}

#line 142 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____format_params_0_0(
#line 142 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 142 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 142 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 142 "browser_info.m"
{
#line 142 "browser_info.m"
  {
#line 142 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 142 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_15 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 142 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_16 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 142 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_15 == mdb__browser_info__CastY_16);
#line 142 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 6269 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 142 "browser_info.m"
    else
#line 142 "browser_info.m"
      {
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 2)));
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 3)));
#line 142 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12;

#line 142 "browser_info.m"
        {
#line 142 "browser_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_12_12, mdb__browser_info__V_4_4, mdb__browser_info__V_8_8);
        }
#line 6299 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_12_12 == (MR_Integer) 0);
#line 142 "browser_info.m"
        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 142 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 142 "browser_info.m"
          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_12_12;
#line 142 "browser_info.m"
        else
#line 142 "browser_info.m"
          {
#line 142 "browser_info.m"
            MR_Word mdb__browser_info__V_13_13;

#line 142 "browser_info.m"
            {
#line 142 "browser_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_13_13, mdb__browser_info__V_5_5, mdb__browser_info__V_9_9);
            }
#line 6319 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_13_13 == (MR_Integer) 0);
#line 142 "browser_info.m"
            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 142 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 142 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_13_13;
#line 142 "browser_info.m"
            else
#line 142 "browser_info.m"
              {
#line 142 "browser_info.m"
                MR_Word mdb__browser_info__V_14_14;

#line 142 "browser_info.m"
                {
#line 142 "browser_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_14_14, mdb__browser_info__V_6_6, mdb__browser_info__V_10_10);
                }
#line 6339 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_14_14 == (MR_Integer) 0);
#line 142 "browser_info.m"
                mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 142 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 142 "browser_info.m"
                  *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_14_14;
#line 142 "browser_info.m"
                else
#line 142 "browser_info.m"
                  {
#line 142 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_7_7, mdb__browser_info__V_11_11);
#line 142 "browser_info.m"
                    return;
                  }
#line 142 "browser_info.m"
              }
#line 142 "browser_info.m"
          }
#line 142 "browser_info.m"
      }
#line 142 "browser_info.m"
  }
#line 142 "browser_info.m"
}

#line 142 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____format_params_0_0(
#line 142 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 142 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 142 "browser_info.m"
{
#line 142 "browser_info.m"
  {
#line 142 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 142 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_11 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 142 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_12 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 142 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_11 == mdb__browser_info__CastY_12);
#line 142 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 142 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 142 "browser_info.m"
    else
#line 142 "browser_info.m"
      {
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 142 "browser_info.m"
        MR_Integer mdb__browser_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));

#line 6412 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_3_3 == mdb__browser_info__V_7_7);
#line 142 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 142 "browser_info.m"
          {
#line 6418 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_4_4 == mdb__browser_info__V_8_8);
#line 142 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 142 "browser_info.m"
              {
#line 6424 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_9_9);
#line 142 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 6428 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = (mdb__browser_info__V_6_6 == mdb__browser_info__V_10_10);
#line 142 "browser_info.m"
              }
#line 142 "browser_info.m"
          }
#line 142 "browser_info.m"
      }
#line 142 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 142 "browser_info.m"
  }
#line 142 "browser_info.m"
}

#line 108 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____dir_0_0(
#line 108 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 108 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 108 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 108 "browser_info.m"
{
#line 108 "browser_info.m"
  {
#line 108 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 108 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_16 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 108 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_17 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 108 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_16 == mdb__browser_info__CastY_17);
#line 108 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 6467 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 108 "browser_info.m"
    else
#line 108 "browser_info.m"
#line 108 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) {
#line 108 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 108 "browser_info.m"
        case (MR_Integer) 0:
#line 108 "browser_info.m"
#line 108 "browser_info.m"
          switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 108 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 108 "browser_info.m"
            case (MR_Integer) 0:
#line 108 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 108 "browser_info.m"
              break;
#line 108 "browser_info.m"
            case (MR_Integer) 1:
#line 6491 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 108 "browser_info.m"
              break;
#line 108 "browser_info.m"
            case (MR_Integer) 2:
#line 6497 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 108 "browser_info.m"
              break;
#line 108 "browser_info.m"
          }
#line 108 "browser_info.m"
          break;
#line 108 "browser_info.m"
        case (MR_Integer) 1:
#line 108 "browser_info.m"
          {
#line 108 "browser_info.m"
            MR_Integer mdb__browser_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 108 "browser_info.m"
#line 108 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 108 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 108 "browser_info.m"
              case (MR_Integer) 0:
#line 6519 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 108 "browser_info.m"
                break;
#line 108 "browser_info.m"
              case (MR_Integer) 1:
#line 108 "browser_info.m"
                {
#line 108 "browser_info.m"
                  MR_Integer mdb__browser_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 108 "browser_info.m"
                  {
#line 108 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_21_21, mdb__browser_info__V_8_8);
#line 108 "browser_info.m"
                    return;
                  }
#line 108 "browser_info.m"
                }
#line 108 "browser_info.m"
                break;
#line 108 "browser_info.m"
              case (MR_Integer) 2:
#line 6543 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 108 "browser_info.m"
                break;
#line 108 "browser_info.m"
            }
#line 108 "browser_info.m"
          }
#line 108 "browser_info.m"
          break;
#line 108 "browser_info.m"
        case (MR_Integer) 2:
#line 108 "browser_info.m"
          {
#line 108 "browser_info.m"
            MR_String mdb__browser_info__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 108 "browser_info.m"
#line 108 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 108 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 108 "browser_info.m"
              case (MR_Integer) 0:
#line 6567 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 108 "browser_info.m"
                break;
#line 108 "browser_info.m"
              case (MR_Integer) 1:
#line 6573 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 108 "browser_info.m"
                break;
#line 108 "browser_info.m"
              case (MR_Integer) 2:
#line 108 "browser_info.m"
                {
#line 108 "browser_info.m"
                  MR_String mdb__browser_info__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 108 "browser_info.m"
                  {
#line 108 "browser_info.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_20_20, mdb__browser_info__V_15_15);
#line 108 "browser_info.m"
                    return;
                  }
#line 108 "browser_info.m"
                }
#line 108 "browser_info.m"
                break;
#line 108 "browser_info.m"
            }
#line 108 "browser_info.m"
          }
#line 108 "browser_info.m"
          break;
#line 108 "browser_info.m"
      }
#line 108 "browser_info.m"
  }
#line 108 "browser_info.m"
}

#line 108 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____dir_0_0(
#line 108 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 108 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 108 "browser_info.m"
{
#line 108 "browser_info.m"
  {
#line 108 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 108 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_9 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 108 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_10 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 108 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_9 == mdb__browser_info__CastY_10);
#line 108 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 108 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 108 "browser_info.m"
    else
#line 108 "browser_info.m"
#line 108 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) {
#line 108 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 108 "browser_info.m"
        case (MR_Integer) 0:
#line 108 "browser_info.m"
          {
#line 108 "browser_info.m"
            MR_Integer mdb__browser_info__CastX_3 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 108 "browser_info.m"
            MR_Integer mdb__browser_info__CastY_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 108 "browser_info.m"
            mdb__browser_info__succeeded = (mdb__browser_info__CastY_4 == mdb__browser_info__CastX_3);
#line 108 "browser_info.m"
          }
#line 108 "browser_info.m"
          break;
#line 108 "browser_info.m"
        case (MR_Integer) 1:
#line 108 "browser_info.m"
          {
#line 108 "browser_info.m"
            MR_Integer mdb__browser_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "browser_info.m"
            MR_Integer mdb__browser_info__V_6_6;

#line 108 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 108 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 108 "browser_info.m"
              {
#line 108 "browser_info.m"
                mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 6671 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_6_6);
#line 108 "browser_info.m"
              }
#line 108 "browser_info.m"
          }
#line 108 "browser_info.m"
          break;
#line 108 "browser_info.m"
        case (MR_Integer) 2:
#line 108 "browser_info.m"
          {
#line 108 "browser_info.m"
            MR_String mdb__browser_info__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "browser_info.m"
            MR_String mdb__browser_info__V_8_8;

#line 108 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 108 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 108 "browser_info.m"
              {
#line 108 "browser_info.m"
                mdb__browser_info__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 6696 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (strcmp(mdb__browser_info__V_7_7, mdb__browser_info__V_8_8) == 0);
#line 108 "browser_info.m"
              }
#line 108 "browser_info.m"
          }
#line 108 "browser_info.m"
          break;
#line 108 "browser_info.m"
      }
#line 108 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 108 "browser_info.m"
  }
#line 108 "browser_info.m"
}

#line 269 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____debugger_0_0(
#line 269 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 269 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 269 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 269 "browser_info.m"
{
#line 269 "browser_info.m"
  {
#line 269 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 269 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 269 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 269 "browser_info.m"
    {
#line 269 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
#line 269 "browser_info.m"
      return;
    }
#line 269 "browser_info.m"
  }
#line 269 "browser_info.m"
}

#line 269 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____debugger_0_0(
#line 269 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 269 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 269 "browser_info.m"
{
#line 6754 "mdb.browser_info.c"
  {
#line 6756 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 6759 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 6761 "mdb.browser_info.c"
  }
#line 269 "browser_info.m"
}

#line 571 "browser_info.m"
static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0(
#line 571 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 571 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 571 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 571 "browser_info.m"
{
#line 571 "browser_info.m"
  {
#line 571 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 571 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_18 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 571 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_19 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 571 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_18 == mdb__browser_info__CastY_19);
#line 571 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 6790 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 571 "browser_info.m"
    else
#line 571 "browser_info.m"
      {
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 2)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 3)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 4)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14;
#line 571 "browser_info.m"
        MR_Integer mdb__browser_info__V_25_25 = (MR_Integer) mdb__browser_info__V_4_4;
#line 571 "browser_info.m"
        MR_Integer mdb__browser_info__V_26_26 = (MR_Integer) mdb__browser_info__V_9_9;

#line 571 "browser_info.m"
        {
#line 571 "browser_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_14_14, mdb__browser_info__V_25_25, mdb__browser_info__V_26_26);
        }
#line 6828 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_14_14 == (MR_Integer) 0);
#line 571 "browser_info.m"
        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 571 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_14_14;
#line 571 "browser_info.m"
        else
#line 571 "browser_info.m"
          {
#line 571 "browser_info.m"
            MR_Word mdb__browser_info__V_15_15;

#line 571 "browser_info.m"
            {
#line 571 "browser_info.m"
              mdb__browser_info____Compare____format_params_0_0(&mdb__browser_info__V_15_15, mdb__browser_info__V_5_5, mdb__browser_info__V_10_10);
            }
#line 6848 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_15_15 == (MR_Integer) 0);
#line 571 "browser_info.m"
            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 571 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_15_15;
#line 571 "browser_info.m"
            else
#line 571 "browser_info.m"
              {
#line 571 "browser_info.m"
                MR_Word mdb__browser_info__V_16_16;

#line 571 "browser_info.m"
                {
#line 571 "browser_info.m"
                  mdb__browser_info____Compare____format_params_0_0(&mdb__browser_info__V_16_16, mdb__browser_info__V_6_6, mdb__browser_info__V_11_11);
                }
#line 6868 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_16_16 == (MR_Integer) 0);
#line 571 "browser_info.m"
                mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 571 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                  *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_16_16;
#line 571 "browser_info.m"
                else
#line 571 "browser_info.m"
                  {
#line 571 "browser_info.m"
                    MR_Word mdb__browser_info__V_17_17;

#line 571 "browser_info.m"
                    {
#line 571 "browser_info.m"
                      mdb__browser_info____Compare____format_params_0_0(&mdb__browser_info__V_17_17, mdb__browser_info__V_7_7, mdb__browser_info__V_12_12);
                    }
#line 6888 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_17_17 == (MR_Integer) 0);
#line 571 "browser_info.m"
                    mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 571 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_17_17;
#line 571 "browser_info.m"
                    else
#line 571 "browser_info.m"
                      {
#line 571 "browser_info.m"
                        mdb__browser_info____Compare____format_params_0_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_8_8, mdb__browser_info__V_13_13);
#line 571 "browser_info.m"
                        return;
                      }
#line 571 "browser_info.m"
                  }
#line 571 "browser_info.m"
              }
#line 571 "browser_info.m"
          }
#line 571 "browser_info.m"
      }
#line 571 "browser_info.m"
  }
#line 571 "browser_info.m"
}

#line 571 "browser_info.m"
static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0(
#line 571 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 571 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 571 "browser_info.m"
{
#line 571 "browser_info.m"
  {
#line 571 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 571 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_13 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 571 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_14 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 571 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_13 == mdb__browser_info__CastY_14);
#line 571 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 571 "browser_info.m"
    else
#line 571 "browser_info.m"
      {
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 571 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));

#line 6967 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_3_3 == mdb__browser_info__V_8_8);
#line 571 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
          {
#line 6973 "mdb.browser_info.c"
            {
#line 6975 "mdb.browser_info.c"
              mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_4_4, mdb__browser_info__V_9_9);
            }
#line 571 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
              {
#line 6982 "mdb.browser_info.c"
                {
#line 6984 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_5_5, mdb__browser_info__V_10_10);
                }
#line 571 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                  {
#line 6991 "mdb.browser_info.c"
                    {
#line 6993 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_6_6, mdb__browser_info__V_11_11);
                    }
#line 571 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 6998 "mdb.browser_info.c"
                      {
#line 7000 "mdb.browser_info.c"
                        return mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_7_7, mdb__browser_info__V_12_12);
                      }
#line 571 "browser_info.m"
                  }
#line 571 "browser_info.m"
              }
#line 571 "browser_info.m"
          }
#line 571 "browser_info.m"
      }
#line 571 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 571 "browser_info.m"
  }
#line 571 "browser_info.m"
}

#line 89 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browser_term_mode_0_0(
#line 89 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 89 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 89 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 89 "browser_info.m"
{
#line 89 "browser_info.m"
  {
#line 89 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 89 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 89 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 89 "browser_info.m"
    {
#line 89 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
#line 89 "browser_info.m"
      return;
    }
#line 89 "browser_info.m"
  }
#line 89 "browser_info.m"
}

#line 89 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browser_term_mode_0_0(
#line 89 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 89 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 89 "browser_info.m"
{
#line 7059 "mdb.browser_info.c"
  {
#line 7061 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 7064 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 7066 "mdb.browser_info.c"
  }
#line 89 "browser_info.m"
}

#line 555 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browser_persistent_state_0_0(
#line 555 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 555 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 555 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 555 "browser_info.m"
{
#line 555 "browser_info.m"
  {
#line 555 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 555 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_21 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 555 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_22 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 555 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_21 == mdb__browser_info__CastY_22);
#line 555 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 7095 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 555 "browser_info.m"
    else
#line 555 "browser_info.m"
      {
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 555 "browser_info.m"
        MR_Integer mdb__browser_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 5)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 2)));
#line 555 "browser_info.m"
        MR_Integer mdb__browser_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 3)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 4)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 5)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_16_16;

#line 555 "browser_info.m"
        {
#line 555 "browser_info.m"
          mdb__browser_info____Compare____caller_params_0_0(&mdb__browser_info__V_16_16, mdb__browser_info__V_4_4, mdb__browser_info__V_10_10);
        }
#line 7133 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_16_16 == (MR_Integer) 0);
#line 555 "browser_info.m"
        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 555 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 555 "browser_info.m"
          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_16_16;
#line 555 "browser_info.m"
        else
#line 555 "browser_info.m"
          {
#line 555 "browser_info.m"
            MR_Word mdb__browser_info__V_17_17;

#line 555 "browser_info.m"
            {
#line 555 "browser_info.m"
              mdb__browser_info____Compare____caller_params_0_0(&mdb__browser_info__V_17_17, mdb__browser_info__V_5_5, mdb__browser_info__V_11_11);
            }
#line 7153 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_17_17 == (MR_Integer) 0);
#line 555 "browser_info.m"
            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 555 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 555 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_17_17;
#line 555 "browser_info.m"
            else
#line 555 "browser_info.m"
              {
#line 555 "browser_info.m"
                MR_Word mdb__browser_info__V_18_18;

#line 555 "browser_info.m"
                {
#line 555 "browser_info.m"
                  mdb__browser_info____Compare____caller_params_0_0(&mdb__browser_info__V_18_18, mdb__browser_info__V_6_6, mdb__browser_info__V_12_12);
                }
#line 7173 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_18_18 == (MR_Integer) 0);
#line 555 "browser_info.m"
                mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 555 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 555 "browser_info.m"
                  *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_18_18;
#line 555 "browser_info.m"
                else
#line 555 "browser_info.m"
                  {
#line 555 "browser_info.m"
                    MR_Word mdb__browser_info__V_19_19;

#line 555 "browser_info.m"
                    {
#line 555 "browser_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_19_19, mdb__browser_info__V_7_7, mdb__browser_info__V_13_13);
                    }
#line 7193 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_19_19 == (MR_Integer) 0);
#line 555 "browser_info.m"
                    mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 555 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 555 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_19_19;
#line 555 "browser_info.m"
                    else
#line 555 "browser_info.m"
                      {
#line 555 "browser_info.m"
                        MR_Word mdb__browser_info__V_20_20;

#line 555 "browser_info.m"
                        {
#line 555 "browser_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[4], &mdb__browser_info__V_20_20, ((MR_Box) (mdb__browser_info__V_8_8)), ((MR_Box) (mdb__browser_info__V_14_14)));
                        }
#line 7213 "mdb.browser_info.c"
                        mdb__browser_info__succeeded = (mdb__browser_info__V_20_20 == (MR_Integer) 0);
#line 555 "browser_info.m"
                        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 555 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 555 "browser_info.m"
                          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_20_20;
#line 555 "browser_info.m"
                        else
#line 555 "browser_info.m"
                          {
#line 555 "browser_info.m"
                            {
#line 555 "browser_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[4], mdb__browser_info__HeadVar__1_1, ((MR_Box) (mdb__browser_info__V_9_9)), ((MR_Box) (mdb__browser_info__V_15_15)));
#line 555 "browser_info.m"
                              return;
                            }
#line 555 "browser_info.m"
                          }
#line 555 "browser_info.m"
                      }
#line 555 "browser_info.m"
                  }
#line 555 "browser_info.m"
              }
#line 555 "browser_info.m"
          }
#line 555 "browser_info.m"
      }
#line 555 "browser_info.m"
  }
#line 555 "browser_info.m"
}

#line 555 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browser_persistent_state_0_0(
#line 555 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 555 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 555 "browser_info.m"
{
#line 555 "browser_info.m"
  {
#line 555 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 555 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_15 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 555 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_16 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 555 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_15 == mdb__browser_info__CastY_16);
#line 555 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 555 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 555 "browser_info.m"
    else
#line 555 "browser_info.m"
      {
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_17_17;
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_18_18;
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 555 "browser_info.m"
        MR_Integer mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 5)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 555 "browser_info.m"
        MR_Integer mdb__browser_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));
#line 555 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 5)));
#line 571 "browser_info.m"
        MR_Integer mdb__browser_info__CastX_29 = (MR_Integer) mdb__browser_info__V_3_3;
#line 571 "browser_info.m"
        MR_Integer mdb__browser_info__CastY_30 = (MR_Integer) mdb__browser_info__V_9_9;
#line 571 "browser_info.m"
        MR_Integer mdb__browser_info__CastX_41;
#line 571 "browser_info.m"
        MR_Integer mdb__browser_info__CastY_42;
#line 571 "browser_info.m"
        MR_Integer mdb__browser_info__CastX_53;
#line 571 "browser_info.m"
        MR_Integer mdb__browser_info__CastY_54;

#line 571 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__CastX_29 == mdb__browser_info__CastY_30);
#line 571 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
          mdb__browser_info__succeeded = MR_TRUE;
#line 571 "browser_info.m"
        else
#line 571 "browser_info.m"
          {
#line 571 "browser_info.m"
            MR_Word mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 0)));
#line 571 "browser_info.m"
            MR_Word mdb__browser_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 1)));
#line 571 "browser_info.m"
            MR_Word mdb__browser_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 2)));
#line 571 "browser_info.m"
            MR_Word mdb__browser_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 3)));
#line 571 "browser_info.m"
            MR_Word mdb__browser_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 4)));
#line 571 "browser_info.m"
            MR_Word mdb__browser_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 0)));
#line 571 "browser_info.m"
            MR_Word mdb__browser_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 1)));
#line 571 "browser_info.m"
            MR_Word mdb__browser_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 2)));
#line 571 "browser_info.m"
            MR_Word mdb__browser_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 3)));
#line 571 "browser_info.m"
            MR_Word mdb__browser_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 4)));

#line 7349 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_19_19 == mdb__browser_info__V_24_24);
#line 571 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
              {
#line 7355 "mdb.browser_info.c"
                {
#line 7357 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_20_20, mdb__browser_info__V_25_25);
                }
#line 571 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                  {
#line 7364 "mdb.browser_info.c"
                    {
#line 7366 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_21_21, mdb__browser_info__V_26_26);
                    }
#line 571 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                      {
#line 7373 "mdb.browser_info.c"
                        {
#line 7375 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_22_22, mdb__browser_info__V_27_27);
                        }
#line 571 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 7380 "mdb.browser_info.c"
                          {
#line 7382 "mdb.browser_info.c"
                            mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_23_23, mdb__browser_info__V_28_28);
                          }
#line 571 "browser_info.m"
                      }
#line 571 "browser_info.m"
                  }
#line 571 "browser_info.m"
              }
#line 571 "browser_info.m"
          }
#line 555 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 555 "browser_info.m"
          {
#line 571 "browser_info.m"
            mdb__browser_info__CastX_41 = (MR_Integer) mdb__browser_info__V_4_4;
#line 571 "browser_info.m"
            mdb__browser_info__CastY_42 = (MR_Integer) mdb__browser_info__V_10_10;
#line 571 "browser_info.m"
            mdb__browser_info__succeeded = (mdb__browser_info__CastX_41 == mdb__browser_info__CastY_42);
#line 571 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
              mdb__browser_info__succeeded = MR_TRUE;
#line 571 "browser_info.m"
            else
#line 571 "browser_info.m"
              {
#line 571 "browser_info.m"
                MR_Word mdb__browser_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 0)));
#line 571 "browser_info.m"
                MR_Word mdb__browser_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 1)));
#line 571 "browser_info.m"
                MR_Word mdb__browser_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 2)));
#line 571 "browser_info.m"
                MR_Word mdb__browser_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 3)));
#line 571 "browser_info.m"
                MR_Word mdb__browser_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 4)));
#line 571 "browser_info.m"
                MR_Word mdb__browser_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 0)));
#line 571 "browser_info.m"
                MR_Word mdb__browser_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 1)));
#line 571 "browser_info.m"
                MR_Word mdb__browser_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 2)));
#line 571 "browser_info.m"
                MR_Word mdb__browser_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 3)));
#line 571 "browser_info.m"
                MR_Word mdb__browser_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 4)));

#line 7432 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_31_31 == mdb__browser_info__V_36_36);
#line 571 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                  {
#line 7438 "mdb.browser_info.c"
                    {
#line 7440 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_32_32, mdb__browser_info__V_37_37);
                    }
#line 571 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                      {
#line 7447 "mdb.browser_info.c"
                        {
#line 7449 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_33_33, mdb__browser_info__V_38_38);
                        }
#line 571 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                          {
#line 7456 "mdb.browser_info.c"
                            {
#line 7458 "mdb.browser_info.c"
                              mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_34_34, mdb__browser_info__V_39_39);
                            }
#line 571 "browser_info.m"
                            if (mdb__browser_info__succeeded)
#line 7463 "mdb.browser_info.c"
                              {
#line 7465 "mdb.browser_info.c"
                                mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_35_35, mdb__browser_info__V_40_40);
                              }
#line 571 "browser_info.m"
                          }
#line 571 "browser_info.m"
                      }
#line 571 "browser_info.m"
                  }
#line 571 "browser_info.m"
              }
#line 555 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 555 "browser_info.m"
              {
#line 571 "browser_info.m"
                mdb__browser_info__CastX_53 = (MR_Integer) mdb__browser_info__V_5_5;
#line 571 "browser_info.m"
                mdb__browser_info__CastY_54 = (MR_Integer) mdb__browser_info__V_11_11;
#line 571 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__CastX_53 == mdb__browser_info__CastY_54);
#line 571 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                  mdb__browser_info__succeeded = MR_TRUE;
#line 571 "browser_info.m"
                else
#line 571 "browser_info.m"
                  {
#line 571 "browser_info.m"
                    MR_Word mdb__browser_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 0)));
#line 571 "browser_info.m"
                    MR_Word mdb__browser_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 1)));
#line 571 "browser_info.m"
                    MR_Word mdb__browser_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 2)));
#line 571 "browser_info.m"
                    MR_Word mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 3)));
#line 571 "browser_info.m"
                    MR_Word mdb__browser_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 4)));
#line 571 "browser_info.m"
                    MR_Word mdb__browser_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 0)));
#line 571 "browser_info.m"
                    MR_Word mdb__browser_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 1)));
#line 571 "browser_info.m"
                    MR_Word mdb__browser_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 2)));
#line 571 "browser_info.m"
                    MR_Word mdb__browser_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 3)));
#line 571 "browser_info.m"
                    MR_Word mdb__browser_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 4)));

#line 7515 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_43_43 == mdb__browser_info__V_48_48);
#line 571 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                      {
#line 7521 "mdb.browser_info.c"
                        {
#line 7523 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_44_44, mdb__browser_info__V_49_49);
                        }
#line 571 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                          {
#line 7530 "mdb.browser_info.c"
                            {
#line 7532 "mdb.browser_info.c"
                              mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_45_45, mdb__browser_info__V_50_50);
                            }
#line 571 "browser_info.m"
                            if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                              {
#line 7539 "mdb.browser_info.c"
                                {
#line 7541 "mdb.browser_info.c"
                                  mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_46_46, mdb__browser_info__V_51_51);
                                }
#line 571 "browser_info.m"
                                if (mdb__browser_info__succeeded)
#line 7546 "mdb.browser_info.c"
                                  {
#line 7548 "mdb.browser_info.c"
                                    mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_47_47, mdb__browser_info__V_52_52);
                                  }
#line 571 "browser_info.m"
                              }
#line 571 "browser_info.m"
                          }
#line 571 "browser_info.m"
                      }
#line 571 "browser_info.m"
                  }
#line 555 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 555 "browser_info.m"
                  {
#line 7563 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_6_6 == mdb__browser_info__V_12_12);
#line 555 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 555 "browser_info.m"
                      {
#line 7569 "mdb.browser_info.c"
                        mdb__browser_info__TypeInfo_17_17 = (MR_Word) &mdb__browser_info_scalar_common_2[4];
#line 7571 "mdb.browser_info.c"
                        {
#line 7573 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_17_17, ((MR_Box) (mdb__browser_info__V_7_7)), ((MR_Box) (mdb__browser_info__V_13_13)));
                        }
#line 555 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 555 "browser_info.m"
                          {
#line 7580 "mdb.browser_info.c"
                            mdb__browser_info__TypeInfo_18_18 = (MR_Word) &mdb__browser_info_scalar_common_2[4];
#line 7582 "mdb.browser_info.c"
                            {
#line 7584 "mdb.browser_info.c"
                              return mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_18_18, ((MR_Box) (mdb__browser_info__V_8_8)), ((MR_Box) (mdb__browser_info__V_14_14)));
                            }
#line 555 "browser_info.m"
                          }
#line 555 "browser_info.m"
                      }
#line 555 "browser_info.m"
                  }
#line 555 "browser_info.m"
              }
#line 555 "browser_info.m"
          }
#line 555 "browser_info.m"
      }
#line 555 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 555 "browser_info.m"
  }
#line 555 "browser_info.m"
}

#line 84 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browser_mode_func_0_0(
#line 84 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 84 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 84 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 84 "browser_info.m"
{
#line 84 "browser_info.m"
  {
#line 84 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 84 "browser_info.m"
    MR_Word mdb__browser_info__Cast_HeadVar1_4 = mdb__browser_info__HeadVar__2_2;
#line 84 "browser_info.m"
    MR_Word mdb__browser_info__Cast_HeadVar2_5 = mdb__browser_info__HeadVar__3_3;

#line 84 "browser_info.m"
    {
#line 84 "browser_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_3[0], mdb__browser_info__HeadVar__1_1, ((MR_Box) (mdb__browser_info__Cast_HeadVar1_4)), ((MR_Box) (mdb__browser_info__Cast_HeadVar2_5)));
#line 84 "browser_info.m"
      return;
    }
#line 84 "browser_info.m"
  }
#line 84 "browser_info.m"
}

#line 84 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browser_mode_func_0_0(
#line 84 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 84 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 84 "browser_info.m"
{
#line 84 "browser_info.m"
  {
#line 84 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 84 "browser_info.m"
    MR_Word mdb__browser_info__Cast_HeadVar1_3 = mdb__browser_info__HeadVar__1_1;
#line 84 "browser_info.m"
    MR_Word mdb__browser_info__Cast_HeadVar2_4 = mdb__browser_info__HeadVar__2_2;

#line 84 "browser_info.m"
    {
#line 84 "browser_info.m"
      return mdb__browser_info__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mdb__browser_info__Cast_HeadVar1_3, (MR_Word) mdb__browser_info__Cast_HeadVar2_4);
    }
#line 84 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 84 "browser_info.m"
  }
#line 84 "browser_info.m"
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
#line 7692 "mdb.browser_info.c"
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
#line 7734 "mdb.browser_info.c"
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
#line 7754 "mdb.browser_info.c"
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
#line 7778 "mdb.browser_info.c"
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
#line 7798 "mdb.browser_info.c"
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
#line 7818 "mdb.browser_info.c"
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
#line 7838 "mdb.browser_info.c"
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

#line 7941 "mdb.browser_info.c"
        {
#line 7943 "mdb.browser_info.c"
          mdb__browser_info__succeeded = mdb__browser_term____Unify____browser_term_0_0(mdb__browser_info__V_3_3, mdb__browser_info__V_10_10);
        }
#line 39 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
          {
#line 7950 "mdb.browser_info.c"
            mdb__browser_info__TypeInfo_20_20 = (MR_Word) &mdb__browser_info_scalar_common_2[0];
#line 7952 "mdb.browser_info.c"
            {
#line 7954 "mdb.browser_info.c"
              mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_20_20, ((MR_Box) (mdb__browser_info__V_4_4)), ((MR_Box) (mdb__browser_info__V_11_11)));
            }
#line 39 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
              {
#line 7961 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_12_12);
#line 39 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                  {
#line 7967 "mdb.browser_info.c"
                    mdb__browser_info__TypeInfo_21_21 = (MR_Word) &mdb__browser_info_scalar_common_2[1];
#line 7969 "mdb.browser_info.c"
                    {
#line 7971 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_21_21, ((MR_Box) (mdb__browser_info__V_6_6)), ((MR_Box) (mdb__browser_info__V_13_13)));
                    }
#line 39 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                      {
#line 7978 "mdb.browser_info.c"
                        {
#line 7980 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_persistent_state_0_0(mdb__browser_info__V_7_7, mdb__browser_info__V_14_14);
                        }
#line 39 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                          {
#line 7987 "mdb.browser_info.c"
                            mdb__browser_info__TypeInfo_22_22 = (MR_Word) &mdb__browser_info_scalar_common_2[0];
#line 7989 "mdb.browser_info.c"
                            {
#line 7991 "mdb.browser_info.c"
                              mdb__browser_info__succeeded = mdb__browser_info____Unify____maybe_track_subterm_1_0(mdb__browser_info__TypeInfo_22_22, mdb__browser_info__V_8_8, mdb__browser_info__V_15_15);
                            }
#line 39 "browser_info.m"
                            if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                              {
#line 7998 "mdb.browser_info.c"
                                mdb__browser_info__TypeInfo_23_23 = (MR_Word) &mdb__browser_info_scalar_common_2[3];
#line 8000 "mdb.browser_info.c"
                                {
#line 8002 "mdb.browser_info.c"
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

#line 327 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browser_db_0_0(
#line 327 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 327 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 327 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 327 "browser_info.m"
{
#line 327 "browser_info.m"
  {
#line 327 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 327 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_6 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 327 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_7 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 327 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_6 == mdb__browser_info__CastY_7);
#line 327 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 8050 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 327 "browser_info.m"
    else
#line 327 "browser_info.m"
      {
#line 327 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = (MR_Word) mdb__browser_info__HeadVar__2_2;
#line 327 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = (MR_Word) mdb__browser_info__HeadVar__3_3;

#line 327 "browser_info.m"
        {
#line 327 "browser_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_1[0], mdb__browser_info__HeadVar__1_1, ((MR_Box) (mdb__browser_info__V_4_4)), ((MR_Box) (mdb__browser_info__V_5_5)));
#line 327 "browser_info.m"
          return;
        }
#line 327 "browser_info.m"
      }
#line 327 "browser_info.m"
  }
#line 327 "browser_info.m"
}

#line 327 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browser_db_0_0(
#line 327 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 327 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 327 "browser_info.m"
{
#line 327 "browser_info.m"
  {
#line 327 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 327 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_5 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 327 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_6 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 327 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_5 == mdb__browser_info__CastY_6);
#line 327 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 327 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 327 "browser_info.m"
    else
#line 327 "browser_info.m"
      {
#line 327 "browser_info.m"
        MR_Word mdb__browser_info__V_3_3 = (MR_Word) mdb__browser_info__HeadVar__1_1;
#line 327 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = (MR_Word) mdb__browser_info__HeadVar__2_2;

#line 8108 "mdb.browser_info.c"
        {
#line 8110 "mdb.browser_info.c"
          return mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__browser_info_scalar_common_1[0], ((MR_Box) (mdb__browser_info__V_3_3)), ((MR_Box) (mdb__browser_info__V_4_4)));
        }
#line 327 "browser_info.m"
      }
#line 327 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 327 "browser_info.m"
  }
#line 327 "browser_info.m"
}

#line 123 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browse_caller_type_0_0(
#line 123 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 123 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 123 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 123 "browser_info.m"
{
#line 123 "browser_info.m"
  {
#line 123 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 123 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 123 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 123 "browser_info.m"
    {
#line 123 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
#line 123 "browser_info.m"
      return;
    }
#line 123 "browser_info.m"
  }
#line 123 "browser_info.m"
}

#line 123 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browse_caller_type_0_0(
#line 123 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 123 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 123 "browser_info.m"
{
#line 8163 "mdb.browser_info.c"
  {
#line 8165 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 8168 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 8170 "mdb.browser_info.c"
  }
#line 123 "browser_info.m"
}

#line 1195 "browser_info.m"
static void MR_CALL 
mdb__browser_info__browser_persistent_state_type_1_p_0(
#line 1195 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1)
#line 1195 "browser_info.m"
{
#line 1199 "browser_info.m"
  {
#line 1199 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1199 "browser_info.m"
    {
#line 1199 "browser_info.m"
      *mdb__browser_info__HeadVar__1_1 = mercury__type_desc__type_of_1_f_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0);
    }
#line 1199 "browser_info.m"
  }
#line 1195 "browser_info.m"
}

#line 1178 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__format_params_to_desc_1_f_0(
#line 1178 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 1178 "browser_info.m"
{
#line 1180 "browser_info.m"
  {
#line 1180 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__HeadVar__2_2;
#line 1180 "browser_info.m"
    MR_Integer mdb__browser_info__Depth_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 1180 "browser_info.m"
    MR_Integer mdb__browser_info__Size_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 1180 "browser_info.m"
    MR_Integer mdb__browser_info__Width_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 1180 "browser_info.m"
    MR_Integer mdb__browser_info__Lines_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__V_8_8;
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__V_9_9;
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__V_10_10;
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__V_12_12;
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__V_14_14;
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__V_15_15;
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__V_16_16;
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__V_18_18;
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__V_20_20;
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__V_22_22;
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__V_24_24;
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__V_26_26;
#line 1180 "browser_info.m"
    MR_String mdb__browser_info__V_27_27;

#line 1181 "browser_info.m"
    {
#line 1181 "browser_info.m"
      mdb__browser_info__V_9_9 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Depth_3);
    }
#line 1182 "browser_info.m"
    {
#line 1182 "browser_info.m"
      mdb__browser_info__V_15_15 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Size_4);
    }
#line 1183 "browser_info.m"
    {
#line 1183 "browser_info.m"
      mdb__browser_info__V_21_21 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Width_5);
    }
#line 1184 "browser_info.m"
    {
#line 1184 "browser_info.m"
      mdb__browser_info__V_27_27 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Lines_6);
    }
#line 1184 "browser_info.m"
    {
#line 1184 "browser_info.m"
      mdb__browser_info__V_26_26 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_27_27, (MR_String) "\n");
    }
#line 1184 "browser_info.m"
    {
#line 1184 "browser_info.m"
      mdb__browser_info__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "lines ", mdb__browser_info__V_26_26);
    }
#line 1183 "browser_info.m"
    {
#line 1183 "browser_info.m"
      mdb__browser_info__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_24_24);
    }
#line 1183 "browser_info.m"
    {
#line 1183 "browser_info.m"
      mdb__browser_info__V_20_20 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_21_21, mdb__browser_info__V_22_22);
    }
#line 1183 "browser_info.m"
    {
#line 1183 "browser_info.m"
      mdb__browser_info__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "width ", mdb__browser_info__V_20_20);
    }
#line 1182 "browser_info.m"
    {
#line 1182 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_18_18);
    }
#line 1182 "browser_info.m"
    {
#line 1182 "browser_info.m"
      mdb__browser_info__V_14_14 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_15_15, mdb__browser_info__V_16_16);
    }
#line 1182 "browser_info.m"
    {
#line 1182 "browser_info.m"
      mdb__browser_info__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "size ", mdb__browser_info__V_14_14);
    }
#line 1181 "browser_info.m"
    {
#line 1181 "browser_info.m"
      mdb__browser_info__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_12_12);
    }
#line 1181 "browser_info.m"
    {
#line 1181 "browser_info.m"
      mdb__browser_info__V_8_8 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_9_9, mdb__browser_info__V_10_10);
    }
#line 1181 "browser_info.m"
    {
#line 1181 "browser_info.m"
      return mdb__browser_info__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "depth ", mdb__browser_info__V_8_8);
    }
#line 1180 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 1180 "browser_info.m"
  }
#line 1178 "browser_info.m"
}

#line 1168 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__format_params_to_mdb_command_2_f_0(
#line 1168 "browser_info.m"
  MR_String mdb__browser_info__CmdCallerOpt_4,
#line 1168 "browser_info.m"
  MR_Word mdb__browser_info__FormatParams_5)
#line 1168 "browser_info.m"
{
#line 1170 "browser_info.m"
  {
#line 1170 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__Cmds_6;
#line 1170 "browser_info.m"
    MR_Integer mdb__browser_info__Depth_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FormatParams_5, (MR_Integer) 0)));
#line 1170 "browser_info.m"
    MR_Integer mdb__browser_info__Size_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FormatParams_5, (MR_Integer) 1)));
#line 1170 "browser_info.m"
    MR_Integer mdb__browser_info__Width_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FormatParams_5, (MR_Integer) 2)));
#line 1170 "browser_info.m"
    MR_Integer mdb__browser_info__Lines_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FormatParams_5, (MR_Integer) 3)));
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__DepthCmd_11;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__SizeCmd_12;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__WidthCmd_13;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__LinesCmd_14;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_15_15;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_17_17;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_18_18;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_20_20;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_22_22;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_23_23;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_25_25;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_27_27;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_28_28;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_30_30;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_32_32;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_33_33;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_35_35;
#line 1170 "browser_info.m"
    MR_String mdb__browser_info__V_36_36;

#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_18_18 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Depth_7);
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_17_17 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_18_18, (MR_String) "\n");
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "depth ", mdb__browser_info__V_17_17);
    }
#line 1172 "browser_info.m"
    {
#line 1172 "browser_info.m"
      mdb__browser_info__DepthCmd_11 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdCallerOpt_4, mdb__browser_info__V_15_15);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_23_23 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Size_8);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_22_22 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_23_23, (MR_String) "\n");
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "size ", mdb__browser_info__V_22_22);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__SizeCmd_12 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdCallerOpt_4, mdb__browser_info__V_20_20);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_28_28 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Width_9);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_27_27 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_28_28, (MR_String) "\n");
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "width ", mdb__browser_info__V_27_27);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__WidthCmd_13 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdCallerOpt_4, mdb__browser_info__V_25_25);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_33_33 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Lines_10);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_32_32 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_33_33, (MR_String) "\n");
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "lines ", mdb__browser_info__V_32_32);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__LinesCmd_14 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdCallerOpt_4, mdb__browser_info__V_30_30);
    }
#line 1176 "browser_info.m"
    {
#line 1176 "browser_info.m"
      mdb__browser_info__V_36_36 = mercury__string__f_43_43_2_f_0(mdb__browser_info__WidthCmd_13, mdb__browser_info__LinesCmd_14);
    }
#line 1176 "browser_info.m"
    {
#line 1176 "browser_info.m"
      mdb__browser_info__V_35_35 = mercury__string__f_43_43_2_f_0(mdb__browser_info__SizeCmd_12, mdb__browser_info__V_36_36);
    }
#line 1176 "browser_info.m"
    {
#line 1176 "browser_info.m"
      return mdb__browser_info__Cmds_6 = mercury__string__f_43_43_2_f_0(mdb__browser_info__DepthCmd_11, mdb__browser_info__V_35_35);
    }
#line 1170 "browser_info.m"
    return mdb__browser_info__Cmds_6;
#line 1170 "browser_info.m"
  }
#line 1168 "browser_info.m"
}

#line 1158 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__caller_params_to_desc_1_f_0(
#line 1158 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 1158 "browser_info.m"
{
#line 1161 "browser_info.m"
  {
#line 1161 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__HeadVar__2_2;
#line 1161 "browser_info.m"
    MR_Word mdb__browser_info__Format_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 1161 "browser_info.m"
    MR_Word mdb__browser_info__FlatParams_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 1161 "browser_info.m"
    MR_Word mdb__browser_info__RawPrettyParams_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 1161 "browser_info.m"
    MR_Word mdb__browser_info__VerboseParams_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 1161 "browser_info.m"
    MR_Word mdb__browser_info__PrettyParams_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_9_9;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_10_10 = ((&mdb__browser_info_vector_common_7[4 + mdb__browser_info__Format_3]))->mdb__browser_info__vector_common_type_7_0__vct_7_f_0;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_11_11;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_13_13;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_15_15;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_16_16;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_17_17;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_19_19;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_20_20;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_23_23;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_24_24;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_25_25;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_27_27;
#line 1161 "browser_info.m"
    MR_Integer mdb__browser_info__Depth_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 0)));
#line 1161 "browser_info.m"
    MR_Integer mdb__browser_info__Size_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 1)));
#line 1161 "browser_info.m"
    MR_Integer mdb__browser_info__Width_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 2)));
#line 1161 "browser_info.m"
    MR_Integer mdb__browser_info__Lines_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 3)));
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_33_33;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_34_34;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_35_35;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_37_37;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_39_39;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_40_40;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_41_41;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_43_43;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_45_45;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_46_46;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_47_47;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_49_49;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_51_51;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_52_52;
#line 1161 "browser_info.m"
    MR_Integer mdb__browser_info__Depth_54;
#line 1161 "browser_info.m"
    MR_Integer mdb__browser_info__Size_55;
#line 1161 "browser_info.m"
    MR_Integer mdb__browser_info__Width_56;
#line 1161 "browser_info.m"
    MR_Integer mdb__browser_info__Lines_57;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_59_59;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_60_60;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_61_61;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_63_63;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_65_65;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_66_66;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_67_67;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_69_69;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_71_71;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_72_72;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_73_73;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_75_75;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_77_77;
#line 1161 "browser_info.m"
    MR_String mdb__browser_info__V_78_78;

#line 1181 "browser_info.m"
    {
#line 1181 "browser_info.m"
      mdb__browser_info__V_34_34 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Depth_28);
    }
#line 1182 "browser_info.m"
    {
#line 1182 "browser_info.m"
      mdb__browser_info__V_40_40 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Size_29);
    }
#line 1183 "browser_info.m"
    {
#line 1183 "browser_info.m"
      mdb__browser_info__V_46_46 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Width_30);
    }
#line 1184 "browser_info.m"
    {
#line 1184 "browser_info.m"
      mdb__browser_info__V_52_52 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Lines_31);
    }
#line 1184 "browser_info.m"
    {
#line 1184 "browser_info.m"
      mdb__browser_info__V_51_51 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_52_52, (MR_String) "\n");
    }
#line 1184 "browser_info.m"
    {
#line 1184 "browser_info.m"
      mdb__browser_info__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) "lines ", mdb__browser_info__V_51_51);
    }
#line 1183 "browser_info.m"
    {
#line 1183 "browser_info.m"
      mdb__browser_info__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_49_49);
    }
#line 1183 "browser_info.m"
    {
#line 1183 "browser_info.m"
      mdb__browser_info__V_45_45 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_46_46, mdb__browser_info__V_47_47);
    }
#line 1183 "browser_info.m"
    {
#line 1183 "browser_info.m"
      mdb__browser_info__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "width ", mdb__browser_info__V_45_45);
    }
#line 1182 "browser_info.m"
    {
#line 1182 "browser_info.m"
      mdb__browser_info__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_43_43);
    }
#line 1182 "browser_info.m"
    {
#line 1182 "browser_info.m"
      mdb__browser_info__V_39_39 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_40_40, mdb__browser_info__V_41_41);
    }
#line 1182 "browser_info.m"
    {
#line 1182 "browser_info.m"
      mdb__browser_info__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) "size ", mdb__browser_info__V_39_39);
    }
#line 1181 "browser_info.m"
    {
#line 1181 "browser_info.m"
      mdb__browser_info__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_37_37);
    }
#line 1181 "browser_info.m"
    {
#line 1181 "browser_info.m"
      mdb__browser_info__V_33_33 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_34_34, mdb__browser_info__V_35_35);
    }
#line 1181 "browser_info.m"
    {
#line 1181 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "depth ", mdb__browser_info__V_33_33);
    }
#line 1180 "browser_info.m"
    mdb__browser_info__Depth_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__RawPrettyParams_5, (MR_Integer) 0)));
#line 1180 "browser_info.m"
    mdb__browser_info__Size_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__RawPrettyParams_5, (MR_Integer) 1)));
#line 1180 "browser_info.m"
    mdb__browser_info__Width_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__RawPrettyParams_5, (MR_Integer) 2)));
#line 1180 "browser_info.m"
    mdb__browser_info__Lines_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__RawPrettyParams_5, (MR_Integer) 3)));
#line 1181 "browser_info.m"
    {
#line 1181 "browser_info.m"
      mdb__browser_info__V_60_60 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Depth_54);
    }
#line 1182 "browser_info.m"
    {
#line 1182 "browser_info.m"
      mdb__browser_info__V_66_66 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Size_55);
    }
#line 1183 "browser_info.m"
    {
#line 1183 "browser_info.m"
      mdb__browser_info__V_72_72 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Width_56);
    }
#line 1184 "browser_info.m"
    {
#line 1184 "browser_info.m"
      mdb__browser_info__V_78_78 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Lines_57);
    }
#line 1184 "browser_info.m"
    {
#line 1184 "browser_info.m"
      mdb__browser_info__V_77_77 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_78_78, (MR_String) "\n");
    }
#line 1184 "browser_info.m"
    {
#line 1184 "browser_info.m"
      mdb__browser_info__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "lines ", mdb__browser_info__V_77_77);
    }
#line 1183 "browser_info.m"
    {
#line 1183 "browser_info.m"
      mdb__browser_info__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_75_75);
    }
#line 1183 "browser_info.m"
    {
#line 1183 "browser_info.m"
      mdb__browser_info__V_71_71 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_72_72, mdb__browser_info__V_73_73);
    }
#line 1183 "browser_info.m"
    {
#line 1183 "browser_info.m"
      mdb__browser_info__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "width ", mdb__browser_info__V_71_71);
    }
#line 1182 "browser_info.m"
    {
#line 1182 "browser_info.m"
      mdb__browser_info__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_69_69);
    }
#line 1182 "browser_info.m"
    {
#line 1182 "browser_info.m"
      mdb__browser_info__V_65_65 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_66_66, mdb__browser_info__V_67_67);
    }
#line 1182 "browser_info.m"
    {
#line 1182 "browser_info.m"
      mdb__browser_info__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "size ", mdb__browser_info__V_65_65);
    }
#line 1181 "browser_info.m"
    {
#line 1181 "browser_info.m"
      mdb__browser_info__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_63_63);
    }
#line 1181 "browser_info.m"
    {
#line 1181 "browser_info.m"
      mdb__browser_info__V_59_59 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_60_60, mdb__browser_info__V_61_61);
    }
#line 1181 "browser_info.m"
    {
#line 1181 "browser_info.m"
      mdb__browser_info__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "depth ", mdb__browser_info__V_59_59);
    }
#line 1165 "browser_info.m"
    {
#line 1165 "browser_info.m"
      mdb__browser_info__V_24_24 = mdb__browser_info__format_params_to_desc_1_f_0(mdb__browser_info__VerboseParams_6);
    }
#line 1166 "browser_info.m"
    {
#line 1166 "browser_info.m"
      mdb__browser_info__V_27_27 = mdb__browser_info__format_params_to_desc_1_f_0(mdb__browser_info__PrettyParams_7);
    }
#line 1166 "browser_info.m"
    {
#line 1166 "browser_info.m"
      mdb__browser_info__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "pretty parameters:     ", mdb__browser_info__V_27_27);
    }
#line 1165 "browser_info.m"
    {
#line 1165 "browser_info.m"
      mdb__browser_info__V_23_23 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_24_24, mdb__browser_info__V_25_25);
    }
#line 1165 "browser_info.m"
    {
#line 1165 "browser_info.m"
      mdb__browser_info__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "verbose parameters:    ", mdb__browser_info__V_23_23);
    }
#line 1164 "browser_info.m"
    {
#line 1164 "browser_info.m"
      mdb__browser_info__V_19_19 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_20_20, mdb__browser_info__V_21_21);
    }
#line 1164 "browser_info.m"
    {
#line 1164 "browser_info.m"
      mdb__browser_info__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "raw_pretty parameters: ", mdb__browser_info__V_19_19);
    }
#line 1163 "browser_info.m"
    {
#line 1163 "browser_info.m"
      mdb__browser_info__V_15_15 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_16_16, mdb__browser_info__V_17_17);
    }
#line 1163 "browser_info.m"
    {
#line 1163 "browser_info.m"
      mdb__browser_info__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "flat parameters:       ", mdb__browser_info__V_15_15);
    }
#line 1162 "browser_info.m"
    {
#line 1162 "browser_info.m"
      mdb__browser_info__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mdb__browser_info__V_13_13);
    }
#line 1162 "browser_info.m"
    {
#line 1162 "browser_info.m"
      mdb__browser_info__V_9_9 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_10_10, mdb__browser_info__V_11_11);
    }
#line 1162 "browser_info.m"
    {
#line 1162 "browser_info.m"
      return mdb__browser_info__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "default format ", mdb__browser_info__V_9_9);
    }
#line 1161 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 1161 "browser_info.m"
  }
#line 1158 "browser_info.m"
}

#line 1144 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__caller_params_to_mdb_command_2_f_0(
#line 1144 "browser_info.m"
  MR_String mdb__browser_info__CallerOpt_4,
#line 1144 "browser_info.m"
  MR_Word mdb__browser_info__CallerParams_5)
#line 1144 "browser_info.m"
{
#line 1146 "browser_info.m"
  {
#line 1146 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__Cmds_6;
#line 1146 "browser_info.m"
    MR_Word mdb__browser_info__Format_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 0)));
#line 1146 "browser_info.m"
    MR_Word mdb__browser_info__FlatParams_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 1)));
#line 1146 "browser_info.m"
    MR_Word mdb__browser_info__RawPrettyParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 2)));
#line 1146 "browser_info.m"
    MR_Word mdb__browser_info__VerboseParams_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 3)));
#line 1146 "browser_info.m"
    MR_Word mdb__browser_info__PrettyParams_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 4)));
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__FormatCmd_12;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__CmdPrefix_13;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__FormatParamCmds_14;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__V_16_16;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__V_17_17;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__V_18_18 = ((&mdb__browser_info_vector_common_7[0 + mdb__browser_info__Format_7]))->mdb__browser_info__vector_common_type_7_0__vct_7_f_0;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__V_22_22;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__V_24_24;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__V_25_25;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__V_26_26;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__V_28_28;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__V_29_29;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__V_30_30;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__V_32_32;
#line 1146 "browser_info.m"
    MR_String mdb__browser_info__V_33_33;

#line 1149 "browser_info.m"
    {
#line 1149 "browser_info.m"
      mdb__browser_info__V_17_17 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_18_18, (MR_String) "\n");
    }
#line 1149 "browser_info.m"
    {
#line 1149 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CallerOpt_4, mdb__browser_info__V_17_17);
    }
#line 1149 "browser_info.m"
    {
#line 1149 "browser_info.m"
      mdb__browser_info__FormatCmd_12 = mercury__string__f_43_43_2_f_0((MR_String) "format ", mdb__browser_info__V_16_16);
    }
#line 1150 "browser_info.m"
    {
#line 1150 "browser_info.m"
      mdb__browser_info__CmdPrefix_13 = mercury__string__f_43_43_2_f_0((MR_String) "format_param ", mdb__browser_info__CallerOpt_4);
    }
#line 1152 "browser_info.m"
    {
#line 1152 "browser_info.m"
      mdb__browser_info__V_22_22 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdPrefix_13, (MR_String) "-f ");
    }
#line 1152 "browser_info.m"
    {
#line 1152 "browser_info.m"
      mdb__browser_info__V_21_21 = mdb__browser_info__format_params_to_mdb_command_2_f_0(mdb__browser_info__V_22_22, mdb__browser_info__FlatParams_8);
    }
#line 1153 "browser_info.m"
    {
#line 1153 "browser_info.m"
      mdb__browser_info__V_26_26 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdPrefix_13, (MR_String) "-r ");
    }
#line 1153 "browser_info.m"
    {
#line 1153 "browser_info.m"
      mdb__browser_info__V_25_25 = mdb__browser_info__format_params_to_mdb_command_2_f_0(mdb__browser_info__V_26_26, mdb__browser_info__RawPrettyParams_9);
    }
#line 1154 "browser_info.m"
    {
#line 1154 "browser_info.m"
      mdb__browser_info__V_30_30 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdPrefix_13, (MR_String) "-v ");
    }
#line 1154 "browser_info.m"
    {
#line 1154 "browser_info.m"
      mdb__browser_info__V_29_29 = mdb__browser_info__format_params_to_mdb_command_2_f_0(mdb__browser_info__V_30_30, mdb__browser_info__VerboseParams_10);
    }
#line 1155 "browser_info.m"
    {
#line 1155 "browser_info.m"
      mdb__browser_info__V_33_33 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdPrefix_13, (MR_String) "-p ");
    }
#line 1155 "browser_info.m"
    {
#line 1155 "browser_info.m"
      mdb__browser_info__V_32_32 = mdb__browser_info__format_params_to_mdb_command_2_f_0(mdb__browser_info__V_33_33, mdb__browser_info__PrettyParams_11);
    }
#line 1154 "browser_info.m"
    {
#line 1154 "browser_info.m"
      mdb__browser_info__V_28_28 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_29_29, mdb__browser_info__V_32_32);
    }
#line 1153 "browser_info.m"
    {
#line 1153 "browser_info.m"
      mdb__browser_info__V_24_24 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_25_25, mdb__browser_info__V_28_28);
    }
#line 1152 "browser_info.m"
    {
#line 1152 "browser_info.m"
      mdb__browser_info__FormatParamCmds_14 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_21_21, mdb__browser_info__V_24_24);
    }
#line 1156 "browser_info.m"
    {
#line 1156 "browser_info.m"
      return mdb__browser_info__Cmds_6 = mercury__string__f_43_43_2_f_0(mdb__browser_info__FormatCmd_12, mdb__browser_info__FormatParamCmds_14);
    }
#line 1146 "browser_info.m"
    return mdb__browser_info__Cmds_6;
#line 1146 "browser_info.m"
  }
#line 1144 "browser_info.m"
}

#line 1005 "browser_info.m"
static void MR_CALL 
mdb__browser_info__write_path_2_4_p_0(
#line 1005 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_1,
#line 1005 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 1005 "browser_info.m"
{
#line 1007 "browser_info.m"
  while (MR_TRUE)
#line 1007 "browser_info.m"
    {
#line 1007 "browser_info.m"
      /* tailcall optimized into a loop */
#line 1007 "browser_info.m"
      {
#line 1007 "browser_info.m"
        MR_bool mdb__browser_info__succeeded;

#line 1007 "browser_info.m"
        if ((mdb__browser_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1007 "browser_info.m"
          {
#line 1008 "browser_info.m"
            {
#line 1008 "browser_info.m"
              mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
#line 1008 "browser_info.m"
              return;
            }
#line 1007 "browser_info.m"
          }
#line 1007 "browser_info.m"
        else
#line 1007 "browser_info.m"
          {
#line 1007 "browser_info.m"
            MR_Word mdb__browser_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 1007 "browser_info.m"
            MR_Word mdb__browser_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 1007 "browser_info.m"
            if ((mdb__browser_info__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1013 "browser_info.m"
#line 1013 "browser_info.m"
              switch (MR_tag((MR_Word) mdb__browser_info__V_52_52)) {
#line 1013 "browser_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1013 "browser_info.m"
                case (MR_Integer) 0:
#line 1011 "browser_info.m"
                  {
#line 1012 "browser_info.m"
                    {
#line 1012 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/..");
#line 1012 "browser_info.m"
                      return;
                    }
#line 1011 "browser_info.m"
                  }
#line 1013 "browser_info.m"
                  break;
#line 1013 "browser_info.m"
                case (MR_Integer) 1:
#line 1014 "browser_info.m"
                  {
#line 1014 "browser_info.m"
                    MR_Integer mdb__browser_info__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__V_52_52, (MR_Integer) 0)));

#line 1015 "browser_info.m"
                    {
#line 1015 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
                    }
#line 1016 "browser_info.m"
                    {
#line 1016 "browser_info.m"
                      mdb__browser_info__write_int_debugger_4_p_0(mdb__browser_info__Debugger_1, mdb__browser_info__N_14);
#line 1016 "browser_info.m"
                      return;
                    }
#line 1014 "browser_info.m"
                  }
#line 1013 "browser_info.m"
                  break;
#line 1013 "browser_info.m"
                case (MR_Integer) 2:
#line 1018 "browser_info.m"
                  {
#line 1018 "browser_info.m"
                    MR_String mdb__browser_info__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__V_52_52, (MR_Integer) 0)));

#line 1019 "browser_info.m"
                    {
#line 1019 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
                    }
#line 1020 "browser_info.m"
                    {
#line 1020 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, mdb__browser_info__Name_15);
#line 1020 "browser_info.m"
                      return;
                    }
#line 1018 "browser_info.m"
                  }
#line 1013 "browser_info.m"
                  break;
#line 1013 "browser_info.m"
              }
#line 1007 "browser_info.m"
            else
#line 1027 "browser_info.m"
#line 1027 "browser_info.m"
              switch (MR_tag((MR_Word) mdb__browser_info__V_52_52)) {
#line 1027 "browser_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1027 "browser_info.m"
                case (MR_Integer) 0:
#line 1024 "browser_info.m"
                  {
#line 1025 "browser_info.m"
                    {
#line 1025 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/..");
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
#line 1024 "browser_info.m"
                  }
#line 1027 "browser_info.m"
                  break;
#line 1027 "browser_info.m"
                case (MR_Integer) 1:
#line 1028 "browser_info.m"
                  {
#line 1028 "browser_info.m"
                    MR_Integer mdb__browser_info__N_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__V_52_52, (MR_Integer) 0)));

#line 1029 "browser_info.m"
                    {
#line 1029 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
                    }
#line 1030 "browser_info.m"
                    {
#line 1030 "browser_info.m"
                      mdb__browser_info__write_int_debugger_4_p_0(mdb__browser_info__Debugger_1, mdb__browser_info__N_32);
                    }
#line 1031 "browser_info.m"
                    /* direct tailcall eliminated */
#line 1031 "browser_info.m"
                    {
#line 1031 "browser_info.m"
                      MR_Word mdb__browser_info__HeadVar__2__tmp_copy_2 = mdb__browser_info__V_51_51;

#line 1031 "browser_info.m"
                      mdb__browser_info__HeadVar__2_2 = mdb__browser_info__HeadVar__2__tmp_copy_2;
#line 1031 "browser_info.m"
                    }
#line 1031 "browser_info.m"
                    continue;
#line 1028 "browser_info.m"
                  }
#line 1027 "browser_info.m"
                  break;
#line 1027 "browser_info.m"
                case (MR_Integer) 2:
#line 1033 "browser_info.m"
                  {
#line 1033 "browser_info.m"
                    MR_String mdb__browser_info__Name_33 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__V_52_52, (MR_Integer) 0)));

#line 1034 "browser_info.m"
                    {
#line 1034 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
                    }
#line 1035 "browser_info.m"
                    {
#line 1035 "browser_info.m"
                      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, mdb__browser_info__Name_33);
                    }
#line 1036 "browser_info.m"
                    /* direct tailcall eliminated */
#line 1036 "browser_info.m"
                    {
#line 1036 "browser_info.m"
                      MR_Word mdb__browser_info__HeadVar__2__tmp_copy_2 = mdb__browser_info__V_51_51;

#line 1036 "browser_info.m"
                      mdb__browser_info__HeadVar__2_2 = mdb__browser_info__HeadVar__2__tmp_copy_2;
#line 1036 "browser_info.m"
                    }
#line 1036 "browser_info.m"
                    continue;
#line 1033 "browser_info.m"
                  }
#line 1027 "browser_info.m"
                  break;
#line 1027 "browser_info.m"
              }
#line 1007 "browser_info.m"
          }
#line 1007 "browser_info.m"
      }
#line 1007 "browser_info.m"
      break;
#line 1007 "browser_info.m"
    }
#line 1005 "browser_info.m"
}

#line 919 "browser_info.m"
static void MR_CALL 
mdb__browser_info__show_settings_caller_format_8_p_0(
#line 919 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_9,
#line 919 "browser_info.m"
  MR_Word mdb__browser_info__Info_10,
#line 919 "browser_info.m"
  MR_Word mdb__browser_info__Caller_11,
#line 919 "browser_info.m"
  MR_String mdb__browser_info__CallerName_12,
#line 919 "browser_info.m"
  MR_Word mdb__browser_info__Format_13,
#line 919 "browser_info.m"
  MR_String mdb__browser_info__FormatName_14)
#line 919 "browser_info.m"
{
#line 924 "browser_info.m"
  {
#line 924 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 924 "browser_info.m"
    MR_Word mdb__browser_info__Params_16;
#line 924 "browser_info.m"
    MR_String mdb__browser_info__V_19_19;
#line 924 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 924 "browser_info.m"
    MR_String mdb__browser_info__V_22_22;
#line 924 "browser_info.m"
    MR_String mdb__browser_info__V_24_24;
#line 924 "browser_info.m"
    MR_String mdb__browser_info__V_28_28;
#line 924 "browser_info.m"
    MR_String mdb__browser_info__V_33_33;
#line 924 "browser_info.m"
    MR_String mdb__browser_info__V_35_35;
#line 924 "browser_info.m"
    MR_Integer mdb__browser_info__V_36_36;
#line 924 "browser_info.m"
    MR_String mdb__browser_info__V_39_39;
#line 924 "browser_info.m"
    MR_String mdb__browser_info__V_41_41;
#line 924 "browser_info.m"
    MR_Integer mdb__browser_info__V_42_42;
#line 924 "browser_info.m"
    MR_String mdb__browser_info__V_45_45;
#line 924 "browser_info.m"
    MR_String mdb__browser_info__V_47_47;
#line 924 "browser_info.m"
    MR_Integer mdb__browser_info__V_48_48;
#line 924 "browser_info.m"
    MR_String mdb__browser_info__V_51_51;
#line 924 "browser_info.m"
    MR_String mdb__browser_info__V_53_53;
#line 924 "browser_info.m"
    MR_Integer mdb__browser_info__V_54_54;
#line 932 "browser_info.m"
    MR_Integer mdb__browser_info__V_58_58;
#line 932 "browser_info.m"
    MR_Integer mdb__browser_info__V_59_59;
#line 932 "browser_info.m"
    MR_Integer mdb__browser_info__V_60_60;
#line 934 "browser_info.m"
    MR_Integer mdb__browser_info__V_61_61;
#line 934 "browser_info.m"
    MR_Integer mdb__browser_info__V_62_62;
#line 934 "browser_info.m"
    MR_Integer mdb__browser_info__V_63_63;
#line 936 "browser_info.m"
    MR_Integer mdb__browser_info__V_64_64;
#line 936 "browser_info.m"
    MR_Integer mdb__browser_info__V_65_65;
#line 936 "browser_info.m"
    MR_Integer mdb__browser_info__V_66_66;
#line 938 "browser_info.m"
    MR_Integer mdb__browser_info__V_67_67;
#line 938 "browser_info.m"
    MR_Integer mdb__browser_info__V_68_68;
#line 938 "browser_info.m"
    MR_Integer mdb__browser_info__V_69_69;

#line 925 "browser_info.m"
    {
#line 925 "browser_info.m"
      mdb__browser_info__get_format_params_4_p_0(mdb__browser_info__Info_10, mdb__browser_info__Caller_11, mdb__browser_info__Format_13, &mdb__browser_info__Params_16);
    }
#line 927 "browser_info.m"
    {
#line 927 "browser_info.m"
      mdb__browser_info__V_24_24 = mercury__string__f_43_43_2_f_0(mdb__browser_info__FormatName_14, (MR_String) ":");
    }
#line 927 "browser_info.m"
    {
#line 927 "browser_info.m"
      mdb__browser_info__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) " ", mdb__browser_info__V_24_24);
    }
#line 927 "browser_info.m"
    {
#line 927 "browser_info.m"
      mdb__browser_info__V_21_21 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CallerName_12, mdb__browser_info__V_22_22);
    }
#line 927 "browser_info.m"
    {
#line 927 "browser_info.m"
      mdb__browser_info__V_19_19 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_21_21, (MR_Char) 32, (MR_Integer) 30);
    }
#line 926 "browser_info.m"
    {
#line 926 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_19_19);
    }
#line 930 "browser_info.m"
    {
#line 930 "browser_info.m"
      mdb__browser_info__V_28_28 = mercury__string__pad_right_3_f_0((MR_String) " ", (MR_Char) 32, (MR_Integer) 3);
    }
#line 929 "browser_info.m"
    {
#line 929 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_28_28);
    }
#line 932 "browser_info.m"
    mdb__browser_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 0)));
#line 932 "browser_info.m"
    mdb__browser_info__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 1)));
#line 932 "browser_info.m"
    mdb__browser_info__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 2)));
#line 932 "browser_info.m"
    mdb__browser_info__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 3)));
#line 932 "browser_info.m"
    {
#line 932 "browser_info.m"
      mdb__browser_info__V_35_35 = mercury__string__int_to_string_1_f_0(mdb__browser_info__V_36_36);
    }
#line 932 "browser_info.m"
    {
#line 932 "browser_info.m"
      mdb__browser_info__V_33_33 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_35_35, (MR_Char) 32, (MR_Integer) 10);
    }
#line 931 "browser_info.m"
    {
#line 931 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_33_33);
    }
#line 934 "browser_info.m"
    mdb__browser_info__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 0)));
#line 934 "browser_info.m"
    mdb__browser_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 1)));
#line 934 "browser_info.m"
    mdb__browser_info__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 2)));
#line 934 "browser_info.m"
    mdb__browser_info__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 3)));
#line 934 "browser_info.m"
    {
#line 934 "browser_info.m"
      mdb__browser_info__V_41_41 = mercury__string__int_to_string_1_f_0(mdb__browser_info__V_42_42);
    }
#line 934 "browser_info.m"
    {
#line 934 "browser_info.m"
      mdb__browser_info__V_39_39 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_41_41, (MR_Char) 32, (MR_Integer) 10);
    }
#line 933 "browser_info.m"
    {
#line 933 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_39_39);
    }
#line 936 "browser_info.m"
    mdb__browser_info__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 0)));
#line 936 "browser_info.m"
    mdb__browser_info__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 1)));
#line 936 "browser_info.m"
    mdb__browser_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 2)));
#line 936 "browser_info.m"
    mdb__browser_info__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 3)));
#line 936 "browser_info.m"
    {
#line 936 "browser_info.m"
      mdb__browser_info__V_47_47 = mercury__string__int_to_string_1_f_0(mdb__browser_info__V_48_48);
    }
#line 936 "browser_info.m"
    {
#line 936 "browser_info.m"
      mdb__browser_info__V_45_45 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_47_47, (MR_Char) 32, (MR_Integer) 10);
    }
#line 935 "browser_info.m"
    {
#line 935 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_45_45);
    }
#line 938 "browser_info.m"
    mdb__browser_info__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 0)));
#line 938 "browser_info.m"
    mdb__browser_info__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 1)));
#line 938 "browser_info.m"
    mdb__browser_info__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 2)));
#line 938 "browser_info.m"
    mdb__browser_info__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 3)));
#line 938 "browser_info.m"
    {
#line 938 "browser_info.m"
      mdb__browser_info__V_53_53 = mercury__string__int_to_string_1_f_0(mdb__browser_info__V_54_54);
    }
#line 938 "browser_info.m"
    {
#line 938 "browser_info.m"
      mdb__browser_info__V_51_51 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_53_53, (MR_Char) 32, (MR_Integer) 10);
    }
#line 937 "browser_info.m"
    {
#line 937 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_51_51);
    }
#line 939 "browser_info.m"
    {
#line 939 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_9);
#line 939 "browser_info.m"
      return;
    }
#line 924 "browser_info.m"
  }
#line 919 "browser_info.m"
}

#line 892 "browser_info.m"
static void MR_CALL 
mdb__browser_info__show_settings_caller_6_p_0(
#line 892 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_7,
#line 892 "browser_info.m"
  MR_Word mdb__browser_info__Info_8,
#line 892 "browser_info.m"
  MR_Word mdb__browser_info__Caller_9,
#line 892 "browser_info.m"
  MR_String mdb__browser_info__CallerName_10)
#line 892 "browser_info.m"
{
#line 895 "browser_info.m"
  {
#line 895 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 895 "browser_info.m"
    MR_Word mdb__browser_info__Format_12;
#line 895 "browser_info.m"
    MR_String mdb__browser_info__V_16_16;
#line 895 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 895 "browser_info.m"
    MR_String mdb__browser_info__V_26_26;
#line 895 "browser_info.m"
    MR_String mdb__browser_info__V_31_31;
#line 895 "browser_info.m"
    MR_String mdb__browser_info__V_36_36;
#line 895 "browser_info.m"
    MR_String mdb__browser_info__V_41_41;
#line 895 "browser_info.m"
    MR_String mdb__browser_info__V_46_46;
#line 895 "browser_info.m"
    MR_Word mdb__browser_info__MdbFormatOption_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 3)));
#line 895 "browser_info.m"
    MR_Word mdb__browser_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 4)));
#line 539 "browser_info.m"
    MR_Word mdb__browser_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 0)));
#line 539 "browser_info.m"
    MR_Word mdb__browser_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 1)));
#line 539 "browser_info.m"
    MR_Word mdb__browser_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 2)));
#line 539 "browser_info.m"
    MR_Word mdb__browser_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 5)));
#line 539 "browser_info.m"
    MR_Word mdb__browser_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 6)));

#line 542 "browser_info.m"
    if ((mdb__browser_info__MdbFormatOption_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "browser_info.m"
      {
#line 543 "browser_info.m"
        MR_Word mdb__browser_info__Params_70;
#line 543 "browser_info.m"
        MR_Word mdb__browser_info__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 2)));
#line 543 "browser_info.m"
        MR_Word mdb__browser_info__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 1)));
#line 543 "browser_info.m"
        MR_Word mdb__browser_info__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 0)));
#line 817 "browser_info.m"
        MR_Word mdb__browser_info__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 5)));
#line 817 "browser_info.m"
        MR_Word mdb__browser_info__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 4)));
#line 817 "browser_info.m"
        MR_Integer mdb__browser_info__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 3)));
#line 545 "browser_info.m"
        MR_Word mdb__browser_info__V_84_84;
#line 545 "browser_info.m"
        MR_Word mdb__browser_info__V_85_85;
#line 545 "browser_info.m"
        MR_Word mdb__browser_info__V_86_86;
#line 545 "browser_info.m"
        MR_Word mdb__browser_info__V_87_87;

#line 817 "browser_info.m"
#line 817 "browser_info.m"
        switch (mdb__browser_info__Caller_9) {
#line 817 "browser_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 817 "browser_info.m"
          case (MR_Integer) 1:
#line 818 "browser_info.m"
            mdb__browser_info__Params_70 = mdb__browser_info__V_110_110;
#line 817 "browser_info.m"
            break;
#line 817 "browser_info.m"
          case (MR_Integer) 0:
#line 817 "browser_info.m"
            mdb__browser_info__Params_70 = mdb__browser_info__V_111_111;
#line 817 "browser_info.m"
            break;
#line 817 "browser_info.m"
          case (MR_Integer) 2:
#line 819 "browser_info.m"
            mdb__browser_info__Params_70 = mdb__browser_info__V_109_109;
#line 817 "browser_info.m"
            break;
#line 817 "browser_info.m"
        }
#line 545 "browser_info.m"
        mdb__browser_info__Format_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 0)));
#line 545 "browser_info.m"
        mdb__browser_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 1)));
#line 545 "browser_info.m"
        mdb__browser_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 2)));
#line 545 "browser_info.m"
        mdb__browser_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 3)));
#line 545 "browser_info.m"
        mdb__browser_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 4)));
#line 543 "browser_info.m"
      }
#line 542 "browser_info.m"
    else
#line 541 "browser_info.m"
      mdb__browser_info__Format_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__MdbFormatOption_69, (MR_Integer) 0)));
#line 897 "browser_info.m"
    {
#line 897 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CallerName_10, (MR_String) " default format: ");
    }
#line 897 "browser_info.m"
    {
#line 897 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_16_16);
    }
#line 898 "browser_info.m"
    {
#line 898 "browser_info.m"
      mdb__browser_info__print_format_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Format_12);
    }
#line 899 "browser_info.m"
    {
#line 899 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_7);
    }
#line 901 "browser_info.m"
    {
#line 901 "browser_info.m"
      mdb__browser_info__V_21_21 = mercury__string__pad_right_3_f_0((MR_String) "", (MR_Char) 32, (MR_Integer) 30);
    }
#line 901 "browser_info.m"
    {
#line 901 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_21_21);
    }
#line 902 "browser_info.m"
    {
#line 902 "browser_info.m"
      mdb__browser_info__V_26_26 = mercury__string__pad_right_3_f_0((MR_String) " ", (MR_Char) 32, (MR_Integer) 3);
    }
#line 902 "browser_info.m"
    {
#line 902 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_26_26);
    }
#line 903 "browser_info.m"
    {
#line 903 "browser_info.m"
      mdb__browser_info__V_31_31 = mercury__string__pad_right_3_f_0((MR_String) "depth", (MR_Char) 32, (MR_Integer) 10);
    }
#line 903 "browser_info.m"
    {
#line 903 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_31_31);
    }
#line 904 "browser_info.m"
    {
#line 904 "browser_info.m"
      mdb__browser_info__V_36_36 = mercury__string__pad_right_3_f_0((MR_String) "size", (MR_Char) 32, (MR_Integer) 10);
    }
#line 904 "browser_info.m"
    {
#line 904 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_36_36);
    }
#line 905 "browser_info.m"
    {
#line 905 "browser_info.m"
      mdb__browser_info__V_41_41 = mercury__string__pad_right_3_f_0((MR_String) "width", (MR_Char) 32, (MR_Integer) 10);
    }
#line 905 "browser_info.m"
    {
#line 905 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_41_41);
    }
#line 906 "browser_info.m"
    {
#line 906 "browser_info.m"
      mdb__browser_info__V_46_46 = mercury__string__pad_right_3_f_0((MR_String) "lines", (MR_Char) 32, (MR_Integer) 10);
    }
#line 906 "browser_info.m"
    {
#line 906 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_46_46);
    }
#line 907 "browser_info.m"
    {
#line 907 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_7);
    }
#line 909 "browser_info.m"
    {
#line 909 "browser_info.m"
      mdb__browser_info__show_settings_caller_format_8_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Info_8, mdb__browser_info__Caller_9, mdb__browser_info__CallerName_10, (MR_Integer) 0, (MR_String) "flat");
    }
#line 911 "browser_info.m"
    {
#line 911 "browser_info.m"
      mdb__browser_info__show_settings_caller_format_8_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Info_8, mdb__browser_info__Caller_9, mdb__browser_info__CallerName_10, (MR_Integer) 2, (MR_String) "verbose");
    }
#line 913 "browser_info.m"
    {
#line 913 "browser_info.m"
      mdb__browser_info__show_settings_caller_format_8_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Info_8, mdb__browser_info__Caller_9, mdb__browser_info__CallerName_10, (MR_Integer) 3, (MR_String) "pretty");
    }
#line 915 "browser_info.m"
    {
#line 915 "browser_info.m"
      mdb__browser_info__show_settings_caller_format_8_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Info_8, mdb__browser_info__Caller_9, mdb__browser_info__CallerName_10, (MR_Integer) 1, (MR_String) "raw_pretty");
    }
#line 917 "browser_info.m"
    {
#line 917 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_7);
#line 917 "browser_info.m"
      return;
    }
#line 895 "browser_info.m"
  }
#line 892 "browser_info.m"
}

#line 803 "browser_info.m"
static void MR_CALL 
mdb__browser_info__maybe_set_param_2_4_p_0(
#line 803 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 803 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 803 "browser_info.m"
  MR_Word mdb__browser_info__Params_3,
#line 803 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__4_4)
#line 803 "browser_info.m"
{
#line 806 "browser_info.m"
  {
#line 806 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 806 "browser_info.m"
#line 806 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 806 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 806 "browser_info.m"
      case (MR_Integer) 0:
#line 806 "browser_info.m"
        *mdb__browser_info__HeadVar__4_4 = mdb__browser_info__Params_3;
#line 806 "browser_info.m"
        break;
#line 806 "browser_info.m"
      case (MR_Integer) 1:
#line 806 "browser_info.m"
#line 806 "browser_info.m"
        switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) {
#line 806 "browser_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 806 "browser_info.m"
          case (MR_Integer) 0:
#line 807 "browser_info.m"
            {
#line 807 "browser_info.m"
              MR_Integer mdb__browser_info__D_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 807 "browser_info.m"
              MR_Integer mdb__browser_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 1)));
#line 807 "browser_info.m"
              MR_Integer mdb__browser_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 2)));
#line 807 "browser_info.m"
              MR_Integer mdb__browser_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 3)));
#line 807 "browser_info.m"
              MR_Integer mdb__browser_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 0)));

#line 807 "browser_info.m"
              {
#line 807 "browser_info.m"
                MR_Word base;
#line 807 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 807 "browser_info.m"
                *mdb__browser_info__HeadVar__4_4 = base;
#line 807 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__D_7));
#line 807 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_20_20));
#line 807 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_21_21));
#line 807 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_22_22));
#line 807 "browser_info.m"
              }
#line 807 "browser_info.m"
            }
#line 806 "browser_info.m"
            break;
#line 806 "browser_info.m"
          case (MR_Integer) 1:
#line 808 "browser_info.m"
            {
#line 808 "browser_info.m"
              MR_Integer mdb__browser_info__S_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 808 "browser_info.m"
              MR_Integer mdb__browser_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 0)));
#line 808 "browser_info.m"
              MR_Integer mdb__browser_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 2)));
#line 808 "browser_info.m"
              MR_Integer mdb__browser_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 3)));
#line 808 "browser_info.m"
              MR_Integer mdb__browser_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 1)));

#line 808 "browser_info.m"
              {
#line 808 "browser_info.m"
                MR_Word base;
#line 808 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 808 "browser_info.m"
                *mdb__browser_info__HeadVar__4_4 = base;
#line 808 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_23_23));
#line 808 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__S_9));
#line 808 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_25_25));
#line 808 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_26_26));
#line 808 "browser_info.m"
              }
#line 808 "browser_info.m"
            }
#line 806 "browser_info.m"
            break;
#line 806 "browser_info.m"
          case (MR_Integer) 2:
#line 811 "browser_info.m"
            {
#line 811 "browser_info.m"
              MR_Integer mdb__browser_info__W_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 811 "browser_info.m"
              MR_Integer mdb__browser_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 0)));
#line 811 "browser_info.m"
              MR_Integer mdb__browser_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 1)));
#line 811 "browser_info.m"
              MR_Integer mdb__browser_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 3)));
#line 811 "browser_info.m"
              MR_Integer mdb__browser_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 2)));

#line 811 "browser_info.m"
              {
#line 811 "browser_info.m"
                MR_Word base;
#line 811 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 811 "browser_info.m"
                *mdb__browser_info__HeadVar__4_4 = base;
#line 811 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_27_27));
#line 811 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_28_28));
#line 811 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__W_15));
#line 811 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_30_30));
#line 811 "browser_info.m"
              }
#line 811 "browser_info.m"
            }
#line 806 "browser_info.m"
            break;
#line 806 "browser_info.m"
          case (MR_Integer) 3:
#line 806 "browser_info.m"
#line 806 "browser_info.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) {
#line 806 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 806 "browser_info.m"
              case (MR_Integer) 0:
#line 812 "browser_info.m"
                {
#line 812 "browser_info.m"
                  MR_Integer mdb__browser_info__L_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 812 "browser_info.m"
                  MR_Integer mdb__browser_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 0)));
#line 812 "browser_info.m"
                  MR_Integer mdb__browser_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 1)));
#line 812 "browser_info.m"
                  MR_Integer mdb__browser_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 2)));
#line 812 "browser_info.m"
                  MR_Integer mdb__browser_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 3)));

#line 812 "browser_info.m"
                  {
#line 812 "browser_info.m"
                    MR_Word base;
#line 812 "browser_info.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 812 "browser_info.m"
                    *mdb__browser_info__HeadVar__4_4 = base;
#line 812 "browser_info.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_31_31));
#line 812 "browser_info.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_32_32));
#line 812 "browser_info.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_33_33));
#line 812 "browser_info.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__L_17));
#line 812 "browser_info.m"
                  }
#line 812 "browser_info.m"
                }
#line 806 "browser_info.m"
                break;
#line 806 "browser_info.m"
              case (MR_Integer) 1:
#line 809 "browser_info.m"
                {
#line 810 "browser_info.m"
                  {
#line 810 "browser_info.m"
                    mercury__require__error_1_p_0((MR_String) "maybe_set_param_2: cannot set format here");
#line 810 "browser_info.m"
                    return;
                  }
#line 809 "browser_info.m"
                }
#line 806 "browser_info.m"
                break;
#line 806 "browser_info.m"
            }
#line 806 "browser_info.m"
            break;
#line 806 "browser_info.m"
        }
#line 806 "browser_info.m"
        break;
#line 806 "browser_info.m"
    }
#line 806 "browser_info.m"
  }
#line 803 "browser_info.m"
}

#line 776 "browser_info.m"
static void MR_CALL 
mdb__browser_info__maybe_set_param_8_p_0(
#line 776 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 776 "browser_info.m"
  MR_Word mdb__browser_info__F_2,
#line 776 "browser_info.m"
  MR_Word mdb__browser_info__Pr_3,
#line 776 "browser_info.m"
  MR_Word mdb__browser_info__V_4,
#line 776 "browser_info.m"
  MR_Word mdb__browser_info__NPr_5,
#line 776 "browser_info.m"
  MR_Word mdb__browser_info__Setting_6,
#line 776 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Params_0_7,
#line 776 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Params_8)
#line 776 "browser_info.m"
{
#line 779 "browser_info.m"
  {
#line 779 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 779 "browser_info.m"
#line 779 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 779 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 779 "browser_info.m"
      case (MR_Integer) 0:
#line 779 "browser_info.m"
        *mdb__browser_info__STATE_VARIABLE_Params_8 = mdb__browser_info__STATE_VARIABLE_Params_0_7;
#line 779 "browser_info.m"
        break;
#line 779 "browser_info.m"
      case (MR_Integer) 1:
#line 780 "browser_info.m"
        {
#line 780 "browser_info.m"
          MR_Word mdb__browser_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 4)));
#line 780 "browser_info.m"
          MR_Word mdb__browser_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 3)));
#line 780 "browser_info.m"
          MR_Word mdb__browser_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 2)));
#line 780 "browser_info.m"
          MR_Word mdb__browser_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 1)));
#line 780 "browser_info.m"
          MR_Word mdb__browser_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 0)));

#line 784 "browser_info.m"
#line 784 "browser_info.m"
          switch (MR_tag((MR_Word) mdb__browser_info__Setting_6)) {
#line 784 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 784 "browser_info.m"
            case (MR_Integer) 0:
#line 784 "browser_info.m"
            case (MR_Integer) 1:
#line 784 "browser_info.m"
            case (MR_Integer) 2:
#line 789 "browser_info.m"
              {
#line 789 "browser_info.m"
                MR_Word mdb__browser_info__FParams_33;
#line 789 "browser_info.m"
                MR_Word mdb__browser_info__PrParams_34;
#line 789 "browser_info.m"
                MR_Word mdb__browser_info__VParams_35;
#line 789 "browser_info.m"
                MR_Word mdb__browser_info__NPrParams_36;

#line 795 "browser_info.m"
                {
#line 795 "browser_info.m"
                  mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__F_2, mdb__browser_info__Setting_6, mdb__browser_info__V_69_69, &mdb__browser_info__FParams_33);
                }
#line 796 "browser_info.m"
                {
#line 796 "browser_info.m"
                  mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__Pr_3, mdb__browser_info__Setting_6, mdb__browser_info__V_68_68, &mdb__browser_info__PrParams_34);
                }
#line 797 "browser_info.m"
                {
#line 797 "browser_info.m"
                  mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__V_4, mdb__browser_info__Setting_6, mdb__browser_info__V_67_67, &mdb__browser_info__VParams_35);
                }
#line 798 "browser_info.m"
                {
#line 798 "browser_info.m"
                  mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__NPr_5, mdb__browser_info__Setting_6, mdb__browser_info__V_66_66, &mdb__browser_info__NPrParams_36);
                }
#line 799 "browser_info.m"
                {
#line 799 "browser_info.m"
                  MR_Word base;
#line 799 "browser_info.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 799 "browser_info.m"
                  *mdb__browser_info__STATE_VARIABLE_Params_8 = base;
#line 799 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_70_70));
#line 799 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__FParams_33));
#line 799 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__PrParams_34));
#line 799 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__VParams_35));
#line 799 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__NPrParams_36));
#line 799 "browser_info.m"
                }
#line 789 "browser_info.m"
              }
#line 784 "browser_info.m"
              break;
#line 784 "browser_info.m"
            case (MR_Integer) 3:
#line 784 "browser_info.m"
#line 784 "browser_info.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__Setting_6, (MR_Integer) 0)))) {
#line 784 "browser_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 784 "browser_info.m"
                case (MR_Integer) 0:
#line 789 "browser_info.m"
                  {
#line 789 "browser_info.m"
                    MR_Word mdb__browser_info__FParams_33;
#line 789 "browser_info.m"
                    MR_Word mdb__browser_info__PrParams_34;
#line 789 "browser_info.m"
                    MR_Word mdb__browser_info__VParams_35;
#line 789 "browser_info.m"
                    MR_Word mdb__browser_info__NPrParams_36;

#line 795 "browser_info.m"
                    {
#line 795 "browser_info.m"
                      mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__F_2, mdb__browser_info__Setting_6, mdb__browser_info__V_69_69, &mdb__browser_info__FParams_33);
                    }
#line 796 "browser_info.m"
                    {
#line 796 "browser_info.m"
                      mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__Pr_3, mdb__browser_info__Setting_6, mdb__browser_info__V_68_68, &mdb__browser_info__PrParams_34);
                    }
#line 797 "browser_info.m"
                    {
#line 797 "browser_info.m"
                      mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__V_4, mdb__browser_info__Setting_6, mdb__browser_info__V_67_67, &mdb__browser_info__VParams_35);
                    }
#line 798 "browser_info.m"
                    {
#line 798 "browser_info.m"
                      mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__NPr_5, mdb__browser_info__Setting_6, mdb__browser_info__V_66_66, &mdb__browser_info__NPrParams_36);
                    }
#line 799 "browser_info.m"
                    {
#line 799 "browser_info.m"
                      MR_Word base;
#line 799 "browser_info.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 799 "browser_info.m"
                      *mdb__browser_info__STATE_VARIABLE_Params_8 = base;
#line 799 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_70_70));
#line 799 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__FParams_33));
#line 799 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__PrParams_34));
#line 799 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__VParams_35));
#line 799 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__NPrParams_36));
#line 799 "browser_info.m"
                    }
#line 789 "browser_info.m"
                  }
#line 784 "browser_info.m"
                  break;
#line 784 "browser_info.m"
                case (MR_Integer) 1:
#line 782 "browser_info.m"
                  {
#line 782 "browser_info.m"
                    MR_Word mdb__browser_info__NewFormat_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__Setting_6, (MR_Integer) 1)));

#line 783 "browser_info.m"
                    {
#line 783 "browser_info.m"
                      MR_Word base;
#line 783 "browser_info.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 783 "browser_info.m"
                      *mdb__browser_info__STATE_VARIABLE_Params_8 = base;
#line 783 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__NewFormat_23));
#line 783 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_69_69));
#line 783 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_68_68));
#line 783 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_67_67));
#line 783 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_66_66));
#line 783 "browser_info.m"
                    }
#line 782 "browser_info.m"
                  }
#line 784 "browser_info.m"
                  break;
#line 784 "browser_info.m"
              }
#line 784 "browser_info.m"
              break;
#line 784 "browser_info.m"
          }
#line 780 "browser_info.m"
        }
#line 779 "browser_info.m"
        break;
#line 779 "browser_info.m"
    }
#line 779 "browser_info.m"
  }
#line 776 "browser_info.m"
}

#line 522 "browser_info.m"
static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_no_0_f_0(void)
#line 522 "browser_info.m"
{
#line 526 "browser_info.m"
  {
#line 526 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 526 "browser_info.m"
    return (MR_Integer) 0;
#line 526 "browser_info.m"
  }
#line 522 "browser_info.m"
}

#line 516 "browser_info.m"
static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_yes_0_f_0(void)
#line 516 "browser_info.m"
{
#line 520 "browser_info.m"
  {
#line 520 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 520 "browser_info.m"
    return (MR_Integer) 1;
#line 520 "browser_info.m"
  }
#line 516 "browser_info.m"
}

#line 498 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0(
#line 498 "browser_info.m"
  MR_String mdb__browser_info__FileName_4,
#line 498 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 498 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 498 "browser_info.m"
{
#line 507 "browser_info.m"
  {
#line 507 "browser_info.m"
    MR_bool mdb__browser_info__succeeded = (strcmp(mdb__browser_info__FileName_4, (MR_String) "") == 0);

#line 507 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 506 "browser_info.m"
      {
#line 193 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 0)));
#line 193 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 1)));
#line 193 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 2)));
#line 193 "browser_info.m"
        MR_Integer mdb__browser_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 3)));
#line 193 "browser_info.m"
        MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 4)));
#line 193 "browser_info.m"
        MR_Word mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 5)));

#line 193 "browser_info.m"
        {
#line 193 "browser_info.m"
          MR_Word base;
#line 193 "browser_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 193 "browser_info.m"
          *mdb__browser_info__STATE_VARIABLE_Browser_7 = base;
#line 193 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_12_12));
#line 193 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_13_13));
#line 193 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_14_14));
#line 193 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_15_15));
#line 193 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_16_16));
#line 193 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "browser_info.m"
        }
#line 506 "browser_info.m"
      }
#line 507 "browser_info.m"
    else
#line 508 "browser_info.m"
      {
#line 508 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11;
#line 193 "browser_info.m"
        MR_Word mdb__browser_info__V_18_18;
#line 193 "browser_info.m"
        MR_Word mdb__browser_info__V_19_19;
#line 193 "browser_info.m"
        MR_Word mdb__browser_info__V_20_20;
#line 193 "browser_info.m"
        MR_Integer mdb__browser_info__V_21_21;
#line 193 "browser_info.m"
        MR_Word mdb__browser_info__V_22_22;
#line 193 "browser_info.m"
        MR_Word mdb__browser_info__V_23_23;

#line 508 "browser_info.m"
        {
#line 508 "browser_info.m"
          mdb__browser_info__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 508 "browser_info.m"
          MR_hl_field(MR_mktag(1), mdb__browser_info__V_11_11, 0) = ((MR_Box) (mdb__browser_info__FileName_4));
#line 508 "browser_info.m"
        }
#line 193 "browser_info.m"
        mdb__browser_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 0)));
#line 193 "browser_info.m"
        mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 1)));
#line 193 "browser_info.m"
        mdb__browser_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 2)));
#line 193 "browser_info.m"
        mdb__browser_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 3)));
#line 193 "browser_info.m"
        mdb__browser_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 4)));
#line 193 "browser_info.m"
        mdb__browser_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 5)));
#line 193 "browser_info.m"
        {
#line 193 "browser_info.m"
          MR_Word base;
#line 193 "browser_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 193 "browser_info.m"
          *mdb__browser_info__STATE_VARIABLE_Browser_7 = base;
#line 193 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_18_18));
#line 193 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_19_19));
#line 193 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_20_20));
#line 193 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_21_21));
#line 193 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_22_22));
#line 193 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_11_11));
#line 193 "browser_info.m"
        }
#line 508 "browser_info.m"
      }
#line 507 "browser_info.m"
  }
#line 498 "browser_info.m"
}

#line 483 "browser_info.m"
static void MR_CALL 
mdb__browser_info__get_xml_tmp_filename_from_mdb_2_p_0(
#line 483 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 483 "browser_info.m"
  MR_String * mdb__browser_info__FileName_4)
#line 483 "browser_info.m"
{
#line 489 "browser_info.m"
  {
#line 489 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 489 "browser_info.m"
    MR_Word mdb__browser_info__MaybeFileName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 5)));
#line 192 "browser_info.m"
    MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 0)));
#line 192 "browser_info.m"
    MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 1)));
#line 192 "browser_info.m"
    MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 2)));
#line 192 "browser_info.m"
    MR_Integer mdb__browser_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 3)));
#line 192 "browser_info.m"
    MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 4)));

#line 494 "browser_info.m"
    if ((mdb__browser_info__MaybeFileName_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "browser_info.m"
      *mdb__browser_info__FileName_4 = (MR_String) "";
#line 494 "browser_info.m"
    else
#line 495 "browser_info.m"
      *mdb__browser_info__FileName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeFileName_5, (MR_Integer) 0)));
#line 489 "browser_info.m"
  }
#line 483 "browser_info.m"
}

#line 470 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0(
#line 470 "browser_info.m"
  MR_String mdb__browser_info__Command_4,
#line 470 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 470 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 470 "browser_info.m"
{
#line 479 "browser_info.m"
  {
#line 479 "browser_info.m"
    MR_bool mdb__browser_info__succeeded = (strcmp(mdb__browser_info__Command_4, (MR_String) "") == 0);

#line 479 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 478 "browser_info.m"
      {
#line 189 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 0)));
#line 189 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 1)));
#line 189 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 2)));
#line 189 "browser_info.m"
        MR_Integer mdb__browser_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 3)));
#line 189 "browser_info.m"
        MR_Word mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 5)));
#line 189 "browser_info.m"
        MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 4)));

#line 189 "browser_info.m"
        {
#line 189 "browser_info.m"
          MR_Word base;
#line 189 "browser_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 189 "browser_info.m"
          *mdb__browser_info__STATE_VARIABLE_Browser_7 = base;
#line 189 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_12_12));
#line 189 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_13_13));
#line 189 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_14_14));
#line 189 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_15_15));
#line 189 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 189 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_17_17));
#line 189 "browser_info.m"
        }
#line 478 "browser_info.m"
      }
#line 479 "browser_info.m"
    else
#line 480 "browser_info.m"
      {
#line 480 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11;
#line 189 "browser_info.m"
        MR_Word mdb__browser_info__V_18_18;
#line 189 "browser_info.m"
        MR_Word mdb__browser_info__V_19_19;
#line 189 "browser_info.m"
        MR_Word mdb__browser_info__V_20_20;
#line 189 "browser_info.m"
        MR_Integer mdb__browser_info__V_21_21;
#line 189 "browser_info.m"
        MR_Word mdb__browser_info__V_23_23;
#line 189 "browser_info.m"
        MR_Word mdb__browser_info__V_22_22;

#line 480 "browser_info.m"
        {
#line 480 "browser_info.m"
          mdb__browser_info__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 480 "browser_info.m"
          MR_hl_field(MR_mktag(1), mdb__browser_info__V_11_11, 0) = ((MR_Box) (mdb__browser_info__Command_4));
#line 480 "browser_info.m"
        }
#line 189 "browser_info.m"
        mdb__browser_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 0)));
#line 189 "browser_info.m"
        mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 1)));
#line 189 "browser_info.m"
        mdb__browser_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 2)));
#line 189 "browser_info.m"
        mdb__browser_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 3)));
#line 189 "browser_info.m"
        mdb__browser_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 4)));
#line 189 "browser_info.m"
        mdb__browser_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 5)));
#line 189 "browser_info.m"
        {
#line 189 "browser_info.m"
          MR_Word base;
#line 189 "browser_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 189 "browser_info.m"
          *mdb__browser_info__STATE_VARIABLE_Browser_7 = base;
#line 189 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_18_18));
#line 189 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_19_19));
#line 189 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_20_20));
#line 189 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_21_21));
#line 189 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_11_11));
#line 189 "browser_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_23_23));
#line 189 "browser_info.m"
        }
#line 480 "browser_info.m"
      }
#line 479 "browser_info.m"
  }
#line 470 "browser_info.m"
}

#line 455 "browser_info.m"
static void MR_CALL 
mdb__browser_info__get_xml_browser_cmd_from_mdb_2_p_0(
#line 455 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 455 "browser_info.m"
  MR_String * mdb__browser_info__Command_4)
#line 455 "browser_info.m"
{
#line 461 "browser_info.m"
  {
#line 461 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 461 "browser_info.m"
    MR_Word mdb__browser_info__MaybeCommand_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 4)));
#line 188 "browser_info.m"
    MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 0)));
#line 188 "browser_info.m"
    MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 1)));
#line 188 "browser_info.m"
    MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 2)));
#line 188 "browser_info.m"
    MR_Integer mdb__browser_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 3)));
#line 188 "browser_info.m"
    MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 5)));

#line 466 "browser_info.m"
    if ((mdb__browser_info__MaybeCommand_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "browser_info.m"
      *mdb__browser_info__Command_4 = (MR_String) "";
#line 466 "browser_info.m"
    else
#line 467 "browser_info.m"
      *mdb__browser_info__Command_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeCommand_5, (MR_Integer) 0)));
#line 461 "browser_info.m"
  }
#line 455 "browser_info.m"
}

#line 430 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_format_from_mdb_6_p_0(
#line 430 "browser_info.m"
  MR_Word mdb__browser_info__P_7,
#line 430 "browser_info.m"
  MR_Word mdb__browser_info__B_8,
#line 430 "browser_info.m"
  MR_Word mdb__browser_info__A_9,
#line 430 "browser_info.m"
  MR_Word mdb__browser_info__Format_10,
#line 430 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_12,
#line 430 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_13)
#line 430 "browser_info.m"
{
#line 436 "browser_info.m"
  {
#line 436 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 436 "browser_info.m"
    MR_Word mdb__browser_info__V_19_19;

#line 438 "browser_info.m"
    {
#line 438 "browser_info.m"
      mdb__browser_info__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "browser_info.m"
      MR_hl_field(MR_mktag(3), mdb__browser_info__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 438 "browser_info.m"
      MR_hl_field(MR_mktag(3), mdb__browser_info__V_19_19, 1) = ((MR_Box) (mdb__browser_info__Format_10));
#line 438 "browser_info.m"
    }
#line 438 "browser_info.m"
    {
#line 438 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_7, mdb__browser_info__B_8, mdb__browser_info__A_9, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, mdb__browser_info__V_19_19, mdb__browser_info__STATE_VARIABLE_Browser_0_12, mdb__browser_info__STATE_VARIABLE_Browser_13);
#line 438 "browser_info.m"
      return;
    }
#line 436 "browser_info.m"
  }
#line 430 "browser_info.m"
}

#line 397 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_lines_from_mdb_10_p_0(
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 397 "browser_info.m"
  MR_Integer mdb__browser_info__Lines_18,
#line 397 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 397 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 397 "browser_info.m"
{
#line 404 "browser_info.m"
  {
#line 404 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 404 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;

#line 405 "browser_info.m"
    {
#line 405 "browser_info.m"
      mdb__browser_info__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "browser_info.m"
      MR_hl_field(MR_mktag(3), mdb__browser_info__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 405 "browser_info.m"
      MR_hl_field(MR_mktag(3), mdb__browser_info__V_23_23, 1) = ((MR_Box) (mdb__browser_info__Lines_18));
#line 405 "browser_info.m"
    }
#line 405 "browser_info.m"
    {
#line 405 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_11, mdb__browser_info__B_12, mdb__browser_info__A_13, mdb__browser_info__F_14, mdb__browser_info__Pr_15, mdb__browser_info__V_16, mdb__browser_info__NPr_17, mdb__browser_info__V_23_23, mdb__browser_info__STATE_VARIABLE_Browser_0_20, mdb__browser_info__STATE_VARIABLE_Browser_21);
#line 405 "browser_info.m"
      return;
    }
#line 404 "browser_info.m"
  }
#line 397 "browser_info.m"
}

#line 386 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_width_from_mdb_10_p_0(
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 386 "browser_info.m"
  MR_Integer mdb__browser_info__Width_18,
#line 386 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 386 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 386 "browser_info.m"
{
#line 393 "browser_info.m"
  {
#line 393 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 393 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;

#line 394 "browser_info.m"
    {
#line 394 "browser_info.m"
      mdb__browser_info__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 394 "browser_info.m"
      MR_hl_field(MR_mktag(2), mdb__browser_info__V_23_23, 0) = ((MR_Box) (mdb__browser_info__Width_18));
#line 394 "browser_info.m"
    }
#line 394 "browser_info.m"
    {
#line 394 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_11, mdb__browser_info__B_12, mdb__browser_info__A_13, mdb__browser_info__F_14, mdb__browser_info__Pr_15, mdb__browser_info__V_16, mdb__browser_info__NPr_17, mdb__browser_info__V_23_23, mdb__browser_info__STATE_VARIABLE_Browser_0_20, mdb__browser_info__STATE_VARIABLE_Browser_21);
#line 394 "browser_info.m"
      return;
    }
#line 393 "browser_info.m"
  }
#line 386 "browser_info.m"
}

#line 375 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_size_from_mdb_10_p_0(
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__NPr_16,
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__V_17,
#line 375 "browser_info.m"
  MR_Integer mdb__browser_info__Size_18,
#line 375 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 375 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 375 "browser_info.m"
{
#line 382 "browser_info.m"
  {
#line 382 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 382 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;

#line 383 "browser_info.m"
    {
#line 383 "browser_info.m"
      mdb__browser_info__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 383 "browser_info.m"
      MR_hl_field(MR_mktag(1), mdb__browser_info__V_23_23, 0) = ((MR_Box) (mdb__browser_info__Size_18));
#line 383 "browser_info.m"
    }
#line 383 "browser_info.m"
    {
#line 383 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_11, mdb__browser_info__B_12, mdb__browser_info__A_13, mdb__browser_info__F_14, mdb__browser_info__Pr_15, mdb__browser_info__V_17, mdb__browser_info__NPr_16, mdb__browser_info__V_23_23, mdb__browser_info__STATE_VARIABLE_Browser_0_20, mdb__browser_info__STATE_VARIABLE_Browser_21);
#line 383 "browser_info.m"
      return;
    }
#line 382 "browser_info.m"
  }
#line 375 "browser_info.m"
}

#line 364 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_depth_from_mdb_10_p_0(
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 364 "browser_info.m"
  MR_Integer mdb__browser_info__Depth_18,
#line 364 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 364 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 364 "browser_info.m"
{
#line 371 "browser_info.m"
  {
#line 371 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 371 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;

#line 372 "browser_info.m"
    {
#line 372 "browser_info.m"
      mdb__browser_info__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 372 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__V_23_23, 0) = ((MR_Box) (mdb__browser_info__Depth_18));
#line 372 "browser_info.m"
    }
#line 372 "browser_info.m"
    {
#line 372 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_11, mdb__browser_info__B_12, mdb__browser_info__A_13, mdb__browser_info__F_14, mdb__browser_info__Pr_15, mdb__browser_info__V_16, mdb__browser_info__NPr_17, mdb__browser_info__V_23_23, mdb__browser_info__STATE_VARIABLE_Browser_0_20, mdb__browser_info__STATE_VARIABLE_Browser_21);
#line 372 "browser_info.m"
      return;
    }
#line 371 "browser_info.m"
  }
#line 364 "browser_info.m"
}

#line 339 "browser_info.m"
void MR_CALL 
mdb__browser_info__functor_browser_term_cc_5_p_0(
#line 339 "browser_info.m"
  MR_Word mdb__browser_info__BrowserDb_6,
#line 339 "browser_info.m"
  MR_Word mdb__browser_info__BrowserTerm_7,
#line 339 "browser_info.m"
  MR_String * mdb__browser_info__Functor_8,
#line 339 "browser_info.m"
  MR_Integer * mdb__browser_info__Arity_9,
#line 339 "browser_info.m"
  MR_Word * mdb__browser_info__IsFunc_10)
#line 339 "browser_info.m"
{
#line 1231 "browser_info.m"
  {
#line 1231 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1231 "browser_info.m"
    if (((MR_tag((MR_Word) mdb__browser_info__BrowserTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 1231 "browser_info.m"
      {
#line 1231 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_17_17;
#line 1231 "browser_info.m"
        MR_Word mdb__browser_info__Univ_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__BrowserTerm_7, (MR_Integer) 0)));
#line 1231 "browser_info.m"
        MR_Box mdb__browser_info__V_15_15;
#line 1231 "browser_info.m"
        MR_Word mdb__browser_info__Univ_24;
#line 1254 "browser_info.m"
        MR_Word mdb__browser_info__InputStream_22;
#line 1250 "browser_info.m"
        MR_Box mdb__browser_info__conv0_InputStream_22;

#line 1250 "browser_info.m"
        {
#line 1250 "browser_info.m"
          mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_input_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv0_InputStream_22);
        }
#line 1250 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1250 "browser_info.m"
          {
#line 1250 "browser_info.m"
            mdb__browser_info__InputStream_22 = ((MR_Word) mdb__browser_info__conv0_InputStream_22);
#line 1250 "browser_info.m"
            mdb__browser_info__succeeded = MR_TRUE;
#line 1250 "browser_info.m"
          }
#line 1254 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1252 "browser_info.m"
          {
#line 1252 "browser_info.m"
            MR_Word mdb__browser_info__InputStreamInfo_23;
#line 1252 "browser_info.m"
            MR_Word mdb__browser_info__V_31_31 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1251 "browser_info.m"
            {
#line 1251 "browser_info.m"
              mdb__browser_info__InputStreamInfo_23 = mercury__io__input_stream_info_2_f_0(mdb__browser_info__V_31_31, mdb__browser_info__InputStream_22);
            }
#line 1253 "browser_info.m"
            {
#line 1253 "browser_info.m"
              mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__InputStreamInfo_23)), &mdb__browser_info__Univ_24);
            }
#line 1252 "browser_info.m"
          }
#line 1254 "browser_info.m"
        else
#line 1258 "browser_info.m"
          {
#line 1258 "browser_info.m"
            MR_Word mdb__browser_info__OutputStream_25;
#line 1254 "browser_info.m"
            MR_Box mdb__browser_info__conv1_OutputStream_25;

#line 1254 "browser_info.m"
            {
#line 1254 "browser_info.m"
              mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_output_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv1_OutputStream_25);
            }
#line 1254 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1254 "browser_info.m"
              {
#line 1254 "browser_info.m"
                mdb__browser_info__OutputStream_25 = ((MR_Word) mdb__browser_info__conv1_OutputStream_25);
#line 1254 "browser_info.m"
                mdb__browser_info__succeeded = MR_TRUE;
#line 1254 "browser_info.m"
              }
#line 1258 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1256 "browser_info.m"
              {
#line 1256 "browser_info.m"
                MR_Word mdb__browser_info__OutputStreamInfo_26;
#line 1256 "browser_info.m"
                MR_Word mdb__browser_info__V_32_32 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1255 "browser_info.m"
                {
#line 1255 "browser_info.m"
                  mdb__browser_info__OutputStreamInfo_26 = mercury__io__output_stream_info_2_f_0(mdb__browser_info__V_32_32, mdb__browser_info__OutputStream_25);
                }
#line 1257 "browser_info.m"
                {
#line 1257 "browser_info.m"
                  mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__OutputStreamInfo_26)), &mdb__browser_info__Univ_24);
                }
#line 1256 "browser_info.m"
              }
#line 1258 "browser_info.m"
            else
#line 1262 "browser_info.m"
              {
#line 1262 "browser_info.m"
                MR_Word mdb__browser_info__BinaryInputStream_27;
#line 1258 "browser_info.m"
                MR_Box mdb__browser_info__conv2_BinaryInputStream_27;

#line 1258 "browser_info.m"
                {
#line 1258 "browser_info.m"
                  mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_input_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv2_BinaryInputStream_27);
                }
#line 1258 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1258 "browser_info.m"
                  {
#line 1258 "browser_info.m"
                    mdb__browser_info__BinaryInputStream_27 = ((MR_Word) mdb__browser_info__conv2_BinaryInputStream_27);
#line 1258 "browser_info.m"
                    mdb__browser_info__succeeded = MR_TRUE;
#line 1258 "browser_info.m"
                  }
#line 1262 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1260 "browser_info.m"
                  {
#line 1260 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryInputStreamInfo_28;
#line 1260 "browser_info.m"
                    MR_Word mdb__browser_info__V_33_33 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1259 "browser_info.m"
                    {
#line 1259 "browser_info.m"
                      mdb__browser_info__BinaryInputStreamInfo_28 = mercury__io__binary_input_stream_info_2_f_0(mdb__browser_info__V_33_33, mdb__browser_info__BinaryInputStream_27);
                    }
#line 1261 "browser_info.m"
                    {
#line 1261 "browser_info.m"
                      mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryInputStreamInfo_28)), &mdb__browser_info__Univ_24);
                    }
#line 1260 "browser_info.m"
                  }
#line 1262 "browser_info.m"
                else
#line 1266 "browser_info.m"
                  {
#line 1266 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryOutputStream_29;
#line 1262 "browser_info.m"
                    MR_Box mdb__browser_info__conv3_BinaryOutputStream_29;

#line 1262 "browser_info.m"
                    {
#line 1262 "browser_info.m"
                      mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_output_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv3_BinaryOutputStream_29);
                    }
#line 1262 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1262 "browser_info.m"
                      {
#line 1262 "browser_info.m"
                        mdb__browser_info__BinaryOutputStream_29 = ((MR_Word) mdb__browser_info__conv3_BinaryOutputStream_29);
#line 1262 "browser_info.m"
                        mdb__browser_info__succeeded = MR_TRUE;
#line 1262 "browser_info.m"
                      }
#line 1266 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1264 "browser_info.m"
                      {
#line 1264 "browser_info.m"
                        MR_Word mdb__browser_info__BinaryOutputStreamInfo_30;
#line 1264 "browser_info.m"
                        MR_Word mdb__browser_info__V_34_34 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1263 "browser_info.m"
                        {
#line 1263 "browser_info.m"
                          mdb__browser_info__BinaryOutputStreamInfo_30 = mercury__io__binary_output_stream_info_2_f_0(mdb__browser_info__V_34_34, mdb__browser_info__BinaryOutputStream_29);
                        }
#line 1265 "browser_info.m"
                        {
#line 1265 "browser_info.m"
                          mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryOutputStreamInfo_30)), &mdb__browser_info__Univ_24);
                        }
#line 1264 "browser_info.m"
                      }
#line 1266 "browser_info.m"
                    else
#line 1267 "browser_info.m"
                      mdb__browser_info__Univ_24 = mdb__browser_info__Univ_11;
#line 1266 "browser_info.m"
                  }
#line 1262 "browser_info.m"
              }
#line 1258 "browser_info.m"
          }
#line 1269 "browser_info.m"
        {
#line 1269 "browser_info.m"
          mdb__browser_info__V_15_15 = mercury__univ__univ_value_1_f_0(&mdb__browser_info__TypeInfo_17_17, mdb__browser_info__Univ_24);
        }
#line 1232 "browser_info.m"
        {
#line 1232 "browser_info.m"
          mercury__deconstruct__functor_4_p_2(mdb__browser_info__TypeInfo_17_17, mdb__browser_info__V_15_15, (MR_Integer) 2, mdb__browser_info__Functor_8, mdb__browser_info__Arity_9);
        }
#line 1234 "browser_info.m"
        *mdb__browser_info__IsFunc_10 = (MR_Integer) 0;
#line 1231 "browser_info.m"
      }
#line 1231 "browser_info.m"
    else
#line 1236 "browser_info.m"
      {
#line 1236 "browser_info.m"
        MR_Word mdb__browser_info__Args_12;
#line 1236 "browser_info.m"
        MR_Word mdb__browser_info__MaybeReturn_13;

#line 1236 "browser_info.m"
        *mdb__browser_info__Functor_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 0)));
#line 1236 "browser_info.m"
        mdb__browser_info__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 1)));
#line 1236 "browser_info.m"
        mdb__browser_info__MaybeReturn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 2)));
#line 1237 "browser_info.m"
        {
#line 1237 "browser_info.m"
          mercury__list__length_2_p_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browser_info__Args_12, mdb__browser_info__Arity_9);
        }
#line 1241 "browser_info.m"
        if ((mdb__browser_info__MaybeReturn_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1243 "browser_info.m"
          *mdb__browser_info__IsFunc_10 = (MR_Integer) 0;
#line 1241 "browser_info.m"
        else
#line 1240 "browser_info.m"
          *mdb__browser_info__IsFunc_10 = (MR_Integer) 1;
#line 1236 "browser_info.m"
      }
#line 1231 "browser_info.m"
  }
#line 339 "browser_info.m"
}

#line 335 "browser_info.m"
void MR_CALL 
mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(
#line 335 "browser_info.m"
  MR_Word mdb__browser_info__BrowserDb_6,
#line 335 "browser_info.m"
  MR_Word mdb__browser_info__BrowserTerm_7,
#line 335 "browser_info.m"
  MR_Integer mdb__browser_info__Limit_8,
#line 335 "browser_info.m"
  MR_Word * mdb__browser_info__MaybeFunctorArityArgs_9,
#line 335 "browser_info.m"
  MR_Word * mdb__browser_info__MaybeReturn_10)
#line 335 "browser_info.m"
{
#line 1219 "browser_info.m"
  {
#line 1219 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1219 "browser_info.m"
    if (((MR_tag((MR_Word) mdb__browser_info__BrowserTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 1219 "browser_info.m"
      {
#line 1219 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_17_17;
#line 1219 "browser_info.m"
        MR_Word mdb__browser_info__Univ_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__BrowserTerm_7, (MR_Integer) 0)));
#line 1219 "browser_info.m"
        MR_Box mdb__browser_info__V_16_16;
#line 1219 "browser_info.m"
        MR_Word mdb__browser_info__Univ_24;
#line 1254 "browser_info.m"
        MR_Word mdb__browser_info__InputStream_22;
#line 1250 "browser_info.m"
        MR_Box mdb__browser_info__conv0_InputStream_22;

#line 1250 "browser_info.m"
        {
#line 1250 "browser_info.m"
          mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_input_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv0_InputStream_22);
        }
#line 1250 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1250 "browser_info.m"
          {
#line 1250 "browser_info.m"
            mdb__browser_info__InputStream_22 = ((MR_Word) mdb__browser_info__conv0_InputStream_22);
#line 1250 "browser_info.m"
            mdb__browser_info__succeeded = MR_TRUE;
#line 1250 "browser_info.m"
          }
#line 1254 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1252 "browser_info.m"
          {
#line 1252 "browser_info.m"
            MR_Word mdb__browser_info__InputStreamInfo_23;
#line 1252 "browser_info.m"
            MR_Word mdb__browser_info__V_31_31 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1251 "browser_info.m"
            {
#line 1251 "browser_info.m"
              mdb__browser_info__InputStreamInfo_23 = mercury__io__input_stream_info_2_f_0(mdb__browser_info__V_31_31, mdb__browser_info__InputStream_22);
            }
#line 1253 "browser_info.m"
            {
#line 1253 "browser_info.m"
              mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__InputStreamInfo_23)), &mdb__browser_info__Univ_24);
            }
#line 1252 "browser_info.m"
          }
#line 1254 "browser_info.m"
        else
#line 1258 "browser_info.m"
          {
#line 1258 "browser_info.m"
            MR_Word mdb__browser_info__OutputStream_25;
#line 1254 "browser_info.m"
            MR_Box mdb__browser_info__conv1_OutputStream_25;

#line 1254 "browser_info.m"
            {
#line 1254 "browser_info.m"
              mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_output_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv1_OutputStream_25);
            }
#line 1254 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1254 "browser_info.m"
              {
#line 1254 "browser_info.m"
                mdb__browser_info__OutputStream_25 = ((MR_Word) mdb__browser_info__conv1_OutputStream_25);
#line 1254 "browser_info.m"
                mdb__browser_info__succeeded = MR_TRUE;
#line 1254 "browser_info.m"
              }
#line 1258 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1256 "browser_info.m"
              {
#line 1256 "browser_info.m"
                MR_Word mdb__browser_info__OutputStreamInfo_26;
#line 1256 "browser_info.m"
                MR_Word mdb__browser_info__V_32_32 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1255 "browser_info.m"
                {
#line 1255 "browser_info.m"
                  mdb__browser_info__OutputStreamInfo_26 = mercury__io__output_stream_info_2_f_0(mdb__browser_info__V_32_32, mdb__browser_info__OutputStream_25);
                }
#line 1257 "browser_info.m"
                {
#line 1257 "browser_info.m"
                  mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__OutputStreamInfo_26)), &mdb__browser_info__Univ_24);
                }
#line 1256 "browser_info.m"
              }
#line 1258 "browser_info.m"
            else
#line 1262 "browser_info.m"
              {
#line 1262 "browser_info.m"
                MR_Word mdb__browser_info__BinaryInputStream_27;
#line 1258 "browser_info.m"
                MR_Box mdb__browser_info__conv2_BinaryInputStream_27;

#line 1258 "browser_info.m"
                {
#line 1258 "browser_info.m"
                  mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_input_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv2_BinaryInputStream_27);
                }
#line 1258 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1258 "browser_info.m"
                  {
#line 1258 "browser_info.m"
                    mdb__browser_info__BinaryInputStream_27 = ((MR_Word) mdb__browser_info__conv2_BinaryInputStream_27);
#line 1258 "browser_info.m"
                    mdb__browser_info__succeeded = MR_TRUE;
#line 1258 "browser_info.m"
                  }
#line 1262 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1260 "browser_info.m"
                  {
#line 1260 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryInputStreamInfo_28;
#line 1260 "browser_info.m"
                    MR_Word mdb__browser_info__V_33_33 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1259 "browser_info.m"
                    {
#line 1259 "browser_info.m"
                      mdb__browser_info__BinaryInputStreamInfo_28 = mercury__io__binary_input_stream_info_2_f_0(mdb__browser_info__V_33_33, mdb__browser_info__BinaryInputStream_27);
                    }
#line 1261 "browser_info.m"
                    {
#line 1261 "browser_info.m"
                      mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryInputStreamInfo_28)), &mdb__browser_info__Univ_24);
                    }
#line 1260 "browser_info.m"
                  }
#line 1262 "browser_info.m"
                else
#line 1266 "browser_info.m"
                  {
#line 1266 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryOutputStream_29;
#line 1262 "browser_info.m"
                    MR_Box mdb__browser_info__conv3_BinaryOutputStream_29;

#line 1262 "browser_info.m"
                    {
#line 1262 "browser_info.m"
                      mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_output_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv3_BinaryOutputStream_29);
                    }
#line 1262 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1262 "browser_info.m"
                      {
#line 1262 "browser_info.m"
                        mdb__browser_info__BinaryOutputStream_29 = ((MR_Word) mdb__browser_info__conv3_BinaryOutputStream_29);
#line 1262 "browser_info.m"
                        mdb__browser_info__succeeded = MR_TRUE;
#line 1262 "browser_info.m"
                      }
#line 1266 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1264 "browser_info.m"
                      {
#line 1264 "browser_info.m"
                        MR_Word mdb__browser_info__BinaryOutputStreamInfo_30;
#line 1264 "browser_info.m"
                        MR_Word mdb__browser_info__V_34_34 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1263 "browser_info.m"
                        {
#line 1263 "browser_info.m"
                          mdb__browser_info__BinaryOutputStreamInfo_30 = mercury__io__binary_output_stream_info_2_f_0(mdb__browser_info__V_34_34, mdb__browser_info__BinaryOutputStream_29);
                        }
#line 1265 "browser_info.m"
                        {
#line 1265 "browser_info.m"
                          mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryOutputStreamInfo_30)), &mdb__browser_info__Univ_24);
                        }
#line 1264 "browser_info.m"
                      }
#line 1266 "browser_info.m"
                    else
#line 1267 "browser_info.m"
                      mdb__browser_info__Univ_24 = mdb__browser_info__Univ_11;
#line 1266 "browser_info.m"
                  }
#line 1262 "browser_info.m"
              }
#line 1258 "browser_info.m"
          }
#line 1269 "browser_info.m"
        {
#line 1269 "browser_info.m"
          mdb__browser_info__V_16_16 = mercury__univ__univ_value_1_f_0(&mdb__browser_info__TypeInfo_17_17, mdb__browser_info__Univ_24);
        }
#line 1220 "browser_info.m"
        {
#line 1220 "browser_info.m"
          mercury__deconstruct__limited_deconstruct_cc_3_p_0(mdb__browser_info__TypeInfo_17_17, mdb__browser_info__V_16_16, mdb__browser_info__Limit_8, mdb__browser_info__MaybeFunctorArityArgs_9);
        }
#line 1222 "browser_info.m"
        *mdb__browser_info__MaybeReturn_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1219 "browser_info.m"
      }
#line 1219 "browser_info.m"
    else
#line 1224 "browser_info.m"
      {
#line 1224 "browser_info.m"
        MR_String mdb__browser_info__Functor_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 0)));
#line 1224 "browser_info.m"
        MR_Word mdb__browser_info__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 1)));
#line 1224 "browser_info.m"
        MR_Integer mdb__browser_info__Arity_14;
#line 1224 "browser_info.m"
        MR_Tuple mdb__browser_info__V_15_15;

#line 1224 "browser_info.m"
        *mdb__browser_info__MaybeReturn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 2)));
#line 1225 "browser_info.m"
        {
#line 1225 "browser_info.m"
          mercury__list__length_2_p_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browser_info__Args_13, &mdb__browser_info__Arity_14);
        }
#line 1226 "browser_info.m"
        {
#line 1226 "browser_info.m"
          mdb__browser_info__V_15_15 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "browser_info.m"
          MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, 0) = ((MR_Box) (mdb__browser_info__Functor_12));
#line 1226 "browser_info.m"
          MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, 1) = ((MR_Box) (mdb__browser_info__Arity_14));
#line 1226 "browser_info.m"
          MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, 2) = ((MR_Box) (mdb__browser_info__Args_13));
#line 1226 "browser_info.m"
        }
#line 1226 "browser_info.m"
        {
#line 1226 "browser_info.m"
          MR_Word base;
#line 1226 "browser_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1226 "browser_info.m"
          *mdb__browser_info__MaybeFunctorArityArgs_9 = base;
#line 1226 "browser_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browser_info__V_15_15));
#line 1226 "browser_info.m"
        }
#line 1224 "browser_info.m"
      }
#line 1219 "browser_info.m"
  }
#line 335 "browser_info.m"
}

#line 332 "browser_info.m"
void MR_CALL 
mdb__browser_info__deconstruct_browser_term_cc_6_p_0(
#line 332 "browser_info.m"
  MR_Word mdb__browser_info__BrowserDb_7,
#line 332 "browser_info.m"
  MR_Word mdb__browser_info__BrowserTerm_8,
#line 332 "browser_info.m"
  MR_String * mdb__browser_info__Functor_9,
#line 332 "browser_info.m"
  MR_Integer * mdb__browser_info__Arity_10,
#line 332 "browser_info.m"
  MR_Word * mdb__browser_info__Args_11,
#line 332 "browser_info.m"
  MR_Word * mdb__browser_info__MaybeReturn_12)
#line 332 "browser_info.m"
{
#line 1207 "browser_info.m"
  {
#line 1207 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1207 "browser_info.m"
    if (((MR_tag((MR_Word) mdb__browser_info__BrowserTerm_8)) == (MR_mktag((MR_Integer) 0))))
#line 1207 "browser_info.m"
      {
#line 1207 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_16_16;
#line 1207 "browser_info.m"
        MR_Word mdb__browser_info__Univ_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__BrowserTerm_8, (MR_Integer) 0)));
#line 1207 "browser_info.m"
        MR_Box mdb__browser_info__V_14_14;
#line 1207 "browser_info.m"
        MR_Word mdb__browser_info__Univ_23;
#line 1254 "browser_info.m"
        MR_Word mdb__browser_info__InputStream_21;
#line 1250 "browser_info.m"
        MR_Box mdb__browser_info__conv0_InputStream_21;

#line 1250 "browser_info.m"
        {
#line 1250 "browser_info.m"
          mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_input_stream_0, mdb__browser_info__Univ_13, &mdb__browser_info__conv0_InputStream_21);
        }
#line 1250 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1250 "browser_info.m"
          {
#line 1250 "browser_info.m"
            mdb__browser_info__InputStream_21 = ((MR_Word) mdb__browser_info__conv0_InputStream_21);
#line 1250 "browser_info.m"
            mdb__browser_info__succeeded = MR_TRUE;
#line 1250 "browser_info.m"
          }
#line 1254 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1252 "browser_info.m"
          {
#line 1252 "browser_info.m"
            MR_Word mdb__browser_info__InputStreamInfo_22;
#line 1252 "browser_info.m"
            MR_Word mdb__browser_info__V_30_30 = (MR_Word) mdb__browser_info__BrowserDb_7;

#line 1251 "browser_info.m"
            {
#line 1251 "browser_info.m"
              mdb__browser_info__InputStreamInfo_22 = mercury__io__input_stream_info_2_f_0(mdb__browser_info__V_30_30, mdb__browser_info__InputStream_21);
            }
#line 1253 "browser_info.m"
            {
#line 1253 "browser_info.m"
              mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__InputStreamInfo_22)), &mdb__browser_info__Univ_23);
            }
#line 1252 "browser_info.m"
          }
#line 1254 "browser_info.m"
        else
#line 1258 "browser_info.m"
          {
#line 1258 "browser_info.m"
            MR_Word mdb__browser_info__OutputStream_24;
#line 1254 "browser_info.m"
            MR_Box mdb__browser_info__conv1_OutputStream_24;

#line 1254 "browser_info.m"
            {
#line 1254 "browser_info.m"
              mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_output_stream_0, mdb__browser_info__Univ_13, &mdb__browser_info__conv1_OutputStream_24);
            }
#line 1254 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1254 "browser_info.m"
              {
#line 1254 "browser_info.m"
                mdb__browser_info__OutputStream_24 = ((MR_Word) mdb__browser_info__conv1_OutputStream_24);
#line 1254 "browser_info.m"
                mdb__browser_info__succeeded = MR_TRUE;
#line 1254 "browser_info.m"
              }
#line 1258 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1256 "browser_info.m"
              {
#line 1256 "browser_info.m"
                MR_Word mdb__browser_info__OutputStreamInfo_25;
#line 1256 "browser_info.m"
                MR_Word mdb__browser_info__V_31_31 = (MR_Word) mdb__browser_info__BrowserDb_7;

#line 1255 "browser_info.m"
                {
#line 1255 "browser_info.m"
                  mdb__browser_info__OutputStreamInfo_25 = mercury__io__output_stream_info_2_f_0(mdb__browser_info__V_31_31, mdb__browser_info__OutputStream_24);
                }
#line 1257 "browser_info.m"
                {
#line 1257 "browser_info.m"
                  mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__OutputStreamInfo_25)), &mdb__browser_info__Univ_23);
                }
#line 1256 "browser_info.m"
              }
#line 1258 "browser_info.m"
            else
#line 1262 "browser_info.m"
              {
#line 1262 "browser_info.m"
                MR_Word mdb__browser_info__BinaryInputStream_26;
#line 1258 "browser_info.m"
                MR_Box mdb__browser_info__conv2_BinaryInputStream_26;

#line 1258 "browser_info.m"
                {
#line 1258 "browser_info.m"
                  mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_input_stream_0, mdb__browser_info__Univ_13, &mdb__browser_info__conv2_BinaryInputStream_26);
                }
#line 1258 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1258 "browser_info.m"
                  {
#line 1258 "browser_info.m"
                    mdb__browser_info__BinaryInputStream_26 = ((MR_Word) mdb__browser_info__conv2_BinaryInputStream_26);
#line 1258 "browser_info.m"
                    mdb__browser_info__succeeded = MR_TRUE;
#line 1258 "browser_info.m"
                  }
#line 1262 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1260 "browser_info.m"
                  {
#line 1260 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryInputStreamInfo_27;
#line 1260 "browser_info.m"
                    MR_Word mdb__browser_info__V_32_32 = (MR_Word) mdb__browser_info__BrowserDb_7;

#line 1259 "browser_info.m"
                    {
#line 1259 "browser_info.m"
                      mdb__browser_info__BinaryInputStreamInfo_27 = mercury__io__binary_input_stream_info_2_f_0(mdb__browser_info__V_32_32, mdb__browser_info__BinaryInputStream_26);
                    }
#line 1261 "browser_info.m"
                    {
#line 1261 "browser_info.m"
                      mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryInputStreamInfo_27)), &mdb__browser_info__Univ_23);
                    }
#line 1260 "browser_info.m"
                  }
#line 1262 "browser_info.m"
                else
#line 1266 "browser_info.m"
                  {
#line 1266 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryOutputStream_28;
#line 1262 "browser_info.m"
                    MR_Box mdb__browser_info__conv3_BinaryOutputStream_28;

#line 1262 "browser_info.m"
                    {
#line 1262 "browser_info.m"
                      mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_output_stream_0, mdb__browser_info__Univ_13, &mdb__browser_info__conv3_BinaryOutputStream_28);
                    }
#line 1262 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1262 "browser_info.m"
                      {
#line 1262 "browser_info.m"
                        mdb__browser_info__BinaryOutputStream_28 = ((MR_Word) mdb__browser_info__conv3_BinaryOutputStream_28);
#line 1262 "browser_info.m"
                        mdb__browser_info__succeeded = MR_TRUE;
#line 1262 "browser_info.m"
                      }
#line 1266 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1264 "browser_info.m"
                      {
#line 1264 "browser_info.m"
                        MR_Word mdb__browser_info__BinaryOutputStreamInfo_29;
#line 1264 "browser_info.m"
                        MR_Word mdb__browser_info__V_33_33 = (MR_Word) mdb__browser_info__BrowserDb_7;

#line 1263 "browser_info.m"
                        {
#line 1263 "browser_info.m"
                          mdb__browser_info__BinaryOutputStreamInfo_29 = mercury__io__binary_output_stream_info_2_f_0(mdb__browser_info__V_33_33, mdb__browser_info__BinaryOutputStream_28);
                        }
#line 1265 "browser_info.m"
                        {
#line 1265 "browser_info.m"
                          mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryOutputStreamInfo_29)), &mdb__browser_info__Univ_23);
                        }
#line 1264 "browser_info.m"
                      }
#line 1266 "browser_info.m"
                    else
#line 1267 "browser_info.m"
                      mdb__browser_info__Univ_23 = mdb__browser_info__Univ_13;
#line 1266 "browser_info.m"
                  }
#line 1262 "browser_info.m"
              }
#line 1258 "browser_info.m"
          }
#line 1269 "browser_info.m"
        {
#line 1269 "browser_info.m"
          mdb__browser_info__V_14_14 = mercury__univ__univ_value_1_f_0(&mdb__browser_info__TypeInfo_16_16, mdb__browser_info__Univ_23);
        }
#line 1208 "browser_info.m"
        {
#line 1208 "browser_info.m"
          mercury__deconstruct__deconstruct_5_p_2(mdb__browser_info__TypeInfo_16_16, mdb__browser_info__V_14_14, (MR_Integer) 2, mdb__browser_info__Functor_9, mdb__browser_info__Arity_10, mdb__browser_info__Args_11);
        }
#line 1210 "browser_info.m"
        *mdb__browser_info__MaybeReturn_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1207 "browser_info.m"
      }
#line 1207 "browser_info.m"
    else
#line 1212 "browser_info.m"
      {
#line 1212 "browser_info.m"
        *mdb__browser_info__Functor_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_8, (MR_Integer) 0)));
#line 1212 "browser_info.m"
        *mdb__browser_info__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_8, (MR_Integer) 1)));
#line 1212 "browser_info.m"
        *mdb__browser_info__MaybeReturn_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_8, (MR_Integer) 2)));
#line 1213 "browser_info.m"
        {
#line 1213 "browser_info.m"
          mercury__list__length_2_p_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, *mdb__browser_info__Args_11, mdb__browser_info__Arity_10);
#line 1213 "browser_info.m"
          return;
        }
#line 1212 "browser_info.m"
      }
#line 1207 "browser_info.m"
  }
#line 332 "browser_info.m"
}

#line 311 "browser_info.m"
void MR_CALL 
mdb__browser_info__browser_params_to_string_3_p_0(
#line 311 "browser_info.m"
  MR_Word mdb__browser_info__Browser_4,
#line 311 "browser_info.m"
  MR_Word mdb__browser_info__MDBCommandFormat_5,
#line 311 "browser_info.m"
  MR_String * mdb__browser_info__Desc_6)
#line 311 "browser_info.m"
{
#line 1077 "browser_info.m"
  {
#line 1077 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1077 "browser_info.m"
    MR_Word mdb__browser_info__PrintParams_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 0)));
#line 1077 "browser_info.m"
    MR_Word mdb__browser_info__BrowseParams_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 1)));
#line 1077 "browser_info.m"
    MR_Word mdb__browser_info__PrintAllParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 2)));
#line 1077 "browser_info.m"
    MR_Integer mdb__browser_info__NumIOActions_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 3)));
#line 1077 "browser_info.m"
    MR_Word mdb__browser_info__MaybeXMLBrowserCmd_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 4)));
#line 1077 "browser_info.m"
    MR_Word mdb__browser_info__MaybeXMLTmpFileName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 5)));

#line 1112 "browser_info.m"
#line 1112 "browser_info.m"
    switch (mdb__browser_info__MDBCommandFormat_5) {
#line 1112 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1112 "browser_info.m"
      case (MR_Integer) 0:
#line 1113 "browser_info.m"
        {
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__ParamDesc_19;
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__NumIOActionDesc_20;
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__XMLBrowserCmdDesc_21;
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__XMLTmpFileNameDesc_22;
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__V_24_24;
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__V_25_25;
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__V_26_26;
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__V_28_28;
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__V_29_29;
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__V_30_30;
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__V_32_32;
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__V_34_34;
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__V_35_35;
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__V_43_43;
#line 1113 "browser_info.m"
          MR_String mdb__browser_info__V_44_44;

#line 1116 "browser_info.m"
          {
#line 1116 "browser_info.m"
            mdb__browser_info__V_25_25 = mdb__browser_info__caller_params_to_desc_1_f_0(mdb__browser_info__PrintParams_7);
          }
#line 1118 "browser_info.m"
          {
#line 1118 "browser_info.m"
            mdb__browser_info__V_29_29 = mdb__browser_info__caller_params_to_desc_1_f_0(mdb__browser_info__BrowseParams_8);
          }
#line 1120 "browser_info.m"
          {
#line 1120 "browser_info.m"
            mdb__browser_info__V_32_32 = mdb__browser_info__caller_params_to_desc_1_f_0(mdb__browser_info__PrintAllParams_9);
          }
#line 1119 "browser_info.m"
          {
#line 1119 "browser_info.m"
            mdb__browser_info__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "Print all parameters:\n", mdb__browser_info__V_32_32);
          }
#line 1118 "browser_info.m"
          {
#line 1118 "browser_info.m"
            mdb__browser_info__V_28_28 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_29_29, mdb__browser_info__V_30_30);
          }
#line 1117 "browser_info.m"
          {
#line 1117 "browser_info.m"
            mdb__browser_info__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "Browse parameters:\n", mdb__browser_info__V_28_28);
          }
#line 1116 "browser_info.m"
          {
#line 1116 "browser_info.m"
            mdb__browser_info__V_24_24 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_25_25, mdb__browser_info__V_26_26);
          }
#line 1115 "browser_info.m"
          {
#line 1115 "browser_info.m"
            mdb__browser_info__ParamDesc_19 = mercury__string__f_43_43_2_f_0((MR_String) "Print parameters:\n", mdb__browser_info__V_24_24);
          }
#line 1123 "browser_info.m"
          {
#line 1123 "browser_info.m"
            mdb__browser_info__V_35_35 = mercury__string__int_to_string_1_f_0(mdb__browser_info__NumIOActions_10);
          }
#line 1123 "browser_info.m"
          {
#line 1123 "browser_info.m"
            mdb__browser_info__V_34_34 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_35_35, (MR_String) "\n");
          }
#line 1122 "browser_info.m"
          {
#line 1122 "browser_info.m"
            mdb__browser_info__NumIOActionDesc_20 = mercury__string__f_43_43_2_f_0((MR_String) "Maximum number of I/O actions printed: ", mdb__browser_info__V_34_34);
          }
#line 1128 "browser_info.m"
          if ((mdb__browser_info__MaybeXMLBrowserCmd_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1130 "browser_info.m"
            mdb__browser_info__XMLBrowserCmdDesc_21 = (MR_String) "";
#line 1128 "browser_info.m"
          else
#line 1125 "browser_info.m"
            {
#line 1125 "browser_info.m"
              MR_String mdb__browser_info__V_38_38;
#line 1125 "browser_info.m"
              MR_String mdb__browser_info__XMLBrowserCmd_64 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeXMLBrowserCmd_11, (MR_Integer) 0)));

#line 1127 "browser_info.m"
              {
#line 1127 "browser_info.m"
                mdb__browser_info__V_38_38 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLBrowserCmd_64, (MR_String) "\n");
              }
#line 1127 "browser_info.m"
              {
#line 1127 "browser_info.m"
                mdb__browser_info__XMLBrowserCmdDesc_21 = mercury__string__f_43_43_2_f_0((MR_String) "XML browser command:    ", mdb__browser_info__V_38_38);
              }
#line 1125 "browser_info.m"
            }
#line 1136 "browser_info.m"
          if ((mdb__browser_info__MaybeXMLTmpFileName_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1138 "browser_info.m"
            mdb__browser_info__XMLTmpFileNameDesc_22 = (MR_String) "";
#line 1136 "browser_info.m"
          else
#line 1133 "browser_info.m"
            {
#line 1133 "browser_info.m"
              MR_String mdb__browser_info__V_41_41;
#line 1133 "browser_info.m"
              MR_String mdb__browser_info__XMLTmpFileName_66 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeXMLTmpFileName_12, (MR_Integer) 0)));

#line 1135 "browser_info.m"
              {
#line 1135 "browser_info.m"
                mdb__browser_info__V_41_41 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLTmpFileName_66, (MR_String) "\n");
              }
#line 1135 "browser_info.m"
              {
#line 1135 "browser_info.m"
                mdb__browser_info__XMLTmpFileNameDesc_22 = mercury__string__f_43_43_2_f_0((MR_String) "XML temporary filename: ", mdb__browser_info__V_41_41);
              }
#line 1133 "browser_info.m"
            }
#line 1141 "browser_info.m"
          {
#line 1141 "browser_info.m"
            mdb__browser_info__V_44_44 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLBrowserCmdDesc_21, mdb__browser_info__XMLTmpFileNameDesc_22);
          }
#line 1140 "browser_info.m"
          {
#line 1140 "browser_info.m"
            mdb__browser_info__V_43_43 = mercury__string__f_43_43_2_f_0(mdb__browser_info__NumIOActionDesc_20, mdb__browser_info__V_44_44);
          }
#line 1140 "browser_info.m"
          {
#line 1140 "browser_info.m"
            *mdb__browser_info__Desc_6 = mercury__string__f_43_43_2_f_0(mdb__browser_info__ParamDesc_19, mdb__browser_info__V_43_43);
          }
#line 1113 "browser_info.m"
        }
#line 1112 "browser_info.m"
        break;
#line 1112 "browser_info.m"
      case (MR_Integer) 1:
#line 1081 "browser_info.m"
        {
#line 1081 "browser_info.m"
          MR_String mdb__browser_info__ParamCmds_13;
#line 1081 "browser_info.m"
          MR_String mdb__browser_info__NumIOActionCmd_14;
#line 1081 "browser_info.m"
          MR_String mdb__browser_info__XMLBrowserCmdCmd_16;
#line 1081 "browser_info.m"
          MR_String mdb__browser_info__XMLTmpFileNameCmd_18;
#line 1081 "browser_info.m"
          MR_String mdb__browser_info__V_45_45;
#line 1081 "browser_info.m"
          MR_String mdb__browser_info__V_47_47;
#line 1081 "browser_info.m"
          MR_String mdb__browser_info__V_48_48;
#line 1081 "browser_info.m"
          MR_String mdb__browser_info__V_50_50;
#line 1081 "browser_info.m"
          MR_String mdb__browser_info__V_53_53;
#line 1081 "browser_info.m"
          MR_String mdb__browser_info__V_54_54;
#line 1081 "browser_info.m"
          MR_String mdb__browser_info__V_62_62;
#line 1081 "browser_info.m"
          MR_String mdb__browser_info__V_63_63;
#line 1096 "browser_info.m"
          MR_String mdb__browser_info__XMLBrowserCmd_15;
#line 1107 "browser_info.m"
          MR_String mdb__browser_info__XMLTmpFileName_17;

#line 1083 "browser_info.m"
          {
#line 1083 "browser_info.m"
            mdb__browser_info__V_45_45 = mdb__browser_info__caller_params_to_mdb_command_2_f_0((MR_String) "-P ", mdb__browser_info__PrintParams_7);
          }
#line 1084 "browser_info.m"
          {
#line 1084 "browser_info.m"
            mdb__browser_info__V_48_48 = mdb__browser_info__caller_params_to_mdb_command_2_f_0((MR_String) "-B ", mdb__browser_info__BrowseParams_8);
          }
#line 1085 "browser_info.m"
          {
#line 1085 "browser_info.m"
            mdb__browser_info__V_50_50 = mdb__browser_info__caller_params_to_mdb_command_2_f_0((MR_String) "-A ", mdb__browser_info__PrintAllParams_9);
          }
#line 1084 "browser_info.m"
          {
#line 1084 "browser_info.m"
            mdb__browser_info__V_47_47 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_48_48, mdb__browser_info__V_50_50);
          }
#line 1083 "browser_info.m"
          {
#line 1083 "browser_info.m"
            mdb__browser_info__ParamCmds_13 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_45_45, mdb__browser_info__V_47_47);
          }
#line 1087 "browser_info.m"
          {
#line 1087 "browser_info.m"
            mdb__browser_info__V_54_54 = mercury__string__int_to_string_1_f_0(mdb__browser_info__NumIOActions_10);
          }
#line 1087 "browser_info.m"
          {
#line 1087 "browser_info.m"
            mdb__browser_info__V_53_53 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_54_54, (MR_String) "\n");
          }
#line 1087 "browser_info.m"
          {
#line 1087 "browser_info.m"
            mdb__browser_info__NumIOActionCmd_14 = mercury__string__f_43_43_2_f_0((MR_String) "max_io_actions ", mdb__browser_info__V_53_53);
          }
#line 1089 "browser_info.m"
          mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__MaybeXMLBrowserCmd_11)) == (MR_mktag((MR_Integer) 1)));
#line 1089 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 1089 "browser_info.m"
            {
#line 1089 "browser_info.m"
              mdb__browser_info__XMLBrowserCmd_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeXMLBrowserCmd_11, (MR_Integer) 0)));
#line 1092 "browser_info.m"
              mdb__browser_info__succeeded = (strcmp(mdb__browser_info__XMLBrowserCmd_15, (MR_String) "") == 0);
#line 1092 "browser_info.m"
              mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 1089 "browser_info.m"
            }
#line 1096 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 1094 "browser_info.m"
            {
#line 1094 "browser_info.m"
              MR_String mdb__browser_info__V_57_57;

#line 1095 "browser_info.m"
              {
#line 1095 "browser_info.m"
                mdb__browser_info__V_57_57 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLBrowserCmd_15, (MR_String) "\n");
              }
#line 1095 "browser_info.m"
              {
#line 1095 "browser_info.m"
                mdb__browser_info__XMLBrowserCmdCmd_16 = mercury__string__f_43_43_2_f_0((MR_String) "xml_browser_cmd ", mdb__browser_info__V_57_57);
              }
#line 1094 "browser_info.m"
            }
#line 1096 "browser_info.m"
          else
#line 1097 "browser_info.m"
            mdb__browser_info__XMLBrowserCmdCmd_16 = (MR_String) "";
#line 1100 "browser_info.m"
          mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__MaybeXMLTmpFileName_12)) == (MR_mktag((MR_Integer) 1)));
#line 1100 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 1100 "browser_info.m"
            {
#line 1100 "browser_info.m"
              mdb__browser_info__XMLTmpFileName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeXMLTmpFileName_12, (MR_Integer) 0)));
#line 1103 "browser_info.m"
              mdb__browser_info__succeeded = (strcmp(mdb__browser_info__XMLTmpFileName_17, (MR_String) "") == 0);
#line 1103 "browser_info.m"
              mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 1100 "browser_info.m"
            }
#line 1107 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 1105 "browser_info.m"
            {
#line 1105 "browser_info.m"
              MR_String mdb__browser_info__V_60_60;

#line 1106 "browser_info.m"
              {
#line 1106 "browser_info.m"
                mdb__browser_info__V_60_60 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLTmpFileName_17, (MR_String) "\n");
              }
#line 1106 "browser_info.m"
              {
#line 1106 "browser_info.m"
                mdb__browser_info__XMLTmpFileNameCmd_18 = mercury__string__f_43_43_2_f_0((MR_String) "xml_tmp_filename ", mdb__browser_info__V_60_60);
              }
#line 1105 "browser_info.m"
            }
#line 1107 "browser_info.m"
          else
#line 1108 "browser_info.m"
            mdb__browser_info__XMLTmpFileNameCmd_18 = (MR_String) "";
#line 1111 "browser_info.m"
          {
#line 1111 "browser_info.m"
            mdb__browser_info__V_63_63 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLBrowserCmdCmd_16, mdb__browser_info__XMLTmpFileNameCmd_18);
          }
#line 1110 "browser_info.m"
          {
#line 1110 "browser_info.m"
            mdb__browser_info__V_62_62 = mercury__string__f_43_43_2_f_0(mdb__browser_info__NumIOActionCmd_14, mdb__browser_info__V_63_63);
          }
#line 1110 "browser_info.m"
          {
#line 1110 "browser_info.m"
            *mdb__browser_info__Desc_6 = mercury__string__f_43_43_2_f_0(mdb__browser_info__ParamCmds_13, mdb__browser_info__V_62_62);
          }
#line 1081 "browser_info.m"
        }
#line 1112 "browser_info.m"
        break;
#line 1112 "browser_info.m"
    }
#line 1077 "browser_info.m"
  }
#line 311 "browser_info.m"
}

#line 309 "browser_info.m"
void MR_CALL 
mdb__browser_info__send_term_to_socket_3_p_0(
#line 309 "browser_info.m"
  MR_Word mdb__browser_info__Term_4)
#line 309 "browser_info.m"
{
#line 1039 "browser_info.m"
  {
#line 1039 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1040 "browser_info.m"
    {
#line 1040 "browser_info.m"
      mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (mdb__browser_info__Term_4)));
    }
#line 1041 "browser_info.m"
    {
#line 1041 "browser_info.m"
      mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
    }
#line 1042 "browser_info.m"
    {
#line 1042 "browser_info.m"
      mercury__io__flush_output_2_p_0();
#line 1042 "browser_info.m"
      return;
    }
#line 1039 "browser_info.m"
  }
#line 309 "browser_info.m"
}

#line 307 "browser_info.m"
void MR_CALL 
mdb__browser_info__write_path_4_p_0(
#line 307 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_1,
#line 307 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 307 "browser_info.m"
{
#line 987 "browser_info.m"
  {
#line 987 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 987 "browser_info.m"
    if ((mdb__browser_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 987 "browser_info.m"
      {
#line 988 "browser_info.m"
        {
#line 988 "browser_info.m"
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
#line 988 "browser_info.m"
          return;
        }
#line 987 "browser_info.m"
      }
#line 987 "browser_info.m"
    else
#line 987 "browser_info.m"
      {
#line 987 "browser_info.m"
        MR_Word mdb__browser_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 987 "browser_info.m"
        MR_Word mdb__browser_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 987 "browser_info.m"
        if ((mdb__browser_info__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "browser_info.m"
#line 993 "browser_info.m"
          switch (MR_tag((MR_Word) mdb__browser_info__V_39_39)) {
#line 993 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 993 "browser_info.m"
            case (MR_Integer) 0:
#line 991 "browser_info.m"
              {
#line 992 "browser_info.m"
                {
#line 992 "browser_info.m"
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
#line 992 "browser_info.m"
                  return;
                }
#line 991 "browser_info.m"
              }
#line 993 "browser_info.m"
              break;
#line 993 "browser_info.m"
            case (MR_Integer) 1:
#line 994 "browser_info.m"
              {
#line 994 "browser_info.m"
                MR_Integer mdb__browser_info__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__V_39_39, (MR_Integer) 0)));

#line 995 "browser_info.m"
                {
#line 995 "browser_info.m"
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
                }
#line 996 "browser_info.m"
                {
#line 996 "browser_info.m"
                  mdb__browser_info__write_int_debugger_4_p_0(mdb__browser_info__Debugger_1, mdb__browser_info__N_14);
#line 996 "browser_info.m"
                  return;
                }
#line 994 "browser_info.m"
              }
#line 993 "browser_info.m"
              break;
#line 993 "browser_info.m"
            case (MR_Integer) 2:
#line 998 "browser_info.m"
              {
#line 998 "browser_info.m"
                MR_String mdb__browser_info__Name_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__V_39_39, (MR_Integer) 0)));

#line 999 "browser_info.m"
                {
#line 999 "browser_info.m"
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, (MR_String) "/");
                }
#line 1000 "browser_info.m"
                {
#line 1000 "browser_info.m"
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_1, mdb__browser_info__Name_15);
#line 1000 "browser_info.m"
                  return;
                }
#line 998 "browser_info.m"
              }
#line 993 "browser_info.m"
              break;
#line 993 "browser_info.m"
          }
#line 987 "browser_info.m"
        else
#line 1003 "browser_info.m"
          {
#line 1003 "browser_info.m"
            mdb__browser_info__write_path_2_4_p_0(mdb__browser_info__Debugger_1, mdb__browser_info__HeadVar__2_2);
#line 1003 "browser_info.m"
            return;
          }
#line 987 "browser_info.m"
      }
#line 987 "browser_info.m"
  }
#line 307 "browser_info.m"
}

#line 304 "browser_info.m"
void MR_CALL 
mdb__browser_info__print_format_debugger_4_p_0(
#line 304 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 304 "browser_info.m"
  MR_Word mdb__browser_info__X_2)
#line 304 "browser_info.m"
{
#line 970 "browser_info.m"
  {
#line 970 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 970 "browser_info.m"
#line 970 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 970 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 970 "browser_info.m"
      case (MR_Integer) 1:
#line 976 "browser_info.m"
#line 976 "browser_info.m"
        switch (mdb__browser_info__X_2) {
#line 976 "browser_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 976 "browser_info.m"
          case (MR_Integer) 0:
#line 974 "browser_info.m"
            {
#line 1040 "browser_info.m"
              {
#line 1040 "browser_info.m"
                mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[0]))));
              }
#line 1041 "browser_info.m"
              {
#line 1041 "browser_info.m"
                mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
              }
#line 1042 "browser_info.m"
              {
#line 1042 "browser_info.m"
                mercury__io__flush_output_2_p_0();
#line 1042 "browser_info.m"
                return;
              }
#line 974 "browser_info.m"
            }
#line 976 "browser_info.m"
            break;
#line 976 "browser_info.m"
          case (MR_Integer) 3:
#line 983 "browser_info.m"
            {
#line 1040 "browser_info.m"
              {
#line 1040 "browser_info.m"
                mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[1]))));
              }
#line 1041 "browser_info.m"
              {
#line 1041 "browser_info.m"
                mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
              }
#line 1042 "browser_info.m"
              {
#line 1042 "browser_info.m"
                mercury__io__flush_output_2_p_0();
#line 1042 "browser_info.m"
                return;
              }
#line 983 "browser_info.m"
            }
#line 976 "browser_info.m"
            break;
#line 976 "browser_info.m"
          case (MR_Integer) 1:
#line 977 "browser_info.m"
            {
#line 1040 "browser_info.m"
              {
#line 1040 "browser_info.m"
                mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[2]))));
              }
#line 1041 "browser_info.m"
              {
#line 1041 "browser_info.m"
                mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
              }
#line 1042 "browser_info.m"
              {
#line 1042 "browser_info.m"
                mercury__io__flush_output_2_p_0();
#line 1042 "browser_info.m"
                return;
              }
#line 977 "browser_info.m"
            }
#line 976 "browser_info.m"
            break;
#line 976 "browser_info.m"
          case (MR_Integer) 2:
#line 980 "browser_info.m"
            {
#line 1040 "browser_info.m"
              {
#line 1040 "browser_info.m"
                mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[3]))));
              }
#line 1041 "browser_info.m"
              {
#line 1041 "browser_info.m"
                mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
              }
#line 1042 "browser_info.m"
              {
#line 1042 "browser_info.m"
                mercury__io__flush_output_2_p_0();
#line 1042 "browser_info.m"
                return;
              }
#line 980 "browser_info.m"
            }
#line 976 "browser_info.m"
            break;
#line 976 "browser_info.m"
        }
#line 970 "browser_info.m"
        break;
#line 970 "browser_info.m"
      case (MR_Integer) 0:
#line 970 "browser_info.m"
        {
#line 971 "browser_info.m"
          {
#line 971 "browser_info.m"
            mercury__io__print_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0, ((MR_Box) (mdb__browser_info__X_2)));
#line 971 "browser_info.m"
            return;
          }
#line 970 "browser_info.m"
        }
#line 970 "browser_info.m"
        break;
#line 970 "browser_info.m"
    }
#line 970 "browser_info.m"
  }
#line 304 "browser_info.m"
}

#line 302 "browser_info.m"
void MR_CALL 
mdb__browser_info__write_int_debugger_4_p_0(
#line 302 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 302 "browser_info.m"
  MR_Integer mdb__browser_info__Int_2)
#line 302 "browser_info.m"
{
#line 965 "browser_info.m"
  {
#line 965 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 965 "browser_info.m"
#line 965 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 965 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 965 "browser_info.m"
      case (MR_Integer) 1:
#line 967 "browser_info.m"
        {
#line 967 "browser_info.m"
          MR_Word mdb__browser_info__V_14_14;

#line 968 "browser_info.m"
          {
#line 968 "browser_info.m"
            mdb__browser_info__V_14_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 968 "browser_info.m"
            MR_hl_field(MR_mktag(2), mdb__browser_info__V_14_14, 0) = ((MR_Box) (mdb__browser_info__Int_2));
#line 968 "browser_info.m"
          }
#line 1040 "browser_info.m"
          {
#line 1040 "browser_info.m"
            mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (mdb__browser_info__V_14_14)));
          }
#line 1041 "browser_info.m"
          {
#line 1041 "browser_info.m"
            mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
          }
#line 1042 "browser_info.m"
          {
#line 1042 "browser_info.m"
            mercury__io__flush_output_2_p_0();
#line 1042 "browser_info.m"
            return;
          }
#line 967 "browser_info.m"
        }
#line 965 "browser_info.m"
        break;
#line 965 "browser_info.m"
      case (MR_Integer) 0:
#line 966 "browser_info.m"
        {
#line 966 "browser_info.m"
          mercury__io__write_int_3_p_0(mdb__browser_info__Int_2);
#line 966 "browser_info.m"
          return;
        }
#line 965 "browser_info.m"
        break;
#line 965 "browser_info.m"
    }
#line 965 "browser_info.m"
  }
#line 302 "browser_info.m"
}

#line 300 "browser_info.m"
void MR_CALL 
mdb__browser_info__write_string_debugger_4_p_0(
#line 300 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 300 "browser_info.m"
  MR_String mdb__browser_info__String_2)
#line 300 "browser_info.m"
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
#line 962 "browser_info.m"
        {
#line 962 "browser_info.m"
          MR_Word mdb__browser_info__V_14_14;

#line 963 "browser_info.m"
          {
#line 963 "browser_info.m"
            mdb__browser_info__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 963 "browser_info.m"
            MR_hl_field(MR_mktag(1), mdb__browser_info__V_14_14, 0) = ((MR_Box) (mdb__browser_info__String_2));
#line 963 "browser_info.m"
          }
#line 1040 "browser_info.m"
          {
#line 1040 "browser_info.m"
            mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (mdb__browser_info__V_14_14)));
          }
#line 1041 "browser_info.m"
          {
#line 1041 "browser_info.m"
            mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
          }
#line 1042 "browser_info.m"
          {
#line 1042 "browser_info.m"
            mercury__io__flush_output_2_p_0();
#line 1042 "browser_info.m"
            return;
          }
#line 962 "browser_info.m"
        }
#line 960 "browser_info.m"
        break;
#line 960 "browser_info.m"
      case (MR_Integer) 0:
#line 961 "browser_info.m"
        {
#line 961 "browser_info.m"
          mercury__io__write_string_3_p_0(mdb__browser_info__String_2);
#line 961 "browser_info.m"
          return;
        }
#line 960 "browser_info.m"
        break;
#line 960 "browser_info.m"
    }
#line 960 "browser_info.m"
  }
#line 300 "browser_info.m"
}

#line 298 "browser_info.m"
void MR_CALL 
mdb__browser_info__nl_debugger_3_p_0(
#line 298 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 298 "browser_info.m"
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
#line 1040 "browser_info.m"
          {
#line 1040 "browser_info.m"
            mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          }
#line 1041 "browser_info.m"
          {
#line 1041 "browser_info.m"
            mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
          }
#line 1042 "browser_info.m"
          {
#line 1042 "browser_info.m"
            mercury__io__flush_output_2_p_0();
#line 1042 "browser_info.m"
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
          mercury__io__nl_2_p_0();
#line 956 "browser_info.m"
          return;
        }
#line 955 "browser_info.m"
        break;
#line 955 "browser_info.m"
    }
#line 955 "browser_info.m"
  }
#line 298 "browser_info.m"
}

#line 295 "browser_info.m"
void MR_CALL 
mdb__browser_info__show_settings_5_p_0(
#line 295 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_6,
#line 295 "browser_info.m"
  MR_Word mdb__browser_info__ShowPath_7,
#line 295 "browser_info.m"
  MR_Word mdb__browser_info__Info_8)
#line 295 "browser_info.m"
{
#line 872 "browser_info.m"
  {
#line 872 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 872 "browser_info.m"
    MR_Integer mdb__browser_info__V_23_23;
#line 872 "browser_info.m"
    MR_Word mdb__browser_info__V_25_25;
#line 880 "browser_info.m"
    MR_Word mdb__browser_info__V_32_32;
#line 880 "browser_info.m"
    MR_Word mdb__browser_info__V_33_33;
#line 880 "browser_info.m"
    MR_Word mdb__browser_info__V_34_34;
#line 880 "browser_info.m"
    MR_Word mdb__browser_info__V_35_35;
#line 880 "browser_info.m"
    MR_Word mdb__browser_info__V_36_36;
#line 880 "browser_info.m"
    MR_Word mdb__browser_info__V_37_37;
#line 829 "browser_info.m"
    MR_Word mdb__browser_info__V_45_45;
#line 829 "browser_info.m"
    MR_Word mdb__browser_info__V_46_46;
#line 829 "browser_info.m"
    MR_Word mdb__browser_info__V_47_47;
#line 829 "browser_info.m"
    MR_Word mdb__browser_info__V_48_48;
#line 829 "browser_info.m"
    MR_Word mdb__browser_info__V_49_49;

#line 873 "browser_info.m"
    {
#line 873 "browser_info.m"
      mdb__browser_info__show_settings_caller_6_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__Info_8, (MR_Integer) 1, (MR_String) "Browser");
    }
#line 874 "browser_info.m"
    {
#line 874 "browser_info.m"
      mdb__browser_info__show_settings_caller_6_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__Info_8, (MR_Integer) 0, (MR_String) "Print");
    }
#line 875 "browser_info.m"
    {
#line 875 "browser_info.m"
      mdb__browser_info__show_settings_caller_6_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__Info_8, (MR_Integer) 2, (MR_String) "Printall");
    }
#line 877 "browser_info.m"
    {
#line 877 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_6, (MR_String) "Number of I/O actions printed is: ");
    }
#line 880 "browser_info.m"
    mdb__browser_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 0)));
#line 880 "browser_info.m"
    mdb__browser_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 1)));
#line 880 "browser_info.m"
    mdb__browser_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 2)));
#line 880 "browser_info.m"
    mdb__browser_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 3)));
#line 880 "browser_info.m"
    mdb__browser_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 4)));
#line 880 "browser_info.m"
    mdb__browser_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 5)));
#line 880 "browser_info.m"
    mdb__browser_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 6)));
#line 829 "browser_info.m"
    mdb__browser_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 0)));
#line 829 "browser_info.m"
    mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 1)));
#line 829 "browser_info.m"
    mdb__browser_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 2)));
#line 829 "browser_info.m"
    mdb__browser_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 3)));
#line 829 "browser_info.m"
    mdb__browser_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 4)));
#line 829 "browser_info.m"
    mdb__browser_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 5)));
#line 879 "browser_info.m"
    {
#line 879 "browser_info.m"
      mdb__browser_info__write_int_debugger_4_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__V_23_23);
    }
#line 881 "browser_info.m"
    {
#line 881 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_6);
    }
#line 888 "browser_info.m"
#line 888 "browser_info.m"
    switch (mdb__browser_info__ShowPath_7) {
#line 888 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 888 "browser_info.m"
      case (MR_Integer) 0:
#line 889 "browser_info.m"
        {
#line 889 "browser_info.m"
        }
#line 888 "browser_info.m"
        break;
#line 888 "browser_info.m"
      case (MR_Integer) 1:
#line 884 "browser_info.m"
        {
#line 884 "browser_info.m"
          MR_Word mdb__browser_info__V_29_29;
#line 886 "browser_info.m"
          MR_Word mdb__browser_info__V_38_38;
#line 886 "browser_info.m"
          MR_Word mdb__browser_info__V_39_39;
#line 886 "browser_info.m"
          MR_Word mdb__browser_info__V_40_40;
#line 886 "browser_info.m"
          MR_Word mdb__browser_info__V_41_41;
#line 886 "browser_info.m"
          MR_Word mdb__browser_info__V_42_42;
#line 886 "browser_info.m"
          MR_Word mdb__browser_info__V_43_43;

#line 885 "browser_info.m"
          {
#line 885 "browser_info.m"
            mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_6, (MR_String) "Current path is: ");
          }
#line 886 "browser_info.m"
          mdb__browser_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 0)));
#line 886 "browser_info.m"
          mdb__browser_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 1)));
#line 886 "browser_info.m"
          mdb__browser_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 2)));
#line 886 "browser_info.m"
          mdb__browser_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 3)));
#line 886 "browser_info.m"
          mdb__browser_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 4)));
#line 886 "browser_info.m"
          mdb__browser_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 5)));
#line 886 "browser_info.m"
          mdb__browser_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 6)));
#line 886 "browser_info.m"
          {
#line 886 "browser_info.m"
            mdb__browser_info__write_path_4_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__V_29_29);
          }
#line 887 "browser_info.m"
          {
#line 887 "browser_info.m"
            mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_6);
#line 887 "browser_info.m"
            return;
          }
#line 884 "browser_info.m"
        }
#line 888 "browser_info.m"
        break;
#line 888 "browser_info.m"
    }
#line 872 "browser_info.m"
  }
#line 295 "browser_info.m"
}

#line 292 "browser_info.m"
void MR_CALL 
mdb__browser_info__run_param_command_7_p_0(
#line 292 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_8,
#line 292 "browser_info.m"
  MR_Word mdb__browser_info__ParamCmd_9,
#line 292 "browser_info.m"
  MR_Word mdb__browser_info__ShowPath_10,
#line 292 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_PersistentState_0_18,
#line 292 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_PersistentState_19)
#line 292 "browser_info.m"
{
#line 836 "browser_info.m"
  {
#line 836 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 836 "browser_info.m"
#line 836 "browser_info.m"
    switch (MR_tag((MR_Word) mdb__browser_info__ParamCmd_9)) {
#line 836 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 836 "browser_info.m"
      case (MR_Integer) 0:
#line 857 "browser_info.m"
        {
#line 858 "browser_info.m"
          {
#line 858 "browser_info.m"
            mdb__browser_info__show_settings_5_p_0(mdb__browser_info__Debugger_8, mdb__browser_info__ShowPath_10, mdb__browser_info__STATE_VARIABLE_PersistentState_0_18);
          }
#line 857 "browser_info.m"
          *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = mdb__browser_info__STATE_VARIABLE_PersistentState_0_18;
#line 857 "browser_info.m"
        }
#line 836 "browser_info.m"
        break;
#line 836 "browser_info.m"
      case (MR_Integer) 1:
#line 836 "browser_info.m"
        {
#line 836 "browser_info.m"
          MR_Word mdb__browser_info__MaybeOptionTable_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__ParamCmd_9, (MR_Integer) 0)));
#line 836 "browser_info.m"
          MR_Word mdb__browser_info__Setting_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__ParamCmd_9, (MR_Integer) 1)));

#line 840 "browser_info.m"
          if (((MR_tag((MR_Word) mdb__browser_info__MaybeOptionTable_13)) == (MR_mktag((MR_Integer) 1))))
#line 841 "browser_info.m"
            {
#line 841 "browser_info.m"
              MR_String mdb__browser_info__Msg_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeOptionTable_13, (MR_Integer) 0)));

#line 842 "browser_info.m"
              {
#line 842 "browser_info.m"
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_8, mdb__browser_info__Msg_16);
              }
#line 841 "browser_info.m"
              *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = mdb__browser_info__STATE_VARIABLE_PersistentState_0_18;
#line 841 "browser_info.m"
            }
#line 840 "browser_info.m"
          else
#line 838 "browser_info.m"
            {
#line 838 "browser_info.m"
              MR_Word mdb__browser_info__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__MaybeOptionTable_13, (MR_Integer) 0)));
#line 838 "browser_info.m"
              MR_Word mdb__browser_info__PersistentState0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 4)));
#line 838 "browser_info.m"
              MR_Word mdb__browser_info__CallerType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2)));
#line 838 "browser_info.m"
              MR_Word mdb__browser_info__PersistentState_43;
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 0)));
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 1)));
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 3)));
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 5)));
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 6)));
#line 413 "browser_info.m"
              MR_Word mdb__browser_info__V_57_57;
#line 413 "browser_info.m"
              MR_Word mdb__browser_info__V_58_58;
#line 413 "browser_info.m"
              MR_Word mdb__browser_info__V_59_59;
#line 413 "browser_info.m"
              MR_Word mdb__browser_info__V_60_60;
#line 413 "browser_info.m"
              MR_Word mdb__browser_info__V_62_62;
#line 413 "browser_info.m"
              MR_Word mdb__browser_info__V_63_63;
#line 413 "browser_info.m"
              MR_Word mdb__browser_info__V_61_61;

#line 411 "browser_info.m"
              {
#line 411 "browser_info.m"
                mdb__browser_info__set_browser_param_from_option_table_5_p_0(mdb__browser_info__CallerType_42, mdb__browser_info__OptionTable_15, mdb__browser_info__Setting_14, mdb__browser_info__PersistentState0_41, &mdb__browser_info__PersistentState_43);
              }
#line 413 "browser_info.m"
              mdb__browser_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 0)));
#line 413 "browser_info.m"
              mdb__browser_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 1)));
#line 413 "browser_info.m"
              mdb__browser_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2)));
#line 413 "browser_info.m"
              mdb__browser_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 3)));
#line 413 "browser_info.m"
              mdb__browser_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 4)));
#line 413 "browser_info.m"
              mdb__browser_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 5)));
#line 413 "browser_info.m"
              mdb__browser_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 6)));
#line 413 "browser_info.m"
              {
#line 413 "browser_info.m"
                MR_Word base;
#line 413 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 413 "browser_info.m"
                *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = base;
#line 413 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_57_57));
#line 413 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_58_58));
#line 413 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_59_59));
#line 413 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_60_60));
#line 413 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_43));
#line 413 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_62_62));
#line 413 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_63_63));
#line 413 "browser_info.m"
              }
#line 838 "browser_info.m"
            }
#line 836 "browser_info.m"
        }
#line 836 "browser_info.m"
        break;
#line 836 "browser_info.m"
      case (MR_Integer) 2:
#line 845 "browser_info.m"
        {
#line 845 "browser_info.m"
          MR_Word mdb__browser_info__MaybeOptionTable_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__ParamCmd_9, (MR_Integer) 0)));
#line 845 "browser_info.m"
          MR_Word mdb__browser_info__Setting_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__ParamCmd_9, (MR_Integer) 1)));

#line 849 "browser_info.m"
          if (((MR_tag((MR_Word) mdb__browser_info__MaybeOptionTable_32)) == (MR_mktag((MR_Integer) 1))))
#line 850 "browser_info.m"
            {
#line 850 "browser_info.m"
              MR_String mdb__browser_info__Msg_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeOptionTable_32, (MR_Integer) 0)));

#line 851 "browser_info.m"
              {
#line 851 "browser_info.m"
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_8, mdb__browser_info__Msg_29);
              }
#line 850 "browser_info.m"
              *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = mdb__browser_info__STATE_VARIABLE_PersistentState_0_18;
#line 850 "browser_info.m"
            }
#line 849 "browser_info.m"
          else
#line 847 "browser_info.m"
            {
#line 847 "browser_info.m"
              MR_Word mdb__browser_info__OptionTable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__MaybeOptionTable_32, (MR_Integer) 0)));
#line 847 "browser_info.m"
              MR_Word mdb__browser_info__PersistentState0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 4)));
#line 847 "browser_info.m"
              MR_Word mdb__browser_info__CallerType_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2)));
#line 847 "browser_info.m"
              MR_Word mdb__browser_info__PersistentState_71;
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 0)));
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 1)));
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 3)));
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 5)));
#line 409 "browser_info.m"
              MR_Word mdb__browser_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 6)));
#line 413 "browser_info.m"
              MR_Word mdb__browser_info__V_85_85;
#line 413 "browser_info.m"
              MR_Word mdb__browser_info__V_86_86;
#line 413 "browser_info.m"
              MR_Word mdb__browser_info__V_87_87;
#line 413 "browser_info.m"
              MR_Word mdb__browser_info__V_88_88;
#line 413 "browser_info.m"
              MR_Word mdb__browser_info__V_90_90;
#line 413 "browser_info.m"
              MR_Word mdb__browser_info__V_91_91;
#line 413 "browser_info.m"
              MR_Word mdb__browser_info__V_89_89;

#line 411 "browser_info.m"
              {
#line 411 "browser_info.m"
                mdb__browser_info__set_browser_param_from_option_table_5_p_0(mdb__browser_info__CallerType_70, mdb__browser_info__OptionTable_28, mdb__browser_info__Setting_33, mdb__browser_info__PersistentState0_69, &mdb__browser_info__PersistentState_71);
              }
#line 413 "browser_info.m"
              mdb__browser_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 0)));
#line 413 "browser_info.m"
              mdb__browser_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 1)));
#line 413 "browser_info.m"
              mdb__browser_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2)));
#line 413 "browser_info.m"
              mdb__browser_info__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 3)));
#line 413 "browser_info.m"
              mdb__browser_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 4)));
#line 413 "browser_info.m"
              mdb__browser_info__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 5)));
#line 413 "browser_info.m"
              mdb__browser_info__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 6)));
#line 413 "browser_info.m"
              {
#line 413 "browser_info.m"
                MR_Word base;
#line 413 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 413 "browser_info.m"
                *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = base;
#line 413 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_85_85));
#line 413 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_86_86));
#line 413 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_87_87));
#line 413 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_88_88));
#line 413 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_71));
#line 413 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_90_90));
#line 413 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_91_91));
#line 413 "browser_info.m"
              }
#line 847 "browser_info.m"
            }
#line 845 "browser_info.m"
        }
#line 836 "browser_info.m"
        break;
#line 836 "browser_info.m"
      case (MR_Integer) 3:
#line 854 "browser_info.m"
        {
#line 854 "browser_info.m"
          MR_Integer mdb__browser_info__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__ParamCmd_9, (MR_Integer) 0)));

#line 855 "browser_info.m"
          {
#line 855 "browser_info.m"
            mdb__browser_info__info_set_num_io_actions_3_p_0(mdb__browser_info__N_17, mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, mdb__browser_info__STATE_VARIABLE_PersistentState_19);
#line 855 "browser_info.m"
            return;
          }
#line 854 "browser_info.m"
        }
#line 836 "browser_info.m"
        break;
#line 836 "browser_info.m"
    }
#line 836 "browser_info.m"
  }
#line 292 "browser_info.m"
}

#line 251 "browser_info.m"
void MR_CALL 
mdb__browser_info__set_num_io_actions_3_p_0(
#line 251 "browser_info.m"
  MR_Integer mdb__browser_info__NumIOActions_4,
#line 251 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 251 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 251 "browser_info.m"
{
#line 453 "browser_info.m"
  {
#line 453 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 453 "browser_info.m"
    MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 0)));
#line 453 "browser_info.m"
    MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 1)));
#line 453 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 2)));
#line 453 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 4)));
#line 453 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 5)));
#line 453 "browser_info.m"
    MR_Integer mdb__browser_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 3)));

#line 453 "browser_info.m"
    {
#line 453 "browser_info.m"
      MR_Word base;
#line 453 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 453 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Browser_7 = base;
#line 453 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_9_9));
#line 453 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_10_10));
#line 453 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_11_11));
#line 453 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__NumIOActions_4));
#line 453 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_13_13));
#line 453 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_14_14));
#line 453 "browser_info.m"
    }
#line 453 "browser_info.m"
  }
#line 251 "browser_info.m"
}

#line 250 "browser_info.m"
void MR_CALL 
mdb__browser_info__get_num_io_actions_2_p_0(
#line 250 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 250 "browser_info.m"
  MR_Integer * mdb__browser_info__NumIOActions_4)
#line 250 "browser_info.m"
{
#line 446 "browser_info.m"
  {
#line 446 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 446 "browser_info.m"
    MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 0)));
#line 446 "browser_info.m"
    MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 1)));
#line 446 "browser_info.m"
    MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 2)));
#line 446 "browser_info.m"
    MR_Word mdb__browser_info__V_8_8;
#line 446 "browser_info.m"
    MR_Word mdb__browser_info__V_9_9;

#line 446 "browser_info.m"
    *mdb__browser_info__NumIOActions_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 3)));
#line 446 "browser_info.m"
    mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 4)));
#line 446 "browser_info.m"
    mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 5)));
#line 446 "browser_info.m"
  }
#line 250 "browser_info.m"
}

#line 247 "browser_info.m"
void MR_CALL 
mdb__browser_info__info_set_xml_tmp_filename_3_p_0(
#line 247 "browser_info.m"
  MR_String mdb__browser_info__FileName_4,
#line 247 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Info_0_8,
#line 247 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Info_9)
#line 247 "browser_info.m"
{
#line 425 "browser_info.m"
  {
#line 425 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 425 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 425 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState_7;
#line 426 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 426 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 426 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 426 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 426 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 426 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 428 "browser_info.m"
    MR_Word mdb__browser_info__V_17_17;
#line 428 "browser_info.m"
    MR_Word mdb__browser_info__V_18_18;
#line 428 "browser_info.m"
    MR_Word mdb__browser_info__V_19_19;
#line 428 "browser_info.m"
    MR_Word mdb__browser_info__V_20_20;
#line 428 "browser_info.m"
    MR_Word mdb__browser_info__V_22_22;
#line 428 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;
#line 428 "browser_info.m"
    MR_Word mdb__browser_info__V_21_21;

#line 427 "browser_info.m"
    {
#line 427 "browser_info.m"
      mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0(mdb__browser_info__FileName_4, mdb__browser_info__PersistentState0_6, &mdb__browser_info__PersistentState_7);
    }
#line 428 "browser_info.m"
    mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 428 "browser_info.m"
    mdb__browser_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 428 "browser_info.m"
    mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 428 "browser_info.m"
    mdb__browser_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 428 "browser_info.m"
    mdb__browser_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 428 "browser_info.m"
    mdb__browser_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 428 "browser_info.m"
    mdb__browser_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 428 "browser_info.m"
    {
#line 428 "browser_info.m"
      MR_Word base;
#line 428 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 428 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Info_9 = base;
#line 428 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_17_17));
#line 428 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_18_18));
#line 428 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_19_19));
#line 428 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_20_20));
#line 428 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_7));
#line 428 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_22_22));
#line 428 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_23_23));
#line 428 "browser_info.m"
    }
#line 425 "browser_info.m"
  }
#line 247 "browser_info.m"
}

#line 244 "browser_info.m"
void MR_CALL 
mdb__browser_info__info_set_xml_browser_cmd_3_p_0(
#line 244 "browser_info.m"
  MR_String mdb__browser_info__Cmd_4,
#line 244 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Info_0_8,
#line 244 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Info_9)
#line 244 "browser_info.m"
{
#line 420 "browser_info.m"
  {
#line 420 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 420 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 420 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState_7;
#line 421 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 421 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 421 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 421 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 421 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 421 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 423 "browser_info.m"
    MR_Word mdb__browser_info__V_17_17;
#line 423 "browser_info.m"
    MR_Word mdb__browser_info__V_18_18;
#line 423 "browser_info.m"
    MR_Word mdb__browser_info__V_19_19;
#line 423 "browser_info.m"
    MR_Word mdb__browser_info__V_20_20;
#line 423 "browser_info.m"
    MR_Word mdb__browser_info__V_22_22;
#line 423 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;
#line 423 "browser_info.m"
    MR_Word mdb__browser_info__V_21_21;

#line 422 "browser_info.m"
    {
#line 422 "browser_info.m"
      mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0(mdb__browser_info__Cmd_4, mdb__browser_info__PersistentState0_6, &mdb__browser_info__PersistentState_7);
    }
#line 423 "browser_info.m"
    mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 423 "browser_info.m"
    mdb__browser_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 423 "browser_info.m"
    mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 423 "browser_info.m"
    mdb__browser_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 423 "browser_info.m"
    mdb__browser_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 423 "browser_info.m"
    mdb__browser_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 423 "browser_info.m"
    mdb__browser_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 423 "browser_info.m"
    {
#line 423 "browser_info.m"
      MR_Word base;
#line 423 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 423 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Info_9 = base;
#line 423 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_17_17));
#line 423 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_18_18));
#line 423 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_19_19));
#line 423 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_20_20));
#line 423 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_7));
#line 423 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_22_22));
#line 423 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_23_23));
#line 423 "browser_info.m"
    }
#line 420 "browser_info.m"
  }
#line 244 "browser_info.m"
}

#line 241 "browser_info.m"
void MR_CALL 
mdb__browser_info__info_set_num_io_actions_3_p_0(
#line 241 "browser_info.m"
  MR_Integer mdb__browser_info__N_4,
#line 241 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Info_0_8,
#line 241 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Info_9)
#line 241 "browser_info.m"
{
#line 415 "browser_info.m"
  {
#line 415 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 415 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 415 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState_7;
#line 415 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 415 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 415 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 415 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 415 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 415 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 453 "browser_info.m"
    MR_Word mdb__browser_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 0)));
#line 453 "browser_info.m"
    MR_Word mdb__browser_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 1)));
#line 453 "browser_info.m"
    MR_Word mdb__browser_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 2)));
#line 453 "browser_info.m"
    MR_Word mdb__browser_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 4)));
#line 453 "browser_info.m"
    MR_Word mdb__browser_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 5)));
#line 453 "browser_info.m"
    MR_Integer mdb__browser_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 3)));

#line 453 "browser_info.m"
    {
#line 453 "browser_info.m"
      mdb__browser_info__PersistentState_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 453 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 0) = ((MR_Box) (mdb__browser_info__V_29_29));
#line 453 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 1) = ((MR_Box) (mdb__browser_info__V_30_30));
#line 453 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 2) = ((MR_Box) (mdb__browser_info__V_31_31));
#line 453 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 3) = ((MR_Box) (mdb__browser_info__N_4));
#line 453 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 4) = ((MR_Box) (mdb__browser_info__V_33_33));
#line 453 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 5) = ((MR_Box) (mdb__browser_info__V_34_34));
#line 453 "browser_info.m"
    }
#line 418 "browser_info.m"
    {
#line 418 "browser_info.m"
      MR_Word base;
#line 418 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 418 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Info_9 = base;
#line 418 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_11_11));
#line 418 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_12_12));
#line 418 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_13_13));
#line 418 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_14_14));
#line 418 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_7));
#line 418 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_15_15));
#line 418 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_16_16));
#line 418 "browser_info.m"
    }
#line 415 "browser_info.m"
  }
#line 241 "browser_info.m"
}

#line 238 "browser_info.m"
void MR_CALL 
mdb__browser_info__info_set_browse_param_4_p_0(
#line 238 "browser_info.m"
  MR_Word mdb__browser_info__OptionTable_5,
#line 238 "browser_info.m"
  MR_Word mdb__browser_info__Setting_6,
#line 238 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Info_0_11,
#line 238 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Info_12)
#line 238 "browser_info.m"
{
#line 408 "browser_info.m"
  {
#line 408 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 408 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 408 "browser_info.m"
    MR_Word mdb__browser_info__CallerType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 408 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState_10;
#line 409 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 409 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 409 "browser_info.m"
    MR_Word mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 409 "browser_info.m"
    MR_Word mdb__browser_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 409 "browser_info.m"
    MR_Word mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 413 "browser_info.m"
    MR_Word mdb__browser_info__V_26_26;
#line 413 "browser_info.m"
    MR_Word mdb__browser_info__V_27_27;
#line 413 "browser_info.m"
    MR_Word mdb__browser_info__V_28_28;
#line 413 "browser_info.m"
    MR_Word mdb__browser_info__V_29_29;
#line 413 "browser_info.m"
    MR_Word mdb__browser_info__V_31_31;
#line 413 "browser_info.m"
    MR_Word mdb__browser_info__V_32_32;
#line 413 "browser_info.m"
    MR_Word mdb__browser_info__V_30_30;

#line 411 "browser_info.m"
    {
#line 411 "browser_info.m"
      mdb__browser_info__set_browser_param_from_option_table_5_p_0(mdb__browser_info__CallerType_9, mdb__browser_info__OptionTable_5, mdb__browser_info__Setting_6, mdb__browser_info__PersistentState0_8, &mdb__browser_info__PersistentState_10);
    }
#line 413 "browser_info.m"
    mdb__browser_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 413 "browser_info.m"
    mdb__browser_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 413 "browser_info.m"
    mdb__browser_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 413 "browser_info.m"
    mdb__browser_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 413 "browser_info.m"
    mdb__browser_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 413 "browser_info.m"
    mdb__browser_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 413 "browser_info.m"
    mdb__browser_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 413 "browser_info.m"
    {
#line 413 "browser_info.m"
      MR_Word base;
#line 413 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 413 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Info_12 = base;
#line 413 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_26_26));
#line 413 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_27_27));
#line 413 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_28_28));
#line 413 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_29_29));
#line 413 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_10));
#line 413 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_31_31));
#line 413 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_32_32));
#line 413 "browser_info.m"
    }
#line 408 "browser_info.m"
  }
#line 238 "browser_info.m"
}

#line 234 "browser_info.m"
void MR_CALL 
mdb__browser_info__set_browser_param_from_option_table_5_p_0(
#line 234 "browser_info.m"
  MR_Word mdb__browser_info__CallerType_6,
#line 234 "browser_info.m"
  MR_Word mdb__browser_info__OptionTable_7,
#line 234 "browser_info.m"
  MR_Word mdb__browser_info__Setting_8,
#line 234 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_State_0_10,
#line 234 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_State_11)
#line 234 "browser_info.m"
{
#line 706 "browser_info.m"
  {
#line 706 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 706 "browser_info.m"
    MR_Word mdb__browser_info__TypeCtorInfo_27_27 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0;
#line 706 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12;
#line 706 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13;
#line 706 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14;
#line 706 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15;
#line 706 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16;
#line 706 "browser_info.m"
    MR_Word mdb__browser_info__V_17_17;
#line 706 "browser_info.m"
    MR_Word mdb__browser_info__V_18_18;

#line 708 "browser_info.m"
    {
#line 708 "browser_info.m"
      mdb__browser_info__V_12_12 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 0)));
    }
#line 709 "browser_info.m"
    {
#line 709 "browser_info.m"
      mdb__browser_info__V_13_13 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 1)));
    }
#line 710 "browser_info.m"
    {
#line 710 "browser_info.m"
      mdb__browser_info__V_14_14 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 2)));
    }
#line 711 "browser_info.m"
    {
#line 711 "browser_info.m"
      mdb__browser_info__V_15_15 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 3)));
    }
#line 712 "browser_info.m"
    {
#line 712 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 4)));
    }
#line 713 "browser_info.m"
    {
#line 713 "browser_info.m"
      mdb__browser_info__V_17_17 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 5)));
    }
#line 714 "browser_info.m"
    {
#line 714 "browser_info.m"
      mdb__browser_info__V_18_18 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 6)));
    }
#line 707 "browser_info.m"
    {
#line 707 "browser_info.m"
      mdb__browser_info__set_browser_param_with_caller_type_11_p_0(mdb__browser_info__CallerType_6, mdb__browser_info__V_12_12, mdb__browser_info__V_13_13, mdb__browser_info__V_14_14, mdb__browser_info__V_15_15, mdb__browser_info__V_16_16, mdb__browser_info__V_17_17, mdb__browser_info__V_18_18, mdb__browser_info__Setting_8, mdb__browser_info__STATE_VARIABLE_State_0_10, mdb__browser_info__STATE_VARIABLE_State_11);
#line 707 "browser_info.m"
      return;
    }
#line 706 "browser_info.m"
  }
#line 234 "browser_info.m"
}

#line 224 "browser_info.m"
void MR_CALL 
mdb__browser_info__set_browser_param_maybe_caller_type_9_p_0(
#line 224 "browser_info.m"
  MR_Word mdb__browser_info__FromBrowser_10,
#line 224 "browser_info.m"
  MR_Word mdb__browser_info__MaybeCallerType_11,
#line 224 "browser_info.m"
  MR_Word mdb__browser_info__F0_12,
#line 224 "browser_info.m"
  MR_Word mdb__browser_info__Pr0_13,
#line 224 "browser_info.m"
  MR_Word mdb__browser_info__V0_14,
#line 224 "browser_info.m"
  MR_Word mdb__browser_info__NPr0_15,
#line 224 "browser_info.m"
  MR_Word mdb__browser_info__Setting_16,
#line 224 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_State_0_21,
#line 224 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_State_22)
#line 224 "browser_info.m"
{
#line 700 "browser_info.m"
  {
#line 700 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 700 "browser_info.m"
    MR_Word mdb__browser_info__P_18;
#line 700 "browser_info.m"
    MR_Word mdb__browser_info__B_19;
#line 700 "browser_info.m"
    MR_Word mdb__browser_info__A_20;

#line 723 "browser_info.m"
    if ((mdb__browser_info__MaybeCallerType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 723 "browser_info.m"
#line 723 "browser_info.m"
      switch (mdb__browser_info__FromBrowser_10) {
#line 723 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 723 "browser_info.m"
        case (MR_Integer) 0:
#line 723 "browser_info.m"
          {
#line 723 "browser_info.m"
            mdb__browser_info__P_18 = (MR_Integer) 1;
#line 723 "browser_info.m"
            mdb__browser_info__B_19 = (MR_Integer) 1;
#line 723 "browser_info.m"
            mdb__browser_info__A_20 = (MR_Integer) 1;
#line 723 "browser_info.m"
          }
#line 723 "browser_info.m"
          break;
#line 723 "browser_info.m"
        case (MR_Integer) 1:
#line 724 "browser_info.m"
          {
#line 724 "browser_info.m"
            mdb__browser_info__P_18 = (MR_Integer) 0;
#line 724 "browser_info.m"
            mdb__browser_info__B_19 = (MR_Integer) 1;
#line 724 "browser_info.m"
            mdb__browser_info__A_20 = (MR_Integer) 0;
#line 724 "browser_info.m"
          }
#line 723 "browser_info.m"
          break;
#line 723 "browser_info.m"
      }
#line 723 "browser_info.m"
    else
#line 723 "browser_info.m"
      {
#line 723 "browser_info.m"
        MR_Word mdb__browser_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeCallerType_11, (MR_Integer) 0)));

#line 723 "browser_info.m"
#line 723 "browser_info.m"
        switch (mdb__browser_info__V_30_30) {
#line 723 "browser_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 723 "browser_info.m"
          case (MR_Integer) 1:
#line 726 "browser_info.m"
            {
#line 726 "browser_info.m"
              mdb__browser_info__P_18 = (MR_Integer) 0;
#line 726 "browser_info.m"
              mdb__browser_info__B_19 = (MR_Integer) 1;
#line 726 "browser_info.m"
              mdb__browser_info__A_20 = (MR_Integer) 0;
#line 726 "browser_info.m"
            }
#line 723 "browser_info.m"
            break;
#line 723 "browser_info.m"
          case (MR_Integer) 0:
#line 725 "browser_info.m"
            {
#line 725 "browser_info.m"
              mdb__browser_info__P_18 = (MR_Integer) 1;
#line 725 "browser_info.m"
              mdb__browser_info__B_19 = (MR_Integer) 0;
#line 725 "browser_info.m"
              mdb__browser_info__A_20 = (MR_Integer) 0;
#line 725 "browser_info.m"
            }
#line 723 "browser_info.m"
            break;
#line 723 "browser_info.m"
          case (MR_Integer) 2:
#line 727 "browser_info.m"
            {
#line 727 "browser_info.m"
              mdb__browser_info__P_18 = (MR_Integer) 0;
#line 727 "browser_info.m"
              mdb__browser_info__B_19 = (MR_Integer) 0;
#line 727 "browser_info.m"
              mdb__browser_info__A_20 = (MR_Integer) 1;
#line 727 "browser_info.m"
            }
#line 723 "browser_info.m"
            break;
#line 723 "browser_info.m"
        }
#line 723 "browser_info.m"
      }
#line 702 "browser_info.m"
    {
#line 702 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0(mdb__browser_info__FromBrowser_10, mdb__browser_info__P_18, mdb__browser_info__B_19, mdb__browser_info__A_20, mdb__browser_info__F0_12, mdb__browser_info__Pr0_13, mdb__browser_info__V0_14, mdb__browser_info__NPr0_15, mdb__browser_info__Setting_16, mdb__browser_info__STATE_VARIABLE_State_0_21, mdb__browser_info__STATE_VARIABLE_State_22);
#line 702 "browser_info.m"
      return;
    }
#line 700 "browser_info.m"
  }
#line 224 "browser_info.m"
}

#line 213 "browser_info.m"
void MR_CALL 
mdb__browser_info__set_browser_param_with_caller_type_11_p_0(
#line 213 "browser_info.m"
  MR_Word mdb__browser_info__CallerType_12,
#line 213 "browser_info.m"
  MR_Word mdb__browser_info__P0_13,
#line 213 "browser_info.m"
  MR_Word mdb__browser_info__B0_14,
#line 213 "browser_info.m"
  MR_Word mdb__browser_info__A0_15,
#line 213 "browser_info.m"
  MR_Word mdb__browser_info__F0_16,
#line 213 "browser_info.m"
  MR_Word mdb__browser_info__Pr0_17,
#line 213 "browser_info.m"
  MR_Word mdb__browser_info__V0_18,
#line 213 "browser_info.m"
  MR_Word mdb__browser_info__NPr0_19,
#line 213 "browser_info.m"
  MR_Word mdb__browser_info__Setting_20,
#line 213 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_State_0_36,
#line 213 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_State_37)
#line 213 "browser_info.m"
{
#line 673 "browser_info.m"
  {
#line 673 "browser_info.m"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__P0_13 == (MR_Integer) 0);
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__P_23;
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__B_24;
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__A_25;
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__F_26;
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__Pr_27;
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__V_28;
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__NPr_29;
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__PParams0_30;
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__BParams0_31;
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__AParams0_32;
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__PParams_33;
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__BParams_34;
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__AParams_35;
#line 673 "browser_info.m"
    MR_Integer mdb__browser_info__V_40_40;
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__V_61_61;
#line 673 "browser_info.m"
    MR_Word mdb__browser_info__V_62_62;
#line 689 "browser_info.m"
    MR_Integer mdb__browser_info__V_45_45;
#line 689 "browser_info.m"
    MR_Word mdb__browser_info__V_46_46;
#line 689 "browser_info.m"
    MR_Word mdb__browser_info__V_47_47;
#line 695 "browser_info.m"
    MR_Word mdb__browser_info__V_58_58;
#line 695 "browser_info.m"
    MR_Word mdb__browser_info__V_59_59;
#line 695 "browser_info.m"
    MR_Word mdb__browser_info__V_60_60;

#line 675 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 675 "browser_info.m"
      {
#line 676 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__B0_14 == (MR_Integer) 0);
#line 675 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 677 "browser_info.m"
          mdb__browser_info__succeeded = (mdb__browser_info__A0_15 == (MR_Integer) 0);
#line 675 "browser_info.m"
      }
#line 683 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 723 "browser_info.m"
#line 723 "browser_info.m"
      switch (mdb__browser_info__CallerType_12) {
#line 723 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 723 "browser_info.m"
        case (MR_Integer) 1:
#line 726 "browser_info.m"
          {
#line 726 "browser_info.m"
            mdb__browser_info__P_23 = (MR_Integer) 0;
#line 726 "browser_info.m"
            mdb__browser_info__B_24 = (MR_Integer) 1;
#line 726 "browser_info.m"
            mdb__browser_info__A_25 = (MR_Integer) 0;
#line 726 "browser_info.m"
          }
#line 723 "browser_info.m"
          break;
#line 723 "browser_info.m"
        case (MR_Integer) 0:
#line 725 "browser_info.m"
          {
#line 725 "browser_info.m"
            mdb__browser_info__P_23 = (MR_Integer) 1;
#line 725 "browser_info.m"
            mdb__browser_info__B_24 = (MR_Integer) 0;
#line 725 "browser_info.m"
            mdb__browser_info__A_25 = (MR_Integer) 0;
#line 725 "browser_info.m"
          }
#line 723 "browser_info.m"
          break;
#line 723 "browser_info.m"
        case (MR_Integer) 2:
#line 727 "browser_info.m"
          {
#line 727 "browser_info.m"
            mdb__browser_info__P_23 = (MR_Integer) 0;
#line 727 "browser_info.m"
            mdb__browser_info__B_24 = (MR_Integer) 0;
#line 727 "browser_info.m"
            mdb__browser_info__A_25 = (MR_Integer) 1;
#line 727 "browser_info.m"
          }
#line 723 "browser_info.m"
          break;
#line 723 "browser_info.m"
      }
#line 683 "browser_info.m"
    else
#line 684 "browser_info.m"
      {
#line 684 "browser_info.m"
        mdb__browser_info__P_23 = mdb__browser_info__P0_13;
#line 685 "browser_info.m"
        mdb__browser_info__B_24 = mdb__browser_info__B0_14;
#line 686 "browser_info.m"
        mdb__browser_info__A_25 = mdb__browser_info__A0_15;
#line 684 "browser_info.m"
      }
#line 760 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__F0_16 == (MR_Integer) 0);
#line 760 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 760 "browser_info.m"
      {
#line 761 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__Pr0_17 == (MR_Integer) 0);
#line 760 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 760 "browser_info.m"
          {
#line 762 "browser_info.m"
            mdb__browser_info__succeeded = (mdb__browser_info__V0_18 == (MR_Integer) 0);
#line 760 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 763 "browser_info.m"
              mdb__browser_info__succeeded = (mdb__browser_info__NPr0_19 == (MR_Integer) 0);
#line 760 "browser_info.m"
          }
#line 760 "browser_info.m"
      }
#line 769 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 765 "browser_info.m"
      {
#line 765 "browser_info.m"
        mdb__browser_info__F_26 = (MR_Integer) 1;
#line 766 "browser_info.m"
        mdb__browser_info__Pr_27 = (MR_Integer) 1;
#line 767 "browser_info.m"
        mdb__browser_info__V_28 = (MR_Integer) 1;
#line 768 "browser_info.m"
        mdb__browser_info__NPr_29 = (MR_Integer) 1;
#line 765 "browser_info.m"
      }
#line 769 "browser_info.m"
    else
#line 770 "browser_info.m"
      {
#line 770 "browser_info.m"
        mdb__browser_info__F_26 = mdb__browser_info__F0_16;
#line 771 "browser_info.m"
        mdb__browser_info__Pr_27 = mdb__browser_info__Pr0_17;
#line 772 "browser_info.m"
        mdb__browser_info__V_28 = mdb__browser_info__V0_18;
#line 773 "browser_info.m"
        mdb__browser_info__NPr_29 = mdb__browser_info__NPr0_19;
#line 770 "browser_info.m"
      }
#line 689 "browser_info.m"
    mdb__browser_info__PParams0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 0)));
#line 689 "browser_info.m"
    mdb__browser_info__BParams0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 1)));
#line 689 "browser_info.m"
    mdb__browser_info__AParams0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 2)));
#line 689 "browser_info.m"
    mdb__browser_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 3)));
#line 689 "browser_info.m"
    mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 4)));
#line 689 "browser_info.m"
    mdb__browser_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 5)));
#line 692 "browser_info.m"
    {
#line 692 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__P_23, mdb__browser_info__F_26, mdb__browser_info__Pr_27, mdb__browser_info__V_28, mdb__browser_info__NPr_29, mdb__browser_info__Setting_20, mdb__browser_info__PParams0_30, &mdb__browser_info__PParams_33);
    }
#line 693 "browser_info.m"
    {
#line 693 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__B_24, mdb__browser_info__F_26, mdb__browser_info__Pr_27, mdb__browser_info__V_28, mdb__browser_info__NPr_29, mdb__browser_info__Setting_20, mdb__browser_info__BParams0_31, &mdb__browser_info__BParams_34);
    }
#line 694 "browser_info.m"
    {
#line 694 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__A_25, mdb__browser_info__F_26, mdb__browser_info__Pr_27, mdb__browser_info__V_28, mdb__browser_info__NPr_29, mdb__browser_info__Setting_20, mdb__browser_info__AParams0_32, &mdb__browser_info__AParams_35);
    }
#line 695 "browser_info.m"
    mdb__browser_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 0)));
#line 695 "browser_info.m"
    mdb__browser_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 1)));
#line 695 "browser_info.m"
    mdb__browser_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 2)));
#line 695 "browser_info.m"
    mdb__browser_info__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 3)));
#line 695 "browser_info.m"
    mdb__browser_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 4)));
#line 695 "browser_info.m"
    mdb__browser_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 5)));
#line 695 "browser_info.m"
    {
#line 695 "browser_info.m"
      MR_Word base;
#line 695 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 695 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_State_37 = base;
#line 695 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__PParams_33));
#line 695 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__BParams_34));
#line 695 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__AParams_35));
#line 695 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_40_40));
#line 695 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_61_61));
#line 695 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_62_62));
#line 695 "browser_info.m"
    }
#line 673 "browser_info.m"
  }
#line 213 "browser_info.m"
}

#line 206 "browser_info.m"
void MR_CALL 
mdb__browser_info__set_browser_param_11_p_0(
#line 206 "browser_info.m"
  MR_Word mdb__browser_info__FromBrowser_12,
#line 206 "browser_info.m"
  MR_Word mdb__browser_info__P0_13,
#line 206 "browser_info.m"
  MR_Word mdb__browser_info__B0_14,
#line 206 "browser_info.m"
  MR_Word mdb__browser_info__A0_15,
#line 206 "browser_info.m"
  MR_Word mdb__browser_info__F0_16,
#line 206 "browser_info.m"
  MR_Word mdb__browser_info__Pr0_17,
#line 206 "browser_info.m"
  MR_Word mdb__browser_info__V0_18,
#line 206 "browser_info.m"
  MR_Word mdb__browser_info__NPr0_19,
#line 206 "browser_info.m"
  MR_Word mdb__browser_info__Setting_20,
#line 206 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_State_0_35,
#line 206 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_State_36)
#line 206 "browser_info.m"
{
#line 643 "browser_info.m"
  {
#line 643 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__P_22;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__B_23;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__A_24;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__F_25;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__Pr_26;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__V_27;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__NPr_28;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__PParams0_29;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__BParams0_30;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__AParams0_31;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__PParams_32;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__BParams_33;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__AParams_34;
#line 643 "browser_info.m"
    MR_Integer mdb__browser_info__V_39_39;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__V_60_60;
#line 643 "browser_info.m"
    MR_Word mdb__browser_info__V_61_61;
#line 662 "browser_info.m"
    MR_Integer mdb__browser_info__V_44_44;
#line 662 "browser_info.m"
    MR_Word mdb__browser_info__V_45_45;
#line 662 "browser_info.m"
    MR_Word mdb__browser_info__V_46_46;
#line 668 "browser_info.m"
    MR_Word mdb__browser_info__V_57_57;
#line 668 "browser_info.m"
    MR_Word mdb__browser_info__V_58_58;
#line 668 "browser_info.m"
    MR_Word mdb__browser_info__V_59_59;

#line 647 "browser_info.m"
#line 647 "browser_info.m"
    switch (mdb__browser_info__FromBrowser_12) {
#line 647 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 647 "browser_info.m"
      case (MR_Integer) 0:
#line 745 "browser_info.m"
        {
#line 738 "browser_info.m"
          mdb__browser_info__succeeded = (mdb__browser_info__P0_13 == (MR_Integer) 0);
#line 738 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 738 "browser_info.m"
            {
#line 739 "browser_info.m"
              mdb__browser_info__succeeded = (mdb__browser_info__B0_14 == (MR_Integer) 0);
#line 738 "browser_info.m"
              if (mdb__browser_info__succeeded)
#line 740 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__A0_15 == (MR_Integer) 0);
#line 738 "browser_info.m"
            }
#line 745 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 742 "browser_info.m"
            {
#line 742 "browser_info.m"
              mdb__browser_info__P_22 = (MR_Integer) 1;
#line 743 "browser_info.m"
              mdb__browser_info__B_23 = (MR_Integer) 1;
#line 744 "browser_info.m"
              mdb__browser_info__A_24 = (MR_Integer) 1;
#line 742 "browser_info.m"
            }
#line 745 "browser_info.m"
          else
#line 746 "browser_info.m"
            {
#line 746 "browser_info.m"
              mdb__browser_info__P_22 = mdb__browser_info__P0_13;
#line 747 "browser_info.m"
              mdb__browser_info__B_23 = mdb__browser_info__B0_14;
#line 748 "browser_info.m"
              mdb__browser_info__A_24 = mdb__browser_info__A0_15;
#line 746 "browser_info.m"
            }
#line 745 "browser_info.m"
        }
#line 647 "browser_info.m"
        break;
#line 647 "browser_info.m"
      case (MR_Integer) 1:
#line 655 "browser_info.m"
        {
#line 650 "browser_info.m"
          mdb__browser_info__succeeded = (mdb__browser_info__P0_13 == (MR_Integer) 0);
#line 650 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 650 "browser_info.m"
            {
#line 651 "browser_info.m"
              mdb__browser_info__succeeded = (mdb__browser_info__B0_14 == (MR_Integer) 0);
#line 650 "browser_info.m"
              if (mdb__browser_info__succeeded)
#line 652 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__A0_15 == (MR_Integer) 0);
#line 650 "browser_info.m"
            }
#line 655 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 654 "browser_info.m"
            {
#line 724 "browser_info.m"
              mdb__browser_info__P_22 = (MR_Integer) 0;
#line 724 "browser_info.m"
              mdb__browser_info__B_23 = (MR_Integer) 1;
#line 724 "browser_info.m"
              mdb__browser_info__A_24 = (MR_Integer) 0;
#line 654 "browser_info.m"
            }
#line 655 "browser_info.m"
          else
#line 656 "browser_info.m"
            {
#line 656 "browser_info.m"
              mdb__browser_info__P_22 = mdb__browser_info__P0_13;
#line 657 "browser_info.m"
              mdb__browser_info__B_23 = mdb__browser_info__B0_14;
#line 658 "browser_info.m"
              mdb__browser_info__A_24 = mdb__browser_info__A0_15;
#line 656 "browser_info.m"
            }
#line 655 "browser_info.m"
        }
#line 647 "browser_info.m"
        break;
#line 647 "browser_info.m"
    }
#line 760 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__F0_16 == (MR_Integer) 0);
#line 760 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 760 "browser_info.m"
      {
#line 761 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__Pr0_17 == (MR_Integer) 0);
#line 760 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 760 "browser_info.m"
          {
#line 762 "browser_info.m"
            mdb__browser_info__succeeded = (mdb__browser_info__V0_18 == (MR_Integer) 0);
#line 760 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 763 "browser_info.m"
              mdb__browser_info__succeeded = (mdb__browser_info__NPr0_19 == (MR_Integer) 0);
#line 760 "browser_info.m"
          }
#line 760 "browser_info.m"
      }
#line 769 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 765 "browser_info.m"
      {
#line 765 "browser_info.m"
        mdb__browser_info__F_25 = (MR_Integer) 1;
#line 766 "browser_info.m"
        mdb__browser_info__Pr_26 = (MR_Integer) 1;
#line 767 "browser_info.m"
        mdb__browser_info__V_27 = (MR_Integer) 1;
#line 768 "browser_info.m"
        mdb__browser_info__NPr_28 = (MR_Integer) 1;
#line 765 "browser_info.m"
      }
#line 769 "browser_info.m"
    else
#line 770 "browser_info.m"
      {
#line 770 "browser_info.m"
        mdb__browser_info__F_25 = mdb__browser_info__F0_16;
#line 771 "browser_info.m"
        mdb__browser_info__Pr_26 = mdb__browser_info__Pr0_17;
#line 772 "browser_info.m"
        mdb__browser_info__V_27 = mdb__browser_info__V0_18;
#line 773 "browser_info.m"
        mdb__browser_info__NPr_28 = mdb__browser_info__NPr0_19;
#line 770 "browser_info.m"
      }
#line 662 "browser_info.m"
    mdb__browser_info__PParams0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 0)));
#line 662 "browser_info.m"
    mdb__browser_info__BParams0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 1)));
#line 662 "browser_info.m"
    mdb__browser_info__AParams0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 2)));
#line 662 "browser_info.m"
    mdb__browser_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 3)));
#line 662 "browser_info.m"
    mdb__browser_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 4)));
#line 662 "browser_info.m"
    mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 5)));
#line 665 "browser_info.m"
    {
#line 665 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__P_22, mdb__browser_info__F_25, mdb__browser_info__Pr_26, mdb__browser_info__V_27, mdb__browser_info__NPr_28, mdb__browser_info__Setting_20, mdb__browser_info__PParams0_29, &mdb__browser_info__PParams_32);
    }
#line 666 "browser_info.m"
    {
#line 666 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__B_23, mdb__browser_info__F_25, mdb__browser_info__Pr_26, mdb__browser_info__V_27, mdb__browser_info__NPr_28, mdb__browser_info__Setting_20, mdb__browser_info__BParams0_30, &mdb__browser_info__BParams_33);
    }
#line 667 "browser_info.m"
    {
#line 667 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__A_24, mdb__browser_info__F_25, mdb__browser_info__Pr_26, mdb__browser_info__V_27, mdb__browser_info__NPr_28, mdb__browser_info__Setting_20, mdb__browser_info__AParams0_31, &mdb__browser_info__AParams_34);
    }
#line 668 "browser_info.m"
    mdb__browser_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 0)));
#line 668 "browser_info.m"
    mdb__browser_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 1)));
#line 668 "browser_info.m"
    mdb__browser_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 2)));
#line 668 "browser_info.m"
    mdb__browser_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 3)));
#line 668 "browser_info.m"
    mdb__browser_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 4)));
#line 668 "browser_info.m"
    mdb__browser_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 5)));
#line 668 "browser_info.m"
    {
#line 668 "browser_info.m"
      MR_Word base;
#line 668 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 668 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_State_36 = base;
#line 668 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__PParams_32));
#line 668 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__BParams_33));
#line 668 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__AParams_34));
#line 668 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_39_39));
#line 668 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_60_60));
#line 668 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_61_61));
#line 668 "browser_info.m"
    }
#line 643 "browser_info.m"
  }
#line 206 "browser_info.m"
}

#line 199 "browser_info.m"
void MR_CALL 
mdb__browser_info__init_persistent_state_1_p_0(
#line 199 "browser_info.m"
  MR_Word * mdb__browser_info__State_2)
#line 199 "browser_info.m"
{
#line 598 "browser_info.m"
  {
#line 598 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 602 "browser_info.m"
    *mdb__browser_info__State_2 = (MR_Word) &mdb__browser_info_scalar_common_5[0];
#line 598 "browser_info.m"
  }
#line 199 "browser_info.m"
}

#line 193 "browser_info.m"
MR_Word MR_CALL 
mdb__browser_info__f_120_109_108_95_116_109_112_95_102_105_108_101_110_97_109_101_32_58_61_2_f_0(
#line 193 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 193 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 193 "browser_info.m"
{
#line 193 "browser_info.m"
  {
#line 193 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 193 "browser_info.m"
    MR_Word mdb__browser_info__HeadVar__3_3;
#line 193 "browser_info.m"
    MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 193 "browser_info.m"
    MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 193 "browser_info.m"
    MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 193 "browser_info.m"
    MR_Integer mdb__browser_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 193 "browser_info.m"
    MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 193 "browser_info.m"
    MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 5)));

#line 193 "browser_info.m"
    {
#line 193 "browser_info.m"
      mdb__browser_info__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 193 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 0) = ((MR_Box) (mdb__browser_info__V_4_4));
#line 193 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 1) = ((MR_Box) (mdb__browser_info__V_5_5));
#line 193 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 2) = ((MR_Box) (mdb__browser_info__V_6_6));
#line 193 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 3) = ((MR_Box) (mdb__browser_info__V_7_7));
#line 193 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 4) = ((MR_Box) (mdb__browser_info__V_8_8));
#line 193 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 5) = ((MR_Box) (mdb__browser_info__HeadVar__2_2));
#line 193 "browser_info.m"
    }
#line 193 "browser_info.m"
    return mdb__browser_info__HeadVar__3_3;
#line 193 "browser_info.m"
  }
#line 193 "browser_info.m"
}

#line 192 "browser_info.m"
MR_Word MR_CALL 
mdb__browser_info__xml_tmp_filename_1_f_0(
#line 192 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 192 "browser_info.m"
{
#line 192 "browser_info.m"
  {
#line 192 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 192 "browser_info.m"
    MR_Word mdb__browser_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 5)));
#line 192 "browser_info.m"
    MR_Word mdb__browser_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 192 "browser_info.m"
    MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 192 "browser_info.m"
    MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 192 "browser_info.m"
    MR_Integer mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 192 "browser_info.m"
    MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));

#line 192 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 192 "browser_info.m"
  }
#line 192 "browser_info.m"
}

#line 189 "browser_info.m"
MR_Word MR_CALL 
mdb__browser_info__f_120_109_108_95_98_114_111_119_115_101_114_95_99_109_100_32_58_61_2_f_0(
#line 189 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 189 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 189 "browser_info.m"
{
#line 189 "browser_info.m"
  {
#line 189 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 189 "browser_info.m"
    MR_Word mdb__browser_info__HeadVar__3_3;
#line 189 "browser_info.m"
    MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 189 "browser_info.m"
    MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 189 "browser_info.m"
    MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 189 "browser_info.m"
    MR_Integer mdb__browser_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 189 "browser_info.m"
    MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 5)));
#line 189 "browser_info.m"
    MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));

#line 189 "browser_info.m"
    {
#line 189 "browser_info.m"
      mdb__browser_info__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 189 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 0) = ((MR_Box) (mdb__browser_info__V_4_4));
#line 189 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 1) = ((MR_Box) (mdb__browser_info__V_5_5));
#line 189 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 2) = ((MR_Box) (mdb__browser_info__V_6_6));
#line 189 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 3) = ((MR_Box) (mdb__browser_info__V_7_7));
#line 189 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 4) = ((MR_Box) (mdb__browser_info__HeadVar__2_2));
#line 189 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, 5) = ((MR_Box) (mdb__browser_info__V_9_9));
#line 189 "browser_info.m"
    }
#line 189 "browser_info.m"
    return mdb__browser_info__HeadVar__3_3;
#line 189 "browser_info.m"
  }
#line 189 "browser_info.m"
}

#line 188 "browser_info.m"
MR_Word MR_CALL 
mdb__browser_info__xml_browser_cmd_1_f_0(
#line 188 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 188 "browser_info.m"
{
#line 188 "browser_info.m"
  {
#line 188 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 188 "browser_info.m"
    MR_Word mdb__browser_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 188 "browser_info.m"
    MR_Word mdb__browser_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 188 "browser_info.m"
    MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 188 "browser_info.m"
    MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 188 "browser_info.m"
    MR_Integer mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 188 "browser_info.m"
    MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 5)));

#line 188 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 188 "browser_info.m"
  }
#line 188 "browser_info.m"
}

#line 177 "browser_info.m"
void MR_CALL 
mdb__browser_info__convert_dirs_to_term_path_3_p_0(
#line 177 "browser_info.m"
  MR_Word mdb__browser_info__Term_1,
#line 177 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 177 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__3_3)
#line 177 "browser_info.m"
{
#line 1273 "browser_info.m"
  {
#line 1273 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1273 "browser_info.m"
    if ((mdb__browser_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1273 "browser_info.m"
      *mdb__browser_info__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1273 "browser_info.m"
    else
#line 1273 "browser_info.m"
      {
#line 1273 "browser_info.m"
        MR_Word mdb__browser_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 1273 "browser_info.m"
        MR_Word mdb__browser_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 1273 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__V_22_22)) == (MR_mktag((MR_Integer) 2))))
#line 1282 "browser_info.m"
          {
#line 1282 "browser_info.m"
            MR_String mdb__browser_info__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__V_22_22, (MR_Integer) 0)));
#line 1282 "browser_info.m"
            MR_Integer mdb__browser_info__N_15;
#line 1282 "browser_info.m"
            MR_Word mdb__browser_info__TermPath_16;
#line 1289 "browser_info.m"
            MR_Integer mdb__browser_info__Pos_17;
#line 1289 "browser_info.m"
            MR_Word mdb__browser_info__Subterm_18;

#line 1284 "browser_info.m"
            {
#line 1284 "browser_info.m"
              mdb__browser_info__succeeded = mdb__term_rep__field_pos_3_p_0(mdb__browser_info__Name_13, mdb__browser_info__Term_1, &mdb__browser_info__Pos_17);
            }
#line 1284 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1285 "browser_info.m"
              {
#line 1285 "browser_info.m"
                mdb__browser_info__succeeded = mdb__term_rep__argument_3_p_0(mdb__browser_info__Term_1, mdb__browser_info__Pos_17, &mdb__browser_info__Subterm_18);
              }
#line 1289 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1287 "browser_info.m"
              {
#line 1287 "browser_info.m"
                {
#line 1287 "browser_info.m"
                  mdb__browser_info__convert_dirs_to_term_path_3_p_0(mdb__browser_info__Subterm_18, mdb__browser_info__V_21_21, &mdb__browser_info__TermPath_16);
                }
#line 1288 "browser_info.m"
                mdb__browser_info__N_15 = mdb__browser_info__Pos_17;
#line 1287 "browser_info.m"
              }
#line 1289 "browser_info.m"
            else
#line 1290 "browser_info.m"
              {
#line 1290 "browser_info.m"
                {
#line 1290 "browser_info.m"
                  mercury__require__error_1_p_0((MR_String) "convert_dirs_to_term_path: invalid field name");
#line 1290 "browser_info.m"
                  return;
                }
#line 1290 "browser_info.m"
              }
#line 1282 "browser_info.m"
            {
#line 1282 "browser_info.m"
              MR_Word base;
#line 1282 "browser_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1282 "browser_info.m"
              *mdb__browser_info__HeadVar__3_3 = base;
#line 1282 "browser_info.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browser_info__N_15));
#line 1282 "browser_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browser_info__TermPath_16));
#line 1282 "browser_info.m"
            }
#line 1282 "browser_info.m"
          }
#line 1273 "browser_info.m"
        else
#line 1274 "browser_info.m"
          {
#line 1274 "browser_info.m"
            MR_Integer mdb__browser_info__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__V_22_22, (MR_Integer) 0)));
#line 1274 "browser_info.m"
            MR_Word mdb__browser_info__TermPath_8;
#line 1279 "browser_info.m"
            MR_Word mdb__browser_info__Subterm_9;

#line 1276 "browser_info.m"
            {
#line 1276 "browser_info.m"
              mdb__browser_info__succeeded = mdb__term_rep__argument_3_p_0(mdb__browser_info__Term_1, mdb__browser_info__N_6, &mdb__browser_info__Subterm_9);
            }
#line 1279 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1278 "browser_info.m"
              {
#line 1278 "browser_info.m"
                mdb__browser_info__convert_dirs_to_term_path_3_p_0(mdb__browser_info__Subterm_9, mdb__browser_info__V_21_21, &mdb__browser_info__TermPath_8);
              }
#line 1279 "browser_info.m"
            else
#line 1280 "browser_info.m"
              {
#line 1280 "browser_info.m"
                {
#line 1280 "browser_info.m"
                  mercury__require__error_1_p_0((MR_String) "convert_dirs_to_term_path: invalid argument");
#line 1280 "browser_info.m"
                  return;
                }
#line 1280 "browser_info.m"
              }
#line 1274 "browser_info.m"
            {
#line 1274 "browser_info.m"
              MR_Word base;
#line 1274 "browser_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "browser_info.m"
              *mdb__browser_info__HeadVar__3_3 = base;
#line 1274 "browser_info.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browser_info__N_6));
#line 1274 "browser_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browser_info__TermPath_8));
#line 1274 "browser_info.m"
            }
#line 1274 "browser_info.m"
          }
#line 1273 "browser_info.m"
      }
#line 1273 "browser_info.m"
  }
#line 177 "browser_info.m"
}

#line 175 "browser_info.m"
MR_Integer MR_CALL 
mdb__browser_info__get_num_printed_io_actions_1_f_0(
#line 175 "browser_info.m"
  MR_Word mdb__browser_info__State_3)
#line 175 "browser_info.m"
{
#line 829 "browser_info.m"
  {
#line 829 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 829 "browser_info.m"
    MR_Integer mdb__browser_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 3)));
#line 829 "browser_info.m"
    MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 0)));
#line 829 "browser_info.m"
    MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 1)));
#line 829 "browser_info.m"
    MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 2)));
#line 829 "browser_info.m"
    MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 4)));
#line 829 "browser_info.m"
    MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 5)));

#line 829 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 829 "browser_info.m"
  }
#line 175 "browser_info.m"
}

#line 172 "browser_info.m"
void MR_CALL 
mdb__browser_info__get_format_params_4_p_0(
#line 172 "browser_info.m"
  MR_Word mdb__browser_info__Info_5,
#line 172 "browser_info.m"
  MR_Word mdb__browser_info__Caller_6,
#line 172 "browser_info.m"
  MR_Word mdb__browser_info__Format_7,
#line 172 "browser_info.m"
  MR_Word * mdb__browser_info__Params_8)
#line 172 "browser_info.m"
{
#line 549 "browser_info.m"
  {
#line 549 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 549 "browser_info.m"
    MR_Word mdb__browser_info__CallerParams_9;
#line 549 "browser_info.m"
    MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 4)));
#line 549 "browser_info.m"
    MR_Word mdb__browser_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 2)));
#line 549 "browser_info.m"
    MR_Word mdb__browser_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 1)));
#line 549 "browser_info.m"
    MR_Word mdb__browser_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 0)));
#line 549 "browser_info.m"
    MR_Word mdb__browser_info__V_61_61;
#line 549 "browser_info.m"
    MR_Word mdb__browser_info__V_62_62;
#line 549 "browser_info.m"
    MR_Word mdb__browser_info__V_63_63;
#line 549 "browser_info.m"
    MR_Word mdb__browser_info__V_64_64;
#line 550 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 0)));
#line 550 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 1)));
#line 550 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 2)));
#line 550 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 3)));
#line 550 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 5)));
#line 550 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 6)));
#line 817 "browser_info.m"
    MR_Word mdb__browser_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 5)));
#line 817 "browser_info.m"
    MR_Word mdb__browser_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 4)));
#line 817 "browser_info.m"
    MR_Integer mdb__browser_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 3)));
#line 824 "browser_info.m"
    MR_Word mdb__browser_info__V_65_65;

#line 817 "browser_info.m"
#line 817 "browser_info.m"
    switch (mdb__browser_info__Caller_6) {
#line 817 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 817 "browser_info.m"
      case (MR_Integer) 1:
#line 818 "browser_info.m"
        mdb__browser_info__CallerParams_9 = mdb__browser_info__V_39_39;
#line 817 "browser_info.m"
        break;
#line 817 "browser_info.m"
      case (MR_Integer) 0:
#line 817 "browser_info.m"
        mdb__browser_info__CallerParams_9 = mdb__browser_info__V_40_40;
#line 817 "browser_info.m"
        break;
#line 817 "browser_info.m"
      case (MR_Integer) 2:
#line 819 "browser_info.m"
        mdb__browser_info__CallerParams_9 = mdb__browser_info__V_38_38;
#line 817 "browser_info.m"
        break;
#line 817 "browser_info.m"
    }
#line 824 "browser_info.m"
    mdb__browser_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 0)));
#line 824 "browser_info.m"
    mdb__browser_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 1)));
#line 824 "browser_info.m"
    mdb__browser_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 2)));
#line 824 "browser_info.m"
    mdb__browser_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 3)));
#line 824 "browser_info.m"
    mdb__browser_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 4)));
#line 824 "browser_info.m"
#line 824 "browser_info.m"
    switch (mdb__browser_info__Format_7) {
#line 824 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 824 "browser_info.m"
      case (MR_Integer) 0:
#line 824 "browser_info.m"
        *mdb__browser_info__Params_8 = mdb__browser_info__V_64_64;
#line 824 "browser_info.m"
        break;
#line 824 "browser_info.m"
      case (MR_Integer) 3:
#line 827 "browser_info.m"
        *mdb__browser_info__Params_8 = mdb__browser_info__V_61_61;
#line 824 "browser_info.m"
        break;
#line 824 "browser_info.m"
      case (MR_Integer) 1:
#line 825 "browser_info.m"
        *mdb__browser_info__Params_8 = mdb__browser_info__V_63_63;
#line 824 "browser_info.m"
        break;
#line 824 "browser_info.m"
      case (MR_Integer) 2:
#line 826 "browser_info.m"
        *mdb__browser_info__Params_8 = mdb__browser_info__V_62_62;
#line 824 "browser_info.m"
        break;
#line 824 "browser_info.m"
    }
#line 549 "browser_info.m"
  }
#line 172 "browser_info.m"
}

#line 167 "browser_info.m"
void MR_CALL 
mdb__browser_info__get_format_4_p_0(
#line 167 "browser_info.m"
  MR_Word mdb__browser_info__Info_5,
#line 167 "browser_info.m"
  MR_Word mdb__browser_info__Caller_6,
#line 167 "browser_info.m"
  MR_Word mdb__browser_info__MaybeFormat_7,
#line 167 "browser_info.m"
  MR_Word * mdb__browser_info__Format_8)
#line 167 "browser_info.m"
{
#line 536 "browser_info.m"
  {
#line 536 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 536 "browser_info.m"
    if ((mdb__browser_info__MaybeFormat_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "browser_info.m"
      {
#line 538 "browser_info.m"
        MR_Word mdb__browser_info__MdbFormatOption_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 3)));
#line 538 "browser_info.m"
        MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 4)));
#line 539 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 0)));
#line 539 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 1)));
#line 539 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 2)));
#line 539 "browser_info.m"
        MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 5)));
#line 539 "browser_info.m"
        MR_Word mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 6)));

#line 542 "browser_info.m"
        if ((mdb__browser_info__MdbFormatOption_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "browser_info.m"
          {
#line 543 "browser_info.m"
            MR_Word mdb__browser_info__Params_10;
#line 543 "browser_info.m"
            MR_Word mdb__browser_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 2)));
#line 543 "browser_info.m"
            MR_Word mdb__browser_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 1)));
#line 543 "browser_info.m"
            MR_Word mdb__browser_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 0)));
#line 817 "browser_info.m"
            MR_Word mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 5)));
#line 817 "browser_info.m"
            MR_Word mdb__browser_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 4)));
#line 817 "browser_info.m"
            MR_Integer mdb__browser_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 3)));
#line 545 "browser_info.m"
            MR_Word mdb__browser_info__V_24_24;
#line 545 "browser_info.m"
            MR_Word mdb__browser_info__V_25_25;
#line 545 "browser_info.m"
            MR_Word mdb__browser_info__V_26_26;
#line 545 "browser_info.m"
            MR_Word mdb__browser_info__V_27_27;

#line 817 "browser_info.m"
#line 817 "browser_info.m"
            switch (mdb__browser_info__Caller_6) {
#line 817 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 817 "browser_info.m"
              case (MR_Integer) 1:
#line 818 "browser_info.m"
                mdb__browser_info__Params_10 = mdb__browser_info__V_50_50;
#line 817 "browser_info.m"
                break;
#line 817 "browser_info.m"
              case (MR_Integer) 0:
#line 817 "browser_info.m"
                mdb__browser_info__Params_10 = mdb__browser_info__V_51_51;
#line 817 "browser_info.m"
                break;
#line 817 "browser_info.m"
              case (MR_Integer) 2:
#line 819 "browser_info.m"
                mdb__browser_info__Params_10 = mdb__browser_info__V_49_49;
#line 817 "browser_info.m"
                break;
#line 817 "browser_info.m"
            }
#line 545 "browser_info.m"
            *mdb__browser_info__Format_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 0)));
#line 545 "browser_info.m"
            mdb__browser_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 1)));
#line 545 "browser_info.m"
            mdb__browser_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 2)));
#line 545 "browser_info.m"
            mdb__browser_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 3)));
#line 545 "browser_info.m"
            mdb__browser_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 4)));
#line 543 "browser_info.m"
          }
#line 542 "browser_info.m"
        else
#line 541 "browser_info.m"
          *mdb__browser_info__Format_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__MdbFormatOption_9, (MR_Integer) 0)));
#line 538 "browser_info.m"
      }
#line 536 "browser_info.m"
    else
#line 536 "browser_info.m"
      *mdb__browser_info__Format_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeFormat_7, (MR_Integer) 0)));
#line 536 "browser_info.m"
  }
#line 167 "browser_info.m"
}

#line 160 "browser_info.m"
MR_Word MR_CALL 
mdb__browser_info__init_5_f_0(
#line 160 "browser_info.m"
  MR_Word mdb__browser_info__BrowserTerm_7,
#line 160 "browser_info.m"
  MR_Word mdb__browser_info__CallerType_8,
#line 160 "browser_info.m"
  MR_Word mdb__browser_info__MaybeFormat_9,
#line 160 "browser_info.m"
  MR_Word mdb__browser_info__MaybeModeFunc_10,
#line 160 "browser_info.m"
  MR_Word mdb__browser_info__State_11)
#line 160 "browser_info.m"
{
#line 530 "browser_info.m"
  {
#line 530 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 530 "browser_info.m"
    MR_Word mdb__browser_info__HeadVar__6_6;

#line 531 "browser_info.m"
    {
#line 531 "browser_info.m"
      mdb__browser_info__HeadVar__6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 531 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 0) = ((MR_Box) (mdb__browser_info__BrowserTerm_7));
#line 531 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 2) = ((MR_Box) (mdb__browser_info__CallerType_8));
#line 531 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 3) = ((MR_Box) (mdb__browser_info__MaybeFormat_9));
#line 531 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 4) = ((MR_Box) (mdb__browser_info__State_11));
#line 531 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 6) = ((MR_Box) (mdb__browser_info__MaybeModeFunc_10));
#line 531 "browser_info.m"
    }
#line 530 "browser_info.m"
    return mdb__browser_info__HeadVar__6_6;
#line 530 "browser_info.m"
  }
#line 160 "browser_info.m"
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
