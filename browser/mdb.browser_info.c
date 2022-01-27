/*
** Automatically generated from `browser_info.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0;

#line 113 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0;

#line 116 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0;

#line 119 "mdb.browser_info.c"
static const MR_VA_TypeInfo_Struct2 mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0;

#line 122 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0;

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
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_down_dir_0_0[1];

#line 230 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_0;

#line 233 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_down_dir_0_1[1];

#line 236 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_1;

#line 239 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_down_dir_0_0[1];

#line 242 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_down_dir_0_1[1];

#line 245 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_down_dir_0[2];

#line 248 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_down_dir_0[2];

#line 251 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_down_dir_0[2];

#line 254 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_format_params_0_0[4];

#line 257 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_format_params_0_0[4];

#line 260 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0;

#line 263 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_format_params_0_0[1];

#line 266 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_format_params_0[1];

#line 269 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_format_params_0[1];

#line 272 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_format_params_0[1];

#line 275 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0;

#line 278 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1;

#line 281 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_how_track_subterm_0[2];

#line 284 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_how_track_subterm_0[2];

#line 287 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_how_track_subterm_0[2];

#line 290 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0;

#line 293 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_maybe_track_subterm_1_1[3];

#line 296 "mdb.browser_info.c"
static const MR_DuArgLocn mdb__browser_info__mdb__browser_info__field_locns_maybe_track_subterm_1_1[3];

#line 299 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1;

#line 302 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_0[1];

#line 305 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_1[1];

#line 308 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_maybe_track_subterm_1[2];

#line 311 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_maybe_track_subterm_1[2];

#line 314 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_maybe_track_subterm_1[2];

#line 317 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0;

#line 320 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_0[2];

#line 323 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0;

#line 326 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_1[2];

#line 329 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1;

#line 332 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_2[1];

#line 335 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2;

#line 338 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3;

#line 341 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_0[1];

#line 344 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_1[1];

#line 347 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_2[1];

#line 350 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_3[1];

#line 353 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_param_cmd_0[4];

#line 356 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_param_cmd_0[4];

#line 359 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_param_cmd_0[4];

#line 362 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0;

#line 365 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1;

#line 368 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2;

#line 371 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3;

#line 374 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_portray_format_0[4];

#line 377 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_portray_format_0[4];

#line 380 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_portray_format_0[4];

#line 383 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_0[1];

#line 386 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0;

#line 389 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_1[1];

#line 392 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1;

#line 395 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_2[1];

#line 398 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2;

#line 401 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_3[1];

#line 404 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3;

#line 407 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_4[1];

#line 410 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4;

#line 413 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_0[1];

#line 416 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_1[1];

#line 419 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_2[1];

#line 422 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_3[2];

#line 425 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_setting_0[4];

#line 428 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_setting_0[5];

#line 431 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_setting_0[5];

#line 434 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0;

#line 437 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1;

#line 440 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_should_assert_invalid_0[2];

#line 443 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_should_assert_invalid_0[2];

#line 446 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_should_assert_invalid_0[2];

#line 449 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_0[1];

#line 452 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0;

#line 455 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_1[1];

#line 458 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1;

#line 461 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2;

#line 464 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3;

#line 467 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4;

#line 470 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_0[3];

#line 473 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_1[1];

#line 476 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_2[1];

#line 479 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_term_browser_response_0[3];

#line 482 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_term_browser_response_0[5];

#line 485 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_term_browser_response_0[5];

#line 488 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_0;

#line 491 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_up_down_dir_0_1[1];

#line 494 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_1;

#line 497 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_up_down_dir_0_2[1];

#line 500 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_2;

#line 503 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_0[1];

#line 506 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_1[1];

#line 509 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_2[1];

#line 512 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_up_down_dir_0[3];

#line 515 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_up_down_dir_0[3];

#line 518 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_up_down_dir_0[3];

#line 521 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browse_caller_type_0_0_10001(
#line 524 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 526 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 529 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browse_caller_type_0_0_10001(
#line 532 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 534 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 536 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 539 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_db_0_0_10001(
#line 542 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 544 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 547 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_db_0_0_10001(
#line 550 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 552 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 554 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 557 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_info_0_0_10001(
#line 560 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 562 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 565 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_info_0_0_10001(
#line 568 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 570 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 572 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 575 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_mode_func_0_0_10001(
#line 578 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 580 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 583 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_mode_func_0_0_10001(
#line 586 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 588 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 590 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 593 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_persistent_state_0_0_10001(
#line 596 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 598 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 601 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_persistent_state_0_0_10001(
#line 604 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 606 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 608 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 611 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_term_mode_0_0_10001(
#line 614 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 616 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 619 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_term_mode_0_0_10001(
#line 622 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 624 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 626 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 629 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0_10001(
#line 632 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 634 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 637 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0_10001(
#line 640 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 642 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 644 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 647 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____debugger_0_0_10001(
#line 650 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 652 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 655 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____debugger_0_0_10001(
#line 658 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 660 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 662 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 665 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____down_dir_0_0_10001(
#line 668 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 670 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 673 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____down_dir_0_0_10001(
#line 676 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 678 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 680 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 683 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____format_params_0_0_10001(
#line 686 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 688 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 691 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____format_params_0_0_10001(
#line 694 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 696 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 698 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 701 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____how_track_subterm_0_0_10001(
#line 704 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 706 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 709 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____how_track_subterm_0_0_10001(
#line 712 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 714 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 716 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 719 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____maybe_track_subterm_1_0_10001(
#line 722 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 724 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 726 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 729 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____maybe_track_subterm_1_0_10001(
#line 732 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 734 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_2,
#line 736 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 738 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_4);

#line 741 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____param_cmd_0_0_10001(
#line 744 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 746 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 749 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____param_cmd_0_0_10001(
#line 752 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 754 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 756 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 759 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____portray_format_0_0_10001(
#line 762 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 764 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 767 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____portray_format_0_0_10001(
#line 770 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 772 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 774 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 777 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____setting_0_0_10001(
#line 780 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 782 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 785 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____setting_0_0_10001(
#line 788 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 790 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 792 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 795 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____should_assert_invalid_0_0_10001(
#line 798 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 800 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 803 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____should_assert_invalid_0_0_10001(
#line 806 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 808 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 810 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 813 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____term_browser_response_0_0_10001(
#line 816 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 818 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 821 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____term_browser_response_0_0_10001(
#line 824 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 826 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 828 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 831 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____up_down_dir_0_0_10001(
#line 834 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 836 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 839 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____up_down_dir_0_0_10001(
#line 842 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 844 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 846 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 849 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
#line 852 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 854 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 856 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 858 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 860 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4);

#line 863 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
#line 866 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 868 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 870 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 872 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 874 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4);

#line 877 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
#line 880 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 882 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 884 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_2,
#line 886 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 888 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4);

#line 891 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
#line 894 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 896 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 898 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 900 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_3);

#line 1039 "browser_info.m"
static void MR_CALL 
mdb__browser_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(
#line 1039 "browser_info.m"
  MR_String * mdb__browser_info__HeadVar__2_2);

#line 1053 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(
#line 1053 "browser_info.m"
  MR_Word mdb__browser_info__D_5,
#line 1053 "browser_info.m"
  MR_String mdb__browser_info__S_6);

#line 1059 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
#line 1059 "browser_info.m"
  MR_Word mdb__browser_info__D_5,
#line 1059 "browser_info.m"
  MR_Integer mdb__browser_info__I_6);

#line 1039 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0(
#line 1039 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_5,
#line 1039 "browser_info.m"
  MR_String * mdb__browser_info__HeadVar__2_2);

#line 1043 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0(
#line 1043 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1);

#line 577 "browser_info.m"
static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0(
#line 577 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 577 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 577 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3);

#line 577 "browser_info.m"
static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0(
#line 577 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 577 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2);

#line 1187 "browser_info.m"
static void MR_CALL 
mdb__browser_info__browser_persistent_state_type_1_p_0(
#line 1187 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1);

#line 1170 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__format_params_to_desc_1_f_0(
#line 1170 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1);

#line 1160 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__format_params_to_mdb_command_2_f_0(
#line 1160 "browser_info.m"
  MR_String mdb__browser_info__CmdCallerOpt_4,
#line 1160 "browser_info.m"
  MR_Word mdb__browser_info__FormatParams_5);

#line 1150 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__caller_params_to_desc_1_f_0(
#line 1150 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1);

#line 1136 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__caller_params_to_mdb_command_2_f_0(
#line 1136 "browser_info.m"
  MR_String mdb__browser_info__CallerOpt_4,
#line 1136 "browser_info.m"
  MR_Word mdb__browser_info__CallerParams_5);

#line 1004 "browser_info.m"
static void MR_CALL 
mdb__browser_info__write_down_path_loop_4_p_0(
#line 1004 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_5,
#line 1004 "browser_info.m"
  MR_Word mdb__browser_info__Dirs_6);

#line 921 "browser_info.m"
static void MR_CALL 
mdb__browser_info__show_settings_caller_format_8_p_0(
#line 921 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_9,
#line 921 "browser_info.m"
  MR_Word mdb__browser_info__Info_10,
#line 921 "browser_info.m"
  MR_Word mdb__browser_info__Caller_11,
#line 921 "browser_info.m"
  MR_String mdb__browser_info__CallerName_12,
#line 921 "browser_info.m"
  MR_Word mdb__browser_info__Format_13,
#line 921 "browser_info.m"
  MR_String mdb__browser_info__FormatName_14);

#line 894 "browser_info.m"
static void MR_CALL 
mdb__browser_info__show_settings_caller_6_p_0(
#line 894 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_7,
#line 894 "browser_info.m"
  MR_Word mdb__browser_info__Info_8,
#line 894 "browser_info.m"
  MR_Word mdb__browser_info__Caller_9,
#line 894 "browser_info.m"
  MR_String mdb__browser_info__CallerName_10);

#line 805 "browser_info.m"
static void MR_CALL 
mdb__browser_info__maybe_set_param_2_4_p_0(
#line 805 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 805 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 805 "browser_info.m"
  MR_Word mdb__browser_info__Params_3,
#line 805 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__4_4);

#line 778 "browser_info.m"
static void MR_CALL 
mdb__browser_info__maybe_set_param_8_p_0(
#line 778 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 778 "browser_info.m"
  MR_Word mdb__browser_info__F_2,
#line 778 "browser_info.m"
  MR_Word mdb__browser_info__Pr_3,
#line 778 "browser_info.m"
  MR_Word mdb__browser_info__V_4,
#line 778 "browser_info.m"
  MR_Word mdb__browser_info__NPr_5,
#line 778 "browser_info.m"
  MR_Word mdb__browser_info__Setting_6,
#line 778 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Params_0_7,
#line 778 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Params_8);

#line 521 "browser_info.m"
static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_no_0_f_0(void);

#line 515 "browser_info.m"
static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_yes_0_f_0(void);

#line 497 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0(
#line 497 "browser_info.m"
  MR_String mdb__browser_info__FileName_4,
#line 497 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 497 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7);

#line 482 "browser_info.m"
static void MR_CALL 
mdb__browser_info__get_xml_tmp_filename_from_mdb_2_p_0(
#line 482 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 482 "browser_info.m"
  MR_String * mdb__browser_info__FileName_4);

#line 469 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0(
#line 469 "browser_info.m"
  MR_String mdb__browser_info__Command_4,
#line 469 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 469 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7);

#line 454 "browser_info.m"
static void MR_CALL 
mdb__browser_info__get_xml_browser_cmd_from_mdb_2_p_0(
#line 454 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 454 "browser_info.m"
  MR_String * mdb__browser_info__Command_4);

#line 429 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_format_from_mdb_6_p_0(
#line 429 "browser_info.m"
  MR_Word mdb__browser_info__P_7,
#line 429 "browser_info.m"
  MR_Word mdb__browser_info__B_8,
#line 429 "browser_info.m"
  MR_Word mdb__browser_info__A_9,
#line 429 "browser_info.m"
  MR_Word mdb__browser_info__Format_10,
#line 429 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_12,
#line 429 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_13);

#line 396 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_lines_from_mdb_10_p_0(
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
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21);

#line 385 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_width_from_mdb_10_p_0(
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
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21);

#line 374 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_size_from_mdb_10_p_0(
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
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21);

#line 363 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_depth_from_mdb_10_p_0(
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
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21);


static /* final */ const MR_Box mdb__browser_info_scalar_common_1[1][3];

static /* final */ const MR_Box mdb__browser_info_scalar_common_2[6][2];

static /* final */ const MR_Box mdb__browser_info_scalar_common_3[5][4];

static /* final */ const MR_Box mdb__browser_info_scalar_common_4[3][5];

static /* final */ const MR_Box mdb__browser_info_scalar_common_5[1][6];

static /* final */ const MR_Box mdb__browser_info_scalar_common_6[4][1];


#line 1180 "browser_info.m"
/* sealed */ struct mdb__browser_info__vector_common_type_7_0_s {
#line 1180 "browser_info.m"
  const MR_String mdb__browser_info__vector_common_type_7_0__vct_7_f_0;
#line 1180 "browser_info.m"
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
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0))
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

#line 355 "browser_info.m"
void 
ML_BROWSE_init_persistent_state(
#line 355 "browser_info.m"
  MR_Word * mdb__browser_info__State_2)
#line 355 "browser_info.m"
{
#line 355 "browser_info.m"
	mdb__browser_info__init_persistent_state_1_p_0((MR_Word *) mdb__browser_info__State_2);
}

#line 366 "browser_info.m"
void 
ML_BROWSE_set_depth_from_mdb(
#line 366 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 366 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 366 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 366 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 366 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 366 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 366 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 366 "browser_info.m"
  MR_Integer mdb__browser_info__Depth_18,
#line 366 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 366 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 366 "browser_info.m"
{
#line 366 "browser_info.m"
	mdb__browser_info__set_depth_from_mdb_10_p_0((MR_Word) mdb__browser_info__P_11, (MR_Word) mdb__browser_info__B_12, (MR_Word) mdb__browser_info__A_13, (MR_Word) mdb__browser_info__F_14, (MR_Word) mdb__browser_info__Pr_15, (MR_Word) mdb__browser_info__V_16, (MR_Word) mdb__browser_info__NPr_17, (MR_Integer) mdb__browser_info__Depth_18, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_20, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_21);
}

#line 377 "browser_info.m"
void 
ML_BROWSE_set_size_from_mdb(
#line 377 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 377 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 377 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 377 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 377 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 377 "browser_info.m"
  MR_Word mdb__browser_info__NPr_16,
#line 377 "browser_info.m"
  MR_Word mdb__browser_info__V_17,
#line 377 "browser_info.m"
  MR_Integer mdb__browser_info__Size_18,
#line 377 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 377 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 377 "browser_info.m"
{
#line 377 "browser_info.m"
	mdb__browser_info__set_size_from_mdb_10_p_0((MR_Word) mdb__browser_info__P_11, (MR_Word) mdb__browser_info__B_12, (MR_Word) mdb__browser_info__A_13, (MR_Word) mdb__browser_info__F_14, (MR_Word) mdb__browser_info__Pr_15, (MR_Word) mdb__browser_info__NPr_16, (MR_Word) mdb__browser_info__V_17, (MR_Integer) mdb__browser_info__Size_18, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_20, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_21);
}

#line 388 "browser_info.m"
void 
ML_BROWSE_set_width_from_mdb(
#line 388 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 388 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 388 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 388 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 388 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 388 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 388 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 388 "browser_info.m"
  MR_Integer mdb__browser_info__Width_18,
#line 388 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 388 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 388 "browser_info.m"
{
#line 388 "browser_info.m"
	mdb__browser_info__set_width_from_mdb_10_p_0((MR_Word) mdb__browser_info__P_11, (MR_Word) mdb__browser_info__B_12, (MR_Word) mdb__browser_info__A_13, (MR_Word) mdb__browser_info__F_14, (MR_Word) mdb__browser_info__Pr_15, (MR_Word) mdb__browser_info__V_16, (MR_Word) mdb__browser_info__NPr_17, (MR_Integer) mdb__browser_info__Width_18, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_20, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_21);
}

#line 399 "browser_info.m"
void 
ML_BROWSE_set_lines_from_mdb(
#line 399 "browser_info.m"
  MR_Word mdb__browser_info__P_11,
#line 399 "browser_info.m"
  MR_Word mdb__browser_info__B_12,
#line 399 "browser_info.m"
  MR_Word mdb__browser_info__A_13,
#line 399 "browser_info.m"
  MR_Word mdb__browser_info__F_14,
#line 399 "browser_info.m"
  MR_Word mdb__browser_info__Pr_15,
#line 399 "browser_info.m"
  MR_Word mdb__browser_info__V_16,
#line 399 "browser_info.m"
  MR_Word mdb__browser_info__NPr_17,
#line 399 "browser_info.m"
  MR_Integer mdb__browser_info__Lines_18,
#line 399 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_20,
#line 399 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_21)
#line 399 "browser_info.m"
{
#line 399 "browser_info.m"
	mdb__browser_info__set_lines_from_mdb_10_p_0((MR_Word) mdb__browser_info__P_11, (MR_Word) mdb__browser_info__B_12, (MR_Word) mdb__browser_info__A_13, (MR_Word) mdb__browser_info__F_14, (MR_Word) mdb__browser_info__Pr_15, (MR_Word) mdb__browser_info__V_16, (MR_Word) mdb__browser_info__NPr_17, (MR_Integer) mdb__browser_info__Lines_18, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_20, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_21);
}

#line 431 "browser_info.m"
void 
ML_BROWSE_set_format_from_mdb(
#line 431 "browser_info.m"
  MR_Word mdb__browser_info__P_7,
#line 431 "browser_info.m"
  MR_Word mdb__browser_info__B_8,
#line 431 "browser_info.m"
  MR_Word mdb__browser_info__A_9,
#line 431 "browser_info.m"
  MR_Word mdb__browser_info__Format_10,
#line 431 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_12,
#line 431 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_13)
#line 431 "browser_info.m"
{
#line 431 "browser_info.m"
	mdb__browser_info__set_format_from_mdb_6_p_0((MR_Word) mdb__browser_info__P_7, (MR_Word) mdb__browser_info__B_8, (MR_Word) mdb__browser_info__A_9, (MR_Word) mdb__browser_info__Format_10, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_12, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_13);
}

#line 440 "browser_info.m"
void 
ML_BROWSE_get_num_io_actions(
#line 440 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 440 "browser_info.m"
  MR_Integer * mdb__browser_info__NumIOActions_4)
#line 440 "browser_info.m"
{
#line 440 "browser_info.m"
	mdb__browser_info__get_num_io_actions_2_p_0((MR_Word) mdb__browser_info__Browser_3, (MR_Integer *) mdb__browser_info__NumIOActions_4);
}

#line 447 "browser_info.m"
void 
ML_BROWSE_set_num_io_actions(
#line 447 "browser_info.m"
  MR_Integer mdb__browser_info__NumIOActions_4,
#line 447 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 447 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 447 "browser_info.m"
{
#line 447 "browser_info.m"
	mdb__browser_info__set_num_io_actions_3_p_0((MR_Integer) mdb__browser_info__NumIOActions_4, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_7);
}

#line 456 "browser_info.m"
void 
ML_BROWSE_get_xml_browser_cmd_from_mdb(
#line 456 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 456 "browser_info.m"
  MR_String * mdb__browser_info__Command_4)
#line 456 "browser_info.m"
{
#line 456 "browser_info.m"
	mdb__browser_info__get_xml_browser_cmd_from_mdb_2_p_0((MR_Word) mdb__browser_info__Browser_3, (MR_String *) mdb__browser_info__Command_4);
}

#line 471 "browser_info.m"
void 
ML_BROWSE_set_xml_browser_cmd_from_mdb(
#line 471 "browser_info.m"
  MR_String mdb__browser_info__Command_4,
#line 471 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 471 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 471 "browser_info.m"
{
#line 471 "browser_info.m"
	mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0((MR_String) mdb__browser_info__Command_4, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_7);
}

#line 484 "browser_info.m"
void 
ML_BROWSE_get_xml_tmp_filename_from_mdb(
#line 484 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 484 "browser_info.m"
  MR_String * mdb__browser_info__FileName_4)
#line 484 "browser_info.m"
{
#line 484 "browser_info.m"
	mdb__browser_info__get_xml_tmp_filename_from_mdb_2_p_0((MR_Word) mdb__browser_info__Browser_3, (MR_String *) mdb__browser_info__FileName_4);
}

#line 499 "browser_info.m"
void 
ML_BROWSE_set_xml_tmp_filename_from_mdb(
#line 499 "browser_info.m"
  MR_String mdb__browser_info__FileName_4,
#line 499 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 499 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 499 "browser_info.m"
{
#line 499 "browser_info.m"
	mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0((MR_String) mdb__browser_info__FileName_4, (MR_Word) mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Word *) mdb__browser_info__STATE_VARIABLE_Browser_7);
}

#line 516 "browser_info.m"
MR_Word 
ML_BROWSE_mercury_bool_yes(void)
#line 516 "browser_info.m"
{
#line 516 "browser_info.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_info__mercury_bool_yes_0_f_0();
	return ret_value;
}

#line 522 "browser_info.m"
MR_Word 
ML_BROWSE_mercury_bool_no(void)
#line 522 "browser_info.m"
{
#line 522 "browser_info.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_info__mercury_bool_no_0_f_0();
	return ret_value;
}

#line 1066 "browser_info.m"
void 
ML_BROWSE_browser_params_to_string(
#line 1066 "browser_info.m"
  MR_Word mdb__browser_info__Browser_4,
#line 1066 "browser_info.m"
  MR_Word mdb__browser_info__MDBCommandFormat_5,
#line 1066 "browser_info.m"
  MR_String * mdb__browser_info__Desc_6)
#line 1066 "browser_info.m"
{
#line 1066 "browser_info.m"
	mdb__browser_info__browser_params_to_string_3_p_0((MR_Word) mdb__browser_info__Browser_4, (MR_Word) mdb__browser_info__MDBCommandFormat_5, (MR_String *) mdb__browser_info__Desc_6);
}

#line 1188 "browser_info.m"
void 
ML_BROWSE_browser_persistent_state_type(
#line 1188 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1)
#line 1188 "browser_info.m"
{
#line 1188 "browser_info.m"
	mdb__browser_info__browser_persistent_state_type_1_p_0((MR_Word *) mdb__browser_info__HeadVar__1_1);
}


#line 1680 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0 = {
  (MR_String) "print",
  (MR_Integer) 0
};

#line 1686 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1 = {
  (MR_String) "browse",
  (MR_Integer) 1
};

#line 1692 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2 = {
  (MR_String) "print_all",
  (MR_Integer) 2
};

#line 1698 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browse_caller_type_0[3] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2
};

#line 1705 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browse_caller_type_0[3] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2
};

#line 1712 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browse_caller_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1719 "mdb.browser_info.c"
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

#line 1736 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_db_0[1] = {
  (MR_Integer) 0
};

#line 1741 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct2 mdb__browser_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0io__type_ctor_info_stream_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_stream_info_0
  }
};

#line 1750 "mdb.browser_info.c"
static const MR_NotagFunctorDesc mdb__browser_info__mdb__browser_info__notag_functor_desc_browser_db_0 = {
  (MR_String) "browser_db",
  (MR_PseudoTypeInfo) &mdb__browser_info__tree234__ti_tree234_2builtin__type_ctor_info_int_0io__type_ctor_info_stream_info_0,
  (MR_String) "browser_stream_db"
};

#line 1757 "mdb.browser_info.c"
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

#line 1774 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0
  }
};

#line 1782 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0
  }
};

#line 1790 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0 = {
  &mdb__browser_info__mdb__browser_info__type_ctor_info_maybe_track_subterm_1,
  {
    (MR_TypeInfo) &mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0
  }
};

#line 1798 "mdb.browser_info.c"
static const MR_VA_TypeInfo_Struct2 mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0,
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0
  }
};

#line 1808 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0
  }
};

#line 1816 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_info_0_0[7] = {
  (MR_PseudoTypeInfo) &mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browse_caller_type_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0
};

#line 1827 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_info_0_0[7] = {
  (MR_String) "bri_term",
  (MR_String) "bri_dirs",
  (MR_String) "bri_caller_type",
  (MR_String) "bri_format",
  (MR_String) "bri_state",
  (MR_String) "bri_maybe_track",
  (MR_String) "bri_maybe_mode_func"
};

#line 1838 "mdb.browser_info.c"
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

#line 1853 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_info_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0
};

#line 1858 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_info_0_0
  }
};

#line 1867 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_info_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0
};

#line 1872 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_info_0[1] = {
  (MR_Integer) 0
};

#line 1877 "mdb.browser_info.c"
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

#line 1894 "mdb.browser_info.c"
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
  {     (MR_PseudoTypeInfo) &mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1911 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1919 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_persistent_state_0_0[6] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 1929 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_persistent_state_0_0[6] = {
  (MR_String) "print_params",
  (MR_String) "browse_params",
  (MR_String) "print_all_params",
  (MR_String) "num_printed_io_actions",
  (MR_String) "xml_browser_cmd",
  (MR_String) "xml_tmp_filename"
};

#line 1939 "mdb.browser_info.c"
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

#line 1954 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0
};

#line 1959 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_persistent_state_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0
  }
};

#line 1968 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_persistent_state_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0
};

#line 1973 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_persistent_state_0[1] = {
  (MR_Integer) 0
};

#line 1978 "mdb.browser_info.c"
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

#line 1995 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0 = {
  (MR_String) "input",
  (MR_Integer) 0
};

#line 2001 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1 = {
  (MR_String) "output",
  (MR_Integer) 1
};

#line 2007 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2 = {
  (MR_String) "unbound",
  (MR_Integer) 2
};

#line 2013 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3 = {
  (MR_String) "not_applicable",
  (MR_Integer) 3
};

#line 2019 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browser_term_mode_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3
};

#line 2027 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browser_term_mode_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2
};

#line 2035 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_term_mode_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 2043 "mdb.browser_info.c"
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

#line 2060 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_caller_params_0_0[5] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0
};

#line 2069 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_caller_params_0_0[5] = {
  (MR_String) "default_format",
  (MR_String) "flat_params",
  (MR_String) "raw_pretty_params",
  (MR_String) "verbose_params",
  (MR_String) "pretty_params"
};

#line 2078 "mdb.browser_info.c"
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

#line 2093 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_caller_params_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0
};

#line 2098 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_caller_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_caller_params_0_0
  }
};

#line 2107 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_caller_params_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0
};

#line 2112 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_caller_params_0[1] = {
  (MR_Integer) 0
};

#line 2117 "mdb.browser_info.c"
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

#line 2134 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0 = {
  (MR_String) "debugger_internal",
  (MR_Integer) 0
};

#line 2140 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1 = {
  (MR_String) "debugger_external",
  (MR_Integer) 1
};

#line 2146 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_debugger_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1
};

#line 2152 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_debugger_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0
};

#line 2158 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_debugger_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2164 "mdb.browser_info.c"
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

#line 2181 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_down_dir_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2186 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_0 = {
  (MR_String) "down_child_num",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__browser_info__mdb__browser_info__field_types_down_dir_0_0,
  NULL,
  NULL,
  NULL
};

#line 2201 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_down_dir_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2206 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_1 = {
  (MR_String) "down_child_name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__browser_info__mdb__browser_info__field_types_down_dir_0_1,
  NULL,
  NULL,
  NULL
};

#line 2221 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_down_dir_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_0
};

#line 2226 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_down_dir_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_1
};

#line 2231 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_down_dir_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_down_dir_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_down_dir_0_1
  }
};

#line 2245 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_down_dir_0[2] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_0
};

#line 2251 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_down_dir_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2257 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____down_dir_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____down_dir_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "down_dir",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_down_dir_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_down_dir_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_down_dir_0
};

#line 2274 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_format_params_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2282 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_format_params_0_0[4] = {
  (MR_String) "depth",
  (MR_String) "size",
  (MR_String) "width",
  (MR_String) "lines"
};

#line 2290 "mdb.browser_info.c"
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

#line 2305 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_format_params_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0
};

#line 2310 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_format_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_format_params_0_0
  }
};

#line 2319 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_format_params_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0
};

#line 2324 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_format_params_0[1] = {
  (MR_Integer) 0
};

#line 2329 "mdb.browser_info.c"
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

#line 2346 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0 = {
  (MR_String) "track_accurate",
  (MR_Integer) 0
};

#line 2352 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1 = {
  (MR_String) "track_fast",
  (MR_Integer) 1
};

#line 2358 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_how_track_subterm_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1
};

#line 2364 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_how_track_subterm_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1
};

#line 2370 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_how_track_subterm_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2376 "mdb.browser_info.c"
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

#line 2393 "mdb.browser_info.c"
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

#line 2408 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_maybe_track_subterm_1_1[3] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2415 "mdb.browser_info.c"
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

#line 2434 "mdb.browser_info.c"
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

#line 2449 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0
};

#line 2454 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1
};

#line 2459 "mdb.browser_info.c"
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

#line 2473 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_maybe_track_subterm_1[2] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1
};

#line 2479 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_maybe_track_subterm_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2485 "mdb.browser_info.c"
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

#line 2502 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_TypeInfo) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0
  }
};

#line 2510 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0
};

#line 2516 "mdb.browser_info.c"
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

#line 2531 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_1[2] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0
};

#line 2537 "mdb.browser_info.c"
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

#line 2552 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2557 "mdb.browser_info.c"
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

#line 2572 "mdb.browser_info.c"
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

#line 2587 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3
};

#line 2592 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0
};

#line 2597 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1
};

#line 2602 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_3[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2
};

#line 2607 "mdb.browser_info.c"
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

#line 2631 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_param_cmd_0[4] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3
};

#line 2639 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_param_cmd_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2647 "mdb.browser_info.c"
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

#line 2664 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0 = {
  (MR_String) "flat",
  (MR_Integer) 0
};

#line 2670 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1 = {
  (MR_String) "raw_pretty",
  (MR_Integer) 1
};

#line 2676 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2 = {
  (MR_String) "verbose",
  (MR_Integer) 2
};

#line 2682 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3 = {
  (MR_String) "pretty",
  (MR_Integer) 3
};

#line 2688 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_portray_format_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3
};

#line 2696 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_portray_format_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2
};

#line 2704 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_portray_format_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 2712 "mdb.browser_info.c"
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

#line 2729 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2734 "mdb.browser_info.c"
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

#line 2749 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2754 "mdb.browser_info.c"
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

#line 2769 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2774 "mdb.browser_info.c"
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

#line 2789 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2794 "mdb.browser_info.c"
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

#line 2809 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_4[1] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0
};

#line 2814 "mdb.browser_info.c"
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

#line 2829 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0
};

#line 2834 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1
};

#line 2839 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2
};

#line 2844 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_3[2] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4
};

#line 2850 "mdb.browser_info.c"
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

#line 2874 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_setting_0[5] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2
};

#line 2883 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_setting_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2892 "mdb.browser_info.c"
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

#line 2909 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0 = {
  (MR_String) "assert_invalid",
  (MR_Integer) 0
};

#line 2915 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1 = {
  (MR_String) "no_assert_invalid",
  (MR_Integer) 1
};

#line 2921 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_should_assert_invalid_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1
};

#line 2927 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_should_assert_invalid_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1
};

#line 2933 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_should_assert_invalid_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2939 "mdb.browser_info.c"
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

#line 2956 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2961 "mdb.browser_info.c"
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

#line 2976 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2981 "mdb.browser_info.c"
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

#line 2996 "mdb.browser_info.c"
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

#line 3011 "mdb.browser_info.c"
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

#line 3026 "mdb.browser_info.c"
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

#line 3041 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_0[3] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4
};

#line 3048 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0
};

#line 3053 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1
};

#line 3058 "mdb.browser_info.c"
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

#line 3077 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_term_browser_response_0[5] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0
};

#line 3086 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_term_browser_response_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 3095 "mdb.browser_info.c"
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

#line 3112 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_0 = {
  (MR_String) "updown_parent",
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

#line 3127 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_up_down_dir_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3132 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_1 = {
  (MR_String) "updown_child_num",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__browser_info__mdb__browser_info__field_types_up_down_dir_0_1,
  NULL,
  NULL,
  NULL
};

#line 3147 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_up_down_dir_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 3152 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_2 = {
  (MR_String) "updown_child_name",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__browser_info__mdb__browser_info__field_types_up_down_dir_0_2,
  NULL,
  NULL,
  NULL
};

#line 3167 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_0
};

#line 3172 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_1
};

#line 3177 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_2
};

#line 3182 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_up_down_dir_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_2
  }
};

#line 3201 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_up_down_dir_0[3] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_0
};

#line 3208 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_up_down_dir_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3215 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____up_down_dir_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____up_down_dir_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "up_down_dir",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_up_down_dir_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_up_down_dir_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_up_down_dir_0
};

#line 3232 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

#line 3242 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

#line 3252 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

#line 3262 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0_10001))
};

