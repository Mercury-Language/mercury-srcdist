/*
** Automatically generated from `browser_info.m'
** by the Mercury compiler,
** version rotd-2015-02-04
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




#line 82 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0;

#line 85 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1;

#line 88 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2;

#line 91 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browse_caller_type_0[3];

#line 94 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browse_caller_type_0[3];

#line 97 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browse_caller_type_0[3];

#line 100 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_db_0[1];

#line 103 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct2 mdb__browser_info__tree234__ti_tree234_2io__type_ctor_info_stream_id_0io__type_ctor_info_stream_info_0;

#line 106 "mdb.browser_info.c"
static const MR_NotagFunctorDesc mdb__browser_info__mdb__browser_info__notag_functor_desc_browser_db_0;

#line 109 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0;

#line 112 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0;

#line 115 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_dir_0;

#line 118 "mdb.browser_info.c"
static const MR_VA_TypeInfo_Struct2 mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0;

#line 121 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0;

#line 124 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_info_0_0[7];

#line 127 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_info_0_0[7];

#line 130 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0;

#line 133 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_info_0_0[1];

#line 136 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_info_0[1];

#line 139 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_info_0[1];

#line 142 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_info_0[1];

#line 145 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 148 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_persistent_state_0_0[6];

#line 151 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_persistent_state_0_0[6];

#line 154 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0;

#line 157 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0[1];

#line 160 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_persistent_state_0[1];

#line 163 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_persistent_state_0[1];

#line 166 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_persistent_state_0[1];

#line 169 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0;

#line 172 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1;

#line 175 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2;

#line 178 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3;

#line 181 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browser_term_mode_0[4];

#line 184 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browser_term_mode_0[4];

#line 187 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_term_mode_0[4];

#line 190 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_caller_params_0_0[5];

#line 193 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_caller_params_0_0[5];

#line 196 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0;

#line 199 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_caller_params_0_0[1];

#line 202 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_caller_params_0[1];

#line 205 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_caller_params_0[1];

#line 208 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_caller_params_0[1];

#line 211 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0;

#line 214 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1;

#line 217 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_debugger_0[2];

#line 220 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_debugger_0[2];

#line 223 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_debugger_0[2];

#line 226 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_0;

#line 229 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_dir_0_1[1];

#line 232 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_1;

#line 235 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_dir_0_2[1];

#line 238 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_2;

#line 241 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_0[1];

#line 244 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_1[1];

#line 247 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_2[1];

#line 250 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_dir_0[3];

#line 253 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_dir_0[3];

#line 256 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_dir_0[3];

#line 259 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_format_params_0_0[4];

#line 262 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_format_params_0_0[4];

#line 265 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0;

#line 268 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_format_params_0_0[1];

#line 271 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_format_params_0[1];

#line 274 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_format_params_0[1];

#line 277 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_format_params_0[1];

#line 280 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0;

#line 283 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1;

#line 286 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_how_track_subterm_0[2];

#line 289 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_how_track_subterm_0[2];

#line 292 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_how_track_subterm_0[2];

#line 295 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0;

#line 298 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_maybe_track_subterm_1_1[3];

#line 301 "mdb.browser_info.c"
static const MR_DuArgLocn mdb__browser_info__mdb__browser_info__field_locns_maybe_track_subterm_1_1[3];

#line 304 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1;

#line 307 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_0[1];

#line 310 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_1[1];

#line 313 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_maybe_track_subterm_1[2];

#line 316 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_maybe_track_subterm_1[2];

#line 319 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_maybe_track_subterm_1[2];

#line 322 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0;

#line 325 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_0[2];

#line 328 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0;

#line 331 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_1[2];

#line 334 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1;

#line 337 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_2[1];

#line 340 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2;

#line 343 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3;

#line 346 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_0[1];

#line 349 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_1[1];

#line 352 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_2[1];

#line 355 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_3[1];

#line 358 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_param_cmd_0[4];

#line 361 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_param_cmd_0[4];

#line 364 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_param_cmd_0[4];

#line 367 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0;

#line 370 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1;

#line 373 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2;

#line 376 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3;

#line 379 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_portray_format_0[4];

#line 382 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_portray_format_0[4];

#line 385 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_portray_format_0[4];

#line 388 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_0[1];

#line 391 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0;

#line 394 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_1[1];

#line 397 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1;

#line 400 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_2[1];

#line 403 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2;

#line 406 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_3[1];

#line 409 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3;

#line 412 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_4[1];

#line 415 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4;

#line 418 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_0[1];

#line 421 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_1[1];

#line 424 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_2[1];

#line 427 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_3[2];

#line 430 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_setting_0[4];

#line 433 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_setting_0[5];

#line 436 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_setting_0[5];

#line 439 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0;

#line 442 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1;

#line 445 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_should_assert_invalid_0[2];

#line 448 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_should_assert_invalid_0[2];

#line 451 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_should_assert_invalid_0[2];

#line 454 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_0[1];

#line 457 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0;

#line 460 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_1[1];

#line 463 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1;

#line 466 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2;

#line 469 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3;

#line 472 "mdb.browser_info.c"
static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4;

#line 475 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_0[3];

#line 478 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_1[1];

#line 481 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_2[1];

#line 484 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_term_browser_response_0[3];

#line 487 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_term_browser_response_0[5];

#line 490 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_term_browser_response_0[5];

#line 493 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browse_caller_type_0_0_10001(
#line 496 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 498 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 501 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browse_caller_type_0_0_10001(
#line 504 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 506 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 508 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 511 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_db_0_0_10001(
#line 514 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 516 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 519 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_db_0_0_10001(
#line 522 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 524 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 526 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 529 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_info_0_0_10001(
#line 532 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 534 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 537 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_info_0_0_10001(
#line 540 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 542 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 544 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 547 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_mode_func_0_0_10001(
#line 550 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 552 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 555 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_mode_func_0_0_10001(
#line 558 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 560 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 562 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 565 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_persistent_state_0_0_10001(
#line 568 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 570 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 573 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_persistent_state_0_0_10001(
#line 576 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 578 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 580 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 583 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_term_mode_0_0_10001(
#line 586 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 588 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 591 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_term_mode_0_0_10001(
#line 594 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 596 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 598 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 601 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0_10001(
#line 604 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 606 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 609 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0_10001(
#line 612 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 614 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 616 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 619 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____debugger_0_0_10001(
#line 622 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 624 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 627 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____debugger_0_0_10001(
#line 630 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 632 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 634 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 637 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____dir_0_0_10001(
#line 640 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 642 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 645 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____dir_0_0_10001(
#line 648 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 650 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 652 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 655 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____format_params_0_0_10001(
#line 658 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 660 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 663 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____format_params_0_0_10001(
#line 666 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 668 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 670 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 673 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____how_track_subterm_0_0_10001(
#line 676 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 678 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 681 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____how_track_subterm_0_0_10001(
#line 684 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 686 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 688 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 691 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____maybe_track_subterm_1_0_10001(
#line 694 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 696 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 698 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 701 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____maybe_track_subterm_1_0_10001(
#line 704 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 706 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_2,
#line 708 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 710 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_4);

#line 713 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____param_cmd_0_0_10001(
#line 716 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 718 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 721 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____param_cmd_0_0_10001(
#line 724 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 726 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 728 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 731 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____portray_format_0_0_10001(
#line 734 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 736 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 739 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____portray_format_0_0_10001(
#line 742 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 744 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 746 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 749 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____setting_0_0_10001(
#line 752 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 754 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 757 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____setting_0_0_10001(
#line 760 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 762 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 764 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 767 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____should_assert_invalid_0_0_10001(
#line 770 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 772 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 775 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____should_assert_invalid_0_0_10001(
#line 778 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 780 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 782 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 785 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____term_browser_response_0_0_10001(
#line 788 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 790 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2);

#line 793 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____term_browser_response_0_0_10001(
#line 796 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 798 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 800 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3);

#line 803 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
#line 806 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 808 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 810 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 812 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 814 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4);

#line 817 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
#line 820 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 822 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 824 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 826 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 828 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4);

#line 831 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
#line 834 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 836 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 838 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_2,
#line 840 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 842 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4);

#line 845 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
#line 848 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 850 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 852 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 854 "mdb.browser_info.c"
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




static /* final */ const MR_Box mdb__browser_info_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_stream_id_0)),
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



#include "mdb.browser_info.mh"
#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"

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


#line 1623 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0 = {
  (MR_String) "print",
  (MR_Integer) 0
};

#line 1629 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1 = {
  (MR_String) "browse",
  (MR_Integer) 1
};

#line 1635 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2 = {
  (MR_String) "print_all",
  (MR_Integer) 2
};

#line 1641 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browse_caller_type_0[3] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2
};

#line 1648 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browse_caller_type_0[3] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2
};

#line 1655 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browse_caller_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1662 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browse_caller_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____browse_caller_type_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browse_caller_type_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browse_caller_type",
  {
    mdb__browser_info__mdb__browser_info__enum_name_ordered_browse_caller_type_0
  },
  {
    mdb__browser_info__mdb__browser_info__enum_value_ordered_browse_caller_type_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_browse_caller_type_0
};

#line 1683 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_db_0[1] = {
  (MR_Integer) 0
};