#line 3272 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browse_caller_type_0_0_10001(
#line 3275 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3277 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3279 "mdb.browser_info.c"
{
#line 3281 "mdb.browser_info.c"
  {
#line 3283 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3286 "mdb.browser_info.c"
    {
#line 3288 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browse_caller_type_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3291 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3293 "mdb.browser_info.c"
  }
#line 3295 "mdb.browser_info.c"
}

#line 3298 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browse_caller_type_0_0_10001(
#line 3301 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3303 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3305 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3307 "mdb.browser_info.c"
{
#line 3309 "mdb.browser_info.c"
  {
#line 3311 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3314 "mdb.browser_info.c"
    {
#line 3316 "mdb.browser_info.c"
      mdb__browser_info____Compare____browse_caller_type_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3319 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3321 "mdb.browser_info.c"
  }
#line 3323 "mdb.browser_info.c"
}

#line 3326 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_db_0_0_10001(
#line 3329 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3331 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3333 "mdb.browser_info.c"
{
#line 3335 "mdb.browser_info.c"
  {
#line 3337 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3340 "mdb.browser_info.c"
    {
#line 3342 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_db_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3345 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3347 "mdb.browser_info.c"
  }
#line 3349 "mdb.browser_info.c"
}

#line 3352 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_db_0_0_10001(
#line 3355 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3357 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3359 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3361 "mdb.browser_info.c"
{
#line 3363 "mdb.browser_info.c"
  {
#line 3365 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3368 "mdb.browser_info.c"
    {
#line 3370 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_db_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3373 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3375 "mdb.browser_info.c"
  }
#line 3377 "mdb.browser_info.c"
}

#line 3380 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_info_0_0_10001(
#line 3383 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3385 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3387 "mdb.browser_info.c"
{
#line 3389 "mdb.browser_info.c"
  {
#line 3391 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3394 "mdb.browser_info.c"
    {
#line 3396 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_info_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3399 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3401 "mdb.browser_info.c"
  }
#line 3403 "mdb.browser_info.c"
}

#line 3406 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_info_0_0_10001(
#line 3409 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3411 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3413 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3415 "mdb.browser_info.c"
{
#line 3417 "mdb.browser_info.c"
  {
#line 3419 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3422 "mdb.browser_info.c"
    {
#line 3424 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_info_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3427 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3429 "mdb.browser_info.c"
  }
#line 3431 "mdb.browser_info.c"
}

#line 3434 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_mode_func_0_0_10001(
#line 3437 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3439 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3441 "mdb.browser_info.c"
{
#line 3443 "mdb.browser_info.c"
  {
#line 3445 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3448 "mdb.browser_info.c"
    {
#line 3450 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_mode_func_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3453 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3455 "mdb.browser_info.c"
  }
#line 3457 "mdb.browser_info.c"
}

#line 3460 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_mode_func_0_0_10001(
#line 3463 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3465 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3467 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3469 "mdb.browser_info.c"
{
#line 3471 "mdb.browser_info.c"
  {
#line 3473 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3476 "mdb.browser_info.c"
    {
#line 3478 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_mode_func_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3481 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3483 "mdb.browser_info.c"
  }
#line 3485 "mdb.browser_info.c"
}

#line 3488 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_persistent_state_0_0_10001(
#line 3491 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3493 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3495 "mdb.browser_info.c"
{
#line 3497 "mdb.browser_info.c"
  {
#line 3499 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3502 "mdb.browser_info.c"
    {
#line 3504 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_persistent_state_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3507 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3509 "mdb.browser_info.c"
  }
#line 3511 "mdb.browser_info.c"
}

#line 3514 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_persistent_state_0_0_10001(
#line 3517 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3519 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3521 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3523 "mdb.browser_info.c"
{
#line 3525 "mdb.browser_info.c"
  {
#line 3527 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3530 "mdb.browser_info.c"
    {
#line 3532 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_persistent_state_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3535 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3537 "mdb.browser_info.c"
  }
#line 3539 "mdb.browser_info.c"
}

#line 3542 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_term_mode_0_0_10001(
#line 3545 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3547 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3549 "mdb.browser_info.c"
{
#line 3551 "mdb.browser_info.c"
  {
#line 3553 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3556 "mdb.browser_info.c"
    {
#line 3558 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_term_mode_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3561 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3563 "mdb.browser_info.c"
  }
#line 3565 "mdb.browser_info.c"
}

#line 3568 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_term_mode_0_0_10001(
#line 3571 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3573 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3575 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3577 "mdb.browser_info.c"
{
#line 3579 "mdb.browser_info.c"
  {
#line 3581 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3584 "mdb.browser_info.c"
    {
#line 3586 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_term_mode_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3589 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3591 "mdb.browser_info.c"
  }
#line 3593 "mdb.browser_info.c"
}

#line 3596 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0_10001(
#line 3599 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3601 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3603 "mdb.browser_info.c"
{
#line 3605 "mdb.browser_info.c"
  {
#line 3607 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3610 "mdb.browser_info.c"
    {
#line 3612 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____caller_params_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3615 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3617 "mdb.browser_info.c"
  }
#line 3619 "mdb.browser_info.c"
}

#line 3622 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0_10001(
#line 3625 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3627 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3629 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3631 "mdb.browser_info.c"
{
#line 3633 "mdb.browser_info.c"
  {
#line 3635 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3638 "mdb.browser_info.c"
    {
#line 3640 "mdb.browser_info.c"
      mdb__browser_info____Compare____caller_params_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3643 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3645 "mdb.browser_info.c"
  }
#line 3647 "mdb.browser_info.c"
}

#line 3650 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____debugger_0_0_10001(
#line 3653 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3655 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3657 "mdb.browser_info.c"
{
#line 3659 "mdb.browser_info.c"
  {
#line 3661 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3664 "mdb.browser_info.c"
    {
#line 3666 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____debugger_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3669 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3671 "mdb.browser_info.c"
  }
#line 3673 "mdb.browser_info.c"
}

#line 3676 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____debugger_0_0_10001(
#line 3679 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3681 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3683 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3685 "mdb.browser_info.c"
{
#line 3687 "mdb.browser_info.c"
  {
#line 3689 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3692 "mdb.browser_info.c"
    {
#line 3694 "mdb.browser_info.c"
      mdb__browser_info____Compare____debugger_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3697 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3699 "mdb.browser_info.c"
  }
#line 3701 "mdb.browser_info.c"
}

#line 3704 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____down_dir_0_0_10001(
#line 3707 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3709 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3711 "mdb.browser_info.c"
{
#line 3713 "mdb.browser_info.c"
  {
#line 3715 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3718 "mdb.browser_info.c"
    {
#line 3720 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____down_dir_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3723 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3725 "mdb.browser_info.c"
  }
#line 3727 "mdb.browser_info.c"
}

#line 3730 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____down_dir_0_0_10001(
#line 3733 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3735 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3737 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3739 "mdb.browser_info.c"
{
#line 3741 "mdb.browser_info.c"
  {
#line 3743 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3746 "mdb.browser_info.c"
    {
#line 3748 "mdb.browser_info.c"
      mdb__browser_info____Compare____down_dir_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3751 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3753 "mdb.browser_info.c"
  }
#line 3755 "mdb.browser_info.c"
}

#line 3758 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____format_params_0_0_10001(
#line 3761 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3763 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3765 "mdb.browser_info.c"
{
#line 3767 "mdb.browser_info.c"
  {
#line 3769 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3772 "mdb.browser_info.c"
    {
#line 3774 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3777 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3779 "mdb.browser_info.c"
  }
#line 3781 "mdb.browser_info.c"
}

#line 3784 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____format_params_0_0_10001(
#line 3787 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3789 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3791 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3793 "mdb.browser_info.c"
{
#line 3795 "mdb.browser_info.c"
  {
#line 3797 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3800 "mdb.browser_info.c"
    {
#line 3802 "mdb.browser_info.c"
      mdb__browser_info____Compare____format_params_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3805 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3807 "mdb.browser_info.c"
  }
#line 3809 "mdb.browser_info.c"
}

#line 3812 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____how_track_subterm_0_0_10001(
#line 3815 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3817 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3819 "mdb.browser_info.c"
{
#line 3821 "mdb.browser_info.c"
  {
#line 3823 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3826 "mdb.browser_info.c"
    {
#line 3828 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____how_track_subterm_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3831 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3833 "mdb.browser_info.c"
  }
#line 3835 "mdb.browser_info.c"
}

#line 3838 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____how_track_subterm_0_0_10001(
#line 3841 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3843 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3845 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3847 "mdb.browser_info.c"
{
#line 3849 "mdb.browser_info.c"
  {
#line 3851 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3854 "mdb.browser_info.c"
    {
#line 3856 "mdb.browser_info.c"
      mdb__browser_info____Compare____how_track_subterm_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3859 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3861 "mdb.browser_info.c"
  }
#line 3863 "mdb.browser_info.c"
}

#line 3866 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____maybe_track_subterm_1_0_10001(
#line 3869 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3871 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3873 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3875 "mdb.browser_info.c"
{
#line 3877 "mdb.browser_info.c"
  {
#line 3879 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3882 "mdb.browser_info.c"
    {
#line 3884 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____maybe_track_subterm_1_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3887 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3889 "mdb.browser_info.c"
  }
#line 3891 "mdb.browser_info.c"
}

#line 3894 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____maybe_track_subterm_1_0_10001(
#line 3897 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3899 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_2,
#line 3901 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 3903 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_4)
#line 3905 "mdb.browser_info.c"
{
#line 3907 "mdb.browser_info.c"
  {
#line 3909 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3912 "mdb.browser_info.c"
    {
#line 3914 "mdb.browser_info.c"
      mdb__browser_info____Compare____maybe_track_subterm_1_0(((MR_Word) mdb__browser_info__wrapper_arg_1), &mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_3), ((MR_Word) mdb__browser_info__wrapper_arg_4));
    }
#line 3917 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_2 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3919 "mdb.browser_info.c"
  }
#line 3921 "mdb.browser_info.c"
}

#line 3924 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____param_cmd_0_0_10001(
#line 3927 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3929 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3931 "mdb.browser_info.c"
{
#line 3933 "mdb.browser_info.c"
  {
#line 3935 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3938 "mdb.browser_info.c"
    {
#line 3940 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____param_cmd_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3943 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3945 "mdb.browser_info.c"
  }
#line 3947 "mdb.browser_info.c"
}

#line 3950 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____param_cmd_0_0_10001(
#line 3953 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3955 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3957 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3959 "mdb.browser_info.c"
{
#line 3961 "mdb.browser_info.c"
  {
#line 3963 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3966 "mdb.browser_info.c"
    {
#line 3968 "mdb.browser_info.c"
      mdb__browser_info____Compare____param_cmd_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3971 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3973 "mdb.browser_info.c"
  }
#line 3975 "mdb.browser_info.c"
}

#line 3978 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____portray_format_0_0_10001(
#line 3981 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3983 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3985 "mdb.browser_info.c"
{
#line 3987 "mdb.browser_info.c"
  {
#line 3989 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3992 "mdb.browser_info.c"
    {
#line 3994 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____portray_format_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3997 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3999 "mdb.browser_info.c"
  }
#line 4001 "mdb.browser_info.c"
}

#line 4004 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____portray_format_0_0_10001(
#line 4007 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 4009 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4011 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 4013 "mdb.browser_info.c"
{
#line 4015 "mdb.browser_info.c"
  {
#line 4017 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 4020 "mdb.browser_info.c"
    {
#line 4022 "mdb.browser_info.c"
      mdb__browser_info____Compare____portray_format_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 4025 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 4027 "mdb.browser_info.c"
  }
#line 4029 "mdb.browser_info.c"
}

#line 4032 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____setting_0_0_10001(
#line 4035 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4037 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 4039 "mdb.browser_info.c"
{
#line 4041 "mdb.browser_info.c"
  {
#line 4043 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 4046 "mdb.browser_info.c"
    {
#line 4048 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____setting_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 4051 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 4053 "mdb.browser_info.c"
  }
#line 4055 "mdb.browser_info.c"
}

#line 4058 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____setting_0_0_10001(
#line 4061 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 4063 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4065 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 4067 "mdb.browser_info.c"
{
#line 4069 "mdb.browser_info.c"
  {
#line 4071 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 4074 "mdb.browser_info.c"
    {
#line 4076 "mdb.browser_info.c"
      mdb__browser_info____Compare____setting_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 4079 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 4081 "mdb.browser_info.c"
  }
#line 4083 "mdb.browser_info.c"
}

#line 4086 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____should_assert_invalid_0_0_10001(
#line 4089 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4091 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 4093 "mdb.browser_info.c"
{
#line 4095 "mdb.browser_info.c"
  {
#line 4097 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 4100 "mdb.browser_info.c"
    {
#line 4102 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____should_assert_invalid_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 4105 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 4107 "mdb.browser_info.c"
  }
#line 4109 "mdb.browser_info.c"
}

#line 4112 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____should_assert_invalid_0_0_10001(
#line 4115 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 4117 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4119 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 4121 "mdb.browser_info.c"
{
#line 4123 "mdb.browser_info.c"
  {
#line 4125 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 4128 "mdb.browser_info.c"
    {
#line 4130 "mdb.browser_info.c"
      mdb__browser_info____Compare____should_assert_invalid_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 4133 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 4135 "mdb.browser_info.c"
  }
#line 4137 "mdb.browser_info.c"
}

#line 4140 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____term_browser_response_0_0_10001(
#line 4143 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4145 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 4147 "mdb.browser_info.c"
{
#line 4149 "mdb.browser_info.c"
  {
#line 4151 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 4154 "mdb.browser_info.c"
    {
#line 4156 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____term_browser_response_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 4159 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 4161 "mdb.browser_info.c"
  }
#line 4163 "mdb.browser_info.c"
}

#line 4166 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____term_browser_response_0_0_10001(
#line 4169 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 4171 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4173 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 4175 "mdb.browser_info.c"
{
#line 4177 "mdb.browser_info.c"
  {
#line 4179 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 4182 "mdb.browser_info.c"
    {
#line 4184 "mdb.browser_info.c"
      mdb__browser_info____Compare____term_browser_response_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 4187 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 4189 "mdb.browser_info.c"
  }
#line 4191 "mdb.browser_info.c"
}

#line 4194 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____up_down_dir_0_0_10001(
#line 4197 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4199 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 4201 "mdb.browser_info.c"
{
#line 4203 "mdb.browser_info.c"
  {
#line 4205 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 4208 "mdb.browser_info.c"
    {
#line 4210 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____up_down_dir_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 4213 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 4215 "mdb.browser_info.c"
  }
#line 4217 "mdb.browser_info.c"
}

#line 4220 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____up_down_dir_0_0_10001(
#line 4223 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 4225 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4227 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 4229 "mdb.browser_info.c"
{
#line 4231 "mdb.browser_info.c"
  {
#line 4233 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 4236 "mdb.browser_info.c"
    {
#line 4238 "mdb.browser_info.c"
      mdb__browser_info____Compare____up_down_dir_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 4241 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 4243 "mdb.browser_info.c"
  }
#line 4245 "mdb.browser_info.c"
}

#line 4248 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
#line 4251 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4253 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4255 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4257 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 4259 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4)
#line 4261 "mdb.browser_info.c"
{
#line 4263 "mdb.browser_info.c"
  {
#line 4265 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;

#line 4268 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4270 "mdb.browser_info.c"
    {
#line 4272 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Integer) mdb__browser_info__wrapper_arg_2));
    }
#line 4275 "mdb.browser_info.c"
  }
#line 4277 "mdb.browser_info.c"
}

#line 4280 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
#line 4283 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4285 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4287 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4289 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 4291 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4)
#line 4293 "mdb.browser_info.c"
{
#line 4295 "mdb.browser_info.c"
  {
#line 4297 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;

#line 4300 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4302 "mdb.browser_info.c"
    {
#line 4304 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_String) mdb__browser_info__wrapper_arg_2));
    }
#line 4307 "mdb.browser_info.c"
  }
#line 4309 "mdb.browser_info.c"
}

#line 4312 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
#line 4315 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4317 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4319 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_2,
#line 4321 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 4323 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4)
#line 4325 "mdb.browser_info.c"
{
#line 4327 "mdb.browser_info.c"
  {
#line 4329 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;
#line 4331 "mdb.browser_info.c"
    MR_String mdb__browser_info__conv0_HeadVar__2_2;

#line 4334 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4336 "mdb.browser_info.c"
    {
#line 4338 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1), &mdb__browser_info__conv0_HeadVar__2_2);
    }
#line 4341 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_2 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__2_2));
#line 4343 "mdb.browser_info.c"
  }
#line 4345 "mdb.browser_info.c"
}

#line 4348 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
#line 4351 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4353 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4355 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4357 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_3)
#line 4359 "mdb.browser_info.c"
{
#line 4361 "mdb.browser_info.c"
  {
#line 4363 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;

#line 4366 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4368 "mdb.browser_info.c"
    {
#line 4370 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1));
    }
#line 4373 "mdb.browser_info.c"
  }
#line 4375 "mdb.browser_info.c"
}

#line 1039 "browser_info.m"
static void MR_CALL 
mdb__browser_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(
#line 1039 "browser_info.m"
  MR_String * mdb__browser_info__HeadVar__2_2)
#line 1039 "browser_info.m"
{
#line 1039 "browser_info.m"
  {
#line 1039 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1039 "browser_info.m"
    *mdb__browser_info__HeadVar__2_2 = (MR_String) "debugger";
#line 1039 "browser_info.m"
  }
#line 1039 "browser_info.m"
}

#line 1053 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(
#line 1053 "browser_info.m"
  MR_Word mdb__browser_info__D_5,
#line 1053 "browser_info.m"
  MR_String mdb__browser_info__S_6)
#line 1053 "browser_info.m"
{
#line 1054 "browser_info.m"
  {
#line 1054 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1054 "browser_info.m"
    {
#line 1054 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__D_5, mdb__browser_info__S_6);
    }
#line 1054 "browser_info.m"
  }
#line 1053 "browser_info.m"
}

#line 1059 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
#line 1059 "browser_info.m"
  MR_Word mdb__browser_info__D_5,
#line 1059 "browser_info.m"
  MR_Integer mdb__browser_info__I_6)
#line 1059 "browser_info.m"
{
#line 1060 "browser_info.m"
  {
#line 1060 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1060 "browser_info.m"
    {
#line 1060 "browser_info.m"
      mdb__browser_info__write_int_debugger_4_p_0(mdb__browser_info__D_5, mdb__browser_info__I_6);
    }
#line 1060 "browser_info.m"
  }
#line 1059 "browser_info.m"
}

#line 1039 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0(
#line 1039 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_5,
#line 1039 "browser_info.m"
  MR_String * mdb__browser_info__HeadVar__2_2)
#line 1039 "browser_info.m"
{
#line 1039 "browser_info.m"
  {
#line 1039 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1039 "browser_info.m"
    {
#line 1039 "browser_info.m"
      mdb__browser_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(mdb__browser_info__HeadVar__2_2);
    }
#line 1039 "browser_info.m"
  }
#line 1039 "browser_info.m"
}

#line 1043 "browser_info.m"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0(
#line 1043 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 1043 "browser_info.m"
{
#line 1043 "browser_info.m"
  {
#line 1043 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1043 "browser_info.m"
#line 1043 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 1043 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1043 "browser_info.m"
      case (MR_Integer) 1:
#line 1046 "browser_info.m"
        {
#line 1046 "browser_info.m"
        }
#line 1043 "browser_info.m"
        break;
#line 1043 "browser_info.m"
      case (MR_Integer) 0:
#line 1044 "browser_info.m"
        {
#line 1044 "browser_info.m"
          mercury__io__flush_output_2_p_0();
        }
#line 1043 "browser_info.m"
        break;
#line 1043 "browser_info.m"
    }
#line 1043 "browser_info.m"
  }
#line 1043 "browser_info.m"
}

#line 105 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____up_down_dir_0_0(
#line 105 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 105 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 105 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 105 "browser_info.m"
{
#line 105 "browser_info.m"
  {
#line 105 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 105 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_16 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 105 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_17 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 105 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_16 == mdb__browser_info__CastY_17);
#line 105 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 4534 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 105 "browser_info.m"
    else
#line 105 "browser_info.m"
#line 105 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) {
#line 105 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 105 "browser_info.m"
        case (MR_Integer) 0:
#line 105 "browser_info.m"
#line 105 "browser_info.m"
          switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 105 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 105 "browser_info.m"
            case (MR_Integer) 0:
#line 105 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 105 "browser_info.m"
              break;
#line 105 "browser_info.m"
            case (MR_Integer) 1:
#line 4558 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "browser_info.m"
              break;
#line 105 "browser_info.m"
            case (MR_Integer) 2:
#line 4564 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "browser_info.m"
              break;
#line 105 "browser_info.m"
          }
#line 105 "browser_info.m"
          break;
#line 105 "browser_info.m"
        case (MR_Integer) 1:
#line 105 "browser_info.m"
          {
#line 105 "browser_info.m"
            MR_Integer mdb__browser_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 105 "browser_info.m"
#line 105 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 105 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 105 "browser_info.m"
              case (MR_Integer) 0:
#line 4586 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 105 "browser_info.m"
                break;
#line 105 "browser_info.m"
              case (MR_Integer) 1:
#line 105 "browser_info.m"
                {
#line 105 "browser_info.m"
                  MR_Integer mdb__browser_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 105 "browser_info.m"
                  {
#line 105 "browser_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_21_21, mdb__browser_info__V_8_8);
                  }
#line 105 "browser_info.m"
                }
#line 105 "browser_info.m"
                break;
#line 105 "browser_info.m"
              case (MR_Integer) 2:
#line 4608 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "browser_info.m"
                break;
#line 105 "browser_info.m"
            }
#line 105 "browser_info.m"
          }
#line 105 "browser_info.m"
          break;
#line 105 "browser_info.m"
        case (MR_Integer) 2:
#line 105 "browser_info.m"
          {
#line 105 "browser_info.m"
            MR_String mdb__browser_info__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 105 "browser_info.m"
#line 105 "browser_info.m"
            switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) {
#line 105 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 105 "browser_info.m"
              case (MR_Integer) 0:
#line 4632 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 105 "browser_info.m"
                break;
#line 105 "browser_info.m"
              case (MR_Integer) 1:
#line 4638 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 105 "browser_info.m"
                break;
#line 105 "browser_info.m"
              case (MR_Integer) 2:
#line 105 "browser_info.m"
                {
#line 105 "browser_info.m"
                  MR_String mdb__browser_info__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 105 "browser_info.m"
                  {
#line 105 "browser_info.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_20_20, mdb__browser_info__V_15_15);
                  }
#line 105 "browser_info.m"
                }
#line 105 "browser_info.m"
                break;
#line 105 "browser_info.m"
            }
#line 105 "browser_info.m"
          }
#line 105 "browser_info.m"
          break;
#line 105 "browser_info.m"
      }
#line 105 "browser_info.m"
  }
#line 105 "browser_info.m"
}

#line 105 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____up_down_dir_0_0(
#line 105 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 105 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 105 "browser_info.m"
{
#line 105 "browser_info.m"
  {
#line 105 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 105 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_9 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 105 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_10 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 105 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_9 == mdb__browser_info__CastY_10);
#line 105 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 105 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 105 "browser_info.m"
    else
#line 105 "browser_info.m"
#line 105 "browser_info.m"
      switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) {
#line 105 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 105 "browser_info.m"
        case (MR_Integer) 0:
#line 105 "browser_info.m"
          {
#line 105 "browser_info.m"
            MR_Integer mdb__browser_info__CastX_3 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 105 "browser_info.m"
            MR_Integer mdb__browser_info__CastY_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 105 "browser_info.m"
            mdb__browser_info__succeeded = (mdb__browser_info__CastY_4 == mdb__browser_info__CastX_3);
#line 105 "browser_info.m"
          }
#line 105 "browser_info.m"
          break;
#line 105 "browser_info.m"
        case (MR_Integer) 1:
#line 105 "browser_info.m"
          {
#line 105 "browser_info.m"
            MR_Integer mdb__browser_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 105 "browser_info.m"
            MR_Integer mdb__browser_info__V_6_6;

#line 105 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 105 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 105 "browser_info.m"
              {
#line 105 "browser_info.m"
                mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 4734 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_6_6);
#line 105 "browser_info.m"
              }
#line 105 "browser_info.m"
          }
#line 105 "browser_info.m"
          break;
#line 105 "browser_info.m"
        case (MR_Integer) 2:
#line 105 "browser_info.m"
          {
#line 105 "browser_info.m"
            MR_String mdb__browser_info__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 105 "browser_info.m"
            MR_String mdb__browser_info__V_8_8;

#line 105 "browser_info.m"
            mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 105 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 105 "browser_info.m"
              {
#line 105 "browser_info.m"
                mdb__browser_info__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 4759 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (strcmp(mdb__browser_info__V_7_7, mdb__browser_info__V_8_8) == 0);
#line 105 "browser_info.m"
              }
#line 105 "browser_info.m"
          }
#line 105 "browser_info.m"
          break;
#line 105 "browser_info.m"
      }
#line 105 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 105 "browser_info.m"
  }
#line 105 "browser_info.m"
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
#line 4800 "mdb.browser_info.c"
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
#line 4854 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                  break;
#line 280 "browser_info.m"
                case (MR_Integer) 2:
#line 4860 "mdb.browser_info.c"
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
#line 4906 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                  break;
#line 280 "browser_info.m"
                case (MR_Integer) 2:
#line 4912 "mdb.browser_info.c"
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
#line 4958 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                  break;
#line 280 "browser_info.m"
                case (MR_Integer) 2:
#line 4964 "mdb.browser_info.c"
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
#line 4997 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                    break;
#line 280 "browser_info.m"
                  case (MR_Integer) 1:
#line 5003 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                    break;
#line 280 "browser_info.m"
                  case (MR_Integer) 2:
#line 5009 "mdb.browser_info.c"
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
                  }
#line 280 "browser_info.m"
                }
#line 280 "browser_info.m"
                break;
#line 280 "browser_info.m"
              case (MR_Integer) 2:
#line 5035 "mdb.browser_info.c"
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
#line 5066 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                    break;
#line 280 "browser_info.m"
                  case (MR_Integer) 1:
#line 5072 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                    break;
#line 280 "browser_info.m"
                  case (MR_Integer) 2:
#line 5078 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                    break;
#line 280 "browser_info.m"
                }
#line 280 "browser_info.m"
                break;
#line 280 "browser_info.m"
              case (MR_Integer) 1:
#line 5088 "mdb.browser_info.c"
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
#line 5225 "mdb.browser_info.c"
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
#line 5250 "mdb.browser_info.c"
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

#line 75 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____should_assert_invalid_0_0(
#line 75 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 75 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 75 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 75 "browser_info.m"
{
#line 75 "browser_info.m"
  {
#line 75 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 75 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 75 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 75 "browser_info.m"
    {
#line 75 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
    }
#line 75 "browser_info.m"
  }
#line 75 "browser_info.m"
}

#line 75 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____should_assert_invalid_0_0(
#line 75 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 75 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 75 "browser_info.m"
{
#line 5306 "mdb.browser_info.c"
  {
#line 5308 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 5311 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 5313 "mdb.browser_info.c"
  }
#line 75 "browser_info.m"
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
#line 5342 "mdb.browser_info.c"
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
                  }
#line 150 "browser_info.m"
                }
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
              case (MR_Integer) 1:
#line 5381 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
              case (MR_Integer) 2:
#line 5387 "mdb.browser_info.c"
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
#line 5400 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 1:
#line 5406 "mdb.browser_info.c"
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
#line 5434 "mdb.browser_info.c"
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
                  }
#line 150 "browser_info.m"
                }
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
              case (MR_Integer) 2:
#line 5456 "mdb.browser_info.c"
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
#line 5469 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 1:
#line 5475 "mdb.browser_info.c"
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
#line 5503 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                break;
#line 150 "browser_info.m"
              case (MR_Integer) 1:
#line 5509 "mdb.browser_info.c"
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
#line 5538 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 1:
#line 5544 "mdb.browser_info.c"
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
#line 5579 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 1:
#line 5585 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 2:
#line 5591 "mdb.browser_info.c"
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
                          }
#line 150 "browser_info.m"
                        }
#line 150 "browser_info.m"
                        break;
#line 150 "browser_info.m"
                      case (MR_Integer) 1:
#line 5620 "mdb.browser_info.c"
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
#line 5648 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 1:
#line 5654 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                    break;
#line 150 "browser_info.m"
                  case (MR_Integer) 2:
#line 5660 "mdb.browser_info.c"
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
#line 5673 "mdb.browser_info.c"
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
#line 5766 "mdb.browser_info.c"
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
#line 5791 "mdb.browser_info.c"
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
#line 5816 "mdb.browser_info.c"
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
#line 5848 "mdb.browser_info.c"
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
#line 5873 "mdb.browser_info.c"
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
#line 5933 "mdb.browser_info.c"
  {
#line 5935 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 5938 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 5940 "mdb.browser_info.c"
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
#line 5969 "mdb.browser_info.c"
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
#line 5993 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
              break;
#line 254 "browser_info.m"
            case (MR_Integer) 2:
#line 5999 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
              break;
#line 254 "browser_info.m"
            case (MR_Integer) 3:
#line 6005 "mdb.browser_info.c"
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
#line 6029 "mdb.browser_info.c"
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
#line 6049 "mdb.browser_info.c"
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
                    }
#line 254 "browser_info.m"
                }
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 2:
#line 6070 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 3:
#line 6076 "mdb.browser_info.c"
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
#line 6102 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 1:
#line 6108 "mdb.browser_info.c"
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
#line 6128 "mdb.browser_info.c"
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
                    }
#line 254 "browser_info.m"
                }
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 3:
#line 6149 "mdb.browser_info.c"
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
#line 6173 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 1:
#line 6179 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
                break;
#line 254 "browser_info.m"
              case (MR_Integer) 2:
#line 6185 "mdb.browser_info.c"
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
#line 6289 "mdb.browser_info.c"
                mdb__browser_info__TypeInfo_17_17 = (MR_Word) &mdb__browser_info_scalar_common_2[5];
#line 6291 "mdb.browser_info.c"
                {
#line 6293 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_17_17, ((MR_Box) (mdb__browser_info__V_3_3)), ((MR_Box) (mdb__browser_info__V_5_5)));
                }
#line 254 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 6298 "mdb.browser_info.c"
                  {
#line 6300 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = mdb__browser_info____Unify____setting_0_0(mdb__browser_info__V_4_4, mdb__browser_info__V_6_6);
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
#line 6334 "mdb.browser_info.c"
                mdb__browser_info__TypeInfo_18_18 = (MR_Word) &mdb__browser_info_scalar_common_2[5];
#line 6336 "mdb.browser_info.c"
                {
#line 6338 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_18_18, ((MR_Box) (mdb__browser_info__V_7_7)), ((MR_Box) (mdb__browser_info__V_9_9)));
                }
#line 254 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 6343 "mdb.browser_info.c"
                  {
#line 6345 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = mdb__browser_info____Unify____setting_0_0(mdb__browser_info__V_8_8, mdb__browser_info__V_10_10);
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
#line 6371 "mdb.browser_info.c"
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

#line 67 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____maybe_track_subterm_1_0(
#line 67 "browser_info.m"
  MR_Word mdb__browser_info__TypeInfo_for_P_20,
#line 67 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 67 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 67 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 67 "browser_info.m"
{
#line 67 "browser_info.m"
  {
#line 67 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 67 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_18 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 67 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_19 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 67 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_18 == mdb__browser_info__CastY_19);
#line 67 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 6414 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "browser_info.m"
    else
#line 67 "browser_info.m"
    if ((mdb__browser_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "browser_info.m"
      if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "browser_info.m"
        *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "browser_info.m"
      else
#line 6426 "mdb.browser_info.c"
        *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "browser_info.m"
    else
#line 67 "browser_info.m"
      {
#line 67 "browser_info.m"
        MR_Box mdb__browser_info__V_23_23 = (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1));
#line 67 "browser_info.m"
        MR_Word mdb__browser_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 67 "browser_info.m"
        MR_Word mdb__browser_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 67 "browser_info.m"
        if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6441 "mdb.browser_info.c"
          *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "browser_info.m"
        else
#line 67 "browser_info.m"
          {
#line 67 "browser_info.m"
            MR_Word mdb__browser_info__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 67 "browser_info.m"
            MR_Word mdb__browser_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 67 "browser_info.m"
            MR_Box mdb__browser_info__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1));
#line 67 "browser_info.m"
            MR_Word mdb__browser_info__V_16_16;
#line 67 "browser_info.m"
            MR_Integer mdb__browser_info__V_26_26 = (MR_Integer) mdb__browser_info__V_25_25;
#line 67 "browser_info.m"
            MR_Integer mdb__browser_info__V_27_27 = (MR_Integer) mdb__browser_info__V_13_13;

#line 67 "browser_info.m"
            {
#line 67 "browser_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_16_16, mdb__browser_info__V_26_26, mdb__browser_info__V_27_27);
            }
#line 6465 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_16_16 == (MR_Integer) 0);
#line 67 "browser_info.m"
            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 67 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 67 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_16_16;
#line 67 "browser_info.m"
            else
#line 67 "browser_info.m"
              {
#line 67 "browser_info.m"
                MR_Word mdb__browser_info__V_17_17;
#line 67 "browser_info.m"
                MR_Integer mdb__browser_info__V_28_28 = (MR_Integer) mdb__browser_info__V_24_24;
#line 67 "browser_info.m"
                MR_Integer mdb__browser_info__V_29_29 = (MR_Integer) mdb__browser_info__V_14_14;

#line 67 "browser_info.m"
                {
#line 67 "browser_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_17_17, mdb__browser_info__V_28_28, mdb__browser_info__V_29_29);
                }
#line 6489 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_17_17 == (MR_Integer) 0);
#line 67 "browser_info.m"
                mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 67 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 67 "browser_info.m"
                  *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_17_17;
#line 67 "browser_info.m"
                else
#line 67 "browser_info.m"
                  {
#line 67 "browser_info.m"
                    mercury__builtin__compare_3_p_0(mdb__browser_info__TypeInfo_for_P_20, mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_23_23, mdb__browser_info__V_15_15);
                  }
#line 67 "browser_info.m"
              }
#line 67 "browser_info.m"
          }
#line 67 "browser_info.m"
      }
#line 67 "browser_info.m"
  }
#line 67 "browser_info.m"
}

#line 67 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____maybe_track_subterm_1_0(
#line 67 "browser_info.m"
  MR_Word mdb__browser_info__TypeInfo_for_P_13,
#line 67 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 67 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 67 "browser_info.m"
{
#line 67 "browser_info.m"
  {
#line 67 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 67 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_11 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 67 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_12 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 67 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_11 == mdb__browser_info__CastY_12);
#line 67 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 67 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 67 "browser_info.m"
    else
#line 67 "browser_info.m"
    if ((mdb__browser_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "browser_info.m"
      {
#line 67 "browser_info.m"
        MR_Integer mdb__browser_info__CastX_3 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 67 "browser_info.m"
        MR_Integer mdb__browser_info__CastY_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 67 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__CastY_4 == mdb__browser_info__CastX_3);
#line 67 "browser_info.m"
      }
#line 67 "browser_info.m"
    else
#line 67 "browser_info.m"
      {
#line 67 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 67 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 67 "browser_info.m"
        MR_Box mdb__browser_info__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1));
#line 67 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8;
#line 67 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9;
#line 67 "browser_info.m"
        MR_Box mdb__browser_info__V_10_10;

#line 67 "browser_info.m"
        mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 67 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 67 "browser_info.m"
          {
#line 67 "browser_info.m"
            mdb__browser_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 67 "browser_info.m"
            mdb__browser_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 67 "browser_info.m"
            mdb__browser_info__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1));
#line 6585 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_8_8);
#line 67 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 67 "browser_info.m"
              {
#line 6591 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_6_6 == mdb__browser_info__V_9_9);
#line 67 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 6595 "mdb.browser_info.c"
                  {
#line 6597 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_for_P_13, mdb__browser_info__V_7_7, mdb__browser_info__V_10_10);
                  }
#line 67 "browser_info.m"
              }
#line 67 "browser_info.m"
          }
#line 67 "browser_info.m"
      }
#line 67 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 67 "browser_info.m"
  }
#line 67 "browser_info.m"
}

#line 71 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____how_track_subterm_0_0(
#line 71 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 71 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 71 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 71 "browser_info.m"
{
#line 71 "browser_info.m"
  {
#line 71 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 71 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 71 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 71 "browser_info.m"
    {
#line 71 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
    }
#line 71 "browser_info.m"
  }
#line 71 "browser_info.m"
}

#line 71 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____how_track_subterm_0_0(
#line 71 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 71 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 71 "browser_info.m"
{
#line 6652 "mdb.browser_info.c"
  {
#line 6654 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 6657 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 6659 "mdb.browser_info.c"
  }
#line 71 "browser_info.m"
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
#line 6688 "mdb.browser_info.c"
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
#line 6718 "mdb.browser_info.c"
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
#line 6738 "mdb.browser_info.c"
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
#line 6758 "mdb.browser_info.c"
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

#line 6829 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_3_3 == mdb__browser_info__V_7_7);
#line 142 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 142 "browser_info.m"
          {
#line 6835 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_4_4 == mdb__browser_info__V_8_8);
#line 142 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 142 "browser_info.m"
              {
#line 6841 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_9_9);
#line 142 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 6845 "mdb.browser_info.c"
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

#line 110 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____down_dir_0_0(
#line 110 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 110 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 110 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 110 "browser_info.m"
{
#line 110 "browser_info.m"
  {
#line 110 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 110 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_12 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 110 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_13 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 110 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_12 == mdb__browser_info__CastY_13);
#line 110 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 6884 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "browser_info.m"
    else
#line 110 "browser_info.m"
    if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 110 "browser_info.m"
      {
#line 110 "browser_info.m"
        MR_String mdb__browser_info__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 110 "browser_info.m"
          {
#line 110 "browser_info.m"
            MR_String mdb__browser_info__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 110 "browser_info.m"
            {
#line 110 "browser_info.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_16_16, mdb__browser_info__V_11_11);
            }
#line 110 "browser_info.m"
          }
#line 110 "browser_info.m"
        else
#line 6911 "mdb.browser_info.c"
          *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "browser_info.m"
      }
#line 110 "browser_info.m"
    else
#line 110 "browser_info.m"
      {
#line 110 "browser_info.m"
        MR_Integer mdb__browser_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6924 "mdb.browser_info.c"
          *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "browser_info.m"
        else
#line 110 "browser_info.m"
          {
#line 110 "browser_info.m"
            MR_Integer mdb__browser_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));

#line 110 "browser_info.m"
            {
#line 110 "browser_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_17_17, mdb__browser_info__V_5_5);
            }
#line 110 "browser_info.m"
          }
#line 110 "browser_info.m"
      }
#line 110 "browser_info.m"
  }
#line 110 "browser_info.m"
}

#line 110 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____down_dir_0_0(
#line 110 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 110 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 110 "browser_info.m"
{
#line 110 "browser_info.m"
  {
#line 110 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 110 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_7 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 110 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_8 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 110 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_7 == mdb__browser_info__CastY_8);
#line 110 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 110 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 110 "browser_info.m"
    else
#line 110 "browser_info.m"
    if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 110 "browser_info.m"
      {
#line 110 "browser_info.m"
        MR_String mdb__browser_info__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "browser_info.m"
        MR_String mdb__browser_info__V_6_6;

#line 110 "browser_info.m"
        mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 110 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 110 "browser_info.m"
          {
#line 110 "browser_info.m"
            mdb__browser_info__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 6990 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (strcmp(mdb__browser_info__V_5_5, mdb__browser_info__V_6_6) == 0);
#line 110 "browser_info.m"
          }
#line 110 "browser_info.m"
      }
#line 110 "browser_info.m"
    else
#line 110 "browser_info.m"
      {
#line 110 "browser_info.m"
        MR_Integer mdb__browser_info__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "browser_info.m"
        MR_Integer mdb__browser_info__V_4_4;

#line 110 "browser_info.m"
        mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 110 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 110 "browser_info.m"
          {
#line 110 "browser_info.m"
            mdb__browser_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 7013 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_3_3 == mdb__browser_info__V_4_4);
#line 110 "browser_info.m"
          }
#line 110 "browser_info.m"
      }
#line 110 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 110 "browser_info.m"
  }
#line 110 "browser_info.m"
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
#line 7065 "mdb.browser_info.c"
  {
#line 7067 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 7070 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 7072 "mdb.browser_info.c"
  }
#line 269 "browser_info.m"
}

#line 577 "browser_info.m"
static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0(
#line 577 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 577 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 577 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 577 "browser_info.m"
{
#line 577 "browser_info.m"
  {
#line 577 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 577 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_18 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 577 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_19 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 577 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_18 == mdb__browser_info__CastY_19);
#line 577 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 7101 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 577 "browser_info.m"
    else
#line 577 "browser_info.m"
      {
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 2)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 3)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 4)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14;
#line 577 "browser_info.m"
        MR_Integer mdb__browser_info__V_25_25 = (MR_Integer) mdb__browser_info__V_4_4;
#line 577 "browser_info.m"
        MR_Integer mdb__browser_info__V_26_26 = (MR_Integer) mdb__browser_info__V_9_9;

#line 577 "browser_info.m"
        {
#line 577 "browser_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_14_14, mdb__browser_info__V_25_25, mdb__browser_info__V_26_26);
        }
#line 7139 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_14_14 == (MR_Integer) 0);
#line 577 "browser_info.m"
        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 577 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_14_14;
#line 577 "browser_info.m"
        else
#line 577 "browser_info.m"
          {
#line 577 "browser_info.m"
            MR_Word mdb__browser_info__V_15_15;

#line 577 "browser_info.m"
            {
#line 577 "browser_info.m"
              mdb__browser_info____Compare____format_params_0_0(&mdb__browser_info__V_15_15, mdb__browser_info__V_5_5, mdb__browser_info__V_10_10);
            }
#line 7159 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_15_15 == (MR_Integer) 0);
#line 577 "browser_info.m"
            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 577 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_15_15;
#line 577 "browser_info.m"
            else
#line 577 "browser_info.m"
              {
#line 577 "browser_info.m"
                MR_Word mdb__browser_info__V_16_16;

#line 577 "browser_info.m"
                {
#line 577 "browser_info.m"
                  mdb__browser_info____Compare____format_params_0_0(&mdb__browser_info__V_16_16, mdb__browser_info__V_6_6, mdb__browser_info__V_11_11);
                }
#line 7179 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_16_16 == (MR_Integer) 0);
#line 577 "browser_info.m"
                mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 577 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
                  *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_16_16;
#line 577 "browser_info.m"
                else
#line 577 "browser_info.m"
                  {
#line 577 "browser_info.m"
                    MR_Word mdb__browser_info__V_17_17;

#line 577 "browser_info.m"
                    {
#line 577 "browser_info.m"
                      mdb__browser_info____Compare____format_params_0_0(&mdb__browser_info__V_17_17, mdb__browser_info__V_7_7, mdb__browser_info__V_12_12);
                    }
#line 7199 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_17_17 == (MR_Integer) 0);
#line 577 "browser_info.m"
                    mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 577 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_17_17;
#line 577 "browser_info.m"
                    else
#line 577 "browser_info.m"
                      {
#line 577 "browser_info.m"
                        mdb__browser_info____Compare____format_params_0_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__V_8_8, mdb__browser_info__V_13_13);
                      }
#line 577 "browser_info.m"
                  }
#line 577 "browser_info.m"
              }
#line 577 "browser_info.m"
          }
#line 577 "browser_info.m"
      }
#line 577 "browser_info.m"
  }
#line 577 "browser_info.m"
}

#line 577 "browser_info.m"
static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0(
#line 577 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 577 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 577 "browser_info.m"
{
#line 577 "browser_info.m"
  {
#line 577 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 577 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_13 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 577 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_14 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 577 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_13 == mdb__browser_info__CastY_14);
#line 577 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 577 "browser_info.m"
    else
#line 577 "browser_info.m"
      {
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 577 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));

#line 7276 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_3_3 == mdb__browser_info__V_8_8);
#line 577 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
          {
#line 7282 "mdb.browser_info.c"
            {
#line 7284 "mdb.browser_info.c"
              mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_4_4, mdb__browser_info__V_9_9);
            }
#line 577 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
              {
#line 7291 "mdb.browser_info.c"
                {
#line 7293 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_5_5, mdb__browser_info__V_10_10);
                }
#line 577 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
                  {
#line 7300 "mdb.browser_info.c"
                    {
#line 7302 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_6_6, mdb__browser_info__V_11_11);
                    }
#line 577 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 7307 "mdb.browser_info.c"
                      {
#line 7309 "mdb.browser_info.c"
                        mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_7_7, mdb__browser_info__V_12_12);
                      }
#line 577 "browser_info.m"
                  }
#line 577 "browser_info.m"
              }
#line 577 "browser_info.m"
          }
#line 577 "browser_info.m"
      }
#line 577 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 577 "browser_info.m"
  }
#line 577 "browser_info.m"
}

#line 87 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browser_term_mode_0_0(
#line 87 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 87 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 87 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 87 "browser_info.m"
{
#line 87 "browser_info.m"
  {
#line 87 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 87 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 87 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 87 "browser_info.m"
    {
#line 87 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
    }
#line 87 "browser_info.m"
  }
#line 87 "browser_info.m"
}

#line 87 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browser_term_mode_0_0(
#line 87 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 87 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 87 "browser_info.m"
{
#line 7366 "mdb.browser_info.c"
  {
#line 7368 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 7371 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 7373 "mdb.browser_info.c"
  }
#line 87 "browser_info.m"
}

#line 563 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browser_persistent_state_0_0(
#line 563 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 563 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 563 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 563 "browser_info.m"
{
#line 563 "browser_info.m"
  {
#line 563 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 563 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_21 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 563 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_22 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 563 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_21 == mdb__browser_info__CastY_22);
#line 563 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 7402 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 563 "browser_info.m"
    else
#line 563 "browser_info.m"
      {
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 563 "browser_info.m"
        MR_Integer mdb__browser_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 5)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 2)));
#line 563 "browser_info.m"
        MR_Integer mdb__browser_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 3)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 4)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 5)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_16_16;

#line 563 "browser_info.m"
        {
#line 563 "browser_info.m"
          mdb__browser_info____Compare____caller_params_0_0(&mdb__browser_info__V_16_16, mdb__browser_info__V_4_4, mdb__browser_info__V_10_10);
        }
#line 7440 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_16_16 == (MR_Integer) 0);
#line 563 "browser_info.m"
        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 563 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 563 "browser_info.m"
          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_16_16;
#line 563 "browser_info.m"
        else
#line 563 "browser_info.m"
          {
#line 563 "browser_info.m"
            MR_Word mdb__browser_info__V_17_17;

#line 563 "browser_info.m"
            {
#line 563 "browser_info.m"
              mdb__browser_info____Compare____caller_params_0_0(&mdb__browser_info__V_17_17, mdb__browser_info__V_5_5, mdb__browser_info__V_11_11);
            }
#line 7460 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_17_17 == (MR_Integer) 0);
#line 563 "browser_info.m"
            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 563 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 563 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_17_17;
#line 563 "browser_info.m"
            else
#line 563 "browser_info.m"
              {
#line 563 "browser_info.m"
                MR_Word mdb__browser_info__V_18_18;

#line 563 "browser_info.m"
                {
#line 563 "browser_info.m"
                  mdb__browser_info____Compare____caller_params_0_0(&mdb__browser_info__V_18_18, mdb__browser_info__V_6_6, mdb__browser_info__V_12_12);
                }
#line 7480 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_18_18 == (MR_Integer) 0);
#line 563 "browser_info.m"
                mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 563 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 563 "browser_info.m"
                  *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_18_18;
#line 563 "browser_info.m"
                else
#line 563 "browser_info.m"
                  {
#line 563 "browser_info.m"
                    MR_Word mdb__browser_info__V_19_19;

#line 563 "browser_info.m"
                    {
#line 563 "browser_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_19_19, mdb__browser_info__V_7_7, mdb__browser_info__V_13_13);
                    }
#line 7500 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_19_19 == (MR_Integer) 0);
#line 563 "browser_info.m"
                    mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 563 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 563 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_19_19;
#line 563 "browser_info.m"
                    else
#line 563 "browser_info.m"
                      {
#line 563 "browser_info.m"
                        MR_Word mdb__browser_info__V_20_20;

#line 563 "browser_info.m"
                        {
#line 563 "browser_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[4], &mdb__browser_info__V_20_20, ((MR_Box) (mdb__browser_info__V_8_8)), ((MR_Box) (mdb__browser_info__V_14_14)));
                        }
#line 7520 "mdb.browser_info.c"
                        mdb__browser_info__succeeded = (mdb__browser_info__V_20_20 == (MR_Integer) 0);
#line 563 "browser_info.m"
                        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 563 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 563 "browser_info.m"
                          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_20_20;
#line 563 "browser_info.m"
                        else
#line 563 "browser_info.m"
                          {
#line 563 "browser_info.m"
                            {
#line 563 "browser_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[4], mdb__browser_info__HeadVar__1_1, ((MR_Box) (mdb__browser_info__V_9_9)), ((MR_Box) (mdb__browser_info__V_15_15)));
                            }
#line 563 "browser_info.m"
                          }
#line 563 "browser_info.m"
                      }
#line 563 "browser_info.m"
                  }
#line 563 "browser_info.m"
              }
#line 563 "browser_info.m"
          }
#line 563 "browser_info.m"
      }
#line 563 "browser_info.m"
  }
#line 563 "browser_info.m"
}

#line 563 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browser_persistent_state_0_0(
#line 563 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 563 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 563 "browser_info.m"
{
#line 563 "browser_info.m"
  {
#line 563 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 563 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_15 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 563 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_16 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 563 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_15 == mdb__browser_info__CastY_16);
#line 563 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 563 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 563 "browser_info.m"
    else
#line 563 "browser_info.m"
      {
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_17_17;
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_18_18;
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 563 "browser_info.m"
        MR_Integer mdb__browser_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 5)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 563 "browser_info.m"
        MR_Integer mdb__browser_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));
#line 563 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 5)));
#line 577 "browser_info.m"
        MR_Integer mdb__browser_info__CastX_29 = (MR_Integer) mdb__browser_info__V_3_3;
#line 577 "browser_info.m"
        MR_Integer mdb__browser_info__CastY_30 = (MR_Integer) mdb__browser_info__V_9_9;
#line 577 "browser_info.m"
        MR_Integer mdb__browser_info__CastX_41;
#line 577 "browser_info.m"
        MR_Integer mdb__browser_info__CastY_42;
#line 577 "browser_info.m"
        MR_Integer mdb__browser_info__CastX_53;
#line 577 "browser_info.m"
        MR_Integer mdb__browser_info__CastY_54;

#line 577 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__CastX_29 == mdb__browser_info__CastY_30);
#line 577 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
          mdb__browser_info__succeeded = MR_TRUE;
#line 577 "browser_info.m"
        else
#line 577 "browser_info.m"
          {
#line 577 "browser_info.m"
            MR_Word mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 0)));
#line 577 "browser_info.m"
            MR_Word mdb__browser_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 1)));
#line 577 "browser_info.m"
            MR_Word mdb__browser_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 2)));
#line 577 "browser_info.m"
            MR_Word mdb__browser_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 3)));
#line 577 "browser_info.m"
            MR_Word mdb__browser_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_3_3, (MR_Integer) 4)));
#line 577 "browser_info.m"
            MR_Word mdb__browser_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 0)));
#line 577 "browser_info.m"
            MR_Word mdb__browser_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 1)));
#line 577 "browser_info.m"
            MR_Word mdb__browser_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 2)));
#line 577 "browser_info.m"
            MR_Word mdb__browser_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 3)));
#line 577 "browser_info.m"
            MR_Word mdb__browser_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_9_9, (MR_Integer) 4)));

#line 7654 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_19_19 == mdb__browser_info__V_24_24);
#line 577 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
              {
#line 7660 "mdb.browser_info.c"
                {
#line 7662 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_20_20, mdb__browser_info__V_25_25);
                }
#line 577 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
                  {
#line 7669 "mdb.browser_info.c"
                    {
#line 7671 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_21_21, mdb__browser_info__V_26_26);
                    }
#line 577 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
                      {
#line 7678 "mdb.browser_info.c"
                        {
#line 7680 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_22_22, mdb__browser_info__V_27_27);
                        }
#line 577 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 7685 "mdb.browser_info.c"
                          {
#line 7687 "mdb.browser_info.c"
                            mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_23_23, mdb__browser_info__V_28_28);
                          }
#line 577 "browser_info.m"
                      }
#line 577 "browser_info.m"
                  }
#line 577 "browser_info.m"
              }
#line 577 "browser_info.m"
          }
#line 563 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 563 "browser_info.m"
          {
#line 577 "browser_info.m"
            mdb__browser_info__CastX_41 = (MR_Integer) mdb__browser_info__V_4_4;
#line 577 "browser_info.m"
            mdb__browser_info__CastY_42 = (MR_Integer) mdb__browser_info__V_10_10;
#line 577 "browser_info.m"
            mdb__browser_info__succeeded = (mdb__browser_info__CastX_41 == mdb__browser_info__CastY_42);
#line 577 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
              mdb__browser_info__succeeded = MR_TRUE;
#line 577 "browser_info.m"
            else
#line 577 "browser_info.m"
              {
#line 577 "browser_info.m"
                MR_Word mdb__browser_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 0)));
#line 577 "browser_info.m"
                MR_Word mdb__browser_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 1)));
#line 577 "browser_info.m"
                MR_Word mdb__browser_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 2)));
#line 577 "browser_info.m"
                MR_Word mdb__browser_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 3)));
#line 577 "browser_info.m"
                MR_Word mdb__browser_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_4_4, (MR_Integer) 4)));
#line 577 "browser_info.m"
                MR_Word mdb__browser_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 0)));
#line 577 "browser_info.m"
                MR_Word mdb__browser_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 1)));
#line 577 "browser_info.m"
                MR_Word mdb__browser_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 2)));
#line 577 "browser_info.m"
                MR_Word mdb__browser_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 3)));
#line 577 "browser_info.m"
                MR_Word mdb__browser_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 4)));

#line 7737 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_31_31 == mdb__browser_info__V_36_36);
#line 577 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
                  {
#line 7743 "mdb.browser_info.c"
                    {
#line 7745 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_32_32, mdb__browser_info__V_37_37);
                    }
#line 577 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
                      {
#line 7752 "mdb.browser_info.c"
                        {
#line 7754 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_33_33, mdb__browser_info__V_38_38);
                        }
#line 577 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
                          {
#line 7761 "mdb.browser_info.c"
                            {
#line 7763 "mdb.browser_info.c"
                              mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_34_34, mdb__browser_info__V_39_39);
                            }
#line 577 "browser_info.m"
                            if (mdb__browser_info__succeeded)
#line 7768 "mdb.browser_info.c"
                              {
#line 7770 "mdb.browser_info.c"
                                mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_35_35, mdb__browser_info__V_40_40);
                              }
#line 577 "browser_info.m"
                          }
#line 577 "browser_info.m"
                      }
#line 577 "browser_info.m"
                  }
#line 577 "browser_info.m"
              }
#line 563 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 563 "browser_info.m"
              {
#line 577 "browser_info.m"
                mdb__browser_info__CastX_53 = (MR_Integer) mdb__browser_info__V_5_5;
#line 577 "browser_info.m"
                mdb__browser_info__CastY_54 = (MR_Integer) mdb__browser_info__V_11_11;
#line 577 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__CastX_53 == mdb__browser_info__CastY_54);
#line 577 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
                  mdb__browser_info__succeeded = MR_TRUE;
#line 577 "browser_info.m"
                else
#line 577 "browser_info.m"
                  {
#line 577 "browser_info.m"
                    MR_Word mdb__browser_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 0)));
#line 577 "browser_info.m"
                    MR_Word mdb__browser_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 1)));
#line 577 "browser_info.m"
                    MR_Word mdb__browser_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 2)));
#line 577 "browser_info.m"
                    MR_Word mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 3)));
#line 577 "browser_info.m"
                    MR_Word mdb__browser_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_5_5, (MR_Integer) 4)));
#line 577 "browser_info.m"
                    MR_Word mdb__browser_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 0)));
#line 577 "browser_info.m"
                    MR_Word mdb__browser_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 1)));
#line 577 "browser_info.m"
                    MR_Word mdb__browser_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 2)));
#line 577 "browser_info.m"
                    MR_Word mdb__browser_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 3)));
#line 577 "browser_info.m"
                    MR_Word mdb__browser_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_11_11, (MR_Integer) 4)));

#line 7820 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_43_43 == mdb__browser_info__V_48_48);
#line 577 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
                      {
#line 7826 "mdb.browser_info.c"
                        {
#line 7828 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_44_44, mdb__browser_info__V_49_49);
                        }
#line 577 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
                          {
#line 7835 "mdb.browser_info.c"
                            {
#line 7837 "mdb.browser_info.c"
                              mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_45_45, mdb__browser_info__V_50_50);
                            }
#line 577 "browser_info.m"
                            if (mdb__browser_info__succeeded)
#line 577 "browser_info.m"
                              {
#line 7844 "mdb.browser_info.c"
                                {
#line 7846 "mdb.browser_info.c"
                                  mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_46_46, mdb__browser_info__V_51_51);
                                }
#line 577 "browser_info.m"
                                if (mdb__browser_info__succeeded)
#line 7851 "mdb.browser_info.c"
                                  {
#line 7853 "mdb.browser_info.c"
                                    mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_47_47, mdb__browser_info__V_52_52);
                                  }
#line 577 "browser_info.m"
                              }
#line 577 "browser_info.m"
                          }
#line 577 "browser_info.m"
                      }
#line 577 "browser_info.m"
                  }
#line 563 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 563 "browser_info.m"
                  {
#line 7868 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_6_6 == mdb__browser_info__V_12_12);
#line 563 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 563 "browser_info.m"
                      {
#line 7874 "mdb.browser_info.c"
                        mdb__browser_info__TypeInfo_17_17 = (MR_Word) &mdb__browser_info_scalar_common_2[4];
#line 7876 "mdb.browser_info.c"
                        {
#line 7878 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_17_17, ((MR_Box) (mdb__browser_info__V_7_7)), ((MR_Box) (mdb__browser_info__V_13_13)));
                        }
#line 563 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 563 "browser_info.m"
                          {
#line 7885 "mdb.browser_info.c"
                            mdb__browser_info__TypeInfo_18_18 = (MR_Word) &mdb__browser_info_scalar_common_2[4];
#line 7887 "mdb.browser_info.c"
                            {
#line 7889 "mdb.browser_info.c"
                              mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_18_18, ((MR_Box) (mdb__browser_info__V_8_8)), ((MR_Box) (mdb__browser_info__V_14_14)));
                            }
#line 563 "browser_info.m"
                          }
#line 563 "browser_info.m"
                      }
#line 563 "browser_info.m"
                  }
#line 563 "browser_info.m"
              }
#line 563 "browser_info.m"
          }
#line 563 "browser_info.m"
      }
#line 563 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 563 "browser_info.m"
  }
#line 563 "browser_info.m"
}

#line 82 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browser_mode_func_0_0(
#line 82 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 82 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 82 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 82 "browser_info.m"
{
#line 82 "browser_info.m"
  {
#line 82 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 82 "browser_info.m"
    MR_Word mdb__browser_info__Cast_HeadVar1_4 = mdb__browser_info__HeadVar__2_2;
#line 82 "browser_info.m"
    MR_Word mdb__browser_info__Cast_HeadVar2_5 = mdb__browser_info__HeadVar__3_3;

#line 82 "browser_info.m"
    {
#line 82 "browser_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_3[0], mdb__browser_info__HeadVar__1_1, ((MR_Box) (mdb__browser_info__Cast_HeadVar1_4)), ((MR_Box) (mdb__browser_info__Cast_HeadVar2_5)));
    }
#line 82 "browser_info.m"
  }
#line 82 "browser_info.m"
}

#line 82 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browser_mode_func_0_0(
#line 82 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 82 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 82 "browser_info.m"
{
#line 82 "browser_info.m"
  {
#line 82 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 82 "browser_info.m"
    MR_Word mdb__browser_info__Cast_HeadVar1_3 = mdb__browser_info__HeadVar__1_1;
#line 82 "browser_info.m"
    MR_Word mdb__browser_info__Cast_HeadVar2_4 = mdb__browser_info__HeadVar__2_2;

#line 82 "browser_info.m"
    {
#line 82 "browser_info.m"
      mdb__browser_info__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mdb__browser_info__Cast_HeadVar1_3, (MR_Word) mdb__browser_info__Cast_HeadVar2_4);
    }
#line 82 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 82 "browser_info.m"
  }
#line 82 "browser_info.m"
}

#line 40 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browser_info_0_0(
#line 40 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 40 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 40 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 40 "browser_info.m"
{
#line 40 "browser_info.m"
  {
#line 40 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 40 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_24 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 40 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_25 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 40 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_24 == mdb__browser_info__CastY_25);
#line 40 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 7995 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "browser_info.m"
    else
#line 40 "browser_info.m"
      {
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 5)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 6)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 1)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 2)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 3)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 4)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 5)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__3_3, (MR_Integer) 6)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_18_18;

#line 40 "browser_info.m"
        {
#line 40 "browser_info.m"
          mdb__browser_term____Compare____browser_term_0_0(&mdb__browser_info__V_18_18, mdb__browser_info__V_4_4, mdb__browser_info__V_11_11);
        }
#line 8037 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_18_18 == (MR_Integer) 0);
#line 40 "browser_info.m"
        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 40 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 40 "browser_info.m"
          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_18_18;
#line 40 "browser_info.m"
        else
#line 40 "browser_info.m"
          {
#line 40 "browser_info.m"
            MR_Word mdb__browser_info__V_19_19;

#line 40 "browser_info.m"
            {
#line 40 "browser_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[0], &mdb__browser_info__V_19_19, ((MR_Box) (mdb__browser_info__V_5_5)), ((MR_Box) (mdb__browser_info__V_12_12)));
            }
#line 8057 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_19_19 == (MR_Integer) 0);
#line 40 "browser_info.m"
            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 40 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 40 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_19_19;
#line 40 "browser_info.m"
            else
#line 40 "browser_info.m"
              {
#line 40 "browser_info.m"
                MR_Word mdb__browser_info__V_20_20;
#line 40 "browser_info.m"
                MR_Integer mdb__browser_info__V_33_33 = (MR_Integer) mdb__browser_info__V_6_6;
#line 40 "browser_info.m"
                MR_Integer mdb__browser_info__V_34_34 = (MR_Integer) mdb__browser_info__V_13_13;

#line 40 "browser_info.m"
                {
#line 40 "browser_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__browser_info__V_20_20, mdb__browser_info__V_33_33, mdb__browser_info__V_34_34);
                }
#line 8081 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_20_20 == (MR_Integer) 0);
#line 40 "browser_info.m"
                mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 40 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 40 "browser_info.m"
                  *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_20_20;
#line 40 "browser_info.m"
                else
#line 40 "browser_info.m"
                  {
#line 40 "browser_info.m"
                    MR_Word mdb__browser_info__V_21_21;

#line 40 "browser_info.m"
                    {
#line 40 "browser_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[1], &mdb__browser_info__V_21_21, ((MR_Box) (mdb__browser_info__V_7_7)), ((MR_Box) (mdb__browser_info__V_14_14)));
                    }
#line 8101 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_21_21 == (MR_Integer) 0);
#line 40 "browser_info.m"
                    mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 40 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 40 "browser_info.m"
                      *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_21_21;
#line 40 "browser_info.m"
                    else
#line 40 "browser_info.m"
                      {
#line 40 "browser_info.m"
                        MR_Word mdb__browser_info__V_22_22;

#line 40 "browser_info.m"
                        {
#line 40 "browser_info.m"
                          mdb__browser_info____Compare____browser_persistent_state_0_0(&mdb__browser_info__V_22_22, mdb__browser_info__V_8_8, mdb__browser_info__V_15_15);
                        }
#line 8121 "mdb.browser_info.c"
                        mdb__browser_info__succeeded = (mdb__browser_info__V_22_22 == (MR_Integer) 0);
#line 40 "browser_info.m"
                        mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 40 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 40 "browser_info.m"
                          *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_22_22;
#line 40 "browser_info.m"
                        else
#line 40 "browser_info.m"
                          {
#line 40 "browser_info.m"
                            MR_Word mdb__browser_info__V_23_23;

#line 40 "browser_info.m"
                            {
#line 40 "browser_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[2], &mdb__browser_info__V_23_23, ((MR_Box) (mdb__browser_info__V_9_9)), ((MR_Box) (mdb__browser_info__V_16_16)));
                            }
#line 8141 "mdb.browser_info.c"
                            mdb__browser_info__succeeded = (mdb__browser_info__V_23_23 == (MR_Integer) 0);
#line 40 "browser_info.m"
                            mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 40 "browser_info.m"
                            if (mdb__browser_info__succeeded)
#line 40 "browser_info.m"
                              *mdb__browser_info__HeadVar__1_1 = mdb__browser_info__V_23_23;
#line 40 "browser_info.m"
                            else
#line 40 "browser_info.m"
                              {
#line 40 "browser_info.m"
                                {
#line 40 "browser_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_2[3], mdb__browser_info__HeadVar__1_1, ((MR_Box) (mdb__browser_info__V_10_10)), ((MR_Box) (mdb__browser_info__V_17_17)));
                                }
#line 40 "browser_info.m"
                              }
#line 40 "browser_info.m"
                          }
#line 40 "browser_info.m"
                      }
#line 40 "browser_info.m"
                  }
#line 40 "browser_info.m"
              }
#line 40 "browser_info.m"
          }
#line 40 "browser_info.m"
      }
#line 40 "browser_info.m"
  }
#line 40 "browser_info.m"
}

#line 40 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browser_info_0_0(
#line 40 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 40 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 40 "browser_info.m"
{
#line 40 "browser_info.m"
  {
#line 40 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 40 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_17 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 40 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_18 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 40 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_17 == mdb__browser_info__CastY_18);
#line 40 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 40 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 40 "browser_info.m"
    else
#line 40 "browser_info.m"
      {
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_20_20;
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_21_21;
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_22_22;
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_23_23;
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 5)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 6)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 2)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 3)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 4)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 5)));
#line 40 "browser_info.m"
        MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 6)));

#line 8242 "mdb.browser_info.c"
        {
#line 8244 "mdb.browser_info.c"
          mdb__browser_info__succeeded = mdb__browser_term____Unify____browser_term_0_0(mdb__browser_info__V_3_3, mdb__browser_info__V_10_10);
        }
#line 40 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 40 "browser_info.m"
          {
#line 8251 "mdb.browser_info.c"
            mdb__browser_info__TypeInfo_20_20 = (MR_Word) &mdb__browser_info_scalar_common_2[0];
#line 8253 "mdb.browser_info.c"
            {
#line 8255 "mdb.browser_info.c"
              mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_20_20, ((MR_Box) (mdb__browser_info__V_4_4)), ((MR_Box) (mdb__browser_info__V_11_11)));
            }
#line 40 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 40 "browser_info.m"
              {
#line 8262 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_12_12);
#line 40 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 40 "browser_info.m"
                  {
#line 8268 "mdb.browser_info.c"
                    mdb__browser_info__TypeInfo_21_21 = (MR_Word) &mdb__browser_info_scalar_common_2[1];
#line 8270 "mdb.browser_info.c"
                    {
#line 8272 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_21_21, ((MR_Box) (mdb__browser_info__V_6_6)), ((MR_Box) (mdb__browser_info__V_13_13)));
                    }
#line 40 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 40 "browser_info.m"
                      {
#line 8279 "mdb.browser_info.c"
                        {
#line 8281 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_persistent_state_0_0(mdb__browser_info__V_7_7, mdb__browser_info__V_14_14);
                        }
#line 40 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 40 "browser_info.m"
                          {
#line 8288 "mdb.browser_info.c"
                            mdb__browser_info__TypeInfo_22_22 = (MR_Word) &mdb__browser_info_scalar_common_2[0];
#line 8290 "mdb.browser_info.c"
                            {
#line 8292 "mdb.browser_info.c"
                              mdb__browser_info__succeeded = mdb__browser_info____Unify____maybe_track_subterm_1_0(mdb__browser_info__TypeInfo_22_22, mdb__browser_info__V_8_8, mdb__browser_info__V_15_15);
                            }
#line 40 "browser_info.m"
                            if (mdb__browser_info__succeeded)
#line 40 "browser_info.m"
                              {
#line 8299 "mdb.browser_info.c"
                                mdb__browser_info__TypeInfo_23_23 = (MR_Word) &mdb__browser_info_scalar_common_2[3];
#line 8301 "mdb.browser_info.c"
                                {
#line 8303 "mdb.browser_info.c"
                                  mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_23_23, ((MR_Box) (mdb__browser_info__V_9_9)), ((MR_Box) (mdb__browser_info__V_16_16)));
                                }
#line 40 "browser_info.m"
                              }
#line 40 "browser_info.m"
                          }
#line 40 "browser_info.m"
                      }
#line 40 "browser_info.m"
                  }
#line 40 "browser_info.m"
              }
#line 40 "browser_info.m"
          }
#line 40 "browser_info.m"
      }
#line 40 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 40 "browser_info.m"
  }
#line 40 "browser_info.m"
}

#line 328 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browser_db_0_0(
#line 328 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 328 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 328 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 328 "browser_info.m"
{
#line 328 "browser_info.m"
  {
#line 328 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 328 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_6 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 328 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_7 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 328 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_6 == mdb__browser_info__CastY_7);
#line 328 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 8351 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 328 "browser_info.m"
    else
#line 328 "browser_info.m"
      {
#line 328 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = (MR_Word) mdb__browser_info__HeadVar__2_2;
#line 328 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5 = (MR_Word) mdb__browser_info__HeadVar__3_3;

#line 328 "browser_info.m"
        {
#line 328 "browser_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__browser_info_scalar_common_1[0], mdb__browser_info__HeadVar__1_1, ((MR_Box) (mdb__browser_info__V_4_4)), ((MR_Box) (mdb__browser_info__V_5_5)));
        }
#line 328 "browser_info.m"
      }
#line 328 "browser_info.m"
  }
#line 328 "browser_info.m"
}

#line 328 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browser_db_0_0(
#line 328 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 328 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 328 "browser_info.m"
{
#line 328 "browser_info.m"
  {
#line 328 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 328 "browser_info.m"
    MR_Integer mdb__browser_info__CastX_5 = (MR_Integer) mdb__browser_info__HeadVar__1_1;
#line 328 "browser_info.m"
    MR_Integer mdb__browser_info__CastY_6 = (MR_Integer) mdb__browser_info__HeadVar__2_2;

#line 328 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__CastX_5 == mdb__browser_info__CastY_6);
#line 328 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 328 "browser_info.m"
      mdb__browser_info__succeeded = MR_TRUE;
#line 328 "browser_info.m"
    else
#line 328 "browser_info.m"
      {
#line 328 "browser_info.m"
        MR_Word mdb__browser_info__V_3_3 = (MR_Word) mdb__browser_info__HeadVar__1_1;
#line 328 "browser_info.m"
        MR_Word mdb__browser_info__V_4_4 = (MR_Word) mdb__browser_info__HeadVar__2_2;

#line 8407 "mdb.browser_info.c"
        {
#line 8409 "mdb.browser_info.c"
          mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__browser_info_scalar_common_1[0], ((MR_Box) (mdb__browser_info__V_3_3)), ((MR_Box) (mdb__browser_info__V_4_4)));
        }
#line 328 "browser_info.m"
      }
#line 328 "browser_info.m"
    return mdb__browser_info__succeeded;
#line 328 "browser_info.m"
  }
#line 328 "browser_info.m"
}

#line 120 "browser_info.m"
void MR_CALL 
mdb__browser_info____Compare____browse_caller_type_0_0(
#line 120 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1,
#line 120 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 120 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__3_3)
#line 120 "browser_info.m"
{
#line 120 "browser_info.m"
  {
#line 120 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 120 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar1_4 = (MR_Integer) mdb__browser_info__HeadVar__2_2;
#line 120 "browser_info.m"
    MR_Integer mdb__browser_info__Cast_HeadVar2_5 = (MR_Integer) mdb__browser_info__HeadVar__3_3;

#line 120 "browser_info.m"
    {
#line 120 "browser_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__browser_info__HeadVar__1_1, mdb__browser_info__Cast_HeadVar1_4, mdb__browser_info__Cast_HeadVar2_5);
    }
#line 120 "browser_info.m"
  }
#line 120 "browser_info.m"
}

#line 120 "browser_info.m"
MR_bool MR_CALL 
mdb__browser_info____Unify____browse_caller_type_0_0(
#line 120 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_1,
#line 120 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2)
#line 120 "browser_info.m"
{
#line 8460 "mdb.browser_info.c"
  {
#line 8462 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 8465 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 8467 "mdb.browser_info.c"
  }
#line 120 "browser_info.m"
}

#line 1187 "browser_info.m"
static void MR_CALL 
mdb__browser_info__browser_persistent_state_type_1_p_0(
#line 1187 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__1_1)
#line 1187 "browser_info.m"
{
#line 1191 "browser_info.m"
  {
#line 1191 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1191 "browser_info.m"
    {
#line 1191 "browser_info.m"
      *mdb__browser_info__HeadVar__1_1 = mercury__type_desc__type_of_1_f_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0);
    }
#line 1191 "browser_info.m"
  }
#line 1187 "browser_info.m"
}

#line 1170 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__format_params_to_desc_1_f_0(
#line 1170 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 1170 "browser_info.m"
{
#line 1172 "browser_info.m"
  {
#line 1172 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__HeadVar__2_2;
#line 1172 "browser_info.m"
    MR_Integer mdb__browser_info__Depth_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 1172 "browser_info.m"
    MR_Integer mdb__browser_info__Size_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 1172 "browser_info.m"
    MR_Integer mdb__browser_info__Width_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 1172 "browser_info.m"
    MR_Integer mdb__browser_info__Lines_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__V_8_8;
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__V_9_9;
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__V_10_10;
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__V_12_12;
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__V_14_14;
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__V_15_15;
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__V_16_16;
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__V_18_18;
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__V_20_20;
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__V_22_22;
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__V_24_24;
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__V_26_26;
#line 1172 "browser_info.m"
    MR_String mdb__browser_info__V_27_27;

#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_9_9 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Depth_3);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_15_15 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Size_4);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_21_21 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Width_5);
    }
#line 1176 "browser_info.m"
    {
#line 1176 "browser_info.m"
      mdb__browser_info__V_27_27 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Lines_6);
    }
#line 1176 "browser_info.m"
    {
#line 1176 "browser_info.m"
      mdb__browser_info__V_26_26 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_27_27, (MR_String) "\n");
    }
#line 1176 "browser_info.m"
    {
#line 1176 "browser_info.m"
      mdb__browser_info__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "lines ", mdb__browser_info__V_26_26);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_24_24);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_20_20 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_21_21, mdb__browser_info__V_22_22);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "width ", mdb__browser_info__V_20_20);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_18_18);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_14_14 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_15_15, mdb__browser_info__V_16_16);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "size ", mdb__browser_info__V_14_14);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_12_12);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_8_8 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_9_9, mdb__browser_info__V_10_10);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "depth ", mdb__browser_info__V_8_8);
    }