#line 1688 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct2 mdb__browser_info__tree234__ti_tree234_2io__type_ctor_info_stream_id_0io__type_ctor_info_stream_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_stream_id_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_stream_info_0
  }
};

#line 1697 "mdb.browser_info.c"
static const MR_NotagFunctorDesc mdb__browser_info__mdb__browser_info__notag_functor_desc_browser_db_0 = {
  (MR_String) "browser_db",
  (MR_PseudoTypeInfo) &mdb__browser_info__tree234__ti_tree234_2io__type_ctor_info_stream_id_0io__type_ctor_info_stream_info_0,
  (MR_String) "browser_stream_db"
};

#line 1704 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browser_db_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__browser_info____Unify____browser_db_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browser_db_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browser_db",
  {
    &mdb__browser_info__mdb__browser_info__notag_functor_desc_browser_db_0
  },
  {
    &mdb__browser_info__mdb__browser_info__notag_functor_desc_browser_db_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_browser_db_0
};

#line 1725 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0
  }
};

#line 1733 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0
  }
};

#line 1741 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_dir_0 = {
  &mdb__browser_info__mdb__browser_info__type_ctor_info_maybe_track_subterm_1,
  {
    (MR_TypeInfo) &mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0
  }
};

#line 1749 "mdb.browser_info.c"
static const MR_VA_TypeInfo_Struct2 mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0,
    (MR_TypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0
  }
};

#line 1759 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0
  }
};

#line 1767 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_info_0_0[7] = {
  (MR_PseudoTypeInfo) &mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_dir_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browse_caller_type_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_dir_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0
};

#line 1778 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_info_0_0[7] = {
  (MR_String) "term",
  (MR_String) "dirs",
  (MR_String) "caller_type",
  (MR_String) "format",
  (MR_String) "state",
  (MR_String) "maybe_track",
  (MR_String) "maybe_mode_func"
};

#line 1789 "mdb.browser_info.c"
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

#line 1804 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_info_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0
};

#line 1809 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_info_0_0
  }
};

#line 1818 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_info_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0
};

#line 1823 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_info_0[1] = {
  (MR_Integer) 0
};

#line 1828 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browser_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____browser_info_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browser_info_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browser_info",
  {
    mdb__browser_info__mdb__browser_info__du_name_ordered_browser_info_0
  },
  {
    mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_info_0
  },
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
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1870 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1878 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_persistent_state_0_0[6] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 1888 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_persistent_state_0_0[6] = {
  (MR_String) "print_params",
  (MR_String) "browse_params",
  (MR_String) "print_all_params",
  (MR_String) "num_printed_io_actions",
  (MR_String) "xml_browser_cmd",
  (MR_String) "xml_tmp_filename"
};

#line 1898 "mdb.browser_info.c"
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

#line 1913 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0
};

#line 1918 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_persistent_state_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0
  }
};

#line 1927 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_persistent_state_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0
};

#line 1932 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_persistent_state_0[1] = {
  (MR_Integer) 0
};

#line 1937 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____browser_persistent_state_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browser_persistent_state_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browser_persistent_state",
  {
    mdb__browser_info__mdb__browser_info__du_name_ordered_browser_persistent_state_0
  },
  {
    mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_persistent_state_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_browser_persistent_state_0
};

#line 1958 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0 = {
  (MR_String) "input",
  (MR_Integer) 0
};

#line 1964 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1 = {
  (MR_String) "output",
  (MR_Integer) 1
};

#line 1970 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2 = {
  (MR_String) "unbound",
  (MR_Integer) 2
};

#line 1976 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3 = {
  (MR_String) "not_applicable",
  (MR_Integer) 3
};

#line 1982 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browser_term_mode_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3
};

#line 1990 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browser_term_mode_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2
};

#line 1998 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_term_mode_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 2006 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____browser_term_mode_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browser_term_mode_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browser_term_mode",
  {
    mdb__browser_info__mdb__browser_info__enum_name_ordered_browser_term_mode_0
  },
  {
    mdb__browser_info__mdb__browser_info__enum_value_ordered_browser_term_mode_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_browser_term_mode_0
};

#line 2027 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_caller_params_0_0[5] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0
};

#line 2036 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_caller_params_0_0[5] = {
  (MR_String) "default_format",
  (MR_String) "flat_params",
  (MR_String) "raw_pretty_params",
  (MR_String) "verbose_params",
  (MR_String) "pretty_params"
};

#line 2045 "mdb.browser_info.c"
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

#line 2060 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_caller_params_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0
};

#line 2065 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_caller_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_caller_params_0_0
  }
};

#line 2074 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_caller_params_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0
};

#line 2079 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_caller_params_0[1] = {
  (MR_Integer) 0
};

#line 2084 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____caller_params_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____caller_params_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "caller_params",
  {
    mdb__browser_info__mdb__browser_info__du_name_ordered_caller_params_0
  },
  {
    mdb__browser_info__mdb__browser_info__du_ptag_ordered_caller_params_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_caller_params_0
};

#line 2105 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0 = {
  (MR_String) "debugger_internal",
  (MR_Integer) 0
};

#line 2111 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1 = {
  (MR_String) "debugger_external",
  (MR_Integer) 1
};

#line 2117 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_debugger_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1
};

#line 2123 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_debugger_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0
};

#line 2129 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_debugger_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2135 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____debugger_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____debugger_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "debugger",
  {
    mdb__browser_info__mdb__browser_info__enum_name_ordered_debugger_0
  },
  {
    mdb__browser_info__mdb__browser_info__enum_value_ordered_debugger_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_debugger_0
};

#line 2156 "mdb.browser_info.c"
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

#line 2171 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_dir_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2176 "mdb.browser_info.c"
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

#line 2191 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_dir_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2196 "mdb.browser_info.c"
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

#line 2211 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_0
};

#line 2216 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_1
};

#line 2221 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_dir_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_2
};

#line 2226 "mdb.browser_info.c"
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

#line 2245 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_dir_0[3] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_dir_0_0
};

#line 2252 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_dir_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2259 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_dir_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____dir_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____dir_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "dir",
  {
    mdb__browser_info__mdb__browser_info__du_name_ordered_dir_0
  },
  {
    mdb__browser_info__mdb__browser_info__du_ptag_ordered_dir_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_dir_0
};

#line 2280 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_format_params_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2288 "mdb.browser_info.c"
static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_format_params_0_0[4] = {
  (MR_String) "depth",
  (MR_String) "size",
  (MR_String) "width",
  (MR_String) "lines"
};

#line 2296 "mdb.browser_info.c"
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

#line 2311 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_format_params_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0
};

#line 2316 "mdb.browser_info.c"
static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_format_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_format_params_0_0
  }
};

#line 2325 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_format_params_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0
};

#line 2330 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_format_params_0[1] = {
  (MR_Integer) 0
};

#line 2335 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____format_params_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____format_params_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "format_params",
  {
    mdb__browser_info__mdb__browser_info__du_name_ordered_format_params_0
  },
  {
    mdb__browser_info__mdb__browser_info__du_ptag_ordered_format_params_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_format_params_0
};

#line 2356 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0 = {
  (MR_String) "track_accurate",
  (MR_Integer) 0
};

#line 2362 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1 = {
  (MR_String) "track_fast",
  (MR_Integer) 1
};

#line 2368 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_how_track_subterm_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1
};

#line 2374 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_how_track_subterm_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1
};

#line 2380 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_how_track_subterm_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2386 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____how_track_subterm_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____how_track_subterm_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "how_track_subterm",
  {
    mdb__browser_info__mdb__browser_info__enum_name_ordered_how_track_subterm_0
  },
  {
    mdb__browser_info__mdb__browser_info__enum_value_ordered_how_track_subterm_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_how_track_subterm_0
};

#line 2407 "mdb.browser_info.c"
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

#line 2422 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_maybe_track_subterm_1_1[3] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2429 "mdb.browser_info.c"
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

#line 2448 "mdb.browser_info.c"
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

#line 2463 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0
};

#line 2468 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1
};

#line 2473 "mdb.browser_info.c"
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

#line 2487 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_maybe_track_subterm_1[2] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1
};

#line 2493 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_maybe_track_subterm_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2499 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_maybe_track_subterm_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____maybe_track_subterm_1_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____maybe_track_subterm_1_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "maybe_track_subterm",
  {
    mdb__browser_info__mdb__browser_info__du_name_ordered_maybe_track_subterm_1
  },
  {
    mdb__browser_info__mdb__browser_info__du_ptag_ordered_maybe_track_subterm_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_maybe_track_subterm_1
};

#line 2520 "mdb.browser_info.c"
static const MR_FA_TypeInfo_Struct1 mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_TypeInfo) &mdb__parse__mdb__parse__type_ctor_info_setting_option_0
  }
};

#line 2528 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0
};

#line 2534 "mdb.browser_info.c"
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

#line 2549 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_1[2] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0
};

#line 2555 "mdb.browser_info.c"
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

#line 2570 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2575 "mdb.browser_info.c"
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

#line 2590 "mdb.browser_info.c"
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

#line 2605 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3
};

#line 2610 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0
};

#line 2615 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1
};

#line 2620 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_3[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2
};

#line 2625 "mdb.browser_info.c"
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