#line 1172 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 1172 "browser_info.m"
  }
#line 1170 "browser_info.m"
}

#line 1160 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__format_params_to_mdb_command_2_f_0(
#line 1160 "browser_info.m"
  MR_String mdb__browser_info__CmdCallerOpt_4,
#line 1160 "browser_info.m"
  MR_Word mdb__browser_info__FormatParams_5)
#line 1160 "browser_info.m"
{
#line 1162 "browser_info.m"
  {
#line 1162 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__Cmds_6;
#line 1162 "browser_info.m"
    MR_Integer mdb__browser_info__Depth_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FormatParams_5, (MR_Integer) 0)));
#line 1162 "browser_info.m"
    MR_Integer mdb__browser_info__Size_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FormatParams_5, (MR_Integer) 1)));
#line 1162 "browser_info.m"
    MR_Integer mdb__browser_info__Width_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FormatParams_5, (MR_Integer) 2)));
#line 1162 "browser_info.m"
    MR_Integer mdb__browser_info__Lines_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FormatParams_5, (MR_Integer) 3)));
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__DepthCmd_11;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__SizeCmd_12;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__WidthCmd_13;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__LinesCmd_14;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__V_15_15;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__V_17_17;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__V_18_18;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__V_20_20;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__V_22_22;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__V_23_23;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__V_25_25;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__V_27_27;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__V_28_28;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__V_30_30;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__V_32_32;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__V_33_33;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__V_35_35;
#line 1162 "browser_info.m"
    MR_String mdb__browser_info__V_36_36;

#line 1164 "browser_info.m"
    {
#line 1164 "browser_info.m"
      mdb__browser_info__V_18_18 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Depth_7);
    }
#line 1164 "browser_info.m"
    {
#line 1164 "browser_info.m"
      mdb__browser_info__V_17_17 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_18_18, (MR_String) "\n");
    }
#line 1164 "browser_info.m"
    {
#line 1164 "browser_info.m"
      mdb__browser_info__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "depth ", mdb__browser_info__V_17_17);
    }
#line 1164 "browser_info.m"
    {
#line 1164 "browser_info.m"
      mdb__browser_info__DepthCmd_11 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdCallerOpt_4, mdb__browser_info__V_15_15);
    }
#line 1165 "browser_info.m"
    {
#line 1165 "browser_info.m"
      mdb__browser_info__V_23_23 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Size_8);
    }
#line 1165 "browser_info.m"
    {
#line 1165 "browser_info.m"
      mdb__browser_info__V_22_22 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_23_23, (MR_String) "\n");
    }
#line 1165 "browser_info.m"
    {
#line 1165 "browser_info.m"
      mdb__browser_info__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "size ", mdb__browser_info__V_22_22);
    }
#line 1165 "browser_info.m"
    {
#line 1165 "browser_info.m"
      mdb__browser_info__SizeCmd_12 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdCallerOpt_4, mdb__browser_info__V_20_20);
    }
#line 1166 "browser_info.m"
    {
#line 1166 "browser_info.m"
      mdb__browser_info__V_28_28 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Width_9);
    }
#line 1166 "browser_info.m"
    {
#line 1166 "browser_info.m"
      mdb__browser_info__V_27_27 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_28_28, (MR_String) "\n");
    }
#line 1166 "browser_info.m"
    {
#line 1166 "browser_info.m"
      mdb__browser_info__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "width ", mdb__browser_info__V_27_27);
    }
#line 1166 "browser_info.m"
    {
#line 1166 "browser_info.m"
      mdb__browser_info__WidthCmd_13 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdCallerOpt_4, mdb__browser_info__V_25_25);
    }
#line 1167 "browser_info.m"
    {
#line 1167 "browser_info.m"
      mdb__browser_info__V_33_33 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Lines_10);
    }
#line 1167 "browser_info.m"
    {
#line 1167 "browser_info.m"
      mdb__browser_info__V_32_32 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_33_33, (MR_String) "\n");
    }
#line 1167 "browser_info.m"
    {
#line 1167 "browser_info.m"
      mdb__browser_info__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "lines ", mdb__browser_info__V_32_32);
    }
#line 1167 "browser_info.m"
    {
#line 1167 "browser_info.m"
      mdb__browser_info__LinesCmd_14 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdCallerOpt_4, mdb__browser_info__V_30_30);
    }
#line 1168 "browser_info.m"
    {
#line 1168 "browser_info.m"
      mdb__browser_info__V_36_36 = mercury__string__f_43_43_2_f_0(mdb__browser_info__WidthCmd_13, mdb__browser_info__LinesCmd_14);
    }
#line 1168 "browser_info.m"
    {
#line 1168 "browser_info.m"
      mdb__browser_info__V_35_35 = mercury__string__f_43_43_2_f_0(mdb__browser_info__SizeCmd_12, mdb__browser_info__V_36_36);
    }
#line 1168 "browser_info.m"
    {
#line 1168 "browser_info.m"
      mdb__browser_info__Cmds_6 = mercury__string__f_43_43_2_f_0(mdb__browser_info__DepthCmd_11, mdb__browser_info__V_35_35);
    }
#line 1162 "browser_info.m"
    return mdb__browser_info__Cmds_6;
#line 1162 "browser_info.m"
  }
#line 1160 "browser_info.m"
}

#line 1150 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__caller_params_to_desc_1_f_0(
#line 1150 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 1150 "browser_info.m"
{
#line 1153 "browser_info.m"
  {
#line 1153 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__HeadVar__2_2;
#line 1153 "browser_info.m"
    MR_Word mdb__browser_info__Format_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 1153 "browser_info.m"
    MR_Word mdb__browser_info__FlatParams_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 1153 "browser_info.m"
    MR_Word mdb__browser_info__RawPrettyParams_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 2)));
#line 1153 "browser_info.m"
    MR_Word mdb__browser_info__VerboseParams_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 3)));
#line 1153 "browser_info.m"
    MR_Word mdb__browser_info__PrettyParams_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 4)));
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_9_9;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_10_10 = ((&mdb__browser_info_vector_common_7[4 + mdb__browser_info__Format_3]))->mdb__browser_info__vector_common_type_7_0__vct_7_f_0;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_11_11;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_13_13;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_15_15;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_16_16;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_17_17;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_19_19;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_20_20;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_23_23;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_24_24;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_25_25;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_27_27;
#line 1153 "browser_info.m"
    MR_Integer mdb__browser_info__Depth_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 0)));
#line 1153 "browser_info.m"
    MR_Integer mdb__browser_info__Size_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 1)));
#line 1153 "browser_info.m"
    MR_Integer mdb__browser_info__Width_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 2)));
#line 1153 "browser_info.m"
    MR_Integer mdb__browser_info__Lines_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 3)));
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_33_33;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_34_34;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_35_35;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_37_37;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_39_39;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_40_40;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_41_41;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_43_43;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_45_45;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_46_46;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_47_47;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_49_49;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_51_51;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_52_52;
#line 1153 "browser_info.m"
    MR_Integer mdb__browser_info__Depth_54;
#line 1153 "browser_info.m"
    MR_Integer mdb__browser_info__Size_55;
#line 1153 "browser_info.m"
    MR_Integer mdb__browser_info__Width_56;
#line 1153 "browser_info.m"
    MR_Integer mdb__browser_info__Lines_57;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_59_59;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_60_60;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_61_61;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_63_63;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_65_65;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_66_66;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_67_67;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_69_69;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_71_71;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_72_72;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_73_73;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_75_75;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_77_77;
#line 1153 "browser_info.m"
    MR_String mdb__browser_info__V_78_78;

#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_34_34 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Depth_28);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_40_40 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Size_29);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_46_46 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Width_30);
    }
#line 1176 "browser_info.m"
    {
#line 1176 "browser_info.m"
      mdb__browser_info__V_52_52 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Lines_31);
    }
#line 1176 "browser_info.m"
    {
#line 1176 "browser_info.m"
      mdb__browser_info__V_51_51 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_52_52, (MR_String) "\n");
    }
#line 1176 "browser_info.m"
    {
#line 1176 "browser_info.m"
      mdb__browser_info__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) "lines ", mdb__browser_info__V_51_51);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_49_49);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_45_45 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_46_46, mdb__browser_info__V_47_47);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "width ", mdb__browser_info__V_45_45);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_43_43);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_39_39 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_40_40, mdb__browser_info__V_41_41);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) "size ", mdb__browser_info__V_39_39);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_37_37);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_33_33 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_34_34, mdb__browser_info__V_35_35);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "depth ", mdb__browser_info__V_33_33);
    }
#line 1172 "browser_info.m"
    mdb__browser_info__Depth_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__RawPrettyParams_5, (MR_Integer) 0)));
#line 1172 "browser_info.m"
    mdb__browser_info__Size_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__RawPrettyParams_5, (MR_Integer) 1)));
#line 1172 "browser_info.m"
    mdb__browser_info__Width_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__RawPrettyParams_5, (MR_Integer) 2)));
#line 1172 "browser_info.m"
    mdb__browser_info__Lines_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__RawPrettyParams_5, (MR_Integer) 3)));
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_60_60 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Depth_54);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_66_66 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Size_55);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_72_72 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Width_56);
    }
#line 1176 "browser_info.m"
    {
#line 1176 "browser_info.m"
      mdb__browser_info__V_78_78 = mercury__string__int_to_string_1_f_0(mdb__browser_info__Lines_57);
    }
#line 1176 "browser_info.m"
    {
#line 1176 "browser_info.m"
      mdb__browser_info__V_77_77 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_78_78, (MR_String) "\n");
    }
#line 1176 "browser_info.m"
    {
#line 1176 "browser_info.m"
      mdb__browser_info__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "lines ", mdb__browser_info__V_77_77);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_75_75);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_71_71 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_72_72, mdb__browser_info__V_73_73);
    }
#line 1175 "browser_info.m"
    {
#line 1175 "browser_info.m"
      mdb__browser_info__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) "width ", mdb__browser_info__V_71_71);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_69_69);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_65_65 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_66_66, mdb__browser_info__V_67_67);
    }
#line 1174 "browser_info.m"
    {
#line 1174 "browser_info.m"
      mdb__browser_info__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "size ", mdb__browser_info__V_65_65);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) ", ", mdb__browser_info__V_63_63);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_59_59 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_60_60, mdb__browser_info__V_61_61);
    }
#line 1173 "browser_info.m"
    {
#line 1173 "browser_info.m"
      mdb__browser_info__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "depth ", mdb__browser_info__V_59_59);
    }
#line 1157 "browser_info.m"
    {
#line 1157 "browser_info.m"
      mdb__browser_info__V_24_24 = mdb__browser_info__format_params_to_desc_1_f_0(mdb__browser_info__VerboseParams_6);
    }
#line 1158 "browser_info.m"
    {
#line 1158 "browser_info.m"
      mdb__browser_info__V_27_27 = mdb__browser_info__format_params_to_desc_1_f_0(mdb__browser_info__PrettyParams_7);
    }
#line 1158 "browser_info.m"
    {
#line 1158 "browser_info.m"
      mdb__browser_info__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "pretty parameters:     ", mdb__browser_info__V_27_27);
    }
#line 1157 "browser_info.m"
    {
#line 1157 "browser_info.m"
      mdb__browser_info__V_23_23 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_24_24, mdb__browser_info__V_25_25);
    }
#line 1157 "browser_info.m"
    {
#line 1157 "browser_info.m"
      mdb__browser_info__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "verbose parameters:    ", mdb__browser_info__V_23_23);
    }
#line 1156 "browser_info.m"
    {
#line 1156 "browser_info.m"
      mdb__browser_info__V_19_19 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_20_20, mdb__browser_info__V_21_21);
    }
#line 1156 "browser_info.m"
    {
#line 1156 "browser_info.m"
      mdb__browser_info__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "raw_pretty parameters: ", mdb__browser_info__V_19_19);
    }
#line 1155 "browser_info.m"
    {
#line 1155 "browser_info.m"
      mdb__browser_info__V_15_15 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_16_16, mdb__browser_info__V_17_17);
    }
#line 1155 "browser_info.m"
    {
#line 1155 "browser_info.m"
      mdb__browser_info__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "flat parameters:       ", mdb__browser_info__V_15_15);
    }
#line 1154 "browser_info.m"
    {
#line 1154 "browser_info.m"
      mdb__browser_info__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mdb__browser_info__V_13_13);
    }
#line 1154 "browser_info.m"
    {
#line 1154 "browser_info.m"
      mdb__browser_info__V_9_9 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_10_10, mdb__browser_info__V_11_11);
    }
#line 1154 "browser_info.m"
    {
#line 1154 "browser_info.m"
      mdb__browser_info__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "default format ", mdb__browser_info__V_9_9);
    }
#line 1153 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 1153 "browser_info.m"
  }
#line 1150 "browser_info.m"
}

#line 1136 "browser_info.m"
static MR_String MR_CALL 
mdb__browser_info__caller_params_to_mdb_command_2_f_0(
#line 1136 "browser_info.m"
  MR_String mdb__browser_info__CallerOpt_4,
#line 1136 "browser_info.m"
  MR_Word mdb__browser_info__CallerParams_5)
#line 1136 "browser_info.m"
{
#line 1138 "browser_info.m"
  {
#line 1138 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__Cmds_6;
#line 1138 "browser_info.m"
    MR_Word mdb__browser_info__Format_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 0)));
#line 1138 "browser_info.m"
    MR_Word mdb__browser_info__FlatParams_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 1)));
#line 1138 "browser_info.m"
    MR_Word mdb__browser_info__RawPrettyParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 2)));
#line 1138 "browser_info.m"
    MR_Word mdb__browser_info__VerboseParams_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 3)));
#line 1138 "browser_info.m"
    MR_Word mdb__browser_info__PrettyParams_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_5, (MR_Integer) 4)));
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__FormatCmd_12;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__CmdPrefix_13;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__FormatParamCmds_14;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__V_16_16;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__V_17_17;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__V_18_18 = ((&mdb__browser_info_vector_common_7[0 + mdb__browser_info__Format_7]))->mdb__browser_info__vector_common_type_7_0__vct_7_f_0;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__V_22_22;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__V_24_24;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__V_25_25;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__V_26_26;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__V_28_28;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__V_29_29;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__V_30_30;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__V_32_32;
#line 1138 "browser_info.m"
    MR_String mdb__browser_info__V_33_33;

#line 1141 "browser_info.m"
    {
#line 1141 "browser_info.m"
      mdb__browser_info__V_17_17 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_18_18, (MR_String) "\n");
    }
#line 1141 "browser_info.m"
    {
#line 1141 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CallerOpt_4, mdb__browser_info__V_17_17);
    }
#line 1141 "browser_info.m"
    {
#line 1141 "browser_info.m"
      mdb__browser_info__FormatCmd_12 = mercury__string__f_43_43_2_f_0((MR_String) "format ", mdb__browser_info__V_16_16);
    }
#line 1142 "browser_info.m"
    {
#line 1142 "browser_info.m"
      mdb__browser_info__CmdPrefix_13 = mercury__string__f_43_43_2_f_0((MR_String) "format_param ", mdb__browser_info__CallerOpt_4);
    }
#line 1144 "browser_info.m"
    {
#line 1144 "browser_info.m"
      mdb__browser_info__V_22_22 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdPrefix_13, (MR_String) "-f ");
    }
#line 1144 "browser_info.m"
    {
#line 1144 "browser_info.m"
      mdb__browser_info__V_21_21 = mdb__browser_info__format_params_to_mdb_command_2_f_0(mdb__browser_info__V_22_22, mdb__browser_info__FlatParams_8);
    }
#line 1145 "browser_info.m"
    {
#line 1145 "browser_info.m"
      mdb__browser_info__V_26_26 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdPrefix_13, (MR_String) "-r ");
    }
#line 1145 "browser_info.m"
    {
#line 1145 "browser_info.m"
      mdb__browser_info__V_25_25 = mdb__browser_info__format_params_to_mdb_command_2_f_0(mdb__browser_info__V_26_26, mdb__browser_info__RawPrettyParams_9);
    }
#line 1146 "browser_info.m"
    {
#line 1146 "browser_info.m"
      mdb__browser_info__V_30_30 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdPrefix_13, (MR_String) "-v ");
    }
#line 1146 "browser_info.m"
    {
#line 1146 "browser_info.m"
      mdb__browser_info__V_29_29 = mdb__browser_info__format_params_to_mdb_command_2_f_0(mdb__browser_info__V_30_30, mdb__browser_info__VerboseParams_10);
    }
#line 1147 "browser_info.m"
    {
#line 1147 "browser_info.m"
      mdb__browser_info__V_33_33 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CmdPrefix_13, (MR_String) "-p ");
    }
#line 1147 "browser_info.m"
    {
#line 1147 "browser_info.m"
      mdb__browser_info__V_32_32 = mdb__browser_info__format_params_to_mdb_command_2_f_0(mdb__browser_info__V_33_33, mdb__browser_info__PrettyParams_11);
    }
#line 1146 "browser_info.m"
    {
#line 1146 "browser_info.m"
      mdb__browser_info__V_28_28 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_29_29, mdb__browser_info__V_32_32);
    }
#line 1145 "browser_info.m"
    {
#line 1145 "browser_info.m"
      mdb__browser_info__V_24_24 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_25_25, mdb__browser_info__V_28_28);
    }
#line 1144 "browser_info.m"
    {
#line 1144 "browser_info.m"
      mdb__browser_info__FormatParamCmds_14 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_21_21, mdb__browser_info__V_24_24);
    }
#line 1148 "browser_info.m"
    {
#line 1148 "browser_info.m"
      mdb__browser_info__Cmds_6 = mercury__string__f_43_43_2_f_0(mdb__browser_info__FormatCmd_12, mdb__browser_info__FormatParamCmds_14);
    }
#line 1138 "browser_info.m"
    return mdb__browser_info__Cmds_6;
#line 1138 "browser_info.m"
  }
#line 1136 "browser_info.m"
}

#line 1004 "browser_info.m"
static void MR_CALL 
mdb__browser_info__write_down_path_loop_4_p_0(
#line 1004 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_5,
#line 1004 "browser_info.m"
  MR_Word mdb__browser_info__Dirs_6)
#line 1004 "browser_info.m"
{
#line 1009 "browser_info.m"
  while (MR_TRUE)
#line 1009 "browser_info.m"
    {
#line 1009 "browser_info.m"
      /* tailcall optimized into a loop */
#line 1009 "browser_info.m"
      {
#line 1009 "browser_info.m"
        MR_bool mdb__browser_info__succeeded;

#line 1009 "browser_info.m"
        if ((mdb__browser_info__Dirs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1009 "browser_info.m"
          {
#line 1009 "browser_info.m"
          }
#line 1009 "browser_info.m"
        else
#line 1011 "browser_info.m"
          {
#line 1011 "browser_info.m"
            MR_Word mdb__browser_info__HeadDir_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__Dirs_6, (MR_Integer) 0)));
#line 1011 "browser_info.m"
            MR_Word mdb__browser_info__TailDirs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__Dirs_6, (MR_Integer) 1)));

#line 1020 "browser_info.m"
            if (((MR_tag((MR_Word) mdb__browser_info__HeadDir_8)) == (MR_mktag((MR_Integer) 1))))
#line 1024 "browser_info.m"
              {
#line 1024 "browser_info.m"
                MR_String mdb__browser_info__Name_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadDir_8, (MR_Integer) 0)));

#line 1025 "browser_info.m"
                {
#line 1025 "browser_info.m"
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_5, (MR_String) "/");
                }
#line 1026 "browser_info.m"
                {
#line 1026 "browser_info.m"
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_5, mdb__browser_info__Name_20);
                }
#line 1024 "browser_info.m"
              }
#line 1020 "browser_info.m"
            else
#line 1020 "browser_info.m"
              {
#line 1020 "browser_info.m"
                MR_Integer mdb__browser_info__N_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadDir_8, (MR_Integer) 0)));

#line 1021 "browser_info.m"
                {
#line 1021 "browser_info.m"
                  mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_5, (MR_String) "/");
                }
#line 1022 "browser_info.m"
                {
#line 1022 "browser_info.m"
                  mdb__browser_info__write_int_debugger_4_p_0(mdb__browser_info__Debugger_5, mdb__browser_info__N_19);
                }
#line 1020 "browser_info.m"
              }
#line 1013 "browser_info.m"
            /* direct tailcall eliminated */
#line 1013 "browser_info.m"
            {
#line 1013 "browser_info.m"
              MR_Word mdb__browser_info__Dirs__tmp_copy_6 = mdb__browser_info__TailDirs_9;

#line 1013 "browser_info.m"
              mdb__browser_info__Dirs_6 = mdb__browser_info__Dirs__tmp_copy_6;
#line 1013 "browser_info.m"
            }
#line 1013 "browser_info.m"
            continue;
#line 1011 "browser_info.m"
          }
#line 1009 "browser_info.m"
      }
#line 1009 "browser_info.m"
      break;
#line 1009 "browser_info.m"
    }
#line 1004 "browser_info.m"
}

#line 921 "browser_info.m"
static void MR_CALL 
mdb__browser_info__show_settings_caller_format_8_p_0(
#line 921 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_9,
#line 921 "browser_info.m"
  MR_Word mdb__browser_info__Info_10,
#line 921 "browser_info.m"
  MR_Word mdb__browser_info__Caller_11,
#line 921 "browser_info.m"
  MR_String mdb__browser_info__CallerName_12,
#line 921 "browser_info.m"
  MR_Word mdb__browser_info__Format_13,
#line 921 "browser_info.m"
  MR_String mdb__browser_info__FormatName_14)
#line 921 "browser_info.m"
{
#line 926 "browser_info.m"
  {
#line 926 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 926 "browser_info.m"
    MR_Word mdb__browser_info__Params_16;
#line 926 "browser_info.m"
    MR_String mdb__browser_info__V_19_19;
#line 926 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 926 "browser_info.m"
    MR_String mdb__browser_info__V_22_22;
#line 926 "browser_info.m"
    MR_String mdb__browser_info__V_24_24;
#line 926 "browser_info.m"
    MR_String mdb__browser_info__V_28_28;
#line 926 "browser_info.m"
    MR_String mdb__browser_info__V_33_33;
#line 926 "browser_info.m"
    MR_String mdb__browser_info__V_35_35;
#line 926 "browser_info.m"
    MR_Integer mdb__browser_info__V_36_36;
#line 926 "browser_info.m"
    MR_String mdb__browser_info__V_39_39;
#line 926 "browser_info.m"
    MR_String mdb__browser_info__V_41_41;
#line 926 "browser_info.m"
    MR_Integer mdb__browser_info__V_42_42;
#line 926 "browser_info.m"
    MR_String mdb__browser_info__V_45_45;
#line 926 "browser_info.m"
    MR_String mdb__browser_info__V_47_47;
#line 926 "browser_info.m"
    MR_Integer mdb__browser_info__V_48_48;
#line 926 "browser_info.m"
    MR_String mdb__browser_info__V_51_51;
#line 926 "browser_info.m"
    MR_String mdb__browser_info__V_53_53;
#line 926 "browser_info.m"
    MR_Integer mdb__browser_info__V_54_54;
#line 934 "browser_info.m"
    MR_Integer mdb__browser_info__V_58_58;
#line 934 "browser_info.m"
    MR_Integer mdb__browser_info__V_59_59;
#line 934 "browser_info.m"
    MR_Integer mdb__browser_info__V_60_60;
#line 936 "browser_info.m"
    MR_Integer mdb__browser_info__V_61_61;
#line 936 "browser_info.m"
    MR_Integer mdb__browser_info__V_62_62;
#line 936 "browser_info.m"
    MR_Integer mdb__browser_info__V_63_63;
#line 938 "browser_info.m"
    MR_Integer mdb__browser_info__V_64_64;
#line 938 "browser_info.m"
    MR_Integer mdb__browser_info__V_65_65;
#line 938 "browser_info.m"
    MR_Integer mdb__browser_info__V_66_66;
#line 940 "browser_info.m"
    MR_Integer mdb__browser_info__V_67_67;
#line 940 "browser_info.m"
    MR_Integer mdb__browser_info__V_68_68;
#line 940 "browser_info.m"
    MR_Integer mdb__browser_info__V_69_69;

#line 927 "browser_info.m"
    {
#line 927 "browser_info.m"
      mdb__browser_info__get_format_params_4_p_0(mdb__browser_info__Info_10, mdb__browser_info__Caller_11, mdb__browser_info__Format_13, &mdb__browser_info__Params_16);
    }
#line 929 "browser_info.m"
    {
#line 929 "browser_info.m"
      mdb__browser_info__V_24_24 = mercury__string__f_43_43_2_f_0(mdb__browser_info__FormatName_14, (MR_String) ":");
    }
#line 929 "browser_info.m"
    {
#line 929 "browser_info.m"
      mdb__browser_info__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) " ", mdb__browser_info__V_24_24);
    }
#line 929 "browser_info.m"
    {
#line 929 "browser_info.m"
      mdb__browser_info__V_21_21 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CallerName_12, mdb__browser_info__V_22_22);
    }
#line 929 "browser_info.m"
    {
#line 929 "browser_info.m"
      mdb__browser_info__V_19_19 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_21_21, (MR_Char) 32, (MR_Integer) 30);
    }
#line 928 "browser_info.m"
    {
#line 928 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_19_19);
    }
#line 932 "browser_info.m"
    {
#line 932 "browser_info.m"
      mdb__browser_info__V_28_28 = mercury__string__pad_right_3_f_0((MR_String) " ", (MR_Char) 32, (MR_Integer) 3);
    }
#line 931 "browser_info.m"
    {
#line 931 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_28_28);
    }
#line 934 "browser_info.m"
    mdb__browser_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 0)));
#line 934 "browser_info.m"
    mdb__browser_info__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 1)));
#line 934 "browser_info.m"
    mdb__browser_info__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 2)));
#line 934 "browser_info.m"
    mdb__browser_info__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 3)));
#line 934 "browser_info.m"
    {
#line 934 "browser_info.m"
      mdb__browser_info__V_35_35 = mercury__string__int_to_string_1_f_0(mdb__browser_info__V_36_36);
    }
#line 934 "browser_info.m"
    {
#line 934 "browser_info.m"
      mdb__browser_info__V_33_33 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_35_35, (MR_Char) 32, (MR_Integer) 10);
    }
#line 933 "browser_info.m"
    {
#line 933 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_33_33);
    }
#line 936 "browser_info.m"
    mdb__browser_info__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 0)));
#line 936 "browser_info.m"
    mdb__browser_info__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 1)));
#line 936 "browser_info.m"
    mdb__browser_info__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 2)));
#line 936 "browser_info.m"
    mdb__browser_info__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 3)));
#line 936 "browser_info.m"
    {
#line 936 "browser_info.m"
      mdb__browser_info__V_41_41 = mercury__string__int_to_string_1_f_0(mdb__browser_info__V_42_42);
    }
#line 936 "browser_info.m"
    {
#line 936 "browser_info.m"
      mdb__browser_info__V_39_39 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_41_41, (MR_Char) 32, (MR_Integer) 10);
    }
#line 935 "browser_info.m"
    {
#line 935 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_39_39);
    }
#line 938 "browser_info.m"
    mdb__browser_info__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 0)));
#line 938 "browser_info.m"
    mdb__browser_info__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 1)));
#line 938 "browser_info.m"
    mdb__browser_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 2)));
#line 938 "browser_info.m"
    mdb__browser_info__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 3)));
#line 938 "browser_info.m"
    {
#line 938 "browser_info.m"
      mdb__browser_info__V_47_47 = mercury__string__int_to_string_1_f_0(mdb__browser_info__V_48_48);
    }
#line 938 "browser_info.m"
    {
#line 938 "browser_info.m"
      mdb__browser_info__V_45_45 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_47_47, (MR_Char) 32, (MR_Integer) 10);
    }
#line 937 "browser_info.m"
    {
#line 937 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_45_45);
    }
#line 940 "browser_info.m"
    mdb__browser_info__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 0)));
#line 940 "browser_info.m"
    mdb__browser_info__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 1)));
#line 940 "browser_info.m"
    mdb__browser_info__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 2)));
#line 940 "browser_info.m"
    mdb__browser_info__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_16, (MR_Integer) 3)));
#line 940 "browser_info.m"
    {
#line 940 "browser_info.m"
      mdb__browser_info__V_53_53 = mercury__string__int_to_string_1_f_0(mdb__browser_info__V_54_54);
    }
#line 940 "browser_info.m"
    {
#line 940 "browser_info.m"
      mdb__browser_info__V_51_51 = mercury__string__pad_right_3_f_0(mdb__browser_info__V_53_53, (MR_Char) 32, (MR_Integer) 10);
    }
#line 939 "browser_info.m"
    {
#line 939 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_9, mdb__browser_info__V_51_51);
    }
#line 941 "browser_info.m"
    {
#line 941 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_9);
    }
#line 926 "browser_info.m"
  }
#line 921 "browser_info.m"
}

#line 894 "browser_info.m"
static void MR_CALL 
mdb__browser_info__show_settings_caller_6_p_0(
#line 894 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_7,
#line 894 "browser_info.m"
  MR_Word mdb__browser_info__Info_8,
#line 894 "browser_info.m"
  MR_Word mdb__browser_info__Caller_9,
#line 894 "browser_info.m"
  MR_String mdb__browser_info__CallerName_10)
#line 894 "browser_info.m"
{
#line 897 "browser_info.m"
  {
#line 897 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 897 "browser_info.m"
    MR_Word mdb__browser_info__Format_12;
#line 897 "browser_info.m"
    MR_String mdb__browser_info__V_16_16;
#line 897 "browser_info.m"
    MR_String mdb__browser_info__V_21_21;
#line 897 "browser_info.m"
    MR_String mdb__browser_info__V_26_26;
#line 897 "browser_info.m"
    MR_String mdb__browser_info__V_31_31;
#line 897 "browser_info.m"
    MR_String mdb__browser_info__V_36_36;
#line 897 "browser_info.m"
    MR_String mdb__browser_info__V_41_41;
#line 897 "browser_info.m"
    MR_String mdb__browser_info__V_46_46;
#line 897 "browser_info.m"
    MR_Word mdb__browser_info__MdbFormatOption_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 3)));
#line 897 "browser_info.m"
    MR_Word mdb__browser_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 4)));
#line 547 "browser_info.m"
    MR_Word mdb__browser_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 0)));
#line 547 "browser_info.m"
    MR_Word mdb__browser_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 1)));
#line 547 "browser_info.m"
    MR_Word mdb__browser_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 2)));
#line 547 "browser_info.m"
    MR_Word mdb__browser_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 5)));
#line 547 "browser_info.m"
    MR_Word mdb__browser_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 6)));

#line 550 "browser_info.m"
    if ((mdb__browser_info__MdbFormatOption_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "browser_info.m"
      {
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__Params_70;
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 2)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 1)));
#line 551 "browser_info.m"
        MR_Word mdb__browser_info__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 0)));
#line 819 "browser_info.m"
        MR_Word mdb__browser_info__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 5)));
#line 819 "browser_info.m"
        MR_Word mdb__browser_info__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 4)));
#line 819 "browser_info.m"
        MR_Integer mdb__browser_info__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_75_75, (MR_Integer) 3)));
#line 553 "browser_info.m"
        MR_Word mdb__browser_info__V_84_84;
#line 553 "browser_info.m"
        MR_Word mdb__browser_info__V_85_85;
#line 553 "browser_info.m"
        MR_Word mdb__browser_info__V_86_86;
#line 553 "browser_info.m"
        MR_Word mdb__browser_info__V_87_87;

#line 819 "browser_info.m"
#line 819 "browser_info.m"
        switch (mdb__browser_info__Caller_9) {
#line 819 "browser_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 819 "browser_info.m"
          case (MR_Integer) 1:
#line 820 "browser_info.m"
            mdb__browser_info__Params_70 = mdb__browser_info__V_110_110;
#line 819 "browser_info.m"
            break;
#line 819 "browser_info.m"
          case (MR_Integer) 0:
#line 819 "browser_info.m"
            mdb__browser_info__Params_70 = mdb__browser_info__V_111_111;
#line 819 "browser_info.m"
            break;
#line 819 "browser_info.m"
          case (MR_Integer) 2:
#line 821 "browser_info.m"
            mdb__browser_info__Params_70 = mdb__browser_info__V_109_109;
#line 819 "browser_info.m"
            break;
#line 819 "browser_info.m"
        }
#line 553 "browser_info.m"
        mdb__browser_info__Format_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 0)));
#line 553 "browser_info.m"
        mdb__browser_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 1)));
#line 553 "browser_info.m"
        mdb__browser_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 2)));
#line 553 "browser_info.m"
        mdb__browser_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 3)));
#line 553 "browser_info.m"
        mdb__browser_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_70, (MR_Integer) 4)));
#line 551 "browser_info.m"
      }
#line 550 "browser_info.m"
    else
#line 549 "browser_info.m"
      mdb__browser_info__Format_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__MdbFormatOption_69, (MR_Integer) 0)));
#line 899 "browser_info.m"
    {
#line 899 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__string__f_43_43_2_f_0(mdb__browser_info__CallerName_10, (MR_String) " default format: ");
    }
#line 899 "browser_info.m"
    {
#line 899 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_16_16);
    }
#line 900 "browser_info.m"
    {
#line 900 "browser_info.m"
      mdb__browser_info__print_format_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Format_12);
    }
#line 901 "browser_info.m"
    {
#line 901 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_7);
    }
#line 903 "browser_info.m"
    {
#line 903 "browser_info.m"
      mdb__browser_info__V_21_21 = mercury__string__pad_right_3_f_0((MR_String) "", (MR_Char) 32, (MR_Integer) 30);
    }
#line 903 "browser_info.m"
    {
#line 903 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_21_21);
    }
#line 904 "browser_info.m"
    {
#line 904 "browser_info.m"
      mdb__browser_info__V_26_26 = mercury__string__pad_right_3_f_0((MR_String) " ", (MR_Char) 32, (MR_Integer) 3);
    }
#line 904 "browser_info.m"
    {
#line 904 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_26_26);
    }
#line 905 "browser_info.m"
    {
#line 905 "browser_info.m"
      mdb__browser_info__V_31_31 = mercury__string__pad_right_3_f_0((MR_String) "depth", (MR_Char) 32, (MR_Integer) 10);
    }
#line 905 "browser_info.m"
    {
#line 905 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_31_31);
    }
#line 906 "browser_info.m"
    {
#line 906 "browser_info.m"
      mdb__browser_info__V_36_36 = mercury__string__pad_right_3_f_0((MR_String) "size", (MR_Char) 32, (MR_Integer) 10);
    }
#line 906 "browser_info.m"
    {
#line 906 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_36_36);
    }
#line 907 "browser_info.m"
    {
#line 907 "browser_info.m"
      mdb__browser_info__V_41_41 = mercury__string__pad_right_3_f_0((MR_String) "width", (MR_Char) 32, (MR_Integer) 10);
    }
#line 907 "browser_info.m"
    {
#line 907 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_41_41);
    }
#line 908 "browser_info.m"
    {
#line 908 "browser_info.m"
      mdb__browser_info__V_46_46 = mercury__string__pad_right_3_f_0((MR_String) "lines", (MR_Char) 32, (MR_Integer) 10);
    }
#line 908 "browser_info.m"
    {
#line 908 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__V_46_46);
    }
#line 909 "browser_info.m"
    {
#line 909 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_7);
    }
#line 911 "browser_info.m"
    {
#line 911 "browser_info.m"
      mdb__browser_info__show_settings_caller_format_8_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Info_8, mdb__browser_info__Caller_9, mdb__browser_info__CallerName_10, (MR_Integer) 0, (MR_String) "flat");
    }
#line 913 "browser_info.m"
    {
#line 913 "browser_info.m"
      mdb__browser_info__show_settings_caller_format_8_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Info_8, mdb__browser_info__Caller_9, mdb__browser_info__CallerName_10, (MR_Integer) 2, (MR_String) "verbose");
    }
#line 915 "browser_info.m"
    {
#line 915 "browser_info.m"
      mdb__browser_info__show_settings_caller_format_8_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Info_8, mdb__browser_info__Caller_9, mdb__browser_info__CallerName_10, (MR_Integer) 3, (MR_String) "pretty");
    }
#line 917 "browser_info.m"
    {
#line 917 "browser_info.m"
      mdb__browser_info__show_settings_caller_format_8_p_0(mdb__browser_info__Debugger_7, mdb__browser_info__Info_8, mdb__browser_info__Caller_9, mdb__browser_info__CallerName_10, (MR_Integer) 1, (MR_String) "raw_pretty");
    }
#line 919 "browser_info.m"
    {
#line 919 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_7);
    }
#line 897 "browser_info.m"
  }
#line 894 "browser_info.m"
}

#line 805 "browser_info.m"
static void MR_CALL 
mdb__browser_info__maybe_set_param_2_4_p_0(
#line 805 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 805 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__2_2,
#line 805 "browser_info.m"
  MR_Word mdb__browser_info__Params_3,
#line 805 "browser_info.m"
  MR_Word * mdb__browser_info__HeadVar__4_4)
#line 805 "browser_info.m"
{
#line 808 "browser_info.m"
  {
#line 808 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 808 "browser_info.m"
#line 808 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 808 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 808 "browser_info.m"
      case (MR_Integer) 0:
#line 808 "browser_info.m"
        *mdb__browser_info__HeadVar__4_4 = mdb__browser_info__Params_3;
#line 808 "browser_info.m"
        break;
#line 808 "browser_info.m"
      case (MR_Integer) 1:
#line 808 "browser_info.m"
#line 808 "browser_info.m"
        switch (MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) {
#line 808 "browser_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 808 "browser_info.m"
          case (MR_Integer) 0:
#line 809 "browser_info.m"
            {
#line 809 "browser_info.m"
              MR_Integer mdb__browser_info__D_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 809 "browser_info.m"
              MR_Integer mdb__browser_info__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 1)));
#line 809 "browser_info.m"
              MR_Integer mdb__browser_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 2)));
#line 809 "browser_info.m"
              MR_Integer mdb__browser_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 3)));
#line 809 "browser_info.m"
              MR_Integer mdb__browser_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 0)));

#line 809 "browser_info.m"
              {
#line 809 "browser_info.m"
                MR_Word base;
#line 809 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 809 "browser_info.m"
                *mdb__browser_info__HeadVar__4_4 = base;
#line 809 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__D_7));
#line 809 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_22_22));
#line 809 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_23_23));
#line 809 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_24_24));
#line 809 "browser_info.m"
              }
#line 809 "browser_info.m"
            }
#line 808 "browser_info.m"
            break;
#line 808 "browser_info.m"
          case (MR_Integer) 1:
#line 810 "browser_info.m"
            {
#line 810 "browser_info.m"
              MR_Integer mdb__browser_info__S_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 810 "browser_info.m"
              MR_Integer mdb__browser_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 0)));
#line 810 "browser_info.m"
              MR_Integer mdb__browser_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 2)));
#line 810 "browser_info.m"
              MR_Integer mdb__browser_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 3)));
#line 810 "browser_info.m"
              MR_Integer mdb__browser_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 1)));

#line 810 "browser_info.m"
              {
#line 810 "browser_info.m"
                MR_Word base;
#line 810 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 810 "browser_info.m"
                *mdb__browser_info__HeadVar__4_4 = base;
#line 810 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_25_25));
#line 810 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__S_9));
#line 810 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_27_27));
#line 810 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_28_28));
#line 810 "browser_info.m"
              }
#line 810 "browser_info.m"
            }
#line 808 "browser_info.m"
            break;
#line 808 "browser_info.m"
          case (MR_Integer) 2:
#line 813 "browser_info.m"
            {
#line 813 "browser_info.m"
              MR_Integer mdb__browser_info__W_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));
#line 813 "browser_info.m"
              MR_Integer mdb__browser_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 0)));
#line 813 "browser_info.m"
              MR_Integer mdb__browser_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 1)));
#line 813 "browser_info.m"
              MR_Integer mdb__browser_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 3)));
#line 813 "browser_info.m"
              MR_Integer mdb__browser_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 2)));

#line 813 "browser_info.m"
              {
#line 813 "browser_info.m"
                MR_Word base;
#line 813 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 813 "browser_info.m"
                *mdb__browser_info__HeadVar__4_4 = base;
#line 813 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_29_29));
#line 813 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_30_30));
#line 813 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__W_17));
#line 813 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_32_32));
#line 813 "browser_info.m"
              }
#line 813 "browser_info.m"
            }
#line 808 "browser_info.m"
            break;
#line 808 "browser_info.m"
          case (MR_Integer) 3:
#line 808 "browser_info.m"
#line 808 "browser_info.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) {
#line 808 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 808 "browser_info.m"
              case (MR_Integer) 0:
#line 814 "browser_info.m"
                {
#line 814 "browser_info.m"
                  MR_Integer mdb__browser_info__L_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 814 "browser_info.m"
                  MR_Integer mdb__browser_info__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 0)));
#line 814 "browser_info.m"
                  MR_Integer mdb__browser_info__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 1)));
#line 814 "browser_info.m"
                  MR_Integer mdb__browser_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 2)));
#line 814 "browser_info.m"
                  MR_Integer mdb__browser_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_3, (MR_Integer) 3)));

#line 814 "browser_info.m"
                  {
#line 814 "browser_info.m"
                    MR_Word base;
#line 814 "browser_info.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 814 "browser_info.m"
                    *mdb__browser_info__HeadVar__4_4 = base;
#line 814 "browser_info.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_33_33));
#line 814 "browser_info.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_34_34));
#line 814 "browser_info.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_35_35));
#line 814 "browser_info.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__L_19));
#line 814 "browser_info.m"
                  }
#line 814 "browser_info.m"
                }
#line 808 "browser_info.m"
                break;
#line 808 "browser_info.m"
              case (MR_Integer) 1:
#line 811 "browser_info.m"
                {
#line 812 "browser_info.m"
                  {
#line 812 "browser_info.m"
                    mercury__require__unexpected_3_p_0((MR_String) "mdb.browser_info", (MR_String) "predicate \140mdb.browser_info.maybe_set_param_2\'/4", (MR_String) "cannot set format here");
#line 812 "browser_info.m"
                    return;
                  }
#line 811 "browser_info.m"
                }
#line 808 "browser_info.m"
                break;
#line 808 "browser_info.m"
            }
#line 808 "browser_info.m"
            break;
#line 808 "browser_info.m"
        }
#line 808 "browser_info.m"
        break;
#line 808 "browser_info.m"
    }
#line 808 "browser_info.m"
  }
#line 805 "browser_info.m"
}

#line 778 "browser_info.m"
static void MR_CALL 
mdb__browser_info__maybe_set_param_8_p_0(
#line 778 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1,
#line 778 "browser_info.m"
  MR_Word mdb__browser_info__F_2,
#line 778 "browser_info.m"
  MR_Word mdb__browser_info__Pr_3,
#line 778 "browser_info.m"
  MR_Word mdb__browser_info__V_4,
#line 778 "browser_info.m"
  MR_Word mdb__browser_info__NPr_5,
#line 778 "browser_info.m"
  MR_Word mdb__browser_info__Setting_6,
#line 778 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Params_0_7,
#line 778 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Params_8)
#line 778 "browser_info.m"
{
#line 781 "browser_info.m"
  {
#line 781 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 781 "browser_info.m"
#line 781 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 781 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 781 "browser_info.m"
      case (MR_Integer) 0:
#line 781 "browser_info.m"
        *mdb__browser_info__STATE_VARIABLE_Params_8 = mdb__browser_info__STATE_VARIABLE_Params_0_7;
#line 781 "browser_info.m"
        break;
#line 781 "browser_info.m"
      case (MR_Integer) 1:
#line 782 "browser_info.m"
        {
#line 782 "browser_info.m"
          MR_Word mdb__browser_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 4)));
#line 782 "browser_info.m"
          MR_Word mdb__browser_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 3)));
#line 782 "browser_info.m"
          MR_Word mdb__browser_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 2)));
#line 782 "browser_info.m"
          MR_Word mdb__browser_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 1)));
#line 782 "browser_info.m"
          MR_Word mdb__browser_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Params_0_7, (MR_Integer) 0)));

#line 786 "browser_info.m"
#line 786 "browser_info.m"
          switch (MR_tag((MR_Word) mdb__browser_info__Setting_6)) {
#line 786 "browser_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 786 "browser_info.m"
            case (MR_Integer) 0:
#line 786 "browser_info.m"
            case (MR_Integer) 1:
#line 786 "browser_info.m"
            case (MR_Integer) 2:
#line 791 "browser_info.m"
              {
#line 791 "browser_info.m"
                MR_Word mdb__browser_info__FParams_33;
#line 791 "browser_info.m"
                MR_Word mdb__browser_info__PrParams_34;
#line 791 "browser_info.m"
                MR_Word mdb__browser_info__VParams_35;
#line 791 "browser_info.m"
                MR_Word mdb__browser_info__NPrParams_36;

#line 797 "browser_info.m"
                {
#line 797 "browser_info.m"
                  mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__F_2, mdb__browser_info__Setting_6, mdb__browser_info__V_69_69, &mdb__browser_info__FParams_33);
                }
#line 798 "browser_info.m"
                {
#line 798 "browser_info.m"
                  mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__Pr_3, mdb__browser_info__Setting_6, mdb__browser_info__V_68_68, &mdb__browser_info__PrParams_34);
                }
#line 799 "browser_info.m"
                {
#line 799 "browser_info.m"
                  mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__V_4, mdb__browser_info__Setting_6, mdb__browser_info__V_67_67, &mdb__browser_info__VParams_35);
                }
#line 800 "browser_info.m"
                {
#line 800 "browser_info.m"
                  mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__NPr_5, mdb__browser_info__Setting_6, mdb__browser_info__V_66_66, &mdb__browser_info__NPrParams_36);
                }
#line 801 "browser_info.m"
                {
#line 801 "browser_info.m"
                  MR_Word base;
#line 801 "browser_info.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 801 "browser_info.m"
                  *mdb__browser_info__STATE_VARIABLE_Params_8 = base;
#line 801 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_70_70));
#line 801 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__FParams_33));
#line 801 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__PrParams_34));
#line 801 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__VParams_35));
#line 801 "browser_info.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__NPrParams_36));
#line 801 "browser_info.m"
                }
#line 791 "browser_info.m"
              }
#line 786 "browser_info.m"
              break;
#line 786 "browser_info.m"
            case (MR_Integer) 3:
#line 786 "browser_info.m"
#line 786 "browser_info.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__Setting_6, (MR_Integer) 0)))) {
#line 786 "browser_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 786 "browser_info.m"
                case (MR_Integer) 0:
#line 791 "browser_info.m"
                  {
#line 791 "browser_info.m"
                    MR_Word mdb__browser_info__FParams_33;
#line 791 "browser_info.m"
                    MR_Word mdb__browser_info__PrParams_34;
#line 791 "browser_info.m"
                    MR_Word mdb__browser_info__VParams_35;
#line 791 "browser_info.m"
                    MR_Word mdb__browser_info__NPrParams_36;

#line 797 "browser_info.m"
                    {
#line 797 "browser_info.m"
                      mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__F_2, mdb__browser_info__Setting_6, mdb__browser_info__V_69_69, &mdb__browser_info__FParams_33);
                    }
#line 798 "browser_info.m"
                    {
#line 798 "browser_info.m"
                      mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__Pr_3, mdb__browser_info__Setting_6, mdb__browser_info__V_68_68, &mdb__browser_info__PrParams_34);
                    }
#line 799 "browser_info.m"
                    {
#line 799 "browser_info.m"
                      mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__V_4, mdb__browser_info__Setting_6, mdb__browser_info__V_67_67, &mdb__browser_info__VParams_35);
                    }
#line 800 "browser_info.m"
                    {
#line 800 "browser_info.m"
                      mdb__browser_info__maybe_set_param_2_4_p_0(mdb__browser_info__NPr_5, mdb__browser_info__Setting_6, mdb__browser_info__V_66_66, &mdb__browser_info__NPrParams_36);
                    }
#line 801 "browser_info.m"
                    {
#line 801 "browser_info.m"
                      MR_Word base;
#line 801 "browser_info.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 801 "browser_info.m"
                      *mdb__browser_info__STATE_VARIABLE_Params_8 = base;
#line 801 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_70_70));
#line 801 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__FParams_33));
#line 801 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__PrParams_34));
#line 801 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__VParams_35));
#line 801 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__NPrParams_36));
#line 801 "browser_info.m"
                    }
#line 791 "browser_info.m"
                  }
#line 786 "browser_info.m"
                  break;
#line 786 "browser_info.m"
                case (MR_Integer) 1:
#line 784 "browser_info.m"
                  {
#line 784 "browser_info.m"
                    MR_Word mdb__browser_info__NewFormat_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__Setting_6, (MR_Integer) 1)));

#line 785 "browser_info.m"
                    {
#line 785 "browser_info.m"
                      MR_Word base;
#line 785 "browser_info.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 785 "browser_info.m"
                      *mdb__browser_info__STATE_VARIABLE_Params_8 = base;
#line 785 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__NewFormat_23));
#line 785 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_69_69));
#line 785 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_68_68));
#line 785 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_67_67));
#line 785 "browser_info.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_66_66));
#line 785 "browser_info.m"
                    }
#line 784 "browser_info.m"
                  }
#line 786 "browser_info.m"
                  break;
#line 786 "browser_info.m"
              }
#line 786 "browser_info.m"
              break;
#line 786 "browser_info.m"
          }
#line 782 "browser_info.m"
        }
#line 781 "browser_info.m"
        break;
#line 781 "browser_info.m"
    }
#line 781 "browser_info.m"
  }
#line 778 "browser_info.m"
}

#line 521 "browser_info.m"
static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_no_0_f_0(void)
#line 521 "browser_info.m"
{
#line 525 "browser_info.m"
  {
#line 525 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 525 "browser_info.m"
    return (MR_Integer) 0;
#line 525 "browser_info.m"
  }
#line 521 "browser_info.m"
}

#line 515 "browser_info.m"
static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_yes_0_f_0(void)
#line 515 "browser_info.m"
{
#line 519 "browser_info.m"
  {
#line 519 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 519 "browser_info.m"
    return (MR_Integer) 1;
#line 519 "browser_info.m"
  }
#line 515 "browser_info.m"
}

#line 497 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0(
#line 497 "browser_info.m"
  MR_String mdb__browser_info__FileName_4,
#line 497 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 497 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 497 "browser_info.m"
{
#line 504 "browser_info.m"
  {
#line 504 "browser_info.m"
    MR_bool mdb__browser_info__succeeded = (strcmp(mdb__browser_info__FileName_4, (MR_String) "") == 0);

#line 504 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 505 "browser_info.m"
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
#line 505 "browser_info.m"
      }
#line 504 "browser_info.m"
    else
#line 507 "browser_info.m"
      {
#line 507 "browser_info.m"
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

#line 507 "browser_info.m"
        {
#line 507 "browser_info.m"
          mdb__browser_info__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 507 "browser_info.m"
          MR_hl_field(MR_mktag(1), mdb__browser_info__V_11_11, 0) = ((MR_Box) (mdb__browser_info__FileName_4));
#line 507 "browser_info.m"
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
#line 507 "browser_info.m"
      }
#line 504 "browser_info.m"
  }
#line 497 "browser_info.m"
}

#line 482 "browser_info.m"
static void MR_CALL 
mdb__browser_info__get_xml_tmp_filename_from_mdb_2_p_0(
#line 482 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 482 "browser_info.m"
  MR_String * mdb__browser_info__FileName_4)
#line 482 "browser_info.m"
{
#line 488 "browser_info.m"
  {
#line 488 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 488 "browser_info.m"
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

#line 493 "browser_info.m"
    if ((mdb__browser_info__MaybeFileName_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "browser_info.m"
      *mdb__browser_info__FileName_4 = (MR_String) "";
#line 493 "browser_info.m"
    else
#line 494 "browser_info.m"
      *mdb__browser_info__FileName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeFileName_5, (MR_Integer) 0)));
#line 488 "browser_info.m"
  }
#line 482 "browser_info.m"
}

#line 469 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0(
#line 469 "browser_info.m"
  MR_String mdb__browser_info__Command_4,
#line 469 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_6,
#line 469 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_7)
#line 469 "browser_info.m"
{
#line 476 "browser_info.m"
  {
#line 476 "browser_info.m"
    MR_bool mdb__browser_info__succeeded = (strcmp(mdb__browser_info__Command_4, (MR_String) "") == 0);

#line 476 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 477 "browser_info.m"
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
#line 477 "browser_info.m"
      }
#line 476 "browser_info.m"
    else
#line 479 "browser_info.m"
      {
#line 479 "browser_info.m"
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

#line 479 "browser_info.m"
        {
#line 479 "browser_info.m"
          mdb__browser_info__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 479 "browser_info.m"
          MR_hl_field(MR_mktag(1), mdb__browser_info__V_11_11, 0) = ((MR_Box) (mdb__browser_info__Command_4));
#line 479 "browser_info.m"
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
#line 479 "browser_info.m"
      }
#line 476 "browser_info.m"
  }
#line 469 "browser_info.m"
}

#line 454 "browser_info.m"
static void MR_CALL 
mdb__browser_info__get_xml_browser_cmd_from_mdb_2_p_0(
#line 454 "browser_info.m"
  MR_Word mdb__browser_info__Browser_3,
#line 454 "browser_info.m"
  MR_String * mdb__browser_info__Command_4)
#line 454 "browser_info.m"
{
#line 460 "browser_info.m"
  {
#line 460 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 460 "browser_info.m"
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

#line 465 "browser_info.m"
    if ((mdb__browser_info__MaybeCommand_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "browser_info.m"
      *mdb__browser_info__Command_4 = (MR_String) "";
#line 465 "browser_info.m"
    else
#line 466 "browser_info.m"
      *mdb__browser_info__Command_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeCommand_5, (MR_Integer) 0)));
#line 460 "browser_info.m"
  }
#line 454 "browser_info.m"
}

#line 429 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_format_from_mdb_6_p_0(
#line 429 "browser_info.m"
  MR_Word mdb__browser_info__P_7,
#line 429 "browser_info.m"
  MR_Word mdb__browser_info__B_8,
#line 429 "browser_info.m"
  MR_Word mdb__browser_info__A_9,
#line 429 "browser_info.m"
  MR_Word mdb__browser_info__Format_10,
#line 429 "browser_info.m"
  MR_Word mdb__browser_info__STATE_VARIABLE_Browser_0_12,
#line 429 "browser_info.m"
  MR_Word * mdb__browser_info__STATE_VARIABLE_Browser_13)
#line 429 "browser_info.m"
{
#line 435 "browser_info.m"
  {
#line 435 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 435 "browser_info.m"
    MR_Word mdb__browser_info__V_19_19;

#line 437 "browser_info.m"
    {
#line 437 "browser_info.m"
      mdb__browser_info__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "browser_info.m"
      MR_hl_field(MR_mktag(3), mdb__browser_info__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 437 "browser_info.m"
      MR_hl_field(MR_mktag(3), mdb__browser_info__V_19_19, 1) = ((MR_Box) (mdb__browser_info__Format_10));
#line 437 "browser_info.m"
    }
#line 437 "browser_info.m"
    {
#line 437 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_7, mdb__browser_info__B_8, mdb__browser_info__A_9, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, mdb__browser_info__V_19_19, mdb__browser_info__STATE_VARIABLE_Browser_0_12, mdb__browser_info__STATE_VARIABLE_Browser_13);
    }
#line 435 "browser_info.m"
  }
#line 429 "browser_info.m"
}

#line 396 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_lines_from_mdb_10_p_0(
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
#line 403 "browser_info.m"
  {
#line 403 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 403 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;

#line 404 "browser_info.m"
    {
#line 404 "browser_info.m"
      mdb__browser_info__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "browser_info.m"
      MR_hl_field(MR_mktag(3), mdb__browser_info__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 404 "browser_info.m"
      MR_hl_field(MR_mktag(3), mdb__browser_info__V_23_23, 1) = ((MR_Box) (mdb__browser_info__Lines_18));
#line 404 "browser_info.m"
    }
#line 404 "browser_info.m"
    {
#line 404 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_11, mdb__browser_info__B_12, mdb__browser_info__A_13, mdb__browser_info__F_14, mdb__browser_info__Pr_15, mdb__browser_info__V_16, mdb__browser_info__NPr_17, mdb__browser_info__V_23_23, mdb__browser_info__STATE_VARIABLE_Browser_0_20, mdb__browser_info__STATE_VARIABLE_Browser_21);
    }
#line 403 "browser_info.m"
  }
#line 396 "browser_info.m"
}

#line 385 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_width_from_mdb_10_p_0(
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
#line 392 "browser_info.m"
  {
#line 392 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 392 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;

#line 393 "browser_info.m"
    {
#line 393 "browser_info.m"
      mdb__browser_info__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 393 "browser_info.m"
      MR_hl_field(MR_mktag(2), mdb__browser_info__V_23_23, 0) = ((MR_Box) (mdb__browser_info__Width_18));
#line 393 "browser_info.m"
    }
#line 393 "browser_info.m"
    {
#line 393 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_11, mdb__browser_info__B_12, mdb__browser_info__A_13, mdb__browser_info__F_14, mdb__browser_info__Pr_15, mdb__browser_info__V_16, mdb__browser_info__NPr_17, mdb__browser_info__V_23_23, mdb__browser_info__STATE_VARIABLE_Browser_0_20, mdb__browser_info__STATE_VARIABLE_Browser_21);
    }
#line 392 "browser_info.m"
  }
#line 385 "browser_info.m"
}

#line 374 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_size_from_mdb_10_p_0(
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
#line 381 "browser_info.m"
  {
#line 381 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 381 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;

#line 382 "browser_info.m"
    {
#line 382 "browser_info.m"
      mdb__browser_info__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 382 "browser_info.m"
      MR_hl_field(MR_mktag(1), mdb__browser_info__V_23_23, 0) = ((MR_Box) (mdb__browser_info__Size_18));
#line 382 "browser_info.m"
    }
#line 382 "browser_info.m"
    {
#line 382 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_11, mdb__browser_info__B_12, mdb__browser_info__A_13, mdb__browser_info__F_14, mdb__browser_info__Pr_15, mdb__browser_info__V_17, mdb__browser_info__NPr_16, mdb__browser_info__V_23_23, mdb__browser_info__STATE_VARIABLE_Browser_0_20, mdb__browser_info__STATE_VARIABLE_Browser_21);
    }
#line 381 "browser_info.m"
  }
#line 374 "browser_info.m"
}

#line 363 "browser_info.m"
static void MR_CALL 
mdb__browser_info__set_depth_from_mdb_10_p_0(
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
#line 370 "browser_info.m"
  {
#line 370 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 370 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;

#line 371 "browser_info.m"
    {
#line 371 "browser_info.m"
      mdb__browser_info__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 371 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__V_23_23, 0) = ((MR_Box) (mdb__browser_info__Depth_18));
#line 371 "browser_info.m"
    }
#line 371 "browser_info.m"
    {
#line 371 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, mdb__browser_info__P_11, mdb__browser_info__B_12, mdb__browser_info__A_13, mdb__browser_info__F_14, mdb__browser_info__Pr_15, mdb__browser_info__V_16, mdb__browser_info__NPr_17, mdb__browser_info__V_23_23, mdb__browser_info__STATE_VARIABLE_Browser_0_20, mdb__browser_info__STATE_VARIABLE_Browser_21);
    }
#line 370 "browser_info.m"
  }
#line 363 "browser_info.m"
}

#line 340 "browser_info.m"
void MR_CALL 
mdb__browser_info__functor_browser_term_cc_5_p_0(
#line 340 "browser_info.m"
  MR_Word mdb__browser_info__BrowserDb_6,
#line 340 "browser_info.m"
  MR_Word mdb__browser_info__BrowserTerm_7,
#line 340 "browser_info.m"
  MR_String * mdb__browser_info__Functor_8,
#line 340 "browser_info.m"
  MR_Integer * mdb__browser_info__Arity_9,
#line 340 "browser_info.m"
  MR_Word * mdb__browser_info__IsFunc_10)
#line 340 "browser_info.m"
{
#line 1223 "browser_info.m"
  {
#line 1223 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1223 "browser_info.m"
    if (((MR_tag((MR_Word) mdb__browser_info__BrowserTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 1223 "browser_info.m"
      {
#line 1223 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_17_17;
#line 1223 "browser_info.m"
        MR_Word mdb__browser_info__Univ_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__BrowserTerm_7, (MR_Integer) 0)));
#line 1223 "browser_info.m"
        MR_Box mdb__browser_info__V_15_15;
#line 1223 "browser_info.m"
        MR_Word mdb__browser_info__Univ_24;
#line 1242 "browser_info.m"
        MR_Word mdb__browser_info__InputStream_22;
#line 1242 "browser_info.m"
        MR_Box mdb__browser_info__conv0_InputStream_22;

#line 1242 "browser_info.m"
        {
#line 1242 "browser_info.m"
          mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_input_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv0_InputStream_22);
        }
#line 1242 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1242 "browser_info.m"
          {
#line 1242 "browser_info.m"
            mdb__browser_info__InputStream_22 = ((MR_Word) mdb__browser_info__conv0_InputStream_22);
#line 1242 "browser_info.m"
            mdb__browser_info__succeeded = MR_TRUE;
#line 1242 "browser_info.m"
          }
#line 1242 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1244 "browser_info.m"
          {
#line 1244 "browser_info.m"
            MR_Word mdb__browser_info__InputStreamInfo_23;
#line 1244 "browser_info.m"
            MR_Word mdb__browser_info__V_31_31 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1243 "browser_info.m"
            {
#line 1243 "browser_info.m"
              mdb__browser_info__InputStreamInfo_23 = mercury__io__input_stream_info_2_f_0(mdb__browser_info__V_31_31, mdb__browser_info__InputStream_22);
            }
#line 1245 "browser_info.m"
            {
#line 1245 "browser_info.m"
              mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__InputStreamInfo_23)), &mdb__browser_info__Univ_24);
            }
#line 1244 "browser_info.m"
          }
#line 1242 "browser_info.m"
        else
#line 1246 "browser_info.m"
          {
#line 1246 "browser_info.m"
            MR_Word mdb__browser_info__OutputStream_25;
#line 1246 "browser_info.m"
            MR_Box mdb__browser_info__conv1_OutputStream_25;

#line 1246 "browser_info.m"
            {
#line 1246 "browser_info.m"
              mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_output_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv1_OutputStream_25);
            }
#line 1246 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1246 "browser_info.m"
              {
#line 1246 "browser_info.m"
                mdb__browser_info__OutputStream_25 = ((MR_Word) mdb__browser_info__conv1_OutputStream_25);
#line 1246 "browser_info.m"
                mdb__browser_info__succeeded = MR_TRUE;
#line 1246 "browser_info.m"
              }
#line 1246 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1248 "browser_info.m"
              {
#line 1248 "browser_info.m"
                MR_Word mdb__browser_info__OutputStreamInfo_26;
#line 1248 "browser_info.m"
                MR_Word mdb__browser_info__V_32_32 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1247 "browser_info.m"
                {
#line 1247 "browser_info.m"
                  mdb__browser_info__OutputStreamInfo_26 = mercury__io__output_stream_info_2_f_0(mdb__browser_info__V_32_32, mdb__browser_info__OutputStream_25);
                }
#line 1249 "browser_info.m"
                {
#line 1249 "browser_info.m"
                  mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__OutputStreamInfo_26)), &mdb__browser_info__Univ_24);
                }
#line 1248 "browser_info.m"
              }
#line 1246 "browser_info.m"
            else
#line 1250 "browser_info.m"
              {
#line 1250 "browser_info.m"
                MR_Word mdb__browser_info__BinaryInputStream_27;
#line 1250 "browser_info.m"
                MR_Box mdb__browser_info__conv2_BinaryInputStream_27;

#line 1250 "browser_info.m"
                {
#line 1250 "browser_info.m"
                  mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_input_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv2_BinaryInputStream_27);
                }
#line 1250 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1250 "browser_info.m"
                  {
#line 1250 "browser_info.m"
                    mdb__browser_info__BinaryInputStream_27 = ((MR_Word) mdb__browser_info__conv2_BinaryInputStream_27);
#line 1250 "browser_info.m"
                    mdb__browser_info__succeeded = MR_TRUE;
#line 1250 "browser_info.m"
                  }
#line 1250 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1252 "browser_info.m"
                  {
#line 1252 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryInputStreamInfo_28;
#line 1252 "browser_info.m"
                    MR_Word mdb__browser_info__V_33_33 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1251 "browser_info.m"
                    {
#line 1251 "browser_info.m"
                      mdb__browser_info__BinaryInputStreamInfo_28 = mercury__io__binary_input_stream_info_2_f_0(mdb__browser_info__V_33_33, mdb__browser_info__BinaryInputStream_27);
                    }
#line 1253 "browser_info.m"
                    {
#line 1253 "browser_info.m"
                      mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryInputStreamInfo_28)), &mdb__browser_info__Univ_24);
                    }
#line 1252 "browser_info.m"
                  }
#line 1250 "browser_info.m"
                else
#line 1254 "browser_info.m"
                  {
#line 1254 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryOutputStream_29;
#line 1254 "browser_info.m"
                    MR_Box mdb__browser_info__conv3_BinaryOutputStream_29;

#line 1254 "browser_info.m"
                    {
#line 1254 "browser_info.m"
                      mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_output_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv3_BinaryOutputStream_29);
                    }
#line 1254 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1254 "browser_info.m"
                      {
#line 1254 "browser_info.m"
                        mdb__browser_info__BinaryOutputStream_29 = ((MR_Word) mdb__browser_info__conv3_BinaryOutputStream_29);
#line 1254 "browser_info.m"
                        mdb__browser_info__succeeded = MR_TRUE;
#line 1254 "browser_info.m"
                      }
#line 1254 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1256 "browser_info.m"
                      {
#line 1256 "browser_info.m"
                        MR_Word mdb__browser_info__BinaryOutputStreamInfo_30;
#line 1256 "browser_info.m"
                        MR_Word mdb__browser_info__V_34_34 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1255 "browser_info.m"
                        {
#line 1255 "browser_info.m"
                          mdb__browser_info__BinaryOutputStreamInfo_30 = mercury__io__binary_output_stream_info_2_f_0(mdb__browser_info__V_34_34, mdb__browser_info__BinaryOutputStream_29);
                        }
#line 1257 "browser_info.m"
                        {
#line 1257 "browser_info.m"
                          mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryOutputStreamInfo_30)), &mdb__browser_info__Univ_24);
                        }
#line 1256 "browser_info.m"
                      }
#line 1254 "browser_info.m"
                    else
#line 1259 "browser_info.m"
                      mdb__browser_info__Univ_24 = mdb__browser_info__Univ_11;
#line 1254 "browser_info.m"
                  }
#line 1250 "browser_info.m"
              }
#line 1246 "browser_info.m"
          }
#line 1261 "browser_info.m"
        {
#line 1261 "browser_info.m"
          mdb__browser_info__V_15_15 = mercury__univ__univ_value_1_f_0(&mdb__browser_info__TypeInfo_17_17, mdb__browser_info__Univ_24);
        }
#line 1224 "browser_info.m"
        {
#line 1224 "browser_info.m"
          mercury__deconstruct__functor_4_p_2(mdb__browser_info__TypeInfo_17_17, mdb__browser_info__V_15_15, (MR_Integer) 2, mdb__browser_info__Functor_8, mdb__browser_info__Arity_9);
        }
#line 1226 "browser_info.m"
        *mdb__browser_info__IsFunc_10 = (MR_Integer) 0;
#line 1223 "browser_info.m"
      }
#line 1223 "browser_info.m"
    else
#line 1228 "browser_info.m"
      {
#line 1228 "browser_info.m"
        MR_Word mdb__browser_info__Args_12;
#line 1228 "browser_info.m"
        MR_Word mdb__browser_info__MaybeReturn_13;

#line 1228 "browser_info.m"
        *mdb__browser_info__Functor_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 0)));
#line 1228 "browser_info.m"
        mdb__browser_info__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 1)));
#line 1228 "browser_info.m"
        mdb__browser_info__MaybeReturn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 2)));
#line 1229 "browser_info.m"
        {
#line 1229 "browser_info.m"
          mercury__list__length_2_p_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browser_info__Args_12, mdb__browser_info__Arity_9);
        }
#line 1233 "browser_info.m"
        if ((mdb__browser_info__MaybeReturn_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1235 "browser_info.m"
          *mdb__browser_info__IsFunc_10 = (MR_Integer) 0;
#line 1233 "browser_info.m"
        else
#line 1232 "browser_info.m"
          *mdb__browser_info__IsFunc_10 = (MR_Integer) 1;
#line 1228 "browser_info.m"
      }
#line 1223 "browser_info.m"
  }
#line 340 "browser_info.m"
}

#line 336 "browser_info.m"
void MR_CALL 
mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(
#line 336 "browser_info.m"
  MR_Word mdb__browser_info__BrowserDb_6,
#line 336 "browser_info.m"
  MR_Word mdb__browser_info__BrowserTerm_7,
#line 336 "browser_info.m"
  MR_Integer mdb__browser_info__Limit_8,
#line 336 "browser_info.m"
  MR_Word * mdb__browser_info__MaybeFunctorArityArgs_9,
#line 336 "browser_info.m"
  MR_Word * mdb__browser_info__MaybeReturn_10)
#line 336 "browser_info.m"
{
#line 1211 "browser_info.m"
  {
#line 1211 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1211 "browser_info.m"
    if (((MR_tag((MR_Word) mdb__browser_info__BrowserTerm_7)) == (MR_mktag((MR_Integer) 0))))
#line 1211 "browser_info.m"
      {
#line 1211 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_17_17;
#line 1211 "browser_info.m"
        MR_Word mdb__browser_info__Univ_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__BrowserTerm_7, (MR_Integer) 0)));
#line 1211 "browser_info.m"
        MR_Box mdb__browser_info__V_16_16;
#line 1211 "browser_info.m"
        MR_Word mdb__browser_info__Univ_24;
#line 1242 "browser_info.m"
        MR_Word mdb__browser_info__InputStream_22;
#line 1242 "browser_info.m"
        MR_Box mdb__browser_info__conv0_InputStream_22;

#line 1242 "browser_info.m"
        {
#line 1242 "browser_info.m"
          mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_input_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv0_InputStream_22);
        }
#line 1242 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1242 "browser_info.m"
          {
#line 1242 "browser_info.m"
            mdb__browser_info__InputStream_22 = ((MR_Word) mdb__browser_info__conv0_InputStream_22);
#line 1242 "browser_info.m"
            mdb__browser_info__succeeded = MR_TRUE;
#line 1242 "browser_info.m"
          }
#line 1242 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1244 "browser_info.m"
          {
#line 1244 "browser_info.m"
            MR_Word mdb__browser_info__InputStreamInfo_23;
#line 1244 "browser_info.m"
            MR_Word mdb__browser_info__V_31_31 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1243 "browser_info.m"
            {
#line 1243 "browser_info.m"
              mdb__browser_info__InputStreamInfo_23 = mercury__io__input_stream_info_2_f_0(mdb__browser_info__V_31_31, mdb__browser_info__InputStream_22);
            }
#line 1245 "browser_info.m"
            {
#line 1245 "browser_info.m"
              mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__InputStreamInfo_23)), &mdb__browser_info__Univ_24);
            }