#line 2649 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_param_cmd_0[4] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3
};

#line 2657 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_param_cmd_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2665 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_param_cmd_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____param_cmd_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____param_cmd_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "param_cmd",
  {
    mdb__browser_info__mdb__browser_info__du_name_ordered_param_cmd_0
  },
  {
    mdb__browser_info__mdb__browser_info__du_ptag_ordered_param_cmd_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_param_cmd_0
};

#line 2686 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0 = {
  (MR_String) "flat",
  (MR_Integer) 0
};

#line 2692 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1 = {
  (MR_String) "raw_pretty",
  (MR_Integer) 1
};

#line 2698 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2 = {
  (MR_String) "verbose",
  (MR_Integer) 2
};

#line 2704 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3 = {
  (MR_String) "pretty",
  (MR_Integer) 3
};

#line 2710 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_portray_format_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3
};

#line 2718 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_portray_format_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2
};

#line 2726 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_portray_format_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 2734 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____portray_format_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____portray_format_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "portray_format",
  {
    mdb__browser_info__mdb__browser_info__enum_name_ordered_portray_format_0
  },
  {
    mdb__browser_info__mdb__browser_info__enum_value_ordered_portray_format_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_portray_format_0
};

#line 2755 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2760 "mdb.browser_info.c"
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

#line 2775 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2780 "mdb.browser_info.c"
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

#line 2795 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2800 "mdb.browser_info.c"
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

#line 2815 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2820 "mdb.browser_info.c"
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

#line 2835 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_4[1] = {
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0
};

#line 2840 "mdb.browser_info.c"
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

#line 2855 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0
};

#line 2860 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1
};

#line 2865 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2
};

#line 2870 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_3[2] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4
};

#line 2876 "mdb.browser_info.c"
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

#line 2900 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_setting_0[5] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2
};

#line 2909 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_setting_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2918 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____setting_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____setting_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "setting",
  {
    mdb__browser_info__mdb__browser_info__du_name_ordered_setting_0
  },
  {
    mdb__browser_info__mdb__browser_info__du_ptag_ordered_setting_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_setting_0
};

#line 2939 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0 = {
  (MR_String) "assert_invalid",
  (MR_Integer) 0
};

#line 2945 "mdb.browser_info.c"
static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1 = {
  (MR_String) "no_assert_invalid",
  (MR_Integer) 1
};

#line 2951 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_should_assert_invalid_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1
};

#line 2957 "mdb.browser_info.c"
static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_should_assert_invalid_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1
};

#line 2963 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_should_assert_invalid_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2969 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____should_assert_invalid_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____should_assert_invalid_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "should_assert_invalid",
  {
    mdb__browser_info__mdb__browser_info__enum_name_ordered_should_assert_invalid_0
  },
  {
    mdb__browser_info__mdb__browser_info__enum_value_ordered_should_assert_invalid_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_should_assert_invalid_0
};

#line 2990 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2995 "mdb.browser_info.c"
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

#line 3010 "mdb.browser_info.c"
static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3015 "mdb.browser_info.c"
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

#line 3030 "mdb.browser_info.c"
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

#line 3045 "mdb.browser_info.c"
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

#line 3060 "mdb.browser_info.c"
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

#line 3075 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_0[3] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4
};

#line 3082 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0
};

#line 3087 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1
};

#line 3092 "mdb.browser_info.c"
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

#line 3111 "mdb.browser_info.c"
static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_term_browser_response_0[5] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0
};

#line 3120 "mdb.browser_info.c"
static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_term_browser_response_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 3129 "mdb.browser_info.c"
const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____term_browser_response_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____term_browser_response_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "term_browser_response",
  {
    mdb__browser_info__mdb__browser_info__du_name_ordered_term_browser_response_0
  },
  {
    mdb__browser_info__mdb__browser_info__du_ptag_ordered_term_browser_response_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__browser_info__mdb__browser_info__functor_number_map_term_browser_response_0
};

#line 3150 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

#line 3160 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

#line 3170 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

#line 3180 "mdb.browser_info.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0_10001))
};