#line 1244 "browser_info.m"
          }
#line 1242 "browser_info.m"
        else
#line 1246 "browser_info.m"
          {
#line 1246 "browser_info.m"
            MR_Word mdb__browser_info__OutputStream_25;
#line 1246 "browser_info.m"
            MR_Box mdb__browser_info__conv1_OutputStream_25;

#line 1246 "browser_info.m"
            {
#line 1246 "browser_info.m"
              mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_output_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv1_OutputStream_25);
            }
#line 1246 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1246 "browser_info.m"
              {
#line 1246 "browser_info.m"
                mdb__browser_info__OutputStream_25 = ((MR_Word) mdb__browser_info__conv1_OutputStream_25);
#line 1246 "browser_info.m"
                mdb__browser_info__succeeded = MR_TRUE;
#line 1246 "browser_info.m"
              }
#line 1246 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1248 "browser_info.m"
              {
#line 1248 "browser_info.m"
                MR_Word mdb__browser_info__OutputStreamInfo_26;
#line 1248 "browser_info.m"
                MR_Word mdb__browser_info__V_32_32 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1247 "browser_info.m"
                {
#line 1247 "browser_info.m"
                  mdb__browser_info__OutputStreamInfo_26 = mercury__io__output_stream_info_2_f_0(mdb__browser_info__V_32_32, mdb__browser_info__OutputStream_25);
                }
#line 1249 "browser_info.m"
                {
#line 1249 "browser_info.m"
                  mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__OutputStreamInfo_26)), &mdb__browser_info__Univ_24);
                }
#line 1248 "browser_info.m"
              }
#line 1246 "browser_info.m"
            else
#line 1250 "browser_info.m"
              {
#line 1250 "browser_info.m"
                MR_Word mdb__browser_info__BinaryInputStream_27;
#line 1250 "browser_info.m"
                MR_Box mdb__browser_info__conv2_BinaryInputStream_27;

#line 1250 "browser_info.m"
                {
#line 1250 "browser_info.m"
                  mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_input_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv2_BinaryInputStream_27);
                }
#line 1250 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1250 "browser_info.m"
                  {
#line 1250 "browser_info.m"
                    mdb__browser_info__BinaryInputStream_27 = ((MR_Word) mdb__browser_info__conv2_BinaryInputStream_27);
#line 1250 "browser_info.m"
                    mdb__browser_info__succeeded = MR_TRUE;
#line 1250 "browser_info.m"
                  }
#line 1250 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1252 "browser_info.m"
                  {
#line 1252 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryInputStreamInfo_28;
#line 1252 "browser_info.m"
                    MR_Word mdb__browser_info__V_33_33 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1251 "browser_info.m"
                    {
#line 1251 "browser_info.m"
                      mdb__browser_info__BinaryInputStreamInfo_28 = mercury__io__binary_input_stream_info_2_f_0(mdb__browser_info__V_33_33, mdb__browser_info__BinaryInputStream_27);
                    }
#line 1253 "browser_info.m"
                    {
#line 1253 "browser_info.m"
                      mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryInputStreamInfo_28)), &mdb__browser_info__Univ_24);
                    }
#line 1252 "browser_info.m"
                  }
#line 1250 "browser_info.m"
                else
#line 1254 "browser_info.m"
                  {
#line 1254 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryOutputStream_29;
#line 1254 "browser_info.m"
                    MR_Box mdb__browser_info__conv3_BinaryOutputStream_29;

#line 1254 "browser_info.m"
                    {
#line 1254 "browser_info.m"
                      mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_output_stream_0, mdb__browser_info__Univ_11, &mdb__browser_info__conv3_BinaryOutputStream_29);
                    }
#line 1254 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1254 "browser_info.m"
                      {
#line 1254 "browser_info.m"
                        mdb__browser_info__BinaryOutputStream_29 = ((MR_Word) mdb__browser_info__conv3_BinaryOutputStream_29);
#line 1254 "browser_info.m"
                        mdb__browser_info__succeeded = MR_TRUE;
#line 1254 "browser_info.m"
                      }
#line 1254 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1256 "browser_info.m"
                      {
#line 1256 "browser_info.m"
                        MR_Word mdb__browser_info__BinaryOutputStreamInfo_30;
#line 1256 "browser_info.m"
                        MR_Word mdb__browser_info__V_34_34 = (MR_Word) mdb__browser_info__BrowserDb_6;

#line 1255 "browser_info.m"
                        {
#line 1255 "browser_info.m"
                          mdb__browser_info__BinaryOutputStreamInfo_30 = mercury__io__binary_output_stream_info_2_f_0(mdb__browser_info__V_34_34, mdb__browser_info__BinaryOutputStream_29);
                        }
#line 1257 "browser_info.m"
                        {
#line 1257 "browser_info.m"
                          mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryOutputStreamInfo_30)), &mdb__browser_info__Univ_24);
                        }
#line 1256 "browser_info.m"
                      }
#line 1254 "browser_info.m"
                    else
#line 1259 "browser_info.m"
                      mdb__browser_info__Univ_24 = mdb__browser_info__Univ_11;
#line 1254 "browser_info.m"
                  }
#line 1250 "browser_info.m"
              }
#line 1246 "browser_info.m"
          }
#line 1261 "browser_info.m"
        {
#line 1261 "browser_info.m"
          mdb__browser_info__V_16_16 = mercury__univ__univ_value_1_f_0(&mdb__browser_info__TypeInfo_17_17, mdb__browser_info__Univ_24);
        }
#line 1212 "browser_info.m"
        {
#line 1212 "browser_info.m"
          mercury__deconstruct__limited_deconstruct_cc_3_p_0(mdb__browser_info__TypeInfo_17_17, mdb__browser_info__V_16_16, mdb__browser_info__Limit_8, mdb__browser_info__MaybeFunctorArityArgs_9);
        }
#line 1214 "browser_info.m"
        *mdb__browser_info__MaybeReturn_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1211 "browser_info.m"
      }
#line 1211 "browser_info.m"
    else
#line 1216 "browser_info.m"
      {
#line 1216 "browser_info.m"
        MR_String mdb__browser_info__Functor_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 0)));
#line 1216 "browser_info.m"
        MR_Word mdb__browser_info__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 1)));
#line 1216 "browser_info.m"
        MR_Integer mdb__browser_info__Arity_14;
#line 1216 "browser_info.m"
        MR_Tuple mdb__browser_info__V_15_15;

#line 1216 "browser_info.m"
        *mdb__browser_info__MaybeReturn_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_7, (MR_Integer) 2)));
#line 1217 "browser_info.m"
        {
#line 1217 "browser_info.m"
          mercury__list__length_2_p_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, mdb__browser_info__Args_13, &mdb__browser_info__Arity_14);
        }
#line 1218 "browser_info.m"
        {
#line 1218 "browser_info.m"
          mdb__browser_info__V_15_15 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1218 "browser_info.m"
          MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, 0) = ((MR_Box) (mdb__browser_info__Functor_12));
#line 1218 "browser_info.m"
          MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, 1) = ((MR_Box) (mdb__browser_info__Arity_14));
#line 1218 "browser_info.m"
          MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, 2) = ((MR_Box) (mdb__browser_info__Args_13));
#line 1218 "browser_info.m"
        }
#line 1218 "browser_info.m"
        {
#line 1218 "browser_info.m"
          MR_Word base;
#line 1218 "browser_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1218 "browser_info.m"
          *mdb__browser_info__MaybeFunctorArityArgs_9 = base;
#line 1218 "browser_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browser_info__V_15_15));
#line 1218 "browser_info.m"
        }
#line 1216 "browser_info.m"
      }
#line 1211 "browser_info.m"
  }
#line 336 "browser_info.m"
}

#line 333 "browser_info.m"
void MR_CALL 
mdb__browser_info__deconstruct_browser_term_cc_6_p_0(
#line 333 "browser_info.m"
  MR_Word mdb__browser_info__BrowserDb_7,
#line 333 "browser_info.m"
  MR_Word mdb__browser_info__BrowserTerm_8,
#line 333 "browser_info.m"
  MR_String * mdb__browser_info__Functor_9,
#line 333 "browser_info.m"
  MR_Integer * mdb__browser_info__Arity_10,
#line 333 "browser_info.m"
  MR_Word * mdb__browser_info__Args_11,
#line 333 "browser_info.m"
  MR_Word * mdb__browser_info__MaybeReturn_12)
#line 333 "browser_info.m"
{
#line 1199 "browser_info.m"
  {
#line 1199 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1199 "browser_info.m"
    if (((MR_tag((MR_Word) mdb__browser_info__BrowserTerm_8)) == (MR_mktag((MR_Integer) 0))))
#line 1199 "browser_info.m"
      {
#line 1199 "browser_info.m"
        MR_Word mdb__browser_info__TypeInfo_16_16;
#line 1199 "browser_info.m"
        MR_Word mdb__browser_info__Univ_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__BrowserTerm_8, (MR_Integer) 0)));
#line 1199 "browser_info.m"
        MR_Box mdb__browser_info__V_14_14;
#line 1199 "browser_info.m"
        MR_Word mdb__browser_info__Univ_23;
#line 1242 "browser_info.m"
        MR_Word mdb__browser_info__InputStream_21;
#line 1242 "browser_info.m"
        MR_Box mdb__browser_info__conv0_InputStream_21;

#line 1242 "browser_info.m"
        {
#line 1242 "browser_info.m"
          mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_input_stream_0, mdb__browser_info__Univ_13, &mdb__browser_info__conv0_InputStream_21);
        }
#line 1242 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1242 "browser_info.m"
          {
#line 1242 "browser_info.m"
            mdb__browser_info__InputStream_21 = ((MR_Word) mdb__browser_info__conv0_InputStream_21);
#line 1242 "browser_info.m"
            mdb__browser_info__succeeded = MR_TRUE;
#line 1242 "browser_info.m"
          }
#line 1242 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 1244 "browser_info.m"
          {
#line 1244 "browser_info.m"
            MR_Word mdb__browser_info__InputStreamInfo_22;
#line 1244 "browser_info.m"
            MR_Word mdb__browser_info__V_30_30 = (MR_Word) mdb__browser_info__BrowserDb_7;

#line 1243 "browser_info.m"
            {
#line 1243 "browser_info.m"
              mdb__browser_info__InputStreamInfo_22 = mercury__io__input_stream_info_2_f_0(mdb__browser_info__V_30_30, mdb__browser_info__InputStream_21);
            }
#line 1245 "browser_info.m"
            {
#line 1245 "browser_info.m"
              mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__InputStreamInfo_22)), &mdb__browser_info__Univ_23);
            }
#line 1244 "browser_info.m"
          }
#line 1242 "browser_info.m"
        else
#line 1246 "browser_info.m"
          {
#line 1246 "browser_info.m"
            MR_Word mdb__browser_info__OutputStream_24;
#line 1246 "browser_info.m"
            MR_Box mdb__browser_info__conv1_OutputStream_24;

#line 1246 "browser_info.m"
            {
#line 1246 "browser_info.m"
              mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_output_stream_0, mdb__browser_info__Univ_13, &mdb__browser_info__conv1_OutputStream_24);
            }
#line 1246 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1246 "browser_info.m"
              {
#line 1246 "browser_info.m"
                mdb__browser_info__OutputStream_24 = ((MR_Word) mdb__browser_info__conv1_OutputStream_24);
#line 1246 "browser_info.m"
                mdb__browser_info__succeeded = MR_TRUE;
#line 1246 "browser_info.m"
              }
#line 1246 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1248 "browser_info.m"
              {
#line 1248 "browser_info.m"
                MR_Word mdb__browser_info__OutputStreamInfo_25;
#line 1248 "browser_info.m"
                MR_Word mdb__browser_info__V_31_31 = (MR_Word) mdb__browser_info__BrowserDb_7;

#line 1247 "browser_info.m"
                {
#line 1247 "browser_info.m"
                  mdb__browser_info__OutputStreamInfo_25 = mercury__io__output_stream_info_2_f_0(mdb__browser_info__V_31_31, mdb__browser_info__OutputStream_24);
                }
#line 1249 "browser_info.m"
                {
#line 1249 "browser_info.m"
                  mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__OutputStreamInfo_25)), &mdb__browser_info__Univ_23);
                }
#line 1248 "browser_info.m"
              }
#line 1246 "browser_info.m"
            else
#line 1250 "browser_info.m"
              {
#line 1250 "browser_info.m"
                MR_Word mdb__browser_info__BinaryInputStream_26;
#line 1250 "browser_info.m"
                MR_Box mdb__browser_info__conv2_BinaryInputStream_26;

#line 1250 "browser_info.m"
                {
#line 1250 "browser_info.m"
                  mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_input_stream_0, mdb__browser_info__Univ_13, &mdb__browser_info__conv2_BinaryInputStream_26);
                }
#line 1250 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1250 "browser_info.m"
                  {
#line 1250 "browser_info.m"
                    mdb__browser_info__BinaryInputStream_26 = ((MR_Word) mdb__browser_info__conv2_BinaryInputStream_26);
#line 1250 "browser_info.m"
                    mdb__browser_info__succeeded = MR_TRUE;
#line 1250 "browser_info.m"
                  }
#line 1250 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 1252 "browser_info.m"
                  {
#line 1252 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryInputStreamInfo_27;
#line 1252 "browser_info.m"
                    MR_Word mdb__browser_info__V_32_32 = (MR_Word) mdb__browser_info__BrowserDb_7;

#line 1251 "browser_info.m"
                    {
#line 1251 "browser_info.m"
                      mdb__browser_info__BinaryInputStreamInfo_27 = mercury__io__binary_input_stream_info_2_f_0(mdb__browser_info__V_32_32, mdb__browser_info__BinaryInputStream_26);
                    }
#line 1253 "browser_info.m"
                    {
#line 1253 "browser_info.m"
                      mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryInputStreamInfo_27)), &mdb__browser_info__Univ_23);
                    }
#line 1252 "browser_info.m"
                  }
#line 1250 "browser_info.m"
                else
#line 1254 "browser_info.m"
                  {
#line 1254 "browser_info.m"
                    MR_Word mdb__browser_info__BinaryOutputStream_28;
#line 1254 "browser_info.m"
                    MR_Box mdb__browser_info__conv3_BinaryOutputStream_28;

#line 1254 "browser_info.m"
                    {
#line 1254 "browser_info.m"
                      mdb__browser_info__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_binary_output_stream_0, mdb__browser_info__Univ_13, &mdb__browser_info__conv3_BinaryOutputStream_28);
                    }
#line 1254 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1254 "browser_info.m"
                      {
#line 1254 "browser_info.m"
                        mdb__browser_info__BinaryOutputStream_28 = ((MR_Word) mdb__browser_info__conv3_BinaryOutputStream_28);
#line 1254 "browser_info.m"
                        mdb__browser_info__succeeded = MR_TRUE;
#line 1254 "browser_info.m"
                      }
#line 1254 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 1256 "browser_info.m"
                      {
#line 1256 "browser_info.m"
                        MR_Word mdb__browser_info__BinaryOutputStreamInfo_29;
#line 1256 "browser_info.m"
                        MR_Word mdb__browser_info__V_33_33 = (MR_Word) mdb__browser_info__BrowserDb_7;

#line 1255 "browser_info.m"
                        {
#line 1255 "browser_info.m"
                          mdb__browser_info__BinaryOutputStreamInfo_29 = mercury__io__binary_output_stream_info_2_f_0(mdb__browser_info__V_33_33, mdb__browser_info__BinaryOutputStream_28);
                        }
#line 1257 "browser_info.m"
                        {
#line 1257 "browser_info.m"
                          mercury__univ__type_to_univ_2_p_1((MR_Word) &mercury__io__io__type_ctor_info_maybe_stream_info_0, ((MR_Box) (mdb__browser_info__BinaryOutputStreamInfo_29)), &mdb__browser_info__Univ_23);
                        }
#line 1256 "browser_info.m"
                      }
#line 1254 "browser_info.m"
                    else
#line 1259 "browser_info.m"
                      mdb__browser_info__Univ_23 = mdb__browser_info__Univ_13;
#line 1254 "browser_info.m"
                  }
#line 1250 "browser_info.m"
              }
#line 1246 "browser_info.m"
          }
#line 1261 "browser_info.m"
        {
#line 1261 "browser_info.m"
          mdb__browser_info__V_14_14 = mercury__univ__univ_value_1_f_0(&mdb__browser_info__TypeInfo_16_16, mdb__browser_info__Univ_23);
        }
#line 1200 "browser_info.m"
        {
#line 1200 "browser_info.m"
          mercury__deconstruct__deconstruct_5_p_2(mdb__browser_info__TypeInfo_16_16, mdb__browser_info__V_14_14, (MR_Integer) 2, mdb__browser_info__Functor_9, mdb__browser_info__Arity_10, mdb__browser_info__Args_11);
        }
#line 1202 "browser_info.m"
        *mdb__browser_info__MaybeReturn_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1199 "browser_info.m"
      }
#line 1199 "browser_info.m"
    else
#line 1204 "browser_info.m"
      {
#line 1204 "browser_info.m"
        *mdb__browser_info__Functor_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_8, (MR_Integer) 0)));
#line 1204 "browser_info.m"
        *mdb__browser_info__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_8, (MR_Integer) 1)));
#line 1204 "browser_info.m"
        *mdb__browser_info__MaybeReturn_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__BrowserTerm_8, (MR_Integer) 2)));
#line 1205 "browser_info.m"
        {
#line 1205 "browser_info.m"
          mercury__list__length_2_p_0((MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, *mdb__browser_info__Args_11, mdb__browser_info__Arity_10);
        }
#line 1204 "browser_info.m"
      }
#line 1199 "browser_info.m"
  }
#line 333 "browser_info.m"
}

#line 312 "browser_info.m"
void MR_CALL 
mdb__browser_info__browser_params_to_string_3_p_0(
#line 312 "browser_info.m"
  MR_Word mdb__browser_info__Browser_4,
#line 312 "browser_info.m"
  MR_Word mdb__browser_info__MDBCommandFormat_5,
#line 312 "browser_info.m"
  MR_String * mdb__browser_info__Desc_6)
#line 312 "browser_info.m"
{
#line 1069 "browser_info.m"
  {
#line 1069 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 1069 "browser_info.m"
    MR_Word mdb__browser_info__PrintParams_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 0)));
#line 1069 "browser_info.m"
    MR_Word mdb__browser_info__BrowseParams_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 1)));
#line 1069 "browser_info.m"
    MR_Word mdb__browser_info__PrintAllParams_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 2)));
#line 1069 "browser_info.m"
    MR_Integer mdb__browser_info__NumIOActions_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 3)));
#line 1069 "browser_info.m"
    MR_Word mdb__browser_info__MaybeXMLBrowserCmd_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 4)));
#line 1069 "browser_info.m"
    MR_Word mdb__browser_info__MaybeXMLTmpFileName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_4, (MR_Integer) 5)));

#line 1104 "browser_info.m"
#line 1104 "browser_info.m"
    switch (mdb__browser_info__MDBCommandFormat_5) {
#line 1104 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1104 "browser_info.m"
      case (MR_Integer) 0:
#line 1105 "browser_info.m"
        {
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__ParamDesc_19;
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__NumIOActionDesc_20;
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__XMLBrowserCmdDesc_21;
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__XMLTmpFileNameDesc_22;
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__V_24_24;
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__V_25_25;
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__V_26_26;
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__V_28_28;
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__V_29_29;
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__V_30_30;
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__V_32_32;
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__V_34_34;
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__V_35_35;
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__V_43_43;
#line 1105 "browser_info.m"
          MR_String mdb__browser_info__V_44_44;

#line 1108 "browser_info.m"
          {
#line 1108 "browser_info.m"
            mdb__browser_info__V_25_25 = mdb__browser_info__caller_params_to_desc_1_f_0(mdb__browser_info__PrintParams_7);
          }
#line 1110 "browser_info.m"
          {
#line 1110 "browser_info.m"
            mdb__browser_info__V_29_29 = mdb__browser_info__caller_params_to_desc_1_f_0(mdb__browser_info__BrowseParams_8);
          }
#line 1112 "browser_info.m"
          {
#line 1112 "browser_info.m"
            mdb__browser_info__V_32_32 = mdb__browser_info__caller_params_to_desc_1_f_0(mdb__browser_info__PrintAllParams_9);
          }
#line 1111 "browser_info.m"
          {
#line 1111 "browser_info.m"
            mdb__browser_info__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "Print all parameters:\n", mdb__browser_info__V_32_32);
          }
#line 1110 "browser_info.m"
          {
#line 1110 "browser_info.m"
            mdb__browser_info__V_28_28 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_29_29, mdb__browser_info__V_30_30);
          }
#line 1109 "browser_info.m"
          {
#line 1109 "browser_info.m"
            mdb__browser_info__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "Browse parameters:\n", mdb__browser_info__V_28_28);
          }
#line 1108 "browser_info.m"
          {
#line 1108 "browser_info.m"
            mdb__browser_info__V_24_24 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_25_25, mdb__browser_info__V_26_26);
          }
#line 1107 "browser_info.m"
          {
#line 1107 "browser_info.m"
            mdb__browser_info__ParamDesc_19 = mercury__string__f_43_43_2_f_0((MR_String) "Print parameters:\n", mdb__browser_info__V_24_24);
          }
#line 1115 "browser_info.m"
          {
#line 1115 "browser_info.m"
            mdb__browser_info__V_35_35 = mercury__string__int_to_string_1_f_0(mdb__browser_info__NumIOActions_10);
          }
#line 1115 "browser_info.m"
          {
#line 1115 "browser_info.m"
            mdb__browser_info__V_34_34 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_35_35, (MR_String) "\n");
          }
#line 1114 "browser_info.m"
          {
#line 1114 "browser_info.m"
            mdb__browser_info__NumIOActionDesc_20 = mercury__string__f_43_43_2_f_0((MR_String) "Maximum number of I/O actions printed: ", mdb__browser_info__V_34_34);
          }
#line 1120 "browser_info.m"
          if ((mdb__browser_info__MaybeXMLBrowserCmd_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1122 "browser_info.m"
            mdb__browser_info__XMLBrowserCmdDesc_21 = (MR_String) "";
#line 1120 "browser_info.m"
          else
#line 1117 "browser_info.m"
            {
#line 1117 "browser_info.m"
              MR_String mdb__browser_info__V_38_38;
#line 1117 "browser_info.m"
              MR_String mdb__browser_info__XMLBrowserCmd_64 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeXMLBrowserCmd_11, (MR_Integer) 0)));

#line 1119 "browser_info.m"
              {
#line 1119 "browser_info.m"
                mdb__browser_info__V_38_38 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLBrowserCmd_64, (MR_String) "\n");
              }
#line 1119 "browser_info.m"
              {
#line 1119 "browser_info.m"
                mdb__browser_info__XMLBrowserCmdDesc_21 = mercury__string__f_43_43_2_f_0((MR_String) "XML browser command:    ", mdb__browser_info__V_38_38);
              }
#line 1117 "browser_info.m"
            }
#line 1128 "browser_info.m"
          if ((mdb__browser_info__MaybeXMLTmpFileName_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1130 "browser_info.m"
            mdb__browser_info__XMLTmpFileNameDesc_22 = (MR_String) "";
#line 1128 "browser_info.m"
          else
#line 1125 "browser_info.m"
            {
#line 1125 "browser_info.m"
              MR_String mdb__browser_info__V_41_41;
#line 1125 "browser_info.m"
              MR_String mdb__browser_info__XMLTmpFileName_66 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeXMLTmpFileName_12, (MR_Integer) 0)));

#line 1127 "browser_info.m"
              {
#line 1127 "browser_info.m"
                mdb__browser_info__V_41_41 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLTmpFileName_66, (MR_String) "\n");
              }
#line 1127 "browser_info.m"
              {
#line 1127 "browser_info.m"
                mdb__browser_info__XMLTmpFileNameDesc_22 = mercury__string__f_43_43_2_f_0((MR_String) "XML temporary filename: ", mdb__browser_info__V_41_41);
              }
#line 1125 "browser_info.m"
            }
#line 1133 "browser_info.m"
          {
#line 1133 "browser_info.m"
            mdb__browser_info__V_44_44 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLBrowserCmdDesc_21, mdb__browser_info__XMLTmpFileNameDesc_22);
          }
#line 1132 "browser_info.m"
          {
#line 1132 "browser_info.m"
            mdb__browser_info__V_43_43 = mercury__string__f_43_43_2_f_0(mdb__browser_info__NumIOActionDesc_20, mdb__browser_info__V_44_44);
          }
#line 1132 "browser_info.m"
          {
#line 1132 "browser_info.m"
            *mdb__browser_info__Desc_6 = mercury__string__f_43_43_2_f_0(mdb__browser_info__ParamDesc_19, mdb__browser_info__V_43_43);
          }
#line 1105 "browser_info.m"
        }
#line 1104 "browser_info.m"
        break;
#line 1104 "browser_info.m"
      case (MR_Integer) 1:
#line 1073 "browser_info.m"
        {
#line 1073 "browser_info.m"
          MR_String mdb__browser_info__ParamCmds_13;
#line 1073 "browser_info.m"
          MR_String mdb__browser_info__NumIOActionCmd_14;
#line 1073 "browser_info.m"
          MR_String mdb__browser_info__XMLBrowserCmdCmd_16;
#line 1073 "browser_info.m"
          MR_String mdb__browser_info__XMLTmpFileNameCmd_18;
#line 1073 "browser_info.m"
          MR_String mdb__browser_info__V_45_45;
#line 1073 "browser_info.m"
          MR_String mdb__browser_info__V_47_47;
#line 1073 "browser_info.m"
          MR_String mdb__browser_info__V_48_48;
#line 1073 "browser_info.m"
          MR_String mdb__browser_info__V_50_50;
#line 1073 "browser_info.m"
          MR_String mdb__browser_info__V_53_53;
#line 1073 "browser_info.m"
          MR_String mdb__browser_info__V_54_54;
#line 1073 "browser_info.m"
          MR_String mdb__browser_info__V_62_62;
#line 1073 "browser_info.m"
          MR_String mdb__browser_info__V_63_63;
#line 1080 "browser_info.m"
          MR_String mdb__browser_info__XMLBrowserCmd_15;
#line 1091 "browser_info.m"
          MR_String mdb__browser_info__XMLTmpFileName_17;

#line 1075 "browser_info.m"
          {
#line 1075 "browser_info.m"
            mdb__browser_info__V_45_45 = mdb__browser_info__caller_params_to_mdb_command_2_f_0((MR_String) "-P ", mdb__browser_info__PrintParams_7);
          }
#line 1076 "browser_info.m"
          {
#line 1076 "browser_info.m"
            mdb__browser_info__V_48_48 = mdb__browser_info__caller_params_to_mdb_command_2_f_0((MR_String) "-B ", mdb__browser_info__BrowseParams_8);
          }
#line 1077 "browser_info.m"
          {
#line 1077 "browser_info.m"
            mdb__browser_info__V_50_50 = mdb__browser_info__caller_params_to_mdb_command_2_f_0((MR_String) "-A ", mdb__browser_info__PrintAllParams_9);
          }
#line 1076 "browser_info.m"
          {
#line 1076 "browser_info.m"
            mdb__browser_info__V_47_47 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_48_48, mdb__browser_info__V_50_50);
          }
#line 1075 "browser_info.m"
          {
#line 1075 "browser_info.m"
            mdb__browser_info__ParamCmds_13 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_45_45, mdb__browser_info__V_47_47);
          }
#line 1079 "browser_info.m"
          {
#line 1079 "browser_info.m"
            mdb__browser_info__V_54_54 = mercury__string__int_to_string_1_f_0(mdb__browser_info__NumIOActions_10);
          }
#line 1079 "browser_info.m"
          {
#line 1079 "browser_info.m"
            mdb__browser_info__V_53_53 = mercury__string__f_43_43_2_f_0(mdb__browser_info__V_54_54, (MR_String) "\n");
          }
#line 1079 "browser_info.m"
          {
#line 1079 "browser_info.m"
            mdb__browser_info__NumIOActionCmd_14 = mercury__string__f_43_43_2_f_0((MR_String) "max_io_actions ", mdb__browser_info__V_53_53);
          }
#line 1081 "browser_info.m"
          mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__MaybeXMLBrowserCmd_11)) == (MR_mktag((MR_Integer) 1)));
#line 1081 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 1081 "browser_info.m"
            {
#line 1081 "browser_info.m"
              mdb__browser_info__XMLBrowserCmd_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeXMLBrowserCmd_11, (MR_Integer) 0)));
#line 1084 "browser_info.m"
              mdb__browser_info__succeeded = (strcmp(mdb__browser_info__XMLBrowserCmd_15, (MR_String) "") == 0);
#line 1084 "browser_info.m"
              mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 1081 "browser_info.m"
            }
#line 1080 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 1086 "browser_info.m"
            {
#line 1086 "browser_info.m"
              MR_String mdb__browser_info__V_57_57;

#line 1087 "browser_info.m"
              {
#line 1087 "browser_info.m"
                mdb__browser_info__V_57_57 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLBrowserCmd_15, (MR_String) "\n");
              }
#line 1087 "browser_info.m"
              {
#line 1087 "browser_info.m"
                mdb__browser_info__XMLBrowserCmdCmd_16 = mercury__string__f_43_43_2_f_0((MR_String) "xml_browser_cmd ", mdb__browser_info__V_57_57);
              }
#line 1086 "browser_info.m"
            }
#line 1080 "browser_info.m"
          else
#line 1089 "browser_info.m"
            mdb__browser_info__XMLBrowserCmdCmd_16 = (MR_String) "";
#line 1092 "browser_info.m"
          mdb__browser_info__succeeded = ((MR_tag((MR_Word) mdb__browser_info__MaybeXMLTmpFileName_12)) == (MR_mktag((MR_Integer) 1)));
#line 1092 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 1092 "browser_info.m"
            {
#line 1092 "browser_info.m"
              mdb__browser_info__XMLTmpFileName_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeXMLTmpFileName_12, (MR_Integer) 0)));
#line 1095 "browser_info.m"
              mdb__browser_info__succeeded = (strcmp(mdb__browser_info__XMLTmpFileName_17, (MR_String) "") == 0);
#line 1095 "browser_info.m"
              mdb__browser_info__succeeded = !(mdb__browser_info__succeeded);
#line 1092 "browser_info.m"
            }
#line 1091 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 1097 "browser_info.m"
            {
#line 1097 "browser_info.m"
              MR_String mdb__browser_info__V_60_60;

#line 1098 "browser_info.m"
              {
#line 1098 "browser_info.m"
                mdb__browser_info__V_60_60 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLTmpFileName_17, (MR_String) "\n");
              }
#line 1098 "browser_info.m"
              {
#line 1098 "browser_info.m"
                mdb__browser_info__XMLTmpFileNameCmd_18 = mercury__string__f_43_43_2_f_0((MR_String) "xml_tmp_filename ", mdb__browser_info__V_60_60);
              }
#line 1097 "browser_info.m"
            }
#line 1091 "browser_info.m"
          else
#line 1100 "browser_info.m"
            mdb__browser_info__XMLTmpFileNameCmd_18 = (MR_String) "";
#line 1103 "browser_info.m"
          {
#line 1103 "browser_info.m"
            mdb__browser_info__V_63_63 = mercury__string__f_43_43_2_f_0(mdb__browser_info__XMLBrowserCmdCmd_16, mdb__browser_info__XMLTmpFileNameCmd_18);
          }
#line 1102 "browser_info.m"
          {
#line 1102 "browser_info.m"
            mdb__browser_info__V_62_62 = mercury__string__f_43_43_2_f_0(mdb__browser_info__NumIOActionCmd_14, mdb__browser_info__V_63_63);
          }
#line 1102 "browser_info.m"
          {
#line 1102 "browser_info.m"
            *mdb__browser_info__Desc_6 = mercury__string__f_43_43_2_f_0(mdb__browser_info__ParamCmds_13, mdb__browser_info__V_62_62);
          }
#line 1073 "browser_info.m"
        }
#line 1104 "browser_info.m"
        break;
#line 1104 "browser_info.m"
    }
#line 1069 "browser_info.m"
  }
#line 312 "browser_info.m"
}

#line 310 "browser_info.m"
void MR_CALL 
mdb__browser_info__send_term_to_socket_3_p_0(
#line 310 "browser_info.m"
  MR_Word mdb__browser_info__Term_4)
#line 310 "browser_info.m"
{
#line 1031 "browser_info.m"
  {
#line 1031 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1032 "browser_info.m"
    {
#line 1032 "browser_info.m"
      mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (mdb__browser_info__Term_4)));
    }
#line 1033 "browser_info.m"
    {
#line 1033 "browser_info.m"
      mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
    }
#line 1034 "browser_info.m"
    {
#line 1034 "browser_info.m"
      mercury__io__flush_output_2_p_0();
    }
#line 1031 "browser_info.m"
  }
#line 310 "browser_info.m"
}

#line 307 "browser_info.m"
void MR_CALL 
mdb__browser_info__write_down_path_4_p_0(
#line 307 "browser_info.m"
  MR_Word mdb__browser_info__Debugger_5,
#line 307 "browser_info.m"
  MR_Word mdb__browser_info__Dirs_6)
#line 307 "browser_info.m"
{
#line 993 "browser_info.m"
  {
#line 993 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 993 "browser_info.m"
    if ((mdb__browser_info__Dirs_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "browser_info.m"
      {
#line 997 "browser_info.m"
        {
#line 997 "browser_info.m"
          mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_5, (MR_String) "/");
        }
#line 993 "browser_info.m"
      }
#line 993 "browser_info.m"
    else
#line 999 "browser_info.m"
      {
#line 999 "browser_info.m"
        MR_Word mdb__browser_info__HeadDir_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__Dirs_6, (MR_Integer) 0)));
#line 999 "browser_info.m"
        MR_Word mdb__browser_info__TailDirs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__Dirs_6, (MR_Integer) 1)));

#line 1020 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__HeadDir_8)) == (MR_mktag((MR_Integer) 1))))
#line 1024 "browser_info.m"
          {
#line 1024 "browser_info.m"
            MR_String mdb__browser_info__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadDir_8, (MR_Integer) 0)));

#line 1025 "browser_info.m"
            {
#line 1025 "browser_info.m"
              mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_5, (MR_String) "/");
            }
#line 1026 "browser_info.m"
            {
#line 1026 "browser_info.m"
              mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_5, mdb__browser_info__Name_22);
            }
#line 1024 "browser_info.m"
          }
#line 1020 "browser_info.m"
        else
#line 1020 "browser_info.m"
          {
#line 1020 "browser_info.m"
            MR_Integer mdb__browser_info__N_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadDir_8, (MR_Integer) 0)));

#line 1021 "browser_info.m"
            {
#line 1021 "browser_info.m"
              mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_5, (MR_String) "/");
            }
#line 1022 "browser_info.m"
            {
#line 1022 "browser_info.m"
              mdb__browser_info__write_int_debugger_4_p_0(mdb__browser_info__Debugger_5, mdb__browser_info__N_21);
            }
#line 1020 "browser_info.m"
          }
#line 1001 "browser_info.m"
        {
#line 1001 "browser_info.m"
          mdb__browser_info__write_down_path_loop_4_p_0(mdb__browser_info__Debugger_5, mdb__browser_info__TailDirs_9);
        }
#line 999 "browser_info.m"
      }
#line 993 "browser_info.m"
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
#line 972 "browser_info.m"
  {
#line 972 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 972 "browser_info.m"
#line 972 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 972 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 972 "browser_info.m"
      case (MR_Integer) 1:
#line 978 "browser_info.m"
#line 978 "browser_info.m"
        switch (mdb__browser_info__X_2) {
#line 978 "browser_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 978 "browser_info.m"
          case (MR_Integer) 0:
#line 976 "browser_info.m"
            {
#line 1032 "browser_info.m"
              {
#line 1032 "browser_info.m"
                mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[0]))));
              }
#line 1033 "browser_info.m"
              {
#line 1033 "browser_info.m"
                mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
              }
#line 1034 "browser_info.m"
              {
#line 1034 "browser_info.m"
                mercury__io__flush_output_2_p_0();
              }
#line 976 "browser_info.m"
            }
#line 978 "browser_info.m"
            break;
#line 978 "browser_info.m"
          case (MR_Integer) 3:
#line 985 "browser_info.m"
            {
#line 1032 "browser_info.m"
              {
#line 1032 "browser_info.m"
                mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[1]))));
              }
#line 1033 "browser_info.m"
              {
#line 1033 "browser_info.m"
                mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
              }
#line 1034 "browser_info.m"
              {
#line 1034 "browser_info.m"
                mercury__io__flush_output_2_p_0();
              }
#line 985 "browser_info.m"
            }
#line 978 "browser_info.m"
            break;
#line 978 "browser_info.m"
          case (MR_Integer) 1:
#line 979 "browser_info.m"
            {
#line 1032 "browser_info.m"
              {
#line 1032 "browser_info.m"
                mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[2]))));
              }
#line 1033 "browser_info.m"
              {
#line 1033 "browser_info.m"
                mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
              }
#line 1034 "browser_info.m"
              {
#line 1034 "browser_info.m"
                mercury__io__flush_output_2_p_0();
              }
#line 979 "browser_info.m"
            }
#line 978 "browser_info.m"
            break;
#line 978 "browser_info.m"
          case (MR_Integer) 2:
#line 982 "browser_info.m"
            {
#line 1032 "browser_info.m"
              {
#line 1032 "browser_info.m"
                mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[3]))));
              }
#line 1033 "browser_info.m"
              {
#line 1033 "browser_info.m"
                mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
              }
#line 1034 "browser_info.m"
              {
#line 1034 "browser_info.m"
                mercury__io__flush_output_2_p_0();
              }
#line 982 "browser_info.m"
            }
#line 978 "browser_info.m"
            break;
#line 978 "browser_info.m"
        }
#line 972 "browser_info.m"
        break;
#line 972 "browser_info.m"
      case (MR_Integer) 0:
#line 972 "browser_info.m"
        {
#line 973 "browser_info.m"
          {
#line 973 "browser_info.m"
            mercury__io__print_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0, ((MR_Box) (mdb__browser_info__X_2)));
          }
#line 972 "browser_info.m"
        }
#line 972 "browser_info.m"
        break;
#line 972 "browser_info.m"
    }
#line 972 "browser_info.m"
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
#line 967 "browser_info.m"
  {
#line 967 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 967 "browser_info.m"
#line 967 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 967 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 967 "browser_info.m"
      case (MR_Integer) 1:
#line 969 "browser_info.m"
        {
#line 969 "browser_info.m"
          MR_Word mdb__browser_info__V_14_14;

#line 970 "browser_info.m"
          {
#line 970 "browser_info.m"
            mdb__browser_info__V_14_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 970 "browser_info.m"
            MR_hl_field(MR_mktag(2), mdb__browser_info__V_14_14, 0) = ((MR_Box) (mdb__browser_info__Int_2));
#line 970 "browser_info.m"
          }
#line 1032 "browser_info.m"
          {
#line 1032 "browser_info.m"
            mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (mdb__browser_info__V_14_14)));
          }
#line 1033 "browser_info.m"
          {
#line 1033 "browser_info.m"
            mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
          }
#line 1034 "browser_info.m"
          {
#line 1034 "browser_info.m"
            mercury__io__flush_output_2_p_0();
          }
#line 969 "browser_info.m"
        }
#line 967 "browser_info.m"
        break;
#line 967 "browser_info.m"
      case (MR_Integer) 0:
#line 968 "browser_info.m"
        {
#line 968 "browser_info.m"
          mercury__io__write_int_3_p_0(mdb__browser_info__Int_2);
        }
#line 967 "browser_info.m"
        break;
#line 967 "browser_info.m"
    }
#line 967 "browser_info.m"
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
#line 962 "browser_info.m"
  {
#line 962 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 962 "browser_info.m"
#line 962 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 962 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 962 "browser_info.m"
      case (MR_Integer) 1:
#line 964 "browser_info.m"
        {
#line 964 "browser_info.m"
          MR_Word mdb__browser_info__V_14_14;

#line 965 "browser_info.m"
          {
#line 965 "browser_info.m"
            mdb__browser_info__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 965 "browser_info.m"
            MR_hl_field(MR_mktag(1), mdb__browser_info__V_14_14, 0) = ((MR_Box) (mdb__browser_info__String_2));
#line 965 "browser_info.m"
          }
#line 1032 "browser_info.m"
          {
#line 1032 "browser_info.m"
            mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (mdb__browser_info__V_14_14)));
          }
#line 1033 "browser_info.m"
          {
#line 1033 "browser_info.m"
            mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
          }
#line 1034 "browser_info.m"
          {
#line 1034 "browser_info.m"
            mercury__io__flush_output_2_p_0();
          }
#line 964 "browser_info.m"
        }
#line 962 "browser_info.m"
        break;
#line 962 "browser_info.m"
      case (MR_Integer) 0:
#line 963 "browser_info.m"
        {
#line 963 "browser_info.m"
          mercury__io__write_string_3_p_0(mdb__browser_info__String_2);
        }
#line 962 "browser_info.m"
        break;
#line 962 "browser_info.m"
    }
#line 962 "browser_info.m"
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
#line 957 "browser_info.m"
  {
#line 957 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 957 "browser_info.m"
#line 957 "browser_info.m"
    switch (mdb__browser_info__HeadVar__1_1) {
#line 957 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 957 "browser_info.m"
      case (MR_Integer) 1:
#line 959 "browser_info.m"
        {
#line 1032 "browser_info.m"
          {
#line 1032 "browser_info.m"
            mercury__io__write_3_p_0((MR_Word) &mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
          }
#line 1033 "browser_info.m"
          {
#line 1033 "browser_info.m"
            mercury__io__print_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) ".\n")));
          }
#line 1034 "browser_info.m"
          {
#line 1034 "browser_info.m"
            mercury__io__flush_output_2_p_0();
          }
#line 959 "browser_info.m"
        }
#line 957 "browser_info.m"
        break;
#line 957 "browser_info.m"
      case (MR_Integer) 0:
#line 958 "browser_info.m"
        {
#line 958 "browser_info.m"
          mercury__io__nl_2_p_0();
        }
#line 957 "browser_info.m"
        break;
#line 957 "browser_info.m"
    }
#line 957 "browser_info.m"
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
#line 874 "browser_info.m"
  {
#line 874 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 874 "browser_info.m"
    MR_Integer mdb__browser_info__V_23_23;
#line 874 "browser_info.m"
    MR_Word mdb__browser_info__V_25_25;
#line 882 "browser_info.m"
    MR_Word mdb__browser_info__V_32_32;
#line 882 "browser_info.m"
    MR_Word mdb__browser_info__V_33_33;
#line 882 "browser_info.m"
    MR_Word mdb__browser_info__V_34_34;
#line 882 "browser_info.m"
    MR_Word mdb__browser_info__V_35_35;
#line 882 "browser_info.m"
    MR_Word mdb__browser_info__V_36_36;
#line 882 "browser_info.m"
    MR_Word mdb__browser_info__V_37_37;
#line 831 "browser_info.m"
    MR_Word mdb__browser_info__V_45_45;
#line 831 "browser_info.m"
    MR_Word mdb__browser_info__V_46_46;
#line 831 "browser_info.m"
    MR_Word mdb__browser_info__V_47_47;
#line 831 "browser_info.m"
    MR_Word mdb__browser_info__V_48_48;
#line 831 "browser_info.m"
    MR_Word mdb__browser_info__V_49_49;

#line 875 "browser_info.m"
    {
#line 875 "browser_info.m"
      mdb__browser_info__show_settings_caller_6_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__Info_8, (MR_Integer) 1, (MR_String) "Browser");
    }
#line 876 "browser_info.m"
    {
#line 876 "browser_info.m"
      mdb__browser_info__show_settings_caller_6_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__Info_8, (MR_Integer) 0, (MR_String) "Print");
    }
#line 877 "browser_info.m"
    {
#line 877 "browser_info.m"
      mdb__browser_info__show_settings_caller_6_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__Info_8, (MR_Integer) 2, (MR_String) "Printall");
    }
#line 879 "browser_info.m"
    {
#line 879 "browser_info.m"
      mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_6, (MR_String) "Number of I/O actions printed is: ");
    }
#line 882 "browser_info.m"
    mdb__browser_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 0)));
#line 882 "browser_info.m"
    mdb__browser_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 1)));
#line 882 "browser_info.m"
    mdb__browser_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 2)));
#line 882 "browser_info.m"
    mdb__browser_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 3)));
#line 882 "browser_info.m"
    mdb__browser_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 4)));
#line 882 "browser_info.m"
    mdb__browser_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 5)));
#line 882 "browser_info.m"
    mdb__browser_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 6)));
#line 831 "browser_info.m"
    mdb__browser_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 0)));
#line 831 "browser_info.m"
    mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 1)));
#line 831 "browser_info.m"
    mdb__browser_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 2)));
#line 831 "browser_info.m"
    mdb__browser_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 3)));
#line 831 "browser_info.m"
    mdb__browser_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 4)));
#line 831 "browser_info.m"
    mdb__browser_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_25_25, (MR_Integer) 5)));
#line 881 "browser_info.m"
    {
#line 881 "browser_info.m"
      mdb__browser_info__write_int_debugger_4_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__V_23_23);
    }
#line 883 "browser_info.m"
    {
#line 883 "browser_info.m"
      mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_6);
    }
#line 890 "browser_info.m"
#line 890 "browser_info.m"
    switch (mdb__browser_info__ShowPath_7) {
#line 890 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 890 "browser_info.m"
      case (MR_Integer) 0:
#line 891 "browser_info.m"
        {
#line 891 "browser_info.m"
        }
#line 890 "browser_info.m"
        break;
#line 890 "browser_info.m"
      case (MR_Integer) 1:
#line 886 "browser_info.m"
        {
#line 886 "browser_info.m"
          MR_Word mdb__browser_info__V_29_29;
#line 888 "browser_info.m"
          MR_Word mdb__browser_info__V_38_38;
#line 888 "browser_info.m"
          MR_Word mdb__browser_info__V_39_39;
#line 888 "browser_info.m"
          MR_Word mdb__browser_info__V_40_40;
#line 888 "browser_info.m"
          MR_Word mdb__browser_info__V_41_41;
#line 888 "browser_info.m"
          MR_Word mdb__browser_info__V_42_42;
#line 888 "browser_info.m"
          MR_Word mdb__browser_info__V_43_43;

#line 887 "browser_info.m"
          {
#line 887 "browser_info.m"
            mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_6, (MR_String) "Current path is: ");
          }
#line 888 "browser_info.m"
          mdb__browser_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 0)));
#line 888 "browser_info.m"
          mdb__browser_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 1)));
#line 888 "browser_info.m"
          mdb__browser_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 2)));
#line 888 "browser_info.m"
          mdb__browser_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 3)));
#line 888 "browser_info.m"
          mdb__browser_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 4)));
#line 888 "browser_info.m"
          mdb__browser_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 5)));
#line 888 "browser_info.m"
          mdb__browser_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_8, (MR_Integer) 6)));
#line 888 "browser_info.m"
          {
#line 888 "browser_info.m"
            mdb__browser_info__write_down_path_4_p_0(mdb__browser_info__Debugger_6, mdb__browser_info__V_29_29);
          }
#line 889 "browser_info.m"
          {
#line 889 "browser_info.m"
            mdb__browser_info__nl_debugger_3_p_0(mdb__browser_info__Debugger_6);
          }
#line 886 "browser_info.m"
        }
#line 890 "browser_info.m"
        break;
#line 890 "browser_info.m"
    }
#line 874 "browser_info.m"
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
#line 838 "browser_info.m"
  {
#line 838 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 838 "browser_info.m"
#line 838 "browser_info.m"
    switch (MR_tag((MR_Word) mdb__browser_info__ParamCmd_9)) {
#line 838 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 838 "browser_info.m"
      case (MR_Integer) 0:
#line 859 "browser_info.m"
        {
#line 860 "browser_info.m"
          {
#line 860 "browser_info.m"
            mdb__browser_info__show_settings_5_p_0(mdb__browser_info__Debugger_8, mdb__browser_info__ShowPath_10, mdb__browser_info__STATE_VARIABLE_PersistentState_0_18);
          }
#line 859 "browser_info.m"
          *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = mdb__browser_info__STATE_VARIABLE_PersistentState_0_18;
#line 859 "browser_info.m"
        }
#line 838 "browser_info.m"
        break;
#line 838 "browser_info.m"
      case (MR_Integer) 1:
#line 838 "browser_info.m"
        {
#line 838 "browser_info.m"
          MR_Word mdb__browser_info__MaybeOptionTable_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__ParamCmd_9, (MR_Integer) 0)));
#line 838 "browser_info.m"
          MR_Word mdb__browser_info__Setting_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__ParamCmd_9, (MR_Integer) 1)));

#line 842 "browser_info.m"
          if (((MR_tag((MR_Word) mdb__browser_info__MaybeOptionTable_13)) == (MR_mktag((MR_Integer) 1))))
#line 843 "browser_info.m"
            {
#line 843 "browser_info.m"
              MR_String mdb__browser_info__Msg_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeOptionTable_13, (MR_Integer) 0)));

#line 844 "browser_info.m"
              {
#line 844 "browser_info.m"
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_8, mdb__browser_info__Msg_16);
              }
#line 843 "browser_info.m"
              *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = mdb__browser_info__STATE_VARIABLE_PersistentState_0_18;
#line 843 "browser_info.m"
            }
#line 842 "browser_info.m"
          else
#line 840 "browser_info.m"
            {
#line 840 "browser_info.m"
              MR_Word mdb__browser_info__OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__MaybeOptionTable_13, (MR_Integer) 0)));
#line 840 "browser_info.m"
              MR_Word mdb__browser_info__PersistentState0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 4)));
#line 840 "browser_info.m"
              MR_Word mdb__browser_info__CallerType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2)));
#line 840 "browser_info.m"
              MR_Word mdb__browser_info__PersistentState_43;
#line 408 "browser_info.m"
              MR_Word mdb__browser_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 0)));
#line 408 "browser_info.m"
              MR_Word mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 1)));
#line 408 "browser_info.m"
              MR_Word mdb__browser_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 3)));
#line 408 "browser_info.m"
              MR_Word mdb__browser_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 5)));
#line 408 "browser_info.m"
              MR_Word mdb__browser_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 6)));
#line 412 "browser_info.m"
              MR_Word mdb__browser_info__V_57_57;
#line 412 "browser_info.m"
              MR_Word mdb__browser_info__V_58_58;
#line 412 "browser_info.m"
              MR_Word mdb__browser_info__V_59_59;
#line 412 "browser_info.m"
              MR_Word mdb__browser_info__V_60_60;
#line 412 "browser_info.m"
              MR_Word mdb__browser_info__V_62_62;
#line 412 "browser_info.m"
              MR_Word mdb__browser_info__V_63_63;
#line 412 "browser_info.m"
              MR_Word mdb__browser_info__V_61_61;

#line 410 "browser_info.m"
              {
#line 410 "browser_info.m"
                mdb__browser_info__set_browser_param_from_option_table_5_p_0(mdb__browser_info__CallerType_42, mdb__browser_info__OptionTable_15, mdb__browser_info__Setting_14, mdb__browser_info__PersistentState0_41, &mdb__browser_info__PersistentState_43);
              }
#line 412 "browser_info.m"
              mdb__browser_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 0)));
#line 412 "browser_info.m"
              mdb__browser_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 1)));
#line 412 "browser_info.m"
              mdb__browser_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2)));
#line 412 "browser_info.m"
              mdb__browser_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 3)));
#line 412 "browser_info.m"
              mdb__browser_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 4)));
#line 412 "browser_info.m"
              mdb__browser_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 5)));
#line 412 "browser_info.m"
              mdb__browser_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 6)));
#line 412 "browser_info.m"
              {
#line 412 "browser_info.m"
                MR_Word base;
#line 412 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 412 "browser_info.m"
                *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = base;
#line 412 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_57_57));
#line 412 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_58_58));
#line 412 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_59_59));
#line 412 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_60_60));
#line 412 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_43));
#line 412 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_62_62));
#line 412 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_63_63));
#line 412 "browser_info.m"
              }
#line 840 "browser_info.m"
            }
#line 838 "browser_info.m"
        }
#line 838 "browser_info.m"
        break;
#line 838 "browser_info.m"
      case (MR_Integer) 2:
#line 847 "browser_info.m"
        {
#line 847 "browser_info.m"
          MR_Word mdb__browser_info__MaybeOptionTable_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__ParamCmd_9, (MR_Integer) 0)));
#line 847 "browser_info.m"
          MR_Word mdb__browser_info__Setting_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__ParamCmd_9, (MR_Integer) 1)));

#line 851 "browser_info.m"
          if (((MR_tag((MR_Word) mdb__browser_info__MaybeOptionTable_32)) == (MR_mktag((MR_Integer) 1))))
#line 852 "browser_info.m"
            {
#line 852 "browser_info.m"
              MR_String mdb__browser_info__Msg_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeOptionTable_32, (MR_Integer) 0)));

#line 853 "browser_info.m"
              {
#line 853 "browser_info.m"
                mdb__browser_info__write_string_debugger_4_p_0(mdb__browser_info__Debugger_8, mdb__browser_info__Msg_29);
              }
#line 852 "browser_info.m"
              *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = mdb__browser_info__STATE_VARIABLE_PersistentState_0_18;
#line 852 "browser_info.m"
            }
#line 851 "browser_info.m"
          else
#line 849 "browser_info.m"
            {
#line 849 "browser_info.m"
              MR_Word mdb__browser_info__OptionTable_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__MaybeOptionTable_32, (MR_Integer) 0)));
#line 849 "browser_info.m"
              MR_Word mdb__browser_info__PersistentState0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 4)));
#line 849 "browser_info.m"
              MR_Word mdb__browser_info__CallerType_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2)));
#line 849 "browser_info.m"
              MR_Word mdb__browser_info__PersistentState_71;
#line 408 "browser_info.m"
              MR_Word mdb__browser_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 0)));
#line 408 "browser_info.m"
              MR_Word mdb__browser_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 1)));
#line 408 "browser_info.m"
              MR_Word mdb__browser_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 3)));
#line 408 "browser_info.m"
              MR_Word mdb__browser_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 5)));
#line 408 "browser_info.m"
              MR_Word mdb__browser_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 6)));
#line 412 "browser_info.m"
              MR_Word mdb__browser_info__V_85_85;
#line 412 "browser_info.m"
              MR_Word mdb__browser_info__V_86_86;
#line 412 "browser_info.m"
              MR_Word mdb__browser_info__V_87_87;
#line 412 "browser_info.m"
              MR_Word mdb__browser_info__V_88_88;
#line 412 "browser_info.m"
              MR_Word mdb__browser_info__V_90_90;
#line 412 "browser_info.m"
              MR_Word mdb__browser_info__V_91_91;
#line 412 "browser_info.m"
              MR_Word mdb__browser_info__V_89_89;

#line 410 "browser_info.m"
              {
#line 410 "browser_info.m"
                mdb__browser_info__set_browser_param_from_option_table_5_p_0(mdb__browser_info__CallerType_70, mdb__browser_info__OptionTable_28, mdb__browser_info__Setting_33, mdb__browser_info__PersistentState0_69, &mdb__browser_info__PersistentState_71);
              }
#line 412 "browser_info.m"
              mdb__browser_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 0)));
#line 412 "browser_info.m"
              mdb__browser_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 1)));
#line 412 "browser_info.m"
              mdb__browser_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2)));
#line 412 "browser_info.m"
              mdb__browser_info__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 3)));
#line 412 "browser_info.m"
              mdb__browser_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 4)));
#line 412 "browser_info.m"
              mdb__browser_info__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 5)));
#line 412 "browser_info.m"
              mdb__browser_info__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 6)));
#line 412 "browser_info.m"
              {
#line 412 "browser_info.m"
                MR_Word base;
#line 412 "browser_info.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 412 "browser_info.m"
                *mdb__browser_info__STATE_VARIABLE_PersistentState_19 = base;
#line 412 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_85_85));
#line 412 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_86_86));
#line 412 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_87_87));
#line 412 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_88_88));
#line 412 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_71));
#line 412 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_90_90));
#line 412 "browser_info.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_91_91));
#line 412 "browser_info.m"
              }
#line 849 "browser_info.m"
            }
#line 847 "browser_info.m"
        }
#line 838 "browser_info.m"
        break;
#line 838 "browser_info.m"
      case (MR_Integer) 3:
#line 856 "browser_info.m"
        {
#line 856 "browser_info.m"
          MR_Integer mdb__browser_info__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__ParamCmd_9, (MR_Integer) 0)));

#line 857 "browser_info.m"
          {
#line 857 "browser_info.m"
            mdb__browser_info__info_set_num_io_actions_3_p_0(mdb__browser_info__N_17, mdb__browser_info__STATE_VARIABLE_PersistentState_0_18, mdb__browser_info__STATE_VARIABLE_PersistentState_19);
          }
#line 856 "browser_info.m"
        }
#line 838 "browser_info.m"
        break;
#line 838 "browser_info.m"
    }
#line 838 "browser_info.m"
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
#line 452 "browser_info.m"
  {
#line 452 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 452 "browser_info.m"
    MR_Word mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 0)));
#line 452 "browser_info.m"
    MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 1)));
#line 452 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 2)));
#line 452 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 4)));
#line 452 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 5)));
#line 452 "browser_info.m"
    MR_Integer mdb__browser_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Browser_0_6, (MR_Integer) 3)));

#line 452 "browser_info.m"
    {
#line 452 "browser_info.m"
      MR_Word base;
#line 452 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 452 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Browser_7 = base;
#line 452 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_9_9));
#line 452 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_10_10));
#line 452 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_11_11));
#line 452 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__NumIOActions_4));
#line 452 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_13_13));
#line 452 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_14_14));
#line 452 "browser_info.m"
    }
#line 452 "browser_info.m"
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
#line 445 "browser_info.m"
  {
#line 445 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 445 "browser_info.m"
    MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 0)));
#line 445 "browser_info.m"
    MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 1)));
#line 445 "browser_info.m"
    MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 2)));
#line 445 "browser_info.m"
    MR_Word mdb__browser_info__V_8_8;
#line 445 "browser_info.m"
    MR_Word mdb__browser_info__V_9_9;

#line 445 "browser_info.m"
    *mdb__browser_info__NumIOActions_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 3)));
#line 445 "browser_info.m"
    mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 4)));
#line 445 "browser_info.m"
    mdb__browser_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Browser_3, (MR_Integer) 5)));
#line 445 "browser_info.m"
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
#line 424 "browser_info.m"
  {
#line 424 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 424 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 424 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState_7;
#line 425 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 425 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 425 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 425 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 425 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 425 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 427 "browser_info.m"
    MR_Word mdb__browser_info__V_17_17;
#line 427 "browser_info.m"
    MR_Word mdb__browser_info__V_18_18;
#line 427 "browser_info.m"
    MR_Word mdb__browser_info__V_19_19;
#line 427 "browser_info.m"
    MR_Word mdb__browser_info__V_20_20;
#line 427 "browser_info.m"
    MR_Word mdb__browser_info__V_22_22;
#line 427 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;
#line 427 "browser_info.m"
    MR_Word mdb__browser_info__V_21_21;

#line 426 "browser_info.m"
    {
#line 426 "browser_info.m"
      mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0(mdb__browser_info__FileName_4, mdb__browser_info__PersistentState0_6, &mdb__browser_info__PersistentState_7);
    }
#line 427 "browser_info.m"
    mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 427 "browser_info.m"
    mdb__browser_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 427 "browser_info.m"
    mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 427 "browser_info.m"
    mdb__browser_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 427 "browser_info.m"
    mdb__browser_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 427 "browser_info.m"
    mdb__browser_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 427 "browser_info.m"
    mdb__browser_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 427 "browser_info.m"
    {
#line 427 "browser_info.m"
      MR_Word base;
#line 427 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 427 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Info_9 = base;
#line 427 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_17_17));
#line 427 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_18_18));
#line 427 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_19_19));
#line 427 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_20_20));
#line 427 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_7));
#line 427 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_22_22));
#line 427 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_23_23));
#line 427 "browser_info.m"
    }
#line 424 "browser_info.m"
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
#line 419 "browser_info.m"
  {
#line 419 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 419 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 419 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState_7;
#line 420 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 420 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 420 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 420 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 420 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 420 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 422 "browser_info.m"
    MR_Word mdb__browser_info__V_17_17;
#line 422 "browser_info.m"
    MR_Word mdb__browser_info__V_18_18;
#line 422 "browser_info.m"
    MR_Word mdb__browser_info__V_19_19;
#line 422 "browser_info.m"
    MR_Word mdb__browser_info__V_20_20;
#line 422 "browser_info.m"
    MR_Word mdb__browser_info__V_22_22;
#line 422 "browser_info.m"
    MR_Word mdb__browser_info__V_23_23;
#line 422 "browser_info.m"
    MR_Word mdb__browser_info__V_21_21;

#line 421 "browser_info.m"
    {
#line 421 "browser_info.m"
      mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0(mdb__browser_info__Cmd_4, mdb__browser_info__PersistentState0_6, &mdb__browser_info__PersistentState_7);
    }
#line 422 "browser_info.m"
    mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 422 "browser_info.m"
    mdb__browser_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 422 "browser_info.m"
    mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 422 "browser_info.m"
    mdb__browser_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 422 "browser_info.m"
    mdb__browser_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 422 "browser_info.m"
    mdb__browser_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 422 "browser_info.m"
    mdb__browser_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 422 "browser_info.m"
    {
#line 422 "browser_info.m"
      MR_Word base;
#line 422 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 422 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Info_9 = base;
#line 422 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_17_17));
#line 422 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_18_18));
#line 422 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_19_19));
#line 422 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_20_20));
#line 422 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_7));
#line 422 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_22_22));
#line 422 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_23_23));
#line 422 "browser_info.m"
    }
#line 419 "browser_info.m"
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
#line 414 "browser_info.m"
  {
#line 414 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 414 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 414 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState_7;
#line 414 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 414 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 414 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 414 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 414 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 414 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 452 "browser_info.m"
    MR_Word mdb__browser_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 0)));
#line 452 "browser_info.m"
    MR_Word mdb__browser_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 1)));
#line 452 "browser_info.m"
    MR_Word mdb__browser_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 2)));
#line 452 "browser_info.m"
    MR_Word mdb__browser_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 4)));
#line 452 "browser_info.m"
    MR_Word mdb__browser_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 5)));
#line 452 "browser_info.m"
    MR_Integer mdb__browser_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState0_6, (MR_Integer) 3)));

#line 452 "browser_info.m"
    {
#line 452 "browser_info.m"
      mdb__browser_info__PersistentState_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 452 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 0) = ((MR_Box) (mdb__browser_info__V_29_29));
#line 452 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 1) = ((MR_Box) (mdb__browser_info__V_30_30));
#line 452 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 2) = ((MR_Box) (mdb__browser_info__V_31_31));
#line 452 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 3) = ((MR_Box) (mdb__browser_info__N_4));
#line 452 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 4) = ((MR_Box) (mdb__browser_info__V_33_33));
#line 452 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__PersistentState_7, 5) = ((MR_Box) (mdb__browser_info__V_34_34));
#line 452 "browser_info.m"
    }
#line 417 "browser_info.m"
    {
#line 417 "browser_info.m"
      MR_Word base;
#line 417 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 417 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Info_9 = base;
#line 417 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_11_11));
#line 417 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_12_12));
#line 417 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_13_13));
#line 417 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_14_14));
#line 417 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_7));
#line 417 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_15_15));
#line 417 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_16_16));
#line 417 "browser_info.m"
    }
#line 414 "browser_info.m"
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
#line 407 "browser_info.m"
  {
#line 407 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 407 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 407 "browser_info.m"
    MR_Word mdb__browser_info__CallerType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 407 "browser_info.m"
    MR_Word mdb__browser_info__PersistentState_10;
#line 408 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 408 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 408 "browser_info.m"
    MR_Word mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 408 "browser_info.m"
    MR_Word mdb__browser_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 408 "browser_info.m"
    MR_Word mdb__browser_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 412 "browser_info.m"
    MR_Word mdb__browser_info__V_26_26;
#line 412 "browser_info.m"
    MR_Word mdb__browser_info__V_27_27;
#line 412 "browser_info.m"
    MR_Word mdb__browser_info__V_28_28;
#line 412 "browser_info.m"
    MR_Word mdb__browser_info__V_29_29;
#line 412 "browser_info.m"
    MR_Word mdb__browser_info__V_31_31;
#line 412 "browser_info.m"
    MR_Word mdb__browser_info__V_32_32;
#line 412 "browser_info.m"
    MR_Word mdb__browser_info__V_30_30;

#line 410 "browser_info.m"
    {
#line 410 "browser_info.m"
      mdb__browser_info__set_browser_param_from_option_table_5_p_0(mdb__browser_info__CallerType_9, mdb__browser_info__OptionTable_5, mdb__browser_info__Setting_6, mdb__browser_info__PersistentState0_8, &mdb__browser_info__PersistentState_10);
    }
#line 412 "browser_info.m"
    mdb__browser_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 412 "browser_info.m"
    mdb__browser_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 412 "browser_info.m"
    mdb__browser_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 412 "browser_info.m"
    mdb__browser_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 412 "browser_info.m"
    mdb__browser_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 412 "browser_info.m"
    mdb__browser_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 5)));
#line 412 "browser_info.m"
    mdb__browser_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_Info_0_11, (MR_Integer) 6)));
#line 412 "browser_info.m"
    {
#line 412 "browser_info.m"
      MR_Word base;
#line 412 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 412 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Info_12 = base;
#line 412 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__V_26_26));
#line 412 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__V_27_27));
#line 412 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__V_28_28));
#line 412 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_29_29));
#line 412 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__PersistentState_10));
#line 412 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_31_31));
#line 412 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__browser_info__V_32_32));
#line 412 "browser_info.m"
    }
#line 407 "browser_info.m"
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
#line 712 "browser_info.m"
  {
#line 712 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 712 "browser_info.m"
    MR_Word mdb__browser_info__TypeCtorInfo_27_27 = (MR_Word) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0;
#line 712 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12;
#line 712 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13;
#line 712 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14;
#line 712 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15;
#line 712 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16;
#line 712 "browser_info.m"
    MR_Word mdb__browser_info__V_17_17;
#line 712 "browser_info.m"
    MR_Word mdb__browser_info__V_18_18;

#line 714 "browser_info.m"
    {
#line 714 "browser_info.m"
      mdb__browser_info__V_12_12 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 0)));
    }
#line 715 "browser_info.m"
    {
#line 715 "browser_info.m"
      mdb__browser_info__V_13_13 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 1)));
    }
#line 716 "browser_info.m"
    {
#line 716 "browser_info.m"
      mdb__browser_info__V_14_14 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 2)));
    }
#line 717 "browser_info.m"
    {
#line 717 "browser_info.m"
      mdb__browser_info__V_15_15 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 3)));
    }
#line 718 "browser_info.m"
    {
#line 718 "browser_info.m"
      mdb__browser_info__V_16_16 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 4)));
    }
#line 719 "browser_info.m"
    {
#line 719 "browser_info.m"
      mdb__browser_info__V_17_17 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 5)));
    }
#line 720 "browser_info.m"
    {
#line 720 "browser_info.m"
      mdb__browser_info__V_18_18 = mercury__getopt__lookup_bool_option_2_f_0(mdb__browser_info__TypeCtorInfo_27_27, mdb__browser_info__OptionTable_7, ((MR_Box) ((MR_Integer) 6)));
    }
#line 713 "browser_info.m"
    {
#line 713 "browser_info.m"
      mdb__browser_info__set_browser_param_with_caller_type_11_p_0(mdb__browser_info__CallerType_6, mdb__browser_info__V_12_12, mdb__browser_info__V_13_13, mdb__browser_info__V_14_14, mdb__browser_info__V_15_15, mdb__browser_info__V_16_16, mdb__browser_info__V_17_17, mdb__browser_info__V_18_18, mdb__browser_info__Setting_8, mdb__browser_info__STATE_VARIABLE_State_0_10, mdb__browser_info__STATE_VARIABLE_State_11);
    }
#line 712 "browser_info.m"
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
#line 706 "browser_info.m"
  {
#line 706 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 706 "browser_info.m"
    MR_Word mdb__browser_info__P_18;
#line 706 "browser_info.m"
    MR_Word mdb__browser_info__B_19;
#line 706 "browser_info.m"
    MR_Word mdb__browser_info__A_20;

#line 729 "browser_info.m"
    if ((mdb__browser_info__MaybeCallerType_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 729 "browser_info.m"
#line 729 "browser_info.m"
      switch (mdb__browser_info__FromBrowser_10) {
#line 729 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 729 "browser_info.m"
        case (MR_Integer) 0:
#line 729 "browser_info.m"
          {
#line 729 "browser_info.m"
            mdb__browser_info__P_18 = (MR_Integer) 1;
#line 729 "browser_info.m"
            mdb__browser_info__B_19 = (MR_Integer) 1;
#line 729 "browser_info.m"
            mdb__browser_info__A_20 = (MR_Integer) 1;
#line 729 "browser_info.m"
          }
#line 729 "browser_info.m"
          break;
#line 729 "browser_info.m"
        case (MR_Integer) 1:
#line 730 "browser_info.m"
          {
#line 730 "browser_info.m"
            mdb__browser_info__P_18 = (MR_Integer) 0;
#line 730 "browser_info.m"
            mdb__browser_info__B_19 = (MR_Integer) 1;
#line 730 "browser_info.m"
            mdb__browser_info__A_20 = (MR_Integer) 0;
#line 730 "browser_info.m"
          }
#line 729 "browser_info.m"
          break;
#line 729 "browser_info.m"
      }
#line 729 "browser_info.m"
    else
#line 729 "browser_info.m"
      {
#line 729 "browser_info.m"
        MR_Word mdb__browser_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeCallerType_11, (MR_Integer) 0)));

#line 729 "browser_info.m"
#line 729 "browser_info.m"
        switch (mdb__browser_info__V_30_30) {
#line 729 "browser_info.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 729 "browser_info.m"
          case (MR_Integer) 1:
#line 732 "browser_info.m"
            {
#line 732 "browser_info.m"
              mdb__browser_info__P_18 = (MR_Integer) 0;
#line 732 "browser_info.m"
              mdb__browser_info__B_19 = (MR_Integer) 1;
#line 732 "browser_info.m"
              mdb__browser_info__A_20 = (MR_Integer) 0;
#line 732 "browser_info.m"
            }
#line 729 "browser_info.m"
            break;
#line 729 "browser_info.m"
          case (MR_Integer) 0:
#line 731 "browser_info.m"
            {
#line 731 "browser_info.m"
              mdb__browser_info__P_18 = (MR_Integer) 1;
#line 731 "browser_info.m"
              mdb__browser_info__B_19 = (MR_Integer) 0;
#line 731 "browser_info.m"
              mdb__browser_info__A_20 = (MR_Integer) 0;
#line 731 "browser_info.m"
            }
#line 729 "browser_info.m"
            break;
#line 729 "browser_info.m"
          case (MR_Integer) 2:
#line 733 "browser_info.m"
            {
#line 733 "browser_info.m"
              mdb__browser_info__P_18 = (MR_Integer) 0;
#line 733 "browser_info.m"
              mdb__browser_info__B_19 = (MR_Integer) 0;
#line 733 "browser_info.m"
              mdb__browser_info__A_20 = (MR_Integer) 1;
#line 733 "browser_info.m"
            }
#line 729 "browser_info.m"
            break;
#line 729 "browser_info.m"
        }
#line 729 "browser_info.m"
      }