#line 3190 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browse_caller_type_0_0_10001(
#line 3193 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3195 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3197 "mdb.browser_info.c"
{
#line 3199 "mdb.browser_info.c"
  {
#line 3201 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3204 "mdb.browser_info.c"
    {
#line 3206 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browse_caller_type_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3209 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3211 "mdb.browser_info.c"
  }
#line 3213 "mdb.browser_info.c"
}

#line 3216 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browse_caller_type_0_0_10001(
#line 3219 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3221 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3223 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3225 "mdb.browser_info.c"
{
#line 3227 "mdb.browser_info.c"
  {
#line 3229 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3232 "mdb.browser_info.c"
    {
#line 3234 "mdb.browser_info.c"
      mdb__browser_info____Compare____browse_caller_type_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3237 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3239 "mdb.browser_info.c"
  }
#line 3241 "mdb.browser_info.c"
}

#line 3244 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_db_0_0_10001(
#line 3247 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3249 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3251 "mdb.browser_info.c"
{
#line 3253 "mdb.browser_info.c"
  {
#line 3255 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3258 "mdb.browser_info.c"
    {
#line 3260 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_db_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3263 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3265 "mdb.browser_info.c"
  }
#line 3267 "mdb.browser_info.c"
}

#line 3270 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_db_0_0_10001(
#line 3273 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3275 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3277 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3279 "mdb.browser_info.c"
{
#line 3281 "mdb.browser_info.c"
  {
#line 3283 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3286 "mdb.browser_info.c"
    {
#line 3288 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_db_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3291 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3293 "mdb.browser_info.c"
  }
#line 3295 "mdb.browser_info.c"
}

#line 3298 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_info_0_0_10001(
#line 3301 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3303 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3305 "mdb.browser_info.c"
{
#line 3307 "mdb.browser_info.c"
  {
#line 3309 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3312 "mdb.browser_info.c"
    {
#line 3314 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_info_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3317 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3319 "mdb.browser_info.c"
  }
#line 3321 "mdb.browser_info.c"
}

#line 3324 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_info_0_0_10001(
#line 3327 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3329 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3331 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3333 "mdb.browser_info.c"
{
#line 3335 "mdb.browser_info.c"
  {
#line 3337 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3340 "mdb.browser_info.c"
    {
#line 3342 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_info_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3345 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3347 "mdb.browser_info.c"
  }
#line 3349 "mdb.browser_info.c"
}

#line 3352 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_mode_func_0_0_10001(
#line 3355 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3357 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3359 "mdb.browser_info.c"
{
#line 3361 "mdb.browser_info.c"
  {
#line 3363 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3366 "mdb.browser_info.c"
    {
#line 3368 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_mode_func_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3371 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3373 "mdb.browser_info.c"
  }
#line 3375 "mdb.browser_info.c"
}

#line 3378 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_mode_func_0_0_10001(
#line 3381 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3383 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3385 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3387 "mdb.browser_info.c"
{
#line 3389 "mdb.browser_info.c"
  {
#line 3391 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3394 "mdb.browser_info.c"
    {
#line 3396 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_mode_func_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3399 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3401 "mdb.browser_info.c"
  }
#line 3403 "mdb.browser_info.c"
}

#line 3406 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_persistent_state_0_0_10001(
#line 3409 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3411 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3413 "mdb.browser_info.c"
{
#line 3415 "mdb.browser_info.c"
  {
#line 3417 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3420 "mdb.browser_info.c"
    {
#line 3422 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_persistent_state_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3425 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3427 "mdb.browser_info.c"
  }
#line 3429 "mdb.browser_info.c"
}

#line 3432 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_persistent_state_0_0_10001(
#line 3435 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3437 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3439 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3441 "mdb.browser_info.c"
{
#line 3443 "mdb.browser_info.c"
  {
#line 3445 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3448 "mdb.browser_info.c"
    {
#line 3450 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_persistent_state_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3453 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3455 "mdb.browser_info.c"
  }
#line 3457 "mdb.browser_info.c"
}

#line 3460 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_term_mode_0_0_10001(
#line 3463 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3465 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3467 "mdb.browser_info.c"
{
#line 3469 "mdb.browser_info.c"
  {
#line 3471 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3474 "mdb.browser_info.c"
    {
#line 3476 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_term_mode_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3479 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3481 "mdb.browser_info.c"
  }
#line 3483 "mdb.browser_info.c"
}

#line 3486 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____browser_term_mode_0_0_10001(
#line 3489 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3491 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3493 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3495 "mdb.browser_info.c"
{
#line 3497 "mdb.browser_info.c"
  {
#line 3499 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3502 "mdb.browser_info.c"
    {
#line 3504 "mdb.browser_info.c"
      mdb__browser_info____Compare____browser_term_mode_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3507 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3509 "mdb.browser_info.c"
  }
#line 3511 "mdb.browser_info.c"
}

#line 3514 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0_10001(
#line 3517 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3519 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3521 "mdb.browser_info.c"
{
#line 3523 "mdb.browser_info.c"
  {
#line 3525 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3528 "mdb.browser_info.c"
    {
#line 3530 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____caller_params_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3533 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3535 "mdb.browser_info.c"
  }
#line 3537 "mdb.browser_info.c"
}

#line 3540 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0_10001(
#line 3543 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3545 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3547 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3549 "mdb.browser_info.c"
{
#line 3551 "mdb.browser_info.c"
  {
#line 3553 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3556 "mdb.browser_info.c"
    {
#line 3558 "mdb.browser_info.c"
      mdb__browser_info____Compare____caller_params_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3561 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3563 "mdb.browser_info.c"
  }
#line 3565 "mdb.browser_info.c"
}

#line 3568 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____debugger_0_0_10001(
#line 3571 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3573 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3575 "mdb.browser_info.c"
{
#line 3577 "mdb.browser_info.c"
  {
#line 3579 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3582 "mdb.browser_info.c"
    {
#line 3584 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____debugger_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3587 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3589 "mdb.browser_info.c"
  }
#line 3591 "mdb.browser_info.c"
}

#line 3594 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____debugger_0_0_10001(
#line 3597 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3599 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3601 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3603 "mdb.browser_info.c"
{
#line 3605 "mdb.browser_info.c"
  {
#line 3607 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3610 "mdb.browser_info.c"
    {
#line 3612 "mdb.browser_info.c"
      mdb__browser_info____Compare____debugger_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3615 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3617 "mdb.browser_info.c"
  }
#line 3619 "mdb.browser_info.c"
}

#line 3622 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____dir_0_0_10001(
#line 3625 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3627 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3629 "mdb.browser_info.c"
{
#line 3631 "mdb.browser_info.c"
  {
#line 3633 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3636 "mdb.browser_info.c"
    {
#line 3638 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____dir_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3641 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3643 "mdb.browser_info.c"
  }
#line 3645 "mdb.browser_info.c"
}

#line 3648 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____dir_0_0_10001(
#line 3651 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3653 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3655 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3657 "mdb.browser_info.c"
{
#line 3659 "mdb.browser_info.c"
  {
#line 3661 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3664 "mdb.browser_info.c"
    {
#line 3666 "mdb.browser_info.c"
      mdb__browser_info____Compare____dir_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3669 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3671 "mdb.browser_info.c"
  }
#line 3673 "mdb.browser_info.c"
}

#line 3676 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____format_params_0_0_10001(
#line 3679 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3681 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3683 "mdb.browser_info.c"
{
#line 3685 "mdb.browser_info.c"
  {
#line 3687 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3690 "mdb.browser_info.c"
    {
#line 3692 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3695 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3697 "mdb.browser_info.c"
  }
#line 3699 "mdb.browser_info.c"
}

#line 3702 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____format_params_0_0_10001(
#line 3705 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3707 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3709 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3711 "mdb.browser_info.c"
{
#line 3713 "mdb.browser_info.c"
  {
#line 3715 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3718 "mdb.browser_info.c"
    {
#line 3720 "mdb.browser_info.c"
      mdb__browser_info____Compare____format_params_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3723 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3725 "mdb.browser_info.c"
  }
#line 3727 "mdb.browser_info.c"
}

#line 3730 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____how_track_subterm_0_0_10001(
#line 3733 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3735 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3737 "mdb.browser_info.c"
{
#line 3739 "mdb.browser_info.c"
  {
#line 3741 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3744 "mdb.browser_info.c"
    {
#line 3746 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____how_track_subterm_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3749 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3751 "mdb.browser_info.c"
  }
#line 3753 "mdb.browser_info.c"
}

#line 3756 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____how_track_subterm_0_0_10001(
#line 3759 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3761 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3763 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3765 "mdb.browser_info.c"
{
#line 3767 "mdb.browser_info.c"
  {
#line 3769 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3772 "mdb.browser_info.c"
    {
#line 3774 "mdb.browser_info.c"
      mdb__browser_info____Compare____how_track_subterm_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3777 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3779 "mdb.browser_info.c"
  }
#line 3781 "mdb.browser_info.c"
}

#line 3784 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____maybe_track_subterm_1_0_10001(
#line 3787 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3789 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3791 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3793 "mdb.browser_info.c"
{
#line 3795 "mdb.browser_info.c"
  {
#line 3797 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3800 "mdb.browser_info.c"
    {
#line 3802 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____maybe_track_subterm_1_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3805 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3807 "mdb.browser_info.c"
  }
#line 3809 "mdb.browser_info.c"
}

#line 3812 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____maybe_track_subterm_1_0_10001(
#line 3815 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3817 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_2,
#line 3819 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 3821 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_4)
#line 3823 "mdb.browser_info.c"
{
#line 3825 "mdb.browser_info.c"
  {
#line 3827 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3830 "mdb.browser_info.c"
    {
#line 3832 "mdb.browser_info.c"
      mdb__browser_info____Compare____maybe_track_subterm_1_0(((MR_Word) mdb__browser_info__wrapper_arg_1), &mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_3), ((MR_Word) mdb__browser_info__wrapper_arg_4));
    }
#line 3835 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_2 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3837 "mdb.browser_info.c"
  }
#line 3839 "mdb.browser_info.c"
}

#line 3842 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____param_cmd_0_0_10001(
#line 3845 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3847 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3849 "mdb.browser_info.c"
{
#line 3851 "mdb.browser_info.c"
  {
#line 3853 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3856 "mdb.browser_info.c"
    {
#line 3858 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____param_cmd_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3861 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3863 "mdb.browser_info.c"
  }
#line 3865 "mdb.browser_info.c"
}

#line 3868 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____param_cmd_0_0_10001(
#line 3871 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3873 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3875 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3877 "mdb.browser_info.c"
{
#line 3879 "mdb.browser_info.c"
  {
#line 3881 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3884 "mdb.browser_info.c"
    {
#line 3886 "mdb.browser_info.c"
      mdb__browser_info____Compare____param_cmd_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3889 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3891 "mdb.browser_info.c"
  }
#line 3893 "mdb.browser_info.c"
}

#line 3896 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____portray_format_0_0_10001(
#line 3899 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3901 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3903 "mdb.browser_info.c"
{
#line 3905 "mdb.browser_info.c"
  {
#line 3907 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3910 "mdb.browser_info.c"
    {
#line 3912 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____portray_format_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3915 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3917 "mdb.browser_info.c"
  }
#line 3919 "mdb.browser_info.c"
}

#line 3922 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____portray_format_0_0_10001(
#line 3925 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3927 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3929 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3931 "mdb.browser_info.c"
{
#line 3933 "mdb.browser_info.c"
  {
#line 3935 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3938 "mdb.browser_info.c"
    {
#line 3940 "mdb.browser_info.c"
      mdb__browser_info____Compare____portray_format_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3943 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3945 "mdb.browser_info.c"
  }
#line 3947 "mdb.browser_info.c"
}

#line 3950 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____setting_0_0_10001(
#line 3953 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 3955 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 3957 "mdb.browser_info.c"
{
#line 3959 "mdb.browser_info.c"
  {
#line 3961 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 3964 "mdb.browser_info.c"
    {
#line 3966 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____setting_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 3969 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 3971 "mdb.browser_info.c"
  }
#line 3973 "mdb.browser_info.c"
}

#line 3976 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____setting_0_0_10001(
#line 3979 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 3981 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 3983 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 3985 "mdb.browser_info.c"
{
#line 3987 "mdb.browser_info.c"
  {
#line 3989 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 3992 "mdb.browser_info.c"
    {
#line 3994 "mdb.browser_info.c"
      mdb__browser_info____Compare____setting_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 3997 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 3999 "mdb.browser_info.c"
  }
#line 4001 "mdb.browser_info.c"
}

#line 4004 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____should_assert_invalid_0_0_10001(
#line 4007 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4009 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 4011 "mdb.browser_info.c"
{
#line 4013 "mdb.browser_info.c"
  {
#line 4015 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 4018 "mdb.browser_info.c"
    {
#line 4020 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____should_assert_invalid_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 4023 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 4025 "mdb.browser_info.c"
  }
#line 4027 "mdb.browser_info.c"
}

#line 4030 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____should_assert_invalid_0_0_10001(
#line 4033 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 4035 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4037 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 4039 "mdb.browser_info.c"
{
#line 4041 "mdb.browser_info.c"
  {
#line 4043 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 4046 "mdb.browser_info.c"
    {
#line 4048 "mdb.browser_info.c"
      mdb__browser_info____Compare____should_assert_invalid_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 4051 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 4053 "mdb.browser_info.c"
  }
#line 4055 "mdb.browser_info.c"
}

#line 4058 "mdb.browser_info.c"
static MR_bool MR_CALL 
mdb__browser_info____Unify____term_browser_response_0_0_10001(
#line 4061 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4063 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2)
#line 4065 "mdb.browser_info.c"
{
#line 4067 "mdb.browser_info.c"
  {
#line 4069 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded;

#line 4072 "mdb.browser_info.c"
    {
#line 4074 "mdb.browser_info.c"
      mdb__browser_info__succeeded = mdb__browser_info____Unify____term_browser_response_0_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Word) mdb__browser_info__wrapper_arg_2));
    }
#line 4077 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 4079 "mdb.browser_info.c"
  }
#line 4081 "mdb.browser_info.c"
}

#line 4084 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info____Compare____term_browser_response_0_0_10001(
#line 4087 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_1,
#line 4089 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4091 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3)
#line 4093 "mdb.browser_info.c"
{
#line 4095 "mdb.browser_info.c"
  {
#line 4097 "mdb.browser_info.c"
    MR_Word mdb__browser_info__conv0_HeadVar__1_1;

#line 4100 "mdb.browser_info.c"
    {
#line 4102 "mdb.browser_info.c"
      mdb__browser_info____Compare____term_browser_response_0_0(&mdb__browser_info__conv0_HeadVar__1_1, ((MR_Word) mdb__browser_info__wrapper_arg_2), ((MR_Word) mdb__browser_info__wrapper_arg_3));
    }
#line 4105 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_1 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__1_1));
#line 4107 "mdb.browser_info.c"
  }
#line 4109 "mdb.browser_info.c"
}

#line 4112 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
#line 4115 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4117 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4119 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4121 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 4123 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4)
#line 4125 "mdb.browser_info.c"
{
#line 4127 "mdb.browser_info.c"
  {
#line 4129 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;

#line 4132 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4134 "mdb.browser_info.c"
    {
#line 4136 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_Integer) mdb__browser_info__wrapper_arg_2));
    }
#line 4139 "mdb.browser_info.c"
  }
#line 4141 "mdb.browser_info.c"
}

#line 4144 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
#line 4147 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4149 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4151 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4153 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 4155 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4)
#line 4157 "mdb.browser_info.c"
{
#line 4159 "mdb.browser_info.c"
  {
#line 4161 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;

#line 4164 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4166 "mdb.browser_info.c"
    {
#line 4168 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1), ((MR_String) mdb__browser_info__wrapper_arg_2));
    }
#line 4171 "mdb.browser_info.c"
  }
#line 4173 "mdb.browser_info.c"
}

#line 4176 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
#line 4179 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4181 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4183 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_2,
#line 4185 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_3,
#line 4187 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_4)
#line 4189 "mdb.browser_info.c"
{
#line 4191 "mdb.browser_info.c"
  {
#line 4193 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;
#line 4195 "mdb.browser_info.c"
    MR_String mdb__browser_info__conv0_HeadVar__2_2;

#line 4198 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4200 "mdb.browser_info.c"
    {
#line 4202 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1), &mdb__browser_info__conv0_HeadVar__2_2);
    }
#line 4205 "mdb.browser_info.c"
    *mdb__browser_info__wrapper_arg_2 = ((MR_Box) (mdb__browser_info__conv0_HeadVar__2_2));
#line 4207 "mdb.browser_info.c"
  }
#line 4209 "mdb.browser_info.c"
}

#line 4212 "mdb.browser_info.c"
static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
#line 4215 "mdb.browser_info.c"
  MR_Box mdb__browser_info__closure_arg,
#line 4217 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_1,
#line 4219 "mdb.browser_info.c"
  MR_Box mdb__browser_info__wrapper_arg_2,
#line 4221 "mdb.browser_info.c"
  MR_Box * mdb__browser_info__wrapper_arg_3)
#line 4223 "mdb.browser_info.c"
{
#line 4225 "mdb.browser_info.c"
  {
#line 4227 "mdb.browser_info.c"
    MR_Box mdb__browser_info__closure;

#line 4230 "mdb.browser_info.c"
    mdb__browser_info__closure = mdb__browser_info__closure_arg;
#line 4232 "mdb.browser_info.c"
    {
#line 4234 "mdb.browser_info.c"
      mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0(((MR_Word) mdb__browser_info__wrapper_arg_1));
    }
#line 4237 "mdb.browser_info.c"
  }
#line 4239 "mdb.browser_info.c"
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
    if ((mdb__browser_info__HeadVar__1_1 == (MR_Integer) 1))
#line 1054 "browser_info.m"
      {
#line 1054 "browser_info.m"
      }
#line 1051 "browser_info.m"
    else
#line 1052 "browser_info.m"
      {
#line 1052 "browser_info.m"
        mercury__io__flush_output_2_p_0();
#line 1052 "browser_info.m"
        return;
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
#line 4395 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "browser_info.m"
    else
#line 280 "browser_info.m"
      if ((mdb__browser_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 280 "browser_info.m"
        if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 280 "browser_info.m"
          *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "browser_info.m"
        else
#line 280 "browser_info.m"
          if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "browser_info.m"
            *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
          else
#line 280 "browser_info.m"
            if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 280 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
            else
#line 280 "browser_info.m"
              if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4421 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
              else
#line 4425 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
      else
#line 280 "browser_info.m"
        if ((mdb__browser_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "browser_info.m"
          if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 280 "browser_info.m"
            *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
          else
#line 280 "browser_info.m"
            if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "browser_info.m"
            else
#line 280 "browser_info.m"
              if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 280 "browser_info.m"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
              else
#line 280 "browser_info.m"
                if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4451 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                else
#line 4455 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
        else
#line 280 "browser_info.m"
          if ((mdb__browser_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 280 "browser_info.m"
            if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 280 "browser_info.m"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
            else
#line 280 "browser_info.m"
              if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "browser_info.m"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
              else
#line 280 "browser_info.m"
                if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 280 "browser_info.m"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "browser_info.m"
                else
#line 280 "browser_info.m"
                  if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4481 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
                  else
#line 4485 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
          else
#line 280 "browser_info.m"
            if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 280 "browser_info.m"
              {
#line 280 "browser_info.m"
                MR_Integer mdb__browser_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 280 "browser_info.m"
                if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4498 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                else
#line 280 "browser_info.m"
                  if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4504 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                  else
#line 280 "browser_info.m"
                    if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 4510 "mdb.browser_info.c"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                    else
#line 280 "browser_info.m"
                      if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
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
                      else
#line 4532 "mdb.browser_info.c"
                        *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "browser_info.m"
              }
#line 280 "browser_info.m"
            else
#line 280 "browser_info.m"
              {
#line 280 "browser_info.m"
                MR_String mdb__browser_info__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 280 "browser_info.m"
                if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4545 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                else
#line 280 "browser_info.m"
                  if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4551 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                  else
#line 280 "browser_info.m"
                    if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 4557 "mdb.browser_info.c"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                    else
#line 280 "browser_info.m"
                      if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4563 "mdb.browser_info.c"
                        *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "browser_info.m"
                      else
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
      if ((mdb__browser_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
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
      else
#line 280 "browser_info.m"
        if ((mdb__browser_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
        else
#line 280 "browser_info.m"
          if ((mdb__browser_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
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
          else
#line 280 "browser_info.m"
            if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 4676 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_6_6);
#line 280 "browser_info.m"
                  }
#line 280 "browser_info.m"
              }
#line 280 "browser_info.m"
            else
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
#line 4699 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (strcmp(mdb__browser_info__V_3_3, mdb__browser_info__V_4_4) == 0);
#line 280 "browser_info.m"
                  }
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
#line 4753 "mdb.browser_info.c"
  {
#line 4755 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 4758 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 4760 "mdb.browser_info.c"
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
#line 4789 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "browser_info.m"
    else
#line 150 "browser_info.m"
      if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 150 "browser_info.m"
        {
#line 150 "browser_info.m"
          MR_Integer mdb__browser_info__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "browser_info.m"
          if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
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
          else
#line 150 "browser_info.m"
            if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4820 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
            else
#line 150 "browser_info.m"
              if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4826 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
              else
#line 150 "browser_info.m"
                if (((((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4832 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                else
#line 4836 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
        }
#line 150 "browser_info.m"
      else
#line 150 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 150 "browser_info.m"
          {
#line 150 "browser_info.m"
            MR_Integer mdb__browser_info__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "browser_info.m"
            if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4851 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
            else
#line 150 "browser_info.m"
              if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
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
              else
#line 150 "browser_info.m"
                if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4875 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                else
#line 150 "browser_info.m"
                  if (((((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4881 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                  else
#line 4885 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
          }
#line 150 "browser_info.m"
        else
#line 150 "browser_info.m"
          if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 150 "browser_info.m"
            {
#line 150 "browser_info.m"
              MR_Integer mdb__browser_info__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 150 "browser_info.m"
              if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4900 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
              else
#line 150 "browser_info.m"
                if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4906 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                else
#line 150 "browser_info.m"
                  if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
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
                  else
#line 150 "browser_info.m"
                    if (((((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4930 "mdb.browser_info.c"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                    else
#line 4934 "mdb.browser_info.c"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
            }
#line 150 "browser_info.m"
          else
#line 150 "browser_info.m"
            if (((((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 150 "browser_info.m"
              {
#line 150 "browser_info.m"
                MR_Word mdb__browser_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));

#line 150 "browser_info.m"
                if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4949 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                else
#line 150 "browser_info.m"
                  if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4955 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                  else
#line 150 "browser_info.m"
                    if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4961 "mdb.browser_info.c"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                    else
#line 150 "browser_info.m"
                      if (((((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
                      else
#line 4987 "mdb.browser_info.c"
                        *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
              }
#line 150 "browser_info.m"
            else
#line 150 "browser_info.m"
              {
#line 150 "browser_info.m"
                MR_Integer mdb__browser_info__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));

#line 150 "browser_info.m"
                if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5000 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                else
#line 150 "browser_info.m"
                  if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5006 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                  else
#line 150 "browser_info.m"
                    if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5012 "mdb.browser_info.c"
                      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 150 "browser_info.m"
                    else
#line 150 "browser_info.m"
                      if (((((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5018 "mdb.browser_info.c"
                        *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 150 "browser_info.m"
                      else
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
      if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
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
#line 5086 "mdb.browser_info.c"
              mdb__browser_info__succeeded = (mdb__browser_info__V_3_3 == mdb__browser_info__V_4_4);
#line 150 "browser_info.m"
            }
#line 150 "browser_info.m"
        }
#line 150 "browser_info.m"
      else
#line 150 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 5111 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_6_6);
#line 150 "browser_info.m"
              }
#line 150 "browser_info.m"
          }
#line 150 "browser_info.m"
        else
#line 150 "browser_info.m"
          if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 5136 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = (mdb__browser_info__V_7_7 == mdb__browser_info__V_8_8);
#line 150 "browser_info.m"
                }
#line 150 "browser_info.m"
            }
#line 150 "browser_info.m"
          else
#line 150 "browser_info.m"
            if (((((MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
#line 5161 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_11_11 == mdb__browser_info__V_12_12);
#line 150 "browser_info.m"
                  }
#line 150 "browser_info.m"
              }
#line 150 "browser_info.m"
            else
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
#line 5184 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_9_9 == mdb__browser_info__V_10_10);
#line 150 "browser_info.m"
                  }
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
#line 5238 "mdb.browser_info.c"
  {
#line 5240 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 5243 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 5245 "mdb.browser_info.c"
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
#line 5274 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 254 "browser_info.m"
    else
#line 254 "browser_info.m"
      if ((mdb__browser_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "browser_info.m"
        if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "browser_info.m"
          *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 254 "browser_info.m"
        else
#line 254 "browser_info.m"
          if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5288 "mdb.browser_info.c"
            *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
          else
#line 254 "browser_info.m"
            if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5294 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
            else
#line 5298 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
      else
#line 254 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 254 "browser_info.m"
          {
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "browser_info.m"
            MR_Word mdb__browser_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 254 "browser_info.m"
            if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5313 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
            else
#line 254 "browser_info.m"
              if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
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
#line 5333 "mdb.browser_info.c"
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
              else
#line 254 "browser_info.m"
                if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5356 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
                else
#line 5360 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
          }
#line 254 "browser_info.m"
        else
#line 254 "browser_info.m"
          if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 254 "browser_info.m"
            {
#line 254 "browser_info.m"
              MR_Word mdb__browser_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 1)));
#line 254 "browser_info.m"
              MR_Word mdb__browser_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 254 "browser_info.m"
              if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5377 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
              else
#line 254 "browser_info.m"
                if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5383 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
                else
#line 254 "browser_info.m"
                  if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
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
#line 5403 "mdb.browser_info.c"
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
                  else
#line 5424 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
            }
#line 254 "browser_info.m"
          else
#line 254 "browser_info.m"
            {
#line 254 "browser_info.m"
              MR_Integer mdb__browser_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 254 "browser_info.m"
              if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5437 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 254 "browser_info.m"
              else
#line 254 "browser_info.m"
                if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5443 "mdb.browser_info.c"
                  *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
                else
#line 254 "browser_info.m"
                  if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5449 "mdb.browser_info.c"
                    *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 254 "browser_info.m"
                  else
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
      if ((mdb__browser_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      else
#line 254 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 5540 "mdb.browser_info.c"
                mdb__browser_info__TypeInfo_17_17 = (MR_Word) &mdb__browser_info_scalar_common_2[5];
#line 5542 "mdb.browser_info.c"
                {
#line 5544 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_17_17, ((MR_Box) (mdb__browser_info__V_3_3)), ((MR_Box) (mdb__browser_info__V_5_5)));
                }
#line 254 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 5549 "mdb.browser_info.c"
                  {
#line 5551 "mdb.browser_info.c"
                    return mdb__browser_info__succeeded = mdb__browser_info____Unify____setting_0_0(mdb__browser_info__V_4_4, mdb__browser_info__V_6_6);
                  }
#line 254 "browser_info.m"
              }
#line 254 "browser_info.m"
          }
#line 254 "browser_info.m"
        else
#line 254 "browser_info.m"
          if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 5585 "mdb.browser_info.c"
                  mdb__browser_info__TypeInfo_18_18 = (MR_Word) &mdb__browser_info_scalar_common_2[5];
#line 5587 "mdb.browser_info.c"
                  {
#line 5589 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_18_18, ((MR_Box) (mdb__browser_info__V_7_7)), ((MR_Box) (mdb__browser_info__V_9_9)));
                  }
#line 254 "browser_info.m"
                  if (mdb__browser_info__succeeded)
#line 5594 "mdb.browser_info.c"
                    {
#line 5596 "mdb.browser_info.c"
                      return mdb__browser_info__succeeded = mdb__browser_info____Unify____setting_0_0(mdb__browser_info__V_8_8, mdb__browser_info__V_10_10);
                    }
#line 254 "browser_info.m"
                }
#line 254 "browser_info.m"
            }
#line 254 "browser_info.m"
          else
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
#line 5620 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = (mdb__browser_info__V_11_11 == mdb__browser_info__V_12_12);
#line 254 "browser_info.m"
                }
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
#line 5659 "mdb.browser_info.c"
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
#line 5671 "mdb.browser_info.c"
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
#line 5686 "mdb.browser_info.c"
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
#line 5710 "mdb.browser_info.c"
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
#line 5734 "mdb.browser_info.c"
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
#line 5832 "mdb.browser_info.c"
              mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_8_8);
#line 69 "browser_info.m"
              if (mdb__browser_info__succeeded)
#line 69 "browser_info.m"
                {
#line 5838 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = (mdb__browser_info__V_6_6 == mdb__browser_info__V_9_9);
#line 69 "browser_info.m"
                  if (mdb__browser_info__succeeded)
#line 5842 "mdb.browser_info.c"
                    {
#line 5844 "mdb.browser_info.c"
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
#line 5901 "mdb.browser_info.c"
  {
#line 5903 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 5906 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 5908 "mdb.browser_info.c"
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
#line 5937 "mdb.browser_info.c"
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
#line 5967 "mdb.browser_info.c"
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
#line 5987 "mdb.browser_info.c"
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
#line 6007 "mdb.browser_info.c"
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

#line 6080 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_3_3 == mdb__browser_info__V_7_7);
#line 142 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 142 "browser_info.m"
          {
#line 6086 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_4_4 == mdb__browser_info__V_8_8);
#line 142 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 142 "browser_info.m"
              {
#line 6092 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_9_9);
#line 142 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 6096 "mdb.browser_info.c"
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
#line 6135 "mdb.browser_info.c"
      *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 108 "browser_info.m"
    else
#line 108 "browser_info.m"
      if ((mdb__browser_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 108 "browser_info.m"
        if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 108 "browser_info.m"
          *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 0;
#line 108 "browser_info.m"
        else
#line 108 "browser_info.m"
          if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6149 "mdb.browser_info.c"
            *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 108 "browser_info.m"
          else
#line 6153 "mdb.browser_info.c"
            *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 108 "browser_info.m"
      else
#line 108 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 108 "browser_info.m"
          {
#line 108 "browser_info.m"
            MR_String mdb__browser_info__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 108 "browser_info.m"
            if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6166 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 108 "browser_info.m"
            else
#line 108 "browser_info.m"
              if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
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
              else
#line 6188 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 108 "browser_info.m"
          }
#line 108 "browser_info.m"
        else
#line 108 "browser_info.m"
          {
#line 108 "browser_info.m"
            MR_Integer mdb__browser_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)));

#line 108 "browser_info.m"
            if ((mdb__browser_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6201 "mdb.browser_info.c"
              *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 2;
#line 108 "browser_info.m"
            else
#line 108 "browser_info.m"
              if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6207 "mdb.browser_info.c"
                *mdb__browser_info__HeadVar__1_1 = (MR_Integer) 1;
#line 108 "browser_info.m"
              else
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
      if ((mdb__browser_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      else
#line 108 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 6290 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (strcmp(mdb__browser_info__V_7_7, mdb__browser_info__V_8_8) == 0);
#line 108 "browser_info.m"
              }
#line 108 "browser_info.m"
          }
#line 108 "browser_info.m"
        else
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
#line 6313 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_6_6);
#line 108 "browser_info.m"
              }
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
#line 6367 "mdb.browser_info.c"
  {
#line 6369 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 6372 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 6374 "mdb.browser_info.c"
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
#line 6403 "mdb.browser_info.c"
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
#line 6441 "mdb.browser_info.c"
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
#line 6461 "mdb.browser_info.c"
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
#line 6481 "mdb.browser_info.c"
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
#line 6501 "mdb.browser_info.c"
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

#line 6580 "mdb.browser_info.c"
        mdb__browser_info__succeeded = (mdb__browser_info__V_3_3 == mdb__browser_info__V_8_8);
#line 571 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
          {
#line 6586 "mdb.browser_info.c"
            {
#line 6588 "mdb.browser_info.c"
              mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_4_4, mdb__browser_info__V_9_9);
            }
#line 571 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
              {
#line 6595 "mdb.browser_info.c"
                {
#line 6597 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_5_5, mdb__browser_info__V_10_10);
                }
#line 571 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                  {
#line 6604 "mdb.browser_info.c"
                    {
#line 6606 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_6_6, mdb__browser_info__V_11_11);
                    }
#line 571 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 6611 "mdb.browser_info.c"
                      {
#line 6613 "mdb.browser_info.c"
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
#line 6672 "mdb.browser_info.c"
  {
#line 6674 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 6677 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 6679 "mdb.browser_info.c"
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
#line 6708 "mdb.browser_info.c"
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
#line 6746 "mdb.browser_info.c"
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
#line 6766 "mdb.browser_info.c"
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
#line 6786 "mdb.browser_info.c"
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
#line 6806 "mdb.browser_info.c"
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
#line 6826 "mdb.browser_info.c"
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

#line 6962 "mdb.browser_info.c"
            mdb__browser_info__succeeded = (mdb__browser_info__V_19_19 == mdb__browser_info__V_24_24);
#line 571 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
              {
#line 6968 "mdb.browser_info.c"
                {
#line 6970 "mdb.browser_info.c"
                  mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_20_20, mdb__browser_info__V_25_25);
                }
#line 571 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                  {
#line 6977 "mdb.browser_info.c"
                    {
#line 6979 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_21_21, mdb__browser_info__V_26_26);
                    }
#line 571 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                      {
#line 6986 "mdb.browser_info.c"
                        {
#line 6988 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_22_22, mdb__browser_info__V_27_27);
                        }
#line 571 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 6993 "mdb.browser_info.c"
                          {
#line 6995 "mdb.browser_info.c"
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

#line 7045 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_31_31 == mdb__browser_info__V_36_36);
#line 571 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                  {
#line 7051 "mdb.browser_info.c"
                    {
#line 7053 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_32_32, mdb__browser_info__V_37_37);
                    }
#line 571 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                      {
#line 7060 "mdb.browser_info.c"
                        {
#line 7062 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_33_33, mdb__browser_info__V_38_38);
                        }
#line 571 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                          {
#line 7069 "mdb.browser_info.c"
                            {
#line 7071 "mdb.browser_info.c"
                              mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_34_34, mdb__browser_info__V_39_39);
                            }
#line 571 "browser_info.m"
                            if (mdb__browser_info__succeeded)
#line 7076 "mdb.browser_info.c"
                              {
#line 7078 "mdb.browser_info.c"
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

#line 7128 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_43_43 == mdb__browser_info__V_48_48);
#line 571 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                      {
#line 7134 "mdb.browser_info.c"
                        {
#line 7136 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_44_44, mdb__browser_info__V_49_49);
                        }
#line 571 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                          {
#line 7143 "mdb.browser_info.c"
                            {
#line 7145 "mdb.browser_info.c"
                              mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_45_45, mdb__browser_info__V_50_50);
                            }
#line 571 "browser_info.m"
                            if (mdb__browser_info__succeeded)
#line 571 "browser_info.m"
                              {
#line 7152 "mdb.browser_info.c"
                                {
#line 7154 "mdb.browser_info.c"
                                  mdb__browser_info__succeeded = mdb__browser_info____Unify____format_params_0_0(mdb__browser_info__V_46_46, mdb__browser_info__V_51_51);
                                }
#line 571 "browser_info.m"
                                if (mdb__browser_info__succeeded)
#line 7159 "mdb.browser_info.c"
                                  {
#line 7161 "mdb.browser_info.c"
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
#line 7176 "mdb.browser_info.c"
                    mdb__browser_info__succeeded = (mdb__browser_info__V_6_6 == mdb__browser_info__V_12_12);
#line 555 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 555 "browser_info.m"
                      {
#line 7182 "mdb.browser_info.c"
                        mdb__browser_info__TypeInfo_17_17 = (MR_Word) &mdb__browser_info_scalar_common_2[4];
#line 7184 "mdb.browser_info.c"
                        {
#line 7186 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_17_17, ((MR_Box) (mdb__browser_info__V_7_7)), ((MR_Box) (mdb__browser_info__V_13_13)));
                        }
#line 555 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 555 "browser_info.m"
                          {
#line 7193 "mdb.browser_info.c"
                            mdb__browser_info__TypeInfo_18_18 = (MR_Word) &mdb__browser_info_scalar_common_2[4];
#line 7195 "mdb.browser_info.c"
                            {
#line 7197 "mdb.browser_info.c"
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
#line 7305 "mdb.browser_info.c"
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
#line 7347 "mdb.browser_info.c"
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
#line 7367 "mdb.browser_info.c"
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
#line 7391 "mdb.browser_info.c"
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
#line 7411 "mdb.browser_info.c"
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
#line 7431 "mdb.browser_info.c"
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
#line 7451 "mdb.browser_info.c"
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

#line 7554 "mdb.browser_info.c"
        {
#line 7556 "mdb.browser_info.c"
          mdb__browser_info__succeeded = mdb__browser_term____Unify____browser_term_0_0(mdb__browser_info__V_3_3, mdb__browser_info__V_10_10);
        }
#line 39 "browser_info.m"
        if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
          {
#line 7563 "mdb.browser_info.c"
            mdb__browser_info__TypeInfo_20_20 = (MR_Word) &mdb__browser_info_scalar_common_2[0];
#line 7565 "mdb.browser_info.c"
            {
#line 7567 "mdb.browser_info.c"
              mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_20_20, ((MR_Box) (mdb__browser_info__V_4_4)), ((MR_Box) (mdb__browser_info__V_11_11)));
            }
#line 39 "browser_info.m"
            if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
              {
#line 7574 "mdb.browser_info.c"
                mdb__browser_info__succeeded = (mdb__browser_info__V_5_5 == mdb__browser_info__V_12_12);
#line 39 "browser_info.m"
                if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                  {
#line 7580 "mdb.browser_info.c"
                    mdb__browser_info__TypeInfo_21_21 = (MR_Word) &mdb__browser_info_scalar_common_2[1];
#line 7582 "mdb.browser_info.c"
                    {
#line 7584 "mdb.browser_info.c"
                      mdb__browser_info__succeeded = mercury__builtin__unify_2_p_0(mdb__browser_info__TypeInfo_21_21, ((MR_Box) (mdb__browser_info__V_6_6)), ((MR_Box) (mdb__browser_info__V_13_13)));
                    }
#line 39 "browser_info.m"
                    if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                      {
#line 7591 "mdb.browser_info.c"
                        {
#line 7593 "mdb.browser_info.c"
                          mdb__browser_info__succeeded = mdb__browser_info____Unify____browser_persistent_state_0_0(mdb__browser_info__V_7_7, mdb__browser_info__V_14_14);
                        }
#line 39 "browser_info.m"
                        if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                          {
#line 7600 "mdb.browser_info.c"
                            mdb__browser_info__TypeInfo_22_22 = (MR_Word) &mdb__browser_info_scalar_common_2[0];
#line 7602 "mdb.browser_info.c"
                            {
#line 7604 "mdb.browser_info.c"
                              mdb__browser_info__succeeded = mdb__browser_info____Unify____maybe_track_subterm_1_0(mdb__browser_info__TypeInfo_22_22, mdb__browser_info__V_8_8, mdb__browser_info__V_15_15);
                            }
#line 39 "browser_info.m"
                            if (mdb__browser_info__succeeded)
#line 39 "browser_info.m"
                              {
#line 7611 "mdb.browser_info.c"
                                mdb__browser_info__TypeInfo_23_23 = (MR_Word) &mdb__browser_info_scalar_common_2[3];
#line 7613 "mdb.browser_info.c"
                                {
#line 7615 "mdb.browser_info.c"
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
#line 7663 "mdb.browser_info.c"
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

#line 7721 "mdb.browser_info.c"
        {
#line 7723 "mdb.browser_info.c"
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
#line 7776 "mdb.browser_info.c"
  {
#line 7778 "mdb.browser_info.c"
    MR_bool mdb__browser_info__succeeded = (mdb__browser_info__HeadVar__2_1 == mdb__browser_info__HeadVar__2_2);

#line 7781 "mdb.browser_info.c"
    return mdb__browser_info__succeeded;
#line 7783 "mdb.browser_info.c"
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
    MR_String mdb__browser_info__V_10_10;
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
    MR_Integer mdb__browser_info__Depth_28;
#line 1161 "browser_info.m"
    MR_Integer mdb__browser_info__Size_29;
#line 1161 "browser_info.m"
    MR_Integer mdb__browser_info__Width_30;
#line 1161 "browser_info.m"
    MR_Integer mdb__browser_info__Lines_31;
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

#line 1188 "browser_info.m"
    if ((mdb__browser_info__Format_3 == (MR_Integer) 0))
#line 1188 "browser_info.m"
      mdb__browser_info__V_10_10 = (MR_String) "flat";
#line 1188 "browser_info.m"
    else
#line 1188 "browser_info.m"
      if ((mdb__browser_info__Format_3 == (MR_Integer) 3))
#line 1191 "browser_info.m"
        mdb__browser_info__V_10_10 = (MR_String) "pretty";
#line 1188 "browser_info.m"
      else
#line 1188 "browser_info.m"
        if ((mdb__browser_info__Format_3 == (MR_Integer) 1))
#line 1189 "browser_info.m"
          mdb__browser_info__V_10_10 = (MR_String) "raw_pretty";
#line 1188 "browser_info.m"
        else
#line 1190 "browser_info.m"
          mdb__browser_info__V_10_10 = (MR_String) "verbose";
#line 1180 "browser_info.m"
    mdb__browser_info__Depth_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 0)));
#line 1180 "browser_info.m"
    mdb__browser_info__Size_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 1)));
#line 1180 "browser_info.m"
    mdb__browser_info__Width_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 2)));
#line 1180 "browser_info.m"
    mdb__browser_info__Lines_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__browser_info__FlatParams_4, (MR_Integer) 3)));
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
    MR_String mdb__browser_info__V_18_18;
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

#line 1188 "browser_info.m"
    if ((mdb__browser_info__Format_7 == (MR_Integer) 0))
#line 1188 "browser_info.m"
      mdb__browser_info__V_18_18 = (MR_String) "flat";
#line 1188 "browser_info.m"
    else
#line 1188 "browser_info.m"
      if ((mdb__browser_info__Format_7 == (MR_Integer) 3))
#line 1191 "browser_info.m"
        mdb__browser_info__V_18_18 = (MR_String) "pretty";
#line 1188 "browser_info.m"
      else
#line 1188 "browser_info.m"
        if ((mdb__browser_info__Format_7 == (MR_Integer) 1))
#line 1189 "browser_info.m"
          mdb__browser_info__V_18_18 = (MR_String) "raw_pretty";
#line 1188 "browser_info.m"
        else
#line 1190 "browser_info.m"
          mdb__browser_info__V_18_18 = (MR_String) "verbose";
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
              if ((mdb__browser_info__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
              else
#line 1013 "browser_info.m"
                if (((MR_tag((MR_Word) mdb__browser_info__V_52_52)) == (MR_mktag((MR_Integer) 2))))
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
                else
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
#line 1007 "browser_info.m"
            else
#line 1027 "browser_info.m"
              if ((mdb__browser_info__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
              else
#line 1027 "browser_info.m"
                if (((MR_tag((MR_Word) mdb__browser_info__V_52_52)) == (MR_mktag((MR_Integer) 2))))
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
                else
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
        if ((mdb__browser_info__Caller_9 == (MR_Integer) 1))
#line 818 "browser_info.m"
          mdb__browser_info__Params_70 = mdb__browser_info__V_110_110;
#line 817 "browser_info.m"
        else
#line 817 "browser_info.m"
          if ((mdb__browser_info__Caller_9 == (MR_Integer) 0))
#line 817 "browser_info.m"
            mdb__browser_info__Params_70 = mdb__browser_info__V_111_111;
#line 817 "browser_info.m"
          else
#line 819 "browser_info.m"
            mdb__browser_info__Params_70 = mdb__browser_info__V_109_109;
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
    if ((mdb__browser_info__HeadVar__1_1 == (MR_Integer) 0))
#line 806 "browser_info.m"
      *mdb__browser_info__HeadVar__4_4 = mdb__browser_info__Params_3;
#line 806 "browser_info.m"
    else
#line 806 "browser_info.m"
      if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
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
      else
#line 806 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
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
        else
#line 806 "browser_info.m"
          if (((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
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
          else
#line 806 "browser_info.m"
            if (((((MR_tag((MR_Word) mdb__browser_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
            else
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
    if ((mdb__browser_info__HeadVar__1_1 == (MR_Integer) 0))
#line 779 "browser_info.m"
      *mdb__browser_info__STATE_VARIABLE_Params_8 = mdb__browser_info__STATE_VARIABLE_Params_0_7;
#line 779 "browser_info.m"
    else
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
        if (((((MR_tag((MR_Word) mdb__browser_info__Setting_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__browser_info__Setting_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
        else
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
#line 780 "browser_info.m"
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
    if ((mdb__browser_info__MDBCommandFormat_5 == (MR_Integer) 0))
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
    else
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
          if ((mdb__browser_info__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
          else
#line 993 "browser_info.m"
            if (((MR_tag((MR_Word) mdb__browser_info__V_39_39)) == (MR_mktag((MR_Integer) 2))))
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
            else
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
    if ((mdb__browser_info__HeadVar__1_1 == (MR_Integer) 1))
#line 976 "browser_info.m"
      if ((mdb__browser_info__X_2 == (MR_Integer) 0))
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
      else
#line 976 "browser_info.m"
        if ((mdb__browser_info__X_2 == (MR_Integer) 3))
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
        else
#line 976 "browser_info.m"
          if ((mdb__browser_info__X_2 == (MR_Integer) 1))
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
          else
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
#line 970 "browser_info.m"
    else
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
    if ((mdb__browser_info__HeadVar__1_1 == (MR_Integer) 1))
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
    else
#line 966 "browser_info.m"
      {
#line 966 "browser_info.m"
        mercury__io__write_int_3_p_0(mdb__browser_info__Int_2);
#line 966 "browser_info.m"
        return;
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
    if ((mdb__browser_info__HeadVar__1_1 == (MR_Integer) 1))
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
    else
#line 961 "browser_info.m"
      {
#line 961 "browser_info.m"
        mercury__io__write_string_3_p_0(mdb__browser_info__String_2);
#line 961 "browser_info.m"
        return;
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
    if ((mdb__browser_info__HeadVar__1_1 == (MR_Integer) 1))
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
    else
#line 956 "browser_info.m"
      {
#line 956 "browser_info.m"
        mercury__io__nl_2_p_0();
#line 956 "browser_info.m"
        return;
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
    if ((mdb__browser_info__ShowPath_7 == (MR_Integer) 0))
#line 889 "browser_info.m"
      {
#line 889 "browser_info.m"
      }
#line 888 "browser_info.m"
    else
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
    if ((mdb__browser_info__ParamCmd_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
    else
#line 836 "browser_info.m"
      if (((MR_tag((MR_Word) mdb__browser_info__ParamCmd_9)) == (MR_mktag((MR_Integer) 1))))
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
      else
#line 836 "browser_info.m"
        if (((MR_tag((MR_Word) mdb__browser_info__ParamCmd_9)) == (MR_mktag((MR_Integer) 2))))
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
        else
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
      if ((mdb__browser_info__FromBrowser_10 == (MR_Integer) 0))
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
      else
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
    else
#line 723 "browser_info.m"
      {
#line 723 "browser_info.m"
        MR_Word mdb__browser_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__browser_info__MaybeCallerType_11, (MR_Integer) 0)));

#line 723 "browser_info.m"
        if ((mdb__browser_info__V_30_30 == (MR_Integer) 1))
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
        else
#line 723 "browser_info.m"
          if ((mdb__browser_info__V_30_30 == (MR_Integer) 0))
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
          else
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
      if ((mdb__browser_info__CallerType_12 == (MR_Integer) 1))
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
      else
#line 723 "browser_info.m"
        if ((mdb__browser_info__CallerType_12 == (MR_Integer) 0))
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
        else
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
    if ((mdb__browser_info__FromBrowser_12 == (MR_Integer) 0))
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
    else
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
    if ((mdb__browser_info__Caller_6 == (MR_Integer) 1))
#line 818 "browser_info.m"
      mdb__browser_info__CallerParams_9 = mdb__browser_info__V_39_39;
#line 817 "browser_info.m"
    else
#line 817 "browser_info.m"
      if ((mdb__browser_info__Caller_6 == (MR_Integer) 0))
#line 817 "browser_info.m"
        mdb__browser_info__CallerParams_9 = mdb__browser_info__V_40_40;
#line 817 "browser_info.m"
      else
#line 819 "browser_info.m"
        mdb__browser_info__CallerParams_9 = mdb__browser_info__V_38_38;
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
    if ((mdb__browser_info__Format_7 == (MR_Integer) 0))
#line 824 "browser_info.m"
      *mdb__browser_info__Params_8 = mdb__browser_info__V_64_64;
#line 824 "browser_info.m"
    else
#line 824 "browser_info.m"
      if ((mdb__browser_info__Format_7 == (MR_Integer) 3))
#line 827 "browser_info.m"
        *mdb__browser_info__Params_8 = mdb__browser_info__V_61_61;
#line 824 "browser_info.m"
      else
#line 824 "browser_info.m"
        if ((mdb__browser_info__Format_7 == (MR_Integer) 1))
#line 825 "browser_info.m"
          *mdb__browser_info__Params_8 = mdb__browser_info__V_63_63;
#line 824 "browser_info.m"
        else
#line 826 "browser_info.m"
          *mdb__browser_info__Params_8 = mdb__browser_info__V_62_62;
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
            if ((mdb__browser_info__Caller_6 == (MR_Integer) 1))
#line 818 "browser_info.m"
              mdb__browser_info__Params_10 = mdb__browser_info__V_50_50;
#line 817 "browser_info.m"
            else
#line 817 "browser_info.m"
              if ((mdb__browser_info__Caller_6 == (MR_Integer) 0))
#line 817 "browser_info.m"
                mdb__browser_info__Params_10 = mdb__browser_info__V_51_51;
#line 817 "browser_info.m"
              else
#line 819 "browser_info.m"
                mdb__browser_info__Params_10 = mdb__browser_info__V_49_49;
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