#line 708 "browser_info.m"
    {
#line 708 "browser_info.m"
      mdb__browser_info__set_browser_param_11_p_0(mdb__browser_info__FromBrowser_10, mdb__browser_info__P_18, mdb__browser_info__B_19, mdb__browser_info__A_20, mdb__browser_info__F0_12, mdb__browser_info__Pr0_13, mdb__browser_info__V0_14, mdb__browser_info__NPr0_15, mdb__browser_info__Setting_16, mdb__browser_info__STATE_VARIABLE_State_0_21, mdb__browser_info__STATE_VARIABLE_State_22);
    }
#line 706 "browser_info.m"
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
#line 679 "browser_info.m"
  {
#line 679 "browser_info.m"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__P0_13 == (MR_Integer) 0);
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__P_23;
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__B_24;
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__A_25;
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__F_26;
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__Pr_27;
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__V_28;
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__NPr_29;
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__PParams0_30;
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__BParams0_31;
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__AParams0_32;
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__PParams_33;
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__BParams_34;
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__AParams_35;
#line 679 "browser_info.m"
    MR_Integer mdb__browser_info__V_40_40;
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__V_61_61;
#line 679 "browser_info.m"
    MR_Word mdb__browser_info__V_62_62;
#line 695 "browser_info.m"
    MR_Integer mdb__browser_info__V_45_45;
#line 695 "browser_info.m"
    MR_Word mdb__browser_info__V_46_46;
#line 695 "browser_info.m"
    MR_Word mdb__browser_info__V_47_47;
#line 701 "browser_info.m"
    MR_Word mdb__browser_info__V_58_58;
#line 701 "browser_info.m"
    MR_Word mdb__browser_info__V_59_59;
#line 701 "browser_info.m"
    MR_Word mdb__browser_info__V_60_60;

#line 681 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 681 "browser_info.m"
      {
#line 682 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__B0_14 == (MR_Integer) 0);
#line 681 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 683 "browser_info.m"
          mdb__browser_info__succeeded = (mdb__browser_info__A0_15 == (MR_Integer) 0);
#line 681 "browser_info.m"
      }
#line 680 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 729 "browser_info.m"
#line 729 "browser_info.m"
      switch (mdb__browser_info__CallerType_12) {
#line 729 "browser_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 729 "browser_info.m"
        case (MR_Integer) 1:
#line 732 "browser_info.m"
          {
#line 732 "browser_info.m"
            mdb__browser_info__P_23 = (MR_Integer) 0;
#line 732 "browser_info.m"
            mdb__browser_info__B_24 = (MR_Integer) 1;
#line 732 "browser_info.m"
            mdb__browser_info__A_25 = (MR_Integer) 0;
#line 732 "browser_info.m"
          }
#line 729 "browser_info.m"
          break;
#line 729 "browser_info.m"
        case (MR_Integer) 0:
#line 731 "browser_info.m"
          {
#line 731 "browser_info.m"
            mdb__browser_info__P_23 = (MR_Integer) 1;
#line 731 "browser_info.m"
            mdb__browser_info__B_24 = (MR_Integer) 0;
#line 731 "browser_info.m"
            mdb__browser_info__A_25 = (MR_Integer) 0;
#line 731 "browser_info.m"
          }
#line 729 "browser_info.m"
          break;
#line 729 "browser_info.m"
        case (MR_Integer) 2:
#line 733 "browser_info.m"
          {
#line 733 "browser_info.m"
            mdb__browser_info__P_23 = (MR_Integer) 0;
#line 733 "browser_info.m"
            mdb__browser_info__B_24 = (MR_Integer) 0;
#line 733 "browser_info.m"
            mdb__browser_info__A_25 = (MR_Integer) 1;
#line 733 "browser_info.m"
          }
#line 729 "browser_info.m"
          break;
#line 729 "browser_info.m"
      }
#line 680 "browser_info.m"
    else
#line 690 "browser_info.m"
      {
#line 690 "browser_info.m"
        mdb__browser_info__P_23 = mdb__browser_info__P0_13;
#line 691 "browser_info.m"
        mdb__browser_info__B_24 = mdb__browser_info__B0_14;
#line 692 "browser_info.m"
        mdb__browser_info__A_25 = mdb__browser_info__A0_15;
#line 690 "browser_info.m"
      }
#line 762 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__F0_16 == (MR_Integer) 0);
#line 762 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 762 "browser_info.m"
      {
#line 763 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__Pr0_17 == (MR_Integer) 0);
#line 762 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 762 "browser_info.m"
          {
#line 764 "browser_info.m"
            mdb__browser_info__succeeded = (mdb__browser_info__V0_18 == (MR_Integer) 0);
#line 762 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 765 "browser_info.m"
              mdb__browser_info__succeeded = (mdb__browser_info__NPr0_19 == (MR_Integer) 0);
#line 762 "browser_info.m"
          }
#line 762 "browser_info.m"
      }
#line 761 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 767 "browser_info.m"
      {
#line 767 "browser_info.m"
        mdb__browser_info__F_26 = (MR_Integer) 1;
#line 768 "browser_info.m"
        mdb__browser_info__Pr_27 = (MR_Integer) 1;
#line 769 "browser_info.m"
        mdb__browser_info__V_28 = (MR_Integer) 1;
#line 770 "browser_info.m"
        mdb__browser_info__NPr_29 = (MR_Integer) 1;
#line 767 "browser_info.m"
      }
#line 761 "browser_info.m"
    else
#line 772 "browser_info.m"
      {
#line 772 "browser_info.m"
        mdb__browser_info__F_26 = mdb__browser_info__F0_16;
#line 773 "browser_info.m"
        mdb__browser_info__Pr_27 = mdb__browser_info__Pr0_17;
#line 774 "browser_info.m"
        mdb__browser_info__V_28 = mdb__browser_info__V0_18;
#line 775 "browser_info.m"
        mdb__browser_info__NPr_29 = mdb__browser_info__NPr0_19;
#line 772 "browser_info.m"
      }
#line 695 "browser_info.m"
    mdb__browser_info__PParams0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 0)));
#line 695 "browser_info.m"
    mdb__browser_info__BParams0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 1)));
#line 695 "browser_info.m"
    mdb__browser_info__AParams0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 2)));
#line 695 "browser_info.m"
    mdb__browser_info__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 3)));
#line 695 "browser_info.m"
    mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 4)));
#line 695 "browser_info.m"
    mdb__browser_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 5)));
#line 698 "browser_info.m"
    {
#line 698 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__P_23, mdb__browser_info__F_26, mdb__browser_info__Pr_27, mdb__browser_info__V_28, mdb__browser_info__NPr_29, mdb__browser_info__Setting_20, mdb__browser_info__PParams0_30, &mdb__browser_info__PParams_33);
    }
#line 699 "browser_info.m"
    {
#line 699 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__B_24, mdb__browser_info__F_26, mdb__browser_info__Pr_27, mdb__browser_info__V_28, mdb__browser_info__NPr_29, mdb__browser_info__Setting_20, mdb__browser_info__BParams0_31, &mdb__browser_info__BParams_34);
    }
#line 700 "browser_info.m"
    {
#line 700 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__A_25, mdb__browser_info__F_26, mdb__browser_info__Pr_27, mdb__browser_info__V_28, mdb__browser_info__NPr_29, mdb__browser_info__Setting_20, mdb__browser_info__AParams0_32, &mdb__browser_info__AParams_35);
    }
#line 701 "browser_info.m"
    mdb__browser_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 0)));
#line 701 "browser_info.m"
    mdb__browser_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 1)));
#line 701 "browser_info.m"
    mdb__browser_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 2)));
#line 701 "browser_info.m"
    mdb__browser_info__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 3)));
#line 701 "browser_info.m"
    mdb__browser_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 4)));
#line 701 "browser_info.m"
    mdb__browser_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_36, (MR_Integer) 5)));
#line 701 "browser_info.m"
    {
#line 701 "browser_info.m"
      MR_Word base;
#line 701 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 701 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_State_37 = base;
#line 701 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__PParams_33));
#line 701 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__BParams_34));
#line 701 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__AParams_35));
#line 701 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_40_40));
#line 701 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_61_61));
#line 701 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_62_62));
#line 701 "browser_info.m"
    }
#line 679 "browser_info.m"
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
#line 649 "browser_info.m"
  {
#line 649 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__P_22;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__B_23;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__A_24;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__F_25;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__Pr_26;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__V_27;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__NPr_28;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__PParams0_29;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__BParams0_30;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__AParams0_31;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__PParams_32;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__BParams_33;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__AParams_34;
#line 649 "browser_info.m"
    MR_Integer mdb__browser_info__V_39_39;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__V_60_60;
#line 649 "browser_info.m"
    MR_Word mdb__browser_info__V_61_61;
#line 668 "browser_info.m"
    MR_Integer mdb__browser_info__V_44_44;
#line 668 "browser_info.m"
    MR_Word mdb__browser_info__V_45_45;
#line 668 "browser_info.m"
    MR_Word mdb__browser_info__V_46_46;
#line 674 "browser_info.m"
    MR_Word mdb__browser_info__V_57_57;
#line 674 "browser_info.m"
    MR_Word mdb__browser_info__V_58_58;
#line 674 "browser_info.m"
    MR_Word mdb__browser_info__V_59_59;

#line 653 "browser_info.m"
#line 653 "browser_info.m"
    switch (mdb__browser_info__FromBrowser_12) {
#line 653 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 653 "browser_info.m"
      case (MR_Integer) 0:
#line 741 "browser_info.m"
        {
#line 742 "browser_info.m"
          mdb__browser_info__succeeded = (mdb__browser_info__P0_13 == (MR_Integer) 0);
#line 742 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 742 "browser_info.m"
            {
#line 743 "browser_info.m"
              mdb__browser_info__succeeded = (mdb__browser_info__B0_14 == (MR_Integer) 0);
#line 742 "browser_info.m"
              if (mdb__browser_info__succeeded)
#line 744 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__A0_15 == (MR_Integer) 0);
#line 742 "browser_info.m"
            }
#line 741 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 746 "browser_info.m"
            {
#line 746 "browser_info.m"
              mdb__browser_info__P_22 = (MR_Integer) 1;
#line 747 "browser_info.m"
              mdb__browser_info__B_23 = (MR_Integer) 1;
#line 748 "browser_info.m"
              mdb__browser_info__A_24 = (MR_Integer) 1;
#line 746 "browser_info.m"
            }
#line 741 "browser_info.m"
          else
#line 750 "browser_info.m"
            {
#line 750 "browser_info.m"
              mdb__browser_info__P_22 = mdb__browser_info__P0_13;
#line 751 "browser_info.m"
              mdb__browser_info__B_23 = mdb__browser_info__B0_14;
#line 752 "browser_info.m"
              mdb__browser_info__A_24 = mdb__browser_info__A0_15;
#line 750 "browser_info.m"
            }
#line 741 "browser_info.m"
        }
#line 653 "browser_info.m"
        break;
#line 653 "browser_info.m"
      case (MR_Integer) 1:
#line 655 "browser_info.m"
        {
#line 656 "browser_info.m"
          mdb__browser_info__succeeded = (mdb__browser_info__P0_13 == (MR_Integer) 0);
#line 656 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 656 "browser_info.m"
            {
#line 657 "browser_info.m"
              mdb__browser_info__succeeded = (mdb__browser_info__B0_14 == (MR_Integer) 0);
#line 656 "browser_info.m"
              if (mdb__browser_info__succeeded)
#line 658 "browser_info.m"
                mdb__browser_info__succeeded = (mdb__browser_info__A0_15 == (MR_Integer) 0);
#line 656 "browser_info.m"
            }
#line 655 "browser_info.m"
          if (mdb__browser_info__succeeded)
#line 660 "browser_info.m"
            {
#line 730 "browser_info.m"
              mdb__browser_info__P_22 = (MR_Integer) 0;
#line 730 "browser_info.m"
              mdb__browser_info__B_23 = (MR_Integer) 1;
#line 730 "browser_info.m"
              mdb__browser_info__A_24 = (MR_Integer) 0;
#line 660 "browser_info.m"
            }
#line 655 "browser_info.m"
          else
#line 662 "browser_info.m"
            {
#line 662 "browser_info.m"
              mdb__browser_info__P_22 = mdb__browser_info__P0_13;
#line 663 "browser_info.m"
              mdb__browser_info__B_23 = mdb__browser_info__B0_14;
#line 664 "browser_info.m"
              mdb__browser_info__A_24 = mdb__browser_info__A0_15;
#line 662 "browser_info.m"
            }
#line 655 "browser_info.m"
        }
#line 653 "browser_info.m"
        break;
#line 653 "browser_info.m"
    }
#line 762 "browser_info.m"
    mdb__browser_info__succeeded = (mdb__browser_info__F0_16 == (MR_Integer) 0);
#line 762 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 762 "browser_info.m"
      {
#line 763 "browser_info.m"
        mdb__browser_info__succeeded = (mdb__browser_info__Pr0_17 == (MR_Integer) 0);
#line 762 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 762 "browser_info.m"
          {
#line 764 "browser_info.m"
            mdb__browser_info__succeeded = (mdb__browser_info__V0_18 == (MR_Integer) 0);
#line 762 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 765 "browser_info.m"
              mdb__browser_info__succeeded = (mdb__browser_info__NPr0_19 == (MR_Integer) 0);
#line 762 "browser_info.m"
          }
#line 762 "browser_info.m"
      }
#line 761 "browser_info.m"
    if (mdb__browser_info__succeeded)
#line 767 "browser_info.m"
      {
#line 767 "browser_info.m"
        mdb__browser_info__F_25 = (MR_Integer) 1;
#line 768 "browser_info.m"
        mdb__browser_info__Pr_26 = (MR_Integer) 1;
#line 769 "browser_info.m"
        mdb__browser_info__V_27 = (MR_Integer) 1;
#line 770 "browser_info.m"
        mdb__browser_info__NPr_28 = (MR_Integer) 1;
#line 767 "browser_info.m"
      }
#line 761 "browser_info.m"
    else
#line 772 "browser_info.m"
      {
#line 772 "browser_info.m"
        mdb__browser_info__F_25 = mdb__browser_info__F0_16;
#line 773 "browser_info.m"
        mdb__browser_info__Pr_26 = mdb__browser_info__Pr0_17;
#line 774 "browser_info.m"
        mdb__browser_info__V_27 = mdb__browser_info__V0_18;
#line 775 "browser_info.m"
        mdb__browser_info__NPr_28 = mdb__browser_info__NPr0_19;
#line 772 "browser_info.m"
      }
#line 668 "browser_info.m"
    mdb__browser_info__PParams0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 0)));
#line 668 "browser_info.m"
    mdb__browser_info__BParams0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 1)));
#line 668 "browser_info.m"
    mdb__browser_info__AParams0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 2)));
#line 668 "browser_info.m"
    mdb__browser_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 3)));
#line 668 "browser_info.m"
    mdb__browser_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 4)));
#line 668 "browser_info.m"
    mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 5)));
#line 671 "browser_info.m"
    {
#line 671 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__P_22, mdb__browser_info__F_25, mdb__browser_info__Pr_26, mdb__browser_info__V_27, mdb__browser_info__NPr_28, mdb__browser_info__Setting_20, mdb__browser_info__PParams0_29, &mdb__browser_info__PParams_32);
    }
#line 672 "browser_info.m"
    {
#line 672 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__B_23, mdb__browser_info__F_25, mdb__browser_info__Pr_26, mdb__browser_info__V_27, mdb__browser_info__NPr_28, mdb__browser_info__Setting_20, mdb__browser_info__BParams0_30, &mdb__browser_info__BParams_33);
    }
#line 673 "browser_info.m"
    {
#line 673 "browser_info.m"
      mdb__browser_info__maybe_set_param_8_p_0(mdb__browser_info__A_24, mdb__browser_info__F_25, mdb__browser_info__Pr_26, mdb__browser_info__V_27, mdb__browser_info__NPr_28, mdb__browser_info__Setting_20, mdb__browser_info__AParams0_31, &mdb__browser_info__AParams_34);
    }
#line 674 "browser_info.m"
    mdb__browser_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 0)));
#line 674 "browser_info.m"
    mdb__browser_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 1)));
#line 674 "browser_info.m"
    mdb__browser_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 2)));
#line 674 "browser_info.m"
    mdb__browser_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 3)));
#line 674 "browser_info.m"
    mdb__browser_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 4)));
#line 674 "browser_info.m"
    mdb__browser_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__STATE_VARIABLE_State_0_35, (MR_Integer) 5)));
#line 674 "browser_info.m"
    {
#line 674 "browser_info.m"
      MR_Word base;
#line 674 "browser_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 674 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_State_36 = base;
#line 674 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__browser_info__PParams_32));
#line 674 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__browser_info__BParams_33));
#line 674 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__browser_info__AParams_34));
#line 674 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__browser_info__V_39_39));
#line 674 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__browser_info__V_60_60));
#line 674 "browser_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__browser_info__V_61_61));
#line 674 "browser_info.m"
    }
#line 649 "browser_info.m"
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
#line 604 "browser_info.m"
  {
#line 604 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 608 "browser_info.m"
    *mdb__browser_info__State_2 = (MR_Word) &mdb__browser_info_scalar_common_5[0];
#line 604 "browser_info.m"
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
  MR_Word mdb__browser_info__Term_4,
#line 177 "browser_info.m"
  MR_Word mdb__browser_info__Dirs_5,
#line 177 "browser_info.m"
  MR_Word * mdb__browser_info__TermPath_6)
#line 177 "browser_info.m"
{
#line 1267 "browser_info.m"
  {
#line 1267 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 1267 "browser_info.m"
    if ((mdb__browser_info__Dirs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1267 "browser_info.m"
      *mdb__browser_info__TermPath_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1267 "browser_info.m"
    else
#line 1267 "browser_info.m"
      {
#line 1267 "browser_info.m"
        MR_Word mdb__browser_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__Dirs_5, (MR_Integer) 1)));
#line 1267 "browser_info.m"
        MR_Word mdb__browser_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__Dirs_5, (MR_Integer) 0)));

#line 1267 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__V_27_27)) == (MR_mktag((MR_Integer) 1))))
#line 1280 "browser_info.m"
          {
#line 1280 "browser_info.m"
            MR_String mdb__browser_info__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__V_27_27, (MR_Integer) 0)));
#line 1280 "browser_info.m"
            MR_Integer mdb__browser_info__N_22;
#line 1280 "browser_info.m"
            MR_Word mdb__browser_info__TermPathTail_25;
#line 1281 "browser_info.m"
            MR_Integer mdb__browser_info__Pos_12;
#line 1281 "browser_info.m"
            MR_Word mdb__browser_info__Subterm_21;

#line 1282 "browser_info.m"
            {
#line 1282 "browser_info.m"
              mdb__browser_info__succeeded = mdb__term_rep__field_pos_3_p_0(mdb__browser_info__Name_11, mdb__browser_info__Term_4, &mdb__browser_info__Pos_12);
            }
#line 1282 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1283 "browser_info.m"
              {
#line 1283 "browser_info.m"
                mdb__browser_info__succeeded = mdb__term_rep__argument_3_p_0(mdb__browser_info__Term_4, mdb__browser_info__Pos_12, &mdb__browser_info__Subterm_21);
              }
#line 1281 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1285 "browser_info.m"
              {
#line 1285 "browser_info.m"
                {
#line 1285 "browser_info.m"
                  mdb__browser_info__convert_dirs_to_term_path_3_p_0(mdb__browser_info__Subterm_21, mdb__browser_info__V_26_26, &mdb__browser_info__TermPathTail_25);
                }
#line 1286 "browser_info.m"
                mdb__browser_info__N_22 = mdb__browser_info__Pos_12;
#line 1285 "browser_info.m"
              }
#line 1281 "browser_info.m"
            else
#line 1288 "browser_info.m"
              {
#line 1288 "browser_info.m"
                {
#line 1288 "browser_info.m"
                  mercury__require__unexpected_3_p_0((MR_String) "mdb.browser_info", (MR_String) "predicate \140mdb.browser_info.convert_dirs_to_term_path\'/3", (MR_String) "invalid field name");
#line 1288 "browser_info.m"
                  return;
                }
#line 1288 "browser_info.m"
              }
#line 1290 "browser_info.m"
            {
#line 1290 "browser_info.m"
              MR_Word base;
#line 1290 "browser_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "browser_info.m"
              *mdb__browser_info__TermPath_6 = base;
#line 1290 "browser_info.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browser_info__N_22));
#line 1290 "browser_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browser_info__TermPathTail_25));
#line 1290 "browser_info.m"
            }
#line 1280 "browser_info.m"
          }
#line 1267 "browser_info.m"
        else
#line 1270 "browser_info.m"
          {
#line 1270 "browser_info.m"
            MR_Integer mdb__browser_info__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_27_27, (MR_Integer) 0)));
#line 1270 "browser_info.m"
            MR_Word mdb__browser_info__TermPathTail_10;
#line 1271 "browser_info.m"
            MR_Word mdb__browser_info__Subterm_9;

#line 1272 "browser_info.m"
            {
#line 1272 "browser_info.m"
              mdb__browser_info__succeeded = mdb__term_rep__argument_3_p_0(mdb__browser_info__Term_4, mdb__browser_info__N_7, &mdb__browser_info__Subterm_9);
            }
#line 1271 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 1274 "browser_info.m"
              {
#line 1274 "browser_info.m"
                mdb__browser_info__convert_dirs_to_term_path_3_p_0(mdb__browser_info__Subterm_9, mdb__browser_info__V_26_26, &mdb__browser_info__TermPathTail_10);
              }
#line 1271 "browser_info.m"
            else
#line 1276 "browser_info.m"
              {
#line 1276 "browser_info.m"
                {
#line 1276 "browser_info.m"
                  mercury__require__unexpected_3_p_0((MR_String) "mdb.browser_info", (MR_String) "predicate \140mdb.browser_info.convert_dirs_to_term_path\'/3", (MR_String) "invalid argument");
#line 1276 "browser_info.m"
                  return;
                }
#line 1276 "browser_info.m"
              }
#line 1278 "browser_info.m"
            {
#line 1278 "browser_info.m"
              MR_Word base;
#line 1278 "browser_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "browser_info.m"
              *mdb__browser_info__TermPath_6 = base;
#line 1278 "browser_info.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__browser_info__N_7));
#line 1278 "browser_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__browser_info__TermPathTail_10));
#line 1278 "browser_info.m"
            }
#line 1270 "browser_info.m"
          }
#line 1267 "browser_info.m"
      }
#line 1267 "browser_info.m"
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
#line 831 "browser_info.m"
  {
#line 831 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 831 "browser_info.m"
    MR_Integer mdb__browser_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 3)));
#line 831 "browser_info.m"
    MR_Word mdb__browser_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 0)));
#line 831 "browser_info.m"
    MR_Word mdb__browser_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 1)));
#line 831 "browser_info.m"
    MR_Word mdb__browser_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 2)));
#line 831 "browser_info.m"
    MR_Word mdb__browser_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 4)));
#line 831 "browser_info.m"
    MR_Word mdb__browser_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__State_3, (MR_Integer) 5)));

#line 831 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 831 "browser_info.m"
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
#line 557 "browser_info.m"
  {
#line 557 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 557 "browser_info.m"
    MR_Word mdb__browser_info__CallerParams_9;
#line 557 "browser_info.m"
    MR_Word mdb__browser_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 4)));
#line 557 "browser_info.m"
    MR_Word mdb__browser_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 2)));
#line 557 "browser_info.m"
    MR_Word mdb__browser_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 1)));
#line 557 "browser_info.m"
    MR_Word mdb__browser_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 0)));
#line 557 "browser_info.m"
    MR_Word mdb__browser_info__V_61_61;
#line 557 "browser_info.m"
    MR_Word mdb__browser_info__V_62_62;
#line 557 "browser_info.m"
    MR_Word mdb__browser_info__V_63_63;
#line 557 "browser_info.m"
    MR_Word mdb__browser_info__V_64_64;
#line 558 "browser_info.m"
    MR_Word mdb__browser_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 0)));
#line 558 "browser_info.m"
    MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 1)));
#line 558 "browser_info.m"
    MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 2)));
#line 558 "browser_info.m"
    MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 3)));
#line 558 "browser_info.m"
    MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 5)));
#line 558 "browser_info.m"
    MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 6)));
#line 819 "browser_info.m"
    MR_Word mdb__browser_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 5)));
#line 819 "browser_info.m"
    MR_Word mdb__browser_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 4)));
#line 819 "browser_info.m"
    MR_Integer mdb__browser_info__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_10_10, (MR_Integer) 3)));
#line 826 "browser_info.m"
    MR_Word mdb__browser_info__V_65_65;

#line 819 "browser_info.m"
#line 819 "browser_info.m"
    switch (mdb__browser_info__Caller_6) {
#line 819 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 819 "browser_info.m"
      case (MR_Integer) 1:
#line 820 "browser_info.m"
        mdb__browser_info__CallerParams_9 = mdb__browser_info__V_39_39;
#line 819 "browser_info.m"
        break;
#line 819 "browser_info.m"
      case (MR_Integer) 0:
#line 819 "browser_info.m"
        mdb__browser_info__CallerParams_9 = mdb__browser_info__V_40_40;
#line 819 "browser_info.m"
        break;
#line 819 "browser_info.m"
      case (MR_Integer) 2:
#line 821 "browser_info.m"
        mdb__browser_info__CallerParams_9 = mdb__browser_info__V_38_38;
#line 819 "browser_info.m"
        break;
#line 819 "browser_info.m"
    }
#line 826 "browser_info.m"
    mdb__browser_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 0)));
#line 826 "browser_info.m"
    mdb__browser_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 1)));
#line 826 "browser_info.m"
    mdb__browser_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 2)));
#line 826 "browser_info.m"
    mdb__browser_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 3)));
#line 826 "browser_info.m"
    mdb__browser_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__CallerParams_9, (MR_Integer) 4)));
#line 826 "browser_info.m"
#line 826 "browser_info.m"
    switch (mdb__browser_info__Format_7) {
#line 826 "browser_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 826 "browser_info.m"
      case (MR_Integer) 0:
#line 826 "browser_info.m"
        *mdb__browser_info__Params_8 = mdb__browser_info__V_64_64;
#line 826 "browser_info.m"
        break;
#line 826 "browser_info.m"
      case (MR_Integer) 3:
#line 829 "browser_info.m"
        *mdb__browser_info__Params_8 = mdb__browser_info__V_61_61;
#line 826 "browser_info.m"
        break;
#line 826 "browser_info.m"
      case (MR_Integer) 1:
#line 827 "browser_info.m"
        *mdb__browser_info__Params_8 = mdb__browser_info__V_63_63;
#line 826 "browser_info.m"
        break;
#line 826 "browser_info.m"
      case (MR_Integer) 2:
#line 828 "browser_info.m"
        *mdb__browser_info__Params_8 = mdb__browser_info__V_62_62;
#line 826 "browser_info.m"
        break;
#line 826 "browser_info.m"
    }
#line 557 "browser_info.m"
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
#line 544 "browser_info.m"
  {
#line 544 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;

#line 544 "browser_info.m"
    if ((mdb__browser_info__MaybeFormat_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "browser_info.m"
      {
#line 546 "browser_info.m"
        MR_Word mdb__browser_info__MdbFormatOption_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 3)));
#line 546 "browser_info.m"
        MR_Word mdb__browser_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 4)));
#line 547 "browser_info.m"
        MR_Word mdb__browser_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 0)));
#line 547 "browser_info.m"
        MR_Word mdb__browser_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 1)));
#line 547 "browser_info.m"
        MR_Word mdb__browser_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 2)));
#line 547 "browser_info.m"
        MR_Word mdb__browser_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 5)));
#line 547 "browser_info.m"
        MR_Word mdb__browser_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Info_5, (MR_Integer) 6)));

#line 550 "browser_info.m"
        if ((mdb__browser_info__MdbFormatOption_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "browser_info.m"
          {
#line 551 "browser_info.m"
            MR_Word mdb__browser_info__Params_10;
#line 551 "browser_info.m"
            MR_Word mdb__browser_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 2)));
#line 551 "browser_info.m"
            MR_Word mdb__browser_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 1)));
#line 551 "browser_info.m"
            MR_Word mdb__browser_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 0)));
#line 819 "browser_info.m"
            MR_Word mdb__browser_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 5)));
#line 819 "browser_info.m"
            MR_Word mdb__browser_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 4)));
#line 819 "browser_info.m"
            MR_Integer mdb__browser_info__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__V_15_15, (MR_Integer) 3)));
#line 553 "browser_info.m"
            MR_Word mdb__browser_info__V_24_24;
#line 553 "browser_info.m"
            MR_Word mdb__browser_info__V_25_25;
#line 553 "browser_info.m"
            MR_Word mdb__browser_info__V_26_26;
#line 553 "browser_info.m"
            MR_Word mdb__browser_info__V_27_27;

#line 819 "browser_info.m"
#line 819 "browser_info.m"
            switch (mdb__browser_info__Caller_6) {
#line 819 "browser_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 819 "browser_info.m"
              case (MR_Integer) 1:
#line 820 "browser_info.m"
                mdb__browser_info__Params_10 = mdb__browser_info__V_50_50;
#line 819 "browser_info.m"
                break;
#line 819 "browser_info.m"
              case (MR_Integer) 0:
#line 819 "browser_info.m"
                mdb__browser_info__Params_10 = mdb__browser_info__V_51_51;
#line 819 "browser_info.m"
                break;
#line 819 "browser_info.m"
              case (MR_Integer) 2:
#line 821 "browser_info.m"
                mdb__browser_info__Params_10 = mdb__browser_info__V_49_49;
#line 819 "browser_info.m"
                break;
#line 819 "browser_info.m"
            }
#line 553 "browser_info.m"
            *mdb__browser_info__Format_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 0)));
#line 553 "browser_info.m"
            mdb__browser_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 1)));
#line 553 "browser_info.m"
            mdb__browser_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 2)));
#line 553 "browser_info.m"
            mdb__browser_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 3)));
#line 553 "browser_info.m"
            mdb__browser_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__browser_info__Params_10, (MR_Integer) 4)));
#line 551 "browser_info.m"
          }
#line 550 "browser_info.m"
        else
#line 549 "browser_info.m"
          *mdb__browser_info__Format_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__MdbFormatOption_9, (MR_Integer) 0)));
#line 546 "browser_info.m"
      }
#line 544 "browser_info.m"
    else
#line 544 "browser_info.m"
      *mdb__browser_info__Format_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeFormat_7, (MR_Integer) 0)));
#line 544 "browser_info.m"
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
#line 538 "browser_info.m"
  {
#line 538 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 538 "browser_info.m"
    MR_Word mdb__browser_info__HeadVar__6_6;

#line 539 "browser_info.m"
    {
#line 539 "browser_info.m"
      mdb__browser_info__HeadVar__6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 539 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 0) = ((MR_Box) (mdb__browser_info__BrowserTerm_7));
#line 539 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 539 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 2) = ((MR_Box) (mdb__browser_info__CallerType_8));
#line 539 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 3) = ((MR_Box) (mdb__browser_info__MaybeFormat_9));
#line 539 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 4) = ((MR_Box) (mdb__browser_info__State_11));
#line 539 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 539 "browser_info.m"
      MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__6_6, 6) = ((MR_Box) (mdb__browser_info__MaybeModeFunc_10));
#line 539 "browser_info.m"
    }
#line 538 "browser_info.m"
    return mdb__browser_info__HeadVar__6_6;
#line 538 "browser_info.m"
  }
#line 160 "browser_info.m"
}

#line 115 "browser_info.m"
MR_Word MR_CALL 
mdb__browser_info__down_to_up_down_dirs_1_f_0(
#line 115 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 115 "browser_info.m"
{
#line 532 "browser_info.m"
  {
#line 532 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 532 "browser_info.m"
    MR_Word mdb__browser_info__HeadVar__2_2;

#line 532 "browser_info.m"
    if ((mdb__browser_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "browser_info.m"
      mdb__browser_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "browser_info.m"
    else
#line 533 "browser_info.m"
      {
#line 533 "browser_info.m"
        MR_Word mdb__browser_info__DownDir_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));
#line 533 "browser_info.m"
        MR_Word mdb__browser_info__DownDirs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 1)));
#line 533 "browser_info.m"
        MR_Word mdb__browser_info__V_5_5;
#line 533 "browser_info.m"
        MR_Word mdb__browser_info__V_6_6;

#line 529 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__DownDir_3)) == (MR_mktag((MR_Integer) 1))))
#line 530 "browser_info.m"
          {
#line 530 "browser_info.m"
            MR_String mdb__browser_info__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__DownDir_3, (MR_Integer) 0)));

#line 530 "browser_info.m"
            {
#line 530 "browser_info.m"
              mdb__browser_info__V_5_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 530 "browser_info.m"
              MR_hl_field(MR_mktag(2), mdb__browser_info__V_5_5, 0) = ((MR_Box) (mdb__browser_info__Name_8));
#line 530 "browser_info.m"
            }
#line 530 "browser_info.m"
          }
#line 529 "browser_info.m"
        else
#line 529 "browser_info.m"
          {
#line 529 "browser_info.m"
            MR_Integer mdb__browser_info__Num_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__DownDir_3, (MR_Integer) 0)));

#line 529 "browser_info.m"
            {
#line 529 "browser_info.m"
              mdb__browser_info__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 529 "browser_info.m"
              MR_hl_field(MR_mktag(1), mdb__browser_info__V_5_5, 0) = ((MR_Box) (mdb__browser_info__Num_7));
#line 529 "browser_info.m"
            }
#line 529 "browser_info.m"
          }
#line 534 "browser_info.m"
        {
#line 534 "browser_info.m"
          mdb__browser_info__V_6_6 = mdb__browser_info__down_to_up_down_dirs_1_f_0(mdb__browser_info__DownDirs_4);
        }
#line 534 "browser_info.m"
        {
#line 534 "browser_info.m"
          mdb__browser_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "browser_info.m"
          MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, 0) = ((MR_Box) (mdb__browser_info__V_5_5));
#line 534 "browser_info.m"
          MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, 1) = ((MR_Box) (mdb__browser_info__V_6_6));
#line 534 "browser_info.m"
        }
#line 533 "browser_info.m"
      }
#line 532 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 532 "browser_info.m"
  }
#line 115 "browser_info.m"
}

#line 114 "browser_info.m"
MR_Word MR_CALL 
mdb__browser_info__down_to_up_down_dir_1_f_0(
#line 114 "browser_info.m"
  MR_Word mdb__browser_info__HeadVar__1_1)
#line 114 "browser_info.m"
{
#line 529 "browser_info.m"
  {
#line 529 "browser_info.m"
    MR_bool mdb__browser_info__succeeded;
#line 529 "browser_info.m"
    MR_Word mdb__browser_info__HeadVar__2_2;

#line 529 "browser_info.m"
    if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 530 "browser_info.m"
      {
#line 530 "browser_info.m"
        MR_String mdb__browser_info__Name_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));

#line 530 "browser_info.m"
        {
#line 530 "browser_info.m"
          mdb__browser_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 530 "browser_info.m"
          MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, 0) = ((MR_Box) (mdb__browser_info__Name_4));
#line 530 "browser_info.m"
        }
#line 530 "browser_info.m"
      }
#line 529 "browser_info.m"
    else
#line 529 "browser_info.m"
      {
#line 529 "browser_info.m"
        MR_Integer mdb__browser_info__Num_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)));

#line 529 "browser_info.m"
        {
#line 529 "browser_info.m"
          mdb__browser_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 529 "browser_info.m"
          MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, 0) = ((MR_Box) (mdb__browser_info__Num_3));
#line 529 "browser_info.m"
        }
#line 529 "browser_info.m"
      }
#line 529 "browser_info.m"
    return mdb__browser_info__HeadVar__2_2;
#line 529 "browser_info.m"
  }
#line 114 "browser_info.m"
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
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_maybe_track_subterm_1);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_param_cmd_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0);
}

void mercury__mdb__browser_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.browser_info. */
